// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGCONFIGRESPONSEBODYAPPLICATIONPROVISIONINGCONFIGSCIMPROVISIONINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGCONFIGRESPONSEBODYAPPLICATIONPROVISIONINGCONFIGSCIMPROVISIONINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AuthnConfiguration, authnConfiguration_);
      DARABONBA_PTR_TO_JSON(FullPushScopes, fullPushScopes_);
      DARABONBA_PTR_TO_JSON(ProvisioningActions, provisioningActions_);
      DARABONBA_PTR_TO_JSON(ScimBaseUrl, scimBaseUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthnConfiguration, authnConfiguration_);
      DARABONBA_PTR_FROM_JSON(FullPushScopes, fullPushScopes_);
      DARABONBA_PTR_FROM_JSON(ProvisioningActions, provisioningActions_);
      DARABONBA_PTR_FROM_JSON(ScimBaseUrl, scimBaseUrl_);
    };
    GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig() = default ;
    GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig(const GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig &) = default ;
    GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig(GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig &&) = default ;
    GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig() = default ;
    GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig& operator=(const GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig &) = default ;
    GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig& operator=(GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authnConfiguration_ == nullptr
        && return this->fullPushScopes_ == nullptr && return this->provisioningActions_ == nullptr && return this->scimBaseUrl_ == nullptr; };
    // authnConfiguration Field Functions 
    bool hasAuthnConfiguration() const { return this->authnConfiguration_ != nullptr;};
    void deleteAuthnConfiguration() { this->authnConfiguration_ = nullptr;};
    inline const Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration & authnConfiguration() const { DARABONBA_PTR_GET_CONST(authnConfiguration_, Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration) };
    inline Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration authnConfiguration() { DARABONBA_PTR_GET(authnConfiguration_, Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration) };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig& setAuthnConfiguration(const Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration & authnConfiguration) { DARABONBA_PTR_SET_VALUE(authnConfiguration_, authnConfiguration) };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig& setAuthnConfiguration(Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration && authnConfiguration) { DARABONBA_PTR_SET_RVALUE(authnConfiguration_, authnConfiguration) };


    // fullPushScopes Field Functions 
    bool hasFullPushScopes() const { return this->fullPushScopes_ != nullptr;};
    void deleteFullPushScopes() { this->fullPushScopes_ = nullptr;};
    inline const vector<string> & fullPushScopes() const { DARABONBA_PTR_GET_CONST(fullPushScopes_, vector<string>) };
    inline vector<string> fullPushScopes() { DARABONBA_PTR_GET(fullPushScopes_, vector<string>) };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig& setFullPushScopes(const vector<string> & fullPushScopes) { DARABONBA_PTR_SET_VALUE(fullPushScopes_, fullPushScopes) };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig& setFullPushScopes(vector<string> && fullPushScopes) { DARABONBA_PTR_SET_RVALUE(fullPushScopes_, fullPushScopes) };


    // provisioningActions Field Functions 
    bool hasProvisioningActions() const { return this->provisioningActions_ != nullptr;};
    void deleteProvisioningActions() { this->provisioningActions_ = nullptr;};
    inline const vector<string> & provisioningActions() const { DARABONBA_PTR_GET_CONST(provisioningActions_, vector<string>) };
    inline vector<string> provisioningActions() { DARABONBA_PTR_GET(provisioningActions_, vector<string>) };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig& setProvisioningActions(const vector<string> & provisioningActions) { DARABONBA_PTR_SET_VALUE(provisioningActions_, provisioningActions) };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig& setProvisioningActions(vector<string> && provisioningActions) { DARABONBA_PTR_SET_RVALUE(provisioningActions_, provisioningActions) };


    // scimBaseUrl Field Functions 
    bool hasScimBaseUrl() const { return this->scimBaseUrl_ != nullptr;};
    void deleteScimBaseUrl() { this->scimBaseUrl_ = nullptr;};
    inline string scimBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(scimBaseUrl_, "") };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig& setScimBaseUrl(string scimBaseUrl) { DARABONBA_PTR_SET_VALUE(scimBaseUrl_, scimBaseUrl) };


  protected:
    // The configuration parameters related to SCIM-based synchronization.
    std::shared_ptr<Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfigAuthnConfiguration> authnConfiguration_ = nullptr;
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
