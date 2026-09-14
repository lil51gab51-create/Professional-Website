export default function Hero() {
  return (
    <section id="hero" className="hero min-h-screen">
        <div className="hero-content flex-col lg:flex-row-reverse gap-8 text-center lg:text-left">
            <img
            src="/Headshot from IT day (career fair).jpg"
            alt="headshot"
            className="max-w-sm rounded-full shadow-2xl"
    />
     <div>
        <p className="text-pink-625 font-semibold">Hi,</p>
        <h1 className="text-5xl font-bold lg:text-6xl py-2">

            Welcome to my website! </h1>
            <p className="py-4 text-lg">
            I'm excited to show you some cool stuff I've done.
            </p>
            <a href="#projects" className="btn btn-blue-525 text-blue">
            View some of my projects!
            </a>
       </div>
    </div>

   
       

       </section>
  
  );

}
