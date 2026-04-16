
import {mkdir, writeFile} from 'fs/promises'
import path from 'path'
const foldercreatewithfile = async(foldername,filename,content)=>{
try {
  await mkdir(foldername)
  await path.join(foldername,filename);
  await writeFile(filename,content); 
  console.log("file created successfully");
} catch (error) {
    console.error("Any issue");
}
}
