// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORLISTRESPONSEBODY_HPP_
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
  class DescribeSiteMonitorListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteMonitors, siteMonitors_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteMonitors, siteMonitors_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSiteMonitorListResponseBody() = default ;
    DescribeSiteMonitorListResponseBody(const DescribeSiteMonitorListResponseBody &) = default ;
    DescribeSiteMonitorListResponseBody(DescribeSiteMonitorListResponseBody &&) = default ;
    DescribeSiteMonitorListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorListResponseBody() = default ;
    DescribeSiteMonitorListResponseBody& operator=(const DescribeSiteMonitorListResponseBody &) = default ;
    DescribeSiteMonitorListResponseBody& operator=(DescribeSiteMonitorListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SiteMonitors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SiteMonitors& obj) { 
        DARABONBA_PTR_TO_JSON(SiteMonitor, siteMonitor_);
      };
      friend void from_json(const Darabonba::Json& j, SiteMonitors& obj) { 
        DARABONBA_PTR_FROM_JSON(SiteMonitor, siteMonitor_);
      };
      SiteMonitors() = default ;
      SiteMonitors(const SiteMonitors &) = default ;
      SiteMonitors(SiteMonitors &&) = default ;
      SiteMonitors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SiteMonitors() = default ;
      SiteMonitors& operator=(const SiteMonitors &) = default ;
      SiteMonitors& operator=(SiteMonitors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SiteMonitor : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SiteMonitor& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(AgentGroup, agentGroup_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(OptionsJson, optionsJson_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(TaskState, taskState_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, SiteMonitor& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(AgentGroup, agentGroup_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(OptionsJson, optionsJson_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        SiteMonitor() = default ;
        SiteMonitor(const SiteMonitor &) = default ;
        SiteMonitor(SiteMonitor &&) = default ;
        SiteMonitor(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SiteMonitor() = default ;
        SiteMonitor& operator=(const SiteMonitor &) = default ;
        SiteMonitor& operator=(SiteMonitor &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OptionsJson : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OptionsJson& obj) { 
            DARABONBA_PTR_TO_JSON(acceptable_response_code, acceptableResponseCode_);
            DARABONBA_PTR_TO_JSON(assertions, assertions_);
            DARABONBA_PTR_TO_JSON(attempts, attempts_);
            DARABONBA_PTR_TO_JSON(authentication, authentication_);
            DARABONBA_PTR_TO_JSON(cert_verify, certVerify_);
            DARABONBA_PTR_TO_JSON(cookie, cookie_);
            DARABONBA_PTR_TO_JSON(diagnosis_mtr, diagnosisMtr_);
            DARABONBA_PTR_TO_JSON(diagnosis_ping, diagnosisPing_);
            DARABONBA_PTR_TO_JSON(dns_match_rule, dnsMatchRule_);
            DARABONBA_PTR_TO_JSON(dns_server, dnsServer_);
            DARABONBA_PTR_TO_JSON(dns_type, dnsType_);
            DARABONBA_PTR_TO_JSON(enable_operator_dns, enableOperatorDns_);
            DARABONBA_PTR_TO_JSON(failure_rate, failureRate_);
            DARABONBA_PTR_TO_JSON(header, header_);
            DARABONBA_PTR_TO_JSON(http_method, httpMethod_);
            DARABONBA_PTR_TO_JSON(isBase64Encode, isBase64Encode_);
            DARABONBA_PTR_TO_JSON(match_rule, matchRule_);
            DARABONBA_PTR_TO_JSON(password, password_);
            DARABONBA_PTR_TO_JSON(ping_num, pingNum_);
            DARABONBA_PTR_TO_JSON(port, port_);
            DARABONBA_PTR_TO_JSON(protocol, protocol_);
            DARABONBA_PTR_TO_JSON(proxy_protocol, proxyProtocol_);
            DARABONBA_PTR_TO_JSON(request_content, requestContent_);
            DARABONBA_PTR_TO_JSON(request_format, requestFormat_);
            DARABONBA_PTR_TO_JSON(response_content, responseContent_);
            DARABONBA_PTR_TO_JSON(response_format, responseFormat_);
            DARABONBA_PTR_TO_JSON(retry_delay, retryDelay_);
            DARABONBA_PTR_TO_JSON(time_out, timeOut_);
            DARABONBA_PTR_TO_JSON(unfollow_redirect, unfollowRedirect_);
            DARABONBA_PTR_TO_JSON(username, username_);
          };
          friend void from_json(const Darabonba::Json& j, OptionsJson& obj) { 
            DARABONBA_PTR_FROM_JSON(acceptable_response_code, acceptableResponseCode_);
            DARABONBA_PTR_FROM_JSON(assertions, assertions_);
            DARABONBA_PTR_FROM_JSON(attempts, attempts_);
            DARABONBA_PTR_FROM_JSON(authentication, authentication_);
            DARABONBA_PTR_FROM_JSON(cert_verify, certVerify_);
            DARABONBA_PTR_FROM_JSON(cookie, cookie_);
            DARABONBA_PTR_FROM_JSON(diagnosis_mtr, diagnosisMtr_);
            DARABONBA_PTR_FROM_JSON(diagnosis_ping, diagnosisPing_);
            DARABONBA_PTR_FROM_JSON(dns_match_rule, dnsMatchRule_);
            DARABONBA_PTR_FROM_JSON(dns_server, dnsServer_);
            DARABONBA_PTR_FROM_JSON(dns_type, dnsType_);
            DARABONBA_PTR_FROM_JSON(enable_operator_dns, enableOperatorDns_);
            DARABONBA_PTR_FROM_JSON(failure_rate, failureRate_);
            DARABONBA_PTR_FROM_JSON(header, header_);
            DARABONBA_PTR_FROM_JSON(http_method, httpMethod_);
            DARABONBA_PTR_FROM_JSON(isBase64Encode, isBase64Encode_);
            DARABONBA_PTR_FROM_JSON(match_rule, matchRule_);
            DARABONBA_PTR_FROM_JSON(password, password_);
            DARABONBA_PTR_FROM_JSON(ping_num, pingNum_);
            DARABONBA_PTR_FROM_JSON(port, port_);
            DARABONBA_PTR_FROM_JSON(protocol, protocol_);
            DARABONBA_PTR_FROM_JSON(proxy_protocol, proxyProtocol_);
            DARABONBA_PTR_FROM_JSON(request_content, requestContent_);
            DARABONBA_PTR_FROM_JSON(request_format, requestFormat_);
            DARABONBA_PTR_FROM_JSON(response_content, responseContent_);
            DARABONBA_PTR_FROM_JSON(response_format, responseFormat_);
            DARABONBA_PTR_FROM_JSON(retry_delay, retryDelay_);
            DARABONBA_PTR_FROM_JSON(time_out, timeOut_);
            DARABONBA_PTR_FROM_JSON(unfollow_redirect, unfollowRedirect_);
            DARABONBA_PTR_FROM_JSON(username, username_);
          };
          OptionsJson() = default ;
          OptionsJson(const OptionsJson &) = default ;
          OptionsJson(OptionsJson &&) = default ;
          OptionsJson(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OptionsJson() = default ;
          OptionsJson& operator=(const OptionsJson &) = default ;
          OptionsJson& operator=(OptionsJson &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Assertions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Assertions& obj) { 
              DARABONBA_PTR_TO_JSON(assertions, assertions_);
            };
            friend void from_json(const Darabonba::Json& j, Assertions& obj) { 
              DARABONBA_PTR_FROM_JSON(assertions, assertions_);
            };
            Assertions() = default ;
            Assertions(const Assertions &) = default ;
            Assertions(Assertions &&) = default ;
            Assertions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Assertions() = default ;
            Assertions& operator=(const Assertions &) = default ;
            Assertions& operator=(Assertions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class AssertionsItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const AssertionsItem& obj) { 
                DARABONBA_PTR_TO_JSON(operator, operator_);
                DARABONBA_PTR_TO_JSON(property, property_);
                DARABONBA_PTR_TO_JSON(target, target_);
                DARABONBA_PTR_TO_JSON(type, type_);
              };
              friend void from_json(const Darabonba::Json& j, AssertionsItem& obj) { 
                DARABONBA_PTR_FROM_JSON(operator, operator_);
                DARABONBA_PTR_FROM_JSON(property, property_);
                DARABONBA_PTR_FROM_JSON(target, target_);
                DARABONBA_PTR_FROM_JSON(type, type_);
              };
              AssertionsItem() = default ;
              AssertionsItem(const AssertionsItem &) = default ;
              AssertionsItem(AssertionsItem &&) = default ;
              AssertionsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~AssertionsItem() = default ;
              AssertionsItem& operator=(const AssertionsItem &) = default ;
              AssertionsItem& operator=(AssertionsItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->operator_ == nullptr
        && this->property_ == nullptr && this->target_ == nullptr && this->type_ == nullptr; };
              // operator Field Functions 
              bool hasOperator() const { return this->operator_ != nullptr;};
              void deleteOperator() { this->operator_ = nullptr;};
              inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
              inline AssertionsItem& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


              // property Field Functions 
              bool hasProperty() const { return this->property_ != nullptr;};
              void deleteProperty() { this->property_ = nullptr;};
              inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
              inline AssertionsItem& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


              // target Field Functions 
              bool hasTarget() const { return this->target_ != nullptr;};
              void deleteTarget() { this->target_ = nullptr;};
              inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
              inline AssertionsItem& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline AssertionsItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              // The comparison operator of the assertion. Valid values:
              // 
              // *   contains: contains
              // *   doesNotContain: does not contain
              // *   matches: matches regular expressions
              // *   doesNotMatch: does not match regular expressions
              // *   is: equal to a numeric value or matches a character
              // *   isNot: not equal to
              // *   lessThan: less than
              // *   moreThan: greater than
              shared_ptr<string> operator_ {};
              // The parsing path of the assertion.
              // 
              // *   If the assertion type is `body_json`, the path is `json path`.
              // *   If the assertion type is `body_xml`, the path is `xml path`.
              shared_ptr<string> property_ {};
              // The numeric value or character used for matching.
              shared_ptr<string> target_ {};
              // The assertion type. Valid values:
              // 
              // *   response_time: checks whether the response time meets expectations.
              // *   status_code: checks whether the HTTP status code meets expectations.
              // *   header: checks whether the fields in the response header meet expectations.
              // *   body_text: checks whether the content in the response body meets expectations by using text matching.
              // *   body_json: checks whether the content in the response body meets expectations by using JSON parsing (JSONPath).
              // *   body_xml: checks whether the content in the response body meets expectations by using XML parsing (XPath).
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->assertions_ == nullptr; };
            // assertions Field Functions 
            bool hasAssertions() const { return this->assertions_ != nullptr;};
            void deleteAssertions() { this->assertions_ = nullptr;};
            inline const vector<Assertions::AssertionsItem> & getAssertions() const { DARABONBA_PTR_GET_CONST(assertions_, vector<Assertions::AssertionsItem>) };
            inline vector<Assertions::AssertionsItem> getAssertions() { DARABONBA_PTR_GET(assertions_, vector<Assertions::AssertionsItem>) };
            inline Assertions& setAssertions(const vector<Assertions::AssertionsItem> & assertions) { DARABONBA_PTR_SET_VALUE(assertions_, assertions) };
            inline Assertions& setAssertions(vector<Assertions::AssertionsItem> && assertions) { DARABONBA_PTR_SET_RVALUE(assertions_, assertions) };


          protected:
            shared_ptr<vector<Assertions::AssertionsItem>> assertions_ {};
          };

          virtual bool empty() const override { return this->acceptableResponseCode_ == nullptr
        && this->assertions_ == nullptr && this->attempts_ == nullptr && this->authentication_ == nullptr && this->certVerify_ == nullptr && this->cookie_ == nullptr
        && this->diagnosisMtr_ == nullptr && this->diagnosisPing_ == nullptr && this->dnsMatchRule_ == nullptr && this->dnsServer_ == nullptr && this->dnsType_ == nullptr
        && this->enableOperatorDns_ == nullptr && this->failureRate_ == nullptr && this->header_ == nullptr && this->httpMethod_ == nullptr && this->isBase64Encode_ == nullptr
        && this->matchRule_ == nullptr && this->password_ == nullptr && this->pingNum_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr
        && this->proxyProtocol_ == nullptr && this->requestContent_ == nullptr && this->requestFormat_ == nullptr && this->responseContent_ == nullptr && this->responseFormat_ == nullptr
        && this->retryDelay_ == nullptr && this->timeOut_ == nullptr && this->unfollowRedirect_ == nullptr && this->username_ == nullptr; };
          // acceptableResponseCode Field Functions 
          bool hasAcceptableResponseCode() const { return this->acceptableResponseCode_ != nullptr;};
          void deleteAcceptableResponseCode() { this->acceptableResponseCode_ = nullptr;};
          inline string getAcceptableResponseCode() const { DARABONBA_PTR_GET_DEFAULT(acceptableResponseCode_, "") };
          inline OptionsJson& setAcceptableResponseCode(string acceptableResponseCode) { DARABONBA_PTR_SET_VALUE(acceptableResponseCode_, acceptableResponseCode) };


          // assertions Field Functions 
          bool hasAssertions() const { return this->assertions_ != nullptr;};
          void deleteAssertions() { this->assertions_ = nullptr;};
          inline const OptionsJson::Assertions & getAssertions() const { DARABONBA_PTR_GET_CONST(assertions_, OptionsJson::Assertions) };
          inline OptionsJson::Assertions getAssertions() { DARABONBA_PTR_GET(assertions_, OptionsJson::Assertions) };
          inline OptionsJson& setAssertions(const OptionsJson::Assertions & assertions) { DARABONBA_PTR_SET_VALUE(assertions_, assertions) };
          inline OptionsJson& setAssertions(OptionsJson::Assertions && assertions) { DARABONBA_PTR_SET_RVALUE(assertions_, assertions) };


          // attempts Field Functions 
          bool hasAttempts() const { return this->attempts_ != nullptr;};
          void deleteAttempts() { this->attempts_ = nullptr;};
          inline int64_t getAttempts() const { DARABONBA_PTR_GET_DEFAULT(attempts_, 0L) };
          inline OptionsJson& setAttempts(int64_t attempts) { DARABONBA_PTR_SET_VALUE(attempts_, attempts) };


          // authentication Field Functions 
          bool hasAuthentication() const { return this->authentication_ != nullptr;};
          void deleteAuthentication() { this->authentication_ = nullptr;};
          inline int32_t getAuthentication() const { DARABONBA_PTR_GET_DEFAULT(authentication_, 0) };
          inline OptionsJson& setAuthentication(int32_t authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };


          // certVerify Field Functions 
          bool hasCertVerify() const { return this->certVerify_ != nullptr;};
          void deleteCertVerify() { this->certVerify_ = nullptr;};
          inline bool getCertVerify() const { DARABONBA_PTR_GET_DEFAULT(certVerify_, false) };
          inline OptionsJson& setCertVerify(bool certVerify) { DARABONBA_PTR_SET_VALUE(certVerify_, certVerify) };


          // cookie Field Functions 
          bool hasCookie() const { return this->cookie_ != nullptr;};
          void deleteCookie() { this->cookie_ = nullptr;};
          inline string getCookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
          inline OptionsJson& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


          // diagnosisMtr Field Functions 
          bool hasDiagnosisMtr() const { return this->diagnosisMtr_ != nullptr;};
          void deleteDiagnosisMtr() { this->diagnosisMtr_ = nullptr;};
          inline bool getDiagnosisMtr() const { DARABONBA_PTR_GET_DEFAULT(diagnosisMtr_, false) };
          inline OptionsJson& setDiagnosisMtr(bool diagnosisMtr) { DARABONBA_PTR_SET_VALUE(diagnosisMtr_, diagnosisMtr) };


          // diagnosisPing Field Functions 
          bool hasDiagnosisPing() const { return this->diagnosisPing_ != nullptr;};
          void deleteDiagnosisPing() { this->diagnosisPing_ = nullptr;};
          inline bool getDiagnosisPing() const { DARABONBA_PTR_GET_DEFAULT(diagnosisPing_, false) };
          inline OptionsJson& setDiagnosisPing(bool diagnosisPing) { DARABONBA_PTR_SET_VALUE(diagnosisPing_, diagnosisPing) };


          // dnsMatchRule Field Functions 
          bool hasDnsMatchRule() const { return this->dnsMatchRule_ != nullptr;};
          void deleteDnsMatchRule() { this->dnsMatchRule_ = nullptr;};
          inline string getDnsMatchRule() const { DARABONBA_PTR_GET_DEFAULT(dnsMatchRule_, "") };
          inline OptionsJson& setDnsMatchRule(string dnsMatchRule) { DARABONBA_PTR_SET_VALUE(dnsMatchRule_, dnsMatchRule) };


          // dnsServer Field Functions 
          bool hasDnsServer() const { return this->dnsServer_ != nullptr;};
          void deleteDnsServer() { this->dnsServer_ = nullptr;};
          inline string getDnsServer() const { DARABONBA_PTR_GET_DEFAULT(dnsServer_, "") };
          inline OptionsJson& setDnsServer(string dnsServer) { DARABONBA_PTR_SET_VALUE(dnsServer_, dnsServer) };


          // dnsType Field Functions 
          bool hasDnsType() const { return this->dnsType_ != nullptr;};
          void deleteDnsType() { this->dnsType_ = nullptr;};
          inline string getDnsType() const { DARABONBA_PTR_GET_DEFAULT(dnsType_, "") };
          inline OptionsJson& setDnsType(string dnsType) { DARABONBA_PTR_SET_VALUE(dnsType_, dnsType) };


          // enableOperatorDns Field Functions 
          bool hasEnableOperatorDns() const { return this->enableOperatorDns_ != nullptr;};
          void deleteEnableOperatorDns() { this->enableOperatorDns_ = nullptr;};
          inline bool getEnableOperatorDns() const { DARABONBA_PTR_GET_DEFAULT(enableOperatorDns_, false) };
          inline OptionsJson& setEnableOperatorDns(bool enableOperatorDns) { DARABONBA_PTR_SET_VALUE(enableOperatorDns_, enableOperatorDns) };


          // failureRate Field Functions 
          bool hasFailureRate() const { return this->failureRate_ != nullptr;};
          void deleteFailureRate() { this->failureRate_ = nullptr;};
          inline float getFailureRate() const { DARABONBA_PTR_GET_DEFAULT(failureRate_, 0.0) };
          inline OptionsJson& setFailureRate(float failureRate) { DARABONBA_PTR_SET_VALUE(failureRate_, failureRate) };


          // header Field Functions 
          bool hasHeader() const { return this->header_ != nullptr;};
          void deleteHeader() { this->header_ = nullptr;};
          inline string getHeader() const { DARABONBA_PTR_GET_DEFAULT(header_, "") };
          inline OptionsJson& setHeader(string header) { DARABONBA_PTR_SET_VALUE(header_, header) };


          // httpMethod Field Functions 
          bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
          void deleteHttpMethod() { this->httpMethod_ = nullptr;};
          inline string getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
          inline OptionsJson& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


          // isBase64Encode Field Functions 
          bool hasIsBase64Encode() const { return this->isBase64Encode_ != nullptr;};
          void deleteIsBase64Encode() { this->isBase64Encode_ = nullptr;};
          inline string getIsBase64Encode() const { DARABONBA_PTR_GET_DEFAULT(isBase64Encode_, "") };
          inline OptionsJson& setIsBase64Encode(string isBase64Encode) { DARABONBA_PTR_SET_VALUE(isBase64Encode_, isBase64Encode) };


          // matchRule Field Functions 
          bool hasMatchRule() const { return this->matchRule_ != nullptr;};
          void deleteMatchRule() { this->matchRule_ = nullptr;};
          inline int32_t getMatchRule() const { DARABONBA_PTR_GET_DEFAULT(matchRule_, 0) };
          inline OptionsJson& setMatchRule(int32_t matchRule) { DARABONBA_PTR_SET_VALUE(matchRule_, matchRule) };


          // password Field Functions 
          bool hasPassword() const { return this->password_ != nullptr;};
          void deletePassword() { this->password_ = nullptr;};
          inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
          inline OptionsJson& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


          // pingNum Field Functions 
          bool hasPingNum() const { return this->pingNum_ != nullptr;};
          void deletePingNum() { this->pingNum_ = nullptr;};
          inline int32_t getPingNum() const { DARABONBA_PTR_GET_DEFAULT(pingNum_, 0) };
          inline OptionsJson& setPingNum(int32_t pingNum) { DARABONBA_PTR_SET_VALUE(pingNum_, pingNum) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline OptionsJson& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // protocol Field Functions 
          bool hasProtocol() const { return this->protocol_ != nullptr;};
          void deleteProtocol() { this->protocol_ = nullptr;};
          inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
          inline OptionsJson& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


          // proxyProtocol Field Functions 
          bool hasProxyProtocol() const { return this->proxyProtocol_ != nullptr;};
          void deleteProxyProtocol() { this->proxyProtocol_ = nullptr;};
          inline bool getProxyProtocol() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocol_, false) };
          inline OptionsJson& setProxyProtocol(bool proxyProtocol) { DARABONBA_PTR_SET_VALUE(proxyProtocol_, proxyProtocol) };


          // requestContent Field Functions 
          bool hasRequestContent() const { return this->requestContent_ != nullptr;};
          void deleteRequestContent() { this->requestContent_ = nullptr;};
          inline string getRequestContent() const { DARABONBA_PTR_GET_DEFAULT(requestContent_, "") };
          inline OptionsJson& setRequestContent(string requestContent) { DARABONBA_PTR_SET_VALUE(requestContent_, requestContent) };


          // requestFormat Field Functions 
          bool hasRequestFormat() const { return this->requestFormat_ != nullptr;};
          void deleteRequestFormat() { this->requestFormat_ = nullptr;};
          inline string getRequestFormat() const { DARABONBA_PTR_GET_DEFAULT(requestFormat_, "") };
          inline OptionsJson& setRequestFormat(string requestFormat) { DARABONBA_PTR_SET_VALUE(requestFormat_, requestFormat) };


          // responseContent Field Functions 
          bool hasResponseContent() const { return this->responseContent_ != nullptr;};
          void deleteResponseContent() { this->responseContent_ = nullptr;};
          inline string getResponseContent() const { DARABONBA_PTR_GET_DEFAULT(responseContent_, "") };
          inline OptionsJson& setResponseContent(string responseContent) { DARABONBA_PTR_SET_VALUE(responseContent_, responseContent) };


          // responseFormat Field Functions 
          bool hasResponseFormat() const { return this->responseFormat_ != nullptr;};
          void deleteResponseFormat() { this->responseFormat_ = nullptr;};
          inline string getResponseFormat() const { DARABONBA_PTR_GET_DEFAULT(responseFormat_, "") };
          inline OptionsJson& setResponseFormat(string responseFormat) { DARABONBA_PTR_SET_VALUE(responseFormat_, responseFormat) };


          // retryDelay Field Functions 
          bool hasRetryDelay() const { return this->retryDelay_ != nullptr;};
          void deleteRetryDelay() { this->retryDelay_ = nullptr;};
          inline int32_t getRetryDelay() const { DARABONBA_PTR_GET_DEFAULT(retryDelay_, 0) };
          inline OptionsJson& setRetryDelay(int32_t retryDelay) { DARABONBA_PTR_SET_VALUE(retryDelay_, retryDelay) };


          // timeOut Field Functions 
          bool hasTimeOut() const { return this->timeOut_ != nullptr;};
          void deleteTimeOut() { this->timeOut_ = nullptr;};
          inline int64_t getTimeOut() const { DARABONBA_PTR_GET_DEFAULT(timeOut_, 0L) };
          inline OptionsJson& setTimeOut(int64_t timeOut) { DARABONBA_PTR_SET_VALUE(timeOut_, timeOut) };


          // unfollowRedirect Field Functions 
          bool hasUnfollowRedirect() const { return this->unfollowRedirect_ != nullptr;};
          void deleteUnfollowRedirect() { this->unfollowRedirect_ = nullptr;};
          inline bool getUnfollowRedirect() const { DARABONBA_PTR_GET_DEFAULT(unfollowRedirect_, false) };
          inline OptionsJson& setUnfollowRedirect(bool unfollowRedirect) { DARABONBA_PTR_SET_VALUE(unfollowRedirect_, unfollowRedirect) };


          // username Field Functions 
          bool hasUsername() const { return this->username_ != nullptr;};
          void deleteUsername() { this->username_ = nullptr;};
          inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
          inline OptionsJson& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


        protected:
          // The acceptable status code.
          // 
          // >  We recommend that you configure assertions.
          shared_ptr<string> acceptableResponseCode_ {};
          // The assertions.
          shared_ptr<OptionsJson::Assertions> assertions_ {};
          // The number of retries after a DNS failure occurred.
          shared_ptr<int64_t> attempts_ {};
          // Indicates whether the security authentication feature is enabled. Valid values:
          // 
          // *   0: The feature is enabled.
          // *   1: The feature is disabled.
          shared_ptr<int32_t> authentication_ {};
          // Indicates whether the certificate is verified. Valid values:
          // 
          // *   false (default): The certificate is not verified.
          // *   true: The certificate is verified.
          shared_ptr<bool> certVerify_ {};
          // The cookie of the HTTP request.
          shared_ptr<string> cookie_ {};
          // Indicates whether MTR is automatically used to diagnose network issues if a task fails. Valid values:
          // 
          // *   false (default): MTR is not automatically used to diagnose network issues if a task fails.
          // *   true: MTR is automatically used to diagnose network issues if a task fails.
          shared_ptr<bool> diagnosisMtr_ {};
          // Indicates whether ping requests are automatically sent to detect network latency if a detection task fails. Valid values:
          // 
          // *   false (default): Ping requests are not automatically sent to detect network latency if a detection task fails.
          // *   true: Ping requests are automatically sent to detect network latency if a detection task fails.
          shared_ptr<bool> diagnosisPing_ {};
          // The relationship between the list of expected aliases or IP addresses and the list of DNS results. Valid values:
          // 
          // *   IN_DNS: The list of expected values is a subset of the list of DNS results.
          // *   DNS_IN: The list of DNS results is a subset of the list of expected values.
          // *   EQUAL: The list of DNS results is the same as the list of expected values.
          // *   ANY: The list of DNS results intersects with the list of expected values.
          shared_ptr<string> dnsMatchRule_ {};
          // The domain name or IP address of the DNS server.
          shared_ptr<string> dnsServer_ {};
          // The type of the DNS record. This parameter is returned only if the TaskType parameter is set to DNS. Valid values:
          // 
          // *   A (default): a record that specifies an IP address related to the specified host name or domain name.
          // *   CNAME: a record that maps multiple domain names to a domain name.
          // *   NS: a record that specifies a DNS server used to parse domain names.
          // *   MX: a record that links domain names to the address of a mail server.
          // *   TXT: a record that stores the text information of host name or domain names. The text must be 1 to 512 bytes in length. The TXT record serves as a Sender Policy Framework (SPF) record to fight against spam.
          // *   AAAA: a record that maps a domain name to the relevant IPv6 address.
          shared_ptr<string> dnsType_ {};
          // Indicates whether the DNS server of the carrier is used.
          // 
          // *   true (default): The DNS server of the carrier is used.
          // *   false: The DNS server of the carrier is not used. The default DNS server or the specified DNS server is used.
          shared_ptr<bool> enableOperatorDns_ {};
          // The packet loss rate.
          // 
          // >  This parameter is returned only if the TaskType parameter is set to PING.
          shared_ptr<float> failureRate_ {};
          // The header of the HTTP request. An HTTP header is a key-value pair in which the key and the value are separated by a colon (:). The format is `key1:value1`. Each HTTP header occupies a line.
          shared_ptr<string> header_ {};
          // The HTTP request method. Valid values:
          // 
          // *   get
          // *   post
          // *   head
          shared_ptr<string> httpMethod_ {};
          // Indicates whether the password is decoded by using the Base64 algorithm. Valid values:
          // 
          // *   true: The password is decoded by using the Base64 algorithm.
          // *   false (default): The password is not decoded by using the Base64 algorithm.
          shared_ptr<string> isBase64Encode_ {};
          // Indicates whether the alert rule is included. Valid values:
          // 
          // *   0: The alert rule is included.
          // *   1: The alert rule is not included.
          shared_ptr<int32_t> matchRule_ {};
          // The password of the SMTP, POP3, or FTP protocol.
          shared_ptr<string> password_ {};
          // The number of hops for the PING protocol.
          shared_ptr<int32_t> pingNum_ {};
          // The port number of the TCP, UDP, SMTP, or POP3 protocol.
          shared_ptr<int32_t> port_ {};
          // The protocol type of DNS detection. Valid values:
          // 
          // *   udp (default)
          // *   tcp
          // *   tcp-tls
          shared_ptr<string> protocol_ {};
          // Indicates whether the PROXY protocol is enabled. Valid values:
          // 
          // *   false (default): The PROXY protocol is disabled.
          // *   true: The PROXY protocol is enabled.
          shared_ptr<bool> proxyProtocol_ {};
          // The content of the HTTP request.
          shared_ptr<string> requestContent_ {};
          // The format of the HTTP request. Valid values:
          // 
          // *   hex: hexadecimal
          // *   txt: text
          shared_ptr<string> requestFormat_ {};
          // The response to the HTTP request.
          // 
          // *   Hexadecimal format: If the request content is a byte string and cannot be represented in printable characters, you can convert the byte string to printable characters in the hexadecimal format. If you convert the byte string to printable characters in the hexadecimal format, one byte is converted to two hexadecimal characters. For example, (byte)1 is converted to `01` and (byte)27 is converted to `1B`. If the request content is a binary array in the Java format, for example, `{(byte)1, (byte)27}`, you can convert the binary array to `011b` or `011B`. Hexadecimal characters are not case-sensitive in site monitoring tasks. You can enter `011B` in the request content and set the request_format parameter to hex.
          // *   Text format: Common text refers to strings that consist of printable characters.
          shared_ptr<string> responseContent_ {};
          // The format of the HTTP response. Valid values:
          // 
          // *   hex: hexadecimal
          // *   txt: text
          shared_ptr<string> responseFormat_ {};
          // The number of times a failed detection request is retried.
          shared_ptr<int32_t> retryDelay_ {};
          // The timeout period. Unit: milliseconds.
          shared_ptr<int64_t> timeOut_ {};
          // Indicates whether redirects are followed if the status code 301 or 302 is returned. Valid values:
          // 
          // *   true: Redirects are not followed.
          // *   false (default): Redirects are followed.
          shared_ptr<bool> unfollowRedirect_ {};
          // The username of the FTP, SMTP, or POP3 protocol.
          shared_ptr<string> username_ {};
        };

        virtual bool empty() const override { return this->address_ == nullptr
        && this->agentGroup_ == nullptr && this->createTime_ == nullptr && this->interval_ == nullptr && this->optionsJson_ == nullptr && this->taskId_ == nullptr
        && this->taskName_ == nullptr && this->taskState_ == nullptr && this->taskType_ == nullptr && this->updateTime_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline SiteMonitor& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // agentGroup Field Functions 
        bool hasAgentGroup() const { return this->agentGroup_ != nullptr;};
        void deleteAgentGroup() { this->agentGroup_ = nullptr;};
        inline string getAgentGroup() const { DARABONBA_PTR_GET_DEFAULT(agentGroup_, "") };
        inline SiteMonitor& setAgentGroup(string agentGroup) { DARABONBA_PTR_SET_VALUE(agentGroup_, agentGroup) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline SiteMonitor& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
        inline SiteMonitor& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // optionsJson Field Functions 
        bool hasOptionsJson() const { return this->optionsJson_ != nullptr;};
        void deleteOptionsJson() { this->optionsJson_ = nullptr;};
        inline const SiteMonitor::OptionsJson & getOptionsJson() const { DARABONBA_PTR_GET_CONST(optionsJson_, SiteMonitor::OptionsJson) };
        inline SiteMonitor::OptionsJson getOptionsJson() { DARABONBA_PTR_GET(optionsJson_, SiteMonitor::OptionsJson) };
        inline SiteMonitor& setOptionsJson(const SiteMonitor::OptionsJson & optionsJson) { DARABONBA_PTR_SET_VALUE(optionsJson_, optionsJson) };
        inline SiteMonitor& setOptionsJson(SiteMonitor::OptionsJson && optionsJson) { DARABONBA_PTR_SET_RVALUE(optionsJson_, optionsJson) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline SiteMonitor& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline SiteMonitor& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // taskState Field Functions 
        bool hasTaskState() const { return this->taskState_ != nullptr;};
        void deleteTaskState() { this->taskState_ = nullptr;};
        inline string getTaskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
        inline SiteMonitor& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline SiteMonitor& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline SiteMonitor& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The URL or IP address that is monitored by the site monitoring task.
        shared_ptr<string> address_ {};
        // The detection point type. Valid values:
        // 
        // *   PC
        // *   MOBILE
        shared_ptr<string> agentGroup_ {};
        // The time when the site monitoring task was created.
        shared_ptr<string> createTime_ {};
        // The interval at which detection requests are sent. Unit: minutes.
        shared_ptr<string> interval_ {};
        // The extended options of the site monitoring task. The options vary based on the specified protocol. For more information, see [CreateSiteMonitor](https://help.aliyun.com/document_detail/115048.html).
        shared_ptr<SiteMonitor::OptionsJson> optionsJson_ {};
        // The ID of the site monitoring task.
        shared_ptr<string> taskId_ {};
        // The name of the site monitoring task.
        shared_ptr<string> taskName_ {};
        // The task status. Valid values:
        // 
        // *   1: The task is enabled.
        // *   2: The task is disabled.
        shared_ptr<string> taskState_ {};
        // The protocol that is used by the site monitoring task. Valid values: HTTP, PING, TCP, UDP, DNS, SMTP, POP3, and FTP.
        shared_ptr<string> taskType_ {};
        // The time when the site monitoring task was updated.
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->siteMonitor_ == nullptr; };
      // siteMonitor Field Functions 
      bool hasSiteMonitor() const { return this->siteMonitor_ != nullptr;};
      void deleteSiteMonitor() { this->siteMonitor_ = nullptr;};
      inline const vector<SiteMonitors::SiteMonitor> & getSiteMonitor() const { DARABONBA_PTR_GET_CONST(siteMonitor_, vector<SiteMonitors::SiteMonitor>) };
      inline vector<SiteMonitors::SiteMonitor> getSiteMonitor() { DARABONBA_PTR_GET(siteMonitor_, vector<SiteMonitors::SiteMonitor>) };
      inline SiteMonitors& setSiteMonitor(const vector<SiteMonitors::SiteMonitor> & siteMonitor) { DARABONBA_PTR_SET_VALUE(siteMonitor_, siteMonitor) };
      inline SiteMonitors& setSiteMonitor(vector<SiteMonitors::SiteMonitor> && siteMonitor) { DARABONBA_PTR_SET_RVALUE(siteMonitor_, siteMonitor) };


    protected:
      shared_ptr<vector<SiteMonitors::SiteMonitor>> siteMonitor_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->siteMonitors_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSiteMonitorListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSiteMonitorListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSiteMonitorListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSiteMonitorListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSiteMonitorListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteMonitors Field Functions 
    bool hasSiteMonitors() const { return this->siteMonitors_ != nullptr;};
    void deleteSiteMonitors() { this->siteMonitors_ = nullptr;};
    inline const DescribeSiteMonitorListResponseBody::SiteMonitors & getSiteMonitors() const { DARABONBA_PTR_GET_CONST(siteMonitors_, DescribeSiteMonitorListResponseBody::SiteMonitors) };
    inline DescribeSiteMonitorListResponseBody::SiteMonitors getSiteMonitors() { DARABONBA_PTR_GET(siteMonitors_, DescribeSiteMonitorListResponseBody::SiteMonitors) };
    inline DescribeSiteMonitorListResponseBody& setSiteMonitors(const DescribeSiteMonitorListResponseBody::SiteMonitors & siteMonitors) { DARABONBA_PTR_SET_VALUE(siteMonitors_, siteMonitors) };
    inline DescribeSiteMonitorListResponseBody& setSiteMonitors(DescribeSiteMonitorListResponseBody::SiteMonitors && siteMonitors) { DARABONBA_PTR_SET_RVALUE(siteMonitors_, siteMonitors) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSiteMonitorListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSiteMonitorListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The site monitoring tasks that are returned.
    shared_ptr<DescribeSiteMonitorListResponseBody::SiteMonitors> siteMonitors_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
