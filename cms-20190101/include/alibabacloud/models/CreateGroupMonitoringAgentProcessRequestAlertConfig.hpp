// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMONITORINGAGENTPROCESSREQUESTALERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMONITORINGAGENTPROCESSREQUESTALERTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateGroupMonitoringAgentProcessRequestAlertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMonitoringAgentProcessRequestAlertConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateGroupMonitoringAgentProcessRequestAlertConfig& obj) { 
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
    CreateGroupMonitoringAgentProcessRequestAlertConfig() = default ;
    CreateGroupMonitoringAgentProcessRequestAlertConfig(const CreateGroupMonitoringAgentProcessRequestAlertConfig &) = default ;
    CreateGroupMonitoringAgentProcessRequestAlertConfig(CreateGroupMonitoringAgentProcessRequestAlertConfig &&) = default ;
    CreateGroupMonitoringAgentProcessRequestAlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMonitoringAgentProcessRequestAlertConfig() = default ;
    CreateGroupMonitoringAgentProcessRequestAlertConfig& operator=(const CreateGroupMonitoringAgentProcessRequestAlertConfig &) = default ;
    CreateGroupMonitoringAgentProcessRequestAlertConfig& operator=(CreateGroupMonitoringAgentProcessRequestAlertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && return this->effectiveInterval_ == nullptr && return this->escalationsLevel_ == nullptr && return this->noEffectiveInterval_ == nullptr && return this->silenceTime_ == nullptr && return this->statistics_ == nullptr
        && return this->targetList_ == nullptr && return this->threshold_ == nullptr && return this->times_ == nullptr && return this->webhook_ == nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfig& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // effectiveInterval Field Functions 
    bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
    void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
    inline string effectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfig& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


    // escalationsLevel Field Functions 
    bool hasEscalationsLevel() const { return this->escalationsLevel_ != nullptr;};
    void deleteEscalationsLevel() { this->escalationsLevel_ = nullptr;};
    inline string escalationsLevel() const { DARABONBA_PTR_GET_DEFAULT(escalationsLevel_, "") };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfig& setEscalationsLevel(string escalationsLevel) { DARABONBA_PTR_SET_VALUE(escalationsLevel_, escalationsLevel) };


    // noEffectiveInterval Field Functions 
    bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
    void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
    inline string noEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfig& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline string silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, "") };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfig& setSilenceTime(string silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfig& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // targetList Field Functions 
    bool hasTargetList() const { return this->targetList_ != nullptr;};
    void deleteTargetList() { this->targetList_ = nullptr;};
    inline const vector<Models::CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList> & targetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<Models::CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList>) };
    inline vector<Models::CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList> targetList() { DARABONBA_PTR_GET(targetList_, vector<Models::CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList>) };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfig& setTargetList(const vector<Models::CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfig& setTargetList(vector<Models::CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfig& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline string times() const { DARABONBA_PTR_GET_DEFAULT(times_, "") };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfig& setTimes(string times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfig& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    // The operator that is used to compare the metric value with the threshold. Valid values:
    // 
    // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
    // *   GreaterThanThreshold: greater than the threshold
    // *   LessThanOrEqualToThreshold: less than or equal to the threshold
    // *   LessThanThreshold: less than the threshold
    // *   NotEqualToThreshold: not equal to the threshold
    // *   GreaterThanYesterday: greater than the metric value at the same time yesterday
    // *   LessThanYesterday: less than the metric value at the same time yesterday
    // *   GreaterThanLastWeek: greater than the metric value at the same time last week
    // *   LessThanLastWeek: less than the metric value at the same time last week
    // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
    // *   LessThanLastPeriod: less than the metric value in the previous monitoring cycle
    // 
    // Valid values of N: 1 to 3.
    // 
    // This parameter is required.
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // The period of time during which the alert rule is effective.
    // 
    // Valid values of N: 1 to 3.
    std::shared_ptr<string> effectiveInterval_ = nullptr;
    // The alert level. Valid values:
    // 
    // *   critical (default)
    // *   warn
    // *   info
    // 
    // Valid values of N: 1 to 3.
    // 
    // This parameter is required.
    std::shared_ptr<string> escalationsLevel_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> noEffectiveInterval_ = nullptr;
    // The mute period during which new alert notifications are not sent even if the trigger conditions are met. Unit: seconds. Minimum value: 3600, which is equivalent to one hour. Default value: 86400, which is equivalent to one day.
    // 
    // Valid values of N: 1 to 3.
    // 
    // >  Only one alert notification is sent during a mute period even if the metric value exceeds the alert threshold during consecutive checks.
    std::shared_ptr<string> silenceTime_ = nullptr;
    // The statistical aggregation method that is used to calculate the metric values.
    // 
    // Valid values of N: 1 to 3.
    // 
    // >  Set the value to Average.
    // 
    // This parameter is required.
    std::shared_ptr<string> statistics_ = nullptr;
    // The alert triggers.
    std::shared_ptr<vector<Models::CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList>> targetList_ = nullptr;
    // The alert threshold.
    // 
    // Valid values of N: 1 to 3.
    // 
    // This parameter is required.
    std::shared_ptr<string> threshold_ = nullptr;
    // The number of times for which the threshold can be consecutively exceeded. Default value: 3.
    // 
    // Valid values of N: 1 to 3.
    // 
    // >  A metric triggers an alert only after the metric value reaches the threshold consecutively for the specified times.
    // 
    // This parameter is required.
    std::shared_ptr<string> times_ = nullptr;
    // The callback URL.
    // 
    // Valid values of N: 1 to 3.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
