import http.server
import socketserver

PORT = 8000

Handler = http.server.SimpleHTTPRequestHandler

with socketserver.TCPServer(
    ("", PORT), Handler
) as httpd:

    print("웹 서버 실행 중!")
    print("http://localhost:8000/index.html")

    httpd.serve_forever()