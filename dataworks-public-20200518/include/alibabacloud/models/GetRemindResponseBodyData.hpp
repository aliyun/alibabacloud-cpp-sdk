// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREMINDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETREMINDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRemindResponseBodyDataBaselines.hpp>
#include <alibabacloud/models/GetRemindResponseBodyDataBizProcesses.hpp>
#include <alibabacloud/models/GetRemindResponseBodyDataNodes.hpp>
#include <alibabacloud/models/GetRemindResponseBodyDataProjects.hpp>
#include <alibabacloud/models/GetRemindResponseBodyDataReceivers.hpp>
#include <alibabacloud/models/GetRemindResponseBodyDataRobots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetRemindResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRemindResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertInterval, alertInterval_);
      DARABONBA_PTR_TO_JSON(AlertMethods, alertMethods_);
      DARABONBA_PTR_TO_JSON(AlertTargets, alertTargets_);
      DARABONBA_PTR_TO_JSON(AlertUnit, alertUnit_);
      DARABONBA_PTR_TO_JSON(AllowNodes, allowNodes_);
      DARABONBA_PTR_TO_JSON(Baselines, baselines_);
      DARABONBA_PTR_TO_JSON(BizProcesses, bizProcesses_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(DndEnd, dndEnd_);
      DARABONBA_PTR_TO_JSON(DndStart, dndStart_);
      DARABONBA_PTR_TO_JSON(Founder, founder_);
      DARABONBA_PTR_TO_JSON(MaxAlertTimes, maxAlertTimes_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Projects, projects_);
      DARABONBA_PTR_TO_JSON(Receivers, receivers_);
      DARABONBA_PTR_TO_JSON(RemindId, remindId_);
      DARABONBA_PTR_TO_JSON(RemindName, remindName_);
      DARABONBA_PTR_TO_JSON(RemindType, remindType_);
      DARABONBA_PTR_TO_JSON(RemindUnit, remindUnit_);
      DARABONBA_PTR_TO_JSON(Robots, robots_);
      DARABONBA_PTR_TO_JSON(Useflag, useflag_);
      DARABONBA_PTR_TO_JSON(Webhooks, webhooks_);
    };
    friend void from_json(const Darabonba::Json& j, GetRemindResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertInterval, alertInterval_);
      DARABONBA_PTR_FROM_JSON(AlertMethods, alertMethods_);
      DARABONBA_PTR_FROM_JSON(AlertTargets, alertTargets_);
      DARABONBA_PTR_FROM_JSON(AlertUnit, alertUnit_);
      DARABONBA_PTR_FROM_JSON(AllowNodes, allowNodes_);
      DARABONBA_PTR_FROM_JSON(Baselines, baselines_);
      DARABONBA_PTR_FROM_JSON(BizProcesses, bizProcesses_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(DndEnd, dndEnd_);
      DARABONBA_PTR_FROM_JSON(DndStart, dndStart_);
      DARABONBA_PTR_FROM_JSON(Founder, founder_);
      DARABONBA_PTR_FROM_JSON(MaxAlertTimes, maxAlertTimes_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Projects, projects_);
      DARABONBA_PTR_FROM_JSON(Receivers, receivers_);
      DARABONBA_PTR_FROM_JSON(RemindId, remindId_);
      DARABONBA_PTR_FROM_JSON(RemindName, remindName_);
      DARABONBA_PTR_FROM_JSON(RemindType, remindType_);
      DARABONBA_PTR_FROM_JSON(RemindUnit, remindUnit_);
      DARABONBA_PTR_FROM_JSON(Robots, robots_);
      DARABONBA_PTR_FROM_JSON(Useflag, useflag_);
      DARABONBA_PTR_FROM_JSON(Webhooks, webhooks_);
    };
    GetRemindResponseBodyData() = default ;
    GetRemindResponseBodyData(const GetRemindResponseBodyData &) = default ;
    GetRemindResponseBodyData(GetRemindResponseBodyData &&) = default ;
    GetRemindResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRemindResponseBodyData() = default ;
    GetRemindResponseBodyData& operator=(const GetRemindResponseBodyData &) = default ;
    GetRemindResponseBodyData& operator=(GetRemindResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertInterval_ != nullptr
        && this->alertMethods_ != nullptr && this->alertTargets_ != nullptr && this->alertUnit_ != nullptr && this->allowNodes_ != nullptr && this->baselines_ != nullptr
        && this->bizProcesses_ != nullptr && this->detail_ != nullptr && this->dndEnd_ != nullptr && this->dndStart_ != nullptr && this->founder_ != nullptr
        && this->maxAlertTimes_ != nullptr && this->nodes_ != nullptr && this->projects_ != nullptr && this->receivers_ != nullptr && this->remindId_ != nullptr
        && this->remindName_ != nullptr && this->remindType_ != nullptr && this->remindUnit_ != nullptr && this->robots_ != nullptr && this->useflag_ != nullptr
        && this->webhooks_ != nullptr; };
    // alertInterval Field Functions 
    bool hasAlertInterval() const { return this->alertInterval_ != nullptr;};
    void deleteAlertInterval() { this->alertInterval_ = nullptr;};
    inline int32_t alertInterval() const { DARABONBA_PTR_GET_DEFAULT(alertInterval_, 0) };
    inline GetRemindResponseBodyData& setAlertInterval(int32_t alertInterval) { DARABONBA_PTR_SET_VALUE(alertInterval_, alertInterval) };


    // alertMethods Field Functions 
    bool hasAlertMethods() const { return this->alertMethods_ != nullptr;};
    void deleteAlertMethods() { this->alertMethods_ = nullptr;};
    inline const vector<string> & alertMethods() const { DARABONBA_PTR_GET_CONST(alertMethods_, vector<string>) };
    inline vector<string> alertMethods() { DARABONBA_PTR_GET(alertMethods_, vector<string>) };
    inline GetRemindResponseBodyData& setAlertMethods(const vector<string> & alertMethods) { DARABONBA_PTR_SET_VALUE(alertMethods_, alertMethods) };
    inline GetRemindResponseBodyData& setAlertMethods(vector<string> && alertMethods) { DARABONBA_PTR_SET_RVALUE(alertMethods_, alertMethods) };


    // alertTargets Field Functions 
    bool hasAlertTargets() const { return this->alertTargets_ != nullptr;};
    void deleteAlertTargets() { this->alertTargets_ = nullptr;};
    inline const vector<string> & alertTargets() const { DARABONBA_PTR_GET_CONST(alertTargets_, vector<string>) };
    inline vector<string> alertTargets() { DARABONBA_PTR_GET(alertTargets_, vector<string>) };
    inline GetRemindResponseBodyData& setAlertTargets(const vector<string> & alertTargets) { DARABONBA_PTR_SET_VALUE(alertTargets_, alertTargets) };
    inline GetRemindResponseBodyData& setAlertTargets(vector<string> && alertTargets) { DARABONBA_PTR_SET_RVALUE(alertTargets_, alertTargets) };


    // alertUnit Field Functions 
    bool hasAlertUnit() const { return this->alertUnit_ != nullptr;};
    void deleteAlertUnit() { this->alertUnit_ = nullptr;};
    inline string alertUnit() const { DARABONBA_PTR_GET_DEFAULT(alertUnit_, "") };
    inline GetRemindResponseBodyData& setAlertUnit(string alertUnit) { DARABONBA_PTR_SET_VALUE(alertUnit_, alertUnit) };


    // allowNodes Field Functions 
    bool hasAllowNodes() const { return this->allowNodes_ != nullptr;};
    void deleteAllowNodes() { this->allowNodes_ = nullptr;};
    inline const vector<int64_t> & allowNodes() const { DARABONBA_PTR_GET_CONST(allowNodes_, vector<int64_t>) };
    inline vector<int64_t> allowNodes() { DARABONBA_PTR_GET(allowNodes_, vector<int64_t>) };
    inline GetRemindResponseBodyData& setAllowNodes(const vector<int64_t> & allowNodes) { DARABONBA_PTR_SET_VALUE(allowNodes_, allowNodes) };
    inline GetRemindResponseBodyData& setAllowNodes(vector<int64_t> && allowNodes) { DARABONBA_PTR_SET_RVALUE(allowNodes_, allowNodes) };


    // baselines Field Functions 
    bool hasBaselines() const { return this->baselines_ != nullptr;};
    void deleteBaselines() { this->baselines_ = nullptr;};
    inline const vector<Models::GetRemindResponseBodyDataBaselines> & baselines() const { DARABONBA_PTR_GET_CONST(baselines_, vector<Models::GetRemindResponseBodyDataBaselines>) };
    inline vector<Models::GetRemindResponseBodyDataBaselines> baselines() { DARABONBA_PTR_GET(baselines_, vector<Models::GetRemindResponseBodyDataBaselines>) };
    inline GetRemindResponseBodyData& setBaselines(const vector<Models::GetRemindResponseBodyDataBaselines> & baselines) { DARABONBA_PTR_SET_VALUE(baselines_, baselines) };
    inline GetRemindResponseBodyData& setBaselines(vector<Models::GetRemindResponseBodyDataBaselines> && baselines) { DARABONBA_PTR_SET_RVALUE(baselines_, baselines) };


    // bizProcesses Field Functions 
    bool hasBizProcesses() const { return this->bizProcesses_ != nullptr;};
    void deleteBizProcesses() { this->bizProcesses_ = nullptr;};
    inline const vector<Models::GetRemindResponseBodyDataBizProcesses> & bizProcesses() const { DARABONBA_PTR_GET_CONST(bizProcesses_, vector<Models::GetRemindResponseBodyDataBizProcesses>) };
    inline vector<Models::GetRemindResponseBodyDataBizProcesses> bizProcesses() { DARABONBA_PTR_GET(bizProcesses_, vector<Models::GetRemindResponseBodyDataBizProcesses>) };
    inline GetRemindResponseBodyData& setBizProcesses(const vector<Models::GetRemindResponseBodyDataBizProcesses> & bizProcesses) { DARABONBA_PTR_SET_VALUE(bizProcesses_, bizProcesses) };
    inline GetRemindResponseBodyData& setBizProcesses(vector<Models::GetRemindResponseBodyDataBizProcesses> && bizProcesses) { DARABONBA_PTR_SET_RVALUE(bizProcesses_, bizProcesses) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline GetRemindResponseBodyData& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // dndEnd Field Functions 
    bool hasDndEnd() const { return this->dndEnd_ != nullptr;};
    void deleteDndEnd() { this->dndEnd_ = nullptr;};
    inline string dndEnd() const { DARABONBA_PTR_GET_DEFAULT(dndEnd_, "") };
    inline GetRemindResponseBodyData& setDndEnd(string dndEnd) { DARABONBA_PTR_SET_VALUE(dndEnd_, dndEnd) };


    // dndStart Field Functions 
    bool hasDndStart() const { return this->dndStart_ != nullptr;};
    void deleteDndStart() { this->dndStart_ = nullptr;};
    inline string dndStart() const { DARABONBA_PTR_GET_DEFAULT(dndStart_, "") };
    inline GetRemindResponseBodyData& setDndStart(string dndStart) { DARABONBA_PTR_SET_VALUE(dndStart_, dndStart) };


    // founder Field Functions 
    bool hasFounder() const { return this->founder_ != nullptr;};
    void deleteFounder() { this->founder_ = nullptr;};
    inline string founder() const { DARABONBA_PTR_GET_DEFAULT(founder_, "") };
    inline GetRemindResponseBodyData& setFounder(string founder) { DARABONBA_PTR_SET_VALUE(founder_, founder) };


    // maxAlertTimes Field Functions 
    bool hasMaxAlertTimes() const { return this->maxAlertTimes_ != nullptr;};
    void deleteMaxAlertTimes() { this->maxAlertTimes_ = nullptr;};
    inline int32_t maxAlertTimes() const { DARABONBA_PTR_GET_DEFAULT(maxAlertTimes_, 0) };
    inline GetRemindResponseBodyData& setMaxAlertTimes(int32_t maxAlertTimes) { DARABONBA_PTR_SET_VALUE(maxAlertTimes_, maxAlertTimes) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::GetRemindResponseBodyDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::GetRemindResponseBodyDataNodes>) };
    inline vector<Models::GetRemindResponseBodyDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::GetRemindResponseBodyDataNodes>) };
    inline GetRemindResponseBodyData& setNodes(const vector<Models::GetRemindResponseBodyDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetRemindResponseBodyData& setNodes(vector<Models::GetRemindResponseBodyDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // projects Field Functions 
    bool hasProjects() const { return this->projects_ != nullptr;};
    void deleteProjects() { this->projects_ = nullptr;};
    inline const vector<Models::GetRemindResponseBodyDataProjects> & projects() const { DARABONBA_PTR_GET_CONST(projects_, vector<Models::GetRemindResponseBodyDataProjects>) };
    inline vector<Models::GetRemindResponseBodyDataProjects> projects() { DARABONBA_PTR_GET(projects_, vector<Models::GetRemindResponseBodyDataProjects>) };
    inline GetRemindResponseBodyData& setProjects(const vector<Models::GetRemindResponseBodyDataProjects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
    inline GetRemindResponseBodyData& setProjects(vector<Models::GetRemindResponseBodyDataProjects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


    // receivers Field Functions 
    bool hasReceivers() const { return this->receivers_ != nullptr;};
    void deleteReceivers() { this->receivers_ = nullptr;};
    inline const vector<Models::GetRemindResponseBodyDataReceivers> & receivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<Models::GetRemindResponseBodyDataReceivers>) };
    inline vector<Models::GetRemindResponseBodyDataReceivers> receivers() { DARABONBA_PTR_GET(receivers_, vector<Models::GetRemindResponseBodyDataReceivers>) };
    inline GetRemindResponseBodyData& setReceivers(const vector<Models::GetRemindResponseBodyDataReceivers> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
    inline GetRemindResponseBodyData& setReceivers(vector<Models::GetRemindResponseBodyDataReceivers> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


    // remindId Field Functions 
    bool hasRemindId() const { return this->remindId_ != nullptr;};
    void deleteRemindId() { this->remindId_ = nullptr;};
    inline int64_t remindId() const { DARABONBA_PTR_GET_DEFAULT(remindId_, 0L) };
    inline GetRemindResponseBodyData& setRemindId(int64_t remindId) { DARABONBA_PTR_SET_VALUE(remindId_, remindId) };


    // remindName Field Functions 
    bool hasRemindName() const { return this->remindName_ != nullptr;};
    void deleteRemindName() { this->remindName_ = nullptr;};
    inline string remindName() const { DARABONBA_PTR_GET_DEFAULT(remindName_, "") };
    inline GetRemindResponseBodyData& setRemindName(string remindName) { DARABONBA_PTR_SET_VALUE(remindName_, remindName) };


    // remindType Field Functions 
    bool hasRemindType() const { return this->remindType_ != nullptr;};
    void deleteRemindType() { this->remindType_ = nullptr;};
    inline string remindType() const { DARABONBA_PTR_GET_DEFAULT(remindType_, "") };
    inline GetRemindResponseBodyData& setRemindType(string remindType) { DARABONBA_PTR_SET_VALUE(remindType_, remindType) };


    // remindUnit Field Functions 
    bool hasRemindUnit() const { return this->remindUnit_ != nullptr;};
    void deleteRemindUnit() { this->remindUnit_ = nullptr;};
    inline string remindUnit() const { DARABONBA_PTR_GET_DEFAULT(remindUnit_, "") };
    inline GetRemindResponseBodyData& setRemindUnit(string remindUnit) { DARABONBA_PTR_SET_VALUE(remindUnit_, remindUnit) };


    // robots Field Functions 
    bool hasRobots() const { return this->robots_ != nullptr;};
    void deleteRobots() { this->robots_ = nullptr;};
    inline const vector<Models::GetRemindResponseBodyDataRobots> & robots() const { DARABONBA_PTR_GET_CONST(robots_, vector<Models::GetRemindResponseBodyDataRobots>) };
    inline vector<Models::GetRemindResponseBodyDataRobots> robots() { DARABONBA_PTR_GET(robots_, vector<Models::GetRemindResponseBodyDataRobots>) };
    inline GetRemindResponseBodyData& setRobots(const vector<Models::GetRemindResponseBodyDataRobots> & robots) { DARABONBA_PTR_SET_VALUE(robots_, robots) };
    inline GetRemindResponseBodyData& setRobots(vector<Models::GetRemindResponseBodyDataRobots> && robots) { DARABONBA_PTR_SET_RVALUE(robots_, robots) };


    // useflag Field Functions 
    bool hasUseflag() const { return this->useflag_ != nullptr;};
    void deleteUseflag() { this->useflag_ = nullptr;};
    inline bool useflag() const { DARABONBA_PTR_GET_DEFAULT(useflag_, false) };
    inline GetRemindResponseBodyData& setUseflag(bool useflag) { DARABONBA_PTR_SET_VALUE(useflag_, useflag) };


    // webhooks Field Functions 
    bool hasWebhooks() const { return this->webhooks_ != nullptr;};
    void deleteWebhooks() { this->webhooks_ = nullptr;};
    inline const vector<string> & webhooks() const { DARABONBA_PTR_GET_CONST(webhooks_, vector<string>) };
    inline vector<string> webhooks() { DARABONBA_PTR_GET(webhooks_, vector<string>) };
    inline GetRemindResponseBodyData& setWebhooks(const vector<string> & webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };
    inline GetRemindResponseBodyData& setWebhooks(vector<string> && webhooks) { DARABONBA_PTR_SET_RVALUE(webhooks_, webhooks) };


  protected:
    // The minimum interval at which alerts are reported. Unit: seconds.
    std::shared_ptr<int32_t> alertInterval_ = nullptr;
    // The notification method.
    std::shared_ptr<vector<string>> alertMethods_ = nullptr;
    // The description of the alert recipient. For more information about alert recipients, see the Receivers parameter.
    std::shared_ptr<vector<string>> alertTargets_ = nullptr;
    // The type of the alert recipient. For more information about alert recipient types, see the Receivers parameter. Valid values:
    // 
    // *   OWNER: the task owner
    // *   OTHER: specified personnel
    // *   SHIFT_SCHEDULE: personnel in a shift schedule
    std::shared_ptr<string> alertUnit_ = nullptr;
    // The IDs of the nodes that are added to a whitelist.
    std::shared_ptr<vector<int64_t>> allowNodes_ = nullptr;
    // The baselines to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is BASELINE.
    std::shared_ptr<vector<Models::GetRemindResponseBodyDataBaselines>> baselines_ = nullptr;
    // The workflows to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is BIZPROCESS.
    std::shared_ptr<vector<Models::GetRemindResponseBodyDataBizProcesses>> bizProcesses_ = nullptr;
    // *   If the value of the RemindType parameter is FINISHED, this parameter is left empty.
    // *   If the value of the RemindType parameter is UNFINISHED, the trigger conditions are returned as key-value pairs. Example: {"hour":23,"minu":59}. Valid values of hour: [0,47]. Valid values of minu: [0,59].
    // *   If the value of the RemindType parameter is ERROR, this parameter is left empty.
    // *   If the value of the RemindType parameter is CYCLE_UNFINISHED, the trigger conditions are returned as key-value pairs. Example: {"1":"05:50","2":"06:50","3":"07:50","4":"08:50","5":"09:50","6":"10:50","7":"11:50","8":"12:50","9":"13:50","10":"14:50","11":"15:50","12":"16:50","13":"17:50","14":"18:50","15":"19:50","16":"20:50","17":"21:50","18":"22:50","19":"23:50","20":"24:50","21":"25:50"}. The key indicates the ID of the cycle. Valid values: [1,288]. The value indicates the timeout period of the node that is running in the cycle. Specify the value in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
    // *   If the value of the RemindType parameter is TIMEOUT, the timeout period is returned. Unit: seconds. Example: 1800. This value indicates that an alert is reported if the node has run for more than 30 minutes.
    std::shared_ptr<string> detail_ = nullptr;
    // The end time of the quiet hours. The value is in the hh:mm format. Valid values of hh: [0,23]. Valid values of mm: [0,59].
    std::shared_ptr<string> dndEnd_ = nullptr;
    // The start time of the quiet hours. The value is in the hh:mm format. Valid values of hh: [0,23]. Valid values of mm: [0,59].
    std::shared_ptr<string> dndStart_ = nullptr;
    // The ID of the Alibaba Cloud account used by the creator of the custom alert rule.
    std::shared_ptr<string> founder_ = nullptr;
    // The maximum number of alerts.
    std::shared_ptr<int32_t> maxAlertTimes_ = nullptr;
    // The nodes to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is NODE.
    std::shared_ptr<vector<Models::GetRemindResponseBodyDataNodes>> nodes_ = nullptr;
    // The workspaces to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is PROJECT.
    std::shared_ptr<vector<Models::GetRemindResponseBodyDataProjects>> projects_ = nullptr;
    // The information about the alert recipients.
    std::shared_ptr<vector<Models::GetRemindResponseBodyDataReceivers>> receivers_ = nullptr;
    // The custom alert rule ID.
    std::shared_ptr<int64_t> remindId_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> remindName_ = nullptr;
    // The conditions that trigger an alert. Valid values: FINISHED, UNFINISHED, ERROR, CYCLE_UNFINISHED, and TIMEOUT.
    std::shared_ptr<string> remindType_ = nullptr;
    // The type of the object to which the custom alert rule is applied. Valid values: NODE, BASELINE, PROJECT, and BIZPROCESS. The value NODE indicates a node. The value BASELINE indicates a baseline. The value PROJECT indicates a workspace. The value BIZPROCESS indicates a workflow.
    std::shared_ptr<string> remindUnit_ = nullptr;
    // The webhook URLs of the DingTalk chatbots.
    std::shared_ptr<vector<Models::GetRemindResponseBodyDataRobots>> robots_ = nullptr;
    // Indicates whether the custom alert rule is enabled. Valid values: true and false.
    std::shared_ptr<bool> useflag_ = nullptr;
    // WebHook URL
    std::shared_ptr<vector<string>> webhooks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
