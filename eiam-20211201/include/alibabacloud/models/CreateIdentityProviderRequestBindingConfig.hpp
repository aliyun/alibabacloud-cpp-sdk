// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTBINDINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTBINDINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderRequestBindingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequestBindingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AutoMatchUserProfileExpressions, autoMatchUserProfileExpressions_);
      DARABONBA_PTR_TO_JSON(AutoMatchUserStatus, autoMatchUserStatus_);
      DARABONBA_PTR_TO_JSON(MappingBindingStatus, mappingBindingStatus_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequestBindingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoMatchUserProfileExpressions, autoMatchUserProfileExpressions_);
      DARABONBA_PTR_FROM_JSON(AutoMatchUserStatus, autoMatchUserStatus_);
      DARABONBA_PTR_FROM_JSON(MappingBindingStatus, mappingBindingStatus_);
    };
    CreateIdentityProviderRequestBindingConfig() = default ;
    CreateIdentityProviderRequestBindingConfig(const CreateIdentityProviderRequestBindingConfig &) = default ;
    CreateIdentityProviderRequestBindingConfig(CreateIdentityProviderRequestBindingConfig &&) = default ;
    CreateIdentityProviderRequestBindingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequestBindingConfig() = default ;
    CreateIdentityProviderRequestBindingConfig& operator=(const CreateIdentityProviderRequestBindingConfig &) = default ;
    CreateIdentityProviderRequestBindingConfig& operator=(CreateIdentityProviderRequestBindingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoMatchUserProfileExpressions_ != nullptr
        && this->autoMatchUserStatus_ != nullptr && this->mappingBindingStatus_ != nullptr; };
    // autoMatchUserProfileExpressions Field Functions 
    bool hasAutoMatchUserProfileExpressions() const { return this->autoMatchUserProfileExpressions_ != nullptr;};
    void deleteAutoMatchUserProfileExpressions() { this->autoMatchUserProfileExpressions_ = nullptr;};
    inline const vector<Models::CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions> & autoMatchUserProfileExpressions() const { DARABONBA_PTR_GET_CONST(autoMatchUserProfileExpressions_, vector<Models::CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions>) };
    inline vector<Models::CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions> autoMatchUserProfileExpressions() { DARABONBA_PTR_GET(autoMatchUserProfileExpressions_, vector<Models::CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions>) };
    inline CreateIdentityProviderRequestBindingConfig& setAutoMatchUserProfileExpressions(const vector<Models::CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions> & autoMatchUserProfileExpressions) { DARABONBA_PTR_SET_VALUE(autoMatchUserProfileExpressions_, autoMatchUserProfileExpressions) };
    inline CreateIdentityProviderRequestBindingConfig& setAutoMatchUserProfileExpressions(vector<Models::CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions> && autoMatchUserProfileExpressions) { DARABONBA_PTR_SET_RVALUE(autoMatchUserProfileExpressions_, autoMatchUserProfileExpressions) };


    // autoMatchUserStatus Field Functions 
    bool hasAutoMatchUserStatus() const { return this->autoMatchUserStatus_ != nullptr;};
    void deleteAutoMatchUserStatus() { this->autoMatchUserStatus_ = nullptr;};
    inline string autoMatchUserStatus() const { DARABONBA_PTR_GET_DEFAULT(autoMatchUserStatus_, "") };
    inline CreateIdentityProviderRequestBindingConfig& setAutoMatchUserStatus(string autoMatchUserStatus) { DARABONBA_PTR_SET_VALUE(autoMatchUserStatus_, autoMatchUserStatus) };


    // mappingBindingStatus Field Functions 
    bool hasMappingBindingStatus() const { return this->mappingBindingStatus_ != nullptr;};
    void deleteMappingBindingStatus() { this->mappingBindingStatus_ = nullptr;};
    inline string mappingBindingStatus() const { DARABONBA_PTR_GET_DEFAULT(mappingBindingStatus_, "") };
    inline CreateIdentityProviderRequestBindingConfig& setMappingBindingStatus(string mappingBindingStatus) { DARABONBA_PTR_SET_VALUE(mappingBindingStatus_, mappingBindingStatus) };


  protected:
    // List of rules for automatically matching accounts.
    std::shared_ptr<vector<Models::CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions>> autoMatchUserProfileExpressions_ = nullptr;
    // Whether automatic account matching is enabled. Value range:
    // 
    // - Disabled: disabled
    // 
    // - Enabled: enabled
    std::shared_ptr<string> autoMatchUserStatus_ = nullptr;
    // Whether the user manual account binding function is enabled. Value range:
    // - Disabled: disabled
    // 
    // - Enabled: enabled
    std::shared_ptr<string> mappingBindingStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
