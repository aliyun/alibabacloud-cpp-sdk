// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVULSCANSCHEDULEDSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVULSCANSCHEDULEDSTRATEGYRESPONSEBODY_HPP_
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
  class CreateVulScanScheduledStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVulScanScheduledStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomMatchGroup, customMatchGroup_);
      DARABONBA_PTR_TO_JSON(LastTriggerTime, lastTriggerTime_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(MatchTargetIds, matchTargetIds_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanBeginTime, scanBeginTime_);
      DARABONBA_PTR_TO_JSON(ScanEndTime, scanEndTime_);
      DARABONBA_PTR_TO_JSON(ScanFrequency, scanFrequency_);
      DARABONBA_PTR_TO_JSON(ScanInterval, scanInterval_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyDescription, strategyDescription_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVulScanScheduledStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomMatchGroup, customMatchGroup_);
      DARABONBA_PTR_FROM_JSON(LastTriggerTime, lastTriggerTime_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(MatchTargetIds, matchTargetIds_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanBeginTime, scanBeginTime_);
      DARABONBA_PTR_FROM_JSON(ScanEndTime, scanEndTime_);
      DARABONBA_PTR_FROM_JSON(ScanFrequency, scanFrequency_);
      DARABONBA_PTR_FROM_JSON(ScanInterval, scanInterval_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyDescription, strategyDescription_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    CreateVulScanScheduledStrategyResponseBody() = default ;
    CreateVulScanScheduledStrategyResponseBody(const CreateVulScanScheduledStrategyResponseBody &) = default ;
    CreateVulScanScheduledStrategyResponseBody(CreateVulScanScheduledStrategyResponseBody &&) = default ;
    CreateVulScanScheduledStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVulScanScheduledStrategyResponseBody() = default ;
    CreateVulScanScheduledStrategyResponseBody& operator=(const CreateVulScanScheduledStrategyResponseBody &) = default ;
    CreateVulScanScheduledStrategyResponseBody& operator=(CreateVulScanScheduledStrategyResponseBody &&) = default ;
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
        && this->customMatchGroup_ == nullptr && this->lastTriggerTime_ == nullptr && this->matchMode_ == nullptr && this->matchTargetIds_ == nullptr && this->priority_ == nullptr
        && this->requestId_ == nullptr && this->scanBeginTime_ == nullptr && this->scanEndTime_ == nullptr && this->scanFrequency_ == nullptr && this->scanInterval_ == nullptr
        && this->status_ == nullptr && this->strategyDescription_ == nullptr && this->strategyId_ == nullptr && this->strategyName_ == nullptr && this->whitelist_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CreateVulScanScheduledStrategyResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customMatchGroup Field Functions 
    bool hasCustomMatchGroup() const { return this->customMatchGroup_ != nullptr;};
    void deleteCustomMatchGroup() { this->customMatchGroup_ = nullptr;};
    inline const vector<CreateVulScanScheduledStrategyResponseBody::CustomMatchGroup> & getCustomMatchGroup() const { DARABONBA_PTR_GET_CONST(customMatchGroup_, vector<CreateVulScanScheduledStrategyResponseBody::CustomMatchGroup>) };
    inline vector<CreateVulScanScheduledStrategyResponseBody::CustomMatchGroup> getCustomMatchGroup() { DARABONBA_PTR_GET(customMatchGroup_, vector<CreateVulScanScheduledStrategyResponseBody::CustomMatchGroup>) };
    inline CreateVulScanScheduledStrategyResponseBody& setCustomMatchGroup(const vector<CreateVulScanScheduledStrategyResponseBody::CustomMatchGroup> & customMatchGroup) { DARABONBA_PTR_SET_VALUE(customMatchGroup_, customMatchGroup) };
    inline CreateVulScanScheduledStrategyResponseBody& setCustomMatchGroup(vector<CreateVulScanScheduledStrategyResponseBody::CustomMatchGroup> && customMatchGroup) { DARABONBA_PTR_SET_RVALUE(customMatchGroup_, customMatchGroup) };


    // lastTriggerTime Field Functions 
    bool hasLastTriggerTime() const { return this->lastTriggerTime_ != nullptr;};
    void deleteLastTriggerTime() { this->lastTriggerTime_ = nullptr;};
    inline int64_t getLastTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(lastTriggerTime_, 0L) };
    inline CreateVulScanScheduledStrategyResponseBody& setLastTriggerTime(int64_t lastTriggerTime) { DARABONBA_PTR_SET_VALUE(lastTriggerTime_, lastTriggerTime) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline CreateVulScanScheduledStrategyResponseBody& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // matchTargetIds Field Functions 
    bool hasMatchTargetIds() const { return this->matchTargetIds_ != nullptr;};
    void deleteMatchTargetIds() { this->matchTargetIds_ = nullptr;};
    inline const vector<string> & getMatchTargetIds() const { DARABONBA_PTR_GET_CONST(matchTargetIds_, vector<string>) };
    inline vector<string> getMatchTargetIds() { DARABONBA_PTR_GET(matchTargetIds_, vector<string>) };
    inline CreateVulScanScheduledStrategyResponseBody& setMatchTargetIds(const vector<string> & matchTargetIds) { DARABONBA_PTR_SET_VALUE(matchTargetIds_, matchTargetIds) };
    inline CreateVulScanScheduledStrategyResponseBody& setMatchTargetIds(vector<string> && matchTargetIds) { DARABONBA_PTR_SET_RVALUE(matchTargetIds_, matchTargetIds) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateVulScanScheduledStrategyResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVulScanScheduledStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanBeginTime Field Functions 
    bool hasScanBeginTime() const { return this->scanBeginTime_ != nullptr;};
    void deleteScanBeginTime() { this->scanBeginTime_ = nullptr;};
    inline int32_t getScanBeginTime() const { DARABONBA_PTR_GET_DEFAULT(scanBeginTime_, 0) };
    inline CreateVulScanScheduledStrategyResponseBody& setScanBeginTime(int32_t scanBeginTime) { DARABONBA_PTR_SET_VALUE(scanBeginTime_, scanBeginTime) };


    // scanEndTime Field Functions 
    bool hasScanEndTime() const { return this->scanEndTime_ != nullptr;};
    void deleteScanEndTime() { this->scanEndTime_ = nullptr;};
    inline int32_t getScanEndTime() const { DARABONBA_PTR_GET_DEFAULT(scanEndTime_, 0) };
    inline CreateVulScanScheduledStrategyResponseBody& setScanEndTime(int32_t scanEndTime) { DARABONBA_PTR_SET_VALUE(scanEndTime_, scanEndTime) };


    // scanFrequency Field Functions 
    bool hasScanFrequency() const { return this->scanFrequency_ != nullptr;};
    void deleteScanFrequency() { this->scanFrequency_ = nullptr;};
    inline string getScanFrequency() const { DARABONBA_PTR_GET_DEFAULT(scanFrequency_, "") };
    inline CreateVulScanScheduledStrategyResponseBody& setScanFrequency(string scanFrequency) { DARABONBA_PTR_SET_VALUE(scanFrequency_, scanFrequency) };


    // scanInterval Field Functions 
    bool hasScanInterval() const { return this->scanInterval_ != nullptr;};
    void deleteScanInterval() { this->scanInterval_ = nullptr;};
    inline int32_t getScanInterval() const { DARABONBA_PTR_GET_DEFAULT(scanInterval_, 0) };
    inline CreateVulScanScheduledStrategyResponseBody& setScanInterval(int32_t scanInterval) { DARABONBA_PTR_SET_VALUE(scanInterval_, scanInterval) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateVulScanScheduledStrategyResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyDescription Field Functions 
    bool hasStrategyDescription() const { return this->strategyDescription_ != nullptr;};
    void deleteStrategyDescription() { this->strategyDescription_ = nullptr;};
    inline string getStrategyDescription() const { DARABONBA_PTR_GET_DEFAULT(strategyDescription_, "") };
    inline CreateVulScanScheduledStrategyResponseBody& setStrategyDescription(string strategyDescription) { DARABONBA_PTR_SET_VALUE(strategyDescription_, strategyDescription) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline CreateVulScanScheduledStrategyResponseBody& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline CreateVulScanScheduledStrategyResponseBody& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline CreateVulScanScheduledStrategyResponseBody& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline CreateVulScanScheduledStrategyResponseBody& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    // The time when the policy was created, in seconds-level UNIX timestamp.
    shared_ptr<int64_t> createTime_ {};
    // The effective scope specified by organizational structure. An empty list is returned if the policy is not configured by organizational structure.
    shared_ptr<vector<CreateVulScanScheduledStrategyResponseBody::CustomMatchGroup>> customMatchGroup_ {};
    // The time when the policy last triggered a scan, in seconds-level UNIX timestamp. The value 0 is returned if the policy has never been triggered.
    shared_ptr<int64_t> lastTriggerTime_ {};
    // The matching mode for the effective scope. Valid values:
    // - **UserGroupAll**: The policy takes effect for all users under the current Alibaba Cloud account.
    // - **UserGroupNormal**: The policy takes effect only for users in specified user groups.
    shared_ptr<string> matchMode_ {};
    // The IDs of the user groups for which the policy takes effect. An empty list is returned when MatchMode is set to UserGroupAll.
    shared_ptr<vector<string>> matchTargetIds_ {};
    // The policy priority. A smaller value indicates a higher priority. Valid values: 1 to 100.
    shared_ptr<int32_t> priority_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The start hour during which the scan can be triggered. The value is an integer hour. Valid values: 0 to 23, inclusive. This field is not a timestamp.
    shared_ptr<int32_t> scanBeginTime_ {};
    // The end hour during which the scan can be triggered. The value is an integer hour. Valid values: 1 to 24, exclusive of the specified hour. The value must be greater than ScanBeginTime. This field is not a timestamp.
    shared_ptr<int32_t> scanEndTime_ {};
    // The unit of the trigger cycle. Valid values:
    // - **day**: by day.
    // - **week**: by week.
    shared_ptr<string> scanFrequency_ {};
    // The interval number of the trigger cycle, which determines the trigger cycle together with ScanFrequency. Valid values: 1 to 30. For example, if ScanFrequency is set to week and ScanInterval is set to 1, the scan is triggered once a week.
    shared_ptr<int32_t> scanInterval_ {};
    // The enabling status. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> status_ {};
    // The policy description.
    shared_ptr<string> strategyDescription_ {};
    // The ID of the scheduled vulnerability scan policy.
    shared_ptr<string> strategyId_ {};
    // The policy name.
    shared_ptr<string> strategyName_ {};
    // The list of exempt users. Users in this list are excluded from the scan of this policy. An empty list is returned if no exempt users are configured.
    shared_ptr<vector<string>> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
