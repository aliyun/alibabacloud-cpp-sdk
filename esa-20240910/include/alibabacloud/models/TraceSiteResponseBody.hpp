// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRACESITERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRACESITERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class TraceSiteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TraceSiteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Trace, trace_);
    };
    friend void from_json(const Darabonba::Json& j, TraceSiteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Trace, trace_);
    };
    TraceSiteResponseBody() = default ;
    TraceSiteResponseBody(const TraceSiteResponseBody &) = default ;
    TraceSiteResponseBody(TraceSiteResponseBody &&) = default ;
    TraceSiteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TraceSiteResponseBody() = default ;
    TraceSiteResponseBody& operator=(const TraceSiteResponseBody &) = default ;
    TraceSiteResponseBody& operator=(TraceSiteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Trace : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Trace& obj) { 
        DARABONBA_PTR_TO_JSON(Matched, matched_);
        DARABONBA_PTR_TO_JSON(StepModuleName, stepModuleName_);
        DARABONBA_PTR_TO_JSON(Trace, trace_);
      };
      friend void from_json(const Darabonba::Json& j, Trace& obj) { 
        DARABONBA_PTR_FROM_JSON(Matched, matched_);
        DARABONBA_PTR_FROM_JSON(StepModuleName, stepModuleName_);
        DARABONBA_PTR_FROM_JSON(Trace, trace_);
      };
      Trace() = default ;
      Trace(const Trace &) = default ;
      Trace(Trace &&) = default ;
      Trace(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Trace() = default ;
      Trace& operator=(const Trace &) = default ;
      Trace& operator=(Trace &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TraceItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TraceItem& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(ConfigType, configType_);
          DARABONBA_PTR_TO_JSON(DdosLevelDomestic, ddosLevelDomestic_);
          DARABONBA_PTR_TO_JSON(DdosLevelOversea, ddosLevelOversea_);
          DARABONBA_PTR_TO_JSON(EnvName, envName_);
          DARABONBA_PTR_TO_JSON(Expression, expression_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
          DARABONBA_PTR_TO_JSON(OriginPoolName, originPoolName_);
          DARABONBA_PTR_TO_JSON(RoutineId, routineId_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, TraceItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
          DARABONBA_PTR_FROM_JSON(DdosLevelDomestic, ddosLevelDomestic_);
          DARABONBA_PTR_FROM_JSON(DdosLevelOversea, ddosLevelOversea_);
          DARABONBA_PTR_FROM_JSON(EnvName, envName_);
          DARABONBA_PTR_FROM_JSON(Expression, expression_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
          DARABONBA_PTR_FROM_JSON(OriginPoolName, originPoolName_);
          DARABONBA_PTR_FROM_JSON(RoutineId, routineId_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        TraceItem() = default ;
        TraceItem(const TraceItem &) = default ;
        TraceItem(TraceItem &&) = default ;
        TraceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TraceItem() = default ;
        TraceItem& operator=(const TraceItem &) = default ;
        TraceItem& operator=(TraceItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->configType_ == nullptr && this->ddosLevelDomestic_ == nullptr && this->ddosLevelOversea_ == nullptr && this->envName_ == nullptr && this->expression_ == nullptr
        && this->level_ == nullptr && this->loadBalancerName_ == nullptr && this->originPoolName_ == nullptr && this->routineId_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->siteVersion_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline TraceItem& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // configType Field Functions 
        bool hasConfigType() const { return this->configType_ != nullptr;};
        void deleteConfigType() { this->configType_ = nullptr;};
        inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
        inline TraceItem& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


        // ddosLevelDomestic Field Functions 
        bool hasDdosLevelDomestic() const { return this->ddosLevelDomestic_ != nullptr;};
        void deleteDdosLevelDomestic() { this->ddosLevelDomestic_ = nullptr;};
        inline string getDdosLevelDomestic() const { DARABONBA_PTR_GET_DEFAULT(ddosLevelDomestic_, "") };
        inline TraceItem& setDdosLevelDomestic(string ddosLevelDomestic) { DARABONBA_PTR_SET_VALUE(ddosLevelDomestic_, ddosLevelDomestic) };


        // ddosLevelOversea Field Functions 
        bool hasDdosLevelOversea() const { return this->ddosLevelOversea_ != nullptr;};
        void deleteDdosLevelOversea() { this->ddosLevelOversea_ = nullptr;};
        inline string getDdosLevelOversea() const { DARABONBA_PTR_GET_DEFAULT(ddosLevelOversea_, "") };
        inline TraceItem& setDdosLevelOversea(string ddosLevelOversea) { DARABONBA_PTR_SET_VALUE(ddosLevelOversea_, ddosLevelOversea) };


        // envName Field Functions 
        bool hasEnvName() const { return this->envName_ != nullptr;};
        void deleteEnvName() { this->envName_ = nullptr;};
        inline string getEnvName() const { DARABONBA_PTR_GET_DEFAULT(envName_, "") };
        inline TraceItem& setEnvName(string envName) { DARABONBA_PTR_SET_VALUE(envName_, envName) };


        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
        inline TraceItem& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline TraceItem& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // loadBalancerName Field Functions 
        bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
        void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
        inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
        inline TraceItem& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


        // originPoolName Field Functions 
        bool hasOriginPoolName() const { return this->originPoolName_ != nullptr;};
        void deleteOriginPoolName() { this->originPoolName_ = nullptr;};
        inline string getOriginPoolName() const { DARABONBA_PTR_GET_DEFAULT(originPoolName_, "") };
        inline TraceItem& setOriginPoolName(string originPoolName) { DARABONBA_PTR_SET_VALUE(originPoolName_, originPoolName) };


        // routineId Field Functions 
        bool hasRoutineId() const { return this->routineId_ != nullptr;};
        void deleteRoutineId() { this->routineId_ = nullptr;};
        inline string getRoutineId() const { DARABONBA_PTR_GET_DEFAULT(routineId_, "") };
        inline TraceItem& setRoutineId(string routineId) { DARABONBA_PTR_SET_VALUE(routineId_, routineId) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline int32_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
        inline TraceItem& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline TraceItem& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // siteVersion Field Functions 
        bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
        void deleteSiteVersion() { this->siteVersion_ = nullptr;};
        inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
        inline TraceItem& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline TraceItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline TraceItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The action to perform.
        shared_ptr<string> action_ {};
        // The configuration type.
        shared_ptr<string> configType_ {};
        // The mitigation capability (China).
        shared_ptr<string> ddosLevelDomestic_ {};
        // The mitigation capability (global, excluding China).
        shared_ptr<string> ddosLevelOversea_ {};
        // The environment.
        shared_ptr<string> envName_ {};
        // The rule expression.
        shared_ptr<string> expression_ {};
        // The mitigation capability.
        shared_ptr<string> level_ {};
        // The load balancer domain name.
        shared_ptr<string> loadBalancerName_ {};
        // The name of the origin pool.
        shared_ptr<string> originPoolName_ {};
        // The routine ID.
        shared_ptr<string> routineId_ {};
        // The security rule ID.
        shared_ptr<int32_t> ruleId_ {};
        // The name of the matched rule.
        shared_ptr<string> ruleName_ {};
        // The version.
        shared_ptr<int32_t> siteVersion_ {};
        // The security-related rule type.
        shared_ptr<string> type_ {};
        // The value specified in the IP access rule.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->matched_ == nullptr
        && this->stepModuleName_ == nullptr && this->trace_ == nullptr; };
      // matched Field Functions 
      bool hasMatched() const { return this->matched_ != nullptr;};
      void deleteMatched() { this->matched_ = nullptr;};
      inline bool getMatched() const { DARABONBA_PTR_GET_DEFAULT(matched_, false) };
      inline Trace& setMatched(bool matched) { DARABONBA_PTR_SET_VALUE(matched_, matched) };


      // stepModuleName Field Functions 
      bool hasStepModuleName() const { return this->stepModuleName_ != nullptr;};
      void deleteStepModuleName() { this->stepModuleName_ = nullptr;};
      inline string getStepModuleName() const { DARABONBA_PTR_GET_DEFAULT(stepModuleName_, "") };
      inline Trace& setStepModuleName(string stepModuleName) { DARABONBA_PTR_SET_VALUE(stepModuleName_, stepModuleName) };


      // trace Field Functions 
      bool hasTrace() const { return this->trace_ != nullptr;};
      void deleteTrace() { this->trace_ = nullptr;};
      inline const vector<Trace::TraceItem> & getTrace() const { DARABONBA_PTR_GET_CONST(trace_, vector<Trace::TraceItem>) };
      inline vector<Trace::TraceItem> getTrace() { DARABONBA_PTR_GET(trace_, vector<Trace::TraceItem>) };
      inline Trace& setTrace(const vector<Trace::TraceItem> & trace) { DARABONBA_PTR_SET_VALUE(trace_, trace) };
      inline Trace& setTrace(vector<Trace::TraceItem> && trace) { DARABONBA_PTR_SET_RVALUE(trace_, trace) };


    protected:
      // Indicates whether the module is matched. Valid values: true and false.
      shared_ptr<bool> matched_ {};
      // The feature module.
      shared_ptr<string> stepModuleName_ {};
      // The matching results of rules in the feature module.
      shared_ptr<vector<Trace::TraceItem>> trace_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statusCode_ == nullptr && this->success_ == nullptr && this->trace_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TraceSiteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline TraceSiteResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TraceSiteResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // trace Field Functions 
    bool hasTrace() const { return this->trace_ != nullptr;};
    void deleteTrace() { this->trace_ = nullptr;};
    inline const vector<TraceSiteResponseBody::Trace> & getTrace() const { DARABONBA_PTR_GET_CONST(trace_, vector<TraceSiteResponseBody::Trace>) };
    inline vector<TraceSiteResponseBody::Trace> getTrace() { DARABONBA_PTR_GET(trace_, vector<TraceSiteResponseBody::Trace>) };
    inline TraceSiteResponseBody& setTrace(const vector<TraceSiteResponseBody::Trace> & trace) { DARABONBA_PTR_SET_VALUE(trace_, trace) };
    inline TraceSiteResponseBody& setTrace(vector<TraceSiteResponseBody::Trace> && trace) { DARABONBA_PTR_SET_RVALUE(trace_, trace) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The HTTP status code of the request.
    shared_ptr<int32_t> statusCode_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The trace information of the call chain.
    shared_ptr<vector<TraceSiteResponseBody::Trace>> trace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
