// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STREAMVOICEHEADERS_HPP_
#define ALIBABACLOUD_MODELS_STREAMVOICEHEADERS_HPP_
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
  class StreamVoiceHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StreamVoiceHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(X-GW-Access, xGWAccess_);
      DARABONBA_PTR_TO_JSON(X-GW-Nonce, xGWNonce_);
      DARABONBA_PTR_TO_JSON(X-GW-Protocol, xGWProtocol_);
      DARABONBA_PTR_TO_JSON(X-GW-Signature, xGWSignature_);
      DARABONBA_PTR_TO_JSON(X-GW-Timestamp, xGWTimestamp_);
      DARABONBA_PTR_TO_JSON(X-Request-Id, xRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, StreamVoiceHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(X-GW-Access, xGWAccess_);
      DARABONBA_PTR_FROM_JSON(X-GW-Nonce, xGWNonce_);
      DARABONBA_PTR_FROM_JSON(X-GW-Protocol, xGWProtocol_);
      DARABONBA_PTR_FROM_JSON(X-GW-Signature, xGWSignature_);
      DARABONBA_PTR_FROM_JSON(X-GW-Timestamp, xGWTimestamp_);
      DARABONBA_PTR_FROM_JSON(X-Request-Id, xRequestId_);
    };
    StreamVoiceHeaders() = default ;
    StreamVoiceHeaders(const StreamVoiceHeaders &) = default ;
    StreamVoiceHeaders(StreamVoiceHeaders &&) = default ;
    StreamVoiceHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StreamVoiceHeaders() = default ;
    StreamVoiceHeaders& operator=(const StreamVoiceHeaders &) = default ;
    StreamVoiceHeaders& operator=(StreamVoiceHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->xGWAccess_ == nullptr && this->xGWNonce_ == nullptr && this->xGWProtocol_ == nullptr && this->xGWSignature_ == nullptr && this->xGWTimestamp_ == nullptr
        && this->xRequestId_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline StreamVoiceHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline StreamVoiceHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xGWAccess Field Functions 
    bool hasXGWAccess() const { return this->xGWAccess_ != nullptr;};
    void deleteXGWAccess() { this->xGWAccess_ = nullptr;};
    inline string getXGWAccess() const { DARABONBA_PTR_GET_DEFAULT(xGWAccess_, "") };
    inline StreamVoiceHeaders& setXGWAccess(string xGWAccess) { DARABONBA_PTR_SET_VALUE(xGWAccess_, xGWAccess) };


    // xGWNonce Field Functions 
    bool hasXGWNonce() const { return this->xGWNonce_ != nullptr;};
    void deleteXGWNonce() { this->xGWNonce_ = nullptr;};
    inline string getXGWNonce() const { DARABONBA_PTR_GET_DEFAULT(xGWNonce_, "") };
    inline StreamVoiceHeaders& setXGWNonce(string xGWNonce) { DARABONBA_PTR_SET_VALUE(xGWNonce_, xGWNonce) };


    // xGWProtocol Field Functions 
    bool hasXGWProtocol() const { return this->xGWProtocol_ != nullptr;};
    void deleteXGWProtocol() { this->xGWProtocol_ = nullptr;};
    inline string getXGWProtocol() const { DARABONBA_PTR_GET_DEFAULT(xGWProtocol_, "") };
    inline StreamVoiceHeaders& setXGWProtocol(string xGWProtocol) { DARABONBA_PTR_SET_VALUE(xGWProtocol_, xGWProtocol) };


    // xGWSignature Field Functions 
    bool hasXGWSignature() const { return this->xGWSignature_ != nullptr;};
    void deleteXGWSignature() { this->xGWSignature_ = nullptr;};
    inline string getXGWSignature() const { DARABONBA_PTR_GET_DEFAULT(xGWSignature_, "") };
    inline StreamVoiceHeaders& setXGWSignature(string xGWSignature) { DARABONBA_PTR_SET_VALUE(xGWSignature_, xGWSignature) };


    // xGWTimestamp Field Functions 
    bool hasXGWTimestamp() const { return this->xGWTimestamp_ != nullptr;};
    void deleteXGWTimestamp() { this->xGWTimestamp_ = nullptr;};
    inline string getXGWTimestamp() const { DARABONBA_PTR_GET_DEFAULT(xGWTimestamp_, "") };
    inline StreamVoiceHeaders& setXGWTimestamp(string xGWTimestamp) { DARABONBA_PTR_SET_VALUE(xGWTimestamp_, xGWTimestamp) };


    // xRequestId Field Functions 
    bool hasXRequestId() const { return this->xRequestId_ != nullptr;};
    void deleteXRequestId() { this->xRequestId_ = nullptr;};
    inline string getXRequestId() const { DARABONBA_PTR_GET_DEFAULT(xRequestId_, "") };
    inline StreamVoiceHeaders& setXRequestId(string xRequestId) { DARABONBA_PTR_SET_VALUE(xRequestId_, xRequestId) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // 业务网关 Access Key ID
    // 
    // This parameter is required.
    shared_ptr<string> xGWAccess_ {};
    // 每次调用使用的随机串
    // 
    // This parameter is required.
    shared_ptr<string> xGWNonce_ {};
    // 小驼峰回源协议固定传 aliyun-roa，省略时为旧协议；不参与 HMAC 签名
    shared_ptr<string> xGWProtocol_ {};
    // 按实际请求字节计算的 HMAC-SHA256 小写十六进制签名
    // 
    // This parameter is required.
    shared_ptr<string> xGWSignature_ {};
    // 当前 Unix 毫秒时间戳
    // 
    // This parameter is required.
    shared_ptr<string> xGWTimestamp_ {};
    // 可选的 WebSocket 握手关联号，每轮业务 ID 使用 run-task 帧中的 communication.requestId
    shared_ptr<string> xRequestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261105
#endif
