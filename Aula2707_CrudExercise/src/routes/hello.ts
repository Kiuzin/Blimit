import { Request, Response, Router } from "express";
import {
  createUser,
  getUsers,
  getUsersById,
  updateUser,
  deleteUser,
} from '../repositories/userRepositories';

const router = Router()

router.get("/", (req: Request, res: Response) =>{
  res.send(getUsersById)
})

router.post("/", (req: Request, res:Response) => {createUser});
router.get('/', (req: Request, res: Response) => {getUsers});
router.put('/', (req: Request, res: Response) => {updateUser});
router.delete('/', (req: Request, res: Response) => {deleteUser});

export default router