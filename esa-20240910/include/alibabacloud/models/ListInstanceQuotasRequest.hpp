// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListInstanceQuotasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceQuotasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(QuotaNames, quotaNames_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceQuotasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(QuotaNames, quotaNames_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    ListInstanceQuotasRequest() = default ;
    ListInstanceQuotasRequest(const ListInstanceQuotasRequest &) = default ;
    ListInstanceQuotasRequest(ListInstanceQuotasRequest &&) = default ;
    ListInstanceQuotasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceQuotasRequest() = default ;
    ListInstanceQuotasRequest& operator=(const ListInstanceQuotasRequest &) = default ;
    ListInstanceQuotasRequest& operator=(ListInstanceQuotasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->quotaNames_ == nullptr && this->siteId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceQuotasRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // quotaNames Field Functions 
    bool hasQuotaNames() const { return this->quotaNames_ != nullptr;};
    void deleteQuotaNames() { this->quotaNames_ = nullptr;};
    inline string getQuotaNames() const { DARABONBA_PTR_GET_DEFAULT(quotaNames_, "") };
    inline ListInstanceQuotasRequest& setQuotaNames(string quotaNames) { DARABONBA_PTR_SET_VALUE(quotaNames_, quotaNames) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListInstanceQuotasRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The plan instance ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the ID. You must specify at least one of this parameter and SiteId.
    shared_ptr<string> instanceId_ {};
    // The plan quota names, separated by commas (,). Valid values:
    // 
    // - **waf:phase:http_anti_scan:actions**: WAF scan protection - action enumeration.
    // - **waf:phase:http_bot:actions**: WAF bot management - all action enumeration.
    // - **waf:phase:http_bot:http_custom_cc_dev:characteristic:fields**: WAF bot management - custom device rate limiting statistical object enumeration.
    // - **waf:phase:http_bot:http_custom_cc_ip:characteristic:fields**: WAF bot management - custom IP rate limiting statistical object enumeration.
    // - **waf:phase:http_bot:match:symbols**: WAF bot management - match operator enumeration.
    // - **waf:phase:http_bot:http_custom_cc:characteristic:fields**: WAF bot management - custom session rate limiting statistical object enumeration.
    // - **waf:phase:http_bot:match:fields**: WAF bot management - match field enumeration.
    // - **waf:phase:http_whitelist:match:symbols**: WAF whitelist - match operator enumeration.
    // - **waf:phase:http_whitelist:match:fields**: WAF whitelist - match field enumeration.
    // - **waf:phase:http_anti_scan:http_directory_traversal:characteristic:fields**: WAF scan protection - folder traverse blocking statistical object enumeration.
    // - **waf:phase:http_anti_scan:http_high_frequency:characteristic:fields**: WAF scan protection - high-frequency scan blocking statistical object enumeration.
    // - **waf:phase:http_anti_scan:match:symbols**: WAF scan protection - match operator enumeration.
    // - **waf:phase:http_anti_scan:match:fields**: WAF scan protection - match field enumeration.
    // - **waf:phase:http_managed:actions**: WAF managed rules - action enumeration.
    // - **waf:phase:http_managed:group:reference:ids**: WAF managed rules - referenced rule group enumeration.
    // - **waf:phase:http_ratelimit:actions**: WAF rate limiting - action enumeration.
    // - **waf:phase:http_ratelimit:ttls**: WAF rate limiting - duration enumeration.
    // - **waf:phase:http_ratelimit:intervals**: WAF rate limiting - statistical period.
    // - **waf:phase:http_ratelimit:http_ratelimit:characteristic:fields**: WAF rate limiting - control type rule match characteristic enumeration.
    // - **waf:phase:http_ratelimit:match:symbols**: WAF rate limiting rule phase match operator enumeration.
    // - **waf:phase:http_ratelimit:match:fields**: WAF rate limiting rule phase match field enumeration.
    // - **waf:phase:http_custom:actions**: WAF custom rule phase action enumeration.
    // - **waf:phase:http_custom:match:symbols**: WAF custom rule phase match operator enumeration.
    // - **waf:phase:http_custom:match:fields**: WAF custom rule phase match field.
    // - **waiting_room|queuing_method**: waiting room - queuing method.
    // - **origin_rules|origin_scheme**: back-to-origin rules - back-to-origin protocol.
    // - **origin_rules|origin_sni**: back-to-origin rules - back-to-origin SNI.
    // - **origin_rules|origin_host**: back-to-origin rules - back-to-origin host.
    // - **fourlayeracceleration**: Layer 4 acceleration.
    // - **rtlog_service**: real-time log feature switch.
    // - **dashboard_traffic**: value-added network traffic analysis capability.
    // - **custom_name_server**: custom NS name.
    // - **waf:phase:http_bot:enable**: WAF bot management switch.
    // - **waf:phase:http_whitelist:enable**: WAF whitelist switch.
    // - **instantlog**: instant log active or not.
    // - **waf:phase:http_anti_scan:enable**: WAF scan protection switch.
    // - **waf:phase:http_managed:group:reference:enable**: WAF managed rules - referenced rule group configuration switch.
    // - **waf:phase:http_managed:enable**: WAF managed rules switch.
    // - **waf:phase:http_ratelimit:on_hit:enable**: WAF rate limiting - apply to cache-hit requests switch.
    // - **ddos**: DDoS instance.
    // - **waf:phase:http_ratelimit:enable**: WAF rate limiting rule phase switch.
    // - **waf:phase:http_custom:enable**: WAF custom rule phase switch.
    // - **waf:phase:all:page:reference:enable**: WAF custom response page switch.
    // - **rules_support_regex**: whether the rule DPI engine supports regular expressions.
    // - **waiting_room_event**: waiting room - scheduled event.
    // - **waiting_room_rule**: waiting room - bypass waiting room.
    // - **waiting_room|json_response**: waiting room - enable JSON response.
    // - **waiting_room|disable_session_renewal**: waiting room - disable session renewal.
    // - **origin_rules|dns_record**: back-to-origin rules - DNS record.
    // - **managed_transforms|add_client_geolocation_headers**: whether the real client IP header is active in transform rules.
    // - **tiered_cache|regional_enable**: area cache.
    // - **real_client_ip_header**: client IP header.
    // - **data_timerange**: data query time range in minutes.
    // - **cache_rules|edge_cache_ttl**: cache - node TTL.
    // - **cache_rules|browser_cache_ttl**: cache - browser TTL.
    // - **fourLayerRecordCount**: record count limit for Layer 4 acceleration.
    // - **waitingroomRuleCount**: maximum number of rules per waiting room ID.
    // - **waitingroomEventCount**: maximum number of events per waiting room ID.
    // - **waitingroom_custom_pathhost**: waiting room - hostname and path.
    // - **er_routers**: function routing.
    // - **cache_rules|rule_quota**: cache rules.
    // - **configuration_rules|rule_quota**: configuration rules.
    // - **redirect_rules|rule_quota**: redirect rules.
    // - **compression_rules|rule_quota**: compression rules.
    // - **origin_rules|rule_quota**: back-to-origin rules.
    // - **waf:phase:http_bot:rulesets_per_instance:less_than_or_equal**: WAF bot management - maximum number of rule groups per instance.
    // - **waf:phase:http_whitelist:rules_per_instance:less_than_or_equal**: WAF whitelist - maximum number of rules per instance.
    // - **rtlog_quota**: quota for real-time log push node count.
    // - **waf:phase:http_anti_scan:rulesets_per_instance:less_than_or_equal**: WAF scan protection - maximum number of rule groups per instance.
    // - **ddos_instance**: number of DDoS instances.
    // - **waf:phase:http_ratelimit:rules_per_instance:less_than_or_equal**: maximum number of WAF rate limiting rules.
    // - **waf:phase:http_custom:rules_per_instance:less_than_or_equal**: maximum number of WAF custom rules per instance.
    // - **ruleNestedConditionalCount**: number of nesting levels for rules.
    // - **waiting_room**: waiting room.
    // - **transition_rule**: transform rules.
    // - **customHttpCert**: number of custom certificates.
    // - **free_cert**: number of free certificates.
    // - **preload**: resource prefetch.
    // - **refresh_cache_tag**: refresh - cache tag.
    // - **refresh_ignore_param**: refresh - purge without parameters.
    // - **refresh_directory**: refresh - purge by folder.
    // - **refresh_hostname**: refresh - purge by hostname.
    // - **refresh_all**: refresh - purge all cache.
    // - **refresh_file**: URL refresh.
    // - **wildcard**: number of wildcard domain names.
    // - **recordCount**: number of Layer 7 records.
    // - **siteCount**: number of sites.
    // - **https|rule_quota**: number of SSL/TLS rules.
    // 
    // This parameter is required.
    shared_ptr<string> quotaNames_ {};
    // The site ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the ID. You must specify at least one of this parameter and InstanceId.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
