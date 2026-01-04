// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULERRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULERRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSchedulerRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSchedulerRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchedulerRules, schedulerRules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSchedulerRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchedulerRules, schedulerRules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSchedulerRulesResponseBody() = default ;
    DescribeSchedulerRulesResponseBody(const DescribeSchedulerRulesResponseBody &) = default ;
    DescribeSchedulerRulesResponseBody(DescribeSchedulerRulesResponseBody &&) = default ;
    DescribeSchedulerRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSchedulerRulesResponseBody() = default ;
    DescribeSchedulerRulesResponseBody& operator=(const DescribeSchedulerRulesResponseBody &) = default ;
    DescribeSchedulerRulesResponseBody& operator=(DescribeSchedulerRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SchedulerRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SchedulerRules& obj) { 
        DARABONBA_PTR_TO_JSON(Cname, cname_);
        DARABONBA_PTR_TO_JSON(Param, param_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, SchedulerRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Cname, cname_);
        DARABONBA_PTR_FROM_JSON(Param, param_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
      };
      SchedulerRules() = default ;
      SchedulerRules(const SchedulerRules &) = default ;
      SchedulerRules(SchedulerRules &&) = default ;
      SchedulerRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SchedulerRules() = default ;
      SchedulerRules& operator=(const SchedulerRules &) = default ;
      SchedulerRules& operator=(SchedulerRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(Line, line_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RestoreDelay, restoreDelay_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(ValueType, valueType_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(Line, line_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RestoreDelay, restoreDelay_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
        };
        Rules() = default ;
        Rules(const Rules &) = default ;
        Rules(Rules &&) = default ;
        Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rules() = default ;
        Rules& operator=(const Rules &) = default ;
        Rules& operator=(Rules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->line_ == nullptr
        && this->priority_ == nullptr && this->regionId_ == nullptr && this->restoreDelay_ == nullptr && this->status_ == nullptr && this->type_ == nullptr
        && this->value_ == nullptr && this->valueType_ == nullptr; };
        // line Field Functions 
        bool hasLine() const { return this->line_ != nullptr;};
        void deleteLine() { this->line_ = nullptr;};
        inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
        inline Rules& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Rules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Rules& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // restoreDelay Field Functions 
        bool hasRestoreDelay() const { return this->restoreDelay_ != nullptr;};
        void deleteRestoreDelay() { this->restoreDelay_ = nullptr;};
        inline int32_t getRestoreDelay() const { DARABONBA_PTR_GET_DEFAULT(restoreDelay_, 0) };
        inline Rules& setRestoreDelay(int32_t restoreDelay) { DARABONBA_PTR_SET_VALUE(restoreDelay_, restoreDelay) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Rules& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Rules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Rules& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // valueType Field Functions 
        bool hasValueType() const { return this->valueType_ != nullptr;};
        void deleteValueType() { this->valueType_ = nullptr;};
        inline int32_t getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, 0) };
        inline Rules& setValueType(int32_t valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


      protected:
        shared_ptr<string> line_ {};
        shared_ptr<int32_t> priority_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<int32_t> restoreDelay_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> value_ {};
        shared_ptr<int32_t> valueType_ {};
      };

      class Param : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Param& obj) { 
          DARABONBA_PTR_TO_JSON(ParamData, paramData_);
          DARABONBA_PTR_TO_JSON(ParamType, paramType_);
        };
        friend void from_json(const Darabonba::Json& j, Param& obj) { 
          DARABONBA_PTR_FROM_JSON(ParamData, paramData_);
          DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
        };
        Param() = default ;
        Param(const Param &) = default ;
        Param(Param &&) = default ;
        Param(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Param() = default ;
        Param& operator=(const Param &) = default ;
        Param& operator=(Param &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ParamData : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParamData& obj) { 
            DARABONBA_PTR_TO_JSON(CloudInstanceId, cloudInstanceId_);
          };
          friend void from_json(const Darabonba::Json& j, ParamData& obj) { 
            DARABONBA_PTR_FROM_JSON(CloudInstanceId, cloudInstanceId_);
          };
          ParamData() = default ;
          ParamData(const ParamData &) = default ;
          ParamData(ParamData &&) = default ;
          ParamData(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParamData() = default ;
          ParamData& operator=(const ParamData &) = default ;
          ParamData& operator=(ParamData &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cloudInstanceId_ == nullptr; };
          // cloudInstanceId Field Functions 
          bool hasCloudInstanceId() const { return this->cloudInstanceId_ != nullptr;};
          void deleteCloudInstanceId() { this->cloudInstanceId_ = nullptr;};
          inline string getCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cloudInstanceId_, "") };
          inline ParamData& setCloudInstanceId(string cloudInstanceId) { DARABONBA_PTR_SET_VALUE(cloudInstanceId_, cloudInstanceId) };


        protected:
          shared_ptr<string> cloudInstanceId_ {};
        };

        virtual bool empty() const override { return this->paramData_ == nullptr
        && this->paramType_ == nullptr; };
        // paramData Field Functions 
        bool hasParamData() const { return this->paramData_ != nullptr;};
        void deleteParamData() { this->paramData_ = nullptr;};
        inline const Param::ParamData & getParamData() const { DARABONBA_PTR_GET_CONST(paramData_, Param::ParamData) };
        inline Param::ParamData getParamData() { DARABONBA_PTR_GET(paramData_, Param::ParamData) };
        inline Param& setParamData(const Param::ParamData & paramData) { DARABONBA_PTR_SET_VALUE(paramData_, paramData) };
        inline Param& setParamData(Param::ParamData && paramData) { DARABONBA_PTR_SET_RVALUE(paramData_, paramData) };


        // paramType Field Functions 
        bool hasParamType() const { return this->paramType_ != nullptr;};
        void deleteParamType() { this->paramType_ = nullptr;};
        inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
        inline Param& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


      protected:
        shared_ptr<Param::ParamData> paramData_ {};
        shared_ptr<string> paramType_ {};
      };

      virtual bool empty() const override { return this->cname_ == nullptr
        && this->param_ == nullptr && this->ruleName_ == nullptr && this->ruleType_ == nullptr && this->rules_ == nullptr; };
      // cname Field Functions 
      bool hasCname() const { return this->cname_ != nullptr;};
      void deleteCname() { this->cname_ = nullptr;};
      inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
      inline SchedulerRules& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


      // param Field Functions 
      bool hasParam() const { return this->param_ != nullptr;};
      void deleteParam() { this->param_ = nullptr;};
      inline const SchedulerRules::Param & getParam() const { DARABONBA_PTR_GET_CONST(param_, SchedulerRules::Param) };
      inline SchedulerRules::Param getParam() { DARABONBA_PTR_GET(param_, SchedulerRules::Param) };
      inline SchedulerRules& setParam(const SchedulerRules::Param & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
      inline SchedulerRules& setParam(SchedulerRules::Param && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline SchedulerRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline SchedulerRules& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<SchedulerRules::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<SchedulerRules::Rules>) };
      inline vector<SchedulerRules::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<SchedulerRules::Rules>) };
      inline SchedulerRules& setRules(const vector<SchedulerRules::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline SchedulerRules& setRules(vector<SchedulerRules::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      shared_ptr<string> cname_ {};
      shared_ptr<SchedulerRules::Param> param_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<string> ruleType_ {};
      shared_ptr<vector<SchedulerRules::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->schedulerRules_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSchedulerRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schedulerRules Field Functions 
    bool hasSchedulerRules() const { return this->schedulerRules_ != nullptr;};
    void deleteSchedulerRules() { this->schedulerRules_ = nullptr;};
    inline const vector<DescribeSchedulerRulesResponseBody::SchedulerRules> & getSchedulerRules() const { DARABONBA_PTR_GET_CONST(schedulerRules_, vector<DescribeSchedulerRulesResponseBody::SchedulerRules>) };
    inline vector<DescribeSchedulerRulesResponseBody::SchedulerRules> getSchedulerRules() { DARABONBA_PTR_GET(schedulerRules_, vector<DescribeSchedulerRulesResponseBody::SchedulerRules>) };
    inline DescribeSchedulerRulesResponseBody& setSchedulerRules(const vector<DescribeSchedulerRulesResponseBody::SchedulerRules> & schedulerRules) { DARABONBA_PTR_SET_VALUE(schedulerRules_, schedulerRules) };
    inline DescribeSchedulerRulesResponseBody& setSchedulerRules(vector<DescribeSchedulerRulesResponseBody::SchedulerRules> && schedulerRules) { DARABONBA_PTR_SET_RVALUE(schedulerRules_, schedulerRules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeSchedulerRulesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeSchedulerRulesResponseBody::SchedulerRules>> schedulerRules_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
