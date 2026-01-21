// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYGROUPMONITORINGAGENTPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYGROUPMONITORINGAGENTPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyGroupMonitoringAgentProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyGroupMonitoringAgentProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyGroupMonitoringAgentProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyGroupMonitoringAgentProcessRequest() = default ;
    ModifyGroupMonitoringAgentProcessRequest(const ModifyGroupMonitoringAgentProcessRequest &) = default ;
    ModifyGroupMonitoringAgentProcessRequest(ModifyGroupMonitoringAgentProcessRequest &&) = default ;
    ModifyGroupMonitoringAgentProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyGroupMonitoringAgentProcessRequest() = default ;
    ModifyGroupMonitoringAgentProcessRequest& operator=(const ModifyGroupMonitoringAgentProcessRequest &) = default ;
    ModifyGroupMonitoringAgentProcessRequest& operator=(ModifyGroupMonitoringAgentProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertConfig& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AlertConfig& obj) { 
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
      AlertConfig() = default ;
      AlertConfig(const AlertConfig &) = default ;
      AlertConfig(AlertConfig &&) = default ;
      AlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertConfig() = default ;
      AlertConfig& operator=(const AlertConfig &) = default ;
      AlertConfig& operator=(AlertConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TargetList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TargetList& obj) { 
          DARABONBA_PTR_TO_JSON(Arn, arn_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(JsonParams, jsonParams_);
          DARABONBA_PTR_TO_JSON(Level, level_);
        };
        friend void from_json(const Darabonba::Json& j, TargetList& obj) { 
          DARABONBA_PTR_FROM_JSON(Arn, arn_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(JsonParams, jsonParams_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
        };
        TargetList() = default ;
        TargetList(const TargetList &) = default ;
        TargetList(TargetList &&) = default ;
        TargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TargetList() = default ;
        TargetList& operator=(const TargetList &) = default ;
        TargetList& operator=(TargetList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arn_ == nullptr
        && this->id_ == nullptr && this->jsonParams_ == nullptr && this->level_ == nullptr; };
        // arn Field Functions 
        bool hasArn() const { return this->arn_ != nullptr;};
        void deleteArn() { this->arn_ = nullptr;};
        inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
        inline TargetList& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline TargetList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // jsonParams Field Functions 
        bool hasJsonParams() const { return this->jsonParams_ != nullptr;};
        void deleteJsonParams() { this->jsonParams_ = nullptr;};
        inline string getJsonParams() const { DARABONBA_PTR_GET_DEFAULT(jsonParams_, "") };
        inline TargetList& setJsonParams(string jsonParams) { DARABONBA_PTR_SET_VALUE(jsonParams_, jsonParams) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline TargetList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      protected:
        // The Alibaba Cloud Resource Name (ARN) of the resource.
        // 
        // For information about how to obtain the ARN of a resource, see [DescribeMetricRuleTargets](https://help.aliyun.com/document_detail/121592.html).
        // 
        // Format: `acs:{Service name abbreviation}:{regionId}:{userId}:/{Resource type}/{Resource name}/message`. Example: `acs:mns:cn-hangzhou:120886317861****:/queues/test123/message`. Fields:
        // 
        // - {Service name abbreviation}: the abbreviation of the service name. Valid value: mns.
        // - {userId}: the ID of the Alibaba Cloud account.
        // - {regionId}: the region ID of the message queue or topic.
        // - {Resource type}: the type of the resource for which alerts are triggered. Valid values: 
        //     - **queues** 
        //     - **topics** 
        // - {Resourcename}: the name of the resource. 
        //   - If the resource type is set to **queues**, the resource name is the name of the message queue. 
        //   - If the resource type is set to **topics**, the resource name is the name of the topic.`
        shared_ptr<string> arn_ {};
        // The ID of the resource for which alerts are triggered.
        // 
        // For information about how to obtain the ID of a resource for which alerts are triggered, see [DescribeMetricRuleTargets](https://help.aliyun.com/document_detail/121592.html).
        shared_ptr<string> id_ {};
        // The parameters of the alert callback. The parameters are in the JSON format.
        shared_ptr<string> jsonParams_ {};
        // The level of the alert. Valid values:
        // 
        // *   INFO: information
        // *   WARN: warning
        // *   CRITICAL: critical
        shared_ptr<string> level_ {};
      };

      virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->effectiveInterval_ == nullptr && this->escalationsLevel_ == nullptr && this->noEffectiveInterval_ == nullptr && this->silenceTime_ == nullptr && this->statistics_ == nullptr
        && this->targetList_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr && this->webhook_ == nullptr; };
      // comparisonOperator Field Functions 
      bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
      void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
      inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
      inline AlertConfig& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


      // effectiveInterval Field Functions 
      bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
      void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
      inline string getEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
      inline AlertConfig& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


      // escalationsLevel Field Functions 
      bool hasEscalationsLevel() const { return this->escalationsLevel_ != nullptr;};
      void deleteEscalationsLevel() { this->escalationsLevel_ = nullptr;};
      inline string getEscalationsLevel() const { DARABONBA_PTR_GET_DEFAULT(escalationsLevel_, "") };
      inline AlertConfig& setEscalationsLevel(string escalationsLevel) { DARABONBA_PTR_SET_VALUE(escalationsLevel_, escalationsLevel) };


      // noEffectiveInterval Field Functions 
      bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
      void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
      inline string getNoEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
      inline AlertConfig& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


      // silenceTime Field Functions 
      bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
      void deleteSilenceTime() { this->silenceTime_ = nullptr;};
      inline string getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, "") };
      inline AlertConfig& setSilenceTime(string silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


      // statistics Field Functions 
      bool hasStatistics() const { return this->statistics_ != nullptr;};
      void deleteStatistics() { this->statistics_ = nullptr;};
      inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
      inline AlertConfig& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


      // targetList Field Functions 
      bool hasTargetList() const { return this->targetList_ != nullptr;};
      void deleteTargetList() { this->targetList_ = nullptr;};
      inline const vector<AlertConfig::TargetList> & getTargetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<AlertConfig::TargetList>) };
      inline vector<AlertConfig::TargetList> getTargetList() { DARABONBA_PTR_GET(targetList_, vector<AlertConfig::TargetList>) };
      inline AlertConfig& setTargetList(const vector<AlertConfig::TargetList> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
      inline AlertConfig& setTargetList(vector<AlertConfig::TargetList> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
      inline AlertConfig& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // times Field Functions 
      bool hasTimes() const { return this->times_ != nullptr;};
      void deleteTimes() { this->times_ = nullptr;};
      inline string getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, "") };
      inline AlertConfig& setTimes(string times) { DARABONBA_PTR_SET_VALUE(times_, times) };


      // webhook Field Functions 
      bool hasWebhook() const { return this->webhook_ != nullptr;};
      void deleteWebhook() { this->webhook_ = nullptr;};
      inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
      inline AlertConfig& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


    protected:
      // The comparison operator that is used to compare the metric value with the threshold. Valid values of N: 1 to 200. Valid values:
      // 
      // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
      // *   GreaterThanThreshold: greater than the threshold
      // *   LessThanOrEqualToThreshold: less than or equal to the threshold
      // *   LessThanThreshold: less than the threshold.
      // *   NotEqualToThreshold: not equal to the threshold
      // *   GreaterThanYesterday: greater than the metric value at the same time yesterday.
      // *   LessThanYesterday: less than the metric value at the same time yesterday
      // *   GreaterThanLastWeek: greater than the metric value at the same time last week
      // *   LessThanLastWeek: less than the metric value at the same time last week
      // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
      // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
      // 
      // This parameter is required.
      shared_ptr<string> comparisonOperator_ {};
      // The time period during which the alert rule is effective. Valid values of N: 1 to 200.
      shared_ptr<string> effectiveInterval_ {};
      // The level of the alert. Valid values of N: 1 to 200. Valid values:
      // 
      // *   critical (default value): critical
      // *   warn: warning
      // *   info: information
      // 
      // This parameter is required.
      shared_ptr<string> escalationsLevel_ {};
      // The time period during which the alert rule is ineffective. Valid values of N: 1 to 200.
      shared_ptr<string> noEffectiveInterval_ {};
      // The mute period during which new alerts are not sent even if the trigger conditions are met. Valid values of N: 1 to 200.
      // 
      // Unit: seconds. Minimum value: 3600, which is equivalent to one hour. Default value: 86400, which is equivalent to one day.
      // 
      // >  Only one alert notification is sent during a mute period even if the metric value exceeds the alert threshold during consecutive checks.
      shared_ptr<string> silenceTime_ {};
      // The statistical aggregation method that is used to calculate the metric values. Valid values of N: 1 to 200.
      // 
      // >  Set the value to Average.
      shared_ptr<string> statistics_ {};
      // The alert trigger.
      shared_ptr<vector<AlertConfig::TargetList>> targetList_ {};
      // The alert threshold. Valid values of N: 1 to 200.
      // 
      // This parameter is required.
      shared_ptr<string> threshold_ {};
      // The number of times for which the threshold can be consecutively exceeded. Valid values of N: 1 to 200. Default value: 3.
      // 
      // >  A metric triggers an alert only after the metric value reaches the threshold consecutively for the specified times.
      // 
      // This parameter is required.
      shared_ptr<string> times_ {};
      // The callback URL to which a POST request is sent when an alert is triggered based on the alert rule. Valid values of N: 1 to 200.
      shared_ptr<string> webhook_ {};
    };

    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && this->groupId_ == nullptr && this->id_ == nullptr && this->matchExpressFilterRelation_ == nullptr && this->regionId_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const vector<ModifyGroupMonitoringAgentProcessRequest::AlertConfig> & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<ModifyGroupMonitoringAgentProcessRequest::AlertConfig>) };
    inline vector<ModifyGroupMonitoringAgentProcessRequest::AlertConfig> getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<ModifyGroupMonitoringAgentProcessRequest::AlertConfig>) };
    inline ModifyGroupMonitoringAgentProcessRequest& setAlertConfig(const vector<ModifyGroupMonitoringAgentProcessRequest::AlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline ModifyGroupMonitoringAgentProcessRequest& setAlertConfig(vector<ModifyGroupMonitoringAgentProcessRequest::AlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyGroupMonitoringAgentProcessRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyGroupMonitoringAgentProcessRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchExpressFilterRelation Field Functions 
    bool hasMatchExpressFilterRelation() const { return this->matchExpressFilterRelation_ != nullptr;};
    void deleteMatchExpressFilterRelation() { this->matchExpressFilterRelation_ = nullptr;};
    inline string getMatchExpressFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(matchExpressFilterRelation_, "") };
    inline ModifyGroupMonitoringAgentProcessRequest& setMatchExpressFilterRelation(string matchExpressFilterRelation) { DARABONBA_PTR_SET_VALUE(matchExpressFilterRelation_, matchExpressFilterRelation) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyGroupMonitoringAgentProcessRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The alert rule configurations.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifyGroupMonitoringAgentProcessRequest::AlertConfig>> alertConfig_ {};
    // The ID of the application group.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The ID of the process monitoring task.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The logical operator used between conditional expressions that are used to match instances. Valid values:
    // 
    // *   all
    // *   and
    // *   or
    shared_ptr<string> matchExpressFilterRelation_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
