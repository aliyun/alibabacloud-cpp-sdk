// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEALARMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEALARMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListInstanceAlarmResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceAlarmResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceAlarmResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListInstanceAlarmResponseBody() = default ;
    ListInstanceAlarmResponseBody(const ListInstanceAlarmResponseBody &) = default ;
    ListInstanceAlarmResponseBody(ListInstanceAlarmResponseBody &&) = default ;
    ListInstanceAlarmResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceAlarmResponseBody() = default ;
    ListInstanceAlarmResponseBody& operator=(const ListInstanceAlarmResponseBody &) = default ;
    ListInstanceAlarmResponseBody& operator=(ListInstanceAlarmResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(VoList, voList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(VoList, voList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VoList& obj) { 
          DARABONBA_PTR_TO_JSON(CommodityInstanceAlarmVO, commodityInstanceAlarmVO_);
        };
        friend void from_json(const Darabonba::Json& j, VoList& obj) { 
          DARABONBA_PTR_FROM_JSON(CommodityInstanceAlarmVO, commodityInstanceAlarmVO_);
        };
        VoList() = default ;
        VoList(const VoList &) = default ;
        VoList(VoList &&) = default ;
        VoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VoList() = default ;
        VoList& operator=(const VoList &) = default ;
        VoList& operator=(VoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CommodityInstanceAlarmVO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CommodityInstanceAlarmVO& obj) { 
            DARABONBA_PTR_TO_JSON(AlarmVO, alarmVO_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          };
          friend void from_json(const Darabonba::Json& j, CommodityInstanceAlarmVO& obj) { 
            DARABONBA_PTR_FROM_JSON(AlarmVO, alarmVO_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          };
          CommodityInstanceAlarmVO() = default ;
          CommodityInstanceAlarmVO(const CommodityInstanceAlarmVO &) = default ;
          CommodityInstanceAlarmVO(CommodityInstanceAlarmVO &&) = default ;
          CommodityInstanceAlarmVO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CommodityInstanceAlarmVO() = default ;
          CommodityInstanceAlarmVO& operator=(const CommodityInstanceAlarmVO &) = default ;
          CommodityInstanceAlarmVO& operator=(CommodityInstanceAlarmVO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AlarmVO : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AlarmVO& obj) { 
              DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
              DARABONBA_PTR_TO_JSON(AlarmDetails, alarmDetails_);
              DARABONBA_PTR_TO_JSON(HasConfigAlarm, hasConfigAlarm_);
            };
            friend void from_json(const Darabonba::Json& j, AlarmVO& obj) { 
              DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
              DARABONBA_PTR_FROM_JSON(AlarmDetails, alarmDetails_);
              DARABONBA_PTR_FROM_JSON(HasConfigAlarm, hasConfigAlarm_);
            };
            AlarmVO() = default ;
            AlarmVO(const AlarmVO &) = default ;
            AlarmVO(AlarmVO &&) = default ;
            AlarmVO(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AlarmVO() = default ;
            AlarmVO& operator=(const AlarmVO &) = default ;
            AlarmVO& operator=(AlarmVO &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class AlarmDetails : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const AlarmDetails& obj) { 
                DARABONBA_PTR_TO_JSON(AlarmDetail, alarmDetail_);
              };
              friend void from_json(const Darabonba::Json& j, AlarmDetails& obj) { 
                DARABONBA_PTR_FROM_JSON(AlarmDetail, alarmDetail_);
              };
              AlarmDetails() = default ;
              AlarmDetails(const AlarmDetails &) = default ;
              AlarmDetails(AlarmDetails &&) = default ;
              AlarmDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~AlarmDetails() = default ;
              AlarmDetails& operator=(const AlarmDetails &) = default ;
              AlarmDetails& operator=(AlarmDetails &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class AlarmDetail : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const AlarmDetail& obj) { 
                  DARABONBA_PTR_TO_JSON(AlertState, alertState_);
                  DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
                  DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
                  DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
                  DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
                  DARABONBA_PTR_TO_JSON(EnableState, enableState_);
                  DARABONBA_PTR_TO_JSON(GroupId, groupId_);
                  DARABONBA_PTR_TO_JSON(GroupName, groupName_);
                  DARABONBA_PTR_TO_JSON(MailSubject, mailSubject_);
                  DARABONBA_PTR_TO_JSON(MetricName, metricName_);
                  DARABONBA_PTR_TO_JSON(Namespace, namespace_);
                  DARABONBA_PTR_TO_JSON(NoEffectiveInterval, noEffectiveInterval_);
                  DARABONBA_PTR_TO_JSON(Period, period_);
                  DARABONBA_PTR_TO_JSON(Resources, resources_);
                  DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
                  DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
                  DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
                  DARABONBA_PTR_TO_JSON(Statistics, statistics_);
                  DARABONBA_PTR_TO_JSON(Threshold, threshold_);
                  DARABONBA_PTR_TO_JSON(Times, times_);
                  DARABONBA_PTR_TO_JSON(Webhook, webhook_);
                };
                friend void from_json(const Darabonba::Json& j, AlarmDetail& obj) { 
                  DARABONBA_PTR_FROM_JSON(AlertState, alertState_);
                  DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
                  DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
                  DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
                  DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
                  DARABONBA_PTR_FROM_JSON(EnableState, enableState_);
                  DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
                  DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
                  DARABONBA_PTR_FROM_JSON(MailSubject, mailSubject_);
                  DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
                  DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
                  DARABONBA_PTR_FROM_JSON(NoEffectiveInterval, noEffectiveInterval_);
                  DARABONBA_PTR_FROM_JSON(Period, period_);
                  DARABONBA_PTR_FROM_JSON(Resources, resources_);
                  DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
                  DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
                  DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
                  DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
                  DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
                  DARABONBA_PTR_FROM_JSON(Times, times_);
                  DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
                };
                AlarmDetail() = default ;
                AlarmDetail(const AlarmDetail &) = default ;
                AlarmDetail(AlarmDetail &&) = default ;
                AlarmDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~AlarmDetail() = default ;
                AlarmDetail& operator=(const AlarmDetail &) = default ;
                AlarmDetail& operator=(AlarmDetail &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->alertState_ == nullptr
        && this->comparisonOperator_ == nullptr && this->contactGroups_ == nullptr && this->dimensions_ == nullptr && this->effectiveInterval_ == nullptr && this->enableState_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr && this->mailSubject_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr
        && this->noEffectiveInterval_ == nullptr && this->period_ == nullptr && this->resources_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr
        && this->silenceTime_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr && this->webhook_ == nullptr; };
                // alertState Field Functions 
                bool hasAlertState() const { return this->alertState_ != nullptr;};
                void deleteAlertState() { this->alertState_ = nullptr;};
                inline string getAlertState() const { DARABONBA_PTR_GET_DEFAULT(alertState_, "") };
                inline AlarmDetail& setAlertState(string alertState) { DARABONBA_PTR_SET_VALUE(alertState_, alertState) };


                // comparisonOperator Field Functions 
                bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
                void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
                inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
                inline AlarmDetail& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


                // contactGroups Field Functions 
                bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
                void deleteContactGroups() { this->contactGroups_ = nullptr;};
                inline string getContactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
                inline AlarmDetail& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


                // dimensions Field Functions 
                bool hasDimensions() const { return this->dimensions_ != nullptr;};
                void deleteDimensions() { this->dimensions_ = nullptr;};
                inline string getDimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
                inline AlarmDetail& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


                // effectiveInterval Field Functions 
                bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
                void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
                inline string getEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
                inline AlarmDetail& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


                // enableState Field Functions 
                bool hasEnableState() const { return this->enableState_ != nullptr;};
                void deleteEnableState() { this->enableState_ = nullptr;};
                inline bool getEnableState() const { DARABONBA_PTR_GET_DEFAULT(enableState_, false) };
                inline AlarmDetail& setEnableState(bool enableState) { DARABONBA_PTR_SET_VALUE(enableState_, enableState) };


                // groupId Field Functions 
                bool hasGroupId() const { return this->groupId_ != nullptr;};
                void deleteGroupId() { this->groupId_ = nullptr;};
                inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
                inline AlarmDetail& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


                // groupName Field Functions 
                bool hasGroupName() const { return this->groupName_ != nullptr;};
                void deleteGroupName() { this->groupName_ = nullptr;};
                inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
                inline AlarmDetail& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


                // mailSubject Field Functions 
                bool hasMailSubject() const { return this->mailSubject_ != nullptr;};
                void deleteMailSubject() { this->mailSubject_ = nullptr;};
                inline string getMailSubject() const { DARABONBA_PTR_GET_DEFAULT(mailSubject_, "") };
                inline AlarmDetail& setMailSubject(string mailSubject) { DARABONBA_PTR_SET_VALUE(mailSubject_, mailSubject) };


                // metricName Field Functions 
                bool hasMetricName() const { return this->metricName_ != nullptr;};
                void deleteMetricName() { this->metricName_ = nullptr;};
                inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
                inline AlarmDetail& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


                // namespace Field Functions 
                bool hasNamespace() const { return this->namespace_ != nullptr;};
                void deleteNamespace() { this->namespace_ = nullptr;};
                inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
                inline AlarmDetail& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


                // noEffectiveInterval Field Functions 
                bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
                void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
                inline string getNoEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
                inline AlarmDetail& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


                // period Field Functions 
                bool hasPeriod() const { return this->period_ != nullptr;};
                void deletePeriod() { this->period_ = nullptr;};
                inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
                inline AlarmDetail& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


                // resources Field Functions 
                bool hasResources() const { return this->resources_ != nullptr;};
                void deleteResources() { this->resources_ = nullptr;};
                inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
                inline AlarmDetail& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


                // ruleId Field Functions 
                bool hasRuleId() const { return this->ruleId_ != nullptr;};
                void deleteRuleId() { this->ruleId_ = nullptr;};
                inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
                inline AlarmDetail& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


                // ruleName Field Functions 
                bool hasRuleName() const { return this->ruleName_ != nullptr;};
                void deleteRuleName() { this->ruleName_ = nullptr;};
                inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
                inline AlarmDetail& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


                // silenceTime Field Functions 
                bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
                void deleteSilenceTime() { this->silenceTime_ = nullptr;};
                inline string getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, "") };
                inline AlarmDetail& setSilenceTime(string silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


                // statistics Field Functions 
                bool hasStatistics() const { return this->statistics_ != nullptr;};
                void deleteStatistics() { this->statistics_ = nullptr;};
                inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
                inline AlarmDetail& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


                // threshold Field Functions 
                bool hasThreshold() const { return this->threshold_ != nullptr;};
                void deleteThreshold() { this->threshold_ = nullptr;};
                inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
                inline AlarmDetail& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


                // times Field Functions 
                bool hasTimes() const { return this->times_ != nullptr;};
                void deleteTimes() { this->times_ = nullptr;};
                inline string getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, "") };
                inline AlarmDetail& setTimes(string times) { DARABONBA_PTR_SET_VALUE(times_, times) };


                // webhook Field Functions 
                bool hasWebhook() const { return this->webhook_ != nullptr;};
                void deleteWebhook() { this->webhook_ = nullptr;};
                inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
                inline AlarmDetail& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


              protected:
                shared_ptr<string> alertState_ {};
                shared_ptr<string> comparisonOperator_ {};
                shared_ptr<string> contactGroups_ {};
                shared_ptr<string> dimensions_ {};
                shared_ptr<string> effectiveInterval_ {};
                shared_ptr<bool> enableState_ {};
                shared_ptr<string> groupId_ {};
                shared_ptr<string> groupName_ {};
                shared_ptr<string> mailSubject_ {};
                shared_ptr<string> metricName_ {};
                shared_ptr<string> namespace_ {};
                shared_ptr<string> noEffectiveInterval_ {};
                shared_ptr<string> period_ {};
                shared_ptr<string> resources_ {};
                shared_ptr<string> ruleId_ {};
                shared_ptr<string> ruleName_ {};
                shared_ptr<string> silenceTime_ {};
                shared_ptr<string> statistics_ {};
                shared_ptr<string> threshold_ {};
                shared_ptr<string> times_ {};
                shared_ptr<string> webhook_ {};
              };

              virtual bool empty() const override { return this->alarmDetail_ == nullptr; };
              // alarmDetail Field Functions 
              bool hasAlarmDetail() const { return this->alarmDetail_ != nullptr;};
              void deleteAlarmDetail() { this->alarmDetail_ = nullptr;};
              inline const vector<AlarmDetails::AlarmDetail> & getAlarmDetail() const { DARABONBA_PTR_GET_CONST(alarmDetail_, vector<AlarmDetails::AlarmDetail>) };
              inline vector<AlarmDetails::AlarmDetail> getAlarmDetail() { DARABONBA_PTR_GET(alarmDetail_, vector<AlarmDetails::AlarmDetail>) };
              inline AlarmDetails& setAlarmDetail(const vector<AlarmDetails::AlarmDetail> & alarmDetail) { DARABONBA_PTR_SET_VALUE(alarmDetail_, alarmDetail) };
              inline AlarmDetails& setAlarmDetail(vector<AlarmDetails::AlarmDetail> && alarmDetail) { DARABONBA_PTR_SET_RVALUE(alarmDetail_, alarmDetail) };


            protected:
              shared_ptr<vector<AlarmDetails::AlarmDetail>> alarmDetail_ {};
            };

            virtual bool empty() const override { return this->alarmCount_ == nullptr
        && this->alarmDetails_ == nullptr && this->hasConfigAlarm_ == nullptr; };
            // alarmCount Field Functions 
            bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
            void deleteAlarmCount() { this->alarmCount_ = nullptr;};
            inline int32_t getAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
            inline AlarmVO& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


            // alarmDetails Field Functions 
            bool hasAlarmDetails() const { return this->alarmDetails_ != nullptr;};
            void deleteAlarmDetails() { this->alarmDetails_ = nullptr;};
            inline const AlarmVO::AlarmDetails & getAlarmDetails() const { DARABONBA_PTR_GET_CONST(alarmDetails_, AlarmVO::AlarmDetails) };
            inline AlarmVO::AlarmDetails getAlarmDetails() { DARABONBA_PTR_GET(alarmDetails_, AlarmVO::AlarmDetails) };
            inline AlarmVO& setAlarmDetails(const AlarmVO::AlarmDetails & alarmDetails) { DARABONBA_PTR_SET_VALUE(alarmDetails_, alarmDetails) };
            inline AlarmVO& setAlarmDetails(AlarmVO::AlarmDetails && alarmDetails) { DARABONBA_PTR_SET_RVALUE(alarmDetails_, alarmDetails) };


            // hasConfigAlarm Field Functions 
            bool hasHasConfigAlarm() const { return this->hasConfigAlarm_ != nullptr;};
            void deleteHasConfigAlarm() { this->hasConfigAlarm_ = nullptr;};
            inline bool getHasConfigAlarm() const { DARABONBA_PTR_GET_DEFAULT(hasConfigAlarm_, false) };
            inline AlarmVO& setHasConfigAlarm(bool hasConfigAlarm) { DARABONBA_PTR_SET_VALUE(hasConfigAlarm_, hasConfigAlarm) };


          protected:
            shared_ptr<int32_t> alarmCount_ {};
            shared_ptr<AlarmVO::AlarmDetails> alarmDetails_ {};
            shared_ptr<bool> hasConfigAlarm_ {};
          };

          virtual bool empty() const override { return this->alarmVO_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr; };
          // alarmVO Field Functions 
          bool hasAlarmVO() const { return this->alarmVO_ != nullptr;};
          void deleteAlarmVO() { this->alarmVO_ = nullptr;};
          inline const CommodityInstanceAlarmVO::AlarmVO & getAlarmVO() const { DARABONBA_PTR_GET_CONST(alarmVO_, CommodityInstanceAlarmVO::AlarmVO) };
          inline CommodityInstanceAlarmVO::AlarmVO getAlarmVO() { DARABONBA_PTR_GET(alarmVO_, CommodityInstanceAlarmVO::AlarmVO) };
          inline CommodityInstanceAlarmVO& setAlarmVO(const CommodityInstanceAlarmVO::AlarmVO & alarmVO) { DARABONBA_PTR_SET_VALUE(alarmVO_, alarmVO) };
          inline CommodityInstanceAlarmVO& setAlarmVO(CommodityInstanceAlarmVO::AlarmVO && alarmVO) { DARABONBA_PTR_SET_RVALUE(alarmVO_, alarmVO) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline CommodityInstanceAlarmVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // instanceName Field Functions 
          bool hasInstanceName() const { return this->instanceName_ != nullptr;};
          void deleteInstanceName() { this->instanceName_ = nullptr;};
          inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
          inline CommodityInstanceAlarmVO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        protected:
          shared_ptr<CommodityInstanceAlarmVO::AlarmVO> alarmVO_ {};
          shared_ptr<string> instanceId_ {};
          shared_ptr<string> instanceName_ {};
        };

        virtual bool empty() const override { return this->commodityInstanceAlarmVO_ == nullptr; };
        // commodityInstanceAlarmVO Field Functions 
        bool hasCommodityInstanceAlarmVO() const { return this->commodityInstanceAlarmVO_ != nullptr;};
        void deleteCommodityInstanceAlarmVO() { this->commodityInstanceAlarmVO_ = nullptr;};
        inline const vector<VoList::CommodityInstanceAlarmVO> & getCommodityInstanceAlarmVO() const { DARABONBA_PTR_GET_CONST(commodityInstanceAlarmVO_, vector<VoList::CommodityInstanceAlarmVO>) };
        inline vector<VoList::CommodityInstanceAlarmVO> getCommodityInstanceAlarmVO() { DARABONBA_PTR_GET(commodityInstanceAlarmVO_, vector<VoList::CommodityInstanceAlarmVO>) };
        inline VoList& setCommodityInstanceAlarmVO(const vector<VoList::CommodityInstanceAlarmVO> & commodityInstanceAlarmVO) { DARABONBA_PTR_SET_VALUE(commodityInstanceAlarmVO_, commodityInstanceAlarmVO) };
        inline VoList& setCommodityInstanceAlarmVO(vector<VoList::CommodityInstanceAlarmVO> && commodityInstanceAlarmVO) { DARABONBA_PTR_SET_RVALUE(commodityInstanceAlarmVO_, commodityInstanceAlarmVO) };


      protected:
        shared_ptr<vector<VoList::CommodityInstanceAlarmVO>> commodityInstanceAlarmVO_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->voList_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // voList Field Functions 
      bool hasVoList() const { return this->voList_ != nullptr;};
      void deleteVoList() { this->voList_ = nullptr;};
      inline const Data::VoList & getVoList() const { DARABONBA_PTR_GET_CONST(voList_, Data::VoList) };
      inline Data::VoList getVoList() { DARABONBA_PTR_GET(voList_, Data::VoList) };
      inline Data& setVoList(const Data::VoList & voList) { DARABONBA_PTR_SET_VALUE(voList_, voList) };
      inline Data& setVoList(Data::VoList && voList) { DARABONBA_PTR_SET_RVALUE(voList_, voList) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<Data::VoList> voList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListInstanceAlarmResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListInstanceAlarmResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListInstanceAlarmResponseBody::Data) };
    inline ListInstanceAlarmResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListInstanceAlarmResponseBody::Data) };
    inline ListInstanceAlarmResponseBody& setData(const ListInstanceAlarmResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInstanceAlarmResponseBody& setData(ListInstanceAlarmResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInstanceAlarmResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceAlarmResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInstanceAlarmResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListInstanceAlarmResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
