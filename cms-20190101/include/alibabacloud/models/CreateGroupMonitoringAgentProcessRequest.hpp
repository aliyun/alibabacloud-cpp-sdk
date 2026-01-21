// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMONITORINGAGENTPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMONITORINGAGENTPROCESSREQUEST_HPP_
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
  class CreateGroupMonitoringAgentProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMonitoringAgentProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MatchExpress, matchExpress_);
      DARABONBA_PTR_TO_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupMonitoringAgentProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MatchExpress, matchExpress_);
      DARABONBA_PTR_FROM_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateGroupMonitoringAgentProcessRequest() = default ;
    CreateGroupMonitoringAgentProcessRequest(const CreateGroupMonitoringAgentProcessRequest &) = default ;
    CreateGroupMonitoringAgentProcessRequest(CreateGroupMonitoringAgentProcessRequest &&) = default ;
    CreateGroupMonitoringAgentProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMonitoringAgentProcessRequest() = default ;
    CreateGroupMonitoringAgentProcessRequest& operator=(const CreateGroupMonitoringAgentProcessRequest &) = default ;
    CreateGroupMonitoringAgentProcessRequest& operator=(CreateGroupMonitoringAgentProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MatchExpress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MatchExpress& obj) { 
        DARABONBA_PTR_TO_JSON(Function, function_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, MatchExpress& obj) { 
        DARABONBA_PTR_FROM_JSON(Function, function_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      MatchExpress() = default ;
      MatchExpress(const MatchExpress &) = default ;
      MatchExpress(MatchExpress &&) = default ;
      MatchExpress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MatchExpress() = default ;
      MatchExpress& operator=(const MatchExpress &) = default ;
      MatchExpress& operator=(MatchExpress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->function_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
      // function Field Functions 
      bool hasFunction() const { return this->function_ != nullptr;};
      void deleteFunction() { this->function_ = nullptr;};
      inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
      inline MatchExpress& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline MatchExpress& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline MatchExpress& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The matching condition. Valid values:
      // 
      // *   all (default value): matches all
      // *   startWith: starts with a prefix
      // *   endWith: ends with a suffix
      // *   contains: contains
      // *   notContains: does not contain
      // *   equals: equals
      // 
      // Valid values of N: 1 to 3.
      shared_ptr<string> function_ {};
      // The criteria based on which the instances are matched.
      // 
      // Valid values of N: 1 to 3.
      // 
      // > Set the value to name. The value name indicates that the instances are matched based on the instance name.
      shared_ptr<string> name_ {};
      // The keyword used to match the instance name.
      // 
      // Valid values of N: 1 to 3.
      shared_ptr<string> value_ {};
    };

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
        // For more information about how to query the ARN of a resource, see [DescribeMetricRuleTargets](https://help.aliyun.com/document_detail/121592.html).
        // 
        // Format: `acs:{Service name abbreviation}:{regionId}:{userId}:/{Resource type}/{Resource name}/message`. Example: `acs:mns:cn-hangzhou:120886317861****:/queues/test123/message`. Fields:
        // 
        // *   {Service name abbreviation}: the abbreviation of the service name. Set the value to Simple Message Queue (formerly MNS) (SMQ).
        // 
        // *   {userId}: the ID of the Alibaba Cloud account.
        // 
        // *   {regionId}: the region ID of the SMQ queue or topic.
        // 
        // *   {Resource type}: the type of the resource that triggers the alert. Valid values:
        // 
        //     *   **queues**
        //     *   **topics**
        // 
        // *   {Resource name}: the resource name.
        // 
        //     *   If the resource type is **queues**, the resource name is the queue name.
        //     *   If the resource type is **topics**, the resource name is the topic name.
        shared_ptr<string> arn_ {};
        // The ID of the resource for which alerts are triggered.
        // 
        // For more information about how to obtain the ID of a resource for which alerts are triggered, see [DescribeMetricRuleTargets](https://help.aliyun.com/document_detail/121592.html).
        shared_ptr<string> id_ {};
        // The parameters of the alert callback. The parameters are in the JSON format.
        shared_ptr<string> jsonParams_ {};
        // The alert level. Valid values:
        // 
        // *   INFO
        // *   WARN
        // *   CRITICAL
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
      shared_ptr<string> comparisonOperator_ {};
      // The period of time during which the alert rule is effective.
      // 
      // Valid values of N: 1 to 3.
      shared_ptr<string> effectiveInterval_ {};
      // The alert level. Valid values:
      // 
      // *   critical (default)
      // *   warn
      // *   info
      // 
      // Valid values of N: 1 to 3.
      // 
      // This parameter is required.
      shared_ptr<string> escalationsLevel_ {};
      // This parameter is deprecated.
      shared_ptr<string> noEffectiveInterval_ {};
      // The mute period during which new alert notifications are not sent even if the trigger conditions are met. Unit: seconds. Minimum value: 3600, which is equivalent to one hour. Default value: 86400, which is equivalent to one day.
      // 
      // Valid values of N: 1 to 3.
      // 
      // >  Only one alert notification is sent during a mute period even if the metric value exceeds the alert threshold during consecutive checks.
      shared_ptr<string> silenceTime_ {};
      // The statistical aggregation method that is used to calculate the metric values.
      // 
      // Valid values of N: 1 to 3.
      // 
      // >  Set the value to Average.
      // 
      // This parameter is required.
      shared_ptr<string> statistics_ {};
      // The alert triggers.
      shared_ptr<vector<AlertConfig::TargetList>> targetList_ {};
      // The alert threshold.
      // 
      // Valid values of N: 1 to 3.
      // 
      // This parameter is required.
      shared_ptr<string> threshold_ {};
      // The number of times for which the threshold can be consecutively exceeded. Default value: 3.
      // 
      // Valid values of N: 1 to 3.
      // 
      // >  A metric triggers an alert only after the metric value reaches the threshold consecutively for the specified times.
      // 
      // This parameter is required.
      shared_ptr<string> times_ {};
      // The callback URL.
      // 
      // Valid values of N: 1 to 3.
      shared_ptr<string> webhook_ {};
    };

    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && this->groupId_ == nullptr && this->matchExpress_ == nullptr && this->matchExpressFilterRelation_ == nullptr && this->processName_ == nullptr && this->regionId_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const vector<CreateGroupMonitoringAgentProcessRequest::AlertConfig> & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<CreateGroupMonitoringAgentProcessRequest::AlertConfig>) };
    inline vector<CreateGroupMonitoringAgentProcessRequest::AlertConfig> getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<CreateGroupMonitoringAgentProcessRequest::AlertConfig>) };
    inline CreateGroupMonitoringAgentProcessRequest& setAlertConfig(const vector<CreateGroupMonitoringAgentProcessRequest::AlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline CreateGroupMonitoringAgentProcessRequest& setAlertConfig(vector<CreateGroupMonitoringAgentProcessRequest::AlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateGroupMonitoringAgentProcessRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // matchExpress Field Functions 
    bool hasMatchExpress() const { return this->matchExpress_ != nullptr;};
    void deleteMatchExpress() { this->matchExpress_ = nullptr;};
    inline const vector<CreateGroupMonitoringAgentProcessRequest::MatchExpress> & getMatchExpress() const { DARABONBA_PTR_GET_CONST(matchExpress_, vector<CreateGroupMonitoringAgentProcessRequest::MatchExpress>) };
    inline vector<CreateGroupMonitoringAgentProcessRequest::MatchExpress> getMatchExpress() { DARABONBA_PTR_GET(matchExpress_, vector<CreateGroupMonitoringAgentProcessRequest::MatchExpress>) };
    inline CreateGroupMonitoringAgentProcessRequest& setMatchExpress(const vector<CreateGroupMonitoringAgentProcessRequest::MatchExpress> & matchExpress) { DARABONBA_PTR_SET_VALUE(matchExpress_, matchExpress) };
    inline CreateGroupMonitoringAgentProcessRequest& setMatchExpress(vector<CreateGroupMonitoringAgentProcessRequest::MatchExpress> && matchExpress) { DARABONBA_PTR_SET_RVALUE(matchExpress_, matchExpress) };


    // matchExpressFilterRelation Field Functions 
    bool hasMatchExpressFilterRelation() const { return this->matchExpressFilterRelation_ != nullptr;};
    void deleteMatchExpressFilterRelation() { this->matchExpressFilterRelation_ = nullptr;};
    inline string getMatchExpressFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(matchExpressFilterRelation_, "") };
    inline CreateGroupMonitoringAgentProcessRequest& setMatchExpressFilterRelation(string matchExpressFilterRelation) { DARABONBA_PTR_SET_VALUE(matchExpressFilterRelation_, matchExpressFilterRelation) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline CreateGroupMonitoringAgentProcessRequest& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateGroupMonitoringAgentProcessRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The alert rule configurations.
    // 
    // Valid values of N: 1 to 3.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateGroupMonitoringAgentProcessRequest::AlertConfig>> alertConfig_ {};
    // The ID of the application group.
    // 
    // For more information about how to obtain the ID of an application group, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The expressions used to match instances.
    // 
    // Valid values of N: 1 to 3.
    shared_ptr<vector<CreateGroupMonitoringAgentProcessRequest::MatchExpress>> matchExpress_ {};
    // The logical operator used between conditional expressions that are used to match instances. Valid values:
    // 
    // *   all
    // *   and
    // *   or
    shared_ptr<string> matchExpressFilterRelation_ {};
    // The process name.
    // 
    // This parameter is required.
    shared_ptr<string> processName_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
