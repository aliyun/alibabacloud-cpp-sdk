// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONSSOCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONSSOCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetApplicationSsoConfigRequestOidcSsoConfig.hpp>
#include <alibabacloud/models/SetApplicationSsoConfigRequestSamlSsoConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationSsoConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationSsoConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InitLoginType, initLoginType_);
      DARABONBA_PTR_TO_JSON(InitLoginUrl, initLoginUrl_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OidcSsoConfig, oidcSsoConfig_);
      DARABONBA_PTR_TO_JSON(SamlSsoConfig, samlSsoConfig_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationSsoConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InitLoginType, initLoginType_);
      DARABONBA_PTR_FROM_JSON(InitLoginUrl, initLoginUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OidcSsoConfig, oidcSsoConfig_);
      DARABONBA_PTR_FROM_JSON(SamlSsoConfig, samlSsoConfig_);
    };
    SetApplicationSsoConfigRequest() = default ;
    SetApplicationSsoConfigRequest(const SetApplicationSsoConfigRequest &) = default ;
    SetApplicationSsoConfigRequest(SetApplicationSsoConfigRequest &&) = default ;
    SetApplicationSsoConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationSsoConfigRequest() = default ;
    SetApplicationSsoConfigRequest& operator=(const SetApplicationSsoConfigRequest &) = default ;
    SetApplicationSsoConfigRequest& operator=(SetApplicationSsoConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->clientToken_ == nullptr && return this->initLoginType_ == nullptr && return this->initLoginUrl_ == nullptr && return this->instanceId_ == nullptr && return this->oidcSsoConfig_ == nullptr
        && return this->samlSsoConfig_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline SetApplicationSsoConfigRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SetApplicationSsoConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // initLoginType Field Functions 
    bool hasInitLoginType() const { return this->initLoginType_ != nullptr;};
    void deleteInitLoginType() { this->initLoginType_ = nullptr;};
    inline string initLoginType() const { DARABONBA_PTR_GET_DEFAULT(initLoginType_, "") };
    inline SetApplicationSsoConfigRequest& setInitLoginType(string initLoginType) { DARABONBA_PTR_SET_VALUE(initLoginType_, initLoginType) };


    // initLoginUrl Field Functions 
    bool hasInitLoginUrl() const { return this->initLoginUrl_ != nullptr;};
    void deleteInitLoginUrl() { this->initLoginUrl_ = nullptr;};
    inline string initLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(initLoginUrl_, "") };
    inline SetApplicationSsoConfigRequest& setInitLoginUrl(string initLoginUrl) { DARABONBA_PTR_SET_VALUE(initLoginUrl_, initLoginUrl) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetApplicationSsoConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // oidcSsoConfig Field Functions 
    bool hasOidcSsoConfig() const { return this->oidcSsoConfig_ != nullptr;};
    void deleteOidcSsoConfig() { this->oidcSsoConfig_ = nullptr;};
    inline const SetApplicationSsoConfigRequestOidcSsoConfig & oidcSsoConfig() const { DARABONBA_PTR_GET_CONST(oidcSsoConfig_, SetApplicationSsoConfigRequestOidcSsoConfig) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig oidcSsoConfig() { DARABONBA_PTR_GET(oidcSsoConfig_, SetApplicationSsoConfigRequestOidcSsoConfig) };
    inline SetApplicationSsoConfigRequest& setOidcSsoConfig(const SetApplicationSsoConfigRequestOidcSsoConfig & oidcSsoConfig) { DARABONBA_PTR_SET_VALUE(oidcSsoConfig_, oidcSsoConfig) };
    inline SetApplicationSsoConfigRequest& setOidcSsoConfig(SetApplicationSsoConfigRequestOidcSsoConfig && oidcSsoConfig) { DARABONBA_PTR_SET_RVALUE(oidcSsoConfig_, oidcSsoConfig) };


    // samlSsoConfig Field Functions 
    bool hasSamlSsoConfig() const { return this->samlSsoConfig_ != nullptr;};
    void deleteSamlSsoConfig() { this->samlSsoConfig_ = nullptr;};
    inline const SetApplicationSsoConfigRequestSamlSsoConfig & samlSsoConfig() const { DARABONBA_PTR_GET_CONST(samlSsoConfig_, SetApplicationSsoConfigRequestSamlSsoConfig) };
    inline SetApplicationSsoConfigRequestSamlSsoConfig samlSsoConfig() { DARABONBA_PTR_GET(samlSsoConfig_, SetApplicationSsoConfigRequestSamlSsoConfig) };
    inline SetApplicationSsoConfigRequest& setSamlSsoConfig(const SetApplicationSsoConfigRequestSamlSsoConfig & samlSsoConfig) { DARABONBA_PTR_SET_VALUE(samlSsoConfig_, samlSsoConfig) };
    inline SetApplicationSsoConfigRequest& setSamlSsoConfig(SetApplicationSsoConfigRequestSamlSsoConfig && samlSsoConfig) { DARABONBA_PTR_SET_RVALUE(samlSsoConfig_, samlSsoConfig) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // Idp client token.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The initial SSO method. Valid values:
    // 
    // *   only_app_init_sso: Only application-initiated SSO is allowed. This method is selected by default when the SSO protocol of the application is an OIDC protocol. If this method is selected when the SSO protocol of the application is SAML, the InitLoginUrl parameter is required.
    // *   idaas_or_app_init_sso: IDaaS-initiated SSO and application-initiated SSO are allowed. This method is selected by default when the SSO protocol of the application is SAML. If this method is selected when the SSO protocol of the application is an OIDC protocol, the InitLoginUrl parameter is required.
    std::shared_ptr<string> initLoginType_ = nullptr;
    // The initial webhook URL of SSO. This parameter is required when the SSO protocol of the application is an OIDC protocol and the InitLoginType parameters is set to idaas_or_app_init_sso or when the SSO protocol of the application is SAML and the InitLoginType parameter is set to only_app_init_sso.
    std::shared_ptr<string> initLoginUrl_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The Open ID Connect (OIDC)-based SSO configuration attributes of the application.
    std::shared_ptr<SetApplicationSsoConfigRequestOidcSsoConfig> oidcSsoConfig_ = nullptr;
    // The Security Assertion Markup Language (SAML)-based SSO configuration attributes of the application.
    std::shared_ptr<SetApplicationSsoConfigRequestSamlSsoConfig> samlSsoConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
