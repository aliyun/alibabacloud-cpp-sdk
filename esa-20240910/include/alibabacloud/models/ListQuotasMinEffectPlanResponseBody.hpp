// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASMINEFFECTPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASMINEFFECTPLANRESPONSEBODY_HPP_
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
  class ListQuotasMinEffectPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasMinEffectPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasMinEffectPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListQuotasMinEffectPlanResponseBody() = default ;
    ListQuotasMinEffectPlanResponseBody(const ListQuotasMinEffectPlanResponseBody &) = default ;
    ListQuotasMinEffectPlanResponseBody(ListQuotasMinEffectPlanResponseBody &&) = default ;
    ListQuotasMinEffectPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasMinEffectPlanResponseBody() = default ;
    ListQuotasMinEffectPlanResponseBody& operator=(const ListQuotasMinEffectPlanResponseBody &) = default ;
    ListQuotasMinEffectPlanResponseBody& operator=(ListQuotasMinEffectPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quotas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quotas& obj) { 
        DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
        DARABONBA_PTR_TO_JSON(QuotaValueDetail, quotaValueDetail_);
        DARABONBA_PTR_TO_JSON(QuotaValueType, quotaValueType_);
      };
      friend void from_json(const Darabonba::Json& j, Quotas& obj) { 
        DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
        DARABONBA_PTR_FROM_JSON(QuotaValueDetail, quotaValueDetail_);
        DARABONBA_PTR_FROM_JSON(QuotaValueType, quotaValueType_);
      };
      Quotas() = default ;
      Quotas(const Quotas &) = default ;
      Quotas(Quotas &&) = default ;
      Quotas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quotas() = default ;
      Quotas& operator=(const Quotas &) = default ;
      Quotas& operator=(Quotas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QuotaValueDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QuotaValueDetail& obj) { 
          DARABONBA_PTR_TO_JSON(IsEffect, isEffect_);
          DARABONBA_PTR_TO_JSON(MinEffectPlan, minEffectPlan_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, QuotaValueDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(IsEffect, isEffect_);
          DARABONBA_PTR_FROM_JSON(MinEffectPlan, minEffectPlan_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        QuotaValueDetail() = default ;
        QuotaValueDetail(const QuotaValueDetail &) = default ;
        QuotaValueDetail(QuotaValueDetail &&) = default ;
        QuotaValueDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QuotaValueDetail() = default ;
        QuotaValueDetail& operator=(const QuotaValueDetail &) = default ;
        QuotaValueDetail& operator=(QuotaValueDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isEffect_ == nullptr
        && this->minEffectPlan_ == nullptr && this->value_ == nullptr; };
        // isEffect Field Functions 
        bool hasIsEffect() const { return this->isEffect_ != nullptr;};
        void deleteIsEffect() { this->isEffect_ = nullptr;};
        inline string getIsEffect() const { DARABONBA_PTR_GET_DEFAULT(isEffect_, "") };
        inline QuotaValueDetail& setIsEffect(string isEffect) { DARABONBA_PTR_SET_VALUE(isEffect_, isEffect) };


        // minEffectPlan Field Functions 
        bool hasMinEffectPlan() const { return this->minEffectPlan_ != nullptr;};
        void deleteMinEffectPlan() { this->minEffectPlan_ = nullptr;};
        inline string getMinEffectPlan() const { DARABONBA_PTR_GET_DEFAULT(minEffectPlan_, "") };
        inline QuotaValueDetail& setMinEffectPlan(string minEffectPlan) { DARABONBA_PTR_SET_VALUE(minEffectPlan_, minEffectPlan) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline QuotaValueDetail& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // Specifies whether the quota value is available in the plan version corresponding to the current site. Valid values:
        // - ture: Available.
        // - false: Unavailable.
        shared_ptr<string> isEffect_ {};
        // The minimum required plan version for the quota value. Valid values:
        // - basic: Basic Edition.
        // - medium: Standard Edition.
        // - high: Advanced Edition.
        // - enterprise_standard_cn: Enterprise Edition.
        // The return value of this parameter follows these rules:
        // - If the quota value is already available in the current plan version, this parameter is left empty, meaning the minimum required plan version is not displayed.
        // - If the quota value is unavailable in the current plan version, the minimum required plan version is displayed.
        // - If the current plan is already the Enterprise Edition, this parameter is always empty.
        shared_ptr<string> minEffectPlan_ {};
        // The quota value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->quotaName_ == nullptr
        && this->quotaValueDetail_ == nullptr && this->quotaValueType_ == nullptr; };
      // quotaName Field Functions 
      bool hasQuotaName() const { return this->quotaName_ != nullptr;};
      void deleteQuotaName() { this->quotaName_ = nullptr;};
      inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
      inline Quotas& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


      // quotaValueDetail Field Functions 
      bool hasQuotaValueDetail() const { return this->quotaValueDetail_ != nullptr;};
      void deleteQuotaValueDetail() { this->quotaValueDetail_ = nullptr;};
      inline const vector<Quotas::QuotaValueDetail> & getQuotaValueDetail() const { DARABONBA_PTR_GET_CONST(quotaValueDetail_, vector<Quotas::QuotaValueDetail>) };
      inline vector<Quotas::QuotaValueDetail> getQuotaValueDetail() { DARABONBA_PTR_GET(quotaValueDetail_, vector<Quotas::QuotaValueDetail>) };
      inline Quotas& setQuotaValueDetail(const vector<Quotas::QuotaValueDetail> & quotaValueDetail) { DARABONBA_PTR_SET_VALUE(quotaValueDetail_, quotaValueDetail) };
      inline Quotas& setQuotaValueDetail(vector<Quotas::QuotaValueDetail> && quotaValueDetail) { DARABONBA_PTR_SET_RVALUE(quotaValueDetail_, quotaValueDetail) };


      // quotaValueType Field Functions 
      bool hasQuotaValueType() const { return this->quotaValueType_ != nullptr;};
      void deleteQuotaValueType() { this->quotaValueType_ = nullptr;};
      inline string getQuotaValueType() const { DARABONBA_PTR_GET_DEFAULT(quotaValueType_, "") };
      inline Quotas& setQuotaValueType(string quotaValueType) { DARABONBA_PTR_SET_VALUE(quotaValueType_, quotaValueType) };


    protected:
      // The name of the quota. Valid values:
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
      // - **waitingroom|wr_queueing_method**: Waiting room - queuing method
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
      // - **waitingroom_event**: Waiting room - scheduled events
      // - **waitingroom_rule**: Waiting room - bypass waiting room
      // - **waitingroom|wr_json_response**: Waiting room - enable JSON response
      // - **waitingroom|wr_disable_session_renewal**: Waiting room - disable session renewal
      // - **origin_rules|dns_record**: Back-to-origin rules - DNS record
      // - **managed_transforms|add_client_geolocation_headers**: Whether the real client IP header is active in transformation rules
      // - **tiered_cache|regional_enable**: Area cache
      // - **real_client_ip_header**: Client IP header
      shared_ptr<string> quotaName_ {};
      // The threshold details of the quota.
      shared_ptr<vector<Quotas::QuotaValueDetail>> quotaValueDetail_ {};
      // The threshold type of the quota. Valid values:
      // - value: enumeration type. A quota of the enumeration type has multiple enumeration thresholds. For each enumeration threshold, the response indicates whether it is available in the current plan version. If it is unavailable, the response indicates the minimum required plan version.
      // - bool: Boolean type. A quota of the Boolean type is abstracted into two enumeration thresholds: true and false. To check whether the quota is available in the current plan version and identify the minimum required plan version, you only need to focus on the quota details where the enumeration value is true.
      shared_ptr<string> quotaValueType_ {};
    };

    virtual bool empty() const override { return this->quotas_ == nullptr
        && this->requestId_ == nullptr; };
    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<ListQuotasMinEffectPlanResponseBody::Quotas> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<ListQuotasMinEffectPlanResponseBody::Quotas>) };
    inline vector<ListQuotasMinEffectPlanResponseBody::Quotas> getQuotas() { DARABONBA_PTR_GET(quotas_, vector<ListQuotasMinEffectPlanResponseBody::Quotas>) };
    inline ListQuotasMinEffectPlanResponseBody& setQuotas(const vector<ListQuotasMinEffectPlanResponseBody::Quotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline ListQuotasMinEffectPlanResponseBody& setQuotas(vector<ListQuotasMinEffectPlanResponseBody::Quotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQuotasMinEffectPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the minimum required plan versions for the quotas.
    shared_ptr<vector<ListQuotasMinEffectPlanResponseBody::Quotas>> quotas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
