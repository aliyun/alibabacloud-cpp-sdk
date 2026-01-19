// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUEST_HPP_
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
  class CreateLoadBalancerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptiveRouting, adaptiveRouting_);
      DARABONBA_PTR_TO_JSON(DefaultPools, defaultPools_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(FallbackPool, fallbackPool_);
      DARABONBA_PTR_TO_JSON(Monitor, monitor_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RandomSteering, randomSteering_);
      DARABONBA_ANY_TO_JSON(RegionPools, regionPools_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SessionAffinity, sessionAffinity_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SteeringPolicy, steeringPolicy_);
      DARABONBA_ANY_TO_JSON(SubRegionPools, subRegionPools_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptiveRouting, adaptiveRouting_);
      DARABONBA_PTR_FROM_JSON(DefaultPools, defaultPools_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(FallbackPool, fallbackPool_);
      DARABONBA_PTR_FROM_JSON(Monitor, monitor_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RandomSteering, randomSteering_);
      DARABONBA_ANY_FROM_JSON(RegionPools, regionPools_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SessionAffinity, sessionAffinity_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SteeringPolicy, steeringPolicy_);
      DARABONBA_ANY_FROM_JSON(SubRegionPools, subRegionPools_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    CreateLoadBalancerRequest() = default ;
    CreateLoadBalancerRequest(const CreateLoadBalancerRequest &) = default ;
    CreateLoadBalancerRequest(CreateLoadBalancerRequest &&) = default ;
    CreateLoadBalancerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerRequest() = default ;
    CreateLoadBalancerRequest& operator=(const CreateLoadBalancerRequest &) = default ;
    CreateLoadBalancerRequest& operator=(CreateLoadBalancerRequest &&) = default ;
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
        // Content-Type field in the HTTP Header.
        shared_ptr<string> contentType_ {};
        // Location field in the HTTP response.
        shared_ptr<string> location_ {};
        // Response body value.
        shared_ptr<string> messageBody_ {};
        // Response status code.
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
      inline       const Darabonba::Json & getOverrides() const { DARABONBA_GET(overrides_) };
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
      // Execute a specified response after matching the rule.
      shared_ptr<Rules::FixedResponse> fixedResponse_ {};
      // Modify the corresponding load balancing configuration after matching the rule. The fields in the configuration will override the corresponding fields in the load balancer configuration.
      Darabonba::Json overrides_ {};
      // Rule content, using conditional expressions to match user requests. This parameter does not need to be set when adding global configurations. There are two usage scenarios:
      // - Match all incoming requests: Set the value to true
      // - Match specific requests: Set the value to a custom expression, e.g., (http.host eq \\"video.example.com\\")
      shared_ptr<string> rule_ {};
      // Rule switch. This parameter does not need to be set when adding global configurations. Value range:
      // - on: Enable.
      // - off: Disable.
      shared_ptr<string> ruleEnable_ {};
      // The name of the rule. This parameter does not need to be set when adding global configurations.
      shared_ptr<string> ruleName_ {};
      // The execution order of the rule. It can be left blank, in which case the rules will be executed in the order they appear in the list. If specified, it must be a positive integer, with higher values indicating higher priority.
      shared_ptr<int32_t> sequence_ {};
      // Whether to terminate the execution of subsequent rules.
      // 
      // - true: Yes.
      // - false: No, default value.
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
      // Default weight for all pools that do not have individual weights specified. The value range is an integer between 0 and 100.
      shared_ptr<int32_t> defaultWeight_ {};
      // Weight configuration for each backend server pool, with the key being the pool ID and the value being the weight coefficient. The weight coefficient represents the proportion of relative traffic distribution.
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
      inline       const Darabonba::Json & getHeader() const { DARABONBA_GET(header_) };
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
      // Number of consecutive failed probes required to consider the target unhealthy, such as `5`.
      shared_ptr<int32_t> consecutiveDown_ {};
      // Number of consecutive successful probes required to consider the target healthy, such as `3`.
      shared_ptr<int32_t> consecutiveUp_ {};
      // Expected status codes, such as `200,202`, which are successful HTTP responses.
      shared_ptr<string> expectedCodes_ {};
      // Whether to follow redirects.
      // 
      // - true: Yes.
      // - false: No.
      shared_ptr<bool> followRedirects_ {};
      // Header information included in the probe, which is an HTTP header.
      Darabonba::Json header_ {};
      // Monitoring interval, such as `60` seconds, which is the frequency of checks.
      shared_ptr<int32_t> interval_ {};
      // Monitor request method, such as `GET`, which is a method in the HTTP protocol.
      shared_ptr<string> method_ {};
      shared_ptr<string> monitoringRegion_ {};
      // Monitor check path, such as `/healthcheck`, which is an HTTP request path.
      shared_ptr<string> path_ {};
      // Origin server port.
      shared_ptr<int32_t> port_ {};
      // Application health check timeout, in seconds, with a value range of 1-10.
      shared_ptr<int32_t> timeout_ {};
      // Monitor protocol type, such as HTTP, used for health checks. When set to `off`, no check is performed.
      // 
      // - TCP
      // - UDP
      // - SMTP
      // - HTTPS
      // - HTTP
      // - ICMP Ping
      // - off
      shared_ptr<string> type_ {};
    };

    class AdaptiveRouting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdaptiveRouting& obj) { 
        DARABONBA_PTR_TO_JSON(FailoverAcrossPools, failoverAcrossPools_);
      };
      friend void from_json(const Darabonba::Json& j, AdaptiveRouting& obj) { 
        DARABONBA_PTR_FROM_JSON(FailoverAcrossPools, failoverAcrossPools_);
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
      virtual bool empty() const override { return this->failoverAcrossPools_ == nullptr; };
      // failoverAcrossPools Field Functions 
      bool hasFailoverAcrossPools() const { return this->failoverAcrossPools_ != nullptr;};
      void deleteFailoverAcrossPools() { this->failoverAcrossPools_ = nullptr;};
      inline bool getFailoverAcrossPools() const { DARABONBA_PTR_GET_DEFAULT(failoverAcrossPools_, false) };
      inline AdaptiveRouting& setFailoverAcrossPools(bool failoverAcrossPools) { DARABONBA_PTR_SET_VALUE(failoverAcrossPools_, failoverAcrossPools) };


    protected:
      // Whether to failover across pools.
      // 
      // - true: Yes.
      // - false: No.
      shared_ptr<bool> failoverAcrossPools_ {};
    };

    virtual bool empty() const override { return this->adaptiveRouting_ == nullptr
        && this->defaultPools_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr && this->fallbackPool_ == nullptr && this->monitor_ == nullptr
        && this->name_ == nullptr && this->randomSteering_ == nullptr && this->regionPools_ == nullptr && this->rules_ == nullptr && this->sessionAffinity_ == nullptr
        && this->siteId_ == nullptr && this->steeringPolicy_ == nullptr && this->subRegionPools_ == nullptr && this->ttl_ == nullptr; };
    // adaptiveRouting Field Functions 
    bool hasAdaptiveRouting() const { return this->adaptiveRouting_ != nullptr;};
    void deleteAdaptiveRouting() { this->adaptiveRouting_ = nullptr;};
    inline const CreateLoadBalancerRequest::AdaptiveRouting & getAdaptiveRouting() const { DARABONBA_PTR_GET_CONST(adaptiveRouting_, CreateLoadBalancerRequest::AdaptiveRouting) };
    inline CreateLoadBalancerRequest::AdaptiveRouting getAdaptiveRouting() { DARABONBA_PTR_GET(adaptiveRouting_, CreateLoadBalancerRequest::AdaptiveRouting) };
    inline CreateLoadBalancerRequest& setAdaptiveRouting(const CreateLoadBalancerRequest::AdaptiveRouting & adaptiveRouting) { DARABONBA_PTR_SET_VALUE(adaptiveRouting_, adaptiveRouting) };
    inline CreateLoadBalancerRequest& setAdaptiveRouting(CreateLoadBalancerRequest::AdaptiveRouting && adaptiveRouting) { DARABONBA_PTR_SET_RVALUE(adaptiveRouting_, adaptiveRouting) };


    // defaultPools Field Functions 
    bool hasDefaultPools() const { return this->defaultPools_ != nullptr;};
    void deleteDefaultPools() { this->defaultPools_ = nullptr;};
    inline const vector<int64_t> & getDefaultPools() const { DARABONBA_PTR_GET_CONST(defaultPools_, vector<int64_t>) };
    inline vector<int64_t> getDefaultPools() { DARABONBA_PTR_GET(defaultPools_, vector<int64_t>) };
    inline CreateLoadBalancerRequest& setDefaultPools(const vector<int64_t> & defaultPools) { DARABONBA_PTR_SET_VALUE(defaultPools_, defaultPools) };
    inline CreateLoadBalancerRequest& setDefaultPools(vector<int64_t> && defaultPools) { DARABONBA_PTR_SET_RVALUE(defaultPools_, defaultPools) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLoadBalancerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateLoadBalancerRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // fallbackPool Field Functions 
    bool hasFallbackPool() const { return this->fallbackPool_ != nullptr;};
    void deleteFallbackPool() { this->fallbackPool_ = nullptr;};
    inline int64_t getFallbackPool() const { DARABONBA_PTR_GET_DEFAULT(fallbackPool_, 0L) };
    inline CreateLoadBalancerRequest& setFallbackPool(int64_t fallbackPool) { DARABONBA_PTR_SET_VALUE(fallbackPool_, fallbackPool) };


    // monitor Field Functions 
    bool hasMonitor() const { return this->monitor_ != nullptr;};
    void deleteMonitor() { this->monitor_ = nullptr;};
    inline const CreateLoadBalancerRequest::Monitor & getMonitor() const { DARABONBA_PTR_GET_CONST(monitor_, CreateLoadBalancerRequest::Monitor) };
    inline CreateLoadBalancerRequest::Monitor getMonitor() { DARABONBA_PTR_GET(monitor_, CreateLoadBalancerRequest::Monitor) };
    inline CreateLoadBalancerRequest& setMonitor(const CreateLoadBalancerRequest::Monitor & monitor) { DARABONBA_PTR_SET_VALUE(monitor_, monitor) };
    inline CreateLoadBalancerRequest& setMonitor(CreateLoadBalancerRequest::Monitor && monitor) { DARABONBA_PTR_SET_RVALUE(monitor_, monitor) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateLoadBalancerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // randomSteering Field Functions 
    bool hasRandomSteering() const { return this->randomSteering_ != nullptr;};
    void deleteRandomSteering() { this->randomSteering_ = nullptr;};
    inline const CreateLoadBalancerRequest::RandomSteering & getRandomSteering() const { DARABONBA_PTR_GET_CONST(randomSteering_, CreateLoadBalancerRequest::RandomSteering) };
    inline CreateLoadBalancerRequest::RandomSteering getRandomSteering() { DARABONBA_PTR_GET(randomSteering_, CreateLoadBalancerRequest::RandomSteering) };
    inline CreateLoadBalancerRequest& setRandomSteering(const CreateLoadBalancerRequest::RandomSteering & randomSteering) { DARABONBA_PTR_SET_VALUE(randomSteering_, randomSteering) };
    inline CreateLoadBalancerRequest& setRandomSteering(CreateLoadBalancerRequest::RandomSteering && randomSteering) { DARABONBA_PTR_SET_RVALUE(randomSteering_, randomSteering) };


    // regionPools Field Functions 
    bool hasRegionPools() const { return this->regionPools_ != nullptr;};
    void deleteRegionPools() { this->regionPools_ = nullptr;};
    inline     const Darabonba::Json & getRegionPools() const { DARABONBA_GET(regionPools_) };
    Darabonba::Json & getRegionPools() { DARABONBA_GET(regionPools_) };
    inline CreateLoadBalancerRequest& setRegionPools(const Darabonba::Json & regionPools) { DARABONBA_SET_VALUE(regionPools_, regionPools) };
    inline CreateLoadBalancerRequest& setRegionPools(Darabonba::Json && regionPools) { DARABONBA_SET_RVALUE(regionPools_, regionPools) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<CreateLoadBalancerRequest::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CreateLoadBalancerRequest::Rules>) };
    inline vector<CreateLoadBalancerRequest::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<CreateLoadBalancerRequest::Rules>) };
    inline CreateLoadBalancerRequest& setRules(const vector<CreateLoadBalancerRequest::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline CreateLoadBalancerRequest& setRules(vector<CreateLoadBalancerRequest::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // sessionAffinity Field Functions 
    bool hasSessionAffinity() const { return this->sessionAffinity_ != nullptr;};
    void deleteSessionAffinity() { this->sessionAffinity_ = nullptr;};
    inline string getSessionAffinity() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinity_, "") };
    inline CreateLoadBalancerRequest& setSessionAffinity(string sessionAffinity) { DARABONBA_PTR_SET_VALUE(sessionAffinity_, sessionAffinity) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateLoadBalancerRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // steeringPolicy Field Functions 
    bool hasSteeringPolicy() const { return this->steeringPolicy_ != nullptr;};
    void deleteSteeringPolicy() { this->steeringPolicy_ = nullptr;};
    inline string getSteeringPolicy() const { DARABONBA_PTR_GET_DEFAULT(steeringPolicy_, "") };
    inline CreateLoadBalancerRequest& setSteeringPolicy(string steeringPolicy) { DARABONBA_PTR_SET_VALUE(steeringPolicy_, steeringPolicy) };


    // subRegionPools Field Functions 
    bool hasSubRegionPools() const { return this->subRegionPools_ != nullptr;};
    void deleteSubRegionPools() { this->subRegionPools_ = nullptr;};
    inline     const Darabonba::Json & getSubRegionPools() const { DARABONBA_GET(subRegionPools_) };
    Darabonba::Json & getSubRegionPools() { DARABONBA_GET(subRegionPools_) };
    inline CreateLoadBalancerRequest& setSubRegionPools(const Darabonba::Json & subRegionPools) { DARABONBA_SET_VALUE(subRegionPools_, subRegionPools) };
    inline CreateLoadBalancerRequest& setSubRegionPools(Darabonba::Json && subRegionPools) { DARABONBA_SET_RVALUE(subRegionPools_, subRegionPools) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline CreateLoadBalancerRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // Configuration for failover across pools.
    shared_ptr<CreateLoadBalancerRequest::AdaptiveRouting> adaptiveRouting_ {};
    // List of default pools.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> defaultPools_ {};
    // Detailed description of the load balancer, for easier management and identification.
    shared_ptr<string> description_ {};
    // Whether the load balancer is enabled.
    // 
    // - true: Enabled.
    // - false: Not enabled.
    shared_ptr<bool> enabled_ {};
    // Fallback pool ID, where traffic will be directed when all other pools are unavailable.
    // 
    // This parameter is required.
    shared_ptr<int64_t> fallbackPool_ {};
    // Monitor configuration, used for health checks.
    // 
    // This parameter is required.
    shared_ptr<CreateLoadBalancerRequest::Monitor> monitor_ {};
    // The name of the load balancer, which must meet the domain name format validation and be a subdomain under the site.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // Weighted round-robin configuration, used to control the traffic distribution weights among different pools.
    shared_ptr<CreateLoadBalancerRequest::RandomSteering> randomSteering_ {};
    // Address pools corresponding to primary regions.
    Darabonba::Json regionPools_ {};
    // Rule information.
    shared_ptr<vector<CreateLoadBalancerRequest::Rules>> rules_ {};
    // Session persistence, with possible values:
    // - off: Not enabled.
    // - ip: Session persistence by IP.
    // - cookie: Session persistence by cookie.
    shared_ptr<string> sessionAffinity_ {};
    // Site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // Load balancing strategy.
    // 
    // - geo: Geographical strategy.
    // - random: Weighted round-robin.
    // - order: Primary and backup method.
    // 
    // This parameter is required.
    shared_ptr<string> steeringPolicy_ {};
    // Address pools corresponding to secondary regions. When multiple secondary regions share the same set of address pools, the keys can be concatenated with commas.
    Darabonba::Json subRegionPools_ {};
    // TTL value, the time-to-live for DNS records, with a default of 30 seconds. The value range is 10-600.
    shared_ptr<int32_t> ttl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
