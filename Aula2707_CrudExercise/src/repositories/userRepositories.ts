import {Request, response, Response} from 'express';
import bcrypt from 'bcrypt';
import {users, User} from '../models/userModels';
import jwt from 'jsonwebtoken';
import {randomUUID} from 'crypto';
import dotenv from 'dotenv';

dotenv.config();

export const createUser = async(req:Request, res:Response) => {
    const{name, email,password} = req.body;

    if(!name || !email || !password){
        return res.status(400).json({message: 'Todos os campos são obrigatório'});
    }

    const hash = await bcrypt.hash(password, 10);

    const newUser: User = {
        id: randomUUID(),
        name,
        email,
        password:hash,
        deleted:false,
    };
    users.push(newUser);
    res.status(201).json(newUser);
}

export const getUsers = (req: Request, res: Response) => {
    const showdeleted = req.query.showdeleted === 'true';
    const filteredUsers = showdeleted ? users : users.filter(u => !u.deleted);
    res.json(filteredUsers);
};

export const getUsersById = (req: Request, res: Response) => {
    const id = String(req.params.id);
    const user = users.find(u => u.id === id && !u.deleted);
    if (!user) return res.status(404).json({ message: 'User not found' });
  res.json(user);
}

export const updateUser = (req: Request, res: Response) => {
    const id = String(req.params.id);
    const index = users.findIndex(u => u.id === id && !u.deleted);
    if (index === -1) return res.status(404).json({ message: 'User not found' });

    const updated = { ...users[index], ...req.body };
    users[index] = updated;
    res.json(updated);
}

export const deleteUser = (req: Request, res: Response) => {
  const id = String(req.params.id);
  const user = users.find(u => u.id === id);
  if (!user) return res.status(404).json({ message: 'User not found' });

  user.deleted = true;
  res.json({ message: 'User deleted' });
};

export const login = async (req: Request, res: Response) => {
  const { email, password } = req.body;

  if (!email || !password)
    return res.status(400).json({ message: 'Email e senha obrigatórios' });

  const user = users.find(u => u.email === email && !u.deleted);
  if (!user)
    return res.status(404).json({ message: 'Usuário não encontrado ou deletado' });

  const isPasswordValid = await bcrypt.compare(password, user.password);
  if (!isPasswordValid)
    return res.status(401).json({ message: 'Senha incorreta' });

  const token = jwt.sign(
    { id: user.id, email:user.email },
    process.env.JWT_SECRET as string,
    { expiresIn:'1h' }
  );

  res.json({ token });
};