// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeSiteMonitorAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MetricRules, metricRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteMonitors, siteMonitors_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MetricRules, metricRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteMonitors, siteMonitors_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSiteMonitorAttributeResponseBody() = default ;
    DescribeSiteMonitorAttributeResponseBody(const DescribeSiteMonitorAttributeResponseBody &) = default ;
    DescribeSiteMonitorAttributeResponseBody(DescribeSiteMonitorAttributeResponseBody &&) = default ;
    DescribeSiteMonitorAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBody() = default ;
    DescribeSiteMonitorAttributeResponseBody& operator=(const DescribeSiteMonitorAttributeResponseBody &) = default ;
    DescribeSiteMonitorAttributeResponseBody& operator=(DescribeSiteMonitorAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SiteMonitors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SiteMonitors& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(AgentGroup, agentGroup_);
        DARABONBA_PTR_TO_JSON(CustomSchedule, customSchedule_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(IspCities, ispCities_);
        DARABONBA_PTR_TO_JSON(OptionJson, optionJson_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskState, taskState_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(VpcConfig, vpcConfig_);
      };
      friend void from_json(const Darabonba::Json& j, SiteMonitors& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(AgentGroup, agentGroup_);
        DARABONBA_PTR_FROM_JSON(CustomSchedule, customSchedule_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(IspCities, ispCities_);
        DARABONBA_PTR_FROM_JSON(OptionJson, optionJson_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(VpcConfig, vpcConfig_);
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
      class VpcConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpcConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
        };
        friend void from_json(const Darabonba::Json& j, VpcConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
        };
        VpcConfig() = default ;
        VpcConfig(const VpcConfig &) = default ;
        VpcConfig(VpcConfig &&) = default ;
        VpcConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpcConfig() = default ;
        VpcConfig& operator=(const VpcConfig &) = default ;
        VpcConfig& operator=(VpcConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->region_ == nullptr
        && this->securityGroupId_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr; };
        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline VpcConfig& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline VpcConfig& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline VpcConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vswitchId Field Functions 
        bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
        void deleteVswitchId() { this->vswitchId_ = nullptr;};
        inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
        inline VpcConfig& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      protected:
        // The region of the website for synthetic monitoring.
        shared_ptr<string> region_ {};
        // The ID of the security group.
        shared_ptr<string> securityGroupId_ {};
        // The ID of the VPC used by the synthetic test task.
        shared_ptr<string> vpcId_ {};
        // The ID of the vSwitch used by the synthetic test task.
        shared_ptr<string> vswitchId_ {};
      };

      class OptionJson : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OptionJson& obj) { 
          DARABONBA_PTR_TO_JSON(assertions, assertions_);
          DARABONBA_PTR_TO_JSON(attempts, attempts_);
          DARABONBA_PTR_TO_JSON(auth_info, authInfo_);
          DARABONBA_PTR_TO_JSON(blocked_url_list, blockedUrlList_);
          DARABONBA_PTR_TO_JSON(browser_headers, browserHeaders_);
          DARABONBA_PTR_TO_JSON(browser_hosts, browserHosts_);
          DARABONBA_PTR_TO_JSON(browser_info, browserInfo_);
          DARABONBA_PTR_TO_JSON(browser_insecure, browserInsecure_);
          DARABONBA_PTR_TO_JSON(browser_task_version, browserTaskVersion_);
          DARABONBA_PTR_TO_JSON(config_variables, configVariables_);
          DARABONBA_PTR_TO_JSON(cookie, cookie_);
          DARABONBA_PTR_TO_JSON(diagnosis_mtr, diagnosisMtr_);
          DARABONBA_PTR_TO_JSON(diagnosis_ping, diagnosisPing_);
          DARABONBA_PTR_TO_JSON(dns_hijack_whitelist, dnsHijackWhitelist_);
          DARABONBA_PTR_TO_JSON(dns_match_rule, dnsMatchRule_);
          DARABONBA_PTR_TO_JSON(dns_server, dnsServer_);
          DARABONBA_PTR_TO_JSON(dns_type, dnsType_);
          DARABONBA_PTR_TO_JSON(empty_message, emptyMessage_);
          DARABONBA_PTR_TO_JSON(enable_packet_capture, enablePacketCapture_);
          DARABONBA_PTR_TO_JSON(expect_exist_string, expectExistString_);
          DARABONBA_PTR_TO_JSON(expect_non_exist_string, expectNonExistString_);
          DARABONBA_PTR_TO_JSON(expect_value, expectValue_);
          DARABONBA_PTR_TO_JSON(failure_rate, failureRate_);
          DARABONBA_PTR_TO_JSON(header, header_);
          DARABONBA_PTR_TO_JSON(hops, hops_);
          DARABONBA_PTR_TO_JSON(host_binding, hostBinding_);
          DARABONBA_PTR_TO_JSON(host_binding_type, hostBindingType_);
          DARABONBA_PTR_TO_JSON(http_method, httpMethod_);
          DARABONBA_PTR_TO_JSON(icmp_timeout_millis, icmpTimeoutMillis_);
          DARABONBA_PTR_TO_JSON(ip_network, ipNetwork_);
          DARABONBA_PTR_TO_JSON(isBase64Encode, isBase64Encode_);
          DARABONBA_PTR_TO_JSON(match_rule, matchRule_);
          DARABONBA_PTR_TO_JSON(max_tls_version, maxTlsVersion_);
          DARABONBA_PTR_TO_JSON(min_tls_version, minTlsVersion_);
          DARABONBA_PTR_TO_JSON(password, password_);
          DARABONBA_PTR_TO_JSON(ping_num, pingNum_);
          DARABONBA_PTR_TO_JSON(ping_port, pingPort_);
          DARABONBA_PTR_TO_JSON(ping_type, pingType_);
          DARABONBA_PTR_TO_JSON(port, port_);
          DARABONBA_PTR_TO_JSON(private_crt_file_name, privateCrtFileName_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
          DARABONBA_PTR_TO_JSON(quic_enabled, quicEnabled_);
          DARABONBA_PTR_TO_JSON(quic_target, quicTarget_);
          DARABONBA_PTR_TO_JSON(request_content, requestContent_);
          DARABONBA_PTR_TO_JSON(request_format, requestFormat_);
          DARABONBA_PTR_TO_JSON(response_content, responseContent_);
          DARABONBA_PTR_TO_JSON(response_format, responseFormat_);
          DARABONBA_PTR_TO_JSON(retry_delay, retryDelay_);
          DARABONBA_PTR_TO_JSON(safe_link, safeLink_);
          DARABONBA_PTR_TO_JSON(screen_shot, screenShot_);
          DARABONBA_PTR_TO_JSON(scroll_end, scrollEnd_);
          DARABONBA_PTR_TO_JSON(server_name, serverName_);
          DARABONBA_PTR_TO_JSON(steps, steps_);
          DARABONBA_PTR_TO_JSON(strict_mode, strictMode_);
          DARABONBA_PTR_TO_JSON(supported_cipher_suits, supportedCipherSuits_);
          DARABONBA_PTR_TO_JSON(time_out, timeOut_);
          DARABONBA_PTR_TO_JSON(trace_region, traceRegion_);
          DARABONBA_PTR_TO_JSON(trace_type, traceType_);
          DARABONBA_PTR_TO_JSON(traffic_hijack_element_blacklist, trafficHijackElementBlacklist_);
          DARABONBA_PTR_TO_JSON(traffic_hijack_element_count, trafficHijackElementCount_);
          DARABONBA_PTR_TO_JSON(traffic_hijack_element_whitelist, trafficHijackElementWhitelist_);
          DARABONBA_PTR_TO_JSON(use_private_crt, usePrivateCrt_);
          DARABONBA_PTR_TO_JSON(use_ssl, useSsl_);
          DARABONBA_PTR_TO_JSON(username, username_);
          DARABONBA_PTR_TO_JSON(waitTime_after_completion, waitTimeAfterCompletion_);
        };
        friend void from_json(const Darabonba::Json& j, OptionJson& obj) { 
          DARABONBA_PTR_FROM_JSON(assertions, assertions_);
          DARABONBA_PTR_FROM_JSON(attempts, attempts_);
          DARABONBA_PTR_FROM_JSON(auth_info, authInfo_);
          DARABONBA_PTR_FROM_JSON(blocked_url_list, blockedUrlList_);
          DARABONBA_PTR_FROM_JSON(browser_headers, browserHeaders_);
          DARABONBA_PTR_FROM_JSON(browser_hosts, browserHosts_);
          DARABONBA_PTR_FROM_JSON(browser_info, browserInfo_);
          DARABONBA_PTR_FROM_JSON(browser_insecure, browserInsecure_);
          DARABONBA_PTR_FROM_JSON(browser_task_version, browserTaskVersion_);
          DARABONBA_PTR_FROM_JSON(config_variables, configVariables_);
          DARABONBA_PTR_FROM_JSON(cookie, cookie_);
          DARABONBA_PTR_FROM_JSON(diagnosis_mtr, diagnosisMtr_);
          DARABONBA_PTR_FROM_JSON(diagnosis_ping, diagnosisPing_);
          DARABONBA_PTR_FROM_JSON(dns_hijack_whitelist, dnsHijackWhitelist_);
          DARABONBA_PTR_FROM_JSON(dns_match_rule, dnsMatchRule_);
          DARABONBA_PTR_FROM_JSON(dns_server, dnsServer_);
          DARABONBA_PTR_FROM_JSON(dns_type, dnsType_);
          DARABONBA_PTR_FROM_JSON(empty_message, emptyMessage_);
          DARABONBA_PTR_FROM_JSON(enable_packet_capture, enablePacketCapture_);
          DARABONBA_PTR_FROM_JSON(expect_exist_string, expectExistString_);
          DARABONBA_PTR_FROM_JSON(expect_non_exist_string, expectNonExistString_);
          DARABONBA_PTR_FROM_JSON(expect_value, expectValue_);
          DARABONBA_PTR_FROM_JSON(failure_rate, failureRate_);
          DARABONBA_PTR_FROM_JSON(header, header_);
          DARABONBA_PTR_FROM_JSON(hops, hops_);
          DARABONBA_PTR_FROM_JSON(host_binding, hostBinding_);
          DARABONBA_PTR_FROM_JSON(host_binding_type, hostBindingType_);
          DARABONBA_PTR_FROM_JSON(http_method, httpMethod_);
          DARABONBA_PTR_FROM_JSON(icmp_timeout_millis, icmpTimeoutMillis_);
          DARABONBA_PTR_FROM_JSON(ip_network, ipNetwork_);
          DARABONBA_PTR_FROM_JSON(isBase64Encode, isBase64Encode_);
          DARABONBA_PTR_FROM_JSON(match_rule, matchRule_);
          DARABONBA_PTR_FROM_JSON(max_tls_version, maxTlsVersion_);
          DARABONBA_PTR_FROM_JSON(min_tls_version, minTlsVersion_);
          DARABONBA_PTR_FROM_JSON(password, password_);
          DARABONBA_PTR_FROM_JSON(ping_num, pingNum_);
          DARABONBA_PTR_FROM_JSON(ping_port, pingPort_);
          DARABONBA_PTR_FROM_JSON(ping_type, pingType_);
          DARABONBA_PTR_FROM_JSON(port, port_);
          DARABONBA_PTR_FROM_JSON(private_crt_file_name, privateCrtFileName_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(quic_enabled, quicEnabled_);
          DARABONBA_PTR_FROM_JSON(quic_target, quicTarget_);
          DARABONBA_PTR_FROM_JSON(request_content, requestContent_);
          DARABONBA_PTR_FROM_JSON(request_format, requestFormat_);
          DARABONBA_PTR_FROM_JSON(response_content, responseContent_);
          DARABONBA_PTR_FROM_JSON(response_format, responseFormat_);
          DARABONBA_PTR_FROM_JSON(retry_delay, retryDelay_);
          DARABONBA_PTR_FROM_JSON(safe_link, safeLink_);
          DARABONBA_PTR_FROM_JSON(screen_shot, screenShot_);
          DARABONBA_PTR_FROM_JSON(scroll_end, scrollEnd_);
          DARABONBA_PTR_FROM_JSON(server_name, serverName_);
          DARABONBA_PTR_FROM_JSON(steps, steps_);
          DARABONBA_PTR_FROM_JSON(strict_mode, strictMode_);
          DARABONBA_PTR_FROM_JSON(supported_cipher_suits, supportedCipherSuits_);
          DARABONBA_PTR_FROM_JSON(time_out, timeOut_);
          DARABONBA_PTR_FROM_JSON(trace_region, traceRegion_);
          DARABONBA_PTR_FROM_JSON(trace_type, traceType_);
          DARABONBA_PTR_FROM_JSON(traffic_hijack_element_blacklist, trafficHijackElementBlacklist_);
          DARABONBA_PTR_FROM_JSON(traffic_hijack_element_count, trafficHijackElementCount_);
          DARABONBA_PTR_FROM_JSON(traffic_hijack_element_whitelist, trafficHijackElementWhitelist_);
          DARABONBA_PTR_FROM_JSON(use_private_crt, usePrivateCrt_);
          DARABONBA_PTR_FROM_JSON(use_ssl, useSsl_);
          DARABONBA_PTR_FROM_JSON(username, username_);
          DARABONBA_PTR_FROM_JSON(waitTime_after_completion, waitTimeAfterCompletion_);
        };
        OptionJson() = default ;
        OptionJson(const OptionJson &) = default ;
        OptionJson(OptionJson &&) = default ;
        OptionJson(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OptionJson() = default ;
        OptionJson& operator=(const OptionJson &) = default ;
        OptionJson& operator=(OptionJson &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TrafficHijackElementWhitelist : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TrafficHijackElementWhitelist& obj) { 
            DARABONBA_PTR_TO_JSON(traffic_hijack_element_whitelist, trafficHijackElementWhitelist_);
          };
          friend void from_json(const Darabonba::Json& j, TrafficHijackElementWhitelist& obj) { 
            DARABONBA_PTR_FROM_JSON(traffic_hijack_element_whitelist, trafficHijackElementWhitelist_);
          };
          TrafficHijackElementWhitelist() = default ;
          TrafficHijackElementWhitelist(const TrafficHijackElementWhitelist &) = default ;
          TrafficHijackElementWhitelist(TrafficHijackElementWhitelist &&) = default ;
          TrafficHijackElementWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TrafficHijackElementWhitelist() = default ;
          TrafficHijackElementWhitelist& operator=(const TrafficHijackElementWhitelist &) = default ;
          TrafficHijackElementWhitelist& operator=(TrafficHijackElementWhitelist &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->trafficHijackElementWhitelist_ == nullptr; };
          // trafficHijackElementWhitelist Field Functions 
          bool hasTrafficHijackElementWhitelist() const { return this->trafficHijackElementWhitelist_ != nullptr;};
          void deleteTrafficHijackElementWhitelist() { this->trafficHijackElementWhitelist_ = nullptr;};
          inline const vector<string> & getTrafficHijackElementWhitelist() const { DARABONBA_PTR_GET_CONST(trafficHijackElementWhitelist_, vector<string>) };
          inline vector<string> getTrafficHijackElementWhitelist() { DARABONBA_PTR_GET(trafficHijackElementWhitelist_, vector<string>) };
          inline TrafficHijackElementWhitelist& setTrafficHijackElementWhitelist(const vector<string> & trafficHijackElementWhitelist) { DARABONBA_PTR_SET_VALUE(trafficHijackElementWhitelist_, trafficHijackElementWhitelist) };
          inline TrafficHijackElementWhitelist& setTrafficHijackElementWhitelist(vector<string> && trafficHijackElementWhitelist) { DARABONBA_PTR_SET_RVALUE(trafficHijackElementWhitelist_, trafficHijackElementWhitelist) };


        protected:
          shared_ptr<vector<string>> trafficHijackElementWhitelist_ {};
        };

        class TrafficHijackElementBlacklist : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TrafficHijackElementBlacklist& obj) { 
            DARABONBA_PTR_TO_JSON(traffic_hijack_element_blacklist, trafficHijackElementBlacklist_);
          };
          friend void from_json(const Darabonba::Json& j, TrafficHijackElementBlacklist& obj) { 
            DARABONBA_PTR_FROM_JSON(traffic_hijack_element_blacklist, trafficHijackElementBlacklist_);
          };
          TrafficHijackElementBlacklist() = default ;
          TrafficHijackElementBlacklist(const TrafficHijackElementBlacklist &) = default ;
          TrafficHijackElementBlacklist(TrafficHijackElementBlacklist &&) = default ;
          TrafficHijackElementBlacklist(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TrafficHijackElementBlacklist() = default ;
          TrafficHijackElementBlacklist& operator=(const TrafficHijackElementBlacklist &) = default ;
          TrafficHijackElementBlacklist& operator=(TrafficHijackElementBlacklist &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->trafficHijackElementBlacklist_ == nullptr; };
          // trafficHijackElementBlacklist Field Functions 
          bool hasTrafficHijackElementBlacklist() const { return this->trafficHijackElementBlacklist_ != nullptr;};
          void deleteTrafficHijackElementBlacklist() { this->trafficHijackElementBlacklist_ = nullptr;};
          inline const vector<string> & getTrafficHijackElementBlacklist() const { DARABONBA_PTR_GET_CONST(trafficHijackElementBlacklist_, vector<string>) };
          inline vector<string> getTrafficHijackElementBlacklist() { DARABONBA_PTR_GET(trafficHijackElementBlacklist_, vector<string>) };
          inline TrafficHijackElementBlacklist& setTrafficHijackElementBlacklist(const vector<string> & trafficHijackElementBlacklist) { DARABONBA_PTR_SET_VALUE(trafficHijackElementBlacklist_, trafficHijackElementBlacklist) };
          inline TrafficHijackElementBlacklist& setTrafficHijackElementBlacklist(vector<string> && trafficHijackElementBlacklist) { DARABONBA_PTR_SET_RVALUE(trafficHijackElementBlacklist_, trafficHijackElementBlacklist) };


        protected:
          shared_ptr<vector<string>> trafficHijackElementBlacklist_ {};
        };

        class Steps : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Steps& obj) { 
            DARABONBA_PTR_TO_JSON(steps, steps_);
          };
          friend void from_json(const Darabonba::Json& j, Steps& obj) { 
            DARABONBA_PTR_FROM_JSON(steps, steps_);
          };
          Steps() = default ;
          Steps(const Steps &) = default ;
          Steps(Steps &&) = default ;
          Steps(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Steps() = default ;
          Steps& operator=(const Steps &) = default ;
          Steps& operator=(Steps &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class StepsItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StepsItem& obj) { 
              DARABONBA_PTR_TO_JSON(allow_failure, allowFailure_);
              DARABONBA_PTR_TO_JSON(auto_extract_cookie, autoExtractCookie_);
              DARABONBA_PTR_TO_JSON(extracted_variables, extractedVariables_);
              DARABONBA_PTR_TO_JSON(is_critical, isCritical_);
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_PTR_TO_JSON(option, option_);
              DARABONBA_PTR_TO_JSON(step_name, stepName_);
              DARABONBA_PTR_TO_JSON(step_type, stepType_);
              DARABONBA_PTR_TO_JSON(url, url_);
              DARABONBA_PTR_TO_JSON(use_generated_cookie, useGeneratedCookie_);
              DARABONBA_PTR_TO_JSON(wait_time_in_secs, waitTimeInSecs_);
            };
            friend void from_json(const Darabonba::Json& j, StepsItem& obj) { 
              DARABONBA_PTR_FROM_JSON(allow_failure, allowFailure_);
              DARABONBA_PTR_FROM_JSON(auto_extract_cookie, autoExtractCookie_);
              DARABONBA_PTR_FROM_JSON(extracted_variables, extractedVariables_);
              DARABONBA_PTR_FROM_JSON(is_critical, isCritical_);
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_PTR_FROM_JSON(option, option_);
              DARABONBA_PTR_FROM_JSON(step_name, stepName_);
              DARABONBA_PTR_FROM_JSON(step_type, stepType_);
              DARABONBA_PTR_FROM_JSON(url, url_);
              DARABONBA_PTR_FROM_JSON(use_generated_cookie, useGeneratedCookie_);
              DARABONBA_PTR_FROM_JSON(wait_time_in_secs, waitTimeInSecs_);
            };
            StepsItem() = default ;
            StepsItem(const StepsItem &) = default ;
            StepsItem(StepsItem &&) = default ;
            StepsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~StepsItem() = default ;
            StepsItem& operator=(const StepsItem &) = default ;
            StepsItem& operator=(StepsItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ExtractedVariables : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ExtractedVariables& obj) { 
                DARABONBA_PTR_TO_JSON(extracted_variables, extractedVariables_);
              };
              friend void from_json(const Darabonba::Json& j, ExtractedVariables& obj) { 
                DARABONBA_PTR_FROM_JSON(extracted_variables, extractedVariables_);
              };
              ExtractedVariables() = default ;
              ExtractedVariables(const ExtractedVariables &) = default ;
              ExtractedVariables(ExtractedVariables &&) = default ;
              ExtractedVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ExtractedVariables() = default ;
              ExtractedVariables& operator=(const ExtractedVariables &) = default ;
              ExtractedVariables& operator=(ExtractedVariables &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ExtractedVariablesItem : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ExtractedVariablesItem& obj) { 
                  DARABONBA_PTR_TO_JSON(extracted_type, extractedType_);
                  DARABONBA_PTR_TO_JSON(field, field_);
                  DARABONBA_PTR_TO_JSON(name, name_);
                  DARABONBA_PTR_TO_JSON(parser, parser_);
                };
                friend void from_json(const Darabonba::Json& j, ExtractedVariablesItem& obj) { 
                  DARABONBA_PTR_FROM_JSON(extracted_type, extractedType_);
                  DARABONBA_PTR_FROM_JSON(field, field_);
                  DARABONBA_PTR_FROM_JSON(name, name_);
                  DARABONBA_PTR_FROM_JSON(parser, parser_);
                };
                ExtractedVariablesItem() = default ;
                ExtractedVariablesItem(const ExtractedVariablesItem &) = default ;
                ExtractedVariablesItem(ExtractedVariablesItem &&) = default ;
                ExtractedVariablesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ExtractedVariablesItem() = default ;
                ExtractedVariablesItem& operator=(const ExtractedVariablesItem &) = default ;
                ExtractedVariablesItem& operator=(ExtractedVariablesItem &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class Parser : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const Parser& obj) { 
                    DARABONBA_PTR_TO_JSON(parser_type, parserType_);
                    DARABONBA_PTR_TO_JSON(value, value_);
                  };
                  friend void from_json(const Darabonba::Json& j, Parser& obj) { 
                    DARABONBA_PTR_FROM_JSON(parser_type, parserType_);
                    DARABONBA_PTR_FROM_JSON(value, value_);
                  };
                  Parser() = default ;
                  Parser(const Parser &) = default ;
                  Parser(Parser &&) = default ;
                  Parser(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~Parser() = default ;
                  Parser& operator=(const Parser &) = default ;
                  Parser& operator=(Parser &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->parserType_ == nullptr
        && this->value_ == nullptr; };
                  // parserType Field Functions 
                  bool hasParserType() const { return this->parserType_ != nullptr;};
                  void deleteParserType() { this->parserType_ = nullptr;};
                  inline string getParserType() const { DARABONBA_PTR_GET_DEFAULT(parserType_, "") };
                  inline Parser& setParserType(string parserType) { DARABONBA_PTR_SET_VALUE(parserType_, parserType) };


                  // value Field Functions 
                  bool hasValue() const { return this->value_ != nullptr;};
                  void deleteValue() { this->value_ = nullptr;};
                  inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                  inline Parser& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


                protected:
                  shared_ptr<string> parserType_ {};
                  shared_ptr<string> value_ {};
                };

                virtual bool empty() const override { return this->extractedType_ == nullptr
        && this->field_ == nullptr && this->name_ == nullptr && this->parser_ == nullptr; };
                // extractedType Field Functions 
                bool hasExtractedType() const { return this->extractedType_ != nullptr;};
                void deleteExtractedType() { this->extractedType_ = nullptr;};
                inline string getExtractedType() const { DARABONBA_PTR_GET_DEFAULT(extractedType_, "") };
                inline ExtractedVariablesItem& setExtractedType(string extractedType) { DARABONBA_PTR_SET_VALUE(extractedType_, extractedType) };


                // field Field Functions 
                bool hasField() const { return this->field_ != nullptr;};
                void deleteField() { this->field_ = nullptr;};
                inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
                inline ExtractedVariablesItem& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


                // name Field Functions 
                bool hasName() const { return this->name_ != nullptr;};
                void deleteName() { this->name_ = nullptr;};
                inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                inline ExtractedVariablesItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                // parser Field Functions 
                bool hasParser() const { return this->parser_ != nullptr;};
                void deleteParser() { this->parser_ = nullptr;};
                inline const ExtractedVariablesItem::Parser & getParser() const { DARABONBA_PTR_GET_CONST(parser_, ExtractedVariablesItem::Parser) };
                inline ExtractedVariablesItem::Parser getParser() { DARABONBA_PTR_GET(parser_, ExtractedVariablesItem::Parser) };
                inline ExtractedVariablesItem& setParser(const ExtractedVariablesItem::Parser & parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };
                inline ExtractedVariablesItem& setParser(ExtractedVariablesItem::Parser && parser) { DARABONBA_PTR_SET_RVALUE(parser_, parser) };


              protected:
                shared_ptr<string> extractedType_ {};
                shared_ptr<string> field_ {};
                shared_ptr<string> name_ {};
                shared_ptr<ExtractedVariablesItem::Parser> parser_ {};
              };

              virtual bool empty() const override { return this->extractedVariables_ == nullptr; };
              // extractedVariables Field Functions 
              bool hasExtractedVariables() const { return this->extractedVariables_ != nullptr;};
              void deleteExtractedVariables() { this->extractedVariables_ = nullptr;};
              inline const vector<ExtractedVariables::ExtractedVariablesItem> & getExtractedVariables() const { DARABONBA_PTR_GET_CONST(extractedVariables_, vector<ExtractedVariables::ExtractedVariablesItem>) };
              inline vector<ExtractedVariables::ExtractedVariablesItem> getExtractedVariables() { DARABONBA_PTR_GET(extractedVariables_, vector<ExtractedVariables::ExtractedVariablesItem>) };
              inline ExtractedVariables& setExtractedVariables(const vector<ExtractedVariables::ExtractedVariablesItem> & extractedVariables) { DARABONBA_PTR_SET_VALUE(extractedVariables_, extractedVariables) };
              inline ExtractedVariables& setExtractedVariables(vector<ExtractedVariables::ExtractedVariablesItem> && extractedVariables) { DARABONBA_PTR_SET_RVALUE(extractedVariables_, extractedVariables) };


            protected:
              shared_ptr<vector<ExtractedVariables::ExtractedVariablesItem>> extractedVariables_ {};
            };

            virtual bool empty() const override { return this->allowFailure_ == nullptr
        && this->autoExtractCookie_ == nullptr && this->extractedVariables_ == nullptr && this->isCritical_ == nullptr && this->name_ == nullptr && this->option_ == nullptr
        && this->stepName_ == nullptr && this->stepType_ == nullptr && this->url_ == nullptr && this->useGeneratedCookie_ == nullptr && this->waitTimeInSecs_ == nullptr; };
            // allowFailure Field Functions 
            bool hasAllowFailure() const { return this->allowFailure_ != nullptr;};
            void deleteAllowFailure() { this->allowFailure_ = nullptr;};
            inline bool getAllowFailure() const { DARABONBA_PTR_GET_DEFAULT(allowFailure_, false) };
            inline StepsItem& setAllowFailure(bool allowFailure) { DARABONBA_PTR_SET_VALUE(allowFailure_, allowFailure) };


            // autoExtractCookie Field Functions 
            bool hasAutoExtractCookie() const { return this->autoExtractCookie_ != nullptr;};
            void deleteAutoExtractCookie() { this->autoExtractCookie_ = nullptr;};
            inline bool getAutoExtractCookie() const { DARABONBA_PTR_GET_DEFAULT(autoExtractCookie_, false) };
            inline StepsItem& setAutoExtractCookie(bool autoExtractCookie) { DARABONBA_PTR_SET_VALUE(autoExtractCookie_, autoExtractCookie) };


            // extractedVariables Field Functions 
            bool hasExtractedVariables() const { return this->extractedVariables_ != nullptr;};
            void deleteExtractedVariables() { this->extractedVariables_ = nullptr;};
            inline const StepsItem::ExtractedVariables & getExtractedVariables() const { DARABONBA_PTR_GET_CONST(extractedVariables_, StepsItem::ExtractedVariables) };
            inline StepsItem::ExtractedVariables getExtractedVariables() { DARABONBA_PTR_GET(extractedVariables_, StepsItem::ExtractedVariables) };
            inline StepsItem& setExtractedVariables(const StepsItem::ExtractedVariables & extractedVariables) { DARABONBA_PTR_SET_VALUE(extractedVariables_, extractedVariables) };
            inline StepsItem& setExtractedVariables(StepsItem::ExtractedVariables && extractedVariables) { DARABONBA_PTR_SET_RVALUE(extractedVariables_, extractedVariables) };


            // isCritical Field Functions 
            bool hasIsCritical() const { return this->isCritical_ != nullptr;};
            void deleteIsCritical() { this->isCritical_ = nullptr;};
            inline bool getIsCritical() const { DARABONBA_PTR_GET_DEFAULT(isCritical_, false) };
            inline StepsItem& setIsCritical(bool isCritical) { DARABONBA_PTR_SET_VALUE(isCritical_, isCritical) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline StepsItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // option Field Functions 
            bool hasOption() const { return this->option_ != nullptr;};
            void deleteOption() { this->option_ = nullptr;};
            inline string getOption() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
            inline StepsItem& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


            // stepName Field Functions 
            bool hasStepName() const { return this->stepName_ != nullptr;};
            void deleteStepName() { this->stepName_ = nullptr;};
            inline string getStepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
            inline StepsItem& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


            // stepType Field Functions 
            bool hasStepType() const { return this->stepType_ != nullptr;};
            void deleteStepType() { this->stepType_ = nullptr;};
            inline string getStepType() const { DARABONBA_PTR_GET_DEFAULT(stepType_, "") };
            inline StepsItem& setStepType(string stepType) { DARABONBA_PTR_SET_VALUE(stepType_, stepType) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline StepsItem& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


            // useGeneratedCookie Field Functions 
            bool hasUseGeneratedCookie() const { return this->useGeneratedCookie_ != nullptr;};
            void deleteUseGeneratedCookie() { this->useGeneratedCookie_ = nullptr;};
            inline bool getUseGeneratedCookie() const { DARABONBA_PTR_GET_DEFAULT(useGeneratedCookie_, false) };
            inline StepsItem& setUseGeneratedCookie(bool useGeneratedCookie) { DARABONBA_PTR_SET_VALUE(useGeneratedCookie_, useGeneratedCookie) };


            // waitTimeInSecs Field Functions 
            bool hasWaitTimeInSecs() const { return this->waitTimeInSecs_ != nullptr;};
            void deleteWaitTimeInSecs() { this->waitTimeInSecs_ = nullptr;};
            inline int32_t getWaitTimeInSecs() const { DARABONBA_PTR_GET_DEFAULT(waitTimeInSecs_, 0) };
            inline StepsItem& setWaitTimeInSecs(int32_t waitTimeInSecs) { DARABONBA_PTR_SET_VALUE(waitTimeInSecs_, waitTimeInSecs) };


          protected:
            shared_ptr<bool> allowFailure_ {};
            shared_ptr<bool> autoExtractCookie_ {};
            shared_ptr<StepsItem::ExtractedVariables> extractedVariables_ {};
            shared_ptr<bool> isCritical_ {};
            shared_ptr<string> name_ {};
            shared_ptr<string> option_ {};
            shared_ptr<string> stepName_ {};
            shared_ptr<string> stepType_ {};
            shared_ptr<string> url_ {};
            shared_ptr<bool> useGeneratedCookie_ {};
            shared_ptr<int32_t> waitTimeInSecs_ {};
          };

          virtual bool empty() const override { return this->steps_ == nullptr; };
          // steps Field Functions 
          bool hasSteps() const { return this->steps_ != nullptr;};
          void deleteSteps() { this->steps_ = nullptr;};
          inline const vector<Steps::StepsItem> & getSteps() const { DARABONBA_PTR_GET_CONST(steps_, vector<Steps::StepsItem>) };
          inline vector<Steps::StepsItem> getSteps() { DARABONBA_PTR_GET(steps_, vector<Steps::StepsItem>) };
          inline Steps& setSteps(const vector<Steps::StepsItem> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
          inline Steps& setSteps(vector<Steps::StepsItem> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


        protected:
          shared_ptr<vector<Steps::StepsItem>> steps_ {};
        };

        class QuicTarget : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const QuicTarget& obj) { 
            DARABONBA_PTR_TO_JSON(quic_target, quicTarget_);
          };
          friend void from_json(const Darabonba::Json& j, QuicTarget& obj) { 
            DARABONBA_PTR_FROM_JSON(quic_target, quicTarget_);
          };
          QuicTarget() = default ;
          QuicTarget(const QuicTarget &) = default ;
          QuicTarget(QuicTarget &&) = default ;
          QuicTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~QuicTarget() = default ;
          QuicTarget& operator=(const QuicTarget &) = default ;
          QuicTarget& operator=(QuicTarget &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->quicTarget_ == nullptr; };
          // quicTarget Field Functions 
          bool hasQuicTarget() const { return this->quicTarget_ != nullptr;};
          void deleteQuicTarget() { this->quicTarget_ = nullptr;};
          inline const vector<string> & getQuicTarget() const { DARABONBA_PTR_GET_CONST(quicTarget_, vector<string>) };
          inline vector<string> getQuicTarget() { DARABONBA_PTR_GET(quicTarget_, vector<string>) };
          inline QuicTarget& setQuicTarget(const vector<string> & quicTarget) { DARABONBA_PTR_SET_VALUE(quicTarget_, quicTarget) };
          inline QuicTarget& setQuicTarget(vector<string> && quicTarget) { DARABONBA_PTR_SET_RVALUE(quicTarget_, quicTarget) };


        protected:
          shared_ptr<vector<string>> quicTarget_ {};
        };

        class ExpectNonExistString : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExpectNonExistString& obj) { 
            DARABONBA_PTR_TO_JSON(expect_non_exist_string, expectNonExistString_);
          };
          friend void from_json(const Darabonba::Json& j, ExpectNonExistString& obj) { 
            DARABONBA_PTR_FROM_JSON(expect_non_exist_string, expectNonExistString_);
          };
          ExpectNonExistString() = default ;
          ExpectNonExistString(const ExpectNonExistString &) = default ;
          ExpectNonExistString(ExpectNonExistString &&) = default ;
          ExpectNonExistString(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExpectNonExistString() = default ;
          ExpectNonExistString& operator=(const ExpectNonExistString &) = default ;
          ExpectNonExistString& operator=(ExpectNonExistString &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->expectNonExistString_ == nullptr; };
          // expectNonExistString Field Functions 
          bool hasExpectNonExistString() const { return this->expectNonExistString_ != nullptr;};
          void deleteExpectNonExistString() { this->expectNonExistString_ = nullptr;};
          inline const vector<string> & getExpectNonExistString() const { DARABONBA_PTR_GET_CONST(expectNonExistString_, vector<string>) };
          inline vector<string> getExpectNonExistString() { DARABONBA_PTR_GET(expectNonExistString_, vector<string>) };
          inline ExpectNonExistString& setExpectNonExistString(const vector<string> & expectNonExistString) { DARABONBA_PTR_SET_VALUE(expectNonExistString_, expectNonExistString) };
          inline ExpectNonExistString& setExpectNonExistString(vector<string> && expectNonExistString) { DARABONBA_PTR_SET_RVALUE(expectNonExistString_, expectNonExistString) };


        protected:
          shared_ptr<vector<string>> expectNonExistString_ {};
        };

        class ExpectExistString : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExpectExistString& obj) { 
            DARABONBA_PTR_TO_JSON(expect_exist_string, expectExistString_);
          };
          friend void from_json(const Darabonba::Json& j, ExpectExistString& obj) { 
            DARABONBA_PTR_FROM_JSON(expect_exist_string, expectExistString_);
          };
          ExpectExistString() = default ;
          ExpectExistString(const ExpectExistString &) = default ;
          ExpectExistString(ExpectExistString &&) = default ;
          ExpectExistString(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExpectExistString() = default ;
          ExpectExistString& operator=(const ExpectExistString &) = default ;
          ExpectExistString& operator=(ExpectExistString &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->expectExistString_ == nullptr; };
          // expectExistString Field Functions 
          bool hasExpectExistString() const { return this->expectExistString_ != nullptr;};
          void deleteExpectExistString() { this->expectExistString_ = nullptr;};
          inline const vector<string> & getExpectExistString() const { DARABONBA_PTR_GET_CONST(expectExistString_, vector<string>) };
          inline vector<string> getExpectExistString() { DARABONBA_PTR_GET(expectExistString_, vector<string>) };
          inline ExpectExistString& setExpectExistString(const vector<string> & expectExistString) { DARABONBA_PTR_SET_VALUE(expectExistString_, expectExistString) };
          inline ExpectExistString& setExpectExistString(vector<string> && expectExistString) { DARABONBA_PTR_SET_RVALUE(expectExistString_, expectExistString) };


        protected:
          shared_ptr<vector<string>> expectExistString_ {};
        };

        class ConfigVariables : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConfigVariables& obj) { 
            DARABONBA_PTR_TO_JSON(config_variables, configVariables_);
          };
          friend void from_json(const Darabonba::Json& j, ConfigVariables& obj) { 
            DARABONBA_PTR_FROM_JSON(config_variables, configVariables_);
          };
          ConfigVariables() = default ;
          ConfigVariables(const ConfigVariables &) = default ;
          ConfigVariables(ConfigVariables &&) = default ;
          ConfigVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConfigVariables() = default ;
          ConfigVariables& operator=(const ConfigVariables &) = default ;
          ConfigVariables& operator=(ConfigVariables &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ConfigVariablesItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ConfigVariablesItem& obj) { 
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_PTR_TO_JSON(secure, secure_);
              DARABONBA_PTR_TO_JSON(value, value_);
            };
            friend void from_json(const Darabonba::Json& j, ConfigVariablesItem& obj) { 
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_PTR_FROM_JSON(secure, secure_);
              DARABONBA_PTR_FROM_JSON(value, value_);
            };
            ConfigVariablesItem() = default ;
            ConfigVariablesItem(const ConfigVariablesItem &) = default ;
            ConfigVariablesItem(ConfigVariablesItem &&) = default ;
            ConfigVariablesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ConfigVariablesItem() = default ;
            ConfigVariablesItem& operator=(const ConfigVariablesItem &) = default ;
            ConfigVariablesItem& operator=(ConfigVariablesItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->secure_ == nullptr && this->value_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline ConfigVariablesItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // secure Field Functions 
            bool hasSecure() const { return this->secure_ != nullptr;};
            void deleteSecure() { this->secure_ = nullptr;};
            inline bool getSecure() const { DARABONBA_PTR_GET_DEFAULT(secure_, false) };
            inline ConfigVariablesItem& setSecure(bool secure) { DARABONBA_PTR_SET_VALUE(secure_, secure) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline ConfigVariablesItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> name_ {};
            shared_ptr<bool> secure_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->configVariables_ == nullptr; };
          // configVariables Field Functions 
          bool hasConfigVariables() const { return this->configVariables_ != nullptr;};
          void deleteConfigVariables() { this->configVariables_ = nullptr;};
          inline const vector<ConfigVariables::ConfigVariablesItem> & getConfigVariables() const { DARABONBA_PTR_GET_CONST(configVariables_, vector<ConfigVariables::ConfigVariablesItem>) };
          inline vector<ConfigVariables::ConfigVariablesItem> getConfigVariables() { DARABONBA_PTR_GET(configVariables_, vector<ConfigVariables::ConfigVariablesItem>) };
          inline ConfigVariables& setConfigVariables(const vector<ConfigVariables::ConfigVariablesItem> & configVariables) { DARABONBA_PTR_SET_VALUE(configVariables_, configVariables) };
          inline ConfigVariables& setConfigVariables(vector<ConfigVariables::ConfigVariablesItem> && configVariables) { DARABONBA_PTR_SET_RVALUE(configVariables_, configVariables) };


        protected:
          shared_ptr<vector<ConfigVariables::ConfigVariablesItem>> configVariables_ {};
        };

        class BrowserInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BrowserInfo& obj) { 
            DARABONBA_PTR_TO_JSON(browser_info, browserInfo_);
          };
          friend void from_json(const Darabonba::Json& j, BrowserInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(browser_info, browserInfo_);
          };
          BrowserInfo() = default ;
          BrowserInfo(const BrowserInfo &) = default ;
          BrowserInfo(BrowserInfo &&) = default ;
          BrowserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BrowserInfo() = default ;
          BrowserInfo& operator=(const BrowserInfo &) = default ;
          BrowserInfo& operator=(BrowserInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BrowserInfoItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BrowserInfoItem& obj) { 
              DARABONBA_PTR_TO_JSON(browser, browser_);
              DARABONBA_PTR_TO_JSON(device, device_);
            };
            friend void from_json(const Darabonba::Json& j, BrowserInfoItem& obj) { 
              DARABONBA_PTR_FROM_JSON(browser, browser_);
              DARABONBA_PTR_FROM_JSON(device, device_);
            };
            BrowserInfoItem() = default ;
            BrowserInfoItem(const BrowserInfoItem &) = default ;
            BrowserInfoItem(BrowserInfoItem &&) = default ;
            BrowserInfoItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BrowserInfoItem() = default ;
            BrowserInfoItem& operator=(const BrowserInfoItem &) = default ;
            BrowserInfoItem& operator=(BrowserInfoItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->browser_ == nullptr
        && this->device_ == nullptr; };
            // browser Field Functions 
            bool hasBrowser() const { return this->browser_ != nullptr;};
            void deleteBrowser() { this->browser_ = nullptr;};
            inline string getBrowser() const { DARABONBA_PTR_GET_DEFAULT(browser_, "") };
            inline BrowserInfoItem& setBrowser(string browser) { DARABONBA_PTR_SET_VALUE(browser_, browser) };


            // device Field Functions 
            bool hasDevice() const { return this->device_ != nullptr;};
            void deleteDevice() { this->device_ = nullptr;};
            inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
            inline BrowserInfoItem& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


          protected:
            // The browser type.
            shared_ptr<string> browser_ {};
            // The device type.
            shared_ptr<string> device_ {};
          };

          virtual bool empty() const override { return this->browserInfo_ == nullptr; };
          // browserInfo Field Functions 
          bool hasBrowserInfo() const { return this->browserInfo_ != nullptr;};
          void deleteBrowserInfo() { this->browserInfo_ = nullptr;};
          inline const vector<BrowserInfo::BrowserInfoItem> & getBrowserInfo() const { DARABONBA_PTR_GET_CONST(browserInfo_, vector<BrowserInfo::BrowserInfoItem>) };
          inline vector<BrowserInfo::BrowserInfoItem> getBrowserInfo() { DARABONBA_PTR_GET(browserInfo_, vector<BrowserInfo::BrowserInfoItem>) };
          inline BrowserInfo& setBrowserInfo(const vector<BrowserInfo::BrowserInfoItem> & browserInfo) { DARABONBA_PTR_SET_VALUE(browserInfo_, browserInfo) };
          inline BrowserInfo& setBrowserInfo(vector<BrowserInfo::BrowserInfoItem> && browserInfo) { DARABONBA_PTR_SET_RVALUE(browserInfo_, browserInfo) };


        protected:
          shared_ptr<vector<BrowserInfo::BrowserInfoItem>> browserInfo_ {};
        };

        class BrowserHosts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BrowserHosts& obj) { 
            DARABONBA_PTR_TO_JSON(browser_hosts, browserHosts_);
          };
          friend void from_json(const Darabonba::Json& j, BrowserHosts& obj) { 
            DARABONBA_PTR_FROM_JSON(browser_hosts, browserHosts_);
          };
          BrowserHosts() = default ;
          BrowserHosts(const BrowserHosts &) = default ;
          BrowserHosts(BrowserHosts &&) = default ;
          BrowserHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BrowserHosts() = default ;
          BrowserHosts& operator=(const BrowserHosts &) = default ;
          BrowserHosts& operator=(BrowserHosts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->browserHosts_ == nullptr; };
          // browserHosts Field Functions 
          bool hasBrowserHosts() const { return this->browserHosts_ != nullptr;};
          void deleteBrowserHosts() { this->browserHosts_ = nullptr;};
          inline const vector<string> & getBrowserHosts() const { DARABONBA_PTR_GET_CONST(browserHosts_, vector<string>) };
          inline vector<string> getBrowserHosts() { DARABONBA_PTR_GET(browserHosts_, vector<string>) };
          inline BrowserHosts& setBrowserHosts(const vector<string> & browserHosts) { DARABONBA_PTR_SET_VALUE(browserHosts_, browserHosts) };
          inline BrowserHosts& setBrowserHosts(vector<string> && browserHosts) { DARABONBA_PTR_SET_RVALUE(browserHosts_, browserHosts) };


        protected:
          shared_ptr<vector<string>> browserHosts_ {};
        };

        class BrowserHeaders : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BrowserHeaders& obj) { 
            DARABONBA_PTR_TO_JSON(browser_headers, browserHeaders_);
          };
          friend void from_json(const Darabonba::Json& j, BrowserHeaders& obj) { 
            DARABONBA_PTR_FROM_JSON(browser_headers, browserHeaders_);
          };
          BrowserHeaders() = default ;
          BrowserHeaders(const BrowserHeaders &) = default ;
          BrowserHeaders(BrowserHeaders &&) = default ;
          BrowserHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BrowserHeaders() = default ;
          BrowserHeaders& operator=(const BrowserHeaders &) = default ;
          BrowserHeaders& operator=(BrowserHeaders &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->browserHeaders_ == nullptr; };
          // browserHeaders Field Functions 
          bool hasBrowserHeaders() const { return this->browserHeaders_ != nullptr;};
          void deleteBrowserHeaders() { this->browserHeaders_ = nullptr;};
          inline const vector<Darabonba::Json> & getBrowserHeaders() const { DARABONBA_PTR_GET_CONST(browserHeaders_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getBrowserHeaders() { DARABONBA_PTR_GET(browserHeaders_, vector<Darabonba::Json>) };
          inline BrowserHeaders& setBrowserHeaders(const vector<Darabonba::Json> & browserHeaders) { DARABONBA_PTR_SET_VALUE(browserHeaders_, browserHeaders) };
          inline BrowserHeaders& setBrowserHeaders(vector<Darabonba::Json> && browserHeaders) { DARABONBA_PTR_SET_RVALUE(browserHeaders_, browserHeaders) };


        protected:
          shared_ptr<vector<Darabonba::Json>> browserHeaders_ {};
        };

        class BlockedUrlList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BlockedUrlList& obj) { 
            DARABONBA_PTR_TO_JSON(blocked_url_list, blockedUrlList_);
          };
          friend void from_json(const Darabonba::Json& j, BlockedUrlList& obj) { 
            DARABONBA_PTR_FROM_JSON(blocked_url_list, blockedUrlList_);
          };
          BlockedUrlList() = default ;
          BlockedUrlList(const BlockedUrlList &) = default ;
          BlockedUrlList(BlockedUrlList &&) = default ;
          BlockedUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BlockedUrlList() = default ;
          BlockedUrlList& operator=(const BlockedUrlList &) = default ;
          BlockedUrlList& operator=(BlockedUrlList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->blockedUrlList_ == nullptr; };
          // blockedUrlList Field Functions 
          bool hasBlockedUrlList() const { return this->blockedUrlList_ != nullptr;};
          void deleteBlockedUrlList() { this->blockedUrlList_ = nullptr;};
          inline const vector<string> & getBlockedUrlList() const { DARABONBA_PTR_GET_CONST(blockedUrlList_, vector<string>) };
          inline vector<string> getBlockedUrlList() { DARABONBA_PTR_GET(blockedUrlList_, vector<string>) };
          inline BlockedUrlList& setBlockedUrlList(const vector<string> & blockedUrlList) { DARABONBA_PTR_SET_VALUE(blockedUrlList_, blockedUrlList) };
          inline BlockedUrlList& setBlockedUrlList(vector<string> && blockedUrlList) { DARABONBA_PTR_SET_RVALUE(blockedUrlList_, blockedUrlList) };


        protected:
          shared_ptr<vector<string>> blockedUrlList_ {};
        };

        class AuthInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthInfo& obj) { 
            DARABONBA_PTR_TO_JSON(access_key_id, accessKeyId_);
            DARABONBA_PTR_TO_JSON(access_key_secret, accessKeySecret_);
            DARABONBA_PTR_TO_JSON(api_action, apiAction_);
            DARABONBA_PTR_TO_JSON(api_version, apiVersion_);
            DARABONBA_PTR_TO_JSON(auth_style, authStyle_);
            DARABONBA_PTR_TO_JSON(client_id, clientId_);
            DARABONBA_PTR_TO_JSON(client_secret, clientSecret_);
            DARABONBA_PTR_TO_JSON(grant_type, grantType_);
            DARABONBA_PTR_TO_JSON(password, password_);
            DARABONBA_PTR_TO_JSON(region_id, regionId_);
            DARABONBA_PTR_TO_JSON(scopes, scopes_);
            DARABONBA_PTR_TO_JSON(service_name, serviceName_);
            DARABONBA_PTR_TO_JSON(session_token, sessionToken_);
            DARABONBA_PTR_TO_JSON(token_url, tokenUrl_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(use_cookie_session_key, useCookieSessionKey_);
            DARABONBA_PTR_TO_JSON(username, username_);
            DARABONBA_PTR_TO_JSON(with_addon_resources, withAddonResources_);
          };
          friend void from_json(const Darabonba::Json& j, AuthInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(access_key_id, accessKeyId_);
            DARABONBA_PTR_FROM_JSON(access_key_secret, accessKeySecret_);
            DARABONBA_PTR_FROM_JSON(api_action, apiAction_);
            DARABONBA_PTR_FROM_JSON(api_version, apiVersion_);
            DARABONBA_PTR_FROM_JSON(auth_style, authStyle_);
            DARABONBA_PTR_FROM_JSON(client_id, clientId_);
            DARABONBA_PTR_FROM_JSON(client_secret, clientSecret_);
            DARABONBA_PTR_FROM_JSON(grant_type, grantType_);
            DARABONBA_PTR_FROM_JSON(password, password_);
            DARABONBA_PTR_FROM_JSON(region_id, regionId_);
            DARABONBA_PTR_FROM_JSON(scopes, scopes_);
            DARABONBA_PTR_FROM_JSON(service_name, serviceName_);
            DARABONBA_PTR_FROM_JSON(session_token, sessionToken_);
            DARABONBA_PTR_FROM_JSON(token_url, tokenUrl_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(use_cookie_session_key, useCookieSessionKey_);
            DARABONBA_PTR_FROM_JSON(username, username_);
            DARABONBA_PTR_FROM_JSON(with_addon_resources, withAddonResources_);
          };
          AuthInfo() = default ;
          AuthInfo(const AuthInfo &) = default ;
          AuthInfo(AuthInfo &&) = default ;
          AuthInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthInfo() = default ;
          AuthInfo& operator=(const AuthInfo &) = default ;
          AuthInfo& operator=(AuthInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Scopes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Scopes& obj) { 
              DARABONBA_PTR_TO_JSON(scopes, scopes_);
            };
            friend void from_json(const Darabonba::Json& j, Scopes& obj) { 
              DARABONBA_PTR_FROM_JSON(scopes, scopes_);
            };
            Scopes() = default ;
            Scopes(const Scopes &) = default ;
            Scopes(Scopes &&) = default ;
            Scopes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Scopes() = default ;
            Scopes& operator=(const Scopes &) = default ;
            Scopes& operator=(Scopes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->scopes_ == nullptr; };
            // scopes Field Functions 
            bool hasScopes() const { return this->scopes_ != nullptr;};
            void deleteScopes() { this->scopes_ = nullptr;};
            inline const vector<string> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
            inline vector<string> getScopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
            inline Scopes& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
            inline Scopes& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


          protected:
            shared_ptr<vector<string>> scopes_ {};
          };

          virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->accessKeySecret_ == nullptr && this->apiAction_ == nullptr && this->apiVersion_ == nullptr && this->authStyle_ == nullptr && this->clientId_ == nullptr
        && this->clientSecret_ == nullptr && this->grantType_ == nullptr && this->password_ == nullptr && this->regionId_ == nullptr && this->scopes_ == nullptr
        && this->serviceName_ == nullptr && this->sessionToken_ == nullptr && this->tokenUrl_ == nullptr && this->type_ == nullptr && this->useCookieSessionKey_ == nullptr
        && this->username_ == nullptr && this->withAddonResources_ == nullptr; };
          // accessKeyId Field Functions 
          bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
          void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
          inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
          inline AuthInfo& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


          // accessKeySecret Field Functions 
          bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
          void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
          inline string getAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
          inline AuthInfo& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


          // apiAction Field Functions 
          bool hasApiAction() const { return this->apiAction_ != nullptr;};
          void deleteApiAction() { this->apiAction_ = nullptr;};
          inline string getApiAction() const { DARABONBA_PTR_GET_DEFAULT(apiAction_, "") };
          inline AuthInfo& setApiAction(string apiAction) { DARABONBA_PTR_SET_VALUE(apiAction_, apiAction) };


          // apiVersion Field Functions 
          bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
          void deleteApiVersion() { this->apiVersion_ = nullptr;};
          inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
          inline AuthInfo& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


          // authStyle Field Functions 
          bool hasAuthStyle() const { return this->authStyle_ != nullptr;};
          void deleteAuthStyle() { this->authStyle_ = nullptr;};
          inline string getAuthStyle() const { DARABONBA_PTR_GET_DEFAULT(authStyle_, "") };
          inline AuthInfo& setAuthStyle(string authStyle) { DARABONBA_PTR_SET_VALUE(authStyle_, authStyle) };


          // clientId Field Functions 
          bool hasClientId() const { return this->clientId_ != nullptr;};
          void deleteClientId() { this->clientId_ = nullptr;};
          inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
          inline AuthInfo& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


          // clientSecret Field Functions 
          bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
          void deleteClientSecret() { this->clientSecret_ = nullptr;};
          inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
          inline AuthInfo& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


          // grantType Field Functions 
          bool hasGrantType() const { return this->grantType_ != nullptr;};
          void deleteGrantType() { this->grantType_ = nullptr;};
          inline string getGrantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
          inline AuthInfo& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


          // password Field Functions 
          bool hasPassword() const { return this->password_ != nullptr;};
          void deletePassword() { this->password_ = nullptr;};
          inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
          inline AuthInfo& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline AuthInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // scopes Field Functions 
          bool hasScopes() const { return this->scopes_ != nullptr;};
          void deleteScopes() { this->scopes_ = nullptr;};
          inline const AuthInfo::Scopes & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, AuthInfo::Scopes) };
          inline AuthInfo::Scopes getScopes() { DARABONBA_PTR_GET(scopes_, AuthInfo::Scopes) };
          inline AuthInfo& setScopes(const AuthInfo::Scopes & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
          inline AuthInfo& setScopes(AuthInfo::Scopes && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


          // serviceName Field Functions 
          bool hasServiceName() const { return this->serviceName_ != nullptr;};
          void deleteServiceName() { this->serviceName_ = nullptr;};
          inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
          inline AuthInfo& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


          // sessionToken Field Functions 
          bool hasSessionToken() const { return this->sessionToken_ != nullptr;};
          void deleteSessionToken() { this->sessionToken_ = nullptr;};
          inline string getSessionToken() const { DARABONBA_PTR_GET_DEFAULT(sessionToken_, "") };
          inline AuthInfo& setSessionToken(string sessionToken) { DARABONBA_PTR_SET_VALUE(sessionToken_, sessionToken) };


          // tokenUrl Field Functions 
          bool hasTokenUrl() const { return this->tokenUrl_ != nullptr;};
          void deleteTokenUrl() { this->tokenUrl_ = nullptr;};
          inline string getTokenUrl() const { DARABONBA_PTR_GET_DEFAULT(tokenUrl_, "") };
          inline AuthInfo& setTokenUrl(string tokenUrl) { DARABONBA_PTR_SET_VALUE(tokenUrl_, tokenUrl) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline AuthInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // useCookieSessionKey Field Functions 
          bool hasUseCookieSessionKey() const { return this->useCookieSessionKey_ != nullptr;};
          void deleteUseCookieSessionKey() { this->useCookieSessionKey_ = nullptr;};
          inline bool getUseCookieSessionKey() const { DARABONBA_PTR_GET_DEFAULT(useCookieSessionKey_, false) };
          inline AuthInfo& setUseCookieSessionKey(bool useCookieSessionKey) { DARABONBA_PTR_SET_VALUE(useCookieSessionKey_, useCookieSessionKey) };


          // username Field Functions 
          bool hasUsername() const { return this->username_ != nullptr;};
          void deleteUsername() { this->username_ = nullptr;};
          inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
          inline AuthInfo& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


          // withAddonResources Field Functions 
          bool hasWithAddonResources() const { return this->withAddonResources_ != nullptr;};
          void deleteWithAddonResources() { this->withAddonResources_ = nullptr;};
          inline bool getWithAddonResources() const { DARABONBA_PTR_GET_DEFAULT(withAddonResources_, false) };
          inline AuthInfo& setWithAddonResources(bool withAddonResources) { DARABONBA_PTR_SET_VALUE(withAddonResources_, withAddonResources) };


        protected:
          shared_ptr<string> accessKeyId_ {};
          shared_ptr<string> accessKeySecret_ {};
          shared_ptr<string> apiAction_ {};
          shared_ptr<string> apiVersion_ {};
          shared_ptr<string> authStyle_ {};
          shared_ptr<string> clientId_ {};
          shared_ptr<string> clientSecret_ {};
          shared_ptr<string> grantType_ {};
          shared_ptr<string> password_ {};
          shared_ptr<string> regionId_ {};
          shared_ptr<AuthInfo::Scopes> scopes_ {};
          shared_ptr<string> serviceName_ {};
          shared_ptr<string> sessionToken_ {};
          shared_ptr<string> tokenUrl_ {};
          shared_ptr<string> type_ {};
          shared_ptr<bool> useCookieSessionKey_ {};
          shared_ptr<string> username_ {};
          shared_ptr<bool> withAddonResources_ {};
        };

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
            // The operator. Valid values:
            // - contains: contains
            // - doesNotContain: does not contain
            // - matches: matches a regular expression
            // - doesNotMatch: does not match a regular expression
            // - is: equal to
            // - isNot: not equal to
            // - lessThan: less than
            // - moreThan: greater than
            shared_ptr<string> operator_ {};
            // The path to the assertion.
            // - If the assertion type is body_json, the path is json path.
            // - If the assertion type is body_xml, the path is xml path.
            shared_ptr<string> property_ {};
            // The value or character to which the condition of the assertion is compared.
            shared_ptr<string> target_ {};
            // The assertion type. Valid values:
            // - response_time: checks whether the response time meets expectations.
            // - status_code: checks whether the HTTP status code meets expectations.
            // - header: checks whether the fields in the response header meet expectations.
            // - body_text: check whether the content in the response body meets expectations by using text matching.
            // - body_json: check whether the content in the response body meets expectations by using JSON parsing (JSONPath).
            // - body_xml: check whether the content in the response body meets expectations by using XML parsing (XPath).
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

        virtual bool empty() const override { return this->assertions_ == nullptr
        && this->attempts_ == nullptr && this->authInfo_ == nullptr && this->blockedUrlList_ == nullptr && this->browserHeaders_ == nullptr && this->browserHosts_ == nullptr
        && this->browserInfo_ == nullptr && this->browserInsecure_ == nullptr && this->browserTaskVersion_ == nullptr && this->configVariables_ == nullptr && this->cookie_ == nullptr
        && this->diagnosisMtr_ == nullptr && this->diagnosisPing_ == nullptr && this->dnsHijackWhitelist_ == nullptr && this->dnsMatchRule_ == nullptr && this->dnsServer_ == nullptr
        && this->dnsType_ == nullptr && this->emptyMessage_ == nullptr && this->enablePacketCapture_ == nullptr && this->expectExistString_ == nullptr && this->expectNonExistString_ == nullptr
        && this->expectValue_ == nullptr && this->failureRate_ == nullptr && this->header_ == nullptr && this->hops_ == nullptr && this->hostBinding_ == nullptr
        && this->hostBindingType_ == nullptr && this->httpMethod_ == nullptr && this->icmpTimeoutMillis_ == nullptr && this->ipNetwork_ == nullptr && this->isBase64Encode_ == nullptr
        && this->matchRule_ == nullptr && this->maxTlsVersion_ == nullptr && this->minTlsVersion_ == nullptr && this->password_ == nullptr && this->pingNum_ == nullptr
        && this->pingPort_ == nullptr && this->pingType_ == nullptr && this->port_ == nullptr && this->privateCrtFileName_ == nullptr && this->protocol_ == nullptr
        && this->quicEnabled_ == nullptr && this->quicTarget_ == nullptr && this->requestContent_ == nullptr && this->requestFormat_ == nullptr && this->responseContent_ == nullptr
        && this->responseFormat_ == nullptr && this->retryDelay_ == nullptr && this->safeLink_ == nullptr && this->screenShot_ == nullptr && this->scrollEnd_ == nullptr
        && this->serverName_ == nullptr && this->steps_ == nullptr && this->strictMode_ == nullptr && this->supportedCipherSuits_ == nullptr && this->timeOut_ == nullptr
        && this->traceRegion_ == nullptr && this->traceType_ == nullptr && this->trafficHijackElementBlacklist_ == nullptr && this->trafficHijackElementCount_ == nullptr && this->trafficHijackElementWhitelist_ == nullptr
        && this->usePrivateCrt_ == nullptr && this->useSsl_ == nullptr && this->username_ == nullptr && this->waitTimeAfterCompletion_ == nullptr; };
        // assertions Field Functions 
        bool hasAssertions() const { return this->assertions_ != nullptr;};
        void deleteAssertions() { this->assertions_ = nullptr;};
        inline const OptionJson::Assertions & getAssertions() const { DARABONBA_PTR_GET_CONST(assertions_, OptionJson::Assertions) };
        inline OptionJson::Assertions getAssertions() { DARABONBA_PTR_GET(assertions_, OptionJson::Assertions) };
        inline OptionJson& setAssertions(const OptionJson::Assertions & assertions) { DARABONBA_PTR_SET_VALUE(assertions_, assertions) };
        inline OptionJson& setAssertions(OptionJson::Assertions && assertions) { DARABONBA_PTR_SET_RVALUE(assertions_, assertions) };


        // attempts Field Functions 
        bool hasAttempts() const { return this->attempts_ != nullptr;};
        void deleteAttempts() { this->attempts_ = nullptr;};
        inline int64_t getAttempts() const { DARABONBA_PTR_GET_DEFAULT(attempts_, 0L) };
        inline OptionJson& setAttempts(int64_t attempts) { DARABONBA_PTR_SET_VALUE(attempts_, attempts) };


        // authInfo Field Functions 
        bool hasAuthInfo() const { return this->authInfo_ != nullptr;};
        void deleteAuthInfo() { this->authInfo_ = nullptr;};
        inline const OptionJson::AuthInfo & getAuthInfo() const { DARABONBA_PTR_GET_CONST(authInfo_, OptionJson::AuthInfo) };
        inline OptionJson::AuthInfo getAuthInfo() { DARABONBA_PTR_GET(authInfo_, OptionJson::AuthInfo) };
        inline OptionJson& setAuthInfo(const OptionJson::AuthInfo & authInfo) { DARABONBA_PTR_SET_VALUE(authInfo_, authInfo) };
        inline OptionJson& setAuthInfo(OptionJson::AuthInfo && authInfo) { DARABONBA_PTR_SET_RVALUE(authInfo_, authInfo) };


        // blockedUrlList Field Functions 
        bool hasBlockedUrlList() const { return this->blockedUrlList_ != nullptr;};
        void deleteBlockedUrlList() { this->blockedUrlList_ = nullptr;};
        inline const OptionJson::BlockedUrlList & getBlockedUrlList() const { DARABONBA_PTR_GET_CONST(blockedUrlList_, OptionJson::BlockedUrlList) };
        inline OptionJson::BlockedUrlList getBlockedUrlList() { DARABONBA_PTR_GET(blockedUrlList_, OptionJson::BlockedUrlList) };
        inline OptionJson& setBlockedUrlList(const OptionJson::BlockedUrlList & blockedUrlList) { DARABONBA_PTR_SET_VALUE(blockedUrlList_, blockedUrlList) };
        inline OptionJson& setBlockedUrlList(OptionJson::BlockedUrlList && blockedUrlList) { DARABONBA_PTR_SET_RVALUE(blockedUrlList_, blockedUrlList) };


        // browserHeaders Field Functions 
        bool hasBrowserHeaders() const { return this->browserHeaders_ != nullptr;};
        void deleteBrowserHeaders() { this->browserHeaders_ = nullptr;};
        inline const OptionJson::BrowserHeaders & getBrowserHeaders() const { DARABONBA_PTR_GET_CONST(browserHeaders_, OptionJson::BrowserHeaders) };
        inline OptionJson::BrowserHeaders getBrowserHeaders() { DARABONBA_PTR_GET(browserHeaders_, OptionJson::BrowserHeaders) };
        inline OptionJson& setBrowserHeaders(const OptionJson::BrowserHeaders & browserHeaders) { DARABONBA_PTR_SET_VALUE(browserHeaders_, browserHeaders) };
        inline OptionJson& setBrowserHeaders(OptionJson::BrowserHeaders && browserHeaders) { DARABONBA_PTR_SET_RVALUE(browserHeaders_, browserHeaders) };


        // browserHosts Field Functions 
        bool hasBrowserHosts() const { return this->browserHosts_ != nullptr;};
        void deleteBrowserHosts() { this->browserHosts_ = nullptr;};
        inline const OptionJson::BrowserHosts & getBrowserHosts() const { DARABONBA_PTR_GET_CONST(browserHosts_, OptionJson::BrowserHosts) };
        inline OptionJson::BrowserHosts getBrowserHosts() { DARABONBA_PTR_GET(browserHosts_, OptionJson::BrowserHosts) };
        inline OptionJson& setBrowserHosts(const OptionJson::BrowserHosts & browserHosts) { DARABONBA_PTR_SET_VALUE(browserHosts_, browserHosts) };
        inline OptionJson& setBrowserHosts(OptionJson::BrowserHosts && browserHosts) { DARABONBA_PTR_SET_RVALUE(browserHosts_, browserHosts) };


        // browserInfo Field Functions 
        bool hasBrowserInfo() const { return this->browserInfo_ != nullptr;};
        void deleteBrowserInfo() { this->browserInfo_ = nullptr;};
        inline const OptionJson::BrowserInfo & getBrowserInfo() const { DARABONBA_PTR_GET_CONST(browserInfo_, OptionJson::BrowserInfo) };
        inline OptionJson::BrowserInfo getBrowserInfo() { DARABONBA_PTR_GET(browserInfo_, OptionJson::BrowserInfo) };
        inline OptionJson& setBrowserInfo(const OptionJson::BrowserInfo & browserInfo) { DARABONBA_PTR_SET_VALUE(browserInfo_, browserInfo) };
        inline OptionJson& setBrowserInfo(OptionJson::BrowserInfo && browserInfo) { DARABONBA_PTR_SET_RVALUE(browserInfo_, browserInfo) };


        // browserInsecure Field Functions 
        bool hasBrowserInsecure() const { return this->browserInsecure_ != nullptr;};
        void deleteBrowserInsecure() { this->browserInsecure_ = nullptr;};
        inline bool getBrowserInsecure() const { DARABONBA_PTR_GET_DEFAULT(browserInsecure_, false) };
        inline OptionJson& setBrowserInsecure(bool browserInsecure) { DARABONBA_PTR_SET_VALUE(browserInsecure_, browserInsecure) };


        // browserTaskVersion Field Functions 
        bool hasBrowserTaskVersion() const { return this->browserTaskVersion_ != nullptr;};
        void deleteBrowserTaskVersion() { this->browserTaskVersion_ = nullptr;};
        inline string getBrowserTaskVersion() const { DARABONBA_PTR_GET_DEFAULT(browserTaskVersion_, "") };
        inline OptionJson& setBrowserTaskVersion(string browserTaskVersion) { DARABONBA_PTR_SET_VALUE(browserTaskVersion_, browserTaskVersion) };


        // configVariables Field Functions 
        bool hasConfigVariables() const { return this->configVariables_ != nullptr;};
        void deleteConfigVariables() { this->configVariables_ = nullptr;};
        inline const OptionJson::ConfigVariables & getConfigVariables() const { DARABONBA_PTR_GET_CONST(configVariables_, OptionJson::ConfigVariables) };
        inline OptionJson::ConfigVariables getConfigVariables() { DARABONBA_PTR_GET(configVariables_, OptionJson::ConfigVariables) };
        inline OptionJson& setConfigVariables(const OptionJson::ConfigVariables & configVariables) { DARABONBA_PTR_SET_VALUE(configVariables_, configVariables) };
        inline OptionJson& setConfigVariables(OptionJson::ConfigVariables && configVariables) { DARABONBA_PTR_SET_RVALUE(configVariables_, configVariables) };


        // cookie Field Functions 
        bool hasCookie() const { return this->cookie_ != nullptr;};
        void deleteCookie() { this->cookie_ = nullptr;};
        inline string getCookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
        inline OptionJson& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


        // diagnosisMtr Field Functions 
        bool hasDiagnosisMtr() const { return this->diagnosisMtr_ != nullptr;};
        void deleteDiagnosisMtr() { this->diagnosisMtr_ = nullptr;};
        inline bool getDiagnosisMtr() const { DARABONBA_PTR_GET_DEFAULT(diagnosisMtr_, false) };
        inline OptionJson& setDiagnosisMtr(bool diagnosisMtr) { DARABONBA_PTR_SET_VALUE(diagnosisMtr_, diagnosisMtr) };


        // diagnosisPing Field Functions 
        bool hasDiagnosisPing() const { return this->diagnosisPing_ != nullptr;};
        void deleteDiagnosisPing() { this->diagnosisPing_ = nullptr;};
        inline bool getDiagnosisPing() const { DARABONBA_PTR_GET_DEFAULT(diagnosisPing_, false) };
        inline OptionJson& setDiagnosisPing(bool diagnosisPing) { DARABONBA_PTR_SET_VALUE(diagnosisPing_, diagnosisPing) };


        // dnsHijackWhitelist Field Functions 
        bool hasDnsHijackWhitelist() const { return this->dnsHijackWhitelist_ != nullptr;};
        void deleteDnsHijackWhitelist() { this->dnsHijackWhitelist_ = nullptr;};
        inline string getDnsHijackWhitelist() const { DARABONBA_PTR_GET_DEFAULT(dnsHijackWhitelist_, "") };
        inline OptionJson& setDnsHijackWhitelist(string dnsHijackWhitelist) { DARABONBA_PTR_SET_VALUE(dnsHijackWhitelist_, dnsHijackWhitelist) };


        // dnsMatchRule Field Functions 
        bool hasDnsMatchRule() const { return this->dnsMatchRule_ != nullptr;};
        void deleteDnsMatchRule() { this->dnsMatchRule_ = nullptr;};
        inline string getDnsMatchRule() const { DARABONBA_PTR_GET_DEFAULT(dnsMatchRule_, "") };
        inline OptionJson& setDnsMatchRule(string dnsMatchRule) { DARABONBA_PTR_SET_VALUE(dnsMatchRule_, dnsMatchRule) };


        // dnsServer Field Functions 
        bool hasDnsServer() const { return this->dnsServer_ != nullptr;};
        void deleteDnsServer() { this->dnsServer_ = nullptr;};
        inline string getDnsServer() const { DARABONBA_PTR_GET_DEFAULT(dnsServer_, "") };
        inline OptionJson& setDnsServer(string dnsServer) { DARABONBA_PTR_SET_VALUE(dnsServer_, dnsServer) };


        // dnsType Field Functions 
        bool hasDnsType() const { return this->dnsType_ != nullptr;};
        void deleteDnsType() { this->dnsType_ = nullptr;};
        inline string getDnsType() const { DARABONBA_PTR_GET_DEFAULT(dnsType_, "") };
        inline OptionJson& setDnsType(string dnsType) { DARABONBA_PTR_SET_VALUE(dnsType_, dnsType) };


        // emptyMessage Field Functions 
        bool hasEmptyMessage() const { return this->emptyMessage_ != nullptr;};
        void deleteEmptyMessage() { this->emptyMessage_ = nullptr;};
        inline bool getEmptyMessage() const { DARABONBA_PTR_GET_DEFAULT(emptyMessage_, false) };
        inline OptionJson& setEmptyMessage(bool emptyMessage) { DARABONBA_PTR_SET_VALUE(emptyMessage_, emptyMessage) };


        // enablePacketCapture Field Functions 
        bool hasEnablePacketCapture() const { return this->enablePacketCapture_ != nullptr;};
        void deleteEnablePacketCapture() { this->enablePacketCapture_ = nullptr;};
        inline bool getEnablePacketCapture() const { DARABONBA_PTR_GET_DEFAULT(enablePacketCapture_, false) };
        inline OptionJson& setEnablePacketCapture(bool enablePacketCapture) { DARABONBA_PTR_SET_VALUE(enablePacketCapture_, enablePacketCapture) };


        // expectExistString Field Functions 
        bool hasExpectExistString() const { return this->expectExistString_ != nullptr;};
        void deleteExpectExistString() { this->expectExistString_ = nullptr;};
        inline const OptionJson::ExpectExistString & getExpectExistString() const { DARABONBA_PTR_GET_CONST(expectExistString_, OptionJson::ExpectExistString) };
        inline OptionJson::ExpectExistString getExpectExistString() { DARABONBA_PTR_GET(expectExistString_, OptionJson::ExpectExistString) };
        inline OptionJson& setExpectExistString(const OptionJson::ExpectExistString & expectExistString) { DARABONBA_PTR_SET_VALUE(expectExistString_, expectExistString) };
        inline OptionJson& setExpectExistString(OptionJson::ExpectExistString && expectExistString) { DARABONBA_PTR_SET_RVALUE(expectExistString_, expectExistString) };


        // expectNonExistString Field Functions 
        bool hasExpectNonExistString() const { return this->expectNonExistString_ != nullptr;};
        void deleteExpectNonExistString() { this->expectNonExistString_ = nullptr;};
        inline const OptionJson::ExpectNonExistString & getExpectNonExistString() const { DARABONBA_PTR_GET_CONST(expectNonExistString_, OptionJson::ExpectNonExistString) };
        inline OptionJson::ExpectNonExistString getExpectNonExistString() { DARABONBA_PTR_GET(expectNonExistString_, OptionJson::ExpectNonExistString) };
        inline OptionJson& setExpectNonExistString(const OptionJson::ExpectNonExistString & expectNonExistString) { DARABONBA_PTR_SET_VALUE(expectNonExistString_, expectNonExistString) };
        inline OptionJson& setExpectNonExistString(OptionJson::ExpectNonExistString && expectNonExistString) { DARABONBA_PTR_SET_RVALUE(expectNonExistString_, expectNonExistString) };


        // expectValue Field Functions 
        bool hasExpectValue() const { return this->expectValue_ != nullptr;};
        void deleteExpectValue() { this->expectValue_ = nullptr;};
        inline string getExpectValue() const { DARABONBA_PTR_GET_DEFAULT(expectValue_, "") };
        inline OptionJson& setExpectValue(string expectValue) { DARABONBA_PTR_SET_VALUE(expectValue_, expectValue) };


        // failureRate Field Functions 
        bool hasFailureRate() const { return this->failureRate_ != nullptr;};
        void deleteFailureRate() { this->failureRate_ = nullptr;};
        inline float getFailureRate() const { DARABONBA_PTR_GET_DEFAULT(failureRate_, 0.0) };
        inline OptionJson& setFailureRate(float failureRate) { DARABONBA_PTR_SET_VALUE(failureRate_, failureRate) };


        // header Field Functions 
        bool hasHeader() const { return this->header_ != nullptr;};
        void deleteHeader() { this->header_ = nullptr;};
        inline string getHeader() const { DARABONBA_PTR_GET_DEFAULT(header_, "") };
        inline OptionJson& setHeader(string header) { DARABONBA_PTR_SET_VALUE(header_, header) };


        // hops Field Functions 
        bool hasHops() const { return this->hops_ != nullptr;};
        void deleteHops() { this->hops_ = nullptr;};
        inline int32_t getHops() const { DARABONBA_PTR_GET_DEFAULT(hops_, 0) };
        inline OptionJson& setHops(int32_t hops) { DARABONBA_PTR_SET_VALUE(hops_, hops) };


        // hostBinding Field Functions 
        bool hasHostBinding() const { return this->hostBinding_ != nullptr;};
        void deleteHostBinding() { this->hostBinding_ = nullptr;};
        inline string getHostBinding() const { DARABONBA_PTR_GET_DEFAULT(hostBinding_, "") };
        inline OptionJson& setHostBinding(string hostBinding) { DARABONBA_PTR_SET_VALUE(hostBinding_, hostBinding) };


        // hostBindingType Field Functions 
        bool hasHostBindingType() const { return this->hostBindingType_ != nullptr;};
        void deleteHostBindingType() { this->hostBindingType_ = nullptr;};
        inline int32_t getHostBindingType() const { DARABONBA_PTR_GET_DEFAULT(hostBindingType_, 0) };
        inline OptionJson& setHostBindingType(int32_t hostBindingType) { DARABONBA_PTR_SET_VALUE(hostBindingType_, hostBindingType) };


        // httpMethod Field Functions 
        bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
        void deleteHttpMethod() { this->httpMethod_ = nullptr;};
        inline string getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
        inline OptionJson& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


        // icmpTimeoutMillis Field Functions 
        bool hasIcmpTimeoutMillis() const { return this->icmpTimeoutMillis_ != nullptr;};
        void deleteIcmpTimeoutMillis() { this->icmpTimeoutMillis_ = nullptr;};
        inline int32_t getIcmpTimeoutMillis() const { DARABONBA_PTR_GET_DEFAULT(icmpTimeoutMillis_, 0) };
        inline OptionJson& setIcmpTimeoutMillis(int32_t icmpTimeoutMillis) { DARABONBA_PTR_SET_VALUE(icmpTimeoutMillis_, icmpTimeoutMillis) };


        // ipNetwork Field Functions 
        bool hasIpNetwork() const { return this->ipNetwork_ != nullptr;};
        void deleteIpNetwork() { this->ipNetwork_ = nullptr;};
        inline string getIpNetwork() const { DARABONBA_PTR_GET_DEFAULT(ipNetwork_, "") };
        inline OptionJson& setIpNetwork(string ipNetwork) { DARABONBA_PTR_SET_VALUE(ipNetwork_, ipNetwork) };


        // isBase64Encode Field Functions 
        bool hasIsBase64Encode() const { return this->isBase64Encode_ != nullptr;};
        void deleteIsBase64Encode() { this->isBase64Encode_ = nullptr;};
        inline string getIsBase64Encode() const { DARABONBA_PTR_GET_DEFAULT(isBase64Encode_, "") };
        inline OptionJson& setIsBase64Encode(string isBase64Encode) { DARABONBA_PTR_SET_VALUE(isBase64Encode_, isBase64Encode) };


        // matchRule Field Functions 
        bool hasMatchRule() const { return this->matchRule_ != nullptr;};
        void deleteMatchRule() { this->matchRule_ = nullptr;};
        inline int32_t getMatchRule() const { DARABONBA_PTR_GET_DEFAULT(matchRule_, 0) };
        inline OptionJson& setMatchRule(int32_t matchRule) { DARABONBA_PTR_SET_VALUE(matchRule_, matchRule) };


        // maxTlsVersion Field Functions 
        bool hasMaxTlsVersion() const { return this->maxTlsVersion_ != nullptr;};
        void deleteMaxTlsVersion() { this->maxTlsVersion_ = nullptr;};
        inline string getMaxTlsVersion() const { DARABONBA_PTR_GET_DEFAULT(maxTlsVersion_, "") };
        inline OptionJson& setMaxTlsVersion(string maxTlsVersion) { DARABONBA_PTR_SET_VALUE(maxTlsVersion_, maxTlsVersion) };


        // minTlsVersion Field Functions 
        bool hasMinTlsVersion() const { return this->minTlsVersion_ != nullptr;};
        void deleteMinTlsVersion() { this->minTlsVersion_ = nullptr;};
        inline string getMinTlsVersion() const { DARABONBA_PTR_GET_DEFAULT(minTlsVersion_, "") };
        inline OptionJson& setMinTlsVersion(string minTlsVersion) { DARABONBA_PTR_SET_VALUE(minTlsVersion_, minTlsVersion) };


        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
        inline OptionJson& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


        // pingNum Field Functions 
        bool hasPingNum() const { return this->pingNum_ != nullptr;};
        void deletePingNum() { this->pingNum_ = nullptr;};
        inline int32_t getPingNum() const { DARABONBA_PTR_GET_DEFAULT(pingNum_, 0) };
        inline OptionJson& setPingNum(int32_t pingNum) { DARABONBA_PTR_SET_VALUE(pingNum_, pingNum) };


        // pingPort Field Functions 
        bool hasPingPort() const { return this->pingPort_ != nullptr;};
        void deletePingPort() { this->pingPort_ = nullptr;};
        inline int32_t getPingPort() const { DARABONBA_PTR_GET_DEFAULT(pingPort_, 0) };
        inline OptionJson& setPingPort(int32_t pingPort) { DARABONBA_PTR_SET_VALUE(pingPort_, pingPort) };


        // pingType Field Functions 
        bool hasPingType() const { return this->pingType_ != nullptr;};
        void deletePingType() { this->pingType_ = nullptr;};
        inline string getPingType() const { DARABONBA_PTR_GET_DEFAULT(pingType_, "") };
        inline OptionJson& setPingType(string pingType) { DARABONBA_PTR_SET_VALUE(pingType_, pingType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline OptionJson& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // privateCrtFileName Field Functions 
        bool hasPrivateCrtFileName() const { return this->privateCrtFileName_ != nullptr;};
        void deletePrivateCrtFileName() { this->privateCrtFileName_ = nullptr;};
        inline string getPrivateCrtFileName() const { DARABONBA_PTR_GET_DEFAULT(privateCrtFileName_, "") };
        inline OptionJson& setPrivateCrtFileName(string privateCrtFileName) { DARABONBA_PTR_SET_VALUE(privateCrtFileName_, privateCrtFileName) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline OptionJson& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // quicEnabled Field Functions 
        bool hasQuicEnabled() const { return this->quicEnabled_ != nullptr;};
        void deleteQuicEnabled() { this->quicEnabled_ = nullptr;};
        inline bool getQuicEnabled() const { DARABONBA_PTR_GET_DEFAULT(quicEnabled_, false) };
        inline OptionJson& setQuicEnabled(bool quicEnabled) { DARABONBA_PTR_SET_VALUE(quicEnabled_, quicEnabled) };


        // quicTarget Field Functions 
        bool hasQuicTarget() const { return this->quicTarget_ != nullptr;};
        void deleteQuicTarget() { this->quicTarget_ = nullptr;};
        inline const OptionJson::QuicTarget & getQuicTarget() const { DARABONBA_PTR_GET_CONST(quicTarget_, OptionJson::QuicTarget) };
        inline OptionJson::QuicTarget getQuicTarget() { DARABONBA_PTR_GET(quicTarget_, OptionJson::QuicTarget) };
        inline OptionJson& setQuicTarget(const OptionJson::QuicTarget & quicTarget) { DARABONBA_PTR_SET_VALUE(quicTarget_, quicTarget) };
        inline OptionJson& setQuicTarget(OptionJson::QuicTarget && quicTarget) { DARABONBA_PTR_SET_RVALUE(quicTarget_, quicTarget) };


        // requestContent Field Functions 
        bool hasRequestContent() const { return this->requestContent_ != nullptr;};
        void deleteRequestContent() { this->requestContent_ = nullptr;};
        inline string getRequestContent() const { DARABONBA_PTR_GET_DEFAULT(requestContent_, "") };
        inline OptionJson& setRequestContent(string requestContent) { DARABONBA_PTR_SET_VALUE(requestContent_, requestContent) };


        // requestFormat Field Functions 
        bool hasRequestFormat() const { return this->requestFormat_ != nullptr;};
        void deleteRequestFormat() { this->requestFormat_ = nullptr;};
        inline string getRequestFormat() const { DARABONBA_PTR_GET_DEFAULT(requestFormat_, "") };
        inline OptionJson& setRequestFormat(string requestFormat) { DARABONBA_PTR_SET_VALUE(requestFormat_, requestFormat) };


        // responseContent Field Functions 
        bool hasResponseContent() const { return this->responseContent_ != nullptr;};
        void deleteResponseContent() { this->responseContent_ = nullptr;};
        inline string getResponseContent() const { DARABONBA_PTR_GET_DEFAULT(responseContent_, "") };
        inline OptionJson& setResponseContent(string responseContent) { DARABONBA_PTR_SET_VALUE(responseContent_, responseContent) };


        // responseFormat Field Functions 
        bool hasResponseFormat() const { return this->responseFormat_ != nullptr;};
        void deleteResponseFormat() { this->responseFormat_ = nullptr;};
        inline string getResponseFormat() const { DARABONBA_PTR_GET_DEFAULT(responseFormat_, "") };
        inline OptionJson& setResponseFormat(string responseFormat) { DARABONBA_PTR_SET_VALUE(responseFormat_, responseFormat) };


        // retryDelay Field Functions 
        bool hasRetryDelay() const { return this->retryDelay_ != nullptr;};
        void deleteRetryDelay() { this->retryDelay_ = nullptr;};
        inline int32_t getRetryDelay() const { DARABONBA_PTR_GET_DEFAULT(retryDelay_, 0) };
        inline OptionJson& setRetryDelay(int32_t retryDelay) { DARABONBA_PTR_SET_VALUE(retryDelay_, retryDelay) };


        // safeLink Field Functions 
        bool hasSafeLink() const { return this->safeLink_ != nullptr;};
        void deleteSafeLink() { this->safeLink_ = nullptr;};
        inline int32_t getSafeLink() const { DARABONBA_PTR_GET_DEFAULT(safeLink_, 0) };
        inline OptionJson& setSafeLink(int32_t safeLink) { DARABONBA_PTR_SET_VALUE(safeLink_, safeLink) };


        // screenShot Field Functions 
        bool hasScreenShot() const { return this->screenShot_ != nullptr;};
        void deleteScreenShot() { this->screenShot_ = nullptr;};
        inline bool getScreenShot() const { DARABONBA_PTR_GET_DEFAULT(screenShot_, false) };
        inline OptionJson& setScreenShot(bool screenShot) { DARABONBA_PTR_SET_VALUE(screenShot_, screenShot) };


        // scrollEnd Field Functions 
        bool hasScrollEnd() const { return this->scrollEnd_ != nullptr;};
        void deleteScrollEnd() { this->scrollEnd_ = nullptr;};
        inline bool getScrollEnd() const { DARABONBA_PTR_GET_DEFAULT(scrollEnd_, false) };
        inline OptionJson& setScrollEnd(bool scrollEnd) { DARABONBA_PTR_SET_VALUE(scrollEnd_, scrollEnd) };


        // serverName Field Functions 
        bool hasServerName() const { return this->serverName_ != nullptr;};
        void deleteServerName() { this->serverName_ = nullptr;};
        inline string getServerName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
        inline OptionJson& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


        // steps Field Functions 
        bool hasSteps() const { return this->steps_ != nullptr;};
        void deleteSteps() { this->steps_ = nullptr;};
        inline const OptionJson::Steps & getSteps() const { DARABONBA_PTR_GET_CONST(steps_, OptionJson::Steps) };
        inline OptionJson::Steps getSteps() { DARABONBA_PTR_GET(steps_, OptionJson::Steps) };
        inline OptionJson& setSteps(const OptionJson::Steps & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
        inline OptionJson& setSteps(OptionJson::Steps && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


        // strictMode Field Functions 
        bool hasStrictMode() const { return this->strictMode_ != nullptr;};
        void deleteStrictMode() { this->strictMode_ = nullptr;};
        inline bool getStrictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, false) };
        inline OptionJson& setStrictMode(bool strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


        // supportedCipherSuits Field Functions 
        bool hasSupportedCipherSuits() const { return this->supportedCipherSuits_ != nullptr;};
        void deleteSupportedCipherSuits() { this->supportedCipherSuits_ = nullptr;};
        inline string getSupportedCipherSuits() const { DARABONBA_PTR_GET_DEFAULT(supportedCipherSuits_, "") };
        inline OptionJson& setSupportedCipherSuits(string supportedCipherSuits) { DARABONBA_PTR_SET_VALUE(supportedCipherSuits_, supportedCipherSuits) };


        // timeOut Field Functions 
        bool hasTimeOut() const { return this->timeOut_ != nullptr;};
        void deleteTimeOut() { this->timeOut_ = nullptr;};
        inline int64_t getTimeOut() const { DARABONBA_PTR_GET_DEFAULT(timeOut_, 0L) };
        inline OptionJson& setTimeOut(int64_t timeOut) { DARABONBA_PTR_SET_VALUE(timeOut_, timeOut) };


        // traceRegion Field Functions 
        bool hasTraceRegion() const { return this->traceRegion_ != nullptr;};
        void deleteTraceRegion() { this->traceRegion_ = nullptr;};
        inline string getTraceRegion() const { DARABONBA_PTR_GET_DEFAULT(traceRegion_, "") };
        inline OptionJson& setTraceRegion(string traceRegion) { DARABONBA_PTR_SET_VALUE(traceRegion_, traceRegion) };


        // traceType Field Functions 
        bool hasTraceType() const { return this->traceType_ != nullptr;};
        void deleteTraceType() { this->traceType_ = nullptr;};
        inline string getTraceType() const { DARABONBA_PTR_GET_DEFAULT(traceType_, "") };
        inline OptionJson& setTraceType(string traceType) { DARABONBA_PTR_SET_VALUE(traceType_, traceType) };


        // trafficHijackElementBlacklist Field Functions 
        bool hasTrafficHijackElementBlacklist() const { return this->trafficHijackElementBlacklist_ != nullptr;};
        void deleteTrafficHijackElementBlacklist() { this->trafficHijackElementBlacklist_ = nullptr;};
        inline const OptionJson::TrafficHijackElementBlacklist & getTrafficHijackElementBlacklist() const { DARABONBA_PTR_GET_CONST(trafficHijackElementBlacklist_, OptionJson::TrafficHijackElementBlacklist) };
        inline OptionJson::TrafficHijackElementBlacklist getTrafficHijackElementBlacklist() { DARABONBA_PTR_GET(trafficHijackElementBlacklist_, OptionJson::TrafficHijackElementBlacklist) };
        inline OptionJson& setTrafficHijackElementBlacklist(const OptionJson::TrafficHijackElementBlacklist & trafficHijackElementBlacklist) { DARABONBA_PTR_SET_VALUE(trafficHijackElementBlacklist_, trafficHijackElementBlacklist) };
        inline OptionJson& setTrafficHijackElementBlacklist(OptionJson::TrafficHijackElementBlacklist && trafficHijackElementBlacklist) { DARABONBA_PTR_SET_RVALUE(trafficHijackElementBlacklist_, trafficHijackElementBlacklist) };


        // trafficHijackElementCount Field Functions 
        bool hasTrafficHijackElementCount() const { return this->trafficHijackElementCount_ != nullptr;};
        void deleteTrafficHijackElementCount() { this->trafficHijackElementCount_ = nullptr;};
        inline int32_t getTrafficHijackElementCount() const { DARABONBA_PTR_GET_DEFAULT(trafficHijackElementCount_, 0) };
        inline OptionJson& setTrafficHijackElementCount(int32_t trafficHijackElementCount) { DARABONBA_PTR_SET_VALUE(trafficHijackElementCount_, trafficHijackElementCount) };


        // trafficHijackElementWhitelist Field Functions 
        bool hasTrafficHijackElementWhitelist() const { return this->trafficHijackElementWhitelist_ != nullptr;};
        void deleteTrafficHijackElementWhitelist() { this->trafficHijackElementWhitelist_ = nullptr;};
        inline const OptionJson::TrafficHijackElementWhitelist & getTrafficHijackElementWhitelist() const { DARABONBA_PTR_GET_CONST(trafficHijackElementWhitelist_, OptionJson::TrafficHijackElementWhitelist) };
        inline OptionJson::TrafficHijackElementWhitelist getTrafficHijackElementWhitelist() { DARABONBA_PTR_GET(trafficHijackElementWhitelist_, OptionJson::TrafficHijackElementWhitelist) };
        inline OptionJson& setTrafficHijackElementWhitelist(const OptionJson::TrafficHijackElementWhitelist & trafficHijackElementWhitelist) { DARABONBA_PTR_SET_VALUE(trafficHijackElementWhitelist_, trafficHijackElementWhitelist) };
        inline OptionJson& setTrafficHijackElementWhitelist(OptionJson::TrafficHijackElementWhitelist && trafficHijackElementWhitelist) { DARABONBA_PTR_SET_RVALUE(trafficHijackElementWhitelist_, trafficHijackElementWhitelist) };


        // usePrivateCrt Field Functions 
        bool hasUsePrivateCrt() const { return this->usePrivateCrt_ != nullptr;};
        void deleteUsePrivateCrt() { this->usePrivateCrt_ = nullptr;};
        inline bool getUsePrivateCrt() const { DARABONBA_PTR_GET_DEFAULT(usePrivateCrt_, false) };
        inline OptionJson& setUsePrivateCrt(bool usePrivateCrt) { DARABONBA_PTR_SET_VALUE(usePrivateCrt_, usePrivateCrt) };


        // useSsl Field Functions 
        bool hasUseSsl() const { return this->useSsl_ != nullptr;};
        void deleteUseSsl() { this->useSsl_ = nullptr;};
        inline bool getUseSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, false) };
        inline OptionJson& setUseSsl(bool useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline OptionJson& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


        // waitTimeAfterCompletion Field Functions 
        bool hasWaitTimeAfterCompletion() const { return this->waitTimeAfterCompletion_ != nullptr;};
        void deleteWaitTimeAfterCompletion() { this->waitTimeAfterCompletion_ = nullptr;};
        inline int32_t getWaitTimeAfterCompletion() const { DARABONBA_PTR_GET_DEFAULT(waitTimeAfterCompletion_, 0) };
        inline OptionJson& setWaitTimeAfterCompletion(int32_t waitTimeAfterCompletion) { DARABONBA_PTR_SET_VALUE(waitTimeAfterCompletion_, waitTimeAfterCompletion) };


      protected:
        // The assertions.
        shared_ptr<OptionJson::Assertions> assertions_ {};
        // The number of retries after a DNS failure occurred.
        shared_ptr<int64_t> attempts_ {};
        shared_ptr<OptionJson::AuthInfo> authInfo_ {};
        // The blocked URLs. Wildcards are supported in paths.
        shared_ptr<OptionJson::BlockedUrlList> blockedUrlList_ {};
        // The custom headers. Format: {"key": "somekey", "value":"somevalue"}.
        shared_ptr<OptionJson::BrowserHeaders> browserHeaders_ {};
        // The custom hosts. Format: {"key": "somekey", "value":"somevalue"}.
        shared_ptr<OptionJson::BrowserHosts> browserHosts_ {};
        // The browser information.
        shared_ptr<OptionJson::BrowserInfo> browserInfo_ {};
        // Indicates whether certificate errors are ignored. Valid values:
        // - false: Certificate errors are not ignored.
        // - true: Certificate errors are ignored.
        shared_ptr<bool> browserInsecure_ {};
        // The version of the browser test task. Valid values:
        // - 1: browser test for a single page
        // - 2: browser test for multiple pages
        shared_ptr<string> browserTaskVersion_ {};
        shared_ptr<OptionJson::ConfigVariables> configVariables_ {};
        // The cookie of the HTTP request.
        shared_ptr<string> cookie_ {};
        // Indicates whether the automatic MTR diagnostics feature is enabled for a failed task. Valid values:
        // - false: The automatic MTR diagnostics feature is disabled for a failed task.
        // - true: The automatic MTR diagnostics feature is enabled for a failed task.
        shared_ptr<bool> diagnosisMtr_ {};
        // Indicates whether the automatic ping latency detection feature is enabled for a failed task. Valid values:
        // - false: The automatic ping latency detection feature is disabled for a failed task.
        // - true: The automatic ping latency detection feature is enabled for a failed task.
        shared_ptr<bool> diagnosisPing_ {};
        // The DNS hijack whitelist.
        shared_ptr<string> dnsHijackWhitelist_ {};
        // The relationship between the list of expected aliases or IP addresses and the list of DNS results. Valid values:
        // 
        // *   IN_DNS: The list of expected values is a subset of the list of DNS results.
        // *   DNS_IN: The list of DNS results is a subset of the list of expected values.
        // *   EQUAL: The list of DNS results is the same as the list of expected values.
        // *   ANY: The list of DNS results intersects with the list of expected values.
        shared_ptr<string> dnsMatchRule_ {};
        // The IP address of the DNS server.
        // 
        // >  This parameter is returned only if the TaskType parameter is set to DNS.
        shared_ptr<string> dnsServer_ {};
        // The type of the DNS record. This parameter is returned only if the TaskType parameter is set to DNS. Valid values:
        // 
        // *   A (default): a record that specifies an IP address related to the specified host name or domain name.
        // *   CNAME: a record that maps multiple domain names to a domain name.
        // *   NS: a record that specifies a DNS server used to parse domain names.
        // *   MX: a record that links domain names to the address of a mail server.
        // *   TXT: a record that stores the text information of host name or domain names. The text must be 1 to 512 bytes in length. The TXT record serves as a Sender Policy Framework (SPF) record to fight against spam.
        shared_ptr<string> dnsType_ {};
        // Indicates whether the WebSocket task is allowed to return no response or return an empty response. Default value: false. Valid values: false and true.
        shared_ptr<bool> emptyMessage_ {};
        shared_ptr<bool> enablePacketCapture_ {};
        // The string that is expected to exist on the page.
        shared_ptr<OptionJson::ExpectExistString> expectExistString_ {};
        // The string that is not expected to exist on the page.
        shared_ptr<OptionJson::ExpectNonExistString> expectNonExistString_ {};
        // The domain name or alias to be parsed.
        // 
        // >  This parameter is returned only if the TaskType parameter is set to DNS.
        shared_ptr<string> expectValue_ {};
        // The packet loss rate.
        // 
        // >  This parameter is returned only if the TaskType parameter is set to PING.
        shared_ptr<float> failureRate_ {};
        // The header of the HTTP request.
        shared_ptr<string> header_ {};
        // The number of hops to perform traceroute diagnostics if the PING task fails.
        shared_ptr<int32_t> hops_ {};
        // The custom hosts for the HTTP test task. Format: ip1,ip2:address. You can specify values in multiple lines. Specify the A record or CNAME record that can be resolved by the domain name at the left of the colon. Separate multiple records with commas (,). Specify the domain name at the right of the colon.
        shared_ptr<string> hostBinding_ {};
        // The host binding type. Valid values: 0 and 1. 0 indicates random. 1 indicates polling.
        shared_ptr<int32_t> hostBindingType_ {};
        // The HTTP request method. Valid values:
        // 
        // *   get
        // *   post
        // *   head
        shared_ptr<string> httpMethod_ {};
        // The timeout period of a PING task that uses ICMP. Unit: milliseconds.
        shared_ptr<int32_t> icmpTimeoutMillis_ {};
        // ip_network indicates the network type of the task. Valid values: v4, v6, and auto. Default value: v4.
        shared_ptr<string> ipNetwork_ {};
        // Indicates whether to perform Base64 decoding and then store the password. Valid values: true and false.
        shared_ptr<string> isBase64Encode_ {};
        // Indicates whether the alert rule is included. Valid values:
        // 
        // *   0: The alert rule is included.
        // *   1: The alert rule is excluded.
        shared_ptr<int32_t> matchRule_ {};
        shared_ptr<string> maxTlsVersion_ {};
        // The minimum TLS version. By default, TLS 1.2 and later versions are supported. TLS 1.0 and 1.1 are disabled. If you still require TLS 1.0 or 1.1, you can change the configuration.
        shared_ptr<string> minTlsVersion_ {};
        // The password of the SMTP, POP3, or FTP protocol.
        shared_ptr<string> password_ {};
        // The heartbeat of the PING protocol.
        shared_ptr<int32_t> pingNum_ {};
        // The port number for TCP pings.
        shared_ptr<int32_t> pingPort_ {};
        // The PING protocol type. Valid values:
        // 
        // *   icmp
        // *   tcp
        // *   udp
        shared_ptr<string> pingType_ {};
        // The port number of the TCP, UDP, SMTP, or POP3 protocol.
        shared_ptr<int32_t> port_ {};
        shared_ptr<string> privateCrtFileName_ {};
        // The protocol that is used to send the request.
        shared_ptr<string> protocol_ {};
        // Indicates whether the Quick UDP Internet Connections (QUIC) protocol is used for browser detection. Valid values: true false Default value: false.
        shared_ptr<bool> quicEnabled_ {};
        // The sites for which the QUIC protocol is forcibly used.
        shared_ptr<OptionJson::QuicTarget> quicTarget_ {};
        // The content of the HTTP request.
        shared_ptr<string> requestContent_ {};
        // The format of the HTTP request. Valid values:
        // 
        // *   hex: hexadecimal
        // *   txt: text
        shared_ptr<string> requestFormat_ {};
        // The response to the HTTP request.
        shared_ptr<string> responseContent_ {};
        // The format of the HTTP response. Valid values:
        // 
        // *   hex: hexadecimal
        // *   txt: text
        shared_ptr<string> responseFormat_ {};
        // The number of retries for failed detections.
        shared_ptr<int32_t> retryDelay_ {};
        shared_ptr<int32_t> safeLink_ {};
        // Indicates whether page screenshot is enabled.
        shared_ptr<bool> screenShot_ {};
        // Indicates whether to scroll to the bottom of the page after opening the page. This parameter is valid for a browser test task.
        shared_ptr<bool> scrollEnd_ {};
        shared_ptr<string> serverName_ {};
        shared_ptr<OptionJson::Steps> steps_ {};
        // Indicates whether to allow the loading failures of some page elements. Valid values: false and true.
        shared_ptr<bool> strictMode_ {};
        shared_ptr<string> supportedCipherSuits_ {};
        // The timeout period. Unit: milliseconds.
        shared_ptr<int64_t> timeOut_ {};
        shared_ptr<string> traceRegion_ {};
        shared_ptr<string> traceType_ {};
        // The traffic hijacking blacklist. When redirection occurs, if the URL of the resource loaded by the browser matches the expression in the blacklist, traffic hijacking is considered to have occurred.
        shared_ptr<OptionJson::TrafficHijackElementBlacklist> trafficHijackElementBlacklist_ {};
        // When redirection occurs, if the browser loads more than the specified number of resources, traffic hijacking is considered to have occurred. If you set the value to 0, no validation is performed. Default value: 0.
        shared_ptr<int32_t> trafficHijackElementCount_ {};
        // The traffic hijacking whitelist. When redirection occurs, if the URL of the resource loaded by the browser does not match any expression in the whitelist, traffic hijacking is considered to have occurred.
        shared_ptr<OptionJson::TrafficHijackElementWhitelist> trafficHijackElementWhitelist_ {};
        shared_ptr<bool> usePrivateCrt_ {};
        shared_ptr<bool> useSsl_ {};
        // The username of the FTP, SMTP, or POP3 protocol.
        shared_ptr<string> username_ {};
        // The additional waiting time after a page is opened in a browser test task.
        shared_ptr<int32_t> waitTimeAfterCompletion_ {};
      };

      class IspCities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IspCities& obj) { 
          DARABONBA_PTR_TO_JSON(IspCity, ispCity_);
        };
        friend void from_json(const Darabonba::Json& j, IspCities& obj) { 
          DARABONBA_PTR_FROM_JSON(IspCity, ispCity_);
        };
        IspCities() = default ;
        IspCities(const IspCities &) = default ;
        IspCities(IspCities &&) = default ;
        IspCities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IspCities() = default ;
        IspCities& operator=(const IspCities &) = default ;
        IspCities& operator=(IspCities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class IspCity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IspCity& obj) { 
            DARABONBA_PTR_TO_JSON(City, city_);
            DARABONBA_PTR_TO_JSON(CityName, cityName_);
            DARABONBA_PTR_TO_JSON(Isp, isp_);
            DARABONBA_PTR_TO_JSON(IspName, ispName_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, IspCity& obj) { 
            DARABONBA_PTR_FROM_JSON(City, city_);
            DARABONBA_PTR_FROM_JSON(CityName, cityName_);
            DARABONBA_PTR_FROM_JSON(Isp, isp_);
            DARABONBA_PTR_FROM_JSON(IspName, ispName_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          IspCity() = default ;
          IspCity(const IspCity &) = default ;
          IspCity(IspCity &&) = default ;
          IspCity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IspCity() = default ;
          IspCity& operator=(const IspCity &) = default ;
          IspCity& operator=(IspCity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->city_ == nullptr
        && this->cityName_ == nullptr && this->isp_ == nullptr && this->ispName_ == nullptr && this->type_ == nullptr; };
          // city Field Functions 
          bool hasCity() const { return this->city_ != nullptr;};
          void deleteCity() { this->city_ = nullptr;};
          inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
          inline IspCity& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


          // cityName Field Functions 
          bool hasCityName() const { return this->cityName_ != nullptr;};
          void deleteCityName() { this->cityName_ = nullptr;};
          inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
          inline IspCity& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


          // isp Field Functions 
          bool hasIsp() const { return this->isp_ != nullptr;};
          void deleteIsp() { this->isp_ = nullptr;};
          inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
          inline IspCity& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


          // ispName Field Functions 
          bool hasIspName() const { return this->ispName_ != nullptr;};
          void deleteIspName() { this->ispName_ = nullptr;};
          inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
          inline IspCity& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline IspCity& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The city ID.
          shared_ptr<string> city_ {};
          // The city name.
          shared_ptr<string> cityName_ {};
          // The carrier ID.
          shared_ptr<string> isp_ {};
          // The carrier name.
          shared_ptr<string> ispName_ {};
          // The network type of the detection point. Valid values: IDC, LASTMILE, and MOBILE.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->ispCity_ == nullptr; };
        // ispCity Field Functions 
        bool hasIspCity() const { return this->ispCity_ != nullptr;};
        void deleteIspCity() { this->ispCity_ = nullptr;};
        inline const vector<IspCities::IspCity> & getIspCity() const { DARABONBA_PTR_GET_CONST(ispCity_, vector<IspCities::IspCity>) };
        inline vector<IspCities::IspCity> getIspCity() { DARABONBA_PTR_GET(ispCity_, vector<IspCities::IspCity>) };
        inline IspCities& setIspCity(const vector<IspCities::IspCity> & ispCity) { DARABONBA_PTR_SET_VALUE(ispCity_, ispCity) };
        inline IspCities& setIspCity(vector<IspCities::IspCity> && ispCity) { DARABONBA_PTR_SET_RVALUE(ispCity_, ispCity) };


      protected:
        shared_ptr<vector<IspCities::IspCity>> ispCity_ {};
      };

      class CustomSchedule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomSchedule& obj) { 
          DARABONBA_PTR_TO_JSON(days, days_);
          DARABONBA_PTR_TO_JSON(end_hour, endHour_);
          DARABONBA_PTR_TO_JSON(start_hour, startHour_);
          DARABONBA_PTR_TO_JSON(time_zone, timeZone_);
        };
        friend void from_json(const Darabonba::Json& j, CustomSchedule& obj) { 
          DARABONBA_PTR_FROM_JSON(days, days_);
          DARABONBA_PTR_FROM_JSON(end_hour, endHour_);
          DARABONBA_PTR_FROM_JSON(start_hour, startHour_);
          DARABONBA_PTR_FROM_JSON(time_zone, timeZone_);
        };
        CustomSchedule() = default ;
        CustomSchedule(const CustomSchedule &) = default ;
        CustomSchedule(CustomSchedule &&) = default ;
        CustomSchedule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomSchedule() = default ;
        CustomSchedule& operator=(const CustomSchedule &) = default ;
        CustomSchedule& operator=(CustomSchedule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Days : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Days& obj) { 
            DARABONBA_PTR_TO_JSON(days, days_);
          };
          friend void from_json(const Darabonba::Json& j, Days& obj) { 
            DARABONBA_PTR_FROM_JSON(days, days_);
          };
          Days() = default ;
          Days(const Days &) = default ;
          Days(Days &&) = default ;
          Days(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Days() = default ;
          Days& operator=(const Days &) = default ;
          Days& operator=(Days &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->days_ == nullptr; };
          // days Field Functions 
          bool hasDays() const { return this->days_ != nullptr;};
          void deleteDays() { this->days_ = nullptr;};
          inline const vector<int32_t> & getDays() const { DARABONBA_PTR_GET_CONST(days_, vector<int32_t>) };
          inline vector<int32_t> getDays() { DARABONBA_PTR_GET(days_, vector<int32_t>) };
          inline Days& setDays(const vector<int32_t> & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
          inline Days& setDays(vector<int32_t> && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


        protected:
          shared_ptr<vector<int32_t>> days_ {};
        };

        virtual bool empty() const override { return this->days_ == nullptr
        && this->endHour_ == nullptr && this->startHour_ == nullptr && this->timeZone_ == nullptr; };
        // days Field Functions 
        bool hasDays() const { return this->days_ != nullptr;};
        void deleteDays() { this->days_ = nullptr;};
        inline const CustomSchedule::Days & getDays() const { DARABONBA_PTR_GET_CONST(days_, CustomSchedule::Days) };
        inline CustomSchedule::Days getDays() { DARABONBA_PTR_GET(days_, CustomSchedule::Days) };
        inline CustomSchedule& setDays(const CustomSchedule::Days & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
        inline CustomSchedule& setDays(CustomSchedule::Days && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


        // endHour Field Functions 
        bool hasEndHour() const { return this->endHour_ != nullptr;};
        void deleteEndHour() { this->endHour_ = nullptr;};
        inline int32_t getEndHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0) };
        inline CustomSchedule& setEndHour(int32_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


        // startHour Field Functions 
        bool hasStartHour() const { return this->startHour_ != nullptr;};
        void deleteStartHour() { this->startHour_ = nullptr;};
        inline int32_t getStartHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0) };
        inline CustomSchedule& setStartHour(int32_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


        // timeZone Field Functions 
        bool hasTimeZone() const { return this->timeZone_ != nullptr;};
        void deleteTimeZone() { this->timeZone_ = nullptr;};
        inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
        inline CustomSchedule& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


      protected:
        // The days in a week.
        shared_ptr<CustomSchedule::Days> days_ {};
        // The end time of the detection. Unit: hours.
        shared_ptr<int32_t> endHour_ {};
        // The start time of the detection. Unit: hours.
        shared_ptr<int32_t> startHour_ {};
        // The time zone of the detection.
        shared_ptr<string> timeZone_ {};
      };

      virtual bool empty() const override { return this->address_ == nullptr
        && this->agentGroup_ == nullptr && this->customSchedule_ == nullptr && this->interval_ == nullptr && this->ispCities_ == nullptr && this->optionJson_ == nullptr
        && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskState_ == nullptr && this->taskType_ == nullptr && this->vpcConfig_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline SiteMonitors& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // agentGroup Field Functions 
      bool hasAgentGroup() const { return this->agentGroup_ != nullptr;};
      void deleteAgentGroup() { this->agentGroup_ = nullptr;};
      inline string getAgentGroup() const { DARABONBA_PTR_GET_DEFAULT(agentGroup_, "") };
      inline SiteMonitors& setAgentGroup(string agentGroup) { DARABONBA_PTR_SET_VALUE(agentGroup_, agentGroup) };


      // customSchedule Field Functions 
      bool hasCustomSchedule() const { return this->customSchedule_ != nullptr;};
      void deleteCustomSchedule() { this->customSchedule_ = nullptr;};
      inline const SiteMonitors::CustomSchedule & getCustomSchedule() const { DARABONBA_PTR_GET_CONST(customSchedule_, SiteMonitors::CustomSchedule) };
      inline SiteMonitors::CustomSchedule getCustomSchedule() { DARABONBA_PTR_GET(customSchedule_, SiteMonitors::CustomSchedule) };
      inline SiteMonitors& setCustomSchedule(const SiteMonitors::CustomSchedule & customSchedule) { DARABONBA_PTR_SET_VALUE(customSchedule_, customSchedule) };
      inline SiteMonitors& setCustomSchedule(SiteMonitors::CustomSchedule && customSchedule) { DARABONBA_PTR_SET_RVALUE(customSchedule_, customSchedule) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
      inline SiteMonitors& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // ispCities Field Functions 
      bool hasIspCities() const { return this->ispCities_ != nullptr;};
      void deleteIspCities() { this->ispCities_ = nullptr;};
      inline const SiteMonitors::IspCities & getIspCities() const { DARABONBA_PTR_GET_CONST(ispCities_, SiteMonitors::IspCities) };
      inline SiteMonitors::IspCities getIspCities() { DARABONBA_PTR_GET(ispCities_, SiteMonitors::IspCities) };
      inline SiteMonitors& setIspCities(const SiteMonitors::IspCities & ispCities) { DARABONBA_PTR_SET_VALUE(ispCities_, ispCities) };
      inline SiteMonitors& setIspCities(SiteMonitors::IspCities && ispCities) { DARABONBA_PTR_SET_RVALUE(ispCities_, ispCities) };


      // optionJson Field Functions 
      bool hasOptionJson() const { return this->optionJson_ != nullptr;};
      void deleteOptionJson() { this->optionJson_ = nullptr;};
      inline const SiteMonitors::OptionJson & getOptionJson() const { DARABONBA_PTR_GET_CONST(optionJson_, SiteMonitors::OptionJson) };
      inline SiteMonitors::OptionJson getOptionJson() { DARABONBA_PTR_GET(optionJson_, SiteMonitors::OptionJson) };
      inline SiteMonitors& setOptionJson(const SiteMonitors::OptionJson & optionJson) { DARABONBA_PTR_SET_VALUE(optionJson_, optionJson) };
      inline SiteMonitors& setOptionJson(SiteMonitors::OptionJson && optionJson) { DARABONBA_PTR_SET_RVALUE(optionJson_, optionJson) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline SiteMonitors& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline SiteMonitors& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskState Field Functions 
      bool hasTaskState() const { return this->taskState_ != nullptr;};
      void deleteTaskState() { this->taskState_ = nullptr;};
      inline string getTaskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
      inline SiteMonitors& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline SiteMonitors& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // vpcConfig Field Functions 
      bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
      void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
      inline const SiteMonitors::VpcConfig & getVpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, SiteMonitors::VpcConfig) };
      inline SiteMonitors::VpcConfig getVpcConfig() { DARABONBA_PTR_GET(vpcConfig_, SiteMonitors::VpcConfig) };
      inline SiteMonitors& setVpcConfig(const SiteMonitors::VpcConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
      inline SiteMonitors& setVpcConfig(SiteMonitors::VpcConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


    protected:
      // The URL that is monitored by the site monitoring task.
      shared_ptr<string> address_ {};
      // The type of the detection point. Default value: PC. Valid values:
      // - PC
      // - MOBILE
      shared_ptr<string> agentGroup_ {};
      // The custom detection cycle. You can specify only a time range within a week (from Monday to Sunday).
      shared_ptr<SiteMonitors::CustomSchedule> customSchedule_ {};
      // The interval at which the site monitoring task is executed. Unit: minutes. Valid values: 1, 5, 15, 30, and 60.
      shared_ptr<string> interval_ {};
      // The information of detection points. The information includes the carriers that provide the detection points and the cities where the detection points reside.
      shared_ptr<SiteMonitors::IspCities> ispCities_ {};
      // The extended options of the site monitoring task. The options vary based on the specified protocol. For more information, see [CreateSiteMonitor](https://help.aliyun.com/document_detail/115048.html).
      shared_ptr<SiteMonitors::OptionJson> optionJson_ {};
      // The ID of the site monitoring task.
      shared_ptr<string> taskId_ {};
      // The name of the site monitoring task.
      shared_ptr<string> taskName_ {};
      // The status of the site monitoring task. Valid values:
      // 
      // *   1: The task is enabled.
      // *   2: The task is disabled.
      shared_ptr<string> taskState_ {};
      // The protocol that is used by the site monitoring task. Valid values: HTTP, HTTPS, PING, TCP, UDP, DNS, SMTP, POP3, and FTP.
      shared_ptr<string> taskType_ {};
      // The VPC configurations of the synthetic test task.
      shared_ptr<SiteMonitors::VpcConfig> vpcConfig_ {};
    };

    class MetricRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricRules& obj) { 
        DARABONBA_PTR_TO_JSON(MetricRule, metricRule_);
      };
      friend void from_json(const Darabonba::Json& j, MetricRules& obj) { 
        DARABONBA_PTR_FROM_JSON(MetricRule, metricRule_);
      };
      MetricRules() = default ;
      MetricRules(const MetricRules &) = default ;
      MetricRules(MetricRules &&) = default ;
      MetricRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricRules() = default ;
      MetricRules& operator=(const MetricRules &) = default ;
      MetricRules& operator=(MetricRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MetricRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetricRule& obj) { 
          DARABONBA_PTR_TO_JSON(ActionEnable, actionEnable_);
          DARABONBA_PTR_TO_JSON(AlarmActions, alarmActions_);
          DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
          DARABONBA_PTR_TO_JSON(Expression, expression_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(OkActions, okActions_);
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(StateValue, stateValue_);
          DARABONBA_PTR_TO_JSON(Statistics, statistics_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, MetricRule& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionEnable, actionEnable_);
          DARABONBA_PTR_FROM_JSON(AlarmActions, alarmActions_);
          DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
          DARABONBA_PTR_FROM_JSON(Expression, expression_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(OkActions, okActions_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(StateValue, stateValue_);
          DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        };
        MetricRule() = default ;
        MetricRule(const MetricRule &) = default ;
        MetricRule(MetricRule &&) = default ;
        MetricRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MetricRule() = default ;
        MetricRule& operator=(const MetricRule &) = default ;
        MetricRule& operator=(MetricRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actionEnable_ == nullptr
        && this->alarmActions_ == nullptr && this->comparisonOperator_ == nullptr && this->dimensions_ == nullptr && this->evaluationCount_ == nullptr && this->expression_ == nullptr
        && this->level_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->okActions_ == nullptr && this->period_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->stateValue_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr; };
        // actionEnable Field Functions 
        bool hasActionEnable() const { return this->actionEnable_ != nullptr;};
        void deleteActionEnable() { this->actionEnable_ = nullptr;};
        inline string getActionEnable() const { DARABONBA_PTR_GET_DEFAULT(actionEnable_, "") };
        inline MetricRule& setActionEnable(string actionEnable) { DARABONBA_PTR_SET_VALUE(actionEnable_, actionEnable) };


        // alarmActions Field Functions 
        bool hasAlarmActions() const { return this->alarmActions_ != nullptr;};
        void deleteAlarmActions() { this->alarmActions_ = nullptr;};
        inline string getAlarmActions() const { DARABONBA_PTR_GET_DEFAULT(alarmActions_, "") };
        inline MetricRule& setAlarmActions(string alarmActions) { DARABONBA_PTR_SET_VALUE(alarmActions_, alarmActions) };


        // comparisonOperator Field Functions 
        bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
        void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
        inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
        inline MetricRule& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


        // dimensions Field Functions 
        bool hasDimensions() const { return this->dimensions_ != nullptr;};
        void deleteDimensions() { this->dimensions_ = nullptr;};
        inline string getDimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
        inline MetricRule& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


        // evaluationCount Field Functions 
        bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
        void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
        inline string getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, "") };
        inline MetricRule& setEvaluationCount(string evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
        inline MetricRule& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline MetricRule& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline MetricRule& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline MetricRule& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // okActions Field Functions 
        bool hasOkActions() const { return this->okActions_ != nullptr;};
        void deleteOkActions() { this->okActions_ = nullptr;};
        inline string getOkActions() const { DARABONBA_PTR_GET_DEFAULT(okActions_, "") };
        inline MetricRule& setOkActions(string okActions) { DARABONBA_PTR_SET_VALUE(okActions_, okActions) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
        inline MetricRule& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline MetricRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline MetricRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // stateValue Field Functions 
        bool hasStateValue() const { return this->stateValue_ != nullptr;};
        void deleteStateValue() { this->stateValue_ = nullptr;};
        inline string getStateValue() const { DARABONBA_PTR_GET_DEFAULT(stateValue_, "") };
        inline MetricRule& setStateValue(string stateValue) { DARABONBA_PTR_SET_VALUE(stateValue_, stateValue) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
        inline MetricRule& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
        inline MetricRule& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        // Indicates whether the alert rule is enabled. Valid values:
        // 
        // *   true: The alert rule is enabled.
        // *   false: The alert rule is disabled.
        shared_ptr<string> actionEnable_ {};
        // The alert contact group to which alert notifications are sent.
        shared_ptr<string> alarmActions_ {};
        // The operator that is used to compare the metric value with the threshold in the alert rule. Valid values:
        // 
        // *   `>=`
        // *   `>`
        // *   `<=`
        // *   `<`
        // *   `=`
        // *   `!=`
        // *   GreaterThanYesterday: greater than the metric value at the same time yesterday
        // *   LessThanYesterday: less than the metric value at the same time yesterday
        // *   GreaterThanLastWeek: greater than the metric value at the same time last week
        // *   LessThanLastWeek: less than the metric value at the same time last week
        // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
        // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
        shared_ptr<string> comparisonOperator_ {};
        // The dimension of the alert rule.
        shared_ptr<string> dimensions_ {};
        // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered.
        shared_ptr<string> evaluationCount_ {};
        // The expression that is used to trigger alerts.
        shared_ptr<string> expression_ {};
        // The alert severity. Valid values:
        // 
        // *   1: critical
        // *   2: warning
        // *   3: information
        shared_ptr<string> level_ {};
        // The metric name.
        shared_ptr<string> metricName_ {};
        // The namespace of the cloud service.
        // 
        // The value is in the following format: acs_service name.
        shared_ptr<string> namespace_ {};
        // The alert contact group that receives alert notifications.
        shared_ptr<string> okActions_ {};
        // The time interval. The value is the same as the interval at which metric data is reported. Unit: seconds.
        // 
        // >  If you specify a statistical period for the alert rule, data is queried based on the statistical period.
        shared_ptr<string> period_ {};
        // The ID of the alert rule.
        shared_ptr<string> ruleId_ {};
        // The name of the alert rule.
        shared_ptr<string> ruleName_ {};
        // The alert status. Valid values:
        // 
        // *   OK: The alert rule has no active alerts.
        // *   ALARM: The alert rule has active alerts.
        shared_ptr<string> stateValue_ {};
        // The statistical method of the alert rule. Valid values:
        // 
        // *   Availability: the percentage of available detection points
        // *   AvailableNumber: the number of available detection points
        // *   ErrorCodeMaximum: a status code for an alert
        // *   ErrorCodeMinimum: all status codes for a set of alerts
        // *   Average: response time
        shared_ptr<string> statistics_ {};
        // The alert threshold.
        shared_ptr<string> threshold_ {};
      };

      virtual bool empty() const override { return this->metricRule_ == nullptr; };
      // metricRule Field Functions 
      bool hasMetricRule() const { return this->metricRule_ != nullptr;};
      void deleteMetricRule() { this->metricRule_ = nullptr;};
      inline const vector<MetricRules::MetricRule> & getMetricRule() const { DARABONBA_PTR_GET_CONST(metricRule_, vector<MetricRules::MetricRule>) };
      inline vector<MetricRules::MetricRule> getMetricRule() { DARABONBA_PTR_GET(metricRule_, vector<MetricRules::MetricRule>) };
      inline MetricRules& setMetricRule(const vector<MetricRules::MetricRule> & metricRule) { DARABONBA_PTR_SET_VALUE(metricRule_, metricRule) };
      inline MetricRules& setMetricRule(vector<MetricRules::MetricRule> && metricRule) { DARABONBA_PTR_SET_RVALUE(metricRule_, metricRule) };


    protected:
      shared_ptr<vector<MetricRules::MetricRule>> metricRule_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->metricRules_ == nullptr && this->requestId_ == nullptr && this->siteMonitors_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSiteMonitorAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSiteMonitorAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metricRules Field Functions 
    bool hasMetricRules() const { return this->metricRules_ != nullptr;};
    void deleteMetricRules() { this->metricRules_ = nullptr;};
    inline const DescribeSiteMonitorAttributeResponseBody::MetricRules & getMetricRules() const { DARABONBA_PTR_GET_CONST(metricRules_, DescribeSiteMonitorAttributeResponseBody::MetricRules) };
    inline DescribeSiteMonitorAttributeResponseBody::MetricRules getMetricRules() { DARABONBA_PTR_GET(metricRules_, DescribeSiteMonitorAttributeResponseBody::MetricRules) };
    inline DescribeSiteMonitorAttributeResponseBody& setMetricRules(const DescribeSiteMonitorAttributeResponseBody::MetricRules & metricRules) { DARABONBA_PTR_SET_VALUE(metricRules_, metricRules) };
    inline DescribeSiteMonitorAttributeResponseBody& setMetricRules(DescribeSiteMonitorAttributeResponseBody::MetricRules && metricRules) { DARABONBA_PTR_SET_RVALUE(metricRules_, metricRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSiteMonitorAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteMonitors Field Functions 
    bool hasSiteMonitors() const { return this->siteMonitors_ != nullptr;};
    void deleteSiteMonitors() { this->siteMonitors_ = nullptr;};
    inline const DescribeSiteMonitorAttributeResponseBody::SiteMonitors & getSiteMonitors() const { DARABONBA_PTR_GET_CONST(siteMonitors_, DescribeSiteMonitorAttributeResponseBody::SiteMonitors) };
    inline DescribeSiteMonitorAttributeResponseBody::SiteMonitors getSiteMonitors() { DARABONBA_PTR_GET(siteMonitors_, DescribeSiteMonitorAttributeResponseBody::SiteMonitors) };
    inline DescribeSiteMonitorAttributeResponseBody& setSiteMonitors(const DescribeSiteMonitorAttributeResponseBody::SiteMonitors & siteMonitors) { DARABONBA_PTR_SET_VALUE(siteMonitors_, siteMonitors) };
    inline DescribeSiteMonitorAttributeResponseBody& setSiteMonitors(DescribeSiteMonitorAttributeResponseBody::SiteMonitors && siteMonitors) { DARABONBA_PTR_SET_RVALUE(siteMonitors_, siteMonitors) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSiteMonitorAttributeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The alert rules that are configured for the site monitoring task.
    shared_ptr<DescribeSiteMonitorAttributeResponseBody::MetricRules> metricRules_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the site monitoring task.
    shared_ptr<DescribeSiteMonitorAttributeResponseBody::SiteMonitors> siteMonitors_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
