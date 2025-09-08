// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBCUSTOMDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_WEBCUSTOMDOMAIN_HPP_
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
  class WebCustomDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebCustomDomain& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DefaultForwardingAppName, defaultForwardingAppName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RouteConfig, routeConfig_);
      DARABONBA_PTR_TO_JSON(WebCertConfig, webCertConfig_);
      DARABONBA_PTR_TO_JSON(WebTLSConfig, webTLSConfig_);
      DARABONBA_PTR_TO_JSON(WebWAFConfig, webWAFConfig_);
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
    };
    friend void from_json(const Darabonba::Json& j, WebCustomDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DefaultForwardingAppName, defaultForwardingAppName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RouteConfig, routeConfig_);
      DARABONBA_PTR_FROM_JSON(WebCertConfig, webCertConfig_);
      DARABONBA_PTR_FROM_JSON(WebTLSConfig, webTLSConfig_);
      DARABONBA_PTR_FROM_JSON(WebWAFConfig, webWAFConfig_);
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
    };
    WebCustomDomain() = default ;
    WebCustomDomain(const WebCustomDomain &) = default ;
    WebCustomDomain(WebCustomDomain &&) = default ;
    WebCustomDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebCustomDomain() = default ;
    WebCustomDomain& operator=(const WebCustomDomain &) = default ;
    WebCustomDomain& operator=(WebCustomDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTime_ != nullptr
        && this->defaultForwardingAppName_ != nullptr && this->domainName_ != nullptr && this->lastModifiedTime_ != nullptr && this->namespaceId_ != nullptr && this->protocol_ != nullptr
        && this->routeConfig_ != nullptr && this->webCertConfig_ != nullptr && this->webTLSConfig_ != nullptr && this->webWAFConfig_ != nullptr && this->accountId_ != nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline WebCustomDomain& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // defaultForwardingAppName Field Functions 
    bool hasDefaultForwardingAppName() const { return this->defaultForwardingAppName_ != nullptr;};
    void deleteDefaultForwardingAppName() { this->defaultForwardingAppName_ = nullptr;};
    inline string defaultForwardingAppName() const { DARABONBA_PTR_GET_DEFAULT(defaultForwardingAppName_, "") };
    inline WebCustomDomain& setDefaultForwardingAppName(string defaultForwardingAppName) { DARABONBA_PTR_SET_VALUE(defaultForwardingAppName_, defaultForwardingAppName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline WebCustomDomain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline WebCustomDomain& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline WebCustomDomain& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline WebCustomDomain& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // routeConfig Field Functions 
    bool hasRouteConfig() const { return this->routeConfig_ != nullptr;};
    void deleteRouteConfig() { this->routeConfig_ = nullptr;};
    inline const RouteConfig & routeConfig() const { DARABONBA_PTR_GET_CONST(routeConfig_, RouteConfig) };
    inline RouteConfig routeConfig() { DARABONBA_PTR_GET(routeConfig_, RouteConfig) };
    inline WebCustomDomain& setRouteConfig(const RouteConfig & routeConfig) { DARABONBA_PTR_SET_VALUE(routeConfig_, routeConfig) };
    inline WebCustomDomain& setRouteConfig(RouteConfig && routeConfig) { DARABONBA_PTR_SET_RVALUE(routeConfig_, routeConfig) };


    // webCertConfig Field Functions 
    bool hasWebCertConfig() const { return this->webCertConfig_ != nullptr;};
    void deleteWebCertConfig() { this->webCertConfig_ = nullptr;};
    inline const WebCertConfig & webCertConfig() const { DARABONBA_PTR_GET_CONST(webCertConfig_, WebCertConfig) };
    inline WebCertConfig webCertConfig() { DARABONBA_PTR_GET(webCertConfig_, WebCertConfig) };
    inline WebCustomDomain& setWebCertConfig(const WebCertConfig & webCertConfig) { DARABONBA_PTR_SET_VALUE(webCertConfig_, webCertConfig) };
    inline WebCustomDomain& setWebCertConfig(WebCertConfig && webCertConfig) { DARABONBA_PTR_SET_RVALUE(webCertConfig_, webCertConfig) };


    // webTLSConfig Field Functions 
    bool hasWebTLSConfig() const { return this->webTLSConfig_ != nullptr;};
    void deleteWebTLSConfig() { this->webTLSConfig_ = nullptr;};
    inline const WebTLSConfig & webTLSConfig() const { DARABONBA_PTR_GET_CONST(webTLSConfig_, WebTLSConfig) };
    inline WebTLSConfig webTLSConfig() { DARABONBA_PTR_GET(webTLSConfig_, WebTLSConfig) };
    inline WebCustomDomain& setWebTLSConfig(const WebTLSConfig & webTLSConfig) { DARABONBA_PTR_SET_VALUE(webTLSConfig_, webTLSConfig) };
    inline WebCustomDomain& setWebTLSConfig(WebTLSConfig && webTLSConfig) { DARABONBA_PTR_SET_RVALUE(webTLSConfig_, webTLSConfig) };


    // webWAFConfig Field Functions 
    bool hasWebWAFConfig() const { return this->webWAFConfig_ != nullptr;};
    void deleteWebWAFConfig() { this->webWAFConfig_ = nullptr;};
    inline const WebWAFConfig & webWAFConfig() const { DARABONBA_PTR_GET_CONST(webWAFConfig_, WebWAFConfig) };
    inline WebWAFConfig webWAFConfig() { DARABONBA_PTR_GET(webWAFConfig_, WebWAFConfig) };
    inline WebCustomDomain& setWebWAFConfig(const WebWAFConfig & webWAFConfig) { DARABONBA_PTR_SET_VALUE(webWAFConfig_, webWAFConfig) };
    inline WebCustomDomain& setWebWAFConfig(WebWAFConfig && webWAFConfig) { DARABONBA_PTR_SET_RVALUE(webWAFConfig_, webWAFConfig) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline WebCustomDomain& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


  protected:
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> defaultForwardingAppName_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> lastModifiedTime_ = nullptr;
    std::shared_ptr<string> namespaceId_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<RouteConfig> routeConfig_ = nullptr;
    std::shared_ptr<WebCertConfig> webCertConfig_ = nullptr;
    std::shared_ptr<WebTLSConfig> webTLSConfig_ = nullptr;
    std::shared_ptr<WebWAFConfig> webWAFConfig_ = nullptr;
    std::shared_ptr<string> accountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
