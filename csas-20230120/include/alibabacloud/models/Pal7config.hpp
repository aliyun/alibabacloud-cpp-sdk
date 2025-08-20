// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAL7CONFIG_HPP_
#define ALIBABACLOUD_MODELS_PAL7CONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PAL7ConfigBypassConfig.hpp>
#include <alibabacloud/models/PAL7ConfigDnsConfig.hpp>
#include <alibabacloud/models/PAL7ConfigJsHookConfig.hpp>
#include <alibabacloud/models/PAL7ConfigRequestHeaderRewriteConfig.hpp>
#include <alibabacloud/models/PAL7ConfigRequestQueryRewriteConfig.hpp>
#include <alibabacloud/models/PAL7ConfigResponseHeaderRewriteConfig.hpp>
#include <alibabacloud/models/PAL7ConfigResponseRewriteConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class PAL7Config : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PAL7Config& obj) { 
      DARABONBA_PTR_TO_JSON(BypassConfig, bypassConfig_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(DnsConfig, dnsConfig_);
      DARABONBA_PTR_TO_JSON(JsHookConfig, jsHookConfig_);
      DARABONBA_PTR_TO_JSON(ProxyDomainTypes, proxyDomainTypes_);
      DARABONBA_PTR_TO_JSON(RequestHeaderRewriteConfig, requestHeaderRewriteConfig_);
      DARABONBA_PTR_TO_JSON(RequestQueryRewriteConfig, requestQueryRewriteConfig_);
      DARABONBA_PTR_TO_JSON(ResponseHeaderRewriteConfig, responseHeaderRewriteConfig_);
      DARABONBA_PTR_TO_JSON(ResponseRewriteConfig, responseRewriteConfig_);
    };
    friend void from_json(const Darabonba::Json& j, PAL7Config& obj) { 
      DARABONBA_PTR_FROM_JSON(BypassConfig, bypassConfig_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(DnsConfig, dnsConfig_);
      DARABONBA_PTR_FROM_JSON(JsHookConfig, jsHookConfig_);
      DARABONBA_PTR_FROM_JSON(ProxyDomainTypes, proxyDomainTypes_);
      DARABONBA_PTR_FROM_JSON(RequestHeaderRewriteConfig, requestHeaderRewriteConfig_);
      DARABONBA_PTR_FROM_JSON(RequestQueryRewriteConfig, requestQueryRewriteConfig_);
      DARABONBA_PTR_FROM_JSON(ResponseHeaderRewriteConfig, responseHeaderRewriteConfig_);
      DARABONBA_PTR_FROM_JSON(ResponseRewriteConfig, responseRewriteConfig_);
    };
    PAL7Config() = default ;
    PAL7Config(const PAL7Config &) = default ;
    PAL7Config(PAL7Config &&) = default ;
    PAL7Config(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PAL7Config() = default ;
    PAL7Config& operator=(const PAL7Config &) = default ;
    PAL7Config& operator=(PAL7Config &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bypassConfig_ != nullptr
        && this->certId_ != nullptr && this->dnsConfig_ != nullptr && this->jsHookConfig_ != nullptr && this->proxyDomainTypes_ != nullptr && this->requestHeaderRewriteConfig_ != nullptr
        && this->requestQueryRewriteConfig_ != nullptr && this->responseHeaderRewriteConfig_ != nullptr && this->responseRewriteConfig_ != nullptr; };
    // bypassConfig Field Functions 
    bool hasBypassConfig() const { return this->bypassConfig_ != nullptr;};
    void deleteBypassConfig() { this->bypassConfig_ = nullptr;};
    inline const PAL7ConfigBypassConfig & bypassConfig() const { DARABONBA_PTR_GET_CONST(bypassConfig_, PAL7ConfigBypassConfig) };
    inline PAL7ConfigBypassConfig bypassConfig() { DARABONBA_PTR_GET(bypassConfig_, PAL7ConfigBypassConfig) };
    inline PAL7Config& setBypassConfig(const PAL7ConfigBypassConfig & bypassConfig) { DARABONBA_PTR_SET_VALUE(bypassConfig_, bypassConfig) };
    inline PAL7Config& setBypassConfig(PAL7ConfigBypassConfig && bypassConfig) { DARABONBA_PTR_SET_RVALUE(bypassConfig_, bypassConfig) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline PAL7Config& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // dnsConfig Field Functions 
    bool hasDnsConfig() const { return this->dnsConfig_ != nullptr;};
    void deleteDnsConfig() { this->dnsConfig_ = nullptr;};
    inline const PAL7ConfigDnsConfig & dnsConfig() const { DARABONBA_PTR_GET_CONST(dnsConfig_, PAL7ConfigDnsConfig) };
    inline PAL7ConfigDnsConfig dnsConfig() { DARABONBA_PTR_GET(dnsConfig_, PAL7ConfigDnsConfig) };
    inline PAL7Config& setDnsConfig(const PAL7ConfigDnsConfig & dnsConfig) { DARABONBA_PTR_SET_VALUE(dnsConfig_, dnsConfig) };
    inline PAL7Config& setDnsConfig(PAL7ConfigDnsConfig && dnsConfig) { DARABONBA_PTR_SET_RVALUE(dnsConfig_, dnsConfig) };


    // jsHookConfig Field Functions 
    bool hasJsHookConfig() const { return this->jsHookConfig_ != nullptr;};
    void deleteJsHookConfig() { this->jsHookConfig_ = nullptr;};
    inline const PAL7ConfigJsHookConfig & jsHookConfig() const { DARABONBA_PTR_GET_CONST(jsHookConfig_, PAL7ConfigJsHookConfig) };
    inline PAL7ConfigJsHookConfig jsHookConfig() { DARABONBA_PTR_GET(jsHookConfig_, PAL7ConfigJsHookConfig) };
    inline PAL7Config& setJsHookConfig(const PAL7ConfigJsHookConfig & jsHookConfig) { DARABONBA_PTR_SET_VALUE(jsHookConfig_, jsHookConfig) };
    inline PAL7Config& setJsHookConfig(PAL7ConfigJsHookConfig && jsHookConfig) { DARABONBA_PTR_SET_RVALUE(jsHookConfig_, jsHookConfig) };


    // proxyDomainTypes Field Functions 
    bool hasProxyDomainTypes() const { return this->proxyDomainTypes_ != nullptr;};
    void deleteProxyDomainTypes() { this->proxyDomainTypes_ = nullptr;};
    inline Darabonba::Bytes proxyDomainTypes() const { DARABONBA_GET(proxyDomainTypes_) };
    inline PAL7Config& setProxyDomainTypes(Darabonba::Bytes proxyDomainTypes) { DARABONBA_SET_VALUE(proxyDomainTypes_, proxyDomainTypes) };


    // requestHeaderRewriteConfig Field Functions 
    bool hasRequestHeaderRewriteConfig() const { return this->requestHeaderRewriteConfig_ != nullptr;};
    void deleteRequestHeaderRewriteConfig() { this->requestHeaderRewriteConfig_ = nullptr;};
    inline const PAL7ConfigRequestHeaderRewriteConfig & requestHeaderRewriteConfig() const { DARABONBA_PTR_GET_CONST(requestHeaderRewriteConfig_, PAL7ConfigRequestHeaderRewriteConfig) };
    inline PAL7ConfigRequestHeaderRewriteConfig requestHeaderRewriteConfig() { DARABONBA_PTR_GET(requestHeaderRewriteConfig_, PAL7ConfigRequestHeaderRewriteConfig) };
    inline PAL7Config& setRequestHeaderRewriteConfig(const PAL7ConfigRequestHeaderRewriteConfig & requestHeaderRewriteConfig) { DARABONBA_PTR_SET_VALUE(requestHeaderRewriteConfig_, requestHeaderRewriteConfig) };
    inline PAL7Config& setRequestHeaderRewriteConfig(PAL7ConfigRequestHeaderRewriteConfig && requestHeaderRewriteConfig) { DARABONBA_PTR_SET_RVALUE(requestHeaderRewriteConfig_, requestHeaderRewriteConfig) };


    // requestQueryRewriteConfig Field Functions 
    bool hasRequestQueryRewriteConfig() const { return this->requestQueryRewriteConfig_ != nullptr;};
    void deleteRequestQueryRewriteConfig() { this->requestQueryRewriteConfig_ = nullptr;};
    inline const PAL7ConfigRequestQueryRewriteConfig & requestQueryRewriteConfig() const { DARABONBA_PTR_GET_CONST(requestQueryRewriteConfig_, PAL7ConfigRequestQueryRewriteConfig) };
    inline PAL7ConfigRequestQueryRewriteConfig requestQueryRewriteConfig() { DARABONBA_PTR_GET(requestQueryRewriteConfig_, PAL7ConfigRequestQueryRewriteConfig) };
    inline PAL7Config& setRequestQueryRewriteConfig(const PAL7ConfigRequestQueryRewriteConfig & requestQueryRewriteConfig) { DARABONBA_PTR_SET_VALUE(requestQueryRewriteConfig_, requestQueryRewriteConfig) };
    inline PAL7Config& setRequestQueryRewriteConfig(PAL7ConfigRequestQueryRewriteConfig && requestQueryRewriteConfig) { DARABONBA_PTR_SET_RVALUE(requestQueryRewriteConfig_, requestQueryRewriteConfig) };


    // responseHeaderRewriteConfig Field Functions 
    bool hasResponseHeaderRewriteConfig() const { return this->responseHeaderRewriteConfig_ != nullptr;};
    void deleteResponseHeaderRewriteConfig() { this->responseHeaderRewriteConfig_ = nullptr;};
    inline const PAL7ConfigResponseHeaderRewriteConfig & responseHeaderRewriteConfig() const { DARABONBA_PTR_GET_CONST(responseHeaderRewriteConfig_, PAL7ConfigResponseHeaderRewriteConfig) };
    inline PAL7ConfigResponseHeaderRewriteConfig responseHeaderRewriteConfig() { DARABONBA_PTR_GET(responseHeaderRewriteConfig_, PAL7ConfigResponseHeaderRewriteConfig) };
    inline PAL7Config& setResponseHeaderRewriteConfig(const PAL7ConfigResponseHeaderRewriteConfig & responseHeaderRewriteConfig) { DARABONBA_PTR_SET_VALUE(responseHeaderRewriteConfig_, responseHeaderRewriteConfig) };
    inline PAL7Config& setResponseHeaderRewriteConfig(PAL7ConfigResponseHeaderRewriteConfig && responseHeaderRewriteConfig) { DARABONBA_PTR_SET_RVALUE(responseHeaderRewriteConfig_, responseHeaderRewriteConfig) };


    // responseRewriteConfig Field Functions 
    bool hasResponseRewriteConfig() const { return this->responseRewriteConfig_ != nullptr;};
    void deleteResponseRewriteConfig() { this->responseRewriteConfig_ = nullptr;};
    inline const PAL7ConfigResponseRewriteConfig & responseRewriteConfig() const { DARABONBA_PTR_GET_CONST(responseRewriteConfig_, PAL7ConfigResponseRewriteConfig) };
    inline PAL7ConfigResponseRewriteConfig responseRewriteConfig() { DARABONBA_PTR_GET(responseRewriteConfig_, PAL7ConfigResponseRewriteConfig) };
    inline PAL7Config& setResponseRewriteConfig(const PAL7ConfigResponseRewriteConfig & responseRewriteConfig) { DARABONBA_PTR_SET_VALUE(responseRewriteConfig_, responseRewriteConfig) };
    inline PAL7Config& setResponseRewriteConfig(PAL7ConfigResponseRewriteConfig && responseRewriteConfig) { DARABONBA_PTR_SET_RVALUE(responseRewriteConfig_, responseRewriteConfig) };


  protected:
    std::shared_ptr<PAL7ConfigBypassConfig> bypassConfig_ = nullptr;
    std::shared_ptr<string> certId_ = nullptr;
    std::shared_ptr<PAL7ConfigDnsConfig> dnsConfig_ = nullptr;
    std::shared_ptr<PAL7ConfigJsHookConfig> jsHookConfig_ = nullptr;
    Darabonba::Bytes proxyDomainTypes_ = nullptr;
    std::shared_ptr<PAL7ConfigRequestHeaderRewriteConfig> requestHeaderRewriteConfig_ = nullptr;
    std::shared_ptr<PAL7ConfigRequestQueryRewriteConfig> requestQueryRewriteConfig_ = nullptr;
    std::shared_ptr<PAL7ConfigResponseHeaderRewriteConfig> responseHeaderRewriteConfig_ = nullptr;
    std::shared_ptr<PAL7ConfigResponseRewriteConfig> responseRewriteConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
