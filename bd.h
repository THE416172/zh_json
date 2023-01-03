
        app.post('/cors',(req,res) => {
        if(req.headers.origin){
            res.writeHead(200,{
            "Content-Type": "text/html; charset=UTF-8",
            "Access-Control-Allow-Origin":'http://namerena.github.io/'
            });
            let people = {
            type : 'cors',
            name : 'weapon-x'
            }
            res.end(JSON.stringify(people));
        }
        })
