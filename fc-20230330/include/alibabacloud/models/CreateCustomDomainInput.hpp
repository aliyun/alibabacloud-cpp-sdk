// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMDOMAININPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMDOMAININPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AuthConfig.hpp>
#include <alibabacloud/models/CertConfig.hpp>
#include <alibabacloud/models/CORSConfig.hpp>
#include <alibabacloud/models/RouteConfig.hpp>
#include <alibabacloud/models/TLSConfig.hpp>
#include <alibabacloud/models/WAFConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateCustomDomainInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomDomainInput& obj) { 
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(certConfig, certConfig_);
      DARABONBA_PTR_TO_JSON(corsConfig, corsConfig_);
      DARABONBA_PTR_TO_JSON(domainName, domainName_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(routeConfig, routeConfig_);
      DARABONBA_PTR_TO_JSON(tlsConfig, tlsConfig_);
      DARABONBA_PTR_TO_JSON(wafConfig, wafConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomDomainInput& obj) { 
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(certConfig, certConfig_);
      DARABONBA_PTR_FROM_JSON(corsConfig, corsConfig_);
      DARABONBA_PTR_FROM_JSON(domainName, domainName_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(routeConfig, routeConfig_);
      DARABONBA_PTR_FROM_JSON(tlsConfig, tlsConfig_);
      DARABONBA_PTR_FROM_JSON(wafConfig, wafConfig_);
    };
    CreateCustomDomainInput() = default ;
    CreateCustomDomainInput(const CreateCustomDomainInput &) = default ;
    CreateCustomDomainInput(CreateCustomDomainInput &&) = default ;
    CreateCustomDomainInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomDomainInput() = default ;
    CreateCustomDomainInput& operator=(const CreateCustomDomainInput &) = default ;
    CreateCustomDomainInput& operator=(CreateCustomDomainInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConfig_ == nullptr
        && this->certConfig_ == nullptr && this->corsConfig_ == nullptr && this->domainName_ == nullptr && this->protocol_ == nullptr && this->routeConfig_ == nullptr
        && this->tlsConfig_ == nullptr && this->wafConfig_ == nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const AuthConfig & getAuthConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, AuthConfig) };
    inline AuthConfig getAuthConfig() { DARABONBA_PTR_GET(authConfig_, AuthConfig) };
    inline CreateCustomDomainInput& setAuthConfig(const AuthConfig & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline CreateCustomDomainInput& setAuthConfig(AuthConfig && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // certConfig Field Functions 
    bool hasCertConfig() const { return this->certConfig_ != nullptr;};
    void deleteCertConfig() { this->certConfig_ = nullptr;};
    inline const CertConfig & getCertConfig() const { DARABONBA_PTR_GET_CONST(certConfig_, CertConfig) };
    inline CertConfig getCertConfig() { DARABONBA_PTR_GET(certConfig_, CertConfig) };
    inline CreateCustomDomainInput& setCertConfig(const CertConfig & certConfig) { DARABONBA_PTR_SET_VALUE(certConfig_, certConfig) };
    inline CreateCustomDomainInput& setCertConfig(CertConfig && certConfig) { DARABONBA_PTR_SET_RVALUE(certConfig_, certConfig) };


    // corsConfig Field Functions 
    bool hasCorsConfig() const { return this->corsConfig_ != nullptr;};
    void deleteCorsConfig() { this->corsConfig_ = nullptr;};
    inline const CORSConfig & getCorsConfig() const { DARABONBA_PTR_GET_CONST(corsConfig_, CORSConfig) };
    inline CORSConfig getCorsConfig() { DARABONBA_PTR_GET(corsConfig_, CORSConfig) };
    inline CreateCustomDomainInput& setCorsConfig(const CORSConfig & corsConfig) { DARABONBA_PTR_SET_VALUE(corsConfig_, corsConfig) };
    inline CreateCustomDomainInput& setCorsConfig(CORSConfig && corsConfig) { DARABONBA_PTR_SET_RVALUE(corsConfig_, corsConfig) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateCustomDomainInput& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateCustomDomainInput& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // routeConfig Field Functions 
    bool hasRouteConfig() const { return this->routeConfig_ != nullptr;};
    void deleteRouteConfig() { this->routeConfig_ = nullptr;};
    inline const RouteConfig & getRouteConfig() const { DARABONBA_PTR_GET_CONST(routeConfig_, RouteConfig) };
    inline RouteConfig getRouteConfig() { DARABONBA_PTR_GET(routeConfig_, RouteConfig) };
    inline CreateCustomDomainInput& setRouteConfig(const RouteConfig & routeConfig) { DARABONBA_PTR_SET_VALUE(routeConfig_, routeConfig) };
    inline CreateCustomDomainInput& setRouteConfig(RouteConfig && routeConfig) { DARABONBA_PTR_SET_RVALUE(routeConfig_, routeConfig) };


    // tlsConfig Field Functions 
    bool hasTlsConfig() const { return this->tlsConfig_ != nullptr;};
    void deleteTlsConfig() { this->tlsConfig_ = nullptr;};
    inline const TLSConfig & getTlsConfig() const { DARABONBA_PTR_GET_CONST(tlsConfig_, TLSConfig) };
    inline TLSConfig getTlsConfig() { DARABONBA_PTR_GET(tlsConfig_, TLSConfig) };
    inline CreateCustomDomainInput& setTlsConfig(const TLSConfig & tlsConfig) { DARABONBA_PTR_SET_VALUE(tlsConfig_, tlsConfig) };
    inline CreateCustomDomainInput& setTlsConfig(TLSConfig && tlsConfig) { DARABONBA_PTR_SET_RVALUE(tlsConfig_, tlsConfig) };


    // wafConfig Field Functions 
    bool hasWafConfig() const { return this->wafConfig_ != nullptr;};
    void deleteWafConfig() { this->wafConfig_ = nullptr;};
    inline const WAFConfig & getWafConfig() const { DARABONBA_PTR_GET_CONST(wafConfig_, WAFConfig) };
    inline WAFConfig getWafConfig() { DARABONBA_PTR_GET(wafConfig_, WAFConfig) };
    inline CreateCustomDomainInput& setWafConfig(const WAFConfig & wafConfig) { DARABONBA_PTR_SET_VALUE(wafConfig_, wafConfig) };
    inline CreateCustomDomainInput& setWafConfig(WAFConfig && wafConfig) { DARABONBA_PTR_SET_RVALUE(wafConfig_, wafConfig) };


  protected:
    // The configuration of permission authentication.
    shared_ptr<AuthConfig> authConfig_ {};
    // The configuration of the HTTPS certificate.
    shared_ptr<CertConfig> certConfig_ {};
    shared_ptr<CORSConfig> corsConfig_ {};
    // The domain name. Enter a custom domain name that has obtained an Internet content provider (ICP) filing in the Alibaba Cloud ICP Filing system, or a custom domain name whose ICP filing information includes Alibaba Cloud as a service provider.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The protocol type that is supported by the custom domain name. Valid values: HTTP HTTPS HTTP,HTTPS
    shared_ptr<string> protocol_ {};
    // The route table that maps paths to functions when the function is invoked by using the custom domain name.
    shared_ptr<RouteConfig> routeConfig_ {};
    // The Transport Layer Security (TLS) configuration.
    shared_ptr<TLSConfig> tlsConfig_ {};
    // The Web Application Firewall (WAF) configuration.
    shared_ptr<WAFConfig> wafConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
