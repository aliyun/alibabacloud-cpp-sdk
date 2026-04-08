// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREMINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREMINDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateRemindRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRemindRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(RemindName, remindName_);
      DARABONBA_PTR_TO_JSON(RemindType, remindType_);
      DARABONBA_PTR_TO_JSON(RemindUnit, remindUnit_);
      DARABONBA_PTR_TO_JSON(RobotUrls, robotUrls_);
      DARABONBA_PTR_TO_JSON(Webhooks, webhooks_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRemindRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RemindName, remindName_);
      DARABONBA_PTR_FROM_JSON(RemindType, remindType_);
      DARABONBA_PTR_FROM_JSON(RemindUnit, remindUnit_);
      DARABONBA_PTR_FROM_JSON(RobotUrls, robotUrls_);
      DARABONBA_PTR_FROM_JSON(Webhooks, webhooks_);
    };
    CreateRemindRequest() = default ;
    CreateRemindRequest(const CreateRemindRequest &) = default ;
    CreateRemindRequest(CreateRemindRequest &&) = default ;
    CreateRemindRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRemindRequest() = default ;
    CreateRemindRequest& operator=(const CreateRemindRequest &) = default ;
    CreateRemindRequest& operator=(CreateRemindRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertInterval_ == nullptr
        && this->alertMethods_ == nullptr && this->alertTargets_ == nullptr && this->alertUnit_ == nullptr && this->baselineIds_ == nullptr && this->bizProcessIds_ == nullptr
        && this->detail_ == nullptr && this->dndEnd_ == nullptr && this->maxAlertTimes_ == nullptr && this->nodeIds_ == nullptr && this->projectId_ == nullptr
        && this->remindName_ == nullptr && this->remindType_ == nullptr && this->remindUnit_ == nullptr && this->robotUrls_ == nullptr && this->webhooks_ == nullptr; };
    // alertInterval Field Functions 
    bool hasAlertInterval() const { return this->alertInterval_ != nullptr;};
    void deleteAlertInterval() { this->alertInterval_ = nullptr;};
    inline int32_t getAlertInterval() const { DARABONBA_PTR_GET_DEFAULT(alertInterval_, 0) };
    inline CreateRemindRequest& setAlertInterval(int32_t alertInterval) { DARABONBA_PTR_SET_VALUE(alertInterval_, alertInterval) };


    // alertMethods Field Functions 
    bool hasAlertMethods() const { return this->alertMethods_ != nullptr;};
    void deleteAlertMethods() { this->alertMethods_ = nullptr;};
    inline string getAlertMethods() const { DARABONBA_PTR_GET_DEFAULT(alertMethods_, "") };
    inline CreateRemindRequest& setAlertMethods(string alertMethods) { DARABONBA_PTR_SET_VALUE(alertMethods_, alertMethods) };


    // alertTargets Field Functions 
    bool hasAlertTargets() const { return this->alertTargets_ != nullptr;};
    void deleteAlertTargets() { this->alertTargets_ = nullptr;};
    inline string getAlertTargets() const { DARABONBA_PTR_GET_DEFAULT(alertTargets_, "") };
    inline CreateRemindRequest& setAlertTargets(string alertTargets) { DARABONBA_PTR_SET_VALUE(alertTargets_, alertTargets) };


    // alertUnit Field Functions 
    bool hasAlertUnit() const { return this->alertUnit_ != nullptr;};
    void deleteAlertUnit() { this->alertUnit_ = nullptr;};
    inline string getAlertUnit() const { DARABONBA_PTR_GET_DEFAULT(alertUnit_, "") };
    inline CreateRemindRequest& setAlertUnit(string alertUnit) { DARABONBA_PTR_SET_VALUE(alertUnit_, alertUnit) };


    // baselineIds Field Functions 
    bool hasBaselineIds() const { return this->baselineIds_ != nullptr;};
    void deleteBaselineIds() { this->baselineIds_ = nullptr;};
    inline string getBaselineIds() const { DARABONBA_PTR_GET_DEFAULT(baselineIds_, "") };
    inline CreateRemindRequest& setBaselineIds(string baselineIds) { DARABONBA_PTR_SET_VALUE(baselineIds_, baselineIds) };


    // bizProcessIds Field Functions 
    bool hasBizProcessIds() const { return this->bizProcessIds_ != nullptr;};
    void deleteBizProcessIds() { this->bizProcessIds_ = nullptr;};
    inline string getBizProcessIds() const { DARABONBA_PTR_GET_DEFAULT(bizProcessIds_, "") };
    inline CreateRemindRequest& setBizProcessIds(string bizProcessIds) { DARABONBA_PTR_SET_VALUE(bizProcessIds_, bizProcessIds) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline CreateRemindRequest& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // dndEnd Field Functions 
    bool hasDndEnd() const { return this->dndEnd_ != nullptr;};
    void deleteDndEnd() { this->dndEnd_ = nullptr;};
    inline string getDndEnd() const { DARABONBA_PTR_GET_DEFAULT(dndEnd_, "") };
    inline CreateRemindRequest& setDndEnd(string dndEnd) { DARABONBA_PTR_SET_VALUE(dndEnd_, dndEnd) };


    // maxAlertTimes Field Functions 
    bool hasMaxAlertTimes() const { return this->maxAlertTimes_ != nullptr;};
    void deleteMaxAlertTimes() { this->maxAlertTimes_ = nullptr;};
    inline int32_t getMaxAlertTimes() const { DARABONBA_PTR_GET_DEFAULT(maxAlertTimes_, 0) };
    inline CreateRemindRequest& setMaxAlertTimes(int32_t maxAlertTimes) { DARABONBA_PTR_SET_VALUE(maxAlertTimes_, maxAlertTimes) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline string getNodeIds() const { DARABONBA_PTR_GET_DEFAULT(nodeIds_, "") };
    inline CreateRemindRequest& setNodeIds(string nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateRemindRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // remindName Field Functions 
    bool hasRemindName() const { return this->remindName_ != nullptr;};
    void deleteRemindName() { this->remindName_ = nullptr;};
    inline string getRemindName() const { DARABONBA_PTR_GET_DEFAULT(remindName_, "") };
    inline CreateRemindRequest& setRemindName(string remindName) { DARABONBA_PTR_SET_VALUE(remindName_, remindName) };


    // remindType Field Functions 
    bool hasRemindType() const { return this->remindType_ != nullptr;};
    void deleteRemindType() { this->remindType_ = nullptr;};
    inline string getRemindType() const { DARABONBA_PTR_GET_DEFAULT(remindType_, "") };
    inline CreateRemindRequest& setRemindType(string remindType) { DARABONBA_PTR_SET_VALUE(remindType_, remindType) };


    // remindUnit Field Functions 
    bool hasRemindUnit() const { return this->remindUnit_ != nullptr;};
    void deleteRemindUnit() { this->remindUnit_ = nullptr;};
    inline string getRemindUnit() const { DARABONBA_PTR_GET_DEFAULT(remindUnit_, "") };
    inline CreateRemindRequest& setRemindUnit(string remindUnit) { DARABONBA_PTR_SET_VALUE(remindUnit_, remindUnit) };


    // robotUrls Field Functions 
    bool hasRobotUrls() const { return this->robotUrls_ != nullptr;};
    void deleteRobotUrls() { this->robotUrls_ = nullptr;};
    inline string getRobotUrls() const { DARABONBA_PTR_GET_DEFAULT(robotUrls_, "") };
    inline CreateRemindRequest& setRobotUrls(string robotUrls) { DARABONBA_PTR_SET_VALUE(robotUrls_, robotUrls) };


    // webhooks Field Functions 
    bool hasWebhooks() const { return this->webhooks_ != nullptr;};
    void deleteWebhooks() { this->webhooks_ = nullptr;};
    inline string getWebhooks() const { DARABONBA_PTR_GET_DEFAULT(webhooks_, "") };
    inline CreateRemindRequest& setWebhooks(string webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };


  protected:
    // The minimum interval at which alerts are reported. Unit: seconds. Minimum value: 1200. Default value: 1800.
    shared_ptr<int32_t> alertInterval_ {};
    // The notification method. Valid values:
    // 
    // *   MAIL: Alert notifications are sent by email.
    // *   SMS: Alert notifications are sent by text message. Alert notifications can be sent by text message only in the Singapore, Malaysia (Kuala Lumpur), and Germany (Frankfurt) regions.
    // *   WEBHOOKS (WeCom or Lark chatbot): Alert notifications are sent by WeCom or Lark message. If you want to use this notification method, you must configure the Webhooks parameter.
    // *   DINGROBOTS: Alert notifications are sent by DingTalk chatbot.
    // 
    // You can specify multiple notification methods. Separate them with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> alertMethods_ {};
    // *   If the AlertUnit parameter is set to OWNER, leave this parameter empty.
    // *   If the AlertUnit parameter is set to OTHER, set this parameter to the ID of the Alibaba Cloud account used by the specified user. You can specify multiple IDs. Separate multiple IDs with commas (,). You can specify a maximum of 10 IDs.
    shared_ptr<string> alertTargets_ {};
    // The recipient of the alert. Valid values: OWNER and OTHER. The value OWNER indicates the node owner. The value OTHER indicates a specified user.
    // 
    // This parameter is required.
    shared_ptr<string> alertUnit_ {};
    // The ID of the baseline to which the custom alert rule is applied. This parameter takes effect when the RemindUnit parameter is set to BASELINE. You can specify multiple IDs. Separate multiple IDs with commas (,). A maximum of five baselines can be specified for a custom alert rule.
    shared_ptr<string> baselineIds_ {};
    // The ID of the workflow to which the custom alert rule is applied. This parameter takes effect when the RemindUnit parameter is set to BIZPROCESS. You can specify multiple IDs. Separate multiple IDs with commas (,). A maximum of five workflows can be specified for a custom alert rule.
    shared_ptr<string> bizProcessIds_ {};
    // The details of the conditions that trigger an alert.
    // 
    // *   If the RemindType parameter is set to FINISHED, leave this parameter empty.
    // *   If the RemindType parameter is set to UNFINISHED, configure this parameter as key-value pairs. Example: {"hour":23,"minu":59}. Valid values of hour: [0,47]. Valid values of minu: [0,59].
    // *   If the RemindType parameter is set to ERROR, leave this parameter empty.
    // *   If the RemindType parameter is set to CYCLE_UNFINISHED, configure this parameter as key-value pairs. Example: {"1":"05:50","2":"06:50","3":"07:50","4":"08:50","5":"09:50","6":"10:50","7":"11:50","8":"12:50","9":"13:50","10":"14:50","11":"15:50","12":"16:50","13":"17:50","14":"18:50","15":"19:50","16":"20:50","17":"21:50","18":"22:50","19":"23:50","20":"24:50","21":"25:50"}. The key indicates the ID of the cycle. Valid values: [1,288]. The value indicates the timeout period of the node that is running in the cycle. Specify the value in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
    // *   If the RemindType parameter is set to TIMEOUT, set this parameter to the timeout period. Unit: seconds. Example: 1800. This value indicates that an alert is reported if the node has run for more than 30 minutes.
    shared_ptr<string> detail_ {};
    // The end time of the quiet hours. Specify the time in the hh:mm format. Valid values of hh: [0,23]. Valid values of mm: [0,59].
    shared_ptr<string> dndEnd_ {};
    // The maximum number of alerts. Valid values: 1 to 10. Default value: 3.
    shared_ptr<int32_t> maxAlertTimes_ {};
    // The ID of the node to which the custom alert rule is applied. This parameter takes effect when the RemindUnit parameter is set to NODE. You can specify multiple IDs. Separate multiple IDs with commas (,). A maximum of 50 nodes can be specified for a custom alert rule.
    shared_ptr<string> nodeIds_ {};
    // The ID of the workspace to which the custom alert rule is applied. This parameter takes effect when the RemindUnit parameter is set to PROJECT. You can specify only one workspace for a custom alert rule.
    shared_ptr<int64_t> projectId_ {};
    // The name of the custom alert rule. The name cannot exceed 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> remindName_ {};
    // The conditions that trigger an alert. Valid values: FINISHED, UNFINISHED, ERROR, CYCLE_UNFINISHED, and TIMEOUT.
    // 
    // This parameter is required.
    shared_ptr<string> remindType_ {};
    // The type of the object to which the custom alert rule is applied. Valid values: NODE, BASELINE, PROJECT, and BIZPROCESS. The value NODE indicates a node. The value BASELINE indicates a baseline. The value PROJECT indicates a workspace. The value BIZPROCESS indicates a workflow.
    // 
    // This parameter is required.
    shared_ptr<string> remindUnit_ {};
    // The webhook URL of the DingTalk chatbot. You can specify multiple webhook URLs. Separate multiple webhook URLs with commas (,).
    shared_ptr<string> robotUrls_ {};
    // The webhook URL of the WeCom or Lark chatbot. You can specify multiple webhook URLs. Separate multiple webhook URLs with commas (,). You must specify WEBHOOKS for AlertMethods.
    // 
    // Only DataWorks Enterprise Edition supports this parameter. The webhook URL-based alerting feature is supported in the following regions: China (Shanghai), China (Chengdu), China (Zhangjiakou), China (Beijing), China (Hangzhou), China (Shenzhen), China (Hong Kong), Germany (Frankfurt), and Singapore.
    shared_ptr<string> webhooks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
