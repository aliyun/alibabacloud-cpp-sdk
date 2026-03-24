// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARGEMODULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARGEMODULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeChargeModuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChargeModuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeModules, chargeModules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChargeModuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeModules, chargeModules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeChargeModuleResponseBody() = default ;
    DescribeChargeModuleResponseBody(const DescribeChargeModuleResponseBody &) = default ;
    DescribeChargeModuleResponseBody(DescribeChargeModuleResponseBody &&) = default ;
    DescribeChargeModuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChargeModuleResponseBody() = default ;
    DescribeChargeModuleResponseBody& operator=(const DescribeChargeModuleResponseBody &) = default ;
    DescribeChargeModuleResponseBody& operator=(DescribeChargeModuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChargeModules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChargeModules& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeMode, chargeMode_);
        DARABONBA_PTR_TO_JSON(ChargeModeDetails, chargeModeDetails_);
        DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
        DARABONBA_PTR_TO_JSON(UsageType, usageType_);
        DARABONBA_PTR_TO_JSON(UsageUnitFactor, usageUnitFactor_);
      };
      friend void from_json(const Darabonba::Json& j, ChargeModules& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeMode, chargeMode_);
        DARABONBA_PTR_FROM_JSON(ChargeModeDetails, chargeModeDetails_);
        DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
        DARABONBA_PTR_FROM_JSON(UsageType, usageType_);
        DARABONBA_PTR_FROM_JSON(UsageUnitFactor, usageUnitFactor_);
      };
      ChargeModules() = default ;
      ChargeModules(const ChargeModules &) = default ;
      ChargeModules(ChargeModules &&) = default ;
      ChargeModules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChargeModules() = default ;
      ChargeModules& operator=(const ChargeModules &) = default ;
      ChargeModules& operator=(ChargeModules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chargeMode_ == nullptr
        && this->chargeModeDetails_ == nullptr && this->moduleCode_ == nullptr && this->periodType_ == nullptr && this->usageType_ == nullptr && this->usageUnitFactor_ == nullptr; };
      // chargeMode Field Functions 
      bool hasChargeMode() const { return this->chargeMode_ != nullptr;};
      void deleteChargeMode() { this->chargeMode_ = nullptr;};
      inline string getChargeMode() const { DARABONBA_PTR_GET_DEFAULT(chargeMode_, "") };
      inline ChargeModules& setChargeMode(string chargeMode) { DARABONBA_PTR_SET_VALUE(chargeMode_, chargeMode) };


      // chargeModeDetails Field Functions 
      bool hasChargeModeDetails() const { return this->chargeModeDetails_ != nullptr;};
      void deleteChargeModeDetails() { this->chargeModeDetails_ = nullptr;};
      inline const vector<string> & getChargeModeDetails() const { DARABONBA_PTR_GET_CONST(chargeModeDetails_, vector<string>) };
      inline vector<string> getChargeModeDetails() { DARABONBA_PTR_GET(chargeModeDetails_, vector<string>) };
      inline ChargeModules& setChargeModeDetails(const vector<string> & chargeModeDetails) { DARABONBA_PTR_SET_VALUE(chargeModeDetails_, chargeModeDetails) };
      inline ChargeModules& setChargeModeDetails(vector<string> && chargeModeDetails) { DARABONBA_PTR_SET_RVALUE(chargeModeDetails_, chargeModeDetails) };


      // moduleCode Field Functions 
      bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
      void deleteModuleCode() { this->moduleCode_ = nullptr;};
      inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
      inline ChargeModules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


      // periodType Field Functions 
      bool hasPeriodType() const { return this->periodType_ != nullptr;};
      void deletePeriodType() { this->periodType_ = nullptr;};
      inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
      inline ChargeModules& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


      // usageType Field Functions 
      bool hasUsageType() const { return this->usageType_ != nullptr;};
      void deleteUsageType() { this->usageType_ = nullptr;};
      inline string getUsageType() const { DARABONBA_PTR_GET_DEFAULT(usageType_, "") };
      inline ChargeModules& setUsageType(string usageType) { DARABONBA_PTR_SET_VALUE(usageType_, usageType) };


      // usageUnitFactor Field Functions 
      bool hasUsageUnitFactor() const { return this->usageUnitFactor_ != nullptr;};
      void deleteUsageUnitFactor() { this->usageUnitFactor_ = nullptr;};
      inline int32_t getUsageUnitFactor() const { DARABONBA_PTR_GET_DEFAULT(usageUnitFactor_, 0) };
      inline ChargeModules& setUsageUnitFactor(int32_t usageUnitFactor) { DARABONBA_PTR_SET_VALUE(usageUnitFactor_, usageUnitFactor) };


    protected:
      // The pricing model of the billing module. Valid values:
      // 
      // - **NORMAL_PRICE**: tiered pricing.
      // 
      // - **STEP_ACCUMULATION**: tiered pricing.
      shared_ptr<string> chargeMode_ {};
      // The detailed pricing information for the billing module.
      shared_ptr<vector<string>> chargeModeDetails_ {};
      // The code of the billing module. Valid values:
      // 
      // - **domainCount**: the number of domain names added to WAF in CNAME record mode.
      // 
      // - **qps**: the peak queries per second (QPS).
      // 
      // - **request**: the basic traffic fee.
      // 
      // - **ipBlacklistRuleCount**: the number of IP blacklist rules.
      // 
      // - **customAclBaseRuleCount**: the number of basic rules in custom protection rules.
      // 
      // - **customAclAdvanceRuleCount**: the number of advanced rules in custom protection rules.
      // 
      // - **antiScanRuleCount**: the number of scan protection rules.
      // 
      // - **customResponseRuleCount**: the number of custom response rules.
      // 
      // - **ipv6**: IPv6 protection.
      // 
      // - **gslb**: intelligent load balancing.
      // 
      // - **exclusiveIpCount**: the number of exclusive IP addresses.
      // 
      // - **ccRuleCount**: the number of HTTP flood protection rules.
      // 
      // - **regionBlockRuleCount**: the number of rules in the region blacklist.
      // 
      // - **tamperproofRuleCount**: the number of web tamper-proofing rules.
      // 
      // - **dlpRuleCount**: the number of data leakage prevention rules.
      // 
      // - **botTraffic**: the traffic fee for bot management.
      // 
      // - **aiWhiteListTemplateCount**: the number of intelligent whitelist templates.
      // 
      // - **apisecResourceCount**: the number of protected objects for which API security is enabled.
      // 
      // - **apisecTraffic**: the traffic fee for API security.
      // 
      // - **compliance**: the number of protocol compliance templates.
      // 
      // - **riskTraffic**: the number of times that risk identification in bot management is matched.
      // 
      // - **assetStatus**: asset center.
      // 
      // - **nonPort**: custom ports protection.
      // 
      // - **customAclCaptcha**: the number of times that sliders are used for custom protection rules.
      // 
      // - **wafBaseTemplateCount**: the number of core web protection rules.
      // 
      // - **instanceFee**: the WAF instance fee.
      // 
      // - **spikeThrottleRuleCount**: the number of peak traffic throttling rules.
      // 
      // - **botWebTemplateCount**: the number of web protection templates in bot management.
      // 
      // - **botAppTemplateCount**: the number of app protection templates in bot management.
      // 
      // - **customAclBotRuleCount**: the number of advanced custom rules in bot management.
      shared_ptr<string> moduleCode_ {};
      // The billing cycle of the billing module. Valid values:
      // 
      // - **Hour**: hourly billing.
      shared_ptr<string> periodType_ {};
      // The usage type of the billing module. Valid values:
      // 
      // - **template**: template.
      // 
      // - **qps**: QPS.
      // 
      // - **domain**: domain name.
      // 
      // - **rule**: rule.
      // 
      // - **ip**: IP address.
      // 
      // - **resource**: protected object.
      // 
      // - **request**: request.
      // 
      // - **function**: feature enablement.
      // 
      // - **time**: number of times.
      shared_ptr<string> usageType_ {};
      // The billing unit coefficient of the billing module.
      // 
      // > The usage unit for the module is determined by multiplying the **UsageUnitFactor** by the **UsageType**.
      shared_ptr<int32_t> usageUnitFactor_ {};
    };

    virtual bool empty() const override { return this->chargeModules_ == nullptr
        && this->requestId_ == nullptr; };
    // chargeModules Field Functions 
    bool hasChargeModules() const { return this->chargeModules_ != nullptr;};
    void deleteChargeModules() { this->chargeModules_ = nullptr;};
    inline const vector<DescribeChargeModuleResponseBody::ChargeModules> & getChargeModules() const { DARABONBA_PTR_GET_CONST(chargeModules_, vector<DescribeChargeModuleResponseBody::ChargeModules>) };
    inline vector<DescribeChargeModuleResponseBody::ChargeModules> getChargeModules() { DARABONBA_PTR_GET(chargeModules_, vector<DescribeChargeModuleResponseBody::ChargeModules>) };
    inline DescribeChargeModuleResponseBody& setChargeModules(const vector<DescribeChargeModuleResponseBody::ChargeModules> & chargeModules) { DARABONBA_PTR_SET_VALUE(chargeModules_, chargeModules) };
    inline DescribeChargeModuleResponseBody& setChargeModules(vector<DescribeChargeModuleResponseBody::ChargeModules> && chargeModules) { DARABONBA_PTR_SET_RVALUE(chargeModules_, chargeModules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChargeModuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of billing modules for WAF.
    shared_ptr<vector<DescribeChargeModuleResponseBody::ChargeModules>> chargeModules_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
