// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATHEADERS_HPP_
#define ALIBABACLOUD_MODELS_CHATHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BChat20261105
{
namespace Models
{
  class ChatHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(Accept, accept_);
      DARABONBA_PTR_TO_JSON(X-DashScope-SSE, xDashScopeSSE_);
      DARABONBA_PTR_TO_JSON(X-GW-Access, xGWAccess_);
      DARABONBA_PTR_TO_JSON(X-GW-Nonce, xGWNonce_);
      DARABONBA_PTR_TO_JSON(X-GW-Protocol, xGWProtocol_);
      DARABONBA_PTR_TO_JSON(X-GW-Signature, xGWSignature_);
      DARABONBA_PTR_TO_JSON(X-GW-Timestamp, xGWTimestamp_);
      DARABONBA_PTR_TO_JSON(X-Request-Id, xRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, ChatHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(Accept, accept_);
      DARABONBA_PTR_FROM_JSON(X-DashScope-SSE, xDashScopeSSE_);
      DARABONBA_PTR_FROM_JSON(X-GW-Access, xGWAccess_);
      DARABONBA_PTR_FROM_JSON(X-GW-Nonce, xGWNonce_);
      DARABONBA_PTR_FROM_JSON(X-GW-Protocol, xGWProtocol_);
      DARABONBA_PTR_FROM_JSON(X-GW-Signature, xGWSignature_);
      DARABONBA_PTR_FROM_JSON(X-GW-Timestamp, xGWTimestamp_);
      DARABONBA_PTR_FROM_JSON(X-Request-Id, xRequestId_);
    };
    ChatHeaders() = default ;
    ChatHeaders(const ChatHeaders &) = default ;
    ChatHeaders(ChatHeaders &&) = default ;
    ChatHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatHeaders() = default ;
    ChatHeaders& operator=(const ChatHeaders &) = default ;
    ChatHeaders& operator=(ChatHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->accept_ == nullptr && this->xDashScopeSSE_ == nullptr && this->xGWAccess_ == nullptr && this->xGWNonce_ == nullptr && this->xGWProtocol_ == nullptr
        && this->xGWSignature_ == nullptr && this->xGWTimestamp_ == nullptr && this->xRequestId_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline ChatHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline ChatHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accept Field Functions 
    bool hasAccept() const { return this->accept_ != nullptr;};
    void deleteAccept() { this->accept_ = nullptr;};
    inline string getAccept() const { DARABONBA_PTR_GET_DEFAULT(accept_, "") };
    inline ChatHeaders& setAccept(string accept) { DARABONBA_PTR_SET_VALUE(accept_, accept) };


    // xDashScopeSSE Field Functions 
    bool hasXDashScopeSSE() const { return this->xDashScopeSSE_ != nullptr;};
    void deleteXDashScopeSSE() { this->xDashScopeSSE_ = nullptr;};
    inline string getXDashScopeSSE() const { DARABONBA_PTR_GET_DEFAULT(xDashScopeSSE_, "") };
    inline ChatHeaders& setXDashScopeSSE(string xDashScopeSSE) { DARABONBA_PTR_SET_VALUE(xDashScopeSSE_, xDashScopeSSE) };


    // xGWAccess Field Functions 
    bool hasXGWAccess() const { return this->xGWAccess_ != nullptr;};
    void deleteXGWAccess() { this->xGWAccess_ = nullptr;};
    inline string getXGWAccess() const { DARABONBA_PTR_GET_DEFAULT(xGWAccess_, "") };
    inline ChatHeaders& setXGWAccess(string xGWAccess) { DARABONBA_PTR_SET_VALUE(xGWAccess_, xGWAccess) };


    // xGWNonce Field Functions 
    bool hasXGWNonce() const { return this->xGWNonce_ != nullptr;};
    void deleteXGWNonce() { this->xGWNonce_ = nullptr;};
    inline string getXGWNonce() const { DARABONBA_PTR_GET_DEFAULT(xGWNonce_, "") };
    inline ChatHeaders& setXGWNonce(string xGWNonce) { DARABONBA_PTR_SET_VALUE(xGWNonce_, xGWNonce) };


    // xGWProtocol Field Functions 
    bool hasXGWProtocol() const { return this->xGWProtocol_ != nullptr;};
    void deleteXGWProtocol() { this->xGWProtocol_ = nullptr;};
    inline string getXGWProtocol() const { DARABONBA_PTR_GET_DEFAULT(xGWProtocol_, "") };
    inline ChatHeaders& setXGWProtocol(string xGWProtocol) { DARABONBA_PTR_SET_VALUE(xGWProtocol_, xGWProtocol) };


    // xGWSignature Field Functions 
    bool hasXGWSignature() const { return this->xGWSignature_ != nullptr;};
    void deleteXGWSignature() { this->xGWSignature_ = nullptr;};
    inline string getXGWSignature() const { DARABONBA_PTR_GET_DEFAULT(xGWSignature_, "") };
    inline ChatHeaders& setXGWSignature(string xGWSignature) { DARABONBA_PTR_SET_VALUE(xGWSignature_, xGWSignature) };


    // xGWTimestamp Field Functions 
    bool hasXGWTimestamp() const { return this->xGWTimestamp_ != nullptr;};
    void deleteXGWTimestamp() { this->xGWTimestamp_ = nullptr;};
    inline string getXGWTimestamp() const { DARABONBA_PTR_GET_DEFAULT(xGWTimestamp_, "") };
    inline ChatHeaders& setXGWTimestamp(string xGWTimestamp) { DARABONBA_PTR_SET_VALUE(xGWTimestamp_, xGWTimestamp) };


    // xRequestId Field Functions 
    bool hasXRequestId() const { return this->xRequestId_ != nullptr;};
    void deleteXRequestId() { this->xRequestId_ = nullptr;};
    inline string getXRequestId() const { DARABONBA_PTR_GET_DEFAULT(xRequestId_, "") };
    inline ChatHeaders& setXRequestId(string xRequestId) { DARABONBA_PTR_SET_VALUE(xRequestId_, xRequestId) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // The response media types accepted by the client.
    shared_ptr<string> accept_ {};
    // The compatible SSE selector header.
    shared_ptr<string> xDashScopeSSE_ {};
    // The AccessKey ID for the business gateway.
    // 
    // This parameter is required.
    shared_ptr<string> xGWAccess_ {};
    // The random string used for each call.
    // 
    // This parameter is required.
    shared_ptr<string> xGWNonce_ {};
    // The field naming protocol. Set to aliyun-roa to use lower camel case fields, or omit to use the legacy protocol. This header does not participate in HMAC signing.
    shared_ptr<string> xGWProtocol_ {};
    // The lowercase hexadecimal HMAC-SHA256 signature calculated based on the actual request bytes.
    // 
    // This parameter is required.
    shared_ptr<string> xGWSignature_ {};
    // The current Unix millisecond timestamp.
    // 
    // This parameter is required.
    shared_ptr<string> xGWTimestamp_ {};
    // The business request ID, which must be exactly the same as communication.requestId.
    // 
    // This parameter is required.
    shared_ptr<string> xRequestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261105
#endif
