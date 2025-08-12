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
    virtual bool empty() const override { this->appendMode_ != nullptr
        && this->applyMode_ != nullptr && this->enableEndTime_ != nullptr && this->enableStartTime_ != nullptr && this->groupId_ != nullptr && this->notifyLevel_ != nullptr
        && this->silenceTime_ != nullptr && this->templateIds_ != nullptr && this->webhook_ != nullptr; };
    // appendMode Field Functions 
    bool hasAppendMode() const { return this->appendMode_ != nullptr;};
    void deleteAppendMode() { this->appendMode_ = nullptr;};
    inline string appendMode() const { DARABONBA_PTR_GET_DEFAULT(appendMode_, "") };
    inline ApplyMetricRuleTemplateRequest& setAppendMode(string appendMode) { DARABONBA_PTR_SET_VALUE(appendMode_, appendMode) };


    // applyMode Field Functions 
    bool hasApplyMode() const { return this->applyMode_ != nullptr;};
    void deleteApplyMode() { this->applyMode_ = nullptr;};
    inline string applyMode() const { DARABONBA_PTR_GET_DEFAULT(applyMode_, "") };
    inline ApplyMetricRuleTemplateRequest& setApplyMode(string applyMode) { DARABONBA_PTR_SET_VALUE(applyMode_, applyMode) };


    // enableEndTime Field Functions 
    bool hasEnableEndTime() const { return this->enableEndTime_ != nullptr;};
    void deleteEnableEndTime() { this->enableEndTime_ = nullptr;};
    inline int64_t enableEndTime() const { DARABONBA_PTR_GET_DEFAULT(enableEndTime_, 0L) };
    inline ApplyMetricRuleTemplateRequest& setEnableEndTime(int64_t enableEndTime) { DARABONBA_PTR_SET_VALUE(enableEndTime_, enableEndTime) };


    // enableStartTime Field Functions 
    bool hasEnableStartTime() const { return this->enableStartTime_ != nullptr;};
    void deleteEnableStartTime() { this->enableStartTime_ = nullptr;};
    inline int64_t enableStartTime() const { DARABONBA_PTR_GET_DEFAULT(enableStartTime_, 0L) };
    inline ApplyMetricRuleTemplateRequest& setEnableStartTime(int64_t enableStartTime) { DARABONBA_PTR_SET_VALUE(enableStartTime_, enableStartTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ApplyMetricRuleTemplateRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // notifyLevel Field Functions 
    bool hasNotifyLevel() const { return this->notifyLevel_ != nullptr;};
    void deleteNotifyLevel() { this->notifyLevel_ = nullptr;};
    inline int64_t notifyLevel() const { DARABONBA_PTR_GET_DEFAULT(notifyLevel_, 0L) };
    inline ApplyMetricRuleTemplateRequest& setNotifyLevel(int64_t notifyLevel) { DARABONBA_PTR_SET_VALUE(notifyLevel_, notifyLevel) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int64_t silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0L) };
    inline ApplyMetricRuleTemplateRequest& setSilenceTime(int64_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline string templateIds() const { DARABONBA_PTR_GET_DEFAULT(templateIds_, "") };
    inline ApplyMetricRuleTemplateRequest& setTemplateIds(string templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline ApplyMetricRuleTemplateRequest& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    // The template application policy. Valid values:
    // 
    // *   all (default): deletes all the rules that are created by using the alert template from the selected application group, and then creates alert rules based on the template.
    // *   append: deletes the rules that are created by using the alert template from the selected application group, and then creates alert rules based on the existing template.
    std::shared_ptr<string> appendMode_ = nullptr;
    // The mode in which the alert template is applied. Valid values:
    // 
    // *   GROUP_INSTANCE_FIRST: The metrics in the application group take precedence. If a metric specified in the alert template does not exist in the application group, the system does not generate an alert rule for the metric based on the alert template.
    // *   ALARM_TEMPLATE_FIRST: The metrics specified in the alert template take precedence. If a metric specified in the alert template does not exist in the application group, the system still generates an alert rule for the metric based on the alert template.
    std::shared_ptr<string> applyMode_ = nullptr;
    // The end of the time period during which the alert rule is effective. Valid values: 00 to 23. A value of 00 indicates 00:59 and a value of 23 indicates 23:59.
    std::shared_ptr<int64_t> enableEndTime_ = nullptr;
    // The beginning of the time period during which the alert rule is effective. Valid values: 00 to 23. A value of 00 indicates 00:00 and a value of 23 indicates 23:00.
    std::shared_ptr<int64_t> enableStartTime_ = nullptr;
    // The ID of the application group to which the alert template is applied.
    // 
    // For more information about how to query the ID of an application group, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The alert notification method. Valid values:
    // 
    // Set the value to 4. A value of 4 indicates that alert notifications are sent by using TradeManager and DingTalk chatbots.
    std::shared_ptr<int64_t> notifyLevel_ = nullptr;
    // The mute period during which notifications are not repeatedly sent for an alert. Unit: seconds. Default value: 86400.
    // 
    // >  Only one alert notification is sent during each mute period even if the metric value exceeds the alert threshold several times.
    std::shared_ptr<int64_t> silenceTime_ = nullptr;
    // The ID of the alert template.
    // 
    // For more information about how to query the IDs of alert templates, see [DescribeMetricRuleTemplateList](https://help.aliyun.com/document_detail/114982.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> templateIds_ = nullptr;
    // The callback URL to which a POST request is sent when an alert is triggered based on the alert rule.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
