// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUSERPROFILEPATHRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETUSERPROFILEPATHRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class SetUserProfilePathRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetUserProfilePathRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupSetId, appInstanceGroupSetId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserProfilePathRules, userProfilePathRules_);
      DARABONBA_PTR_TO_JSON(UserProfileRuleType, userProfileRuleType_);
    };
    friend void from_json(const Darabonba::Json& j, SetUserProfilePathRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupSetId, appInstanceGroupSetId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserProfilePathRules, userProfilePathRules_);
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
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceGroupSetId_ == nullptr && this->regionId_ == nullptr && this->userProfilePathRules_ == nullptr && this->userProfileRuleType_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline SetUserProfilePathRulesRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupSetId Field Functions 
    bool hasAppInstanceGroupSetId() const { return this->appInstanceGroupSetId_ != nullptr;};
    void deleteAppInstanceGroupSetId() { this->appInstanceGroupSetId_ = nullptr;};
    inline string getAppInstanceGroupSetId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupSetId_, "") };
    inline SetUserProfilePathRulesRequest& setAppInstanceGroupSetId(string appInstanceGroupSetId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupSetId_, appInstanceGroupSetId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetUserProfilePathRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userProfilePathRules Field Functions 
    bool hasUserProfilePathRules() const { return this->userProfilePathRules_ != nullptr;};
    void deleteUserProfilePathRules() { this->userProfilePathRules_ = nullptr;};
    inline string getUserProfilePathRules() const { DARABONBA_PTR_GET_DEFAULT(userProfilePathRules_, "") };
    inline SetUserProfilePathRulesRequest& setUserProfilePathRules(string userProfilePathRules) { DARABONBA_PTR_SET_VALUE(userProfilePathRules_, userProfilePathRules) };


    // userProfileRuleType Field Functions 
    bool hasUserProfileRuleType() const { return this->userProfileRuleType_ != nullptr;};
    void deleteUserProfileRuleType() { this->userProfileRuleType_ = nullptr;};
    inline string getUserProfileRuleType() const { DARABONBA_PTR_GET_DEFAULT(userProfileRuleType_, "") };
    inline SetUserProfilePathRulesRequest& setUserProfileRuleType(string userProfileRuleType) { DARABONBA_PTR_SET_VALUE(userProfileRuleType_, userProfileRuleType) };


  protected:
    // The ID of a single app instance group. This parameter and AppInstanceGroupSetId are mutually exclusive. If a cloud app or cloud browser app instance group belongs to an enabled set, you must configure the rules at the set level.
    shared_ptr<string> appInstanceGroupId_ {};
    // The ID of an enabled app instance group set. This parameter and AppInstanceGroupId are mutually exclusive. You can set rules for up to 200 member app instance groups at a time.
    shared_ptr<string> appInstanceGroupSetId_ {};
    // The region ID of the request. When you query or set rules for a specified app instance group, use the region where the target app instance group resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The JSON array string of the complete rule list. Each item uses `blackPath` to specify the excluded path and `whitePaths` to specify the relative paths that still require roaming within the excluded directory. The path type `file` indicates a file, and `folder` indicates a directory.
    shared_ptr<string> userProfilePathRules_ {};
    // The type of rule to set. Set this parameter to `AppInstanceGroup` when you configure rules for an app instance group or an app instance group set.
    // 
    // This parameter is required.
    shared_ptr<string> userProfileRuleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
