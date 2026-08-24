// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIRUSSCANSCHEDULEDSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIRUSSCANSCHEDULEDSTRATEGYREQUEST_HPP_
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
  class UpdateVirusScanScheduledStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVirusScanScheduledStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HighRiskOperation, highRiskOperation_);
      DARABONBA_PTR_TO_JSON(LowRiskOperation, lowRiskOperation_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(MaxCpuUsage, maxCpuUsage_);
      DARABONBA_PTR_TO_JSON(MidRiskOperation, midRiskOperation_);
      DARABONBA_PTR_TO_JSON(PerformanceMode, performanceMode_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ScanBeginTime, scanBeginTime_);
      DARABONBA_PTR_TO_JSON(ScanEndTime, scanEndTime_);
      DARABONBA_PTR_TO_JSON(ScanFrequency, scanFrequency_);
      DARABONBA_PTR_TO_JSON(ScanInterval, scanInterval_);
      DARABONBA_PTR_TO_JSON(ScanMode, scanMode_);
      DARABONBA_PTR_TO_JSON(ScanPath, scanPath_);
      DARABONBA_PTR_TO_JSON(ScanTargets, scanTargets_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyDescription, strategyDescription_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVirusScanScheduledStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HighRiskOperation, highRiskOperation_);
      DARABONBA_PTR_FROM_JSON(LowRiskOperation, lowRiskOperation_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(MaxCpuUsage, maxCpuUsage_);
      DARABONBA_PTR_FROM_JSON(MidRiskOperation, midRiskOperation_);
      DARABONBA_PTR_FROM_JSON(PerformanceMode, performanceMode_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ScanBeginTime, scanBeginTime_);
      DARABONBA_PTR_FROM_JSON(ScanEndTime, scanEndTime_);
      DARABONBA_PTR_FROM_JSON(ScanFrequency, scanFrequency_);
      DARABONBA_PTR_FROM_JSON(ScanInterval, scanInterval_);
      DARABONBA_PTR_FROM_JSON(ScanMode, scanMode_);
      DARABONBA_PTR_FROM_JSON(ScanPath, scanPath_);
      DARABONBA_PTR_FROM_JSON(ScanTargets, scanTargets_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyDescription, strategyDescription_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    UpdateVirusScanScheduledStrategyRequest() = default ;
    UpdateVirusScanScheduledStrategyRequest(const UpdateVirusScanScheduledStrategyRequest &) = default ;
    UpdateVirusScanScheduledStrategyRequest(UpdateVirusScanScheduledStrategyRequest &&) = default ;
    UpdateVirusScanScheduledStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVirusScanScheduledStrategyRequest() = default ;
    UpdateVirusScanScheduledStrategyRequest& operator=(const UpdateVirusScanScheduledStrategyRequest &) = default ;
    UpdateVirusScanScheduledStrategyRequest& operator=(UpdateVirusScanScheduledStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->highRiskOperation_ == nullptr
        && this->lowRiskOperation_ == nullptr && this->matchMode_ == nullptr && this->maxCpuUsage_ == nullptr && this->midRiskOperation_ == nullptr && this->performanceMode_ == nullptr
        && this->priority_ == nullptr && this->scanBeginTime_ == nullptr && this->scanEndTime_ == nullptr && this->scanFrequency_ == nullptr && this->scanInterval_ == nullptr
        && this->scanMode_ == nullptr && this->scanPath_ == nullptr && this->scanTargets_ == nullptr && this->status_ == nullptr && this->strategyDescription_ == nullptr
        && this->strategyId_ == nullptr && this->strategyName_ == nullptr && this->userGroupIds_ == nullptr && this->whitelist_ == nullptr; };
    // highRiskOperation Field Functions 
    bool hasHighRiskOperation() const { return this->highRiskOperation_ != nullptr;};
    void deleteHighRiskOperation() { this->highRiskOperation_ = nullptr;};
    inline string getHighRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(highRiskOperation_, "") };
    inline UpdateVirusScanScheduledStrategyRequest& setHighRiskOperation(string highRiskOperation) { DARABONBA_PTR_SET_VALUE(highRiskOperation_, highRiskOperation) };


    // lowRiskOperation Field Functions 
    bool hasLowRiskOperation() const { return this->lowRiskOperation_ != nullptr;};
    void deleteLowRiskOperation() { this->lowRiskOperation_ = nullptr;};
    inline string getLowRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(lowRiskOperation_, "") };
    inline UpdateVirusScanScheduledStrategyRequest& setLowRiskOperation(string lowRiskOperation) { DARABONBA_PTR_SET_VALUE(lowRiskOperation_, lowRiskOperation) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline UpdateVirusScanScheduledStrategyRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // maxCpuUsage Field Functions 
    bool hasMaxCpuUsage() const { return this->maxCpuUsage_ != nullptr;};
    void deleteMaxCpuUsage() { this->maxCpuUsage_ = nullptr;};
    inline int64_t getMaxCpuUsage() const { DARABONBA_PTR_GET_DEFAULT(maxCpuUsage_, 0L) };
    inline UpdateVirusScanScheduledStrategyRequest& setMaxCpuUsage(int64_t maxCpuUsage) { DARABONBA_PTR_SET_VALUE(maxCpuUsage_, maxCpuUsage) };


    // midRiskOperation Field Functions 
    bool hasMidRiskOperation() const { return this->midRiskOperation_ != nullptr;};
    void deleteMidRiskOperation() { this->midRiskOperation_ = nullptr;};
    inline string getMidRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(midRiskOperation_, "") };
    inline UpdateVirusScanScheduledStrategyRequest& setMidRiskOperation(string midRiskOperation) { DARABONBA_PTR_SET_VALUE(midRiskOperation_, midRiskOperation) };


    // performanceMode Field Functions 
    bool hasPerformanceMode() const { return this->performanceMode_ != nullptr;};
    void deletePerformanceMode() { this->performanceMode_ = nullptr;};
    inline string getPerformanceMode() const { DARABONBA_PTR_GET_DEFAULT(performanceMode_, "") };
    inline UpdateVirusScanScheduledStrategyRequest& setPerformanceMode(string performanceMode) { DARABONBA_PTR_SET_VALUE(performanceMode_, performanceMode) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateVirusScanScheduledStrategyRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // scanBeginTime Field Functions 
    bool hasScanBeginTime() const { return this->scanBeginTime_ != nullptr;};
    void deleteScanBeginTime() { this->scanBeginTime_ = nullptr;};
    inline int64_t getScanBeginTime() const { DARABONBA_PTR_GET_DEFAULT(scanBeginTime_, 0L) };
    inline UpdateVirusScanScheduledStrategyRequest& setScanBeginTime(int64_t scanBeginTime) { DARABONBA_PTR_SET_VALUE(scanBeginTime_, scanBeginTime) };


    // scanEndTime Field Functions 
    bool hasScanEndTime() const { return this->scanEndTime_ != nullptr;};
    void deleteScanEndTime() { this->scanEndTime_ = nullptr;};
    inline int64_t getScanEndTime() const { DARABONBA_PTR_GET_DEFAULT(scanEndTime_, 0L) };
    inline UpdateVirusScanScheduledStrategyRequest& setScanEndTime(int64_t scanEndTime) { DARABONBA_PTR_SET_VALUE(scanEndTime_, scanEndTime) };


    // scanFrequency Field Functions 
    bool hasScanFrequency() const { return this->scanFrequency_ != nullptr;};
    void deleteScanFrequency() { this->scanFrequency_ = nullptr;};
    inline string getScanFrequency() const { DARABONBA_PTR_GET_DEFAULT(scanFrequency_, "") };
    inline UpdateVirusScanScheduledStrategyRequest& setScanFrequency(string scanFrequency) { DARABONBA_PTR_SET_VALUE(scanFrequency_, scanFrequency) };


    // scanInterval Field Functions 
    bool hasScanInterval() const { return this->scanInterval_ != nullptr;};
    void deleteScanInterval() { this->scanInterval_ = nullptr;};
    inline int64_t getScanInterval() const { DARABONBA_PTR_GET_DEFAULT(scanInterval_, 0L) };
    inline UpdateVirusScanScheduledStrategyRequest& setScanInterval(int64_t scanInterval) { DARABONBA_PTR_SET_VALUE(scanInterval_, scanInterval) };


    // scanMode Field Functions 
    bool hasScanMode() const { return this->scanMode_ != nullptr;};
    void deleteScanMode() { this->scanMode_ = nullptr;};
    inline string getScanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, "") };
    inline UpdateVirusScanScheduledStrategyRequest& setScanMode(string scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


    // scanPath Field Functions 
    bool hasScanPath() const { return this->scanPath_ != nullptr;};
    void deleteScanPath() { this->scanPath_ = nullptr;};
    inline const vector<string> & getScanPath() const { DARABONBA_PTR_GET_CONST(scanPath_, vector<string>) };
    inline vector<string> getScanPath() { DARABONBA_PTR_GET(scanPath_, vector<string>) };
    inline UpdateVirusScanScheduledStrategyRequest& setScanPath(const vector<string> & scanPath) { DARABONBA_PTR_SET_VALUE(scanPath_, scanPath) };
    inline UpdateVirusScanScheduledStrategyRequest& setScanPath(vector<string> && scanPath) { DARABONBA_PTR_SET_RVALUE(scanPath_, scanPath) };


    // scanTargets Field Functions 
    bool hasScanTargets() const { return this->scanTargets_ != nullptr;};
    void deleteScanTargets() { this->scanTargets_ = nullptr;};
    inline const vector<string> & getScanTargets() const { DARABONBA_PTR_GET_CONST(scanTargets_, vector<string>) };
    inline vector<string> getScanTargets() { DARABONBA_PTR_GET(scanTargets_, vector<string>) };
    inline UpdateVirusScanScheduledStrategyRequest& setScanTargets(const vector<string> & scanTargets) { DARABONBA_PTR_SET_VALUE(scanTargets_, scanTargets) };
    inline UpdateVirusScanScheduledStrategyRequest& setScanTargets(vector<string> && scanTargets) { DARABONBA_PTR_SET_RVALUE(scanTargets_, scanTargets) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateVirusScanScheduledStrategyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyDescription Field Functions 
    bool hasStrategyDescription() const { return this->strategyDescription_ != nullptr;};
    void deleteStrategyDescription() { this->strategyDescription_ = nullptr;};
    inline string getStrategyDescription() const { DARABONBA_PTR_GET_DEFAULT(strategyDescription_, "") };
    inline UpdateVirusScanScheduledStrategyRequest& setStrategyDescription(string strategyDescription) { DARABONBA_PTR_SET_VALUE(strategyDescription_, strategyDescription) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline UpdateVirusScanScheduledStrategyRequest& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline UpdateVirusScanScheduledStrategyRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline UpdateVirusScanScheduledStrategyRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline UpdateVirusScanScheduledStrategyRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline UpdateVirusScanScheduledStrategyRequest& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline UpdateVirusScanScheduledStrategyRequest& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    // The action to take on high-risk virus files. Valid values:
    // - **Quarantine**: Quarantine quarantined file.
    // - **Notify**: Report an alert only without taking action on quarantined file.
    shared_ptr<string> highRiskOperation_ {};
    // The action to take on low-risk virus files. Valid values:
    // - **Quarantine**: Quarantine quarantined file.
    // - **Notify**: Report an alert only without taking action on quarantined file.
    // - **None**: Take no action.
    shared_ptr<string> lowRiskOperation_ {};
    // The matching mode for the effective scope. Valid values:
    // - **UserGroupAll**: The policy takes effect for all users under the current Alibaba Cloud account.
    // - **UserGroupNormal**: The policy takes effect only for users in specified user groups. UserGroupIds is required when this value is specified.
    shared_ptr<string> matchMode_ {};
    // The maximum percentage of terminal CPU usage allowed during scanning. Valid values: 0 to 100.
    shared_ptr<int64_t> maxCpuUsage_ {};
    // The action to take on medium-risk virus files. Valid values:
    // - **Quarantine**: Quarantine quarantined file.
    // - **Notify**: Report an alert only without taking action on quarantined file.
    shared_ptr<string> midRiskOperation_ {};
    // The scan performance pattern. Valid values:
    // - **SecurityFirst**: Security first. The default CPU usage limit is 50%.
    // - **Balance**: Balanced. The default CPU usage limit is 30%.
    // - **ExperienceFirst**: Experience first. The default CPU usage limit is 15%.
    shared_ptr<string> performanceMode_ {};
    // The policy priority. A smaller value indicates a higher priority. Valid values: 1 to 100.
    shared_ptr<int32_t> priority_ {};
    // The start hour during which scans can be triggered. The value is a whole hour number. Valid values: 0 to 23, inclusive. This field is not a timestamp.
    shared_ptr<int64_t> scanBeginTime_ {};
    // The end hour during which scans can be triggered. The value is a whole hour number. Valid values: 1 to 24, exclusive of the specified hour, and must be greater than ScanBeginTime. Scan tasks generated by each trigger expire at this hour on the same day. This field is not a timestamp.
    shared_ptr<int64_t> scanEndTime_ {};
    // The unit of the trigger cycle. Valid values:
    // - **day**: by day.
    // - **week**: by week.
    shared_ptr<string> scanFrequency_ {};
    // The interval number of the trigger cycle, which together with ScanFrequency determines the trigger cycle. Valid values: 1 to 30. For example, if ScanFrequency is set to week and ScanInterval is set to 1, the scan is triggered once a week.
    shared_ptr<int64_t> scanInterval_ {};
    // The path scope for scanning. Valid values:
    // - **Quick**: Quick scan. Only system-critical directories and common risk locations are scanned.
    // - **Full**: Full disk scan.
    // - **Custom**: Custom path scan. ScanPath is required when this value is specified.
    shared_ptr<string> scanMode_ {};
    // The collection of custom scan paths. A maximum of 100 paths can be specified, and duplicates are not allowed. This parameter takes effect only when ScanMode is set to Custom.
    shared_ptr<vector<string>> scanPath_ {};
    // The collection of virus types to be handled in this scan. At least one type must be specified, and duplicates are not allowed.
    shared_ptr<vector<string>> scanTargets_ {};
    // The enabled status. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    // 
    // When enabled, the policy immediately participates in periodic scheduling. When disabled, the policy is saved but does not trigger scans.
    shared_ptr<string> status_ {};
    // The policy description. The description can contain Chinese characters, uppercase and lowercase letters, digits, spaces, periods (.), commas (,), semicolons (;), forward slashes (/), at signs (@), hyphens (-), and underscores (_).
    shared_ptr<string> strategyDescription_ {};
    // The ID of the scheduled virus scan policy to modify. You can obtain the value from:
    // - [ListVirusScanScheduledStrategies](~~ListVirusScanScheduledStrategies~~): Lists scheduled virus scan policies.
    // - [CreateVirusScanScheduledStrategy](~~CreateVirusScanScheduledStrategy~~): Creates a scheduled virus scan policy.
    // 
    // This parameter is required.
    shared_ptr<string> strategyId_ {};
    // The policy name. The name can be up to 128 characters in length and can contain Chinese characters, uppercase and lowercase letters, digits, periods (.), underscores (_), and hyphens (-). Spaces are not supported.
    shared_ptr<string> strategyName_ {};
    // The collection of user group IDs for the effective scope. At least 1 and at most 100 IDs can be specified, and duplicates are not allowed. When the effective scope is UserGroupNormal, the provided collection fully replaces the existing user groups of the policy. When the effective scope is UserGroupAll and the effective scope is not being modified, this parameter must not be specified.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The exception user list. Users in this list are excluded from the scan performed by this policy. A maximum of 1000 entries can be specified, and duplicates are not allowed. This parameter performs a full overwrite, meaning the provided list replaces the existing list of the policy.
    shared_ptr<vector<string>> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
