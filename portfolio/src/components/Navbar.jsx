export default function Navbar() {
    return (
        <div className="navbar bg-purple-900 text-white fixed top-0 z-10">
            <div className= "flex-1">
                <a className="text-white font-bold">
                    Programs</a>
                </div>
        
         
        <div className="flex-none">
                <li><a href="#hero">Home</a></li>
                <li><a>Physical Projects</a></li>
                <li>
                    <details>
                        <summary className="list-none cursor-pointer">
                            Code & Circuit Schematics
                            </summary>
                    <ul>
                        <li><a href="/cpp"> C++ Projects</a></li>
                        <li><a href="circuits"> Circuit Schematics</a></li>
                        <li><a href="Matlab"> Matlab Projects</a></li>
                        <li><a href="Java"> Java Projects</a></li>
                    </ul>
                    </details>
                </li>
    </div>
</div>
)
}

