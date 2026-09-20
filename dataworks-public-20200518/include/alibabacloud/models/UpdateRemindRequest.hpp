// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREMINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREMINDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateRemindRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRemindRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertInterval, alertInterval_);
      DARABONBA_PTR_TO_JSON(AlertMethods, alertMethods_);
      DARABONBA_PTR_TO_JSON(AlertTargets, alertTargets_);
      DARABONBA_PTR_TO_JSON(AlertUnit, alertUnit_);
      DARABONBA_PTR_TO_JSON(BaselineIds, baselineIds_);
      DARABONBA_PTR_TO_JSON(BizProcessIds, bizProcessIds_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(DndEnd, dndEnd_);
      DARABONBA_PTR_TO_JSON(MaxAlertTimes, maxAlertTimes_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RemindId, remindId_);
      DARABONBA_PTR_TO_JSON(RemindName, remindName_);
      DARABONBA_PTR_TO_JSON(RemindType, remindType_);
      DARABONBA_PTR_TO_JSON(RemindUnit, remindUnit_);
      DARABONBA_PTR_TO_JSON(RobotUrls, robotUrls_);
      DARABONBA_PTR_TO_JSON(UseFlag, useFlag_);
      DARABONBA_PTR_TO_JSON(Webhooks, webhooks_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRemindRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertInterval, alertInterval_);
      DARABONBA_PTR_FROM_JSON(AlertMethods, alertMethods_);
      DARABONBA_PTR_FROM_JSON(AlertTargets, alertTargets_);
      DARABONBA_PTR_FROM_JSON(AlertUnit, alertUnit_);
      DARABONBA_PTR_FROM_JSON(BaselineIds, baselineIds_);
      DARABONBA_PTR_FROM_JSON(BizProcessIds, bizProcessIds_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(DndEnd, dndEnd_);
      DARABONBA_PTR_FROM_JSON(MaxAlertTimes, maxAlertTimes_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RemindId, remindId_);
      DARABONBA_PTR_FROM_JSON(RemindName, remindName_);
      DARABONBA_PTR_FROM_JSON(RemindType, remindType_);
      DARABONBA_PTR_FROM_JSON(RemindUnit, remindUnit_);
      DARABONBA_PTR_FROM_JSON(RobotUrls, robotUrls_);
      DARABONBA_PTR_FROM_JSON(UseFlag, useFlag_);
      DARABONBA_PTR_FROM_JSON(Webhooks, webhooks_);
    };
    UpdateRemindRequest() = default ;
    UpdateRemindRequest(const UpdateRemindRequest &) = default ;
    UpdateRemindRequest(UpdateRemindRequest &&) = default ;
    UpdateRemindRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRemindRequest() = default ;
    UpdateRemindRequest& operator=(const UpdateRemindRequest &) = default ;
    UpdateRemindRequest& operator=(UpdateRemindRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertInterval_ == nullptr
        && this->alertMethods_ == nullptr && this->alertTargets_ == nullptr && this->alertUnit_ == nullptr && this->baselineIds_ == nullptr && this->bizProcessIds_ == nullptr
        && this->detail_ == nullptr && this->dndEnd_ == nullptr && this->maxAlertTimes_ == nullptr && this->nodeIds_ == nullptr && this->projectId_ == nullptr
        && this->remindId_ == nullptr && this->remindName_ == nullptr && this->remindType_ == nullptr && this->remindUnit_ == nullptr && this->robotUrls_ == nullptr
        && this->useFlag_ == nullptr && this->webhooks_ == nullptr; };
    // alertInterval Field Functions 
    bool hasAlertInterval() const { return this->alertInterval_ != nullptr;};
    void deleteAlertInterval() { this->alertInterval_ = nullptr;};
    inline int32_t getAlertInterval() const { DARABONBA_PTR_GET_DEFAULT(alertInterval_, 0) };
    inline UpdateRemindRequest& setAlertInterval(int32_t alertInterval) { DARABONBA_PTR_SET_VALUE(alertInterval_, alertInterval) };


    // alertMethods Field Functions 
    bool hasAlertMethods() const { return this->alertMethods_ != nullptr;};
    void deleteAlertMethods() { this->alertMethods_ = nullptr;};
    inline string getAlertMethods() const { DARABONBA_PTR_GET_DEFAULT(alertMethods_, "") };
    inline UpdateRemindRequest& setAlertMethods(string alertMethods) { DARABONBA_PTR_SET_VALUE(alertMethods_, alertMethods) };


    // alertTargets Field Functions 
    bool hasAlertTargets() const { return this->alertTargets_ != nullptr;};
    void deleteAlertTargets() { this->alertTargets_ = nullptr;};
    inline string getAlertTargets() const { DARABONBA_PTR_GET_DEFAULT(alertTargets_, "") };
    inline UpdateRemindRequest& setAlertTargets(string alertTargets) { DARABONBA_PTR_SET_VALUE(alertTargets_, alertTargets) };


    // alertUnit Field Functions 
    bool hasAlertUnit() const { return this->alertUnit_ != nullptr;};
    void deleteAlertUnit() { this->alertUnit_ = nullptr;};
    inline string getAlertUnit() const { DARABONBA_PTR_GET_DEFAULT(alertUnit_, "") };
    inline UpdateRemindRequest& setAlertUnit(string alertUnit) { DARABONBA_PTR_SET_VALUE(alertUnit_, alertUnit) };


    // baselineIds Field Functions 
    bool hasBaselineIds() const { return this->baselineIds_ != nullptr;};
    void deleteBaselineIds() { this->baselineIds_ = nullptr;};
    inline string getBaselineIds() const { DARABONBA_PTR_GET_DEFAULT(baselineIds_, "") };
    inline UpdateRemindRequest& setBaselineIds(string baselineIds) { DARABONBA_PTR_SET_VALUE(baselineIds_, baselineIds) };


    // bizProcessIds Field Functions 
    bool hasBizProcessIds() const { return this->bizProcessIds_ != nullptr;};
    void deleteBizProcessIds() { this->bizProcessIds_ = nullptr;};
    inline string getBizProcessIds() const { DARABONBA_PTR_GET_DEFAULT(bizProcessIds_, "") };
    inline UpdateRemindRequest& setBizProcessIds(string bizProcessIds) { DARABONBA_PTR_SET_VALUE(bizProcessIds_, bizProcessIds) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline UpdateRemindRequest& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // dndEnd Field Functions 
    bool hasDndEnd() const { return this->dndEnd_ != nullptr;};
    void deleteDndEnd() { this->dndEnd_ = nullptr;};
    inline string getDndEnd() const { DARABONBA_PTR_GET_DEFAULT(dndEnd_, "") };
    inline UpdateRemindRequest& setDndEnd(string dndEnd) { DARABONBA_PTR_SET_VALUE(dndEnd_, dndEnd) };


    // maxAlertTimes Field Functions 
    bool hasMaxAlertTimes() const { return this->maxAlertTimes_ != nullptr;};
    void deleteMaxAlertTimes() { this->maxAlertTimes_ = nullptr;};
    inline int32_t getMaxAlertTimes() const { DARABONBA_PTR_GET_DEFAULT(maxAlertTimes_, 0) };
    inline UpdateRemindRequest& setMaxAlertTimes(int32_t maxAlertTimes) { DARABONBA_PTR_SET_VALUE(maxAlertTimes_, maxAlertTimes) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline string getNodeIds() const { DARABONBA_PTR_GET_DEFAULT(nodeIds_, "") };
    inline UpdateRemindRequest& setNodeIds(string nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateRemindRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // remindId Field Functions 
    bool hasRemindId() const { return this->remindId_ != nullptr;};
    void deleteRemindId() { this->remindId_ = nullptr;};
    inline int64_t getRemindId() const { DARABONBA_PTR_GET_DEFAULT(remindId_, 0L) };
    inline UpdateRemindRequest& setRemindId(int64_t remindId) { DARABONBA_PTR_SET_VALUE(remindId_, remindId) };


    // remindName Field Functions 
    bool hasRemindName() const { return this->remindName_ != nullptr;};
    void deleteRemindName() { this->remindName_ = nullptr;};
    inline string getRemindName() const { DARABONBA_PTR_GET_DEFAULT(remindName_, "") };
    inline UpdateRemindRequest& setRemindName(string remindName) { DARABONBA_PTR_SET_VALUE(remindName_, remindName) };


    // remindType Field Functions 
    bool hasRemindType() const { return this->remindType_ != nullptr;};
    void deleteRemindType() { this->remindType_ = nullptr;};
    inline string getRemindType() const { DARABONBA_PTR_GET_DEFAULT(remindType_, "") };
    inline UpdateRemindRequest& setRemindType(string remindType) { DARABONBA_PTR_SET_VALUE(remindType_, remindType) };


    // remindUnit Field Functions 
    bool hasRemindUnit() const { return this->remindUnit_ != nullptr;};
    void deleteRemindUnit() { this->remindUnit_ = nullptr;};
    inline string getRemindUnit() const { DARABONBA_PTR_GET_DEFAULT(remindUnit_, "") };
    inline UpdateRemindRequest& setRemindUnit(string remindUnit) { DARABONBA_PTR_SET_VALUE(remindUnit_, remindUnit) };


    // robotUrls Field Functions 
    bool hasRobotUrls() const { return this->robotUrls_ != nullptr;};
    void deleteRobotUrls() { this->robotUrls_ = nullptr;};
    inline string getRobotUrls() const { DARABONBA_PTR_GET_DEFAULT(robotUrls_, "") };
    inline UpdateRemindRequest& setRobotUrls(string robotUrls) { DARABONBA_PTR_SET_VALUE(robotUrls_, robotUrls) };


    // useFlag Field Functions 
    bool hasUseFlag() const { return this->useFlag_ != nullptr;};
    void deleteUseFlag() { this->useFlag_ = nullptr;};
    inline bool getUseFlag() const { DARABONBA_PTR_GET_DEFAULT(useFlag_, false) };
    inline UpdateRemindRequest& setUseFlag(bool useFlag) { DARABONBA_PTR_SET_VALUE(useFlag_, useFlag) };


    // webhooks Field Functions 
    bool hasWebhooks() const { return this->webhooks_ != nullptr;};
    void deleteWebhooks() { this->webhooks_ = nullptr;};
    inline string getWebhooks() const { DARABONBA_PTR_GET_DEFAULT(webhooks_, "") };
    inline UpdateRemindRequest& setWebhooks(string webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };


  protected:
    // The alert interval, in seconds. Minimum value: 1200. Default value: 1800.
    shared_ptr<int32_t> alertInterval_ {};
    // The alert notification method. Valid values:
    // - MAIL
    // - SMS
    // - PHONE. Only DataWorks Professional Edition and higher support phone alerts.
    // - DINGROBOTS (DingTalk chatbot). This method takes effect only after the RobotUrls parameter is configured.
    // - Webhooks (WeCom or Lark chatbot). This method takes effect only after the Webhooks parameter is configured.
    // 
    // Separate multiple alert methods with commas (,).
    shared_ptr<string> alertMethods_ {};
    // The configuration details for different alert recipients:
    // - When AlertUnit is set to OWNER (node owner), the configuration is left empty.
    // - When AlertUnit is set to OTHER (specified user), set this parameter to the Alibaba Cloud UIDs of the specified users. Separate multiple UIDs with commas (,). You can specify up to 10 users to receive alerts.
    shared_ptr<string> alertTargets_ {};
    // The recipient of the alert. Valid values:
    // - OWNER: the node owner.
    // - OTHER: a specified user.
    shared_ptr<string> alertUnit_ {};
    // The baseline IDs when the monitored object is a baseline. A rule can monitor up to 5 baselines. Separate multiple baseline IDs with commas (,).
    // This parameter takes effect only when RemindUnit is set to BASELINE.
    shared_ptr<string> baselineIds_ {};
    // The business process IDs when the monitored object is a business process. A rule can monitor up to 5 business processes. Separate multiple business process IDs with commas (,).
    // This parameter takes effect only when RemindUnit is set to BIZPROCESS.
    shared_ptr<string> bizProcessIds_ {};
    // The configuration details for different trigger conditions:
    // - When RemindType (trigger condition) is set to FINISHED, the configuration is left empty.
    // - When RemindType (trigger condition) is set to UNFINISHED, the configuration format is {"hour":23,"minu":59}. Valid values of hour: [0,47\\]. Valid values of minu: [0,59\\].
    // - When RemindType (trigger condition) is set to ERROR, the configuration is left empty.
    // - When RemindType (trigger condition) is set to CYCLE_UNFINISHED (cycle unfinished), the configuration format is {"1":"05:50","2":"06:50","3":"07:50","4":"08:50","5":"09:50","6":"10:50","7":"11:50","8":"12:50","9":"13:50","10":"14:50","11":"15:50","12":"16:50","13":"17:50","14":"18:50","15":"19:50","16":"20:50","17":"21:50","18":"22:50","19":"23:50","20":"24:50","21":"25:50"}.
    // The key in the JSON string is the cycle number. Valid values: [1,288\\]. The value is the unfinished time for the corresponding cycle in the format hh:mm. Valid values of hh: [0,47\\]. Valid values of mm: [0,59\\].
    // - When RemindType (trigger condition) is set to TIMEOUT, the configuration format is 1800, in seconds. This means an alert is triggered if the instance has been running for more than 30 minutes.
    shared_ptr<string> detail_ {};
    // The end time of the do-not-disturb period. Alerts are not sent before this time. Format: hh:mm. Valid values of hh: [0,23\\]. Valid values of mm: [0,59\\].
    shared_ptr<string> dndEnd_ {};
    // The maximum number of alerts. Valid values: [1,10\\]. Default value: 3.
    shared_ptr<int32_t> maxAlertTimes_ {};
    // The node IDs when the monitored object is a node. A rule can monitor up to 50 nodes. Separate multiple node IDs with commas (,).
    // This parameter takes effect only when RemindUnit is set to NODE.
    shared_ptr<string> nodeIds_ {};
    // The workspace ID when the monitored object is a workspace. A rule can monitor only one workspace.
    // This parameter takes effect only when RemindUnit is set to PROJECT.
    shared_ptr<int64_t> projectId_ {};
    // The ID of the custom rule.
    // 
    // This parameter is required.
    shared_ptr<int64_t> remindId_ {};
    // The name of the custom rule. The name cannot exceed 128 characters in length.
    shared_ptr<string> remindName_ {};
    // The condition that triggers the alert rule. Valid values:
    // - FINISHED: The system monitors the instance from the start time and sends an alert when the node runs successfully.
    // - UNFINISHED: The system monitors the instance from the start time and sends an alert if the node has not finished running by the specified target time.
    // - ERROR: The system monitors the instance from the start time and sends an alert when the node encounters an error.
    // - CYCLE_UNFINISHED: The system sends an alert if the instance has not finished running within the specified cycle. This is typically used to monitor instances that run on an hourly cycle.
    // - TIMEOUT: The system monitors the instance from the start time and sends an alert if the node has not finished running after the specified duration. This is typically used to monitor the running duration of instances.
    // 
    // For more information about alert trigger conditions, see [Custom rules](https://help.aliyun.com/document_detail/138172.html).
    shared_ptr<string> remindType_ {};
    // The type of the monitored object. Valid values:
    // - NODE
    // - BASELINE
    // - PROJECT (workspace)
    // - BIZPROCESS (business process)
    shared_ptr<string> remindUnit_ {};
    // The webhook URLs of DingTalk group chatbots. Separate multiple webhook URLs with commas (,).
    // When the parameter settings are set to undefined, the system clears the DingTalk chatbot webhook URLs.
    shared_ptr<string> robotUrls_ {};
    // Specifies whether to enable the alert rule. Valid values:
    // - true: Enabled.
    // - false: Disabled.
    shared_ptr<bool> useFlag_ {};
    // The webhook URLs of WeCom or Lark chatbots. Separate multiple webhook URLs with commas (,). The alertMethods parameter must include the WEBHOOKS alerting method. When the parameter is set to undefined, the system clears the webhook URLs.
    // 
    // Only DataWorks Enterprise Edition is supported.
    // Active regions: China (Shanghai), China (Chengdu), China (Zhangjiakou), China (Beijing), China (Hangzhou), China (Shenzhen), Hong Kong (China), Germany (Frankfurt), Asia-Pacific Southeast 1 (Singapore).
    shared_ptr<string> webhooks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
