import express from "express";
import helloRoutes from "./routes/hello";
import dotenv from 'dotenv';

const app = express();
const PORT = 3000;

dotenv.config();

app.use(express.json());

app.use("/hello", helloRoutes);

app.listen(PORT, () => {
  console.log(`🚀 Servidor rodando na porta ${PORT}`);
});
