// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUSERPROFILEPATHRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETUSERPROFILEPATHRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class SetUserProfilePathRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetUserProfilePathRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserProfilePathRule, userProfilePathRuleShrink_);
      DARABONBA_PTR_TO_JSON(UserProfileRuleType, userProfileRuleType_);
    };
    friend void from_json(const Darabonba::Json& j, SetUserProfilePathRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserProfilePathRule, userProfilePathRuleShrink_);
      DARABONBA_PTR_FROM_JSON(UserProfileRuleType, userProfileRuleType_);
    };
    SetUserProfilePathRulesShrinkRequest() = default ;
    SetUserProfilePathRulesShrinkRequest(const SetUserProfilePathRulesShrinkRequest &) = default ;
    SetUserProfilePathRulesShrinkRequest(SetUserProfilePathRulesShrinkRequest &&) = default ;
    SetUserProfilePathRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetUserProfilePathRulesShrinkRequest() = default ;
    SetUserProfilePathRulesShrinkRequest& operator=(const SetUserProfilePathRulesShrinkRequest &) = default ;
    SetUserProfilePathRulesShrinkRequest& operator=(SetUserProfilePathRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopGroupId_ == nullptr
        && return this->regionId_ == nullptr && return this->userProfilePathRuleShrink_ == nullptr && return this->userProfileRuleType_ == nullptr; };
    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline SetUserProfilePathRulesShrinkRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetUserProfilePathRulesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userProfilePathRuleShrink Field Functions 
    bool hasUserProfilePathRuleShrink() const { return this->userProfilePathRuleShrink_ != nullptr;};
    void deleteUserProfilePathRuleShrink() { this->userProfilePathRuleShrink_ = nullptr;};
    inline string userProfilePathRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(userProfilePathRuleShrink_, "") };
    inline SetUserProfilePathRulesShrinkRequest& setUserProfilePathRuleShrink(string userProfilePathRuleShrink) { DARABONBA_PTR_SET_VALUE(userProfilePathRuleShrink_, userProfilePathRuleShrink) };


    // userProfileRuleType Field Functions 
    bool hasUserProfileRuleType() const { return this->userProfileRuleType_ != nullptr;};
    void deleteUserProfileRuleType() { this->userProfileRuleType_ = nullptr;};
    inline string userProfileRuleType() const { DARABONBA_PTR_GET_DEFAULT(userProfileRuleType_, "") };
    inline SetUserProfilePathRulesShrinkRequest& setUserProfileRuleType(string userProfileRuleType) { DARABONBA_PTR_SET_VALUE(userProfileRuleType_, userProfileRuleType) };


  protected:
    // The desktop group ID.
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The directories that you want to configure in the blacklist and whitelist.
    std::shared_ptr<string> userProfilePathRuleShrink_ = nullptr;
    // The directory type that you want to configure.
    // 
    // Valid values:
    // 
    // *   Both_Default_DesktopGroup
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DesktopGroup
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Default
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> userProfileRuleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
