// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWEBCUSTOMDOMAININPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEWEBCUSTOMDOMAININPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RouteConfig.hpp>
#include <alibabacloud/models/WebCertConfig.hpp>
#include <alibabacloud/models/WebTLSConfig.hpp>
#include <alibabacloud/models/WebWAFConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateWebCustomDomainInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWebCustomDomainInput& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultForwardingAppName, defaultForwardingAppName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RouteConfig, routeConfig_);
      DARABONBA_PTR_TO_JSON(WebCertConfig, webCertConfig_);
      DARABONBA_PTR_TO_JSON(WebTLSConfig, webTLSConfig_);
      DARABONBA_PTR_TO_JSON(WebWAFConfig, webWAFConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWebCustomDomainInput& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultForwardingAppName, defaultForwardingAppName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RouteConfig, routeConfig_);
      DARABONBA_PTR_FROM_JSON(WebCertConfig, webCertConfig_);
      DARABONBA_PTR_FROM_JSON(WebTLSConfig, webTLSConfig_);
      DARABONBA_PTR_FROM_JSON(WebWAFConfig, webWAFConfig_);
    };
    CreateWebCustomDomainInput() = default ;
    CreateWebCustomDomainInput(const CreateWebCustomDomainInput &) = default ;
    CreateWebCustomDomainInput(CreateWebCustomDomainInput &&) = default ;
    CreateWebCustomDomainInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWebCustomDomainInput() = default ;
    CreateWebCustomDomainInput& operator=(const CreateWebCustomDomainInput &) = default ;
    CreateWebCustomDomainInput& operator=(CreateWebCustomDomainInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultForwardingAppName_ == nullptr
        && this->domainName_ == nullptr && this->protocol_ == nullptr && this->routeConfig_ == nullptr && this->webCertConfig_ == nullptr && this->webTLSConfig_ == nullptr
        && this->webWAFConfig_ == nullptr; };
    // defaultForwardingAppName Field Functions 
    bool hasDefaultForwardingAppName() const { return this->defaultForwardingAppName_ != nullptr;};
    void deleteDefaultForwardingAppName() { this->defaultForwardingAppName_ = nullptr;};
    inline string getDefaultForwardingAppName() const { DARABONBA_PTR_GET_DEFAULT(defaultForwardingAppName_, "") };
    inline CreateWebCustomDomainInput& setDefaultForwardingAppName(string defaultForwardingAppName) { DARABONBA_PTR_SET_VALUE(defaultForwardingAppName_, defaultForwardingAppName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateWebCustomDomainInput& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateWebCustomDomainInput& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // routeConfig Field Functions 
    bool hasRouteConfig() const { return this->routeConfig_ != nullptr;};
    void deleteRouteConfig() { this->routeConfig_ = nullptr;};
    inline const RouteConfig & getRouteConfig() const { DARABONBA_PTR_GET_CONST(routeConfig_, RouteConfig) };
    inline RouteConfig getRouteConfig() { DARABONBA_PTR_GET(routeConfig_, RouteConfig) };
    inline CreateWebCustomDomainInput& setRouteConfig(const RouteConfig & routeConfig) { DARABONBA_PTR_SET_VALUE(routeConfig_, routeConfig) };
    inline CreateWebCustomDomainInput& setRouteConfig(RouteConfig && routeConfig) { DARABONBA_PTR_SET_RVALUE(routeConfig_, routeConfig) };


    // webCertConfig Field Functions 
    bool hasWebCertConfig() const { return this->webCertConfig_ != nullptr;};
    void deleteWebCertConfig() { this->webCertConfig_ = nullptr;};
    inline const WebCertConfig & getWebCertConfig() const { DARABONBA_PTR_GET_CONST(webCertConfig_, WebCertConfig) };
    inline WebCertConfig getWebCertConfig() { DARABONBA_PTR_GET(webCertConfig_, WebCertConfig) };
    inline CreateWebCustomDomainInput& setWebCertConfig(const WebCertConfig & webCertConfig) { DARABONBA_PTR_SET_VALUE(webCertConfig_, webCertConfig) };
    inline CreateWebCustomDomainInput& setWebCertConfig(WebCertConfig && webCertConfig) { DARABONBA_PTR_SET_RVALUE(webCertConfig_, webCertConfig) };


    // webTLSConfig Field Functions 
    bool hasWebTLSConfig() const { return this->webTLSConfig_ != nullptr;};
    void deleteWebTLSConfig() { this->webTLSConfig_ = nullptr;};
    inline const WebTLSConfig & getWebTLSConfig() const { DARABONBA_PTR_GET_CONST(webTLSConfig_, WebTLSConfig) };
    inline WebTLSConfig getWebTLSConfig() { DARABONBA_PTR_GET(webTLSConfig_, WebTLSConfig) };
    inline CreateWebCustomDomainInput& setWebTLSConfig(const WebTLSConfig & webTLSConfig) { DARABONBA_PTR_SET_VALUE(webTLSConfig_, webTLSConfig) };
    inline CreateWebCustomDomainInput& setWebTLSConfig(WebTLSConfig && webTLSConfig) { DARABONBA_PTR_SET_RVALUE(webTLSConfig_, webTLSConfig) };


    // webWAFConfig Field Functions 
    bool hasWebWAFConfig() const { return this->webWAFConfig_ != nullptr;};
    void deleteWebWAFConfig() { this->webWAFConfig_ = nullptr;};
    inline const WebWAFConfig & getWebWAFConfig() const { DARABONBA_PTR_GET_CONST(webWAFConfig_, WebWAFConfig) };
    inline WebWAFConfig getWebWAFConfig() { DARABONBA_PTR_GET(webWAFConfig_, WebWAFConfig) };
    inline CreateWebCustomDomainInput& setWebWAFConfig(const WebWAFConfig & webWAFConfig) { DARABONBA_PTR_SET_VALUE(webWAFConfig_, webWAFConfig) };
    inline CreateWebCustomDomainInput& setWebWAFConfig(WebWAFConfig && webWAFConfig) { DARABONBA_PTR_SET_RVALUE(webWAFConfig_, webWAFConfig) };


  protected:
    shared_ptr<string> defaultForwardingAppName_ {};
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<string> protocol_ {};
    shared_ptr<RouteConfig> routeConfig_ {};
    shared_ptr<WebCertConfig> webCertConfig_ {};
    shared_ptr<WebTLSConfig> webTLSConfig_ {};
    shared_ptr<WebWAFConfig> webWAFConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
