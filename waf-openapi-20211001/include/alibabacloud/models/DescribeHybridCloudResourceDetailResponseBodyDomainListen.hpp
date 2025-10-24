// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCEDETAILRESPONSEBODYDOMAINLISTEN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCEDETAILRESPONSEBODYDOMAINLISTEN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudResourceDetailResponseBodyDomainListen : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudResourceDetailResponseBodyDomainListen& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_TO_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_TO_JSON(EnableTLSv3, enableTLSv3_);
      DARABONBA_PTR_TO_JSON(ExclusiveIp, exclusiveIp_);
      DARABONBA_PTR_TO_JSON(FocusHttps, focusHttps_);
      DARABONBA_PTR_TO_JSON(Http2Enabled, http2Enabled_);
      DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_TO_JSON(IPv6Enabled, IPv6Enabled_);
      DARABONBA_PTR_TO_JSON(ProtectionResource, protectionResource_);
      DARABONBA_PTR_TO_JSON(TLSVersion, TLSVersion_);
      DARABONBA_PTR_TO_JSON(XffHeaderMode, xffHeaderMode_);
      DARABONBA_PTR_TO_JSON(XffHeaders, xffHeaders_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudResourceDetailResponseBodyDomainListen& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_FROM_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_FROM_JSON(EnableTLSv3, enableTLSv3_);
      DARABONBA_PTR_FROM_JSON(ExclusiveIp, exclusiveIp_);
      DARABONBA_PTR_FROM_JSON(FocusHttps, focusHttps_);
      DARABONBA_PTR_FROM_JSON(Http2Enabled, http2Enabled_);
      DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_FROM_JSON(IPv6Enabled, IPv6Enabled_);
      DARABONBA_PTR_FROM_JSON(ProtectionResource, protectionResource_);
      DARABONBA_PTR_FROM_JSON(TLSVersion, TLSVersion_);
      DARABONBA_PTR_FROM_JSON(XffHeaderMode, xffHeaderMode_);
      DARABONBA_PTR_FROM_JSON(XffHeaders, xffHeaders_);
    };
    DescribeHybridCloudResourceDetailResponseBodyDomainListen() = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomainListen(const DescribeHybridCloudResourceDetailResponseBodyDomainListen &) = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomainListen(DescribeHybridCloudResourceDetailResponseBodyDomainListen &&) = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomainListen(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudResourceDetailResponseBodyDomainListen() = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomainListen& operator=(const DescribeHybridCloudResourceDetailResponseBodyDomainListen &) = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomainListen& operator=(DescribeHybridCloudResourceDetailResponseBodyDomainListen &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certId_ == nullptr
        && return this->cipherSuite_ == nullptr && return this->customCiphers_ == nullptr && return this->enableTLSv3_ == nullptr && return this->exclusiveIp_ == nullptr && return this->focusHttps_ == nullptr
        && return this->http2Enabled_ == nullptr && return this->httpPorts_ == nullptr && return this->httpsPorts_ == nullptr && return this->IPv6Enabled_ == nullptr && return this->protectionResource_ == nullptr
        && return this->TLSVersion_ == nullptr && return this->xffHeaderMode_ == nullptr && return this->xffHeaders_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // cipherSuite Field Functions 
    bool hasCipherSuite() const { return this->cipherSuite_ != nullptr;};
    void deleteCipherSuite() { this->cipherSuite_ = nullptr;};
    inline int32_t cipherSuite() const { DARABONBA_PTR_GET_DEFAULT(cipherSuite_, 0) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setCipherSuite(int32_t cipherSuite) { DARABONBA_PTR_SET_VALUE(cipherSuite_, cipherSuite) };


    // customCiphers Field Functions 
    bool hasCustomCiphers() const { return this->customCiphers_ != nullptr;};
    void deleteCustomCiphers() { this->customCiphers_ = nullptr;};
    inline const vector<string> & customCiphers() const { DARABONBA_PTR_GET_CONST(customCiphers_, vector<string>) };
    inline vector<string> customCiphers() { DARABONBA_PTR_GET(customCiphers_, vector<string>) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setCustomCiphers(const vector<string> & customCiphers) { DARABONBA_PTR_SET_VALUE(customCiphers_, customCiphers) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setCustomCiphers(vector<string> && customCiphers) { DARABONBA_PTR_SET_RVALUE(customCiphers_, customCiphers) };


    // enableTLSv3 Field Functions 
    bool hasEnableTLSv3() const { return this->enableTLSv3_ != nullptr;};
    void deleteEnableTLSv3() { this->enableTLSv3_ = nullptr;};
    inline bool enableTLSv3() const { DARABONBA_PTR_GET_DEFAULT(enableTLSv3_, false) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setEnableTLSv3(bool enableTLSv3) { DARABONBA_PTR_SET_VALUE(enableTLSv3_, enableTLSv3) };


    // exclusiveIp Field Functions 
    bool hasExclusiveIp() const { return this->exclusiveIp_ != nullptr;};
    void deleteExclusiveIp() { this->exclusiveIp_ = nullptr;};
    inline bool exclusiveIp() const { DARABONBA_PTR_GET_DEFAULT(exclusiveIp_, false) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setExclusiveIp(bool exclusiveIp) { DARABONBA_PTR_SET_VALUE(exclusiveIp_, exclusiveIp) };


    // focusHttps Field Functions 
    bool hasFocusHttps() const { return this->focusHttps_ != nullptr;};
    void deleteFocusHttps() { this->focusHttps_ = nullptr;};
    inline bool focusHttps() const { DARABONBA_PTR_GET_DEFAULT(focusHttps_, false) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setFocusHttps(bool focusHttps) { DARABONBA_PTR_SET_VALUE(focusHttps_, focusHttps) };


    // http2Enabled Field Functions 
    bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
    void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
    inline bool http2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


    // httpPorts Field Functions 
    bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
    void deleteHttpPorts() { this->httpPorts_ = nullptr;};
    inline const vector<int64_t> & httpPorts() const { DARABONBA_PTR_GET_CONST(httpPorts_, vector<int64_t>) };
    inline vector<int64_t> httpPorts() { DARABONBA_PTR_GET(httpPorts_, vector<int64_t>) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setHttpPorts(const vector<int64_t> & httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setHttpPorts(vector<int64_t> && httpPorts) { DARABONBA_PTR_SET_RVALUE(httpPorts_, httpPorts) };


    // httpsPorts Field Functions 
    bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
    void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
    inline const vector<int64_t> & httpsPorts() const { DARABONBA_PTR_GET_CONST(httpsPorts_, vector<int64_t>) };
    inline vector<int64_t> httpsPorts() { DARABONBA_PTR_GET(httpsPorts_, vector<int64_t>) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setHttpsPorts(const vector<int64_t> & httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setHttpsPorts(vector<int64_t> && httpsPorts) { DARABONBA_PTR_SET_RVALUE(httpsPorts_, httpsPorts) };


    // IPv6Enabled Field Functions 
    bool hasIPv6Enabled() const { return this->IPv6Enabled_ != nullptr;};
    void deleteIPv6Enabled() { this->IPv6Enabled_ = nullptr;};
    inline bool IPv6Enabled() const { DARABONBA_PTR_GET_DEFAULT(IPv6Enabled_, false) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setIPv6Enabled(bool IPv6Enabled) { DARABONBA_PTR_SET_VALUE(IPv6Enabled_, IPv6Enabled) };


    // protectionResource Field Functions 
    bool hasProtectionResource() const { return this->protectionResource_ != nullptr;};
    void deleteProtectionResource() { this->protectionResource_ = nullptr;};
    inline string protectionResource() const { DARABONBA_PTR_GET_DEFAULT(protectionResource_, "") };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setProtectionResource(string protectionResource) { DARABONBA_PTR_SET_VALUE(protectionResource_, protectionResource) };


    // TLSVersion Field Functions 
    bool hasTLSVersion() const { return this->TLSVersion_ != nullptr;};
    void deleteTLSVersion() { this->TLSVersion_ = nullptr;};
    inline string TLSVersion() const { DARABONBA_PTR_GET_DEFAULT(TLSVersion_, "") };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setTLSVersion(string TLSVersion) { DARABONBA_PTR_SET_VALUE(TLSVersion_, TLSVersion) };


    // xffHeaderMode Field Functions 
    bool hasXffHeaderMode() const { return this->xffHeaderMode_ != nullptr;};
    void deleteXffHeaderMode() { this->xffHeaderMode_ = nullptr;};
    inline int32_t xffHeaderMode() const { DARABONBA_PTR_GET_DEFAULT(xffHeaderMode_, 0) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setXffHeaderMode(int32_t xffHeaderMode) { DARABONBA_PTR_SET_VALUE(xffHeaderMode_, xffHeaderMode) };


    // xffHeaders Field Functions 
    bool hasXffHeaders() const { return this->xffHeaders_ != nullptr;};
    void deleteXffHeaders() { this->xffHeaders_ = nullptr;};
    inline const vector<string> & xffHeaders() const { DARABONBA_PTR_GET_CONST(xffHeaders_, vector<string>) };
    inline vector<string> xffHeaders() { DARABONBA_PTR_GET(xffHeaders_, vector<string>) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setXffHeaders(const vector<string> & xffHeaders) { DARABONBA_PTR_SET_VALUE(xffHeaders_, xffHeaders) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainListen& setXffHeaders(vector<string> && xffHeaders) { DARABONBA_PTR_SET_RVALUE(xffHeaders_, xffHeaders) };


  protected:
    std::shared_ptr<string> certId_ = nullptr;
    std::shared_ptr<int32_t> cipherSuite_ = nullptr;
    std::shared_ptr<vector<string>> customCiphers_ = nullptr;
    std::shared_ptr<bool> enableTLSv3_ = nullptr;
    std::shared_ptr<bool> exclusiveIp_ = nullptr;
    std::shared_ptr<bool> focusHttps_ = nullptr;
    std::shared_ptr<bool> http2Enabled_ = nullptr;
    std::shared_ptr<vector<int64_t>> httpPorts_ = nullptr;
    std::shared_ptr<vector<int64_t>> httpsPorts_ = nullptr;
    std::shared_ptr<bool> IPv6Enabled_ = nullptr;
    std::shared_ptr<string> protectionResource_ = nullptr;
    std::shared_ptr<string> TLSVersion_ = nullptr;
    std::shared_ptr<int32_t> xffHeaderMode_ = nullptr;
    std::shared_ptr<vector<string>> xffHeaders_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
