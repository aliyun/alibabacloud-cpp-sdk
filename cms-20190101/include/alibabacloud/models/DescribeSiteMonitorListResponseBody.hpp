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
              shared_ptr<string> operator_ {};
              shared_ptr<string> property_ {};
              shared_ptr<string> target_ {};
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
          shared_ptr<string> acceptableResponseCode_ {};
          shared_ptr<OptionsJson::Assertions> assertions_ {};
          shared_ptr<int64_t> attempts_ {};
          shared_ptr<int32_t> authentication_ {};
          shared_ptr<bool> certVerify_ {};
          shared_ptr<string> cookie_ {};
          shared_ptr<bool> diagnosisMtr_ {};
          shared_ptr<bool> diagnosisPing_ {};
          shared_ptr<string> dnsMatchRule_ {};
          shared_ptr<string> dnsServer_ {};
          shared_ptr<string> dnsType_ {};
          shared_ptr<bool> enableOperatorDns_ {};
          shared_ptr<float> failureRate_ {};
          shared_ptr<string> header_ {};
          shared_ptr<string> httpMethod_ {};
          shared_ptr<string> isBase64Encode_ {};
          shared_ptr<int32_t> matchRule_ {};
          shared_ptr<string> password_ {};
          shared_ptr<int32_t> pingNum_ {};
          shared_ptr<int32_t> port_ {};
          shared_ptr<string> protocol_ {};
          shared_ptr<bool> proxyProtocol_ {};
          shared_ptr<string> requestContent_ {};
          shared_ptr<string> requestFormat_ {};
          shared_ptr<string> responseContent_ {};
          shared_ptr<string> responseFormat_ {};
          shared_ptr<int32_t> retryDelay_ {};
          shared_ptr<int64_t> timeOut_ {};
          shared_ptr<bool> unfollowRedirect_ {};
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
        shared_ptr<string> address_ {};
        shared_ptr<string> agentGroup_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> interval_ {};
        shared_ptr<SiteMonitor::OptionsJson> optionsJson_ {};
        shared_ptr<string> taskId_ {};
        shared_ptr<string> taskName_ {};
        shared_ptr<string> taskState_ {};
        shared_ptr<string> taskType_ {};
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
