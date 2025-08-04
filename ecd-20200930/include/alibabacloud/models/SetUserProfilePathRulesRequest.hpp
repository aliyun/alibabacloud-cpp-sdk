// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUSERPROFILEPATHRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETUSERPROFILEPATHRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetUserProfilePathRulesRequestUserProfilePathRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class SetUserProfilePathRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetUserProfilePathRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserProfilePathRule, userProfilePathRule_);
      DARABONBA_PTR_TO_JSON(UserProfileRuleType, userProfileRuleType_);
    };
    friend void from_json(const Darabonba::Json& j, SetUserProfilePathRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserProfilePathRule, userProfilePathRule_);
      DARABONBA_PTR_FROM_JSON(UserProfileRuleType, userProfileRuleType_);
    };
    SetUserProfilePathRulesRequest() = default ;
    SetUserProfilePathRulesRequest(const SetUserProfilePathRulesRequest &) = default ;
    SetUserProfilePathRulesRequest(SetUserProfilePathRulesRequest &&) = default ;
    SetUserProfilePathRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetUserProfilePathRulesRequest() = default ;
    SetUserProfilePathRulesRequest& operator=(const SetUserProfilePathRulesRequest &) = default ;
    SetUserProfilePathRulesRequest& operator=(SetUserProfilePathRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desktopGroupId_ != nullptr
        && this->regionId_ != nullptr && this->userProfilePathRule_ != nullptr && this->userProfileRuleType_ != nullptr; };
    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline SetUserProfilePathRulesRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetUserProfilePathRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userProfilePathRule Field Functions 
    bool hasUserProfilePathRule() const { return this->userProfilePathRule_ != nullptr;};
    void deleteUserProfilePathRule() { this->userProfilePathRule_ = nullptr;};
    inline const vector<SetUserProfilePathRulesRequestUserProfilePathRule> & userProfilePathRule() const { DARABONBA_PTR_GET_CONST(userProfilePathRule_, vector<SetUserProfilePathRulesRequestUserProfilePathRule>) };
    inline vector<SetUserProfilePathRulesRequestUserProfilePathRule> userProfilePathRule() { DARABONBA_PTR_GET(userProfilePathRule_, vector<SetUserProfilePathRulesRequestUserProfilePathRule>) };
    inline SetUserProfilePathRulesRequest& setUserProfilePathRule(const vector<SetUserProfilePathRulesRequestUserProfilePathRule> & userProfilePathRule) { DARABONBA_PTR_SET_VALUE(userProfilePathRule_, userProfilePathRule) };
    inline SetUserProfilePathRulesRequest& setUserProfilePathRule(vector<SetUserProfilePathRulesRequestUserProfilePathRule> && userProfilePathRule) { DARABONBA_PTR_SET_RVALUE(userProfilePathRule_, userProfilePathRule) };


    // userProfileRuleType Field Functions 
    bool hasUserProfileRuleType() const { return this->userProfileRuleType_ != nullptr;};
    void deleteUserProfileRuleType() { this->userProfileRuleType_ = nullptr;};
    inline string userProfileRuleType() const { DARABONBA_PTR_GET_DEFAULT(userProfileRuleType_, "") };
    inline SetUserProfilePathRulesRequest& setUserProfileRuleType(string userProfileRuleType) { DARABONBA_PTR_SET_VALUE(userProfileRuleType_, userProfileRuleType) };


  protected:
    // The desktop group ID.
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The directories that you want to configure in the blacklist and whitelist.
    std::shared_ptr<vector<SetUserProfilePathRulesRequestUserProfilePathRule>> userProfilePathRule_ = nullptr;
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
