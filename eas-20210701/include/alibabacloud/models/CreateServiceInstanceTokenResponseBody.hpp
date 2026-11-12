// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEINSTANCETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEINSTANCETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceInstanceTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceInstanceTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamlogUrl, streamlogUrl_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(WorkbenchUrl, workbenchUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceInstanceTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamlogUrl, streamlogUrl_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(WorkbenchUrl, workbenchUrl_);
    };
    CreateServiceInstanceTokenResponseBody() = default ;
    CreateServiceInstanceTokenResponseBody(const CreateServiceInstanceTokenResponseBody &) = default ;
    CreateServiceInstanceTokenResponseBody(CreateServiceInstanceTokenResponseBody &&) = default ;
    CreateServiceInstanceTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceInstanceTokenResponseBody() = default ;
    CreateServiceInstanceTokenResponseBody& operator=(const CreateServiceInstanceTokenResponseBody &) = default ;
    CreateServiceInstanceTokenResponseBody& operator=(CreateServiceInstanceTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->streamlogUrl_ == nullptr && this->token_ == nullptr && this->url_ == nullptr && this->workbenchUrl_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateServiceInstanceTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamlogUrl Field Functions 
    bool hasStreamlogUrl() const { return this->streamlogUrl_ != nullptr;};
    void deleteStreamlogUrl() { this->streamlogUrl_ = nullptr;};
    inline string getStreamlogUrl() const { DARABONBA_PTR_GET_DEFAULT(streamlogUrl_, "") };
    inline CreateServiceInstanceTokenResponseBody& setStreamlogUrl(string streamlogUrl) { DARABONBA_PTR_SET_VALUE(streamlogUrl_, streamlogUrl) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateServiceInstanceTokenResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateServiceInstanceTokenResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // workbenchUrl Field Functions 
    bool hasWorkbenchUrl() const { return this->workbenchUrl_ != nullptr;};
    void deleteWorkbenchUrl() { this->workbenchUrl_ = nullptr;};
    inline string getWorkbenchUrl() const { DARABONBA_PTR_GET_DEFAULT(workbenchUrl_, "") };
    inline CreateServiceInstanceTokenResponseBody& setWorkbenchUrl(string workbenchUrl) { DARABONBA_PTR_SET_VALUE(workbenchUrl_, workbenchUrl) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // This parameter is not used.
    shared_ptr<string> streamlogUrl_ {};
    // The authentication token.
    shared_ptr<string> token_ {};
    // The WebSocket URL.
    shared_ptr<string> url_ {};
    // The URL used to log on to the container through Workbench. After you log on to the service instance, the returned messages use the WebSocket text message format. The message content is Base64-encoded. Refer to the following script for processing.
    // 
    // ```python
    // #!/usr/bin/env python3
    // """macOS/Linux: python webshell_minimal.py \\"wss://...\\"; Ctrl+] disconnects."""
    // import argparse
    // import base64
    // import codecs
    // import getpass
    // import json
    // import os
    // import select
    // import shutil
    // import sys
    // import termios
    // import threading
    // import tty
    // 
    // import websocket
    // 
    // 
    // def main():
    //     parser = argparse.ArgumentParser(description=__doc__)
    //     parser.add_argument(\\"url\\", help=\\"Url from CreateServiceInstanceToken(ActionType=WebShell)\\")
    //     args = parser.parse_args()
    //     if not sys.stdin.isatty():
    //         parser.error(\\"Run from an interactive macOS/Linux terminal\\")
    //     token = os.environ.get(\\"WEBSHELL_TOKEN\\") or getpass.getpass(\\"Token: \\")
    //     ws = websocket.create_connection(args.url, header={\\"Authorization\\": \\"Bearer \\" + token.strip()},
    //                                      subprotocols=[\\"webtty\\"], timeout=10)
    //     ws.settimeout(None)
    //     stopped = threading.Event()
    // 
    //     def receive():
    //         try:
    //             while not stopped.is_set():
    //                 message = ws.recv()  # websocket-client automatically replies to control Ping frames.
    //                 if not message:
    //                     break
    //                 if isinstance(message, str) and message[0] == \\"1\\":
    //                     sys.stdout.buffer.write(base64.b64decode(message[1:], validate=True))
    //                     sys.stdout.buffer.flush()  # Preserve terminal escape sequences and UTF-8 bytes.
    //                 # \\"2\\" is webtty Pong; other types need no handling in this terminal client.
    //         except (websocket.WebSocketException, OSError, ValueError):
    //             pass
    //         finally:
    //             stopped.set()
    // 
    //     fd = sys.stdin.fileno()
    //     previous = termios.tcgetattr(fd)
    //     decoder = codecs.getincrementaldecoder(\\"utf-8\\")()
    //     print(\\"Connected. Ctrl+] disconnects; Ctrl+C is sent to the remote shell.\\", flush=True)
    //     reader = threading.Thread(target=receive, daemon=True)
    //     try:
    //         tty.setraw(fd)
    //         reader.start()
    //         size = None
    //         while not stopped.is_set():
    //             current = shutil.get_terminal_size((80, 24))
    //             if current != size:
    //                 ws.send(\\"3\\" + json.dumps({\\"columns\\": current.columns, \\"rows\\": current.lines}))
    //                 size = current
    //             if select.select([fd], [], [], 0.2)[0]:
    //                 data = os.read(fd, 4096)
    //                 if not data or b\\"\\x1d\\" in data:  # Ctrl+]
    //                     break
    //                 text = decoder.decode(data)  # Do not split a UTF-8 character across Text messages.
    //                 if text:
    //                     ws.send(\\"1\\" + text)  # Raw input, NOT base64 and NOT a JSON wrapper.
    //     finally:
    //         termios.tcsetattr(fd, termios.TCSADRAIN, previous)
    //         stopped.set()
    //         try:
    //             ws.send_close()
    //         except (websocket.WebSocketException, OSError):
    //             pass
    //         ws.shutdown()
    //         if reader.ident is not None:
    //             reader.join(timeout=1)
    //         print(\\"
    // Disconnected.\\", flush=True)
    // 
    // 
    // if __name__ == \\"__main__\\":
    //     try:
    //         main()
    //     except websocket.WebSocketBadStatusException as exc:
    //         sys.exit(f\\"WebSocket handshake failed: HTTP {exc.status_code}\\")
    //     except (websocket.WebSocketException, OSError, UnicodeError, KeyboardInterrupt) as exc:
    //         sys.exit(f\\"WebShell stopped: {type(exc).__name__}\\")
    // 
    // ```
    shared_ptr<string> workbenchUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
