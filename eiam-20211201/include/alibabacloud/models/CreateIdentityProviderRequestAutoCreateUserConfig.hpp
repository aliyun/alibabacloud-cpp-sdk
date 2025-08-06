// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTAUTOCREATEUSERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTAUTOCREATEUSERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderRequestAutoCreateUserConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequestAutoCreateUserConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreateUserStatus, autoCreateUserStatus_);
      DARABONBA_PTR_TO_JSON(TargetOrganizationalUnitIds, targetOrganizationalUnitIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequestAutoCreateUserConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreateUserStatus, autoCreateUserStatus_);
      DARABONBA_PTR_FROM_JSON(TargetOrganizationalUnitIds, targetOrganizationalUnitIds_);
    };
    CreateIdentityProviderRequestAutoCreateUserConfig() = default ;
    CreateIdentityProviderRequestAutoCreateUserConfig(const CreateIdentityProviderRequestAutoCreateUserConfig &) = default ;
    CreateIdentityProviderRequestAutoCreateUserConfig(CreateIdentityProviderRequestAutoCreateUserConfig &&) = default ;
    CreateIdentityProviderRequestAutoCreateUserConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequestAutoCreateUserConfig() = default ;
    CreateIdentityProviderRequestAutoCreateUserConfig& operator=(const CreateIdentityProviderRequestAutoCreateUserConfig &) = default ;
    CreateIdentityProviderRequestAutoCreateUserConfig& operator=(CreateIdentityProviderRequestAutoCreateUserConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoCreateUserStatus_ != nullptr
        && this->targetOrganizationalUnitIds_ != nullptr; };
    // autoCreateUserStatus Field Functions 
    bool hasAutoCreateUserStatus() const { return this->autoCreateUserStatus_ != nullptr;};
    void deleteAutoCreateUserStatus() { this->autoCreateUserStatus_ = nullptr;};
    inline string autoCreateUserStatus() const { DARABONBA_PTR_GET_DEFAULT(autoCreateUserStatus_, "") };
    inline CreateIdentityProviderRequestAutoCreateUserConfig& setAutoCreateUserStatus(string autoCreateUserStatus) { DARABONBA_PTR_SET_VALUE(autoCreateUserStatus_, autoCreateUserStatus) };


    // targetOrganizationalUnitIds Field Functions 
    bool hasTargetOrganizationalUnitIds() const { return this->targetOrganizationalUnitIds_ != nullptr;};
    void deleteTargetOrganizationalUnitIds() { this->targetOrganizationalUnitIds_ = nullptr;};
    inline const vector<string> & targetOrganizationalUnitIds() const { DARABONBA_PTR_GET_CONST(targetOrganizationalUnitIds_, vector<string>) };
    inline vector<string> targetOrganizationalUnitIds() { DARABONBA_PTR_GET(targetOrganizationalUnitIds_, vector<string>) };
    inline CreateIdentityProviderRequestAutoCreateUserConfig& setTargetOrganizationalUnitIds(const vector<string> & targetOrganizationalUnitIds) { DARABONBA_PTR_SET_VALUE(targetOrganizationalUnitIds_, targetOrganizationalUnitIds) };
    inline CreateIdentityProviderRequestAutoCreateUserConfig& setTargetOrganizationalUnitIds(vector<string> && targetOrganizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(targetOrganizationalUnitIds_, targetOrganizationalUnitIds) };


  protected:
    // Whether auto-creation of accounts is enabled. Possible values:
    // - Disabled: disabled
    // 
    // - Enabled: enabled
    std::shared_ptr<string> autoCreateUserStatus_ = nullptr;
    // Target organizational unit IDs collection.
    std::shared_ptr<vector<string>> targetOrganizationalUnitIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
