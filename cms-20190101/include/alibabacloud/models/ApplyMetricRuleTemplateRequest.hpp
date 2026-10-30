// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYMETRICRULETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYMETRICRULETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ApplyMetricRuleTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyMetricRuleTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppendMode, appendMode_);
      DARABONBA_PTR_TO_JSON(ApplyMode, applyMode_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableEndTime, enableEndTime_);
      DARABONBA_PTR_TO_JSON(EnableStartTime, enableStartTime_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(NotifyLevel, notifyLevel_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(TemplateIds, templateIds_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyMetricRuleTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppendMode, appendMode_);
      DARABONBA_PTR_FROM_JSON(ApplyMode, applyMode_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnableEndTime, enableEndTime_);
      DARABONBA_PTR_FROM_JSON(EnableStartTime, enableStartTime_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(NotifyLevel, notifyLevel_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(TemplateIds, templateIds_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    ApplyMetricRuleTemplateRequest() = default ;
    ApplyMetricRuleTemplateRequest(const ApplyMetricRuleTemplateRequest &) = default ;
    ApplyMetricRuleTemplateRequest(ApplyMetricRuleTemplateRequest &&) = default ;
    ApplyMetricRuleTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyMetricRuleTemplateRequest() = default ;
    ApplyMetricRuleTemplateRequest& operator=(const ApplyMetricRuleTemplateRequest &) = default ;
    ApplyMetricRuleTemplateRequest& operator=(ApplyMetricRuleTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appendMode_ == nullptr
        && this->applyMode_ == nullptr && this->dryRun_ == nullptr && this->enableEndTime_ == nullptr && this->enableStartTime_ == nullptr && this->groupId_ == nullptr
        && this->notifyLevel_ == nullptr && this->silenceTime_ == nullptr && this->templateIds_ == nullptr && this->webhook_ == nullptr; };
    // appendMode Field Functions 
    bool hasAppendMode() const { return this->appendMode_ != nullptr;};
    void deleteAppendMode() { this->appendMode_ = nullptr;};
    inline string getAppendMode() const { DARABONBA_PTR_GET_DEFAULT(appendMode_, "") };
    inline ApplyMetricRuleTemplateRequest& setAppendMode(string appendMode) { DARABONBA_PTR_SET_VALUE(appendMode_, appendMode) };


    // applyMode Field Functions 
    bool hasApplyMode() const { return this->applyMode_ != nullptr;};
    void deleteApplyMode() { this->applyMode_ = nullptr;};
    inline string getApplyMode() const { DARABONBA_PTR_GET_DEFAULT(applyMode_, "") };
    inline ApplyMetricRuleTemplateRequest& setApplyMode(string applyMode) { DARABONBA_PTR_SET_VALUE(applyMode_, applyMode) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ApplyMetricRuleTemplateRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableEndTime Field Functions 
    bool hasEnableEndTime() const { return this->enableEndTime_ != nullptr;};
    void deleteEnableEndTime() { this->enableEndTime_ = nullptr;};
    inline int64_t getEnableEndTime() const { DARABONBA_PTR_GET_DEFAULT(enableEndTime_, 0L) };
    inline ApplyMetricRuleTemplateRequest& setEnableEndTime(int64_t enableEndTime) { DARABONBA_PTR_SET_VALUE(enableEndTime_, enableEndTime) };


    // enableStartTime Field Functions 
    bool hasEnableStartTime() const { return this->enableStartTime_ != nullptr;};
    void deleteEnableStartTime() { this->enableStartTime_ = nullptr;};
    inline int64_t getEnableStartTime() const { DARABONBA_PTR_GET_DEFAULT(enableStartTime_, 0L) };
    inline ApplyMetricRuleTemplateRequest& setEnableStartTime(int64_t enableStartTime) { DARABONBA_PTR_SET_VALUE(enableStartTime_, enableStartTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ApplyMetricRuleTemplateRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // notifyLevel Field Functions 
    bool hasNotifyLevel() const { return this->notifyLevel_ != nullptr;};
    void deleteNotifyLevel() { this->notifyLevel_ = nullptr;};
    inline int64_t getNotifyLevel() const { DARABONBA_PTR_GET_DEFAULT(notifyLevel_, 0L) };
    inline ApplyMetricRuleTemplateRequest& setNotifyLevel(int64_t notifyLevel) { DARABONBA_PTR_SET_VALUE(notifyLevel_, notifyLevel) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int64_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0L) };
    inline ApplyMetricRuleTemplateRequest& setSilenceTime(int64_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline string getTemplateIds() const { DARABONBA_PTR_GET_DEFAULT(templateIds_, "") };
    inline ApplyMetricRuleTemplateRequest& setTemplateIds(string templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline ApplyMetricRuleTemplateRequest& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    // The application policy of the template. Valid values:
    // 
    // - all: deletes all rules created by using alert templates on the selected group and then creates new alert rules based on the template. This is the default value.
    // 
    // - append: deletes the rules created by using the current alert template on the selected group and then creates new alert rules based on the current template.
    shared_ptr<string> appendMode_ {};
    // The application mode of the template. Valid values:
    // 
    // - GROUP_INSTANCE_FIRST: application group instances take precedence. When the alert template is applied, the instances in the application group take precedence. If an instance specified in the template does not exist in the application group, the rule for the instance in the template is ignored.
    // 
    // - ALARM_TEMPLATE_FIRST: alert template instances take precedence. When the alert template is applied, alert rules are created regardless of whether the instances exist in the application group.
    shared_ptr<string> applyMode_ {};
    // Specifies whether to perform a dry run on the request. Valid values:
    // - **true**: performs a dry run and does not bind a security group to the instance. The system checks whether required parameters are specified, the request format is valid, and service limits are met. If the request fails the dry run, an error is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // - **false**: performs a normal request. If the request passes the dry run, an HTTP 2xx status code is returned and the operation is performed. This is the default value.
    shared_ptr<bool> dryRun_ {};
    // The end time of the effective period for the alert, in hours. The value is a two-digit string, such as "00", "18", or "23". Valid values: 00 to 23. The value specifies the hour of the end time, and the actual effective period ends at the 59th minute of the hour. For example, "23" indicates that the effective period ends at 23:59. The default time zone is UTC+8.
    shared_ptr<int64_t> enableEndTime_ {};
    // The start time of the effective period for the alert, in hours. The value is a two-digit string, such as "00", "09", or "23". Valid values: 00 to 23, which represent 00:00 to 23:00. The default time zone is UTC+8.
    shared_ptr<int64_t> enableStartTime_ {};
    // The ID of the application group.
    // 
    // For more information about how to obtain the ID of an application group, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    // 
    // This parameter is required.
    shared_ptr<int64_t> groupId_ {};
    // The alert notification method. Valid values:
    // 
    // <props="china">- 2: phone call, text message, mailbox, TradeManager, and DingTalk chatbot.
    // 
    // <props="china">- 3: text message, mailbox, TradeManager, and DingTalk chatbot.
    // 
    // <props="china">- 4: TradeManager and DingTalk chatbot.
    // 
    // 
    // <props="intl">4: TradeManager and DingTalk chatbot.
    // 
    // <props="partner">4: TradeManager and DingTalk chatbot.
    shared_ptr<int64_t> notifyLevel_ {};
    // The mute for. Unit: seconds. Default value: 86400.
    // 
    // > If the monitoring data continuously exceeds the threshold of the alert rule, the system sends only one alert notification within each epoch.
    shared_ptr<int64_t> silenceTime_ {};
    // The ID of the alert template.
    // 
    // For more information about how to obtain the ID of an alert template, see [DescribeMetricRuleTemplateList](https://help.aliyun.com/document_detail/114982.html).
    // 
    // This parameter is required.
    shared_ptr<string> templateIds_ {};
    // The webhook URL to which a POST request is sent when an alert is triggered.
    shared_ptr<string> webhook_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
