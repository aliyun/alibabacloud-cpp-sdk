// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWEBTERMINALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWEBTERMINALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetWebTerminalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWebTerminalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebTerminalUrl, webTerminalUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetWebTerminalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebTerminalUrl, webTerminalUrl_);
    };
    GetWebTerminalResponseBody() = default ;
    GetWebTerminalResponseBody(const GetWebTerminalResponseBody &) = default ;
    GetWebTerminalResponseBody(GetWebTerminalResponseBody &&) = default ;
    GetWebTerminalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWebTerminalResponseBody() = default ;
    GetWebTerminalResponseBody& operator=(const GetWebTerminalResponseBody &) = default ;
    GetWebTerminalResponseBody& operator=(GetWebTerminalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->webTerminalUrl_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWebTerminalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webTerminalUrl Field Functions 
    bool hasWebTerminalUrl() const { return this->webTerminalUrl_ != nullptr;};
    void deleteWebTerminalUrl() { this->webTerminalUrl_ = nullptr;};
    inline string getWebTerminalUrl() const { DARABONBA_PTR_GET_DEFAULT(webTerminalUrl_, "") };
    inline GetWebTerminalResponseBody& setWebTerminalUrl(string webTerminalUrl) { DARABONBA_PTR_SET_VALUE(webTerminalUrl_, webTerminalUrl) };


  protected:
    // The request ID for this call, used for diagnostics and troubleshooting.
    shared_ptr<string> requestId_ {};
    // The WebSocket link for accessing the container. You need to build a WebSocket client. For the detailed communication format, refer to the following code:
    //   ```
    //   ws = new WebSocket(
    //     `wss://xxxxx`,
    //   );
    //   ws.onopen = function open() {
    //     console.warn(\\"connected\\");
    //     term.write(\\"\\");
    //   };
    // 
    //   ws.onclose = function close() {
    //     console.warn(\\"disconnected\\");
    //     term.write(\\"Connection closed\\");
    //   };
    // 
    //   // Receive response from the backend
    //   ws.onmessage = function incoming(event) {
    //     const msg = JSON.parse(event.data);
    //     console.warn(msg);
    //     if (msg.operation === \\"stdout\\") {
    //       term.write(msg.data);
    //     } else {
    //       console.warn(\\"invalid msg operation: \\" + msg);
    //     }
    //   };
    // 
    //   // Console input
    //   term.onData(data => {
    //     const msg = { operation: \\"stdin\\", data: data };
    //     ws.send(JSON.stringify(msg));
    //   });
    // 
    //   term.onResize(size => {
    //     const msg = { operation: \\"resize\\", cols: size.cols, rows: size.rows };
    //     ws.send(JSON.stringify(msg));
    //   });
    // 
    //   fitAddon.fit();
    // };
    // ```
    shared_ptr<string> webTerminalUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
