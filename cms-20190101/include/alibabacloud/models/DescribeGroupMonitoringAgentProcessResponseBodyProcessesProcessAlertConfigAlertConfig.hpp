// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODYPROCESSESPROCESSALERTCONFIGALERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODYPROCESSESPROCESSALERTCONFIGALERTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_TO_JSON(EscalationsLevel, escalationsLevel_);
      DARABONBA_PTR_TO_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(TargetList, targetList_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Times, times_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_FROM_JSON(EscalationsLevel, escalationsLevel_);
      DARABONBA_PTR_FROM_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig() = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig(const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig(DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig &&) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig() = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& operator=(const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& operator=(DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comparisonOperator_ != nullptr
        && this->effectiveInterval_ != nullptr && this->escalationsLevel_ != nullptr && this->noEffectiveInterval_ != nullptr && this->silenceTime_ != nullptr && this->statistics_ != nullptr
        && this->targetList_ != nullptr && this->threshold_ != nullptr && this->times_ != nullptr && this->webhook_ != nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // effectiveInterval Field Functions 
    bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
    void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
    inline string effectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


    // escalationsLevel Field Functions 
    bool hasEscalationsLevel() const { return this->escalationsLevel_ != nullptr;};
    void deleteEscalationsLevel() { this->escalationsLevel_ = nullptr;};
    inline string escalationsLevel() const { DARABONBA_PTR_GET_DEFAULT(escalationsLevel_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& setEscalationsLevel(string escalationsLevel) { DARABONBA_PTR_SET_VALUE(escalationsLevel_, escalationsLevel) };


    // noEffectiveInterval Field Functions 
    bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
    void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
    inline string noEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline string silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& setSilenceTime(string silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // targetList Field Functions 
    bool hasTargetList() const { return this->targetList_ != nullptr;};
    void deleteTargetList() { this->targetList_ = nullptr;};
    inline const Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList & targetList() const { DARABONBA_PTR_GET_CONST(targetList_, Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList) };
    inline Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList targetList() { DARABONBA_PTR_GET(targetList_, Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& setTargetList(const Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& setTargetList(Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline string times() const { DARABONBA_PTR_GET_DEFAULT(times_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& setTimes(string times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    // The comparison operator that is used to compare the metric value with the threshold. Valid values:
    // 
    // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
    // *   GreaterThanThreshold: greater than the threshold
    // *   LessThanOrEqualToThreshold: less than or equal to the threshold
    // *   LessThanThreshold: less than the threshold
    // *   NotEqualToThreshold: not equal to the threshold
    // *   GreaterThanYesterday: greater than the metric value at the same time yesterday.
    // *   LessThanYesterday: less than the metric value at the same time yesterday
    // *   GreaterThanLastWeek: greater than the metric value at the same time last week
    // *   LessThanLastWeek: less than the metric value at the same time last week
    // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
    // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // The time period during which the alert rule is effective.
    std::shared_ptr<string> effectiveInterval_ = nullptr;
    // The level of the alert. Valid values:
    // 
    // *   critical
    // *   warn
    // *   Info
    std::shared_ptr<string> escalationsLevel_ = nullptr;
    // The time period during which the alert rule is ineffective.
    std::shared_ptr<string> noEffectiveInterval_ = nullptr;
    // The mute period during which new alert notifications are not sent even if the trigger conditions are met. Unit: seconds. Minimum value: 3600, which is equivalent to one hour. Default value: 86400, which is equivalent to one day.
    // 
    // >  Only one alert notification is sent during each mute period even if the metric value exceeds the alert threshold several times.
    std::shared_ptr<string> silenceTime_ = nullptr;
    // The method used to calculate metric values that trigger alerts.
    std::shared_ptr<string> statistics_ = nullptr;
    // The resources for which alerts are triggered.
    std::shared_ptr<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList> targetList_ = nullptr;
    // The alert threshold.
    std::shared_ptr<string> threshold_ = nullptr;
    // The number of times for which the threshold can be consecutively exceeded.
    // 
    // >  A metric triggers an alert only after the metric value reaches the threshold consecutively for the specified times.
    std::shared_ptr<string> times_ = nullptr;
    // The callback URL to which a POST request is sent when an alert is triggered based on the alert rule.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
