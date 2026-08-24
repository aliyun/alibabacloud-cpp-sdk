// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVULSCANSCHEDULEDSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVULSCANSCHEDULEDSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateVulScanScheduledStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVulScanScheduledStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ScanBeginTime, scanBeginTime_);
      DARABONBA_PTR_TO_JSON(ScanEndTime, scanEndTime_);
      DARABONBA_PTR_TO_JSON(ScanFrequency, scanFrequency_);
      DARABONBA_PTR_TO_JSON(ScanInterval, scanInterval_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyDescription, strategyDescription_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVulScanScheduledStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ScanBeginTime, scanBeginTime_);
      DARABONBA_PTR_FROM_JSON(ScanEndTime, scanEndTime_);
      DARABONBA_PTR_FROM_JSON(ScanFrequency, scanFrequency_);
      DARABONBA_PTR_FROM_JSON(ScanInterval, scanInterval_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyDescription, strategyDescription_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    UpdateVulScanScheduledStrategyRequest() = default ;
    UpdateVulScanScheduledStrategyRequest(const UpdateVulScanScheduledStrategyRequest &) = default ;
    UpdateVulScanScheduledStrategyRequest(UpdateVulScanScheduledStrategyRequest &&) = default ;
    UpdateVulScanScheduledStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVulScanScheduledStrategyRequest() = default ;
    UpdateVulScanScheduledStrategyRequest& operator=(const UpdateVulScanScheduledStrategyRequest &) = default ;
    UpdateVulScanScheduledStrategyRequest& operator=(UpdateVulScanScheduledStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchMode_ == nullptr
        && this->priority_ == nullptr && this->scanBeginTime_ == nullptr && this->scanEndTime_ == nullptr && this->scanFrequency_ == nullptr && this->scanInterval_ == nullptr
        && this->status_ == nullptr && this->strategyDescription_ == nullptr && this->strategyId_ == nullptr && this->strategyName_ == nullptr && this->userGroupIds_ == nullptr
        && this->whitelist_ == nullptr; };
    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline UpdateVulScanScheduledStrategyRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateVulScanScheduledStrategyRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // scanBeginTime Field Functions 
    bool hasScanBeginTime() const { return this->scanBeginTime_ != nullptr;};
    void deleteScanBeginTime() { this->scanBeginTime_ = nullptr;};
    inline string getScanBeginTime() const { DARABONBA_PTR_GET_DEFAULT(scanBeginTime_, "") };
    inline UpdateVulScanScheduledStrategyRequest& setScanBeginTime(string scanBeginTime) { DARABONBA_PTR_SET_VALUE(scanBeginTime_, scanBeginTime) };


    // scanEndTime Field Functions 
    bool hasScanEndTime() const { return this->scanEndTime_ != nullptr;};
    void deleteScanEndTime() { this->scanEndTime_ = nullptr;};
    inline string getScanEndTime() const { DARABONBA_PTR_GET_DEFAULT(scanEndTime_, "") };
    inline UpdateVulScanScheduledStrategyRequest& setScanEndTime(string scanEndTime) { DARABONBA_PTR_SET_VALUE(scanEndTime_, scanEndTime) };


    // scanFrequency Field Functions 
    bool hasScanFrequency() const { return this->scanFrequency_ != nullptr;};
    void deleteScanFrequency() { this->scanFrequency_ = nullptr;};
    inline string getScanFrequency() const { DARABONBA_PTR_GET_DEFAULT(scanFrequency_, "") };
    inline UpdateVulScanScheduledStrategyRequest& setScanFrequency(string scanFrequency) { DARABONBA_PTR_SET_VALUE(scanFrequency_, scanFrequency) };


    // scanInterval Field Functions 
    bool hasScanInterval() const { return this->scanInterval_ != nullptr;};
    void deleteScanInterval() { this->scanInterval_ = nullptr;};
    inline string getScanInterval() const { DARABONBA_PTR_GET_DEFAULT(scanInterval_, "") };
    inline UpdateVulScanScheduledStrategyRequest& setScanInterval(string scanInterval) { DARABONBA_PTR_SET_VALUE(scanInterval_, scanInterval) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateVulScanScheduledStrategyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyDescription Field Functions 
    bool hasStrategyDescription() const { return this->strategyDescription_ != nullptr;};
    void deleteStrategyDescription() { this->strategyDescription_ = nullptr;};
    inline string getStrategyDescription() const { DARABONBA_PTR_GET_DEFAULT(strategyDescription_, "") };
    inline UpdateVulScanScheduledStrategyRequest& setStrategyDescription(string strategyDescription) { DARABONBA_PTR_SET_VALUE(strategyDescription_, strategyDescription) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline UpdateVulScanScheduledStrategyRequest& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline UpdateVulScanScheduledStrategyRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline UpdateVulScanScheduledStrategyRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline UpdateVulScanScheduledStrategyRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline UpdateVulScanScheduledStrategyRequest& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline UpdateVulScanScheduledStrategyRequest& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    // The matching mode for the effective scope. Valid values:
    // - **UserGroupAll**: The policy takes effect on all users under the current Alibaba Cloud account.
    // - **UserGroupNormal**: The policy takes effect only on users in specified user groups. In this case, UserGroupIds is required.
    shared_ptr<string> matchMode_ {};
    // The policy priority. A smaller value indicates a higher priority. Valid values: 1 to 100.
    shared_ptr<int32_t> priority_ {};
    // The start hour during which the scan can be triggered. The value is an integer hour. Valid values: 0 to 23, inclusive. This field is not a timestamp.
    shared_ptr<string> scanBeginTime_ {};
    // The end hour during which the scan can be triggered. The value is an integer hour. Valid values: 1 to 24, exclusive. The value must be greater than ScanBeginTime. This field is not a timestamp.
    shared_ptr<string> scanEndTime_ {};
    // The unit of the trigger cycle. Valid values:
    // - **day**: by day.
    // - **week**: by week.
    shared_ptr<string> scanFrequency_ {};
    // The interval number of the trigger cycle. This parameter works together with ScanFrequency to determine the trigger cycle. Valid values: 1 to 30. For example, if ScanFrequency is set to week and ScanInterval is set to 1, the scan is triggered once a week.
    shared_ptr<string> scanInterval_ {};
    // The enabling status. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> status_ {};
    // The policy description.
    shared_ptr<string> strategyDescription_ {};
    // The ID of the vulnerability scheduled scan policy to modify. You can obtain the value from the following operations:
    // - [ListVulScanScheduledStrategies](~~ListVulScanScheduledStrategies~~): Lists vulnerability scheduled scan policies.
    // - [CreateVulScanScheduledStrategy](~~CreateVulScanScheduledStrategy~~): Creates a vulnerability scheduled scan policy.
    // 
    // This parameter is required.
    shared_ptr<string> strategyId_ {};
    // The policy name. The name can be up to 128 characters in length and can contain Chinese characters, uppercase and lowercase letters, digits, periods (.), underscores (_), and hyphens (-). Spaces are not supported.
    shared_ptr<string> strategyName_ {};
    // The collection of user group IDs for the effective scope. This parameter is required when the effective scope is UserGroupNormal and must not be specified when the effective scope is UserGroupAll. The collection must contain at least 1 and at most 100 entries, and duplicates are not allowed. The collection you specify fully replaces the existing user groups of the policy.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The list of exempted users. Users in this list are not scanned by this policy. The list can contain up to 1000 entries and duplicates are not allowed. This parameter performs a full overwrite. The list you specify replaces the existing list of the policy.
    shared_ptr<vector<string>> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
