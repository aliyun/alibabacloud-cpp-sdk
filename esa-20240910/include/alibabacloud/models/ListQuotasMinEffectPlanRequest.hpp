// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASMINEFFECTPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASMINEFFECTPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListQuotasMinEffectPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasMinEffectPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(QuotaNames, quotaNames_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasMinEffectPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(QuotaNames, quotaNames_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    ListQuotasMinEffectPlanRequest() = default ;
    ListQuotasMinEffectPlanRequest(const ListQuotasMinEffectPlanRequest &) = default ;
    ListQuotasMinEffectPlanRequest(ListQuotasMinEffectPlanRequest &&) = default ;
    ListQuotasMinEffectPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasMinEffectPlanRequest() = default ;
    ListQuotasMinEffectPlanRequest& operator=(const ListQuotasMinEffectPlanRequest &) = default ;
    ListQuotasMinEffectPlanRequest& operator=(ListQuotasMinEffectPlanRequest &&) = default ;
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
    inline ListQuotasMinEffectPlanRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // quotaNames Field Functions 
    bool hasQuotaNames() const { return this->quotaNames_ != nullptr;};
    void deleteQuotaNames() { this->quotaNames_ = nullptr;};
    inline string getQuotaNames() const { DARABONBA_PTR_GET_DEFAULT(quotaNames_, "") };
    inline ListQuotasMinEffectPlanRequest& setQuotaNames(string quotaNames) { DARABONBA_PTR_SET_VALUE(quotaNames_, quotaNames) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListQuotasMinEffectPlanRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The plan instance ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to query the ID. You must specify at least one of the InstanceId and SiteId parameters.
    shared_ptr<string> instanceId_ {};
    // The names of the plan quotas. Separate multiple names with commas (,). Valid values:
    // - **waf:phase:http_anti_scan:actions**: WAF scan protection - action enumeration
    // - **waf:phase:http_bot:actions**: WAF bot management - all action enumerations
    // - **waf:phase:http_bot:http_custom_cc_dev:characteristic:fields**: WAF bot management - statistical object enumeration for custom device rate limiting
    // - **waf:phase:http_bot:http_custom_cc_ip:characteristic:fields**: WAF bot management - statistical object enumeration for custom IP rate limiting
    // - ****waf:phase:http_bot:match:symbols****: WAF bot management - match symbol enumeration
    // - **waf:phase:http_bot:http_custom_cc:characteristic:fields**: WAF bot management - statistical object enumeration for custom session rate limiting
    // - **waf:phase:http_bot:match:fields**: WAF bot management phase - match field enumeration
    // - **waf:phase:http_whitelist:match:symbols**: WAF whitelist - match symbol enumeration
    // - **waf:phase:http_whitelist:match:fields**: WAF whitelist - match field enumeration
    // - **waf:phase:http_anti_scan:http_directory_traversal:characteristic:fields**: WAF scan protection - statistical object enumeration for folder traverse blocking
    // - **waf:phase:http_anti_scan:http_high_frequency:characteristic:fields**: WAF scan protection - statistical object enumeration for high-frequency scan blocking
    // - **waf:phase:http_anti_scan:match:symbols**: WAF scan protection - match symbol enumeration
    // - **waf:phase:http_anti_scan:match:fields**: WAF scan protection - match field enumeration
    // - **waf:phase:http_managed:actions**: WAF managed rules - action enumeration
    // - **waf:phase:http_managed:group:reference:ids**: WAF managed rules - referenced rule group enumeration
    // - **waf:phase:http_ratelimit:actions**: WAF rate limiting - action enumeration
    // - **waf:phase:http_ratelimit:ttls**: WAF rate limiting - duration enumeration
    // - **waf:phase:http_ratelimit:intervals**: WAF rate limiting - statistical duration
    // - **waf:phase:http_ratelimit:http_ratelimit:characteristic:fields**: WAF rate limiting - match characteristic enumeration for control type rules
    // - **waf:phase:http_ratelimit:match:symbols**: WAF rate limiting rule phase - match symbol enumeration
    // - **waf:phase:http_ratelimit:match:fields**: WAF rate limiting rule phase - match field enumeration
    // - **waf:phase:http_custom:actions**: WAF custom rule phase - action enumeration
    // - **waf:phase:http_custom:match:symbols**: WAF custom rule phase - match symbol enumeration
    // - **waf:phase:http_custom:match:fields**: WAF custom rule phase - match fields
    // - **waiting_room|queuing_method**: Waiting room - queuing method
    // - **origin_rules|origin_scheme**: Back-to-origin rules - back-to-origin protocol
    // - **origin_rules|origin_sni**: Back-to-origin rules - back-to-origin SNI
    // - **origin_rules|origin_host**: Back-to-origin rules - back-to-origin host
    // - **fourlayeracceleration**: Layer 4 acceleration
    // - **rtlog_service**: Real-time log feature switch
    // - **dashboard_traffic**: Value-added capability for network traffic analysis
    // - **custom_name_server**: Custom NS name
    // - **waf:phase:http_bot:enable**: WAF bot management switch
    // - **waf:phase:http_whitelist:enable**: WAF whitelist switch
    // - **instantlog**: Whether instant logs are active
    // - **waf:phase:http_anti_scan:enable**: WAF scan protection switch
    // - **waf:phase:http_managed:group:reference:enable**: WAF managed rules - configure referenced rule group switch
    // - **waf:phase:http_managed:enable**: WAF managed rules switch
    // - **waf:phase:http_ratelimit:on_hit:enable**: WAF rate limiting - apply to cached requests switch
    // - **ddos**: DDoS instance
    // - **waf:phase:http_ratelimit:enable**: WAF rate limiting rule phase switch
    // - **waf:phase:http_custom:enable**: WAF custom rule phase switch
    // - **waf:phase:all:page:reference:enable**: WAF custom response page switch
    // - **rules_support_regex**: Whether the rule DPI engine supports regular expression operations
    // - **waiting_room_event**: Waiting room - scheduled events
    // - **waiting_room_rule**: Waiting room - bypass waiting room
    // - **waiting_room|json_response**: Waiting room - enable JSON response
    // - **waiting_room|disable_session_renewal**: Waiting room - disable session renewal
    // - **origin_rules|dns_record**: Back-to-origin rules - DNS record
    // - **managed_transforms|add_client_geolocation_headers**: Whether the real client IP header is active in transformation rules
    // - **tiered_cache|regional_enable**: Area cache
    // - **real_client_ip_header**: Client IP header
    // 
    // This parameter is required.
    shared_ptr<string> quotaNames_ {};
    // The ID of the site. You can call the [ListSites](~~ListSites~~) operation to query the ID.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
