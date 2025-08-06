// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONPROVISIONINGCONFIGREQUESTSCIMPROVISIONINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONPROVISIONINGCONFIGREQUESTSCIMPROVISIONINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationProvisioningConfigRequestScimProvisioningConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationProvisioningConfigRequestScimProvisioningConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AuthnConfiguration, authnConfiguration_);
      DARABONBA_PTR_TO_JSON(FullPushScopes, fullPushScopes_);
      DARABONBA_PTR_TO_JSON(ProvisioningActions, provisioningActions_);
      DARABONBA_PTR_TO_JSON(ScimBaseUrl, scimBaseUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationProvisioningConfigRequestScimProvisioningConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthnConfiguration, authnConfiguration_);
      DARABONBA_PTR_FROM_JSON(FullPushScopes, fullPushScopes_);
      DARABONBA_PTR_FROM_JSON(ProvisioningActions, provisioningActions_);
      DARABONBA_PTR_FROM_JSON(ScimBaseUrl, scimBaseUrl_);
    };
    SetApplicationProvisioningConfigRequestScimProvisioningConfig() = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfig(const SetApplicationProvisioningConfigRequestScimProvisioningConfig &) = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfig(SetApplicationProvisioningConfigRequestScimProvisioningConfig &&) = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationProvisioningConfigRequestScimProvisioningConfig() = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfig& operator=(const SetApplicationProvisioningConfigRequestScimProvisioningConfig &) = default ;
    SetApplicationProvisioningConfigRequestScimProvisioningConfig& operator=(SetApplicationProvisioningConfigRequestScimProvisioningConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authnConfiguration_ != nullptr
        && this->fullPushScopes_ != nullptr && this->provisioningActions_ != nullptr && this->scimBaseUrl_ != nullptr; };
    // authnConfiguration Field Functions 
    bool hasAuthnConfiguration() const { return this->authnConfiguration_ != nullptr;};
    void deleteAuthnConfiguration() { this->authnConfiguration_ = nullptr;};
    inline const Models::SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration & authnConfiguration() const { DARABONBA_PTR_GET_CONST(authnConfiguration_, Models::SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration) };
    inline Models::SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration authnConfiguration() { DARABONBA_PTR_GET(authnConfiguration_, Models::SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration) };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfig& setAuthnConfiguration(const Models::SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration & authnConfiguration) { DARABONBA_PTR_SET_VALUE(authnConfiguration_, authnConfiguration) };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfig& setAuthnConfiguration(Models::SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration && authnConfiguration) { DARABONBA_PTR_SET_RVALUE(authnConfiguration_, authnConfiguration) };


    // fullPushScopes Field Functions 
    bool hasFullPushScopes() const { return this->fullPushScopes_ != nullptr;};
    void deleteFullPushScopes() { this->fullPushScopes_ = nullptr;};
    inline const vector<string> & fullPushScopes() const { DARABONBA_PTR_GET_CONST(fullPushScopes_, vector<string>) };
    inline vector<string> fullPushScopes() { DARABONBA_PTR_GET(fullPushScopes_, vector<string>) };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfig& setFullPushScopes(const vector<string> & fullPushScopes) { DARABONBA_PTR_SET_VALUE(fullPushScopes_, fullPushScopes) };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfig& setFullPushScopes(vector<string> && fullPushScopes) { DARABONBA_PTR_SET_RVALUE(fullPushScopes_, fullPushScopes) };


    // provisioningActions Field Functions 
    bool hasProvisioningActions() const { return this->provisioningActions_ != nullptr;};
    void deleteProvisioningActions() { this->provisioningActions_ = nullptr;};
    inline const vector<string> & provisioningActions() const { DARABONBA_PTR_GET_CONST(provisioningActions_, vector<string>) };
    inline vector<string> provisioningActions() { DARABONBA_PTR_GET(provisioningActions_, vector<string>) };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfig& setProvisioningActions(const vector<string> & provisioningActions) { DARABONBA_PTR_SET_VALUE(provisioningActions_, provisioningActions) };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfig& setProvisioningActions(vector<string> && provisioningActions) { DARABONBA_PTR_SET_RVALUE(provisioningActions_, provisioningActions) };


    // scimBaseUrl Field Functions 
    bool hasScimBaseUrl() const { return this->scimBaseUrl_ != nullptr;};
    void deleteScimBaseUrl() { this->scimBaseUrl_ = nullptr;};
    inline string scimBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(scimBaseUrl_, "") };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfig& setScimBaseUrl(string scimBaseUrl) { DARABONBA_PTR_SET_VALUE(scimBaseUrl_, scimBaseUrl) };


  protected:
    // The configuration parameters related to SCIM-based synchronization.
    std::shared_ptr<Models::SetApplicationProvisioningConfigRequestScimProvisioningConfigAuthnConfiguration> authnConfiguration_ = nullptr;
    // The full synchronization scope of the SCIM protocol. Valid value:
    // 
    // *   urn:alibaba:idaas:app:scim:User:PUSH: full account data synchronization.
    std::shared_ptr<vector<string>> fullPushScopes_ = nullptr;
    // The resource operations of the SCIM protocol. Valid values:
    // 
    // *   urn:alibaba:idaas:app:scim:User:CREATE: account creation.
    // *   urn:alibaba:idaas:app:scim:User:UPDATE: account update.
    // *   urn:alibaba:idaas:app:scim:User:DELETE: account deletion.
    std::shared_ptr<vector<string>> provisioningActions_ = nullptr;
    // The base URL that the application uses to receive the SCIM protocol for IDaaS synchronization.
    std::shared_ptr<string> scimBaseUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
