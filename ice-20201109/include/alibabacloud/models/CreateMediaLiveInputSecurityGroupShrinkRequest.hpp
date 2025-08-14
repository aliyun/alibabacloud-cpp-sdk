// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVEINPUTSECURITYGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVEINPUTSECURITYGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveInputSecurityGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveInputSecurityGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WhitelistRules, whitelistRulesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveInputSecurityGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WhitelistRules, whitelistRulesShrink_);
    };
    CreateMediaLiveInputSecurityGroupShrinkRequest() = default ;
    CreateMediaLiveInputSecurityGroupShrinkRequest(const CreateMediaLiveInputSecurityGroupShrinkRequest &) = default ;
    CreateMediaLiveInputSecurityGroupShrinkRequest(CreateMediaLiveInputSecurityGroupShrinkRequest &&) = default ;
    CreateMediaLiveInputSecurityGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveInputSecurityGroupShrinkRequest() = default ;
    CreateMediaLiveInputSecurityGroupShrinkRequest& operator=(const CreateMediaLiveInputSecurityGroupShrinkRequest &) = default ;
    CreateMediaLiveInputSecurityGroupShrinkRequest& operator=(CreateMediaLiveInputSecurityGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->whitelistRulesShrink_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMediaLiveInputSecurityGroupShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // whitelistRulesShrink Field Functions 
    bool hasWhitelistRulesShrink() const { return this->whitelistRulesShrink_ != nullptr;};
    void deleteWhitelistRulesShrink() { this->whitelistRulesShrink_ = nullptr;};
    inline string whitelistRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(whitelistRulesShrink_, "") };
    inline CreateMediaLiveInputSecurityGroupShrinkRequest& setWhitelistRulesShrink(string whitelistRulesShrink) { DARABONBA_PTR_SET_VALUE(whitelistRulesShrink_, whitelistRulesShrink) };


  protected:
    // The name of the security group. Letters, digits, hyphens (-), and underscores (_) are supported. The maximum length is 64 characters.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The security group rules.
    // 
    // This parameter is required.
    std::shared_ptr<string> whitelistRulesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
