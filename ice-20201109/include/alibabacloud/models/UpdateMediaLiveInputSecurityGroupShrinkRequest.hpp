// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVEINPUTSECURITYGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVEINPUTSECURITYGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveInputSecurityGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveInputSecurityGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(WhitelistRules, whitelistRulesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveInputSecurityGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(WhitelistRules, whitelistRulesShrink_);
    };
    UpdateMediaLiveInputSecurityGroupShrinkRequest() = default ;
    UpdateMediaLiveInputSecurityGroupShrinkRequest(const UpdateMediaLiveInputSecurityGroupShrinkRequest &) = default ;
    UpdateMediaLiveInputSecurityGroupShrinkRequest(UpdateMediaLiveInputSecurityGroupShrinkRequest &&) = default ;
    UpdateMediaLiveInputSecurityGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveInputSecurityGroupShrinkRequest() = default ;
    UpdateMediaLiveInputSecurityGroupShrinkRequest& operator=(const UpdateMediaLiveInputSecurityGroupShrinkRequest &) = default ;
    UpdateMediaLiveInputSecurityGroupShrinkRequest& operator=(UpdateMediaLiveInputSecurityGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->securityGroupId_ != nullptr && this->whitelistRulesShrink_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMediaLiveInputSecurityGroupShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline UpdateMediaLiveInputSecurityGroupShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // whitelistRulesShrink Field Functions 
    bool hasWhitelistRulesShrink() const { return this->whitelistRulesShrink_ != nullptr;};
    void deleteWhitelistRulesShrink() { this->whitelistRulesShrink_ = nullptr;};
    inline string whitelistRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(whitelistRulesShrink_, "") };
    inline UpdateMediaLiveInputSecurityGroupShrinkRequest& setWhitelistRulesShrink(string whitelistRulesShrink) { DARABONBA_PTR_SET_VALUE(whitelistRulesShrink_, whitelistRulesShrink) };


  protected:
    // The name of the security group. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the security group.
    // 
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The security group rules.
    // 
    // This parameter is required.
    std::shared_ptr<string> whitelistRulesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
