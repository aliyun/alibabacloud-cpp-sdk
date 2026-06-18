// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListLoadBalancersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListLoadBalancersResponseBody() = default ;
    ListLoadBalancersResponseBody(const ListLoadBalancersResponseBody &) = default ;
    ListLoadBalancersResponseBody(ListLoadBalancersResponseBody &&) = default ;
    ListLoadBalancersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersResponseBody() = default ;
    ListLoadBalancersResponseBody& operator=(const ListLoadBalancersResponseBody &) = default ;
    ListLoadBalancersResponseBody& operator=(ListLoadBalancersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoadBalancers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalancers& obj) { 
        DARABONBA_PTR_TO_JSON(AdaptiveRouting, adaptiveRouting_);
        DARABONBA_PTR_TO_JSON(DefaultPools, defaultPools_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(FallbackPool, fallbackPool_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Monitor, monitor_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RandomSteering, randomSteering_);
        DARABONBA_ANY_TO_JSON(RegionPools, regionPools_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(SessionAffinity, sessionAffinity_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SteeringPolicy, steeringPolicy_);
        DARABONBA_ANY_TO_JSON(SubRegionPools, subRegionPools_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      };
      friend void from_json(const Darabonba::Json& j, LoadBalancers& obj) { 
        DARABONBA_PTR_FROM_JSON(AdaptiveRouting, adaptiveRouting_);
        DARABONBA_PTR_FROM_JSON(DefaultPools, defaultPools_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(FallbackPool, fallbackPool_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Monitor, monitor_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RandomSteering, randomSteering_);
        DARABONBA_ANY_FROM_JSON(RegionPools, regionPools_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(SessionAffinity, sessionAffinity_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SteeringPolicy, steeringPolicy_);
        DARABONBA_ANY_FROM_JSON(SubRegionPools, subRegionPools_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      };
      LoadBalancers() = default ;
      LoadBalancers(const LoadBalancers &) = default ;
      LoadBalancers(LoadBalancers &&) = default ;
      LoadBalancers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadBalancers() = default ;
      LoadBalancers& operator=(const LoadBalancers &) = default ;
      LoadBalancers& operator=(LoadBalancers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(FixedResponse, fixedResponse_);
          DARABONBA_ANY_TO_JSON(Overrides, overrides_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
          DARABONBA_PTR_TO_JSON(Terminates, terminates_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(FixedResponse, fixedResponse_);
          DARABONBA_ANY_FROM_JSON(Overrides, overrides_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
          DARABONBA_PTR_FROM_JSON(Terminates, terminates_);
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
        class FixedResponse : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FixedResponse& obj) { 
            DARABONBA_PTR_TO_JSON(ContentType, contentType_);
            DARABONBA_PTR_TO_JSON(Location, location_);
            DARABONBA_PTR_TO_JSON(MessageBody, messageBody_);
            DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
          };
          friend void from_json(const Darabonba::Json& j, FixedResponse& obj) { 
            DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
            DARABONBA_PTR_FROM_JSON(Location, location_);
            DARABONBA_PTR_FROM_JSON(MessageBody, messageBody_);
            DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
          };
          FixedResponse() = default ;
          FixedResponse(const FixedResponse &) = default ;
          FixedResponse(FixedResponse &&) = default ;
          FixedResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FixedResponse() = default ;
          FixedResponse& operator=(const FixedResponse &) = default ;
          FixedResponse& operator=(FixedResponse &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contentType_ == nullptr
        && this->location_ == nullptr && this->messageBody_ == nullptr && this->statusCode_ == nullptr; };
          // contentType Field Functions 
          bool hasContentType() const { return this->contentType_ != nullptr;};
          void deleteContentType() { this->contentType_ = nullptr;};
          inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
          inline FixedResponse& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


          // location Field Functions 
          bool hasLocation() const { return this->location_ != nullptr;};
          void deleteLocation() { this->location_ = nullptr;};
          inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
          inline FixedResponse& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


          // messageBody Field Functions 
          bool hasMessageBody() const { return this->messageBody_ != nullptr;};
          void deleteMessageBody() { this->messageBody_ = nullptr;};
          inline string getMessageBody() const { DARABONBA_PTR_GET_DEFAULT(messageBody_, "") };
          inline FixedResponse& setMessageBody(string messageBody) { DARABONBA_PTR_SET_VALUE(messageBody_, messageBody) };


          // statusCode Field Functions 
          bool hasStatusCode() const { return this->statusCode_ != nullptr;};
          void deleteStatusCode() { this->statusCode_ = nullptr;};
          inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
          inline FixedResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


        protected:
          // The `Content-Type` header.
          shared_ptr<string> contentType_ {};
          // The `Location` response header.
          shared_ptr<string> location_ {};
          // The content of the response body.
          shared_ptr<string> messageBody_ {};
          // The status code.
          shared_ptr<int32_t> statusCode_ {};
        };

        virtual bool empty() const override { return this->fixedResponse_ == nullptr
        && this->overrides_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr
        && this->terminates_ == nullptr; };
        // fixedResponse Field Functions 
        bool hasFixedResponse() const { return this->fixedResponse_ != nullptr;};
        void deleteFixedResponse() { this->fixedResponse_ = nullptr;};
        inline const Rules::FixedResponse & getFixedResponse() const { DARABONBA_PTR_GET_CONST(fixedResponse_, Rules::FixedResponse) };
        inline Rules::FixedResponse getFixedResponse() { DARABONBA_PTR_GET(fixedResponse_, Rules::FixedResponse) };
        inline Rules& setFixedResponse(const Rules::FixedResponse & fixedResponse) { DARABONBA_PTR_SET_VALUE(fixedResponse_, fixedResponse) };
        inline Rules& setFixedResponse(Rules::FixedResponse && fixedResponse) { DARABONBA_PTR_SET_RVALUE(fixedResponse_, fixedResponse) };


        // overrides Field Functions 
        bool hasOverrides() const { return this->overrides_ != nullptr;};
        void deleteOverrides() { this->overrides_ = nullptr;};
        inline         const Darabonba::Json & getOverrides() const { DARABONBA_GET(overrides_) };
        Darabonba::Json & getOverrides() { DARABONBA_GET(overrides_) };
        inline Rules& setOverrides(const Darabonba::Json & overrides) { DARABONBA_SET_VALUE(overrides_, overrides) };
        inline Rules& setOverrides(Darabonba::Json && overrides) { DARABONBA_SET_RVALUE(overrides_, overrides) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline Rules& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline Rules& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Rules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
        inline Rules& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


        // terminates Field Functions 
        bool hasTerminates() const { return this->terminates_ != nullptr;};
        void deleteTerminates() { this->terminates_ = nullptr;};
        inline bool getTerminates() const { DARABONBA_PTR_GET_DEFAULT(terminates_, false) };
        inline Rules& setTerminates(bool terminates) { DARABONBA_PTR_SET_VALUE(terminates_, terminates) };


      protected:
        // Specifies the response to return when a rule matches.
        shared_ptr<Rules::FixedResponse> fixedResponse_ {};
        // The load balancer settings to override when a rule matches. Any field you specify overwrites the load balancer\\"s corresponding setting.
        Darabonba::Json overrides_ {};
        // The rule expression that matches user requests. This parameter is not required for global configurations. Use cases:
        // 
        // - To match all incoming requests, set the value to `true`.
        // 
        // - To match specific requests, set the value to a custom expression, such as `(http.host eq "video.example.com")`.
        shared_ptr<string> rule_ {};
        // Indicates whether the rule is enabled. This parameter is not required for global configurations. Valid values:
        // 
        // - `on`: Enabled.
        // 
        // - `off`: Disabled.
        shared_ptr<string> ruleEnable_ {};
        // The name of the rule. This parameter is not required for global configurations.
        shared_ptr<string> ruleName_ {};
        // The execution priority of the rule. Higher values indicate higher priority.
        shared_ptr<int32_t> sequence_ {};
        // Specifies whether to stop executing subsequent rules after this rule matches.
        // 
        // - `true`: Stops executing subsequent rules.
        // 
        // - `false`: Continues to execute subsequent rules. This is the default value.
        shared_ptr<bool> terminates_ {};
      };

      class RandomSteering : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RandomSteering& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultWeight, defaultWeight_);
          DARABONBA_PTR_TO_JSON(PoolWeights, poolWeights_);
        };
        friend void from_json(const Darabonba::Json& j, RandomSteering& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultWeight, defaultWeight_);
          DARABONBA_PTR_FROM_JSON(PoolWeights, poolWeights_);
        };
        RandomSteering() = default ;
        RandomSteering(const RandomSteering &) = default ;
        RandomSteering(RandomSteering &&) = default ;
        RandomSteering(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RandomSteering() = default ;
        RandomSteering& operator=(const RandomSteering &) = default ;
        RandomSteering& operator=(RandomSteering &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultWeight_ == nullptr
        && this->poolWeights_ == nullptr; };
        // defaultWeight Field Functions 
        bool hasDefaultWeight() const { return this->defaultWeight_ != nullptr;};
        void deleteDefaultWeight() { this->defaultWeight_ = nullptr;};
        inline int32_t getDefaultWeight() const { DARABONBA_PTR_GET_DEFAULT(defaultWeight_, 0) };
        inline RandomSteering& setDefaultWeight(int32_t defaultWeight) { DARABONBA_PTR_SET_VALUE(defaultWeight_, defaultWeight) };


        // poolWeights Field Functions 
        bool hasPoolWeights() const { return this->poolWeights_ != nullptr;};
        void deletePoolWeights() { this->poolWeights_ = nullptr;};
        inline const map<string, int32_t> & getPoolWeights() const { DARABONBA_PTR_GET_CONST(poolWeights_, map<string, int32_t>) };
        inline map<string, int32_t> getPoolWeights() { DARABONBA_PTR_GET(poolWeights_, map<string, int32_t>) };
        inline RandomSteering& setPoolWeights(const map<string, int32_t> & poolWeights) { DARABONBA_PTR_SET_VALUE(poolWeights_, poolWeights) };
        inline RandomSteering& setPoolWeights(map<string, int32_t> && poolWeights) { DARABONBA_PTR_SET_RVALUE(poolWeights_, poolWeights) };


      protected:
        // The default weight applied to any pool not defined in `PoolWeights`. The weight determines the proportion of traffic sent to the pool.
        shared_ptr<int32_t> defaultWeight_ {};
        // The weight configuration for each backend pool, where the key is the pool ID and the value is the weight.
        shared_ptr<map<string, int32_t>> poolWeights_ {};
      };

      class Monitor : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Monitor& obj) { 
          DARABONBA_PTR_TO_JSON(ConsecutiveDown, consecutiveDown_);
          DARABONBA_PTR_TO_JSON(ConsecutiveUp, consecutiveUp_);
          DARABONBA_PTR_TO_JSON(ExpectedCodes, expectedCodes_);
          DARABONBA_PTR_TO_JSON(FollowRedirects, followRedirects_);
          DARABONBA_ANY_TO_JSON(Header, header_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(MonitoringRegion, monitoringRegion_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Monitor& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsecutiveDown, consecutiveDown_);
          DARABONBA_PTR_FROM_JSON(ConsecutiveUp, consecutiveUp_);
          DARABONBA_PTR_FROM_JSON(ExpectedCodes, expectedCodes_);
          DARABONBA_PTR_FROM_JSON(FollowRedirects, followRedirects_);
          DARABONBA_ANY_FROM_JSON(Header, header_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(MonitoringRegion, monitoringRegion_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Monitor() = default ;
        Monitor(const Monitor &) = default ;
        Monitor(Monitor &&) = default ;
        Monitor(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Monitor() = default ;
        Monitor& operator=(const Monitor &) = default ;
        Monitor& operator=(Monitor &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consecutiveDown_ == nullptr
        && this->consecutiveUp_ == nullptr && this->expectedCodes_ == nullptr && this->followRedirects_ == nullptr && this->header_ == nullptr && this->interval_ == nullptr
        && this->method_ == nullptr && this->monitoringRegion_ == nullptr && this->path_ == nullptr && this->port_ == nullptr && this->timeout_ == nullptr
        && this->type_ == nullptr; };
        // consecutiveDown Field Functions 
        bool hasConsecutiveDown() const { return this->consecutiveDown_ != nullptr;};
        void deleteConsecutiveDown() { this->consecutiveDown_ = nullptr;};
        inline int32_t getConsecutiveDown() const { DARABONBA_PTR_GET_DEFAULT(consecutiveDown_, 0) };
        inline Monitor& setConsecutiveDown(int32_t consecutiveDown) { DARABONBA_PTR_SET_VALUE(consecutiveDown_, consecutiveDown) };


        // consecutiveUp Field Functions 
        bool hasConsecutiveUp() const { return this->consecutiveUp_ != nullptr;};
        void deleteConsecutiveUp() { this->consecutiveUp_ = nullptr;};
        inline int32_t getConsecutiveUp() const { DARABONBA_PTR_GET_DEFAULT(consecutiveUp_, 0) };
        inline Monitor& setConsecutiveUp(int32_t consecutiveUp) { DARABONBA_PTR_SET_VALUE(consecutiveUp_, consecutiveUp) };


        // expectedCodes Field Functions 
        bool hasExpectedCodes() const { return this->expectedCodes_ != nullptr;};
        void deleteExpectedCodes() { this->expectedCodes_ = nullptr;};
        inline string getExpectedCodes() const { DARABONBA_PTR_GET_DEFAULT(expectedCodes_, "") };
        inline Monitor& setExpectedCodes(string expectedCodes) { DARABONBA_PTR_SET_VALUE(expectedCodes_, expectedCodes) };


        // followRedirects Field Functions 
        bool hasFollowRedirects() const { return this->followRedirects_ != nullptr;};
        void deleteFollowRedirects() { this->followRedirects_ = nullptr;};
        inline bool getFollowRedirects() const { DARABONBA_PTR_GET_DEFAULT(followRedirects_, false) };
        inline Monitor& setFollowRedirects(bool followRedirects) { DARABONBA_PTR_SET_VALUE(followRedirects_, followRedirects) };


        // header Field Functions 
        bool hasHeader() const { return this->header_ != nullptr;};
        void deleteHeader() { this->header_ = nullptr;};
        inline         const Darabonba::Json & getHeader() const { DARABONBA_GET(header_) };
        Darabonba::Json & getHeader() { DARABONBA_GET(header_) };
        inline Monitor& setHeader(const Darabonba::Json & header) { DARABONBA_SET_VALUE(header_, header) };
        inline Monitor& setHeader(Darabonba::Json && header) { DARABONBA_SET_RVALUE(header_, header) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
        inline Monitor& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline Monitor& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // monitoringRegion Field Functions 
        bool hasMonitoringRegion() const { return this->monitoringRegion_ != nullptr;};
        void deleteMonitoringRegion() { this->monitoringRegion_ = nullptr;};
        inline string getMonitoringRegion() const { DARABONBA_PTR_GET_DEFAULT(monitoringRegion_, "") };
        inline Monitor& setMonitoringRegion(string monitoringRegion) { DARABONBA_PTR_SET_VALUE(monitoringRegion_, monitoringRegion) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline Monitor& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Monitor& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
        inline Monitor& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Monitor& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The number of consecutive failed health checks required to consider a pool unhealthy. For example, `5`.
        shared_ptr<int32_t> consecutiveDown_ {};
        // The number of consecutive successful health checks required to consider a pool healthy. For example, `3`.
        shared_ptr<int32_t> consecutiveUp_ {};
        // The expected HTTP status codes that indicate a successful health check, such as `200` or `202`.
        shared_ptr<string> expectedCodes_ {};
        // Indicates whether the health check should follow redirects.
        // 
        // - `true`: Follows redirects.
        // 
        // - `false`: Does not follow redirects.
        shared_ptr<bool> followRedirects_ {};
        // The HTTP headers to include in the health check probe.
        Darabonba::Json header_ {};
        // The interval between health checks, in seconds.
        shared_ptr<int32_t> interval_ {};
        // The method used for the health check.
        shared_ptr<string> method_ {};
        // The probe locations for health checks. The default is `Global`. Valid values:
        // 
        // - `Global`: Sends probes from global locations.
        // 
        // - `ChineseMainland`: Sends probes from locations within the Chinese mainland.
        // 
        // - `OutsideChineseMainland`: Sends probes from global locations outside the Chinese mainland.
        shared_ptr<string> monitoringRegion_ {};
        // The path to request for the health check.
        shared_ptr<string> path_ {};
        // The destination port for the health check.
        shared_ptr<int32_t> port_ {};
        // The timeout for a single health check, in seconds.
        shared_ptr<int32_t> timeout_ {};
        // The protocol for the health check, such as `HTTP`. Set to `off` to disable health checks.
        shared_ptr<string> type_ {};
      };

      class AdaptiveRouting : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdaptiveRouting& obj) { 
          DARABONBA_PTR_TO_JSON(FailoverAcrossPools, failoverAcrossPools_);
          DARABONBA_PTR_TO_JSON(OriginLevelRetry, originLevelRetry_);
        };
        friend void from_json(const Darabonba::Json& j, AdaptiveRouting& obj) { 
          DARABONBA_PTR_FROM_JSON(FailoverAcrossPools, failoverAcrossPools_);
          DARABONBA_PTR_FROM_JSON(OriginLevelRetry, originLevelRetry_);
        };
        AdaptiveRouting() = default ;
        AdaptiveRouting(const AdaptiveRouting &) = default ;
        AdaptiveRouting(AdaptiveRouting &&) = default ;
        AdaptiveRouting(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdaptiveRouting() = default ;
        AdaptiveRouting& operator=(const AdaptiveRouting &) = default ;
        AdaptiveRouting& operator=(AdaptiveRouting &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->failoverAcrossPools_ == nullptr
        && this->originLevelRetry_ == nullptr; };
        // failoverAcrossPools Field Functions 
        bool hasFailoverAcrossPools() const { return this->failoverAcrossPools_ != nullptr;};
        void deleteFailoverAcrossPools() { this->failoverAcrossPools_ = nullptr;};
        inline bool getFailoverAcrossPools() const { DARABONBA_PTR_GET_DEFAULT(failoverAcrossPools_, false) };
        inline AdaptiveRouting& setFailoverAcrossPools(bool failoverAcrossPools) { DARABONBA_PTR_SET_VALUE(failoverAcrossPools_, failoverAcrossPools) };


        // originLevelRetry Field Functions 
        bool hasOriginLevelRetry() const { return this->originLevelRetry_ != nullptr;};
        void deleteOriginLevelRetry() { this->originLevelRetry_ = nullptr;};
        inline bool getOriginLevelRetry() const { DARABONBA_PTR_GET_DEFAULT(originLevelRetry_, false) };
        inline AdaptiveRouting& setOriginLevelRetry(bool originLevelRetry) { DARABONBA_PTR_SET_VALUE(originLevelRetry_, originLevelRetry) };


      protected:
        // Indicates whether to enable failover across pools.
        // 
        // - `true`: Enabled.
        // 
        // - `false`: Disabled.
        shared_ptr<bool> failoverAcrossPools_ {};
        shared_ptr<bool> originLevelRetry_ {};
      };

      virtual bool empty() const override { return this->adaptiveRouting_ == nullptr
        && this->defaultPools_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr && this->fallbackPool_ == nullptr && this->id_ == nullptr
        && this->monitor_ == nullptr && this->name_ == nullptr && this->randomSteering_ == nullptr && this->regionPools_ == nullptr && this->rules_ == nullptr
        && this->sessionAffinity_ == nullptr && this->siteId_ == nullptr && this->status_ == nullptr && this->steeringPolicy_ == nullptr && this->subRegionPools_ == nullptr
        && this->ttl_ == nullptr; };
      // adaptiveRouting Field Functions 
      bool hasAdaptiveRouting() const { return this->adaptiveRouting_ != nullptr;};
      void deleteAdaptiveRouting() { this->adaptiveRouting_ = nullptr;};
      inline const LoadBalancers::AdaptiveRouting & getAdaptiveRouting() const { DARABONBA_PTR_GET_CONST(adaptiveRouting_, LoadBalancers::AdaptiveRouting) };
      inline LoadBalancers::AdaptiveRouting getAdaptiveRouting() { DARABONBA_PTR_GET(adaptiveRouting_, LoadBalancers::AdaptiveRouting) };
      inline LoadBalancers& setAdaptiveRouting(const LoadBalancers::AdaptiveRouting & adaptiveRouting) { DARABONBA_PTR_SET_VALUE(adaptiveRouting_, adaptiveRouting) };
      inline LoadBalancers& setAdaptiveRouting(LoadBalancers::AdaptiveRouting && adaptiveRouting) { DARABONBA_PTR_SET_RVALUE(adaptiveRouting_, adaptiveRouting) };


      // defaultPools Field Functions 
      bool hasDefaultPools() const { return this->defaultPools_ != nullptr;};
      void deleteDefaultPools() { this->defaultPools_ = nullptr;};
      inline const vector<int64_t> & getDefaultPools() const { DARABONBA_PTR_GET_CONST(defaultPools_, vector<int64_t>) };
      inline vector<int64_t> getDefaultPools() { DARABONBA_PTR_GET(defaultPools_, vector<int64_t>) };
      inline LoadBalancers& setDefaultPools(const vector<int64_t> & defaultPools) { DARABONBA_PTR_SET_VALUE(defaultPools_, defaultPools) };
      inline LoadBalancers& setDefaultPools(vector<int64_t> && defaultPools) { DARABONBA_PTR_SET_RVALUE(defaultPools_, defaultPools) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline LoadBalancers& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline LoadBalancers& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // fallbackPool Field Functions 
      bool hasFallbackPool() const { return this->fallbackPool_ != nullptr;};
      void deleteFallbackPool() { this->fallbackPool_ = nullptr;};
      inline int64_t getFallbackPool() const { DARABONBA_PTR_GET_DEFAULT(fallbackPool_, 0L) };
      inline LoadBalancers& setFallbackPool(int64_t fallbackPool) { DARABONBA_PTR_SET_VALUE(fallbackPool_, fallbackPool) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline LoadBalancers& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // monitor Field Functions 
      bool hasMonitor() const { return this->monitor_ != nullptr;};
      void deleteMonitor() { this->monitor_ = nullptr;};
      inline const LoadBalancers::Monitor & getMonitor() const { DARABONBA_PTR_GET_CONST(monitor_, LoadBalancers::Monitor) };
      inline LoadBalancers::Monitor getMonitor() { DARABONBA_PTR_GET(monitor_, LoadBalancers::Monitor) };
      inline LoadBalancers& setMonitor(const LoadBalancers::Monitor & monitor) { DARABONBA_PTR_SET_VALUE(monitor_, monitor) };
      inline LoadBalancers& setMonitor(LoadBalancers::Monitor && monitor) { DARABONBA_PTR_SET_RVALUE(monitor_, monitor) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline LoadBalancers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // randomSteering Field Functions 
      bool hasRandomSteering() const { return this->randomSteering_ != nullptr;};
      void deleteRandomSteering() { this->randomSteering_ = nullptr;};
      inline const LoadBalancers::RandomSteering & getRandomSteering() const { DARABONBA_PTR_GET_CONST(randomSteering_, LoadBalancers::RandomSteering) };
      inline LoadBalancers::RandomSteering getRandomSteering() { DARABONBA_PTR_GET(randomSteering_, LoadBalancers::RandomSteering) };
      inline LoadBalancers& setRandomSteering(const LoadBalancers::RandomSteering & randomSteering) { DARABONBA_PTR_SET_VALUE(randomSteering_, randomSteering) };
      inline LoadBalancers& setRandomSteering(LoadBalancers::RandomSteering && randomSteering) { DARABONBA_PTR_SET_RVALUE(randomSteering_, randomSteering) };


      // regionPools Field Functions 
      bool hasRegionPools() const { return this->regionPools_ != nullptr;};
      void deleteRegionPools() { this->regionPools_ = nullptr;};
      inline       const Darabonba::Json & getRegionPools() const { DARABONBA_GET(regionPools_) };
      Darabonba::Json & getRegionPools() { DARABONBA_GET(regionPools_) };
      inline LoadBalancers& setRegionPools(const Darabonba::Json & regionPools) { DARABONBA_SET_VALUE(regionPools_, regionPools) };
      inline LoadBalancers& setRegionPools(Darabonba::Json && regionPools) { DARABONBA_SET_RVALUE(regionPools_, regionPools) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<LoadBalancers::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<LoadBalancers::Rules>) };
      inline vector<LoadBalancers::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<LoadBalancers::Rules>) };
      inline LoadBalancers& setRules(const vector<LoadBalancers::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline LoadBalancers& setRules(vector<LoadBalancers::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // sessionAffinity Field Functions 
      bool hasSessionAffinity() const { return this->sessionAffinity_ != nullptr;};
      void deleteSessionAffinity() { this->sessionAffinity_ = nullptr;};
      inline string getSessionAffinity() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinity_, "") };
      inline LoadBalancers& setSessionAffinity(string sessionAffinity) { DARABONBA_PTR_SET_VALUE(sessionAffinity_, sessionAffinity) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
      inline LoadBalancers& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline LoadBalancers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // steeringPolicy Field Functions 
      bool hasSteeringPolicy() const { return this->steeringPolicy_ != nullptr;};
      void deleteSteeringPolicy() { this->steeringPolicy_ = nullptr;};
      inline string getSteeringPolicy() const { DARABONBA_PTR_GET_DEFAULT(steeringPolicy_, "") };
      inline LoadBalancers& setSteeringPolicy(string steeringPolicy) { DARABONBA_PTR_SET_VALUE(steeringPolicy_, steeringPolicy) };


      // subRegionPools Field Functions 
      bool hasSubRegionPools() const { return this->subRegionPools_ != nullptr;};
      void deleteSubRegionPools() { this->subRegionPools_ = nullptr;};
      inline       const Darabonba::Json & getSubRegionPools() const { DARABONBA_GET(subRegionPools_) };
      Darabonba::Json & getSubRegionPools() { DARABONBA_GET(subRegionPools_) };
      inline LoadBalancers& setSubRegionPools(const Darabonba::Json & subRegionPools) { DARABONBA_SET_VALUE(subRegionPools_, subRegionPools) };
      inline LoadBalancers& setSubRegionPools(Darabonba::Json && subRegionPools) { DARABONBA_SET_RVALUE(subRegionPools_, subRegionPools) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline LoadBalancers& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    protected:
      // The configuration for failover across pools.
      shared_ptr<LoadBalancers::AdaptiveRouting> adaptiveRouting_ {};
      // A list of default pool IDs.
      shared_ptr<vector<int64_t>> defaultPools_ {};
      // The description of the load balancer.
      shared_ptr<string> description_ {};
      // Indicates whether the load balancer is enabled.
      // 
      // - `true`: Enabled.
      // 
      // - `false`: Disabled.
      shared_ptr<bool> enabled_ {};
      // The ID of the fallback pool. The load balancer routes traffic to this pool when all other pools are unavailable.
      shared_ptr<int64_t> fallbackPool_ {};
      // The unique ID of the load balancer.
      shared_ptr<int64_t> id_ {};
      // The health check configuration.
      shared_ptr<LoadBalancers::Monitor> monitor_ {};
      // The name of the load balancer.
      shared_ptr<string> name_ {};
      // The configuration for weighted round robin, which controls traffic distribution among pools.
      shared_ptr<LoadBalancers::RandomSteering> randomSteering_ {};
      // The pools that correspond to regions.
      Darabonba::Json regionPools_ {};
      // A list of rule configurations that define behavior for specific conditions.
      shared_ptr<vector<LoadBalancers::Rules>> rules_ {};
      // The session affinity setting. Valid values:
      // 
      // - `off`: Session affinity is disabled.
      // 
      // - `ip`: Enables session affinity based on the client\\"s IP address.
      // 
      // - `cookie`: Enables session affinity based on a cookie.
      shared_ptr<string> sessionAffinity_ {};
      // The site ID of the load balancer.
      shared_ptr<int64_t> siteId_ {};
      // The status of the load balancer.
      shared_ptr<string> status_ {};
      // The load balancing policy.
      shared_ptr<string> steeringPolicy_ {};
      // The pools that correspond to sub-regions. If multiple sub-regions share the same set of pools, you can use a comma-separated list of sub-region codes as the key.
      Darabonba::Json subRegionPools_ {};
      // The Time to Live (TTL) for the DNS record, in seconds. The default value is 30.
      shared_ptr<int32_t> ttl_ {};
    };

    virtual bool empty() const override { return this->loadBalancers_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // loadBalancers Field Functions 
    bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
    void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
    inline const vector<ListLoadBalancersResponseBody::LoadBalancers> & getLoadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<ListLoadBalancersResponseBody::LoadBalancers>) };
    inline vector<ListLoadBalancersResponseBody::LoadBalancers> getLoadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<ListLoadBalancersResponseBody::LoadBalancers>) };
    inline ListLoadBalancersResponseBody& setLoadBalancers(const vector<ListLoadBalancersResponseBody::LoadBalancers> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
    inline ListLoadBalancersResponseBody& setLoadBalancers(vector<ListLoadBalancersResponseBody::LoadBalancers> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLoadBalancersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLoadBalancersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLoadBalancersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLoadBalancersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListLoadBalancersResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // An array of load balancers.
    shared_ptr<vector<ListLoadBalancersResponseBody::LoadBalancers>> loadBalancers_ {};
    // The page number. This value matches the `PageNumber` request parameter.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries found.
    shared_ptr<int32_t> totalCount_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
