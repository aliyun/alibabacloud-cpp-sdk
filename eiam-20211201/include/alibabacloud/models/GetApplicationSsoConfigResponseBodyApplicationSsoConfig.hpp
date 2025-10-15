// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONSSOCONFIGRESPONSEBODYAPPLICATIONSSOCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONSSOCONFIGRESPONSEBODYAPPLICATIONSSOCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig.hpp>
#include <alibabacloud/models/GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain.hpp>
#include <alibabacloud/models/GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationSsoConfigResponseBodyApplicationSsoConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationSsoConfigResponseBodyApplicationSsoConfig& obj) { 
      DARABONBA_PTR_TO_JSON(InitLoginType, initLoginType_);
      DARABONBA_PTR_TO_JSON(InitLoginUrl, initLoginUrl_);
      DARABONBA_PTR_TO_JSON(OidcSsoConfig, oidcSsoConfig_);
      DARABONBA_PTR_TO_JSON(ProtocolEndpointDomain, protocolEndpointDomain_);
      DARABONBA_PTR_TO_JSON(SamlSsoConfig, samlSsoConfig_);
      DARABONBA_PTR_TO_JSON(SsoStatus, ssoStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationSsoConfigResponseBodyApplicationSsoConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(InitLoginType, initLoginType_);
      DARABONBA_PTR_FROM_JSON(InitLoginUrl, initLoginUrl_);
      DARABONBA_PTR_FROM_JSON(OidcSsoConfig, oidcSsoConfig_);
      DARABONBA_PTR_FROM_JSON(ProtocolEndpointDomain, protocolEndpointDomain_);
      DARABONBA_PTR_FROM_JSON(SamlSsoConfig, samlSsoConfig_);
      DARABONBA_PTR_FROM_JSON(SsoStatus, ssoStatus_);
    };
    GetApplicationSsoConfigResponseBodyApplicationSsoConfig() = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfig(const GetApplicationSsoConfigResponseBodyApplicationSsoConfig &) = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfig(GetApplicationSsoConfigResponseBodyApplicationSsoConfig &&) = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationSsoConfigResponseBodyApplicationSsoConfig() = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfig& operator=(const GetApplicationSsoConfigResponseBodyApplicationSsoConfig &) = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfig& operator=(GetApplicationSsoConfigResponseBodyApplicationSsoConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->initLoginType_ == nullptr
        && return this->initLoginUrl_ == nullptr && return this->oidcSsoConfig_ == nullptr && return this->protocolEndpointDomain_ == nullptr && return this->samlSsoConfig_ == nullptr && return this->ssoStatus_ == nullptr; };
    // initLoginType Field Functions 
    bool hasInitLoginType() const { return this->initLoginType_ != nullptr;};
    void deleteInitLoginType() { this->initLoginType_ = nullptr;};
    inline string initLoginType() const { DARABONBA_PTR_GET_DEFAULT(initLoginType_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfig& setInitLoginType(string initLoginType) { DARABONBA_PTR_SET_VALUE(initLoginType_, initLoginType) };


    // initLoginUrl Field Functions 
    bool hasInitLoginUrl() const { return this->initLoginUrl_ != nullptr;};
    void deleteInitLoginUrl() { this->initLoginUrl_ = nullptr;};
    inline string initLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(initLoginUrl_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfig& setInitLoginUrl(string initLoginUrl) { DARABONBA_PTR_SET_VALUE(initLoginUrl_, initLoginUrl) };


    // oidcSsoConfig Field Functions 
    bool hasOidcSsoConfig() const { return this->oidcSsoConfig_ != nullptr;};
    void deleteOidcSsoConfig() { this->oidcSsoConfig_ = nullptr;};
    inline const Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig & oidcSsoConfig() const { DARABONBA_PTR_GET_CONST(oidcSsoConfig_, Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig) };
    inline Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig oidcSsoConfig() { DARABONBA_PTR_GET(oidcSsoConfig_, Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig) };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfig& setOidcSsoConfig(const Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig & oidcSsoConfig) { DARABONBA_PTR_SET_VALUE(oidcSsoConfig_, oidcSsoConfig) };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfig& setOidcSsoConfig(Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig && oidcSsoConfig) { DARABONBA_PTR_SET_RVALUE(oidcSsoConfig_, oidcSsoConfig) };


    // protocolEndpointDomain Field Functions 
    bool hasProtocolEndpointDomain() const { return this->protocolEndpointDomain_ != nullptr;};
    void deleteProtocolEndpointDomain() { this->protocolEndpointDomain_ = nullptr;};
    inline const Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain & protocolEndpointDomain() const { DARABONBA_PTR_GET_CONST(protocolEndpointDomain_, Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain) };
    inline Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain protocolEndpointDomain() { DARABONBA_PTR_GET(protocolEndpointDomain_, Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain) };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfig& setProtocolEndpointDomain(const Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain & protocolEndpointDomain) { DARABONBA_PTR_SET_VALUE(protocolEndpointDomain_, protocolEndpointDomain) };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfig& setProtocolEndpointDomain(Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain && protocolEndpointDomain) { DARABONBA_PTR_SET_RVALUE(protocolEndpointDomain_, protocolEndpointDomain) };


    // samlSsoConfig Field Functions 
    bool hasSamlSsoConfig() const { return this->samlSsoConfig_ != nullptr;};
    void deleteSamlSsoConfig() { this->samlSsoConfig_ = nullptr;};
    inline const Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig & samlSsoConfig() const { DARABONBA_PTR_GET_CONST(samlSsoConfig_, Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig) };
    inline Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig samlSsoConfig() { DARABONBA_PTR_GET(samlSsoConfig_, Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig) };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfig& setSamlSsoConfig(const Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig & samlSsoConfig) { DARABONBA_PTR_SET_VALUE(samlSsoConfig_, samlSsoConfig) };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfig& setSamlSsoConfig(Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig && samlSsoConfig) { DARABONBA_PTR_SET_RVALUE(samlSsoConfig_, samlSsoConfig) };


    // ssoStatus Field Functions 
    bool hasSsoStatus() const { return this->ssoStatus_ != nullptr;};
    void deleteSsoStatus() { this->ssoStatus_ = nullptr;};
    inline string ssoStatus() const { DARABONBA_PTR_GET_DEFAULT(ssoStatus_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfig& setSsoStatus(string ssoStatus) { DARABONBA_PTR_SET_VALUE(ssoStatus_, ssoStatus) };


  protected:
    // The initial SSO method. Valid values:
    // 
    // *   only_app_init_sso: Only application-initiated SSO is allowed. This method is selected by default when the SSO protocol of the application is an OIDC protocol. If this method is selected when the SSO protocol of the application is SAML, the InitLoginUrl parameter is required.
    // *   idaas_or_app_init_sso: IDaaS-initiated SSO and application-initiated SSO are allowed. This method is selected by default when the SSO protocol of the application is SAML. If this method is selected when the SSO protocol of the application is an OIDC protocol, the InitLoginUrl parameter is required.
    std::shared_ptr<string> initLoginType_ = nullptr;
    // The initial webhook URL of SSO. This parameter is required when the SSO protocol of the application is an OIDC protocol and the InitLoginType parameters is set to idaas_or_app_init_sso or when the SSO protocol of the application is SAML and the InitLoginType parameter is set to only_app_init_sso.
    std::shared_ptr<string> initLoginUrl_ = nullptr;
    // The Open ID Connect (OIDC)-based SSO configuration attributes of the application. This parameter is returned only when the SSO protocol of the application is an OIDC protocol.
    std::shared_ptr<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigOidcSsoConfig> oidcSsoConfig_ = nullptr;
    // The configuration of the metadata endpoint provided by the application.
    std::shared_ptr<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigProtocolEndpointDomain> protocolEndpointDomain_ = nullptr;
    // The Security Assertion Markup Language (SAML)-based SSO configuration attributes of the application. This parameter is returned only if the SSO protocol of the application is SAML 2.0.
    std::shared_ptr<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig> samlSsoConfig_ = nullptr;
    // The SSO feature status of the application. Valid values:
    // 
    // *   enabled: The feature is enabled.
    // *   disabled: The feature is disabled.
    std::shared_ptr<string> ssoStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
