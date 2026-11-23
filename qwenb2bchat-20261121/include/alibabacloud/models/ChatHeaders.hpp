// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATHEADERS_HPP_
#define ALIBABACLOUD_MODELS_CHATHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BChat20261121
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
    // 可选。完整 JSON 可传 application/json，SSE 可传 text/event-stream。客户端必须在正文中以布尔值 params.responseStreaming 指定响应格式。
    shared_ptr<string> accept_ {};
    // 可选。enable 表示 SSE。每次请求须在正文中显式填写布尔参数 params.responseStreaming。本头不替代 X-GW-Protocol 或 X-GW 签名。
    shared_ptr<string> xDashScopeSSE_ {};
    // 必填，服务方发放的业务网关 AK，用于识别租户和业务凭据，不是用于 POP 鉴权的阿里云 AK。每次只传一个非空值；业务 SK 只在客户端用于计算签名，不随请求发送。
    // 
    // This parameter is required.
    shared_ptr<string> xGWAccess_ {};
    // 必填，每次尝试唯一且非空的随机串，例如 UUID；不可重放旧签名。重试重新生成 nonce、时间戳及签名。
    // 
    // This parameter is required.
    shared_ptr<string> xGWNonce_ {};
    // 本文小驼峰请求与响应必须显式传 aliyun-roa，且只传一次。省略选择旧协议，不能直接照搬小驼峰正文。此头不参与业务 HMAC，不代替 POP 鉴权或 X-GW-* 业务签名。
    shared_ptr<string> xGWProtocol_ {};
    // 必填，使用业务网关 SK 计算的 64 位小写十六进制 HMAC-SHA256。六段按 LF 连接且无末尾换行：METHOD、PATH、CANONICAL_QUERY、BODY_SHA256_HEX、TIMESTAMP、NONCE。原始 query 按 & 分项去空、字典序排序，不 decode/re-encode；正文按实际发送的 UTF-8 字节摘要。具体双签名示例见接口说明。
    // 
    // This parameter is required.
    shared_ptr<string> xGWSignature_ {};
    // 必填，当前 Unix 毫秒时间戳的数字字符串；有效时间窗按凭据配置。签名规范串与本头使用完全相同的字符串。每次重试重新生成时间戳、nonce 和签名。
    // 
    // This parameter is required.
    shared_ptr<string> xGWTimestamp_ {};
    // 必填，恰好一个，须与 communication.requestId 完全一致。格式 [A-Za-z0-9._:-]{1,128}，不得用保留前缀 gw-ingress-。例如 chat-20261118-001；这是业务关联号，不保证重复请求只执行一次。
    // 
    // This parameter is required.
    shared_ptr<string> xRequestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261121
#endif
