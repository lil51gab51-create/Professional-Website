import Hero from './components/Hero'
import Navbar from './components/Navbar'
import About from './components/About'
import CppProjects from'./components/CppProjects'
import {Routes, Route } from 'react-router-dom'

export default function App() {
  return (
    <div>
      <Navbar />
      <Routes>
        <Route path="/" element={
          <>
            <Hero />
            <About />
          </>
        }/>
        <Route path="/cpp" element={<CppProjects />} />
      </Routes>

    </div>
  )
}
