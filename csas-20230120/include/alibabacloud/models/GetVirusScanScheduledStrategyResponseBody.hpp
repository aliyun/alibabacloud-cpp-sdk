// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIRUSSCANSCHEDULEDSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIRUSSCANSCHEDULEDSTRATEGYRESPONSEBODY_HPP_
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
  class GetVirusScanScheduledStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVirusScanScheduledStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomMatchGroup, customMatchGroup_);
      DARABONBA_PTR_TO_JSON(HighRiskOperation, highRiskOperation_);
      DARABONBA_PTR_TO_JSON(LastTriggerTime, lastTriggerTime_);
      DARABONBA_PTR_TO_JSON(LowRiskOperation, lowRiskOperation_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(MatchTargetIds, matchTargetIds_);
      DARABONBA_PTR_TO_JSON(MaxCpuUsage, maxCpuUsage_);
      DARABONBA_PTR_TO_JSON(MidRiskOperation, midRiskOperation_);
      DARABONBA_PTR_TO_JSON(PerformanceMode, performanceMode_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
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
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, GetVirusScanScheduledStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomMatchGroup, customMatchGroup_);
      DARABONBA_PTR_FROM_JSON(HighRiskOperation, highRiskOperation_);
      DARABONBA_PTR_FROM_JSON(LastTriggerTime, lastTriggerTime_);
      DARABONBA_PTR_FROM_JSON(LowRiskOperation, lowRiskOperation_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(MatchTargetIds, matchTargetIds_);
      DARABONBA_PTR_FROM_JSON(MaxCpuUsage, maxCpuUsage_);
      DARABONBA_PTR_FROM_JSON(MidRiskOperation, midRiskOperation_);
      DARABONBA_PTR_FROM_JSON(PerformanceMode, performanceMode_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    GetVirusScanScheduledStrategyResponseBody() = default ;
    GetVirusScanScheduledStrategyResponseBody(const GetVirusScanScheduledStrategyResponseBody &) = default ;
    GetVirusScanScheduledStrategyResponseBody(GetVirusScanScheduledStrategyResponseBody &&) = default ;
    GetVirusScanScheduledStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVirusScanScheduledStrategyResponseBody() = default ;
    GetVirusScanScheduledStrategyResponseBody& operator=(const GetVirusScanScheduledStrategyResponseBody &) = default ;
    GetVirusScanScheduledStrategyResponseBody& operator=(GetVirusScanScheduledStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomMatchGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomMatchGroup& obj) { 
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_PTR_TO_JSON(IdpId, idpId_);
      };
      friend void from_json(const Darabonba::Json& j, CustomMatchGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
      };
      CustomMatchGroup() = default ;
      CustomMatchGroup(const CustomMatchGroup &) = default ;
      CustomMatchGroup(CustomMatchGroup &&) = default ;
      CustomMatchGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomMatchGroup() = default ;
      CustomMatchGroup& operator=(const CustomMatchGroup &) = default ;
      CustomMatchGroup& operator=(CustomMatchGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->group_ == nullptr
        && this->idpId_ == nullptr; };
      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline const vector<string> & getGroup() const { DARABONBA_PTR_GET_CONST(group_, vector<string>) };
      inline vector<string> getGroup() { DARABONBA_PTR_GET(group_, vector<string>) };
      inline CustomMatchGroup& setGroup(const vector<string> & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
      inline CustomMatchGroup& setGroup(vector<string> && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


      // idpId Field Functions 
      bool hasIdpId() const { return this->idpId_ != nullptr;};
      void deleteIdpId() { this->idpId_ = nullptr;};
      inline string getIdpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, "") };
      inline CustomMatchGroup& setIdpId(string idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


    protected:
      // The collection of organizational structure nodes.
      shared_ptr<vector<string>> group_ {};
      // The identity provider ID.
      shared_ptr<string> idpId_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->customMatchGroup_ == nullptr && this->highRiskOperation_ == nullptr && this->lastTriggerTime_ == nullptr && this->lowRiskOperation_ == nullptr && this->matchMode_ == nullptr
        && this->matchTargetIds_ == nullptr && this->maxCpuUsage_ == nullptr && this->midRiskOperation_ == nullptr && this->performanceMode_ == nullptr && this->priority_ == nullptr
        && this->requestId_ == nullptr && this->scanBeginTime_ == nullptr && this->scanEndTime_ == nullptr && this->scanFrequency_ == nullptr && this->scanInterval_ == nullptr
        && this->scanMode_ == nullptr && this->scanPath_ == nullptr && this->scanTargets_ == nullptr && this->status_ == nullptr && this->strategyDescription_ == nullptr
        && this->strategyId_ == nullptr && this->strategyName_ == nullptr && this->whitelist_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetVirusScanScheduledStrategyResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customMatchGroup Field Functions 
    bool hasCustomMatchGroup() const { return this->customMatchGroup_ != nullptr;};
    void deleteCustomMatchGroup() { this->customMatchGroup_ = nullptr;};
    inline const vector<GetVirusScanScheduledStrategyResponseBody::CustomMatchGroup> & getCustomMatchGroup() const { DARABONBA_PTR_GET_CONST(customMatchGroup_, vector<GetVirusScanScheduledStrategyResponseBody::CustomMatchGroup>) };
    inline vector<GetVirusScanScheduledStrategyResponseBody::CustomMatchGroup> getCustomMatchGroup() { DARABONBA_PTR_GET(customMatchGroup_, vector<GetVirusScanScheduledStrategyResponseBody::CustomMatchGroup>) };
    inline GetVirusScanScheduledStrategyResponseBody& setCustomMatchGroup(const vector<GetVirusScanScheduledStrategyResponseBody::CustomMatchGroup> & customMatchGroup) { DARABONBA_PTR_SET_VALUE(customMatchGroup_, customMatchGroup) };
    inline GetVirusScanScheduledStrategyResponseBody& setCustomMatchGroup(vector<GetVirusScanScheduledStrategyResponseBody::CustomMatchGroup> && customMatchGroup) { DARABONBA_PTR_SET_RVALUE(customMatchGroup_, customMatchGroup) };


    // highRiskOperation Field Functions 
    bool hasHighRiskOperation() const { return this->highRiskOperation_ != nullptr;};
    void deleteHighRiskOperation() { this->highRiskOperation_ = nullptr;};
    inline string getHighRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(highRiskOperation_, "") };
    inline GetVirusScanScheduledStrategyResponseBody& setHighRiskOperation(string highRiskOperation) { DARABONBA_PTR_SET_VALUE(highRiskOperation_, highRiskOperation) };


    // lastTriggerTime Field Functions 
    bool hasLastTriggerTime() const { return this->lastTriggerTime_ != nullptr;};
    void deleteLastTriggerTime() { this->lastTriggerTime_ = nullptr;};
    inline string getLastTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(lastTriggerTime_, "") };
    inline GetVirusScanScheduledStrategyResponseBody& setLastTriggerTime(string lastTriggerTime) { DARABONBA_PTR_SET_VALUE(lastTriggerTime_, lastTriggerTime) };


    // lowRiskOperation Field Functions 
    bool hasLowRiskOperation() const { return this->lowRiskOperation_ != nullptr;};
    void deleteLowRiskOperation() { this->lowRiskOperation_ = nullptr;};
    inline string getLowRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(lowRiskOperation_, "") };
    inline GetVirusScanScheduledStrategyResponseBody& setLowRiskOperation(string lowRiskOperation) { DARABONBA_PTR_SET_VALUE(lowRiskOperation_, lowRiskOperation) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline GetVirusScanScheduledStrategyResponseBody& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // matchTargetIds Field Functions 
    bool hasMatchTargetIds() const { return this->matchTargetIds_ != nullptr;};
    void deleteMatchTargetIds() { this->matchTargetIds_ = nullptr;};
    inline const vector<string> & getMatchTargetIds() const { DARABONBA_PTR_GET_CONST(matchTargetIds_, vector<string>) };
    inline vector<string> getMatchTargetIds() { DARABONBA_PTR_GET(matchTargetIds_, vector<string>) };
    inline GetVirusScanScheduledStrategyResponseBody& setMatchTargetIds(const vector<string> & matchTargetIds) { DARABONBA_PTR_SET_VALUE(matchTargetIds_, matchTargetIds) };
    inline GetVirusScanScheduledStrategyResponseBody& setMatchTargetIds(vector<string> && matchTargetIds) { DARABONBA_PTR_SET_RVALUE(matchTargetIds_, matchTargetIds) };


    // maxCpuUsage Field Functions 
    bool hasMaxCpuUsage() const { return this->maxCpuUsage_ != nullptr;};
    void deleteMaxCpuUsage() { this->maxCpuUsage_ = nullptr;};
    inline int64_t getMaxCpuUsage() const { DARABONBA_PTR_GET_DEFAULT(maxCpuUsage_, 0L) };
    inline GetVirusScanScheduledStrategyResponseBody& setMaxCpuUsage(int64_t maxCpuUsage) { DARABONBA_PTR_SET_VALUE(maxCpuUsage_, maxCpuUsage) };


    // midRiskOperation Field Functions 
    bool hasMidRiskOperation() const { return this->midRiskOperation_ != nullptr;};
    void deleteMidRiskOperation() { this->midRiskOperation_ = nullptr;};
    inline string getMidRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(midRiskOperation_, "") };
    inline GetVirusScanScheduledStrategyResponseBody& setMidRiskOperation(string midRiskOperation) { DARABONBA_PTR_SET_VALUE(midRiskOperation_, midRiskOperation) };


    // performanceMode Field Functions 
    bool hasPerformanceMode() const { return this->performanceMode_ != nullptr;};
    void deletePerformanceMode() { this->performanceMode_ = nullptr;};
    inline string getPerformanceMode() const { DARABONBA_PTR_GET_DEFAULT(performanceMode_, "") };
    inline GetVirusScanScheduledStrategyResponseBody& setPerformanceMode(string performanceMode) { DARABONBA_PTR_SET_VALUE(performanceMode_, performanceMode) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetVirusScanScheduledStrategyResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVirusScanScheduledStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanBeginTime Field Functions 
    bool hasScanBeginTime() const { return this->scanBeginTime_ != nullptr;};
    void deleteScanBeginTime() { this->scanBeginTime_ = nullptr;};
    inline int32_t getScanBeginTime() const { DARABONBA_PTR_GET_DEFAULT(scanBeginTime_, 0) };
    inline GetVirusScanScheduledStrategyResponseBody& setScanBeginTime(int32_t scanBeginTime) { DARABONBA_PTR_SET_VALUE(scanBeginTime_, scanBeginTime) };


    // scanEndTime Field Functions 
    bool hasScanEndTime() const { return this->scanEndTime_ != nullptr;};
    void deleteScanEndTime() { this->scanEndTime_ = nullptr;};
    inline int32_t getScanEndTime() const { DARABONBA_PTR_GET_DEFAULT(scanEndTime_, 0) };
    inline GetVirusScanScheduledStrategyResponseBody& setScanEndTime(int32_t scanEndTime) { DARABONBA_PTR_SET_VALUE(scanEndTime_, scanEndTime) };


    // scanFrequency Field Functions 
    bool hasScanFrequency() const { return this->scanFrequency_ != nullptr;};
    void deleteScanFrequency() { this->scanFrequency_ = nullptr;};
    inline string getScanFrequency() const { DARABONBA_PTR_GET_DEFAULT(scanFrequency_, "") };
    inline GetVirusScanScheduledStrategyResponseBody& setScanFrequency(string scanFrequency) { DARABONBA_PTR_SET_VALUE(scanFrequency_, scanFrequency) };


    // scanInterval Field Functions 
    bool hasScanInterval() const { return this->scanInterval_ != nullptr;};
    void deleteScanInterval() { this->scanInterval_ = nullptr;};
    inline int32_t getScanInterval() const { DARABONBA_PTR_GET_DEFAULT(scanInterval_, 0) };
    inline GetVirusScanScheduledStrategyResponseBody& setScanInterval(int32_t scanInterval) { DARABONBA_PTR_SET_VALUE(scanInterval_, scanInterval) };


    // scanMode Field Functions 
    bool hasScanMode() const { return this->scanMode_ != nullptr;};
    void deleteScanMode() { this->scanMode_ = nullptr;};
    inline string getScanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, "") };
    inline GetVirusScanScheduledStrategyResponseBody& setScanMode(string scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


    // scanPath Field Functions 
    bool hasScanPath() const { return this->scanPath_ != nullptr;};
    void deleteScanPath() { this->scanPath_ = nullptr;};
    inline const vector<string> & getScanPath() const { DARABONBA_PTR_GET_CONST(scanPath_, vector<string>) };
    inline vector<string> getScanPath() { DARABONBA_PTR_GET(scanPath_, vector<string>) };
    inline GetVirusScanScheduledStrategyResponseBody& setScanPath(const vector<string> & scanPath) { DARABONBA_PTR_SET_VALUE(scanPath_, scanPath) };
    inline GetVirusScanScheduledStrategyResponseBody& setScanPath(vector<string> && scanPath) { DARABONBA_PTR_SET_RVALUE(scanPath_, scanPath) };


    // scanTargets Field Functions 
    bool hasScanTargets() const { return this->scanTargets_ != nullptr;};
    void deleteScanTargets() { this->scanTargets_ = nullptr;};
    inline const vector<string> & getScanTargets() const { DARABONBA_PTR_GET_CONST(scanTargets_, vector<string>) };
    inline vector<string> getScanTargets() { DARABONBA_PTR_GET(scanTargets_, vector<string>) };
    inline GetVirusScanScheduledStrategyResponseBody& setScanTargets(const vector<string> & scanTargets) { DARABONBA_PTR_SET_VALUE(scanTargets_, scanTargets) };
    inline GetVirusScanScheduledStrategyResponseBody& setScanTargets(vector<string> && scanTargets) { DARABONBA_PTR_SET_RVALUE(scanTargets_, scanTargets) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVirusScanScheduledStrategyResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyDescription Field Functions 
    bool hasStrategyDescription() const { return this->strategyDescription_ != nullptr;};
    void deleteStrategyDescription() { this->strategyDescription_ = nullptr;};
    inline string getStrategyDescription() const { DARABONBA_PTR_GET_DEFAULT(strategyDescription_, "") };
    inline GetVirusScanScheduledStrategyResponseBody& setStrategyDescription(string strategyDescription) { DARABONBA_PTR_SET_VALUE(strategyDescription_, strategyDescription) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline GetVirusScanScheduledStrategyResponseBody& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline GetVirusScanScheduledStrategyResponseBody& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline GetVirusScanScheduledStrategyResponseBody& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline GetVirusScanScheduledStrategyResponseBody& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    // The time when the policy was created, in the format of yyyy-MM-dd HH:mm:ss in the UTC+8 time zone.
    shared_ptr<string> createTime_ {};
    // The effective scope specified by organizational structure.
    shared_ptr<vector<GetVirusScanScheduledStrategyResponseBody::CustomMatchGroup>> customMatchGroup_ {};
    // The action to take on high-risk virus files. Valid values:
    // - **Quarantine**: Quarantine quarantined file.
    // - **Notify**: Only report an alert without taking action on quarantined file.
    shared_ptr<string> highRiskOperation_ {};
    // The time when the policy last triggered a scan, in the format of yyyy-MM-dd HH:mm:ss in the UTC+8 time zone. An empty string is returned if the policy has never been triggered.
    shared_ptr<string> lastTriggerTime_ {};
    // The action to take on low-risk virus files. Valid values:
    // - **Quarantine**: Quarantine quarantined file.
    // - **Notify**: Only report an alert without taking action on quarantined file.
    // - **None**: No action.
    shared_ptr<string> lowRiskOperation_ {};
    // The matching method for the effective scope. Valid values:
    // - **UserGroupAll**: Applies to all users under the current Alibaba Cloud account.
    // - **UserGroupNormal**: Applies only to users in specified user groups.
    shared_ptr<string> matchMode_ {};
    // The collection of user group IDs within the effective scope. An empty list is returned when MatchMode is set to UserGroupAll.
    shared_ptr<vector<string>> matchTargetIds_ {};
    // The maximum percentage of endpoint CPU usage allowed during the scan.
    shared_ptr<int64_t> maxCpuUsage_ {};
    // The action to take on medium-risk virus files. Valid values:
    // - **Quarantine**: Quarantine quarantined file.
    // - **Notify**: Only report an alert without taking action on quarantined file.
    shared_ptr<string> midRiskOperation_ {};
    // The scan performance schema pattern. Valid values:
    // - **SecurityFirst**: Security first. The default CPU usage upper limit is 50%.
    // - **Balance**: Balanced. The default CPU usage upper limit is 30%.
    // - **ExperienceFirst**: Experience first. The default CPU usage upper limit is 15%.
    shared_ptr<string> performanceMode_ {};
    // The policy priority. A smaller value indicates a higher priority.
    shared_ptr<int32_t> priority_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start hour during which the scan can be triggered. The value is a whole hour number ranging from 0 to 23, inclusive. This field is not a timestamp.
    shared_ptr<int32_t> scanBeginTime_ {};
    // The end hour during which the scan can be triggered. The value is a whole hour number ranging from 1 to 24, exclusive of the specified hour, and must be greater than ScanBeginTime. The scan task generated by each trigger expires at this hour on the same day. This field is not a timestamp.
    shared_ptr<int32_t> scanEndTime_ {};
    // The unit of the trigger cycle. Valid values:
    // - **day**: By day.
    // - **week**: By week.
    shared_ptr<string> scanFrequency_ {};
    // The interval number of the trigger cycle, which determines the trigger cycle together with ScanFrequency. For example, if ScanFrequency is set to week and ScanInterval is set to 1, the scan is triggered once a week.
    shared_ptr<int32_t> scanInterval_ {};
    // The scan path scope. Valid values:
    // - **Quick**: Quick scan. Only scans critical system directories and common risk locations.
    // - **Full**: Full disk scan.
    // - **Custom**: Custom path scan.
    shared_ptr<string> scanMode_ {};
    // The collection of custom scan paths.
    shared_ptr<vector<string>> scanPath_ {};
    // The collection of virus types to be handled in this scan.
    shared_ptr<vector<string>> scanTargets_ {};
    // The enabled status. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> status_ {};
    // The policy description.
    shared_ptr<string> strategyDescription_ {};
    // The ID of the scheduled virus scan policy.
    shared_ptr<string> strategyId_ {};
    // The policy name.
    shared_ptr<string> strategyName_ {};
    // The list of exempted users. Users in this list are excluded from the scan policy. An empty list is returned if no exemptions are configured.
    shared_ptr<vector<string>> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
