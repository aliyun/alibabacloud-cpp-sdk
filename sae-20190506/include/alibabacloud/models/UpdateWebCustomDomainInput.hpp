// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWEBCUSTOMDOMAININPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWEBCUSTOMDOMAININPUT_HPP_
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
  class UpdateWebCustomDomainInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWebCustomDomainInput& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultForwardingAppName, defaultForwardingAppName_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RouteConfig, routeConfig_);
      DARABONBA_PTR_TO_JSON(WebCertConfig, webCertConfig_);
      DARABONBA_PTR_TO_JSON(WebTLSConfig, webTLSConfig_);
      DARABONBA_PTR_TO_JSON(WebWAFConfig, webWAFConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWebCustomDomainInput& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultForwardingAppName, defaultForwardingAppName_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RouteConfig, routeConfig_);
      DARABONBA_PTR_FROM_JSON(WebCertConfig, webCertConfig_);
      DARABONBA_PTR_FROM_JSON(WebTLSConfig, webTLSConfig_);
      DARABONBA_PTR_FROM_JSON(WebWAFConfig, webWAFConfig_);
    };
    UpdateWebCustomDomainInput() = default ;
    UpdateWebCustomDomainInput(const UpdateWebCustomDomainInput &) = default ;
    UpdateWebCustomDomainInput(UpdateWebCustomDomainInput &&) = default ;
    UpdateWebCustomDomainInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWebCustomDomainInput() = default ;
    UpdateWebCustomDomainInput& operator=(const UpdateWebCustomDomainInput &) = default ;
    UpdateWebCustomDomainInput& operator=(UpdateWebCustomDomainInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultForwardingAppName_ != nullptr
        && this->protocol_ != nullptr && this->routeConfig_ != nullptr && this->webCertConfig_ != nullptr && this->webTLSConfig_ != nullptr && this->webWAFConfig_ != nullptr; };
    // defaultForwardingAppName Field Functions 
    bool hasDefaultForwardingAppName() const { return this->defaultForwardingAppName_ != nullptr;};
    void deleteDefaultForwardingAppName() { this->defaultForwardingAppName_ = nullptr;};
    inline string defaultForwardingAppName() const { DARABONBA_PTR_GET_DEFAULT(defaultForwardingAppName_, "") };
    inline UpdateWebCustomDomainInput& setDefaultForwardingAppName(string defaultForwardingAppName) { DARABONBA_PTR_SET_VALUE(defaultForwardingAppName_, defaultForwardingAppName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateWebCustomDomainInput& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // routeConfig Field Functions 
    bool hasRouteConfig() const { return this->routeConfig_ != nullptr;};
    void deleteRouteConfig() { this->routeConfig_ = nullptr;};
    inline const RouteConfig & routeConfig() const { DARABONBA_PTR_GET_CONST(routeConfig_, RouteConfig) };
    inline RouteConfig routeConfig() { DARABONBA_PTR_GET(routeConfig_, RouteConfig) };
    inline UpdateWebCustomDomainInput& setRouteConfig(const RouteConfig & routeConfig) { DARABONBA_PTR_SET_VALUE(routeConfig_, routeConfig) };
    inline UpdateWebCustomDomainInput& setRouteConfig(RouteConfig && routeConfig) { DARABONBA_PTR_SET_RVALUE(routeConfig_, routeConfig) };


    // webCertConfig Field Functions 
    bool hasWebCertConfig() const { return this->webCertConfig_ != nullptr;};
    void deleteWebCertConfig() { this->webCertConfig_ = nullptr;};
    inline const WebCertConfig & webCertConfig() const { DARABONBA_PTR_GET_CONST(webCertConfig_, WebCertConfig) };
    inline WebCertConfig webCertConfig() { DARABONBA_PTR_GET(webCertConfig_, WebCertConfig) };
    inline UpdateWebCustomDomainInput& setWebCertConfig(const WebCertConfig & webCertConfig) { DARABONBA_PTR_SET_VALUE(webCertConfig_, webCertConfig) };
    inline UpdateWebCustomDomainInput& setWebCertConfig(WebCertConfig && webCertConfig) { DARABONBA_PTR_SET_RVALUE(webCertConfig_, webCertConfig) };


    // webTLSConfig Field Functions 
    bool hasWebTLSConfig() const { return this->webTLSConfig_ != nullptr;};
    void deleteWebTLSConfig() { this->webTLSConfig_ = nullptr;};
    inline const WebTLSConfig & webTLSConfig() const { DARABONBA_PTR_GET_CONST(webTLSConfig_, WebTLSConfig) };
    inline WebTLSConfig webTLSConfig() { DARABONBA_PTR_GET(webTLSConfig_, WebTLSConfig) };
    inline UpdateWebCustomDomainInput& setWebTLSConfig(const WebTLSConfig & webTLSConfig) { DARABONBA_PTR_SET_VALUE(webTLSConfig_, webTLSConfig) };
    inline UpdateWebCustomDomainInput& setWebTLSConfig(WebTLSConfig && webTLSConfig) { DARABONBA_PTR_SET_RVALUE(webTLSConfig_, webTLSConfig) };


    // webWAFConfig Field Functions 
    bool hasWebWAFConfig() const { return this->webWAFConfig_ != nullptr;};
    void deleteWebWAFConfig() { this->webWAFConfig_ = nullptr;};
    inline const WebWAFConfig & webWAFConfig() const { DARABONBA_PTR_GET_CONST(webWAFConfig_, WebWAFConfig) };
    inline WebWAFConfig webWAFConfig() { DARABONBA_PTR_GET(webWAFConfig_, WebWAFConfig) };
    inline UpdateWebCustomDomainInput& setWebWAFConfig(const WebWAFConfig & webWAFConfig) { DARABONBA_PTR_SET_VALUE(webWAFConfig_, webWAFConfig) };
    inline UpdateWebCustomDomainInput& setWebWAFConfig(WebWAFConfig && webWAFConfig) { DARABONBA_PTR_SET_RVALUE(webWAFConfig_, webWAFConfig) };


  protected:
    std::shared_ptr<string> defaultForwardingAppName_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<RouteConfig> routeConfig_ = nullptr;
    std::shared_ptr<WebCertConfig> webCertConfig_ = nullptr;
    std::shared_ptr<WebTLSConfig> webTLSConfig_ = nullptr;
    std::shared_ptr<WebWAFConfig> webWAFConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
