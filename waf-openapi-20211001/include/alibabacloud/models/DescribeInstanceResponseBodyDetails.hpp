// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeInstanceResponseBodyDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBodyDetails& obj) { 
      DARABONBA_PTR_TO_JSON(AclRuleMaxIpCount, aclRuleMaxIpCount_);
      DARABONBA_PTR_TO_JSON(AntiScan, antiScan_);
      DARABONBA_PTR_TO_JSON(AntiScanTemplateMaxCount, antiScanTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(BackendMaxCount, backendMaxCount_);
      DARABONBA_PTR_TO_JSON(BaseWafGroup, baseWafGroup_);
      DARABONBA_PTR_TO_JSON(BaseWafGroupRuleInTemplateMaxCount, baseWafGroupRuleInTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(BaseWafGroupRuleTemplateMaxCount, baseWafGroupRuleTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(Bot, bot_);
      DARABONBA_PTR_TO_JSON(BotApp, botApp_);
      DARABONBA_PTR_TO_JSON(BotTemplateMaxCount, botTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(BotWeb, botWeb_);
      DARABONBA_PTR_TO_JSON(CnameResourceMaxCount, cnameResourceMaxCount_);
      DARABONBA_PTR_TO_JSON(CustomResponse, customResponse_);
      DARABONBA_PTR_TO_JSON(CustomResponseRuleInTemplateMaxCount, customResponseRuleInTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(CustomResponseTemplateMaxCount, customResponseTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(CustomRule, customRule_);
      DARABONBA_PTR_TO_JSON(CustomRuleAction, customRuleAction_);
      DARABONBA_PTR_TO_JSON(CustomRuleCondition, customRuleCondition_);
      DARABONBA_PTR_TO_JSON(CustomRuleInTemplateMaxCount, customRuleInTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(CustomRuleRatelimitor, customRuleRatelimitor_);
      DARABONBA_PTR_TO_JSON(CustomRuleTemplateMaxCount, customRuleTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(DefenseGroupMaxCount, defenseGroupMaxCount_);
      DARABONBA_PTR_TO_JSON(DefenseObjectInGroupMaxCount, defenseObjectInGroupMaxCount_);
      DARABONBA_PTR_TO_JSON(DefenseObjectInTemplateMaxCount, defenseObjectInTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(DefenseObjectMaxCount, defenseObjectMaxCount_);
      DARABONBA_PTR_TO_JSON(Dlp, dlp_);
      DARABONBA_PTR_TO_JSON(DlpRuleInTemplateMaxCount, dlpRuleInTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(DlpTemplateMaxCount, dlpTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(ElasticQps, elasticQps_);
      DARABONBA_PTR_TO_JSON(ExclusiveIp, exclusiveIp_);
      DARABONBA_PTR_TO_JSON(ExtendQps, extendQps_);
      DARABONBA_PTR_TO_JSON(FreeQps, freeQps_);
      DARABONBA_PTR_TO_JSON(Gslb, gslb_);
      DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_TO_JSON(IpBlacklist, ipBlacklist_);
      DARABONBA_PTR_TO_JSON(IpBlacklistIpInRuleMaxCount, ipBlacklistIpInRuleMaxCount_);
      DARABONBA_PTR_TO_JSON(IpBlacklistRuleInTemplateMaxCount, ipBlacklistRuleInTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(IpBlacklistTemplateMaxCount, ipBlacklistTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_TO_JSON(LogService, logService_);
      DARABONBA_PTR_TO_JSON(MajorProtection, majorProtection_);
      DARABONBA_PTR_TO_JSON(MajorProtectionTemplateMaxCount, majorProtectionTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(QpsBillingCap, qpsBillingCap_);
      DARABONBA_PTR_TO_JSON(Tamperproof, tamperproof_);
      DARABONBA_PTR_TO_JSON(TamperproofRuleInTemplateMaxCount, tamperproofRuleInTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(TamperproofTemplateMaxCount, tamperproofTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(VastIpBlacklistInFileMaxCount, vastIpBlacklistInFileMaxCount_);
      DARABONBA_PTR_TO_JSON(VastIpBlacklistInOperationMaxCount, vastIpBlacklistInOperationMaxCount_);
      DARABONBA_PTR_TO_JSON(VastIpBlacklistMaxCount, vastIpBlacklistMaxCount_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
      DARABONBA_PTR_TO_JSON(WhitelistLogical, whitelistLogical_);
      DARABONBA_PTR_TO_JSON(WhitelistRuleCondition, whitelistRuleCondition_);
      DARABONBA_PTR_TO_JSON(WhitelistRuleInTemplateMaxCount, whitelistRuleInTemplateMaxCount_);
      DARABONBA_PTR_TO_JSON(WhitelistTemplateMaxCount, whitelistTemplateMaxCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBodyDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(AclRuleMaxIpCount, aclRuleMaxIpCount_);
      DARABONBA_PTR_FROM_JSON(AntiScan, antiScan_);
      DARABONBA_PTR_FROM_JSON(AntiScanTemplateMaxCount, antiScanTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(BackendMaxCount, backendMaxCount_);
      DARABONBA_PTR_FROM_JSON(BaseWafGroup, baseWafGroup_);
      DARABONBA_PTR_FROM_JSON(BaseWafGroupRuleInTemplateMaxCount, baseWafGroupRuleInTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(BaseWafGroupRuleTemplateMaxCount, baseWafGroupRuleTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(Bot, bot_);
      DARABONBA_PTR_FROM_JSON(BotApp, botApp_);
      DARABONBA_PTR_FROM_JSON(BotTemplateMaxCount, botTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(BotWeb, botWeb_);
      DARABONBA_PTR_FROM_JSON(CnameResourceMaxCount, cnameResourceMaxCount_);
      DARABONBA_PTR_FROM_JSON(CustomResponse, customResponse_);
      DARABONBA_PTR_FROM_JSON(CustomResponseRuleInTemplateMaxCount, customResponseRuleInTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(CustomResponseTemplateMaxCount, customResponseTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(CustomRule, customRule_);
      DARABONBA_PTR_FROM_JSON(CustomRuleAction, customRuleAction_);
      DARABONBA_PTR_FROM_JSON(CustomRuleCondition, customRuleCondition_);
      DARABONBA_PTR_FROM_JSON(CustomRuleInTemplateMaxCount, customRuleInTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(CustomRuleRatelimitor, customRuleRatelimitor_);
      DARABONBA_PTR_FROM_JSON(CustomRuleTemplateMaxCount, customRuleTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(DefenseGroupMaxCount, defenseGroupMaxCount_);
      DARABONBA_PTR_FROM_JSON(DefenseObjectInGroupMaxCount, defenseObjectInGroupMaxCount_);
      DARABONBA_PTR_FROM_JSON(DefenseObjectInTemplateMaxCount, defenseObjectInTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(DefenseObjectMaxCount, defenseObjectMaxCount_);
      DARABONBA_PTR_FROM_JSON(Dlp, dlp_);
      DARABONBA_PTR_FROM_JSON(DlpRuleInTemplateMaxCount, dlpRuleInTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(DlpTemplateMaxCount, dlpTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(ElasticQps, elasticQps_);
      DARABONBA_PTR_FROM_JSON(ExclusiveIp, exclusiveIp_);
      DARABONBA_PTR_FROM_JSON(ExtendQps, extendQps_);
      DARABONBA_PTR_FROM_JSON(FreeQps, freeQps_);
      DARABONBA_PTR_FROM_JSON(Gslb, gslb_);
      DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_FROM_JSON(IpBlacklist, ipBlacklist_);
      DARABONBA_PTR_FROM_JSON(IpBlacklistIpInRuleMaxCount, ipBlacklistIpInRuleMaxCount_);
      DARABONBA_PTR_FROM_JSON(IpBlacklistRuleInTemplateMaxCount, ipBlacklistRuleInTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(IpBlacklistTemplateMaxCount, ipBlacklistTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_FROM_JSON(LogService, logService_);
      DARABONBA_PTR_FROM_JSON(MajorProtection, majorProtection_);
      DARABONBA_PTR_FROM_JSON(MajorProtectionTemplateMaxCount, majorProtectionTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(QpsBillingCap, qpsBillingCap_);
      DARABONBA_PTR_FROM_JSON(Tamperproof, tamperproof_);
      DARABONBA_PTR_FROM_JSON(TamperproofRuleInTemplateMaxCount, tamperproofRuleInTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(TamperproofTemplateMaxCount, tamperproofTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(VastIpBlacklistInFileMaxCount, vastIpBlacklistInFileMaxCount_);
      DARABONBA_PTR_FROM_JSON(VastIpBlacklistInOperationMaxCount, vastIpBlacklistInOperationMaxCount_);
      DARABONBA_PTR_FROM_JSON(VastIpBlacklistMaxCount, vastIpBlacklistMaxCount_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
      DARABONBA_PTR_FROM_JSON(WhitelistLogical, whitelistLogical_);
      DARABONBA_PTR_FROM_JSON(WhitelistRuleCondition, whitelistRuleCondition_);
      DARABONBA_PTR_FROM_JSON(WhitelistRuleInTemplateMaxCount, whitelistRuleInTemplateMaxCount_);
      DARABONBA_PTR_FROM_JSON(WhitelistTemplateMaxCount, whitelistTemplateMaxCount_);
    };
    DescribeInstanceResponseBodyDetails() = default ;
    DescribeInstanceResponseBodyDetails(const DescribeInstanceResponseBodyDetails &) = default ;
    DescribeInstanceResponseBodyDetails(DescribeInstanceResponseBodyDetails &&) = default ;
    DescribeInstanceResponseBodyDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBodyDetails() = default ;
    DescribeInstanceResponseBodyDetails& operator=(const DescribeInstanceResponseBodyDetails &) = default ;
    DescribeInstanceResponseBodyDetails& operator=(DescribeInstanceResponseBodyDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclRuleMaxIpCount_ == nullptr
        && return this->antiScan_ == nullptr && return this->antiScanTemplateMaxCount_ == nullptr && return this->backendMaxCount_ == nullptr && return this->baseWafGroup_ == nullptr && return this->baseWafGroupRuleInTemplateMaxCount_ == nullptr
        && return this->baseWafGroupRuleTemplateMaxCount_ == nullptr && return this->bot_ == nullptr && return this->botApp_ == nullptr && return this->botTemplateMaxCount_ == nullptr && return this->botWeb_ == nullptr
        && return this->cnameResourceMaxCount_ == nullptr && return this->customResponse_ == nullptr && return this->customResponseRuleInTemplateMaxCount_ == nullptr && return this->customResponseTemplateMaxCount_ == nullptr && return this->customRule_ == nullptr
        && return this->customRuleAction_ == nullptr && return this->customRuleCondition_ == nullptr && return this->customRuleInTemplateMaxCount_ == nullptr && return this->customRuleRatelimitor_ == nullptr && return this->customRuleTemplateMaxCount_ == nullptr
        && return this->defenseGroupMaxCount_ == nullptr && return this->defenseObjectInGroupMaxCount_ == nullptr && return this->defenseObjectInTemplateMaxCount_ == nullptr && return this->defenseObjectMaxCount_ == nullptr && return this->dlp_ == nullptr
        && return this->dlpRuleInTemplateMaxCount_ == nullptr && return this->dlpTemplateMaxCount_ == nullptr && return this->elasticQps_ == nullptr && return this->exclusiveIp_ == nullptr && return this->extendQps_ == nullptr
        && return this->freeQps_ == nullptr && return this->gslb_ == nullptr && return this->httpPorts_ == nullptr && return this->httpsPorts_ == nullptr && return this->ipBlacklist_ == nullptr
        && return this->ipBlacklistIpInRuleMaxCount_ == nullptr && return this->ipBlacklistRuleInTemplateMaxCount_ == nullptr && return this->ipBlacklistTemplateMaxCount_ == nullptr && return this->ipv6_ == nullptr && return this->logService_ == nullptr
        && return this->majorProtection_ == nullptr && return this->majorProtectionTemplateMaxCount_ == nullptr && return this->qpsBillingCap_ == nullptr && return this->tamperproof_ == nullptr && return this->tamperproofRuleInTemplateMaxCount_ == nullptr
        && return this->tamperproofTemplateMaxCount_ == nullptr && return this->vastIpBlacklistInFileMaxCount_ == nullptr && return this->vastIpBlacklistInOperationMaxCount_ == nullptr && return this->vastIpBlacklistMaxCount_ == nullptr && return this->whitelist_ == nullptr
        && return this->whitelistLogical_ == nullptr && return this->whitelistRuleCondition_ == nullptr && return this->whitelistRuleInTemplateMaxCount_ == nullptr && return this->whitelistTemplateMaxCount_ == nullptr; };
    // aclRuleMaxIpCount Field Functions 
    bool hasAclRuleMaxIpCount() const { return this->aclRuleMaxIpCount_ != nullptr;};
    void deleteAclRuleMaxIpCount() { this->aclRuleMaxIpCount_ = nullptr;};
    inline int64_t aclRuleMaxIpCount() const { DARABONBA_PTR_GET_DEFAULT(aclRuleMaxIpCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setAclRuleMaxIpCount(int64_t aclRuleMaxIpCount) { DARABONBA_PTR_SET_VALUE(aclRuleMaxIpCount_, aclRuleMaxIpCount) };


    // antiScan Field Functions 
    bool hasAntiScan() const { return this->antiScan_ != nullptr;};
    void deleteAntiScan() { this->antiScan_ = nullptr;};
    inline bool antiScan() const { DARABONBA_PTR_GET_DEFAULT(antiScan_, false) };
    inline DescribeInstanceResponseBodyDetails& setAntiScan(bool antiScan) { DARABONBA_PTR_SET_VALUE(antiScan_, antiScan) };


    // antiScanTemplateMaxCount Field Functions 
    bool hasAntiScanTemplateMaxCount() const { return this->antiScanTemplateMaxCount_ != nullptr;};
    void deleteAntiScanTemplateMaxCount() { this->antiScanTemplateMaxCount_ = nullptr;};
    inline int64_t antiScanTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(antiScanTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setAntiScanTemplateMaxCount(int64_t antiScanTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(antiScanTemplateMaxCount_, antiScanTemplateMaxCount) };


    // backendMaxCount Field Functions 
    bool hasBackendMaxCount() const { return this->backendMaxCount_ != nullptr;};
    void deleteBackendMaxCount() { this->backendMaxCount_ = nullptr;};
    inline int64_t backendMaxCount() const { DARABONBA_PTR_GET_DEFAULT(backendMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setBackendMaxCount(int64_t backendMaxCount) { DARABONBA_PTR_SET_VALUE(backendMaxCount_, backendMaxCount) };


    // baseWafGroup Field Functions 
    bool hasBaseWafGroup() const { return this->baseWafGroup_ != nullptr;};
    void deleteBaseWafGroup() { this->baseWafGroup_ = nullptr;};
    inline bool baseWafGroup() const { DARABONBA_PTR_GET_DEFAULT(baseWafGroup_, false) };
    inline DescribeInstanceResponseBodyDetails& setBaseWafGroup(bool baseWafGroup) { DARABONBA_PTR_SET_VALUE(baseWafGroup_, baseWafGroup) };


    // baseWafGroupRuleInTemplateMaxCount Field Functions 
    bool hasBaseWafGroupRuleInTemplateMaxCount() const { return this->baseWafGroupRuleInTemplateMaxCount_ != nullptr;};
    void deleteBaseWafGroupRuleInTemplateMaxCount() { this->baseWafGroupRuleInTemplateMaxCount_ = nullptr;};
    inline int64_t baseWafGroupRuleInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(baseWafGroupRuleInTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setBaseWafGroupRuleInTemplateMaxCount(int64_t baseWafGroupRuleInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(baseWafGroupRuleInTemplateMaxCount_, baseWafGroupRuleInTemplateMaxCount) };


    // baseWafGroupRuleTemplateMaxCount Field Functions 
    bool hasBaseWafGroupRuleTemplateMaxCount() const { return this->baseWafGroupRuleTemplateMaxCount_ != nullptr;};
    void deleteBaseWafGroupRuleTemplateMaxCount() { this->baseWafGroupRuleTemplateMaxCount_ = nullptr;};
    inline int64_t baseWafGroupRuleTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(baseWafGroupRuleTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setBaseWafGroupRuleTemplateMaxCount(int64_t baseWafGroupRuleTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(baseWafGroupRuleTemplateMaxCount_, baseWafGroupRuleTemplateMaxCount) };


    // bot Field Functions 
    bool hasBot() const { return this->bot_ != nullptr;};
    void deleteBot() { this->bot_ = nullptr;};
    inline bool bot() const { DARABONBA_PTR_GET_DEFAULT(bot_, false) };
    inline DescribeInstanceResponseBodyDetails& setBot(bool bot) { DARABONBA_PTR_SET_VALUE(bot_, bot) };


    // botApp Field Functions 
    bool hasBotApp() const { return this->botApp_ != nullptr;};
    void deleteBotApp() { this->botApp_ = nullptr;};
    inline string botApp() const { DARABONBA_PTR_GET_DEFAULT(botApp_, "") };
    inline DescribeInstanceResponseBodyDetails& setBotApp(string botApp) { DARABONBA_PTR_SET_VALUE(botApp_, botApp) };


    // botTemplateMaxCount Field Functions 
    bool hasBotTemplateMaxCount() const { return this->botTemplateMaxCount_ != nullptr;};
    void deleteBotTemplateMaxCount() { this->botTemplateMaxCount_ = nullptr;};
    inline int64_t botTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(botTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setBotTemplateMaxCount(int64_t botTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(botTemplateMaxCount_, botTemplateMaxCount) };


    // botWeb Field Functions 
    bool hasBotWeb() const { return this->botWeb_ != nullptr;};
    void deleteBotWeb() { this->botWeb_ = nullptr;};
    inline string botWeb() const { DARABONBA_PTR_GET_DEFAULT(botWeb_, "") };
    inline DescribeInstanceResponseBodyDetails& setBotWeb(string botWeb) { DARABONBA_PTR_SET_VALUE(botWeb_, botWeb) };


    // cnameResourceMaxCount Field Functions 
    bool hasCnameResourceMaxCount() const { return this->cnameResourceMaxCount_ != nullptr;};
    void deleteCnameResourceMaxCount() { this->cnameResourceMaxCount_ = nullptr;};
    inline int64_t cnameResourceMaxCount() const { DARABONBA_PTR_GET_DEFAULT(cnameResourceMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setCnameResourceMaxCount(int64_t cnameResourceMaxCount) { DARABONBA_PTR_SET_VALUE(cnameResourceMaxCount_, cnameResourceMaxCount) };


    // customResponse Field Functions 
    bool hasCustomResponse() const { return this->customResponse_ != nullptr;};
    void deleteCustomResponse() { this->customResponse_ = nullptr;};
    inline bool customResponse() const { DARABONBA_PTR_GET_DEFAULT(customResponse_, false) };
    inline DescribeInstanceResponseBodyDetails& setCustomResponse(bool customResponse) { DARABONBA_PTR_SET_VALUE(customResponse_, customResponse) };


    // customResponseRuleInTemplateMaxCount Field Functions 
    bool hasCustomResponseRuleInTemplateMaxCount() const { return this->customResponseRuleInTemplateMaxCount_ != nullptr;};
    void deleteCustomResponseRuleInTemplateMaxCount() { this->customResponseRuleInTemplateMaxCount_ = nullptr;};
    inline int64_t customResponseRuleInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(customResponseRuleInTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setCustomResponseRuleInTemplateMaxCount(int64_t customResponseRuleInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(customResponseRuleInTemplateMaxCount_, customResponseRuleInTemplateMaxCount) };


    // customResponseTemplateMaxCount Field Functions 
    bool hasCustomResponseTemplateMaxCount() const { return this->customResponseTemplateMaxCount_ != nullptr;};
    void deleteCustomResponseTemplateMaxCount() { this->customResponseTemplateMaxCount_ = nullptr;};
    inline int64_t customResponseTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(customResponseTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setCustomResponseTemplateMaxCount(int64_t customResponseTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(customResponseTemplateMaxCount_, customResponseTemplateMaxCount) };


    // customRule Field Functions 
    bool hasCustomRule() const { return this->customRule_ != nullptr;};
    void deleteCustomRule() { this->customRule_ = nullptr;};
    inline bool customRule() const { DARABONBA_PTR_GET_DEFAULT(customRule_, false) };
    inline DescribeInstanceResponseBodyDetails& setCustomRule(bool customRule) { DARABONBA_PTR_SET_VALUE(customRule_, customRule) };


    // customRuleAction Field Functions 
    bool hasCustomRuleAction() const { return this->customRuleAction_ != nullptr;};
    void deleteCustomRuleAction() { this->customRuleAction_ = nullptr;};
    inline string customRuleAction() const { DARABONBA_PTR_GET_DEFAULT(customRuleAction_, "") };
    inline DescribeInstanceResponseBodyDetails& setCustomRuleAction(string customRuleAction) { DARABONBA_PTR_SET_VALUE(customRuleAction_, customRuleAction) };


    // customRuleCondition Field Functions 
    bool hasCustomRuleCondition() const { return this->customRuleCondition_ != nullptr;};
    void deleteCustomRuleCondition() { this->customRuleCondition_ = nullptr;};
    inline string customRuleCondition() const { DARABONBA_PTR_GET_DEFAULT(customRuleCondition_, "") };
    inline DescribeInstanceResponseBodyDetails& setCustomRuleCondition(string customRuleCondition) { DARABONBA_PTR_SET_VALUE(customRuleCondition_, customRuleCondition) };


    // customRuleInTemplateMaxCount Field Functions 
    bool hasCustomRuleInTemplateMaxCount() const { return this->customRuleInTemplateMaxCount_ != nullptr;};
    void deleteCustomRuleInTemplateMaxCount() { this->customRuleInTemplateMaxCount_ = nullptr;};
    inline int64_t customRuleInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(customRuleInTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setCustomRuleInTemplateMaxCount(int64_t customRuleInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(customRuleInTemplateMaxCount_, customRuleInTemplateMaxCount) };


    // customRuleRatelimitor Field Functions 
    bool hasCustomRuleRatelimitor() const { return this->customRuleRatelimitor_ != nullptr;};
    void deleteCustomRuleRatelimitor() { this->customRuleRatelimitor_ = nullptr;};
    inline string customRuleRatelimitor() const { DARABONBA_PTR_GET_DEFAULT(customRuleRatelimitor_, "") };
    inline DescribeInstanceResponseBodyDetails& setCustomRuleRatelimitor(string customRuleRatelimitor) { DARABONBA_PTR_SET_VALUE(customRuleRatelimitor_, customRuleRatelimitor) };


    // customRuleTemplateMaxCount Field Functions 
    bool hasCustomRuleTemplateMaxCount() const { return this->customRuleTemplateMaxCount_ != nullptr;};
    void deleteCustomRuleTemplateMaxCount() { this->customRuleTemplateMaxCount_ = nullptr;};
    inline int64_t customRuleTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(customRuleTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setCustomRuleTemplateMaxCount(int64_t customRuleTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(customRuleTemplateMaxCount_, customRuleTemplateMaxCount) };


    // defenseGroupMaxCount Field Functions 
    bool hasDefenseGroupMaxCount() const { return this->defenseGroupMaxCount_ != nullptr;};
    void deleteDefenseGroupMaxCount() { this->defenseGroupMaxCount_ = nullptr;};
    inline int64_t defenseGroupMaxCount() const { DARABONBA_PTR_GET_DEFAULT(defenseGroupMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setDefenseGroupMaxCount(int64_t defenseGroupMaxCount) { DARABONBA_PTR_SET_VALUE(defenseGroupMaxCount_, defenseGroupMaxCount) };


    // defenseObjectInGroupMaxCount Field Functions 
    bool hasDefenseObjectInGroupMaxCount() const { return this->defenseObjectInGroupMaxCount_ != nullptr;};
    void deleteDefenseObjectInGroupMaxCount() { this->defenseObjectInGroupMaxCount_ = nullptr;};
    inline int64_t defenseObjectInGroupMaxCount() const { DARABONBA_PTR_GET_DEFAULT(defenseObjectInGroupMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setDefenseObjectInGroupMaxCount(int64_t defenseObjectInGroupMaxCount) { DARABONBA_PTR_SET_VALUE(defenseObjectInGroupMaxCount_, defenseObjectInGroupMaxCount) };


    // defenseObjectInTemplateMaxCount Field Functions 
    bool hasDefenseObjectInTemplateMaxCount() const { return this->defenseObjectInTemplateMaxCount_ != nullptr;};
    void deleteDefenseObjectInTemplateMaxCount() { this->defenseObjectInTemplateMaxCount_ = nullptr;};
    inline int64_t defenseObjectInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(defenseObjectInTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setDefenseObjectInTemplateMaxCount(int64_t defenseObjectInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(defenseObjectInTemplateMaxCount_, defenseObjectInTemplateMaxCount) };


    // defenseObjectMaxCount Field Functions 
    bool hasDefenseObjectMaxCount() const { return this->defenseObjectMaxCount_ != nullptr;};
    void deleteDefenseObjectMaxCount() { this->defenseObjectMaxCount_ = nullptr;};
    inline int64_t defenseObjectMaxCount() const { DARABONBA_PTR_GET_DEFAULT(defenseObjectMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setDefenseObjectMaxCount(int64_t defenseObjectMaxCount) { DARABONBA_PTR_SET_VALUE(defenseObjectMaxCount_, defenseObjectMaxCount) };


    // dlp Field Functions 
    bool hasDlp() const { return this->dlp_ != nullptr;};
    void deleteDlp() { this->dlp_ = nullptr;};
    inline bool dlp() const { DARABONBA_PTR_GET_DEFAULT(dlp_, false) };
    inline DescribeInstanceResponseBodyDetails& setDlp(bool dlp) { DARABONBA_PTR_SET_VALUE(dlp_, dlp) };


    // dlpRuleInTemplateMaxCount Field Functions 
    bool hasDlpRuleInTemplateMaxCount() const { return this->dlpRuleInTemplateMaxCount_ != nullptr;};
    void deleteDlpRuleInTemplateMaxCount() { this->dlpRuleInTemplateMaxCount_ = nullptr;};
    inline int64_t dlpRuleInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(dlpRuleInTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setDlpRuleInTemplateMaxCount(int64_t dlpRuleInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(dlpRuleInTemplateMaxCount_, dlpRuleInTemplateMaxCount) };


    // dlpTemplateMaxCount Field Functions 
    bool hasDlpTemplateMaxCount() const { return this->dlpTemplateMaxCount_ != nullptr;};
    void deleteDlpTemplateMaxCount() { this->dlpTemplateMaxCount_ = nullptr;};
    inline int64_t dlpTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(dlpTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setDlpTemplateMaxCount(int64_t dlpTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(dlpTemplateMaxCount_, dlpTemplateMaxCount) };


    // elasticQps Field Functions 
    bool hasElasticQps() const { return this->elasticQps_ != nullptr;};
    void deleteElasticQps() { this->elasticQps_ = nullptr;};
    inline int32_t elasticQps() const { DARABONBA_PTR_GET_DEFAULT(elasticQps_, 0) };
    inline DescribeInstanceResponseBodyDetails& setElasticQps(int32_t elasticQps) { DARABONBA_PTR_SET_VALUE(elasticQps_, elasticQps) };


    // exclusiveIp Field Functions 
    bool hasExclusiveIp() const { return this->exclusiveIp_ != nullptr;};
    void deleteExclusiveIp() { this->exclusiveIp_ = nullptr;};
    inline bool exclusiveIp() const { DARABONBA_PTR_GET_DEFAULT(exclusiveIp_, false) };
    inline DescribeInstanceResponseBodyDetails& setExclusiveIp(bool exclusiveIp) { DARABONBA_PTR_SET_VALUE(exclusiveIp_, exclusiveIp) };


    // extendQps Field Functions 
    bool hasExtendQps() const { return this->extendQps_ != nullptr;};
    void deleteExtendQps() { this->extendQps_ = nullptr;};
    inline int32_t extendQps() const { DARABONBA_PTR_GET_DEFAULT(extendQps_, 0) };
    inline DescribeInstanceResponseBodyDetails& setExtendQps(int32_t extendQps) { DARABONBA_PTR_SET_VALUE(extendQps_, extendQps) };


    // freeQps Field Functions 
    bool hasFreeQps() const { return this->freeQps_ != nullptr;};
    void deleteFreeQps() { this->freeQps_ = nullptr;};
    inline int32_t freeQps() const { DARABONBA_PTR_GET_DEFAULT(freeQps_, 0) };
    inline DescribeInstanceResponseBodyDetails& setFreeQps(int32_t freeQps) { DARABONBA_PTR_SET_VALUE(freeQps_, freeQps) };


    // gslb Field Functions 
    bool hasGslb() const { return this->gslb_ != nullptr;};
    void deleteGslb() { this->gslb_ = nullptr;};
    inline bool gslb() const { DARABONBA_PTR_GET_DEFAULT(gslb_, false) };
    inline DescribeInstanceResponseBodyDetails& setGslb(bool gslb) { DARABONBA_PTR_SET_VALUE(gslb_, gslb) };


    // httpPorts Field Functions 
    bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
    void deleteHttpPorts() { this->httpPorts_ = nullptr;};
    inline string httpPorts() const { DARABONBA_PTR_GET_DEFAULT(httpPorts_, "") };
    inline DescribeInstanceResponseBodyDetails& setHttpPorts(string httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };


    // httpsPorts Field Functions 
    bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
    void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
    inline string httpsPorts() const { DARABONBA_PTR_GET_DEFAULT(httpsPorts_, "") };
    inline DescribeInstanceResponseBodyDetails& setHttpsPorts(string httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };


    // ipBlacklist Field Functions 
    bool hasIpBlacklist() const { return this->ipBlacklist_ != nullptr;};
    void deleteIpBlacklist() { this->ipBlacklist_ = nullptr;};
    inline bool ipBlacklist() const { DARABONBA_PTR_GET_DEFAULT(ipBlacklist_, false) };
    inline DescribeInstanceResponseBodyDetails& setIpBlacklist(bool ipBlacklist) { DARABONBA_PTR_SET_VALUE(ipBlacklist_, ipBlacklist) };


    // ipBlacklistIpInRuleMaxCount Field Functions 
    bool hasIpBlacklistIpInRuleMaxCount() const { return this->ipBlacklistIpInRuleMaxCount_ != nullptr;};
    void deleteIpBlacklistIpInRuleMaxCount() { this->ipBlacklistIpInRuleMaxCount_ = nullptr;};
    inline int64_t ipBlacklistIpInRuleMaxCount() const { DARABONBA_PTR_GET_DEFAULT(ipBlacklistIpInRuleMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setIpBlacklistIpInRuleMaxCount(int64_t ipBlacklistIpInRuleMaxCount) { DARABONBA_PTR_SET_VALUE(ipBlacklistIpInRuleMaxCount_, ipBlacklistIpInRuleMaxCount) };


    // ipBlacklistRuleInTemplateMaxCount Field Functions 
    bool hasIpBlacklistRuleInTemplateMaxCount() const { return this->ipBlacklistRuleInTemplateMaxCount_ != nullptr;};
    void deleteIpBlacklistRuleInTemplateMaxCount() { this->ipBlacklistRuleInTemplateMaxCount_ = nullptr;};
    inline int64_t ipBlacklistRuleInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(ipBlacklistRuleInTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setIpBlacklistRuleInTemplateMaxCount(int64_t ipBlacklistRuleInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(ipBlacklistRuleInTemplateMaxCount_, ipBlacklistRuleInTemplateMaxCount) };


    // ipBlacklistTemplateMaxCount Field Functions 
    bool hasIpBlacklistTemplateMaxCount() const { return this->ipBlacklistTemplateMaxCount_ != nullptr;};
    void deleteIpBlacklistTemplateMaxCount() { this->ipBlacklistTemplateMaxCount_ = nullptr;};
    inline int64_t ipBlacklistTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(ipBlacklistTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setIpBlacklistTemplateMaxCount(int64_t ipBlacklistTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(ipBlacklistTemplateMaxCount_, ipBlacklistTemplateMaxCount) };


    // ipv6 Field Functions 
    bool hasIpv6() const { return this->ipv6_ != nullptr;};
    void deleteIpv6() { this->ipv6_ = nullptr;};
    inline bool ipv6() const { DARABONBA_PTR_GET_DEFAULT(ipv6_, false) };
    inline DescribeInstanceResponseBodyDetails& setIpv6(bool ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };


    // logService Field Functions 
    bool hasLogService() const { return this->logService_ != nullptr;};
    void deleteLogService() { this->logService_ = nullptr;};
    inline bool logService() const { DARABONBA_PTR_GET_DEFAULT(logService_, false) };
    inline DescribeInstanceResponseBodyDetails& setLogService(bool logService) { DARABONBA_PTR_SET_VALUE(logService_, logService) };


    // majorProtection Field Functions 
    bool hasMajorProtection() const { return this->majorProtection_ != nullptr;};
    void deleteMajorProtection() { this->majorProtection_ = nullptr;};
    inline bool majorProtection() const { DARABONBA_PTR_GET_DEFAULT(majorProtection_, false) };
    inline DescribeInstanceResponseBodyDetails& setMajorProtection(bool majorProtection) { DARABONBA_PTR_SET_VALUE(majorProtection_, majorProtection) };


    // majorProtectionTemplateMaxCount Field Functions 
    bool hasMajorProtectionTemplateMaxCount() const { return this->majorProtectionTemplateMaxCount_ != nullptr;};
    void deleteMajorProtectionTemplateMaxCount() { this->majorProtectionTemplateMaxCount_ = nullptr;};
    inline int64_t majorProtectionTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(majorProtectionTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setMajorProtectionTemplateMaxCount(int64_t majorProtectionTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(majorProtectionTemplateMaxCount_, majorProtectionTemplateMaxCount) };


    // qpsBillingCap Field Functions 
    bool hasQpsBillingCap() const { return this->qpsBillingCap_ != nullptr;};
    void deleteQpsBillingCap() { this->qpsBillingCap_ = nullptr;};
    inline int32_t qpsBillingCap() const { DARABONBA_PTR_GET_DEFAULT(qpsBillingCap_, 0) };
    inline DescribeInstanceResponseBodyDetails& setQpsBillingCap(int32_t qpsBillingCap) { DARABONBA_PTR_SET_VALUE(qpsBillingCap_, qpsBillingCap) };


    // tamperproof Field Functions 
    bool hasTamperproof() const { return this->tamperproof_ != nullptr;};
    void deleteTamperproof() { this->tamperproof_ = nullptr;};
    inline bool tamperproof() const { DARABONBA_PTR_GET_DEFAULT(tamperproof_, false) };
    inline DescribeInstanceResponseBodyDetails& setTamperproof(bool tamperproof) { DARABONBA_PTR_SET_VALUE(tamperproof_, tamperproof) };


    // tamperproofRuleInTemplateMaxCount Field Functions 
    bool hasTamperproofRuleInTemplateMaxCount() const { return this->tamperproofRuleInTemplateMaxCount_ != nullptr;};
    void deleteTamperproofRuleInTemplateMaxCount() { this->tamperproofRuleInTemplateMaxCount_ = nullptr;};
    inline int64_t tamperproofRuleInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(tamperproofRuleInTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setTamperproofRuleInTemplateMaxCount(int64_t tamperproofRuleInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(tamperproofRuleInTemplateMaxCount_, tamperproofRuleInTemplateMaxCount) };


    // tamperproofTemplateMaxCount Field Functions 
    bool hasTamperproofTemplateMaxCount() const { return this->tamperproofTemplateMaxCount_ != nullptr;};
    void deleteTamperproofTemplateMaxCount() { this->tamperproofTemplateMaxCount_ = nullptr;};
    inline int64_t tamperproofTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(tamperproofTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setTamperproofTemplateMaxCount(int64_t tamperproofTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(tamperproofTemplateMaxCount_, tamperproofTemplateMaxCount) };


    // vastIpBlacklistInFileMaxCount Field Functions 
    bool hasVastIpBlacklistInFileMaxCount() const { return this->vastIpBlacklistInFileMaxCount_ != nullptr;};
    void deleteVastIpBlacklistInFileMaxCount() { this->vastIpBlacklistInFileMaxCount_ = nullptr;};
    inline int64_t vastIpBlacklistInFileMaxCount() const { DARABONBA_PTR_GET_DEFAULT(vastIpBlacklistInFileMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setVastIpBlacklistInFileMaxCount(int64_t vastIpBlacklistInFileMaxCount) { DARABONBA_PTR_SET_VALUE(vastIpBlacklistInFileMaxCount_, vastIpBlacklistInFileMaxCount) };


    // vastIpBlacklistInOperationMaxCount Field Functions 
    bool hasVastIpBlacklistInOperationMaxCount() const { return this->vastIpBlacklistInOperationMaxCount_ != nullptr;};
    void deleteVastIpBlacklistInOperationMaxCount() { this->vastIpBlacklistInOperationMaxCount_ = nullptr;};
    inline int64_t vastIpBlacklistInOperationMaxCount() const { DARABONBA_PTR_GET_DEFAULT(vastIpBlacklistInOperationMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setVastIpBlacklistInOperationMaxCount(int64_t vastIpBlacklistInOperationMaxCount) { DARABONBA_PTR_SET_VALUE(vastIpBlacklistInOperationMaxCount_, vastIpBlacklistInOperationMaxCount) };


    // vastIpBlacklistMaxCount Field Functions 
    bool hasVastIpBlacklistMaxCount() const { return this->vastIpBlacklistMaxCount_ != nullptr;};
    void deleteVastIpBlacklistMaxCount() { this->vastIpBlacklistMaxCount_ = nullptr;};
    inline int64_t vastIpBlacklistMaxCount() const { DARABONBA_PTR_GET_DEFAULT(vastIpBlacklistMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setVastIpBlacklistMaxCount(int64_t vastIpBlacklistMaxCount) { DARABONBA_PTR_SET_VALUE(vastIpBlacklistMaxCount_, vastIpBlacklistMaxCount) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline bool whitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, false) };
    inline DescribeInstanceResponseBodyDetails& setWhitelist(bool whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


    // whitelistLogical Field Functions 
    bool hasWhitelistLogical() const { return this->whitelistLogical_ != nullptr;};
    void deleteWhitelistLogical() { this->whitelistLogical_ = nullptr;};
    inline string whitelistLogical() const { DARABONBA_PTR_GET_DEFAULT(whitelistLogical_, "") };
    inline DescribeInstanceResponseBodyDetails& setWhitelistLogical(string whitelistLogical) { DARABONBA_PTR_SET_VALUE(whitelistLogical_, whitelistLogical) };


    // whitelistRuleCondition Field Functions 
    bool hasWhitelistRuleCondition() const { return this->whitelistRuleCondition_ != nullptr;};
    void deleteWhitelistRuleCondition() { this->whitelistRuleCondition_ = nullptr;};
    inline string whitelistRuleCondition() const { DARABONBA_PTR_GET_DEFAULT(whitelistRuleCondition_, "") };
    inline DescribeInstanceResponseBodyDetails& setWhitelistRuleCondition(string whitelistRuleCondition) { DARABONBA_PTR_SET_VALUE(whitelistRuleCondition_, whitelistRuleCondition) };


    // whitelistRuleInTemplateMaxCount Field Functions 
    bool hasWhitelistRuleInTemplateMaxCount() const { return this->whitelistRuleInTemplateMaxCount_ != nullptr;};
    void deleteWhitelistRuleInTemplateMaxCount() { this->whitelistRuleInTemplateMaxCount_ = nullptr;};
    inline int64_t whitelistRuleInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(whitelistRuleInTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setWhitelistRuleInTemplateMaxCount(int64_t whitelistRuleInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(whitelistRuleInTemplateMaxCount_, whitelistRuleInTemplateMaxCount) };


    // whitelistTemplateMaxCount Field Functions 
    bool hasWhitelistTemplateMaxCount() const { return this->whitelistTemplateMaxCount_ != nullptr;};
    void deleteWhitelistTemplateMaxCount() { this->whitelistTemplateMaxCount_ = nullptr;};
    inline int64_t whitelistTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(whitelistTemplateMaxCount_, 0L) };
    inline DescribeInstanceResponseBodyDetails& setWhitelistTemplateMaxCount(int64_t whitelistTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(whitelistTemplateMaxCount_, whitelistTemplateMaxCount) };


  protected:
    // The maximum number of IP addresses that can be added to the match content of a match condition. For more information, see [Match conditions](https://help.aliyun.com/document_detail/374354.html).
    std::shared_ptr<int64_t> aclRuleMaxIpCount_ = nullptr;
    // Indicates whether the scan protection module is supported. Valid values:
    // 
    // *   **true:** The scan protection module is supported.
    // *   **false:** The scan protection module is not supported.
    std::shared_ptr<bool> antiScan_ = nullptr;
    // The maximum number of scan protection rule templates that can be configured.
    std::shared_ptr<int64_t> antiScanTemplateMaxCount_ = nullptr;
    // The maximum number of back-to-origin IP addresses that can be configured.
    std::shared_ptr<int64_t> backendMaxCount_ = nullptr;
    // Indicates whether the basic protection rule module is supported. Valid values:
    // 
    // *   **true:** The basic protection rule module is supported.
    // *   **false:** The basic protection rule module is not supported.
    std::shared_ptr<bool> baseWafGroup_ = nullptr;
    // The maximum number of protection rules that can be included in a basic protection rule template.
    std::shared_ptr<int64_t> baseWafGroupRuleInTemplateMaxCount_ = nullptr;
    // The maximum number of basic protection rule templates that can be configured.
    std::shared_ptr<int64_t> baseWafGroupRuleTemplateMaxCount_ = nullptr;
    // Indicates whether the bot management module is supported. Valid values:
    // 
    // *   **true:** The bot management module is supported.
    // *   **false:** The bot management module is not supported.
    std::shared_ptr<bool> bot_ = nullptr;
    // Indicates whether bot management for app protection is supported. Valid values:
    // 
    // *   **true:** Bot management for app protection is supported.
    // *   **false:** Bot management for app protection is not supported.
    std::shared_ptr<string> botApp_ = nullptr;
    // The maximum number of bot management rule templates that can be configured.
    std::shared_ptr<int64_t> botTemplateMaxCount_ = nullptr;
    // Indicates whether bot management for website protection is supported. Valid values:
    // 
    // *   **true:** Bot management for website protection is supported.
    // *   **false:** Bot management for website protection is not supported.
    std::shared_ptr<string> botWeb_ = nullptr;
    // The maximum number of CNAMEs that can be added.
    std::shared_ptr<int64_t> cnameResourceMaxCount_ = nullptr;
    // Indicates whether the custom response module is supported. Valid values:
    // 
    // *   **true:** The custom response module is supported.
    // *   **false:** The custom response module is not supported.
    std::shared_ptr<bool> customResponse_ = nullptr;
    // The maximum number of rules that can be included in a custom response rule template.
    std::shared_ptr<int64_t> customResponseRuleInTemplateMaxCount_ = nullptr;
    // The maximum number of custom response rule templates that can be configured.
    std::shared_ptr<int64_t> customResponseTemplateMaxCount_ = nullptr;
    // Indicates whether the custom rule module is supported. Valid values:
    // 
    // *   **true:** The custom rule module is supported.
    // *   **false:** The custom rule module is not supported.
    std::shared_ptr<bool> customRule_ = nullptr;
    // The action that can be included in a custom rule.
    std::shared_ptr<string> customRuleAction_ = nullptr;
    // The match conditions that can be used in a custom rule. For more information, see **Match condition parameters** in the "**Parameters of custom rules (custom_acl)**" section in the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
    std::shared_ptr<string> customRuleCondition_ = nullptr;
    // The maximum number of rules that can be included in a custom rule template.
    std::shared_ptr<int64_t> customRuleInTemplateMaxCount_ = nullptr;
    // The statistical object for rate limiting in a custom rule.
    std::shared_ptr<string> customRuleRatelimitor_ = nullptr;
    // The maximum number of custom rule templates that can be configured.
    std::shared_ptr<int64_t> customRuleTemplateMaxCount_ = nullptr;
    // The maximum number of protected object groups that can be configured.
    std::shared_ptr<int64_t> defenseGroupMaxCount_ = nullptr;
    // The maximum number of protected objects that can be included in a protected object group.
    std::shared_ptr<int64_t> defenseObjectInGroupMaxCount_ = nullptr;
    // The maximum number of protected objects to which a protection rule template can be applied.
    std::shared_ptr<int64_t> defenseObjectInTemplateMaxCount_ = nullptr;
    // The maximum number of protected objects that can be configured.
    std::shared_ptr<int64_t> defenseObjectMaxCount_ = nullptr;
    // Indicates whether the data leakage prevention module is supported. Valid values:
    // 
    // *   **true:** The data leakage prevention module is supported.
    // *   **false:** The data leakage prevention module is not supported.
    std::shared_ptr<bool> dlp_ = nullptr;
    // The maximum number of rules that can be included in a data leakage prevention rule template.
    std::shared_ptr<int64_t> dlpRuleInTemplateMaxCount_ = nullptr;
    // The maximum number of data leakage prevention rule templates that can be configured.
    std::shared_ptr<int64_t> dlpTemplateMaxCount_ = nullptr;
    std::shared_ptr<int32_t> elasticQps_ = nullptr;
    // Indicates whether exclusive IP addresses are supported. Valid values:
    // 
    // *   **true:** Exclusive IP addresses are supported.
    // *   **false:** Exclusive IP addresses are not supported.
    std::shared_ptr<bool> exclusiveIp_ = nullptr;
    std::shared_ptr<int32_t> extendQps_ = nullptr;
    std::shared_ptr<int32_t> freeQps_ = nullptr;
    // Indicates whether global server load balancing (GSLB) is supported. Valid values:
    // 
    // *   **true:** GSLB is supported.
    // *   **false:** GSLB is not supported.
    std::shared_ptr<bool> gslb_ = nullptr;
    // The HTTP port range that is supported. For more information, see [View supported ports](https://help.aliyun.com/document_detail/385578.html).
    std::shared_ptr<string> httpPorts_ = nullptr;
    // The HTTPS port range that is supported. For more information, see [View supported ports](https://help.aliyun.com/document_detail/385578.html).
    std::shared_ptr<string> httpsPorts_ = nullptr;
    // Indicates whether the IP address blacklist module is supported. Valid values:
    // 
    // *   **true:** The IP address blacklist module is supported.
    // *   **false:** The IP address blacklist module is not supported.
    std::shared_ptr<bool> ipBlacklist_ = nullptr;
    // The maximum number of IP addresses that can be added to an IP address blacklist rule.
    std::shared_ptr<int64_t> ipBlacklistIpInRuleMaxCount_ = nullptr;
    // The maximum number of rules that can be included in an IP address blacklist rule template.
    std::shared_ptr<int64_t> ipBlacklistRuleInTemplateMaxCount_ = nullptr;
    // The maximum number of IP address blacklist rule templates that can be configured.
    std::shared_ptr<int64_t> ipBlacklistTemplateMaxCount_ = nullptr;
    // Indicates whether IPv6 is supported. Valid values:
    // 
    // *   **true:** IPv6 is supported.
    // *   **false:** IPv6 is not supported.
    std::shared_ptr<bool> ipv6_ = nullptr;
    // Indicates whether the log collection feature is supported. Valid values:
    // 
    // *   **true:** The log collection feature is supported.
    // *   **false:** The log collection feature is not supported.
    std::shared_ptr<bool> logService_ = nullptr;
    // Indicates whether major event protection is supported. Valid values:
    // 
    // *   **true:** Major event protection is supported.
    // *   **false:** Major event protection is not supported.
    std::shared_ptr<bool> majorProtection_ = nullptr;
    // The maximum number of major event protection rule templates that can be configured.
    std::shared_ptr<int64_t> majorProtectionTemplateMaxCount_ = nullptr;
    std::shared_ptr<int32_t> qpsBillingCap_ = nullptr;
    // Indicates whether the website tamper-proofing module is supported. Valid values:
    // 
    // *   **true:** The website tamper-proofing module is supported.
    // *   **false:** The website tamper-proofing module is not supported.
    std::shared_ptr<bool> tamperproof_ = nullptr;
    // The maximum number of rules that can be included in a website tamper-proofing rule template.
    std::shared_ptr<int64_t> tamperproofRuleInTemplateMaxCount_ = nullptr;
    // The maximum number of website tamper-proofing rule templates that can be configured.
    std::shared_ptr<int64_t> tamperproofTemplateMaxCount_ = nullptr;
    // The maximum number of IP addresses or CIDR blocks that can be added to an IP address blacklist in a batch.
    std::shared_ptr<int64_t> vastIpBlacklistInFileMaxCount_ = nullptr;
    // The maximum number of IP addresses or CIDR blocks that can be added to an IP address blacklist on a page.
    std::shared_ptr<int64_t> vastIpBlacklistInOperationMaxCount_ = nullptr;
    // The maximum number of IP addresses or CIDR blocks that can be added to an IP address blacklist per Alibaba Cloud account.
    std::shared_ptr<int64_t> vastIpBlacklistMaxCount_ = nullptr;
    // Indicates whether the whitelist module is supported. Valid values:
    // 
    // *   **true:** The whitelist module is supported.
    // *   **false:** The whitelist module is not supported.
    std::shared_ptr<bool> whitelist_ = nullptr;
    // The logical operators that can be used in a whitelist rule. For more information, see **Match condition parameters** in the "**Parameters of whitelist rules (whitelist)**" section in the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
    std::shared_ptr<string> whitelistLogical_ = nullptr;
    // The match fields that can be used in a whitelist rule. For more information, see **Match condition parameters** in the "**Parameters of whitelist rules (whitelist)**" section in the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
    std::shared_ptr<string> whitelistRuleCondition_ = nullptr;
    // The maximum number of rules that can be included in a whitelist rule template.
    std::shared_ptr<int64_t> whitelistRuleInTemplateMaxCount_ = nullptr;
    // The maximum number of whitelist rule templates that can be configured.
    std::shared_ptr<int64_t> whitelistTemplateMaxCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
