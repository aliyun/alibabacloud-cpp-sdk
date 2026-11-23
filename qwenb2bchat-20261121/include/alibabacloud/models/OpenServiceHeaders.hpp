// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSERVICEHEADERS_HPP_
#define ALIBABACLOUD_MODELS_OPENSERVICEHEADERS_HPP_
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
  class OpenServiceHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenServiceHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(X-GW-Access, xGWAccess_);
      DARABONBA_PTR_TO_JSON(X-GW-Nonce, xGWNonce_);
      DARABONBA_PTR_TO_JSON(X-GW-Signature, xGWSignature_);
      DARABONBA_PTR_TO_JSON(X-GW-Timestamp, xGWTimestamp_);
      DARABONBA_PTR_TO_JSON(X-Request-Id, xRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenServiceHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(X-GW-Access, xGWAccess_);
      DARABONBA_PTR_FROM_JSON(X-GW-Nonce, xGWNonce_);
      DARABONBA_PTR_FROM_JSON(X-GW-Signature, xGWSignature_);
      DARABONBA_PTR_FROM_JSON(X-GW-Timestamp, xGWTimestamp_);
      DARABONBA_PTR_FROM_JSON(X-Request-Id, xRequestId_);
    };
    OpenServiceHeaders() = default ;
    OpenServiceHeaders(const OpenServiceHeaders &) = default ;
    OpenServiceHeaders(OpenServiceHeaders &&) = default ;
    OpenServiceHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenServiceHeaders() = default ;
    OpenServiceHeaders& operator=(const OpenServiceHeaders &) = default ;
    OpenServiceHeaders& operator=(OpenServiceHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->xGWAccess_ == nullptr && this->xGWNonce_ == nullptr && this->xGWSignature_ == nullptr && this->xGWTimestamp_ == nullptr && this->xRequestId_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline OpenServiceHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline OpenServiceHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xGWAccess Field Functions 
    bool hasXGWAccess() const { return this->xGWAccess_ != nullptr;};
    void deleteXGWAccess() { this->xGWAccess_ = nullptr;};
    inline string getXGWAccess() const { DARABONBA_PTR_GET_DEFAULT(xGWAccess_, "") };
    inline OpenServiceHeaders& setXGWAccess(string xGWAccess) { DARABONBA_PTR_SET_VALUE(xGWAccess_, xGWAccess) };


    // xGWNonce Field Functions 
    bool hasXGWNonce() const { return this->xGWNonce_ != nullptr;};
    void deleteXGWNonce() { this->xGWNonce_ = nullptr;};
    inline string getXGWNonce() const { DARABONBA_PTR_GET_DEFAULT(xGWNonce_, "") };
    inline OpenServiceHeaders& setXGWNonce(string xGWNonce) { DARABONBA_PTR_SET_VALUE(xGWNonce_, xGWNonce) };


    // xGWSignature Field Functions 
    bool hasXGWSignature() const { return this->xGWSignature_ != nullptr;};
    void deleteXGWSignature() { this->xGWSignature_ = nullptr;};
    inline string getXGWSignature() const { DARABONBA_PTR_GET_DEFAULT(xGWSignature_, "") };
    inline OpenServiceHeaders& setXGWSignature(string xGWSignature) { DARABONBA_PTR_SET_VALUE(xGWSignature_, xGWSignature) };


    // xGWTimestamp Field Functions 
    bool hasXGWTimestamp() const { return this->xGWTimestamp_ != nullptr;};
    void deleteXGWTimestamp() { this->xGWTimestamp_ = nullptr;};
    inline string getXGWTimestamp() const { DARABONBA_PTR_GET_DEFAULT(xGWTimestamp_, "") };
    inline OpenServiceHeaders& setXGWTimestamp(string xGWTimestamp) { DARABONBA_PTR_SET_VALUE(xGWTimestamp_, xGWTimestamp) };


    // xRequestId Field Functions 
    bool hasXRequestId() const { return this->xRequestId_ != nullptr;};
    void deleteXRequestId() { this->xRequestId_ = nullptr;};
    inline string getXRequestId() const { DARABONBA_PTR_GET_DEFAULT(xRequestId_, "") };
    inline OpenServiceHeaders& setXRequestId(string xRequestId) { DARABONBA_PTR_SET_VALUE(xRequestId_, xRequestId) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // 必填的业务网关 AK，由服务接入方签发，用于识别租户和凭据；与阿里云 API 鉴权凭据用途不同，不发送业务网关 SK。
    // 
    // This parameter is required.
    shared_ptr<string> xGWAccess_ {};
    // 必填的一次性随机串，原值参与业务网关签名；每次请求和重试重新生成，不能重放原签名。
    // 
    // This parameter is required.
    shared_ptr<string> xGWNonce_ {};
    // 必填的业务网关 HMAC-SHA256 签名，64 位小写十六进制。签名原文为方法、路径、空查询串、实际请求体字节的 SHA-256 小写摘要、时间戳、nonce 六段，以换行符连接。签名后不得改变请求体字节；阿里云 API 签名另行生成。
    // 
    // This parameter is required.
    shared_ptr<string> xGWSignature_ {};
    // 必填的当前 Unix 毫秒时间戳，用数字字符串表示，原值参与业务网关签名；重试时更新并重新签名。
    // 
    // This parameter is required.
    shared_ptr<string> xGWTimestamp_ {};
    // 必填的客户请求关联号，恰好一个，匹配 [A-Za-z0-9._:-]{1,128}；不能使用 gw-ingress- 保留前缀。仅用于关联本次调用，不是订单号或幂等令牌。
    // 
    // This parameter is required.
    shared_ptr<string> xRequestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261121
#endif
