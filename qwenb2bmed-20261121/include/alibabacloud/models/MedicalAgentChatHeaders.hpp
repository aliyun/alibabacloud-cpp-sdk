// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDICALAGENTCHATHEADERS_HPP_
#define ALIBABACLOUD_MODELS_MEDICALAGENTCHATHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BMed20261121
{
namespace Models
{
  class MedicalAgentChatHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MedicalAgentChatHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(X-DashScope-SSE, xDashScopeSSE_);
      DARABONBA_PTR_TO_JSON(X-GW-Access, xGWAccess_);
      DARABONBA_PTR_TO_JSON(X-GW-Nonce, xGWNonce_);
      DARABONBA_PTR_TO_JSON(X-GW-Protocol, xGWProtocol_);
      DARABONBA_PTR_TO_JSON(X-GW-Signature, xGWSignature_);
      DARABONBA_PTR_TO_JSON(X-GW-Timestamp, xGWTimestamp_);
      DARABONBA_PTR_TO_JSON(X-Request-Id, xRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, MedicalAgentChatHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(X-DashScope-SSE, xDashScopeSSE_);
      DARABONBA_PTR_FROM_JSON(X-GW-Access, xGWAccess_);
      DARABONBA_PTR_FROM_JSON(X-GW-Nonce, xGWNonce_);
      DARABONBA_PTR_FROM_JSON(X-GW-Protocol, xGWProtocol_);
      DARABONBA_PTR_FROM_JSON(X-GW-Signature, xGWSignature_);
      DARABONBA_PTR_FROM_JSON(X-GW-Timestamp, xGWTimestamp_);
      DARABONBA_PTR_FROM_JSON(X-Request-Id, xRequestId_);
    };
    MedicalAgentChatHeaders() = default ;
    MedicalAgentChatHeaders(const MedicalAgentChatHeaders &) = default ;
    MedicalAgentChatHeaders(MedicalAgentChatHeaders &&) = default ;
    MedicalAgentChatHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MedicalAgentChatHeaders() = default ;
    MedicalAgentChatHeaders& operator=(const MedicalAgentChatHeaders &) = default ;
    MedicalAgentChatHeaders& operator=(MedicalAgentChatHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->xDashScopeSSE_ == nullptr && this->xGWAccess_ == nullptr && this->xGWNonce_ == nullptr && this->xGWProtocol_ == nullptr && this->xGWSignature_ == nullptr
        && this->xGWTimestamp_ == nullptr && this->xRequestId_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline MedicalAgentChatHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline MedicalAgentChatHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xDashScopeSSE Field Functions 
    bool hasXDashScopeSSE() const { return this->xDashScopeSSE_ != nullptr;};
    void deleteXDashScopeSSE() { this->xDashScopeSSE_ = nullptr;};
    inline string getXDashScopeSSE() const { DARABONBA_PTR_GET_DEFAULT(xDashScopeSSE_, "") };
    inline MedicalAgentChatHeaders& setXDashScopeSSE(string xDashScopeSSE) { DARABONBA_PTR_SET_VALUE(xDashScopeSSE_, xDashScopeSSE) };


    // xGWAccess Field Functions 
    bool hasXGWAccess() const { return this->xGWAccess_ != nullptr;};
    void deleteXGWAccess() { this->xGWAccess_ = nullptr;};
    inline string getXGWAccess() const { DARABONBA_PTR_GET_DEFAULT(xGWAccess_, "") };
    inline MedicalAgentChatHeaders& setXGWAccess(string xGWAccess) { DARABONBA_PTR_SET_VALUE(xGWAccess_, xGWAccess) };


    // xGWNonce Field Functions 
    bool hasXGWNonce() const { return this->xGWNonce_ != nullptr;};
    void deleteXGWNonce() { this->xGWNonce_ = nullptr;};
    inline string getXGWNonce() const { DARABONBA_PTR_GET_DEFAULT(xGWNonce_, "") };
    inline MedicalAgentChatHeaders& setXGWNonce(string xGWNonce) { DARABONBA_PTR_SET_VALUE(xGWNonce_, xGWNonce) };


    // xGWProtocol Field Functions 
    bool hasXGWProtocol() const { return this->xGWProtocol_ != nullptr;};
    void deleteXGWProtocol() { this->xGWProtocol_ = nullptr;};
    inline string getXGWProtocol() const { DARABONBA_PTR_GET_DEFAULT(xGWProtocol_, "") };
    inline MedicalAgentChatHeaders& setXGWProtocol(string xGWProtocol) { DARABONBA_PTR_SET_VALUE(xGWProtocol_, xGWProtocol) };


    // xGWSignature Field Functions 
    bool hasXGWSignature() const { return this->xGWSignature_ != nullptr;};
    void deleteXGWSignature() { this->xGWSignature_ = nullptr;};
    inline string getXGWSignature() const { DARABONBA_PTR_GET_DEFAULT(xGWSignature_, "") };
    inline MedicalAgentChatHeaders& setXGWSignature(string xGWSignature) { DARABONBA_PTR_SET_VALUE(xGWSignature_, xGWSignature) };


    // xGWTimestamp Field Functions 
    bool hasXGWTimestamp() const { return this->xGWTimestamp_ != nullptr;};
    void deleteXGWTimestamp() { this->xGWTimestamp_ = nullptr;};
    inline string getXGWTimestamp() const { DARABONBA_PTR_GET_DEFAULT(xGWTimestamp_, "") };
    inline MedicalAgentChatHeaders& setXGWTimestamp(string xGWTimestamp) { DARABONBA_PTR_SET_VALUE(xGWTimestamp_, xGWTimestamp) };


    // xRequestId Field Functions 
    bool hasXRequestId() const { return this->xRequestId_ != nullptr;};
    void deleteXRequestId() { this->xRequestId_ = nullptr;};
    inline string getXRequestId() const { DARABONBA_PTR_GET_DEFAULT(xRequestId_, "") };
    inline MedicalAgentChatHeaders& setXRequestId(string xRequestId) { DARABONBA_PTR_SET_VALUE(xRequestId_, xRequestId) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // 可选。请求 SSE 时可填 enable。正文中必须显式填写 JSON 布尔值 params.responseStreaming；true 返回 SSE，false 返回完整 JSON。
    shared_ptr<string> xDashScopeSSE_ {};
    // 接入时领取的业务 Access Key ID，用于识别调用方。阿里云调用凭证按 SDK 的要求单独配置。
    // 
    // This parameter is required.
    shared_ptr<string> xGWAccess_ {};
    // 每次发送时重新生成的随机串，例如 UUID。重试时也要重新生成 nonce、时间戳和签名。
    // 
    // This parameter is required.
    shared_ptr<string> xGWNonce_ {};
    // 本文示例固定传 aliyun-roa，使用小驼峰格式的请求和响应。此请求头不参与业务签名。
    shared_ptr<string> xGWProtocol_ {};
    // 使用接入时领取的业务签名密钥（SK）对六段内容计算 HMAC-SHA256。依次为 HTTP 方法（大写）、请求路径、规范化查询串、实际发送正文的 SHA-256 小写十六进制、X-GW-Timestamp、X-GW-Nonce。以换行连接，末尾不加换行；无查询参数时第三段保留为空。查询串按 & 拆分并去除空项，按原始参数项字典序排序后以 & 拼接，不解码。签名传 64 个小写十六进制字符。正文用 UTF-8 序列化一次，用同一份字节签名和发送，SK 仅用于本地计算。
    // 
    // This parameter is required.
    shared_ptr<string> xGWSignature_ {};
    // 发送请求时的 Unix 毫秒时间戳，使用十进制字符串。签名和请求头使用同一个值。
    // 
    // This parameter is required.
    shared_ptr<string> xGWTimestamp_ {};
    // 本次业务请求的关联号，单值，与 communication.requestId 完全相同。允许 1 至 128 个字母、数字或 . _ : - 字符，gw-ingress- 前缀保留给服务诊断。
    // 
    // This parameter is required.
    shared_ptr<string> xRequestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BMed20261121
#endif
