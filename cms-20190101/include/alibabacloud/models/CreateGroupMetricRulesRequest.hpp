// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESREQUEST_HPP_
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
  class CreateGroupMetricRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMetricRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupMetricRules, groupMetricRules_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupMetricRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupMetricRules, groupMetricRules_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateGroupMetricRulesRequest() = default ;
    CreateGroupMetricRulesRequest(const CreateGroupMetricRulesRequest &) = default ;
    CreateGroupMetricRulesRequest(CreateGroupMetricRulesRequest &&) = default ;
    CreateGroupMetricRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMetricRulesRequest() = default ;
    CreateGroupMetricRulesRequest& operator=(const CreateGroupMetricRulesRequest &) = default ;
    CreateGroupMetricRulesRequest& operator=(CreateGroupMetricRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupMetricRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupMetricRules& obj) { 
        DARABONBA_PTR_TO_JSON(Escalations, escalations_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
        DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
        DARABONBA_PTR_TO_JSON(EmailSubject, emailSubject_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(NoDataPolicy, noDataPolicy_);
        DARABONBA_PTR_TO_JSON(NoEffectiveInterval, noEffectiveInterval_);
        DARABONBA_PTR_TO_JSON(Options, options_);
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
        DARABONBA_PTR_TO_JSON(Webhook, webhook_);
      };
      friend void from_json(const Darabonba::Json& j, GroupMetricRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
        DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
        DARABONBA_PTR_FROM_JSON(EmailSubject, emailSubject_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(NoDataPolicy, noDataPolicy_);
        DARABONBA_PTR_FROM_JSON(NoEffectiveInterval, noEffectiveInterval_);
        DARABONBA_PTR_FROM_JSON(Options, options_);
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
        DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
      };
      GroupMetricRules() = default ;
      GroupMetricRules(const GroupMetricRules &) = default ;
      GroupMetricRules(GroupMetricRules &&) = default ;
      GroupMetricRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupMetricRules() = default ;
      GroupMetricRules& operator=(const GroupMetricRules &) = default ;
      GroupMetricRules& operator=(GroupMetricRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key of the alert rule. The specified tag is contained in alert notifications.
        // 
        // Valid values of N: 1 to 200.
        shared_ptr<string> key_ {};
        // The tag value of the alert rule. The specified tag is contained in alert notifications.
        // 
        // Valid values of N: 1 to 200.
        shared_ptr<string> value_ {};
      };

      class Escalations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Escalations& obj) { 
          DARABONBA_PTR_TO_JSON(Critical, critical_);
          DARABONBA_PTR_TO_JSON(Info, info_);
          DARABONBA_PTR_TO_JSON(Warn, warn_);
        };
        friend void from_json(const Darabonba::Json& j, Escalations& obj) { 
          DARABONBA_PTR_FROM_JSON(Critical, critical_);
          DARABONBA_PTR_FROM_JSON(Info, info_);
          DARABONBA_PTR_FROM_JSON(Warn, warn_);
        };
        Escalations() = default ;
        Escalations(const Escalations &) = default ;
        Escalations(Escalations &&) = default ;
        Escalations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Escalations() = default ;
        Escalations& operator=(const Escalations &) = default ;
        Escalations& operator=(Escalations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Warn : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Warn& obj) { 
            DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
            DARABONBA_PTR_TO_JSON(N, n_);
            DARABONBA_PTR_TO_JSON(PreCondition, preCondition_);
            DARABONBA_PTR_TO_JSON(Statistics, statistics_);
            DARABONBA_PTR_TO_JSON(Threshold, threshold_);
            DARABONBA_PTR_TO_JSON(Times, times_);
          };
          friend void from_json(const Darabonba::Json& j, Warn& obj) { 
            DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
            DARABONBA_PTR_FROM_JSON(N, n_);
            DARABONBA_PTR_FROM_JSON(PreCondition, preCondition_);
            DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
            DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
            DARABONBA_PTR_FROM_JSON(Times, times_);
          };
          Warn() = default ;
          Warn(const Warn &) = default ;
          Warn(Warn &&) = default ;
          Warn(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Warn() = default ;
          Warn& operator=(const Warn &) = default ;
          Warn& operator=(Warn &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->n_ == nullptr && this->preCondition_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
          // comparisonOperator Field Functions 
          bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
          void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
          inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
          inline Warn& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


          // n Field Functions 
          bool hasN() const { return this->n_ != nullptr;};
          void deleteN() { this->n_ = nullptr;};
          inline string getN() const { DARABONBA_PTR_GET_DEFAULT(n_, "") };
          inline Warn& setN(string n) { DARABONBA_PTR_SET_VALUE(n_, n) };


          // preCondition Field Functions 
          bool hasPreCondition() const { return this->preCondition_ != nullptr;};
          void deletePreCondition() { this->preCondition_ = nullptr;};
          inline string getPreCondition() const { DARABONBA_PTR_GET_DEFAULT(preCondition_, "") };
          inline Warn& setPreCondition(string preCondition) { DARABONBA_PTR_SET_VALUE(preCondition_, preCondition) };


          // statistics Field Functions 
          bool hasStatistics() const { return this->statistics_ != nullptr;};
          void deleteStatistics() { this->statistics_ = nullptr;};
          inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
          inline Warn& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


          // threshold Field Functions 
          bool hasThreshold() const { return this->threshold_ != nullptr;};
          void deleteThreshold() { this->threshold_ = nullptr;};
          inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
          inline Warn& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


          // times Field Functions 
          bool hasTimes() const { return this->times_ != nullptr;};
          void deleteTimes() { this->times_ = nullptr;};
          inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
          inline Warn& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


        protected:
          shared_ptr<string> comparisonOperator_ {};
          shared_ptr<string> n_ {};
          shared_ptr<string> preCondition_ {};
          shared_ptr<string> statistics_ {};
          shared_ptr<string> threshold_ {};
          shared_ptr<int32_t> times_ {};
        };

        class Info : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Info& obj) { 
            DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
            DARABONBA_PTR_TO_JSON(N, n_);
            DARABONBA_PTR_TO_JSON(PreCondition, preCondition_);
            DARABONBA_PTR_TO_JSON(Statistics, statistics_);
            DARABONBA_PTR_TO_JSON(Threshold, threshold_);
            DARABONBA_PTR_TO_JSON(Times, times_);
          };
          friend void from_json(const Darabonba::Json& j, Info& obj) { 
            DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
            DARABONBA_PTR_FROM_JSON(N, n_);
            DARABONBA_PTR_FROM_JSON(PreCondition, preCondition_);
            DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
            DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
            DARABONBA_PTR_FROM_JSON(Times, times_);
          };
          Info() = default ;
          Info(const Info &) = default ;
          Info(Info &&) = default ;
          Info(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Info() = default ;
          Info& operator=(const Info &) = default ;
          Info& operator=(Info &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->n_ == nullptr && this->preCondition_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
          // comparisonOperator Field Functions 
          bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
          void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
          inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
          inline Info& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


          // n Field Functions 
          bool hasN() const { return this->n_ != nullptr;};
          void deleteN() { this->n_ = nullptr;};
          inline string getN() const { DARABONBA_PTR_GET_DEFAULT(n_, "") };
          inline Info& setN(string n) { DARABONBA_PTR_SET_VALUE(n_, n) };


          // preCondition Field Functions 
          bool hasPreCondition() const { return this->preCondition_ != nullptr;};
          void deletePreCondition() { this->preCondition_ = nullptr;};
          inline string getPreCondition() const { DARABONBA_PTR_GET_DEFAULT(preCondition_, "") };
          inline Info& setPreCondition(string preCondition) { DARABONBA_PTR_SET_VALUE(preCondition_, preCondition) };


          // statistics Field Functions 
          bool hasStatistics() const { return this->statistics_ != nullptr;};
          void deleteStatistics() { this->statistics_ = nullptr;};
          inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
          inline Info& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


          // threshold Field Functions 
          bool hasThreshold() const { return this->threshold_ != nullptr;};
          void deleteThreshold() { this->threshold_ = nullptr;};
          inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
          inline Info& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


          // times Field Functions 
          bool hasTimes() const { return this->times_ != nullptr;};
          void deleteTimes() { this->times_ = nullptr;};
          inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
          inline Info& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


        protected:
          shared_ptr<string> comparisonOperator_ {};
          shared_ptr<string> n_ {};
          shared_ptr<string> preCondition_ {};
          shared_ptr<string> statistics_ {};
          shared_ptr<string> threshold_ {};
          shared_ptr<int32_t> times_ {};
        };

        class Critical : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Critical& obj) { 
            DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
            DARABONBA_PTR_TO_JSON(N, n_);
            DARABONBA_PTR_TO_JSON(PreCondition, preCondition_);
            DARABONBA_PTR_TO_JSON(Statistics, statistics_);
            DARABONBA_PTR_TO_JSON(Threshold, threshold_);
            DARABONBA_PTR_TO_JSON(Times, times_);
          };
          friend void from_json(const Darabonba::Json& j, Critical& obj) { 
            DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
            DARABONBA_PTR_FROM_JSON(N, n_);
            DARABONBA_PTR_FROM_JSON(PreCondition, preCondition_);
            DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
            DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
            DARABONBA_PTR_FROM_JSON(Times, times_);
          };
          Critical() = default ;
          Critical(const Critical &) = default ;
          Critical(Critical &&) = default ;
          Critical(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Critical() = default ;
          Critical& operator=(const Critical &) = default ;
          Critical& operator=(Critical &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->n_ == nullptr && this->preCondition_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
          // comparisonOperator Field Functions 
          bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
          void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
          inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
          inline Critical& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


          // n Field Functions 
          bool hasN() const { return this->n_ != nullptr;};
          void deleteN() { this->n_ = nullptr;};
          inline string getN() const { DARABONBA_PTR_GET_DEFAULT(n_, "") };
          inline Critical& setN(string n) { DARABONBA_PTR_SET_VALUE(n_, n) };


          // preCondition Field Functions 
          bool hasPreCondition() const { return this->preCondition_ != nullptr;};
          void deletePreCondition() { this->preCondition_ = nullptr;};
          inline string getPreCondition() const { DARABONBA_PTR_GET_DEFAULT(preCondition_, "") };
          inline Critical& setPreCondition(string preCondition) { DARABONBA_PTR_SET_VALUE(preCondition_, preCondition) };


          // statistics Field Functions 
          bool hasStatistics() const { return this->statistics_ != nullptr;};
          void deleteStatistics() { this->statistics_ = nullptr;};
          inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
          inline Critical& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


          // threshold Field Functions 
          bool hasThreshold() const { return this->threshold_ != nullptr;};
          void deleteThreshold() { this->threshold_ = nullptr;};
          inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
          inline Critical& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


          // times Field Functions 
          bool hasTimes() const { return this->times_ != nullptr;};
          void deleteTimes() { this->times_ = nullptr;};
          inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
          inline Critical& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


        protected:
          shared_ptr<string> comparisonOperator_ {};
          shared_ptr<string> n_ {};
          shared_ptr<string> preCondition_ {};
          shared_ptr<string> statistics_ {};
          shared_ptr<string> threshold_ {};
          shared_ptr<int32_t> times_ {};
        };

        virtual bool empty() const override { return this->critical_ == nullptr
        && this->info_ == nullptr && this->warn_ == nullptr; };
        // critical Field Functions 
        bool hasCritical() const { return this->critical_ != nullptr;};
        void deleteCritical() { this->critical_ = nullptr;};
        inline const Escalations::Critical & getCritical() const { DARABONBA_PTR_GET_CONST(critical_, Escalations::Critical) };
        inline Escalations::Critical getCritical() { DARABONBA_PTR_GET(critical_, Escalations::Critical) };
        inline Escalations& setCritical(const Escalations::Critical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
        inline Escalations& setCritical(Escalations::Critical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


        // info Field Functions 
        bool hasInfo() const { return this->info_ != nullptr;};
        void deleteInfo() { this->info_ = nullptr;};
        inline const Escalations::Info & getInfo() const { DARABONBA_PTR_GET_CONST(info_, Escalations::Info) };
        inline Escalations::Info getInfo() { DARABONBA_PTR_GET(info_, Escalations::Info) };
        inline Escalations& setInfo(const Escalations::Info & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
        inline Escalations& setInfo(Escalations::Info && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


        // warn Field Functions 
        bool hasWarn() const { return this->warn_ != nullptr;};
        void deleteWarn() { this->warn_ = nullptr;};
        inline const Escalations::Warn & getWarn() const { DARABONBA_PTR_GET_CONST(warn_, Escalations::Warn) };
        inline Escalations::Warn getWarn() { DARABONBA_PTR_GET(warn_, Escalations::Warn) };
        inline Escalations& setWarn(const Escalations::Warn & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
        inline Escalations& setWarn(Escalations::Warn && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


      protected:
        shared_ptr<Escalations::Critical> critical_ {};
        shared_ptr<Escalations::Info> info_ {};
        shared_ptr<Escalations::Warn> warn_ {};
      };

      virtual bool empty() const override { return this->escalations_ == nullptr
        && this->category_ == nullptr && this->contactGroups_ == nullptr && this->dimensions_ == nullptr && this->effectiveInterval_ == nullptr && this->emailSubject_ == nullptr
        && this->interval_ == nullptr && this->labels_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->noDataPolicy_ == nullptr
        && this->noEffectiveInterval_ == nullptr && this->options_ == nullptr && this->period_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr
        && this->silenceTime_ == nullptr && this->webhook_ == nullptr; };
      // escalations Field Functions 
      bool hasEscalations() const { return this->escalations_ != nullptr;};
      void deleteEscalations() { this->escalations_ = nullptr;};
      inline const GroupMetricRules::Escalations & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, GroupMetricRules::Escalations) };
      inline GroupMetricRules::Escalations getEscalations() { DARABONBA_PTR_GET(escalations_, GroupMetricRules::Escalations) };
      inline GroupMetricRules& setEscalations(const GroupMetricRules::Escalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
      inline GroupMetricRules& setEscalations(GroupMetricRules::Escalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline GroupMetricRules& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // contactGroups Field Functions 
      bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
      void deleteContactGroups() { this->contactGroups_ = nullptr;};
      inline string getContactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
      inline GroupMetricRules& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline string getDimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
      inline GroupMetricRules& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


      // effectiveInterval Field Functions 
      bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
      void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
      inline string getEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
      inline GroupMetricRules& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


      // emailSubject Field Functions 
      bool hasEmailSubject() const { return this->emailSubject_ != nullptr;};
      void deleteEmailSubject() { this->emailSubject_ = nullptr;};
      inline string getEmailSubject() const { DARABONBA_PTR_GET_DEFAULT(emailSubject_, "") };
      inline GroupMetricRules& setEmailSubject(string emailSubject) { DARABONBA_PTR_SET_VALUE(emailSubject_, emailSubject) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
      inline GroupMetricRules& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<GroupMetricRules::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<GroupMetricRules::Labels>) };
      inline vector<GroupMetricRules::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<GroupMetricRules::Labels>) };
      inline GroupMetricRules& setLabels(const vector<GroupMetricRules::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline GroupMetricRules& setLabels(vector<GroupMetricRules::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline GroupMetricRules& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline GroupMetricRules& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // noDataPolicy Field Functions 
      bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
      void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
      inline string getNoDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
      inline GroupMetricRules& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


      // noEffectiveInterval Field Functions 
      bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
      void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
      inline string getNoEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
      inline GroupMetricRules& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
      inline GroupMetricRules& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
      inline GroupMetricRules& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline GroupMetricRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline GroupMetricRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // silenceTime Field Functions 
      bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
      void deleteSilenceTime() { this->silenceTime_ = nullptr;};
      inline int32_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
      inline GroupMetricRules& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


      // webhook Field Functions 
      bool hasWebhook() const { return this->webhook_ != nullptr;};
      void deleteWebhook() { this->webhook_ = nullptr;};
      inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
      inline GroupMetricRules& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


    protected:
      shared_ptr<GroupMetricRules::Escalations> escalations_ {};
      // The name of the cloud service. Valid values of N: 1 to 200. Valid value:
      // 
      // *   PolarDB: PolarDB
      // *   NewBGPDDoS: Anti-DDoS Pro
      // *   IoTDevice: IoT Platform
      // *   DRDS: Distributed Relational Database Service (DRDS)
      // *   VS: Video Surveillance System
      // *   AMQP: Alibaba Cloud Message Queue for AMQP
      // *   ADS: AnalyticDB
      // *   APIGateway: API Gateway
      // *   InternetSharedBandwidth: EIP Bandwidth Plan
      // *   CDN: Alibaba Cloud Content Delivery Network (CDN)
      // *   CEN: Cloud Enterprise Network (CEN)
      // *   DCDN: Dynamic Route for CDN (DCDN)
      // *   DDoS: Anti-DDoS
      // *   ECS: Elastic Compute Service (ECS)
      // *   DirectMail: Direct Mail
      // *   Elasticsearch: Elasticsearch
      // *   EMR: E-MapReduce (EMR)
      // *   ESS: Auto Scaling
      // *   FunctionCompute: Function Compute
      // *   RealtimeCompute: Realtime Compute for Apache Flink
      // *   GlobalAcceleration: Global Accelerator (GA)
      // *   Hbase: ApsaraDB for HBase
      // *   TSDB: Time Series Database (TSDB)
      // *   IPv6trans: IPv6 Translation Service
      // *   Kafka: Message Queue for Apache Kafka
      // *   Kubernetes: Container Service for Kubernetes (ACK)
      // *   KVstore: ApsaraDB for Redis
      // *   MNS: Message Service (MNS)
      // *   MongoDB: ApsaraDB for MongoDB
      // *   MQ: Message Queue
      // *   NAT: NAT Gateway
      // *   OpenAd: Open Ad
      // *   OpenSearch: Open Search
      // *   OSS: Object Storage Service (OSS)
      // *   PCDN: P2P CDN
      // *   petadata: HybridDB for MySQL
      // *   RDS: ApsaraDB RDS
      // *   SCDN: Secure CDN
      // *   SLB: Server Load Balancer (SLB)
      // *   SLS: Log Service
      // *   VideoLive: ApsaraVideo Live
      // *   VOD: ApsaraVideo VOD
      // *   EIP: Elastic IP Address (EIP)
      // *   VPN: VPN Gateway
      // *   AIRec: Artificial Intelligence Recommendation
      // *   GPDB: AnalyticDB for PostgreSQL
      // *   DBS: Database Backup (DBS)
      // *   SAG: Smart Access Gateway (SAG)
      // *   Memcache: ApsaraDB for Memcache
      // *   IOT_EDGE: Link IoT Edge
      // *   OCS: ApsaraDB for Memcache (previous version)
      // *   VPC: Express Connect
      // *   EHPC: Elastic High Performance Computing (E-HPC)
      // *   MPS: ApsaraVideo Media Processing
      // *   ENS: Edge Node Service (ENS)
      // *   MaxCompute_Prepay: MaxCompute
      // *   IoT_Kubernetes: Edge Application Hosting
      // *   CMS: CloudMonitor
      // *   batchcomputenew: Batch Compute
      // *   HBaseUE: ApsaraDB for HBase Performance-enhanced Edition
      // *   UIS: Ultimate Internet Service (UIS)
      // *   nls: Intelligent Speech Interaction
      // *   ots: Tablestore
      // *   NAS: File Storage NAS
      // *   ECI: Elastic Container Instance (ECI)
      // *   OpenAPI: OpenAPI Explorer
      // *   pvtzpost: Alibaba Cloud DNS PrivateZone
      // *   blinkonk8s: Flink on Kubernetes
      // *   FunctionFlow: Serverless Workflow (SWF)
      // *   SMC: Server Migration Center (SMC)
      // *   ddosbgp: Anti-DDoS Origin
      // *   baas: Blockchain as a Service
      // *   privatelink: PrivateLink
      // *   cds: ApsaraDB for Cassandra
      // *   DDH: Dedicated Host
      // *   RocketMQ: Message Queue for Apache RocketMQ
      // *   ECC: Express Cloud Connect
      // *   hbaseserverless: ApsaraDB for HBase Serverless Edition
      // *   mns_tmp: Message Service
      // *   hdr: Hybrid Disaster Recovery (HDR)
      // *   hbr: Hybrid Backup Recovery (HBR)
      // *   ADB: AnalyticDB for MySQL V3.0
      // *   tag: Tag Service
      // *   GDB: Graph Database
      // *   WAF: Web Application Firewall (WAF)
      // *   hcs_sgw: Cloud Storage Gateway (CSG)
      // *   ipv6gateway: IPv6 Gateway
      // *   RDS_SAR: ApsaraDB Exclusive Host Group
      // *   learn: Machine Learning Platform for AI
      // *   ROS: Resource Orchestration Service (ROS)
      // *   OOS: Operation Orchestration Service (OOS)
      // *   bds: Data Synchronization for HBase
      // *   cfw: Cloud Firewall
      // *   ddosDip: Anti-DDoS Premium
      // *   datahub: DataHub
      // *   hologres: Hologres
      // *   ExpressConnect: Express Connect
      // *   dbfs: Database File System (DBFS)
      // *   clickhouse: ApsaraDB for ClickHouse
      // *   k8s: Container Service for Kubernetes (ACK)
      // *   DTS: Data Transmission Service (DTS)
      // *   AnycastEIP: Anycast Elastic IP Address
      // *   Lindorm: ApsaraDB for Lindorm
      // *   config: Cloud Config
      // *   spark: Databricks DataInsight (DDI)
      // *   serverless: Serverless App Engine (SAE)
      // *   alb: Application Load Balancer (ALB)
      // *   oceanbase: ApsaraDB for OceanBase
      // *   KMS: Key Management Service (KMS)
      // *   lvwang: Content Moderation
      // *   LinkVisual: LinkVisual
      // *   tair: ApsaraDB for Redis Enhanced Edition (Tair)
      // *   dlf: Data Lake Formation (DLF)
      // *   networkmonitor: Site Monitoring
      // *   pnc: Physical Network Change
      // *   AIS: Alibaba Cloud Infrastructure
      // *   cloudgame: Cloud Gaming Platform
      // *   RTC: Real-Time Communication
      // *   cloudbox: CloudBox
      // *   actiontrail: ActionTrail
      // *   cc: Cloud Connector
      // *   disk: Elastic Block Storage (EBS)
      // *   easygene: Genomics Computing Platform
      // *   cloudphone: Elastic Cloud Phone
      // *   BMS: Bare Metal Management Service
      // *   swas: Simple Application Server
      // *   AvailabilityMonitoring: Availability Monitoring of CloudMonitor
      // 
      // This parameter is required.
      shared_ptr<string> category_ {};
      // The alert contact groups. Valid values of N: 1 to 200.
      // 
      // For information about how to obtain alert contact groups, see [DescribeContactGroupList](https://help.aliyun.com/document_detail/114922.html).
      shared_ptr<string> contactGroups_ {};
      // The dimension of the alert rule. Valid values of N: 1 to 200.
      // 
      // Set the value to a set of key-value pairs, for example, `userId:120886317861****` or `instanceId:i-m5e1qg6uo38rztr4****`.
      shared_ptr<string> dimensions_ {};
      // The time period during which the alert rule is effective. Valid values of N: 1 to 200.
      shared_ptr<string> effectiveInterval_ {};
      // The subject of the alert notification email. Valid values of N: 1 to 200.
      shared_ptr<string> emailSubject_ {};
      // The interval at which CloudMonitor checks whether the alert rule is triggered. Valid values of N: 1 to 200.
      // 
      // Unit: seconds. The default value is the lowest frequency at which the metric is polled.
      // 
      // >  We recommend that you set the interval to the data aggregation period. If the interval is shorter than the data aggregation period, alerts cannot be triggered due to insufficient data.
      shared_ptr<string> interval_ {};
      shared_ptr<vector<GroupMetricRules::Labels>> labels_ {};
      // The name of the metric. Valid values of N: 1 to 200.
      // 
      // For information about how to obtain the name of a metric, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
      // 
      // This parameter is required.
      shared_ptr<string> metricName_ {};
      // The namespace of the cloud service. Valid values of N: 1 to 200.
      // 
      // For information about how to obtain the namespace of a cloud service, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
      // 
      // This parameter is required.
      shared_ptr<string> namespace_ {};
      // The method that is used to handle alerts when no monitoring data is found. Valid values of N: 1 to 200. Valid value:
      // 
      // *   KEEP_LAST_STATE (default value): No operation is performed.
      // *   INSUFFICIENT_DATA: An alert whose content is "Insufficient data" is triggered.
      // *   OK: The alert rule has no active alerts.
      shared_ptr<string> noDataPolicy_ {};
      // The time period during which the alert rule is ineffective. Valid values of N: 1 to 200.
      shared_ptr<string> noEffectiveInterval_ {};
      shared_ptr<string> options_ {};
      // The aggregation period of the metric data. Valid values of N: 1 to 200.
      // 
      // Set the `Period` parameter to an integral multiple of 60. Unit: seconds. Default value: 300.
      shared_ptr<string> period_ {};
      // The ID of the alert rule. Valid values of N: 1 to 200.
      // 
      // This parameter is required.
      shared_ptr<string> ruleId_ {};
      // The name of the alert rule. Valid values of N: 1 to 200.
      // 
      // This parameter is required.
      shared_ptr<string> ruleName_ {};
      // The mute period during which new alerts are not sent even if the trigger conditions are met. Valid values of N: 1 to 200.
      // 
      // Unit: seconds. Default value: 86400. Minimum value: 3600.
      shared_ptr<int32_t> silenceTime_ {};
      // The callback URL. Valid values of N: 1 to 200.
      // 
      // The callback URL must be accessible over the Internet. CloudMonitor pushes an alert notification to the specified callback URL by sending an HTTP POST request. Only the HTTP protocol is supported.
      shared_ptr<string> webhook_ {};
    };

    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupMetricRules_ == nullptr && this->regionId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline CreateGroupMetricRulesRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupMetricRules Field Functions 
    bool hasGroupMetricRules() const { return this->groupMetricRules_ != nullptr;};
    void deleteGroupMetricRules() { this->groupMetricRules_ = nullptr;};
    inline const vector<CreateGroupMetricRulesRequest::GroupMetricRules> & getGroupMetricRules() const { DARABONBA_PTR_GET_CONST(groupMetricRules_, vector<CreateGroupMetricRulesRequest::GroupMetricRules>) };
    inline vector<CreateGroupMetricRulesRequest::GroupMetricRules> getGroupMetricRules() { DARABONBA_PTR_GET(groupMetricRules_, vector<CreateGroupMetricRulesRequest::GroupMetricRules>) };
    inline CreateGroupMetricRulesRequest& setGroupMetricRules(const vector<CreateGroupMetricRulesRequest::GroupMetricRules> & groupMetricRules) { DARABONBA_PTR_SET_VALUE(groupMetricRules_, groupMetricRules) };
    inline CreateGroupMetricRulesRequest& setGroupMetricRules(vector<CreateGroupMetricRulesRequest::GroupMetricRules> && groupMetricRules) { DARABONBA_PTR_SET_RVALUE(groupMetricRules_, groupMetricRules) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateGroupMetricRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the application group.
    // 
    // For information about how to obtain the ID of an application group, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    // 
    // This parameter is required.
    shared_ptr<int64_t> groupId_ {};
    shared_ptr<vector<CreateGroupMetricRulesRequest::GroupMetricRules>> groupMetricRules_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
