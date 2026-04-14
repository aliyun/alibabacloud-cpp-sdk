// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeRulesResponseBody() = default ;
    DescribeRulesResponseBody(const DescribeRulesResponseBody &) = default ;
    DescribeRulesResponseBody(DescribeRulesResponseBody &&) = default ;
    DescribeRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRulesResponseBody() = default ;
    DescribeRulesResponseBody& operator=(const DescribeRulesResponseBody &) = default ;
    DescribeRulesResponseBody& operator=(DescribeRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(Rule, rule_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
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
      class Rule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rule& obj) { 
          DARABONBA_PTR_TO_JSON(Cookie, cookie_);
          DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
          DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
          DARABONBA_PTR_TO_JSON(HealthCheckDomain, healthCheckDomain_);
          DARABONBA_PTR_TO_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
          DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
          DARABONBA_PTR_TO_JSON(HealthCheckTimeout, healthCheckTimeout_);
          DARABONBA_PTR_TO_JSON(HealthCheckURI, healthCheckURI_);
          DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
          DARABONBA_PTR_TO_JSON(ListenerSync, listenerSync_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
          DARABONBA_PTR_TO_JSON(StickySession, stickySession_);
          DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
          DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, Rule& obj) { 
          DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
          DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
          DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
          DARABONBA_PTR_FROM_JSON(HealthCheckDomain, healthCheckDomain_);
          DARABONBA_PTR_FROM_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
          DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
          DARABONBA_PTR_FROM_JSON(HealthCheckTimeout, healthCheckTimeout_);
          DARABONBA_PTR_FROM_JSON(HealthCheckURI, healthCheckURI_);
          DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
          DARABONBA_PTR_FROM_JSON(ListenerSync, listenerSync_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
          DARABONBA_PTR_FROM_JSON(StickySession, stickySession_);
          DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
          DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
        };
        Rule() = default ;
        Rule(const Rule &) = default ;
        Rule(Rule &&) = default ;
        Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rule() = default ;
        Rule& operator=(const Rule &) = default ;
        Rule& operator=(Rule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cookie_ == nullptr
        && this->cookieTimeout_ == nullptr && this->domain_ == nullptr && this->healthCheck_ == nullptr && this->healthCheckConnectPort_ == nullptr && this->healthCheckDomain_ == nullptr
        && this->healthCheckHttpCode_ == nullptr && this->healthCheckInterval_ == nullptr && this->healthCheckTimeout_ == nullptr && this->healthCheckURI_ == nullptr && this->healthyThreshold_ == nullptr
        && this->listenerSync_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->scheduler_ == nullptr && this->stickySession_ == nullptr
        && this->stickySessionType_ == nullptr && this->unhealthyThreshold_ == nullptr && this->url_ == nullptr && this->VServerGroupId_ == nullptr; };
        // cookie Field Functions 
        bool hasCookie() const { return this->cookie_ != nullptr;};
        void deleteCookie() { this->cookie_ = nullptr;};
        inline string getCookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
        inline Rule& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


        // cookieTimeout Field Functions 
        bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
        void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
        inline int32_t getCookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
        inline Rule& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline Rule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // healthCheck Field Functions 
        bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
        void deleteHealthCheck() { this->healthCheck_ = nullptr;};
        inline string getHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
        inline Rule& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


        // healthCheckConnectPort Field Functions 
        bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
        void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
        inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
        inline Rule& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


        // healthCheckDomain Field Functions 
        bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
        void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
        inline string getHealthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
        inline Rule& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


        // healthCheckHttpCode Field Functions 
        bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
        void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
        inline string getHealthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
        inline Rule& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


        // healthCheckInterval Field Functions 
        bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
        void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
        inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
        inline Rule& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


        // healthCheckTimeout Field Functions 
        bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
        void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
        inline int32_t getHealthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
        inline Rule& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


        // healthCheckURI Field Functions 
        bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
        void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
        inline string getHealthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
        inline Rule& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


        // healthyThreshold Field Functions 
        bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
        void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
        inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
        inline Rule& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


        // listenerSync Field Functions 
        bool hasListenerSync() const { return this->listenerSync_ != nullptr;};
        void deleteListenerSync() { this->listenerSync_ = nullptr;};
        inline string getListenerSync() const { DARABONBA_PTR_GET_DEFAULT(listenerSync_, "") };
        inline Rule& setListenerSync(string listenerSync) { DARABONBA_PTR_SET_VALUE(listenerSync_, listenerSync) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline Rule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Rule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // scheduler Field Functions 
        bool hasScheduler() const { return this->scheduler_ != nullptr;};
        void deleteScheduler() { this->scheduler_ = nullptr;};
        inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
        inline Rule& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


        // stickySession Field Functions 
        bool hasStickySession() const { return this->stickySession_ != nullptr;};
        void deleteStickySession() { this->stickySession_ = nullptr;};
        inline string getStickySession() const { DARABONBA_PTR_GET_DEFAULT(stickySession_, "") };
        inline Rule& setStickySession(string stickySession) { DARABONBA_PTR_SET_VALUE(stickySession_, stickySession) };


        // stickySessionType Field Functions 
        bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
        void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
        inline string getStickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
        inline Rule& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


        // unhealthyThreshold Field Functions 
        bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
        void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
        inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
        inline Rule& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Rule& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // VServerGroupId Field Functions 
        bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
        void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
        inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
        inline Rule& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


      protected:
        shared_ptr<string> cookie_ {};
        shared_ptr<int32_t> cookieTimeout_ {};
        shared_ptr<string> domain_ {};
        shared_ptr<string> healthCheck_ {};
        shared_ptr<int32_t> healthCheckConnectPort_ {};
        shared_ptr<string> healthCheckDomain_ {};
        shared_ptr<string> healthCheckHttpCode_ {};
        shared_ptr<int32_t> healthCheckInterval_ {};
        shared_ptr<int32_t> healthCheckTimeout_ {};
        shared_ptr<string> healthCheckURI_ {};
        shared_ptr<int32_t> healthyThreshold_ {};
        shared_ptr<string> listenerSync_ {};
        shared_ptr<string> ruleId_ {};
        shared_ptr<string> ruleName_ {};
        shared_ptr<string> scheduler_ {};
        shared_ptr<string> stickySession_ {};
        shared_ptr<string> stickySessionType_ {};
        shared_ptr<int32_t> unhealthyThreshold_ {};
        shared_ptr<string> url_ {};
        shared_ptr<string> VServerGroupId_ {};
      };

      virtual bool empty() const override { return this->rule_ == nullptr; };
      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline const vector<Rules::Rule> & getRule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Rules::Rule>) };
      inline vector<Rules::Rule> getRule() { DARABONBA_PTR_GET(rule_, vector<Rules::Rule>) };
      inline Rules& setRule(const vector<Rules::Rule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
      inline Rules& setRule(vector<Rules::Rule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


    protected:
      shared_ptr<vector<Rules::Rule>> rule_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->rules_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const DescribeRulesResponseBody::Rules & getRules() const { DARABONBA_PTR_GET_CONST(rules_, DescribeRulesResponseBody::Rules) };
    inline DescribeRulesResponseBody::Rules getRules() { DARABONBA_PTR_GET(rules_, DescribeRulesResponseBody::Rules) };
    inline DescribeRulesResponseBody& setRules(const DescribeRulesResponseBody::Rules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeRulesResponseBody& setRules(DescribeRulesResponseBody::Rules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeRulesResponseBody::Rules> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
