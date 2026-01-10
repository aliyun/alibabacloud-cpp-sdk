// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMDOMAININPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMDOMAININPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CertConfig.hpp>
#include <alibabacloud/models/RouteConfig.hpp>
#include <alibabacloud/models/TLSConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateCustomDomainInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomDomainInput& obj) { 
      DARABONBA_PTR_TO_JSON(certConfig, certConfig_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(routeConfig, routeConfig_);
      DARABONBA_PTR_TO_JSON(tlsConfig, tlsConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomDomainInput& obj) { 
      DARABONBA_PTR_FROM_JSON(certConfig, certConfig_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(routeConfig, routeConfig_);
      DARABONBA_PTR_FROM_JSON(tlsConfig, tlsConfig_);
    };
    UpdateCustomDomainInput() = default ;
    UpdateCustomDomainInput(const UpdateCustomDomainInput &) = default ;
    UpdateCustomDomainInput(UpdateCustomDomainInput &&) = default ;
    UpdateCustomDomainInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomDomainInput() = default ;
    UpdateCustomDomainInput& operator=(const UpdateCustomDomainInput &) = default ;
    UpdateCustomDomainInput& operator=(UpdateCustomDomainInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certConfig_ == nullptr
        && this->description_ == nullptr && this->protocol_ == nullptr && this->routeConfig_ == nullptr && this->tlsConfig_ == nullptr; };
    // certConfig Field Functions 
    bool hasCertConfig() const { return this->certConfig_ != nullptr;};
    void deleteCertConfig() { this->certConfig_ = nullptr;};
    inline const CertConfig & getCertConfig() const { DARABONBA_PTR_GET_CONST(certConfig_, CertConfig) };
    inline CertConfig getCertConfig() { DARABONBA_PTR_GET(certConfig_, CertConfig) };
    inline UpdateCustomDomainInput& setCertConfig(const CertConfig & certConfig) { DARABONBA_PTR_SET_VALUE(certConfig_, certConfig) };
    inline UpdateCustomDomainInput& setCertConfig(CertConfig && certConfig) { DARABONBA_PTR_SET_RVALUE(certConfig_, certConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateCustomDomainInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateCustomDomainInput& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // routeConfig Field Functions 
    bool hasRouteConfig() const { return this->routeConfig_ != nullptr;};
    void deleteRouteConfig() { this->routeConfig_ = nullptr;};
    inline const RouteConfig & getRouteConfig() const { DARABONBA_PTR_GET_CONST(routeConfig_, RouteConfig) };
    inline RouteConfig getRouteConfig() { DARABONBA_PTR_GET(routeConfig_, RouteConfig) };
    inline UpdateCustomDomainInput& setRouteConfig(const RouteConfig & routeConfig) { DARABONBA_PTR_SET_VALUE(routeConfig_, routeConfig) };
    inline UpdateCustomDomainInput& setRouteConfig(RouteConfig && routeConfig) { DARABONBA_PTR_SET_RVALUE(routeConfig_, routeConfig) };


    // tlsConfig Field Functions 
    bool hasTlsConfig() const { return this->tlsConfig_ != nullptr;};
    void deleteTlsConfig() { this->tlsConfig_ = nullptr;};
    inline const TLSConfig & getTlsConfig() const { DARABONBA_PTR_GET_CONST(tlsConfig_, TLSConfig) };
    inline TLSConfig getTlsConfig() { DARABONBA_PTR_GET(tlsConfig_, TLSConfig) };
    inline UpdateCustomDomainInput& setTlsConfig(const TLSConfig & tlsConfig) { DARABONBA_PTR_SET_VALUE(tlsConfig_, tlsConfig) };
    inline UpdateCustomDomainInput& setTlsConfig(TLSConfig && tlsConfig) { DARABONBA_PTR_SET_RVALUE(tlsConfig_, tlsConfig) };


  protected:
    // HTTPS 证书的信息。
    shared_ptr<CertConfig> certConfig_ {};
    // 描述
    shared_ptr<string> description_ {};
    // 域名支持的协议类型：● HTTP：仅支持 HTTP 协议。● HTTPS：仅支持 HTTPS 协议。● HTTP,HTTPS：支持 HTTP 及 HTTPS 协议。
    shared_ptr<string> protocol_ {};
    // 路由表：自定义域名访问时的 PATH 到 资源 的映射。
    shared_ptr<RouteConfig> routeConfig_ {};
    // TLS 配置信息。
    shared_ptr<TLSConfig> tlsConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
