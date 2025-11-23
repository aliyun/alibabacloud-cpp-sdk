// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWSBYPAGERESPONSEBODYTASKFLOWLISTTASKFLOW_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWSBYPAGERESPONSEBODYTASKFLOWLISTTASKFLOW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CreatorNickName, creatorNickName_);
      DARABONBA_PTR_TO_JSON(CronBeginDate, cronBeginDate_);
      DARABONBA_PTR_TO_JSON(CronEndDate, cronEndDate_);
      DARABONBA_PTR_TO_JSON(CronStr, cronStr_);
      DARABONBA_PTR_TO_JSON(CronSwitch, cronSwitch_);
      DARABONBA_PTR_TO_JSON(CronType, cronType_);
      DARABONBA_PTR_TO_JSON(DagName, dagName_);
      DARABONBA_PTR_TO_JSON(DagOwnerId, dagOwnerId_);
      DARABONBA_PTR_TO_JSON(DagOwnerNickName, dagOwnerNickName_);
      DARABONBA_PTR_TO_JSON(DeployId, deployId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LatestInstanceStatus, latestInstanceStatus_);
      DARABONBA_PTR_TO_JSON(LatestInstanceTime, latestInstanceTime_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(ScheduleParam, scheduleParam_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeZoneId, timeZoneId_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CreatorNickName, creatorNickName_);
      DARABONBA_PTR_FROM_JSON(CronBeginDate, cronBeginDate_);
      DARABONBA_PTR_FROM_JSON(CronEndDate, cronEndDate_);
      DARABONBA_PTR_FROM_JSON(CronStr, cronStr_);
      DARABONBA_PTR_FROM_JSON(CronSwitch, cronSwitch_);
      DARABONBA_PTR_FROM_JSON(CronType, cronType_);
      DARABONBA_PTR_FROM_JSON(DagName, dagName_);
      DARABONBA_PTR_FROM_JSON(DagOwnerId, dagOwnerId_);
      DARABONBA_PTR_FROM_JSON(DagOwnerNickName, dagOwnerNickName_);
      DARABONBA_PTR_FROM_JSON(DeployId, deployId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LatestInstanceStatus, latestInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(LatestInstanceTime, latestInstanceTime_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(ScheduleParam, scheduleParam_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeZoneId, timeZoneId_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
    };
    ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow() = default ;
    ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow(const ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow &) = default ;
    ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow(ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow &&) = default ;
    ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow() = default ;
    ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& operator=(const ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow &) = default ;
    ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& operator=(ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorId_ == nullptr
        && return this->creatorNickName_ == nullptr && return this->cronBeginDate_ == nullptr && return this->cronEndDate_ == nullptr && return this->cronStr_ == nullptr && return this->cronSwitch_ == nullptr
        && return this->cronType_ == nullptr && return this->dagName_ == nullptr && return this->dagOwnerId_ == nullptr && return this->dagOwnerNickName_ == nullptr && return this->deployId_ == nullptr
        && return this->description_ == nullptr && return this->id_ == nullptr && return this->latestInstanceStatus_ == nullptr && return this->latestInstanceTime_ == nullptr && return this->scenarioId_ == nullptr
        && return this->scheduleParam_ == nullptr && return this->status_ == nullptr && return this->timeZoneId_ == nullptr && return this->triggerType_ == nullptr; };
    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorNickName Field Functions 
    bool hasCreatorNickName() const { return this->creatorNickName_ != nullptr;};
    void deleteCreatorNickName() { this->creatorNickName_ = nullptr;};
    inline string creatorNickName() const { DARABONBA_PTR_GET_DEFAULT(creatorNickName_, "") };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setCreatorNickName(string creatorNickName) { DARABONBA_PTR_SET_VALUE(creatorNickName_, creatorNickName) };


    // cronBeginDate Field Functions 
    bool hasCronBeginDate() const { return this->cronBeginDate_ != nullptr;};
    void deleteCronBeginDate() { this->cronBeginDate_ = nullptr;};
    inline string cronBeginDate() const { DARABONBA_PTR_GET_DEFAULT(cronBeginDate_, "") };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setCronBeginDate(string cronBeginDate) { DARABONBA_PTR_SET_VALUE(cronBeginDate_, cronBeginDate) };


    // cronEndDate Field Functions 
    bool hasCronEndDate() const { return this->cronEndDate_ != nullptr;};
    void deleteCronEndDate() { this->cronEndDate_ = nullptr;};
    inline string cronEndDate() const { DARABONBA_PTR_GET_DEFAULT(cronEndDate_, "") };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setCronEndDate(string cronEndDate) { DARABONBA_PTR_SET_VALUE(cronEndDate_, cronEndDate) };


    // cronStr Field Functions 
    bool hasCronStr() const { return this->cronStr_ != nullptr;};
    void deleteCronStr() { this->cronStr_ = nullptr;};
    inline string cronStr() const { DARABONBA_PTR_GET_DEFAULT(cronStr_, "") };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setCronStr(string cronStr) { DARABONBA_PTR_SET_VALUE(cronStr_, cronStr) };


    // cronSwitch Field Functions 
    bool hasCronSwitch() const { return this->cronSwitch_ != nullptr;};
    void deleteCronSwitch() { this->cronSwitch_ = nullptr;};
    inline bool cronSwitch() const { DARABONBA_PTR_GET_DEFAULT(cronSwitch_, false) };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setCronSwitch(bool cronSwitch) { DARABONBA_PTR_SET_VALUE(cronSwitch_, cronSwitch) };


    // cronType Field Functions 
    bool hasCronType() const { return this->cronType_ != nullptr;};
    void deleteCronType() { this->cronType_ = nullptr;};
    inline int32_t cronType() const { DARABONBA_PTR_GET_DEFAULT(cronType_, 0) };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setCronType(int32_t cronType) { DARABONBA_PTR_SET_VALUE(cronType_, cronType) };


    // dagName Field Functions 
    bool hasDagName() const { return this->dagName_ != nullptr;};
    void deleteDagName() { this->dagName_ = nullptr;};
    inline string dagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


    // dagOwnerId Field Functions 
    bool hasDagOwnerId() const { return this->dagOwnerId_ != nullptr;};
    void deleteDagOwnerId() { this->dagOwnerId_ = nullptr;};
    inline string dagOwnerId() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerId_, "") };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setDagOwnerId(string dagOwnerId) { DARABONBA_PTR_SET_VALUE(dagOwnerId_, dagOwnerId) };


    // dagOwnerNickName Field Functions 
    bool hasDagOwnerNickName() const { return this->dagOwnerNickName_ != nullptr;};
    void deleteDagOwnerNickName() { this->dagOwnerNickName_ = nullptr;};
    inline string dagOwnerNickName() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerNickName_, "") };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setDagOwnerNickName(string dagOwnerNickName) { DARABONBA_PTR_SET_VALUE(dagOwnerNickName_, dagOwnerNickName) };


    // deployId Field Functions 
    bool hasDeployId() const { return this->deployId_ != nullptr;};
    void deleteDeployId() { this->deployId_ = nullptr;};
    inline int64_t deployId() const { DARABONBA_PTR_GET_DEFAULT(deployId_, 0L) };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setDeployId(int64_t deployId) { DARABONBA_PTR_SET_VALUE(deployId_, deployId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // latestInstanceStatus Field Functions 
    bool hasLatestInstanceStatus() const { return this->latestInstanceStatus_ != nullptr;};
    void deleteLatestInstanceStatus() { this->latestInstanceStatus_ = nullptr;};
    inline int32_t latestInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceStatus_, 0) };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setLatestInstanceStatus(int32_t latestInstanceStatus) { DARABONBA_PTR_SET_VALUE(latestInstanceStatus_, latestInstanceStatus) };


    // latestInstanceTime Field Functions 
    bool hasLatestInstanceTime() const { return this->latestInstanceTime_ != nullptr;};
    void deleteLatestInstanceTime() { this->latestInstanceTime_ = nullptr;};
    inline string latestInstanceTime() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceTime_, "") };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setLatestInstanceTime(string latestInstanceTime) { DARABONBA_PTR_SET_VALUE(latestInstanceTime_, latestInstanceTime) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // scheduleParam Field Functions 
    bool hasScheduleParam() const { return this->scheduleParam_ != nullptr;};
    void deleteScheduleParam() { this->scheduleParam_ = nullptr;};
    inline string scheduleParam() const { DARABONBA_PTR_GET_DEFAULT(scheduleParam_, "") };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setScheduleParam(string scheduleParam) { DARABONBA_PTR_SET_VALUE(scheduleParam_, scheduleParam) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeZoneId Field Functions 
    bool hasTimeZoneId() const { return this->timeZoneId_ != nullptr;};
    void deleteTimeZoneId() { this->timeZoneId_ = nullptr;};
    inline string timeZoneId() const { DARABONBA_PTR_GET_DEFAULT(timeZoneId_, "") };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setTimeZoneId(string timeZoneId) { DARABONBA_PTR_SET_VALUE(timeZoneId_, timeZoneId) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline int32_t triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0) };
    inline ListTaskFlowsByPageResponseBodyTaskFlowListTaskFlow& setTriggerType(int32_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // The ID of the user who created the task flow.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The username of the user who created the task flow.
    std::shared_ptr<string> creatorNickName_ = nullptr;
    // The start time of scheduled scheduling. The task flow is not scheduled before this point in time.
    std::shared_ptr<string> cronBeginDate_ = nullptr;
    // The end time of scheduled scheduling. The task flow is not scheduled after this point in time.
    std::shared_ptr<string> cronEndDate_ = nullptr;
    // Scheduled Cron.
    std::shared_ptr<string> cronStr_ = nullptr;
    // Whether to enable scheduled scheduling.
    std::shared_ptr<bool> cronSwitch_ = nullptr;
    // Scheduling cycle type. Valid values:
    // - **2**: Hourly scheduling
    // - **3**: Daily scheduling
    // - **4**: Weekly scheduling
    // - **5**: Monthly scheduling
    std::shared_ptr<int32_t> cronType_ = nullptr;
    // The name of the task flow.
    std::shared_ptr<string> dagName_ = nullptr;
    // The user ID of the task flow owner.
    std::shared_ptr<string> dagOwnerId_ = nullptr;
    // The username of the owner of the task flow.
    std::shared_ptr<string> dagOwnerNickName_ = nullptr;
    // The ID of the last deployment record of the task flow.
    std::shared_ptr<int64_t> deployId_ = nullptr;
    // The description of the task flow.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the task flow.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The status of the last execution of the task flow. Valid values:
    // 
    // *   **0**: invalid
    // *   **1**: scheduling disabled
    // *   **2**: waiting to be scheduled
    std::shared_ptr<int32_t> latestInstanceStatus_ = nullptr;
    // The time when the last execution record was created.
    std::shared_ptr<string> latestInstanceTime_ = nullptr;
    // The ID of the application scenario.
    std::shared_ptr<string> scenarioId_ = nullptr;
    // Event scheduling configuration, JSON string format.
    std::shared_ptr<string> scheduleParam_ = nullptr;
    // The status of the task flow. Valid values:
    // 
    // *   **0**: invalid
    // *   **1**: scheduling disabled
    // *   **2**: waiting to be scheduled
    std::shared_ptr<int32_t> status_ = nullptr;
    // Time zone setting. Default value: East 8(Asia/Shanghai).
    std::shared_ptr<string> timeZoneId_ = nullptr;
    // The trigger type. Valid values:
    // - **0**: Periodic scheduling
    // - **1**: Run manually
    std::shared_ptr<int32_t> triggerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
