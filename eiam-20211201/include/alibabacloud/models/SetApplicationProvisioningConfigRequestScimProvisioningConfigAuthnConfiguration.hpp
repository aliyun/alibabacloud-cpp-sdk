// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONPROVISIONINGCONFIGREQUESTSCIMPROVISIONINGCONFIGAUTHNCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONPROVISIONINGCONFIGREQUESTSCIMPROVISIONINGCONFIGAUTHNCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(AuthnMode, authnMode_);
      DARABONBA_PTR_TO_JSON(AuthnParam, authnParam_);
      DARABONBA_PTR_TO_JSON(GrantType, grantType_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthnMode, authnMode_);
      DARABONBA_PTR_FROM_JSON(AuthnParam, authnParam_);
      DARABONBA_PTR_FROM_JSON(GrantType, grantType_);
    };
    SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration() = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration(const SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration &) = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration(SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration &&) = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration() = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration& operator=(const SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration &) = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration& operator=(SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authnMode_ == nullptr
        && return this->authnParam_ == nullptr && return this->grantType_ == nullptr; };
    // authnMode Field Functions 
    bool hasAuthnMode() const { return this->authnMode_ != nullptr;};
    void deleteAuthnMode() { this->authnMode_ = nullptr;};
    inline string authnMode() const { DARABONBA_PTR_GET_DEFAULT(authnMode_, "") };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration& setAuthnMode(string authnMode) { DARABONBA_PTR_SET_VALUE(authnMode_, authnMode) };


    // authnParam Field Functions 
    bool hasAuthnParam() const { return this->authnParam_ != nullptr;};
    void deleteAuthnParam() { this->authnParam_ = nullptr;};
    inline const Models::SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam & authnParam() const { DARABONBA_PTR_GET_CONST(authnParam_, Models::SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam) };
    inline Models::SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam authnParam() { DARABONBA_PTR_GET(authnParam_, Models::SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam) };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration& setAuthnParam(const Models::SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam & authnParam) { DARABONBA_PTR_SET_VALUE(authnParam_, authnParam) };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration& setAuthnParam(Models::SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam && authnParam) { DARABONBA_PTR_SET_RVALUE(authnParam_, authnParam) };


    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string grantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


  protected:
    // The authentication mode of the SCIM protocol. Valid value:
    // 
    // *   oauth2: OAuth2.0 mode.
    std::shared_ptr<string> authnMode_ = nullptr;
    // The configuration parameters related to authorization.
    // 
    // *   If the GrantType parameter is set to client_credentials, you can set the configuration parameters ClientId, ClientSecret, and AuthnMethod.
    // *   If the GrantType parameter is set to bearer_token, you can set the configuration parameter AccessToken.
    std::shared_ptr<Models::SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfigurationAuthnParam> authnParam_ = nullptr;
    // The grant type of the SCIM protocol. Valid values:
    // 
    // *   client_credentials: client mode.
    // *   bearer_token: key mode.
    std::shared_ptr<string> grantType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
