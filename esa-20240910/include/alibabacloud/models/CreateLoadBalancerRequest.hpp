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
        // The value of the `Content-Type` field in the HTTP response header.
        shared_ptr<string> contentType_ {};
        // The value of the `Location` field in the HTTP response header, typically used for redirects.
        shared_ptr<string> location_ {};
        // The content of the response body.
        shared_ptr<string> messageBody_ {};
        // The HTTP status code of the response.
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
      // Specifies a fixed response to return when a request matches the rule.
      shared_ptr<Rules::FixedResponse> fixedResponse_ {};
      // The Server Load Balancer settings to override when a request matches the rule. The fields specified here replace the corresponding fields in the main Server Load Balancer configuration.
      Darabonba::Json overrides_ {};
      // A conditional expression that matches incoming requests.
      // 
      // - To match all incoming requests, set the value to `true`.
      // 
      // - To match specific requests, provide a custom expression, such as `(http.host eq "video.example.com")`.
      shared_ptr<string> rule_ {};
      // Specifies whether the rule is enabled. This parameter is not required when adding a global configuration. Valid values:
      // 
      // - `on`: The rule is enabled.
      // 
      // - `off`: The rule is disabled.
      shared_ptr<string> ruleEnable_ {};
      // The name of the rule. This parameter is not required when adding a global configuration.
      shared_ptr<string> ruleName_ {};
      // The execution order of the rule. If you do not specify a value, the system executes rules in the order they appear in the list. If specified, the value must be an integer greater than 0. The system executes rules with a higher value first.
      shared_ptr<int32_t> sequence_ {};
      // Specifies whether to stop processing subsequent rules after a match.
      // 
      // - `true`: Yes.
      // 
      // - `false`: No. (Default)
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
      // The default weight for the weighted round-robin policy. This weight applies to all address pools without a specifically assigned weight. Valid values: 0–100.
      shared_ptr<int32_t> defaultWeight_ {};
      // A map of weights for each address pool, where the key is the pool ID and the value is its weight. The weight determines the proportion of traffic that the pool receives.
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
      // The number of consecutive failed health checks required to mark an origin server as unhealthy. For example, `5`.
      shared_ptr<int32_t> consecutiveDown_ {};
      // The number of consecutive successful health checks required to mark an origin server as healthy. For example, `3`.
      shared_ptr<int32_t> consecutiveUp_ {};
      // The expected HTTP status codes that indicate a successful health check. Separate multiple codes with commas. For example, `200,202`.
      shared_ptr<string> expectedCodes_ {};
      // Specifies whether the health check monitor follows HTTP redirects.
      // 
      // - `true`: Yes.
      // 
      // - `false`: No.
      shared_ptr<bool> followRedirects_ {};
      // The HTTP headers to include in the health check request.
      Darabonba::Json header_ {};
      // The interval in seconds between consecutive health checks. For example, `60`.
      shared_ptr<int32_t> interval_ {};
      // The HTTP method for the health check. For example, `GET`.
      shared_ptr<string> method_ {};
      // The regions from which the monitor initiates health check probes. Default: `Global`. Valid values:
      // 
      // - `Global`: Worldwide.
      // 
      // - `ChineseMainland`: Chinese mainland.
      // 
      // - `OutsideChineseMainland`: Regions outside the Chinese mainland.
      shared_ptr<string> monitoringRegion_ {};
      // The request path for the HTTP health check. For example, `/healthcheck`.
      shared_ptr<string> path_ {};
      // The port on the origin server to check.
      shared_ptr<int32_t> port_ {};
      // The timeout for the health check, in seconds. The value must be between 1 and 10.
      shared_ptr<int32_t> timeout_ {};
      // The protocol for the health check. Setting this to `off` disables health checks. Valid values:
      // 
      // - TCP
      // 
      // - UDP
      // 
      // - SMTP
      // 
      // - HTTPS
      // 
      // - HTTP
      // 
      // - ICMP Ping
      // 
      // - off
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
      // Indicates whether to fail over across address pools.
      // 
      // - `true`: Yes.
      // 
      // - `false`: No.
      shared_ptr<bool> failoverAcrossPools_ {};
      shared_ptr<bool> originLevelRetry_ {};
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
    // The configuration for failover across address pools.
    shared_ptr<CreateLoadBalancerRequest::AdaptiveRouting> adaptiveRouting_ {};
    // A list of default address pool IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> defaultPools_ {};
    // A description of the Server Load Balancer.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the Server Load Balancer.
    // 
    // - `true`: Enabled.
    // 
    // - `false`: Disabled.
    shared_ptr<bool> enabled_ {};
    // The ID of the fallback pool. The system directs traffic to this pool when all other pools are unavailable.
    // 
    // This parameter is required.
    shared_ptr<int64_t> fallbackPool_ {};
    // The monitor configuration for health checks.
    // 
    // This parameter is required.
    shared_ptr<CreateLoadBalancerRequest::Monitor> monitor_ {};
    // The name of the Server Load Balancer. It must be a valid domain name and a subdomain of the site.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The configuration for weighted round-robin steering. This setting controls how the system distributes traffic across different address pools based on their weights.
    shared_ptr<CreateLoadBalancerRequest::RandomSteering> randomSteering_ {};
    // The mapping of primary regions to address pools.
    Darabonba::Json regionPools_ {};
    // A list of rules to override the default traffic steering policy for specific requests.
    shared_ptr<vector<CreateLoadBalancerRequest::Rules>> rules_ {};
    // Specifies the session affinity policy, which consistently routes requests from the same client to the same origin server. Valid values:
    // 
    // - `off`: Disables session affinity.
    // 
    // - `ip`: Routes requests based on the client\\"s IP address.
    // 
    // - `cookie`: Uses a cookie to maintain session affinity.
    shared_ptr<string> sessionAffinity_ {};
    // The site ID. Call the [ListSites](~~ListSites~~) operation to obtain this ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The traffic steering policy, which determines how the system distributes traffic among the address pools. Valid values:
    // 
    // - `geo`: Geographic routing.
    // 
    // - `random`: Weighted round-robin.
    // 
    // - `order`: Primary/standby.
    // 
    // This parameter is required.
    shared_ptr<string> steeringPolicy_ {};
    // The mapping of secondary regions to address pools. To map multiple secondary regions to the same address pools, combine their region codes with commas to form the key.
    Darabonba::Json subRegionPools_ {};
    // The time to live (TTL) for the DNS record, in seconds. The default value is 30. The value must be between 10 and 600.
    shared_ptr<int32_t> ttl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
