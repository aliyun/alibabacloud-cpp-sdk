// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InDebt, inDebt_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(ProcessStatus, processStatus_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InDebt, inDebt_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(ProcessStatus, processStatus_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody(DescribeInstanceResponseBody &&) = default ;
    DescribeInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody& operator=(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody& operator=(DescribeInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Details : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Details& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Details& obj) { 
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
      Details() = default ;
      Details(const Details &) = default ;
      Details(Details &&) = default ;
      Details(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Details() = default ;
      Details& operator=(const Details &) = default ;
      Details& operator=(Details &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aclRuleMaxIpCount_ == nullptr
        && this->antiScan_ == nullptr && this->antiScanTemplateMaxCount_ == nullptr && this->backendMaxCount_ == nullptr && this->baseWafGroup_ == nullptr && this->baseWafGroupRuleInTemplateMaxCount_ == nullptr
        && this->baseWafGroupRuleTemplateMaxCount_ == nullptr && this->bot_ == nullptr && this->botApp_ == nullptr && this->botTemplateMaxCount_ == nullptr && this->botWeb_ == nullptr
        && this->cnameResourceMaxCount_ == nullptr && this->customResponse_ == nullptr && this->customResponseRuleInTemplateMaxCount_ == nullptr && this->customResponseTemplateMaxCount_ == nullptr && this->customRule_ == nullptr
        && this->customRuleAction_ == nullptr && this->customRuleCondition_ == nullptr && this->customRuleInTemplateMaxCount_ == nullptr && this->customRuleRatelimitor_ == nullptr && this->customRuleTemplateMaxCount_ == nullptr
        && this->defenseGroupMaxCount_ == nullptr && this->defenseObjectInGroupMaxCount_ == nullptr && this->defenseObjectInTemplateMaxCount_ == nullptr && this->defenseObjectMaxCount_ == nullptr && this->dlp_ == nullptr
        && this->dlpRuleInTemplateMaxCount_ == nullptr && this->dlpTemplateMaxCount_ == nullptr && this->elasticQps_ == nullptr && this->exclusiveIp_ == nullptr && this->extendQps_ == nullptr
        && this->freeQps_ == nullptr && this->gslb_ == nullptr && this->httpPorts_ == nullptr && this->httpsPorts_ == nullptr && this->ipBlacklist_ == nullptr
        && this->ipBlacklistIpInRuleMaxCount_ == nullptr && this->ipBlacklistRuleInTemplateMaxCount_ == nullptr && this->ipBlacklistTemplateMaxCount_ == nullptr && this->ipv6_ == nullptr && this->logService_ == nullptr
        && this->majorProtection_ == nullptr && this->majorProtectionTemplateMaxCount_ == nullptr && this->qpsBillingCap_ == nullptr && this->tamperproof_ == nullptr && this->tamperproofRuleInTemplateMaxCount_ == nullptr
        && this->tamperproofTemplateMaxCount_ == nullptr && this->vastIpBlacklistInFileMaxCount_ == nullptr && this->vastIpBlacklistInOperationMaxCount_ == nullptr && this->vastIpBlacklistMaxCount_ == nullptr && this->whitelist_ == nullptr
        && this->whitelistLogical_ == nullptr && this->whitelistRuleCondition_ == nullptr && this->whitelistRuleInTemplateMaxCount_ == nullptr && this->whitelistTemplateMaxCount_ == nullptr; };
      // aclRuleMaxIpCount Field Functions 
      bool hasAclRuleMaxIpCount() const { return this->aclRuleMaxIpCount_ != nullptr;};
      void deleteAclRuleMaxIpCount() { this->aclRuleMaxIpCount_ = nullptr;};
      inline int64_t getAclRuleMaxIpCount() const { DARABONBA_PTR_GET_DEFAULT(aclRuleMaxIpCount_, 0L) };
      inline Details& setAclRuleMaxIpCount(int64_t aclRuleMaxIpCount) { DARABONBA_PTR_SET_VALUE(aclRuleMaxIpCount_, aclRuleMaxIpCount) };


      // antiScan Field Functions 
      bool hasAntiScan() const { return this->antiScan_ != nullptr;};
      void deleteAntiScan() { this->antiScan_ = nullptr;};
      inline bool getAntiScan() const { DARABONBA_PTR_GET_DEFAULT(antiScan_, false) };
      inline Details& setAntiScan(bool antiScan) { DARABONBA_PTR_SET_VALUE(antiScan_, antiScan) };


      // antiScanTemplateMaxCount Field Functions 
      bool hasAntiScanTemplateMaxCount() const { return this->antiScanTemplateMaxCount_ != nullptr;};
      void deleteAntiScanTemplateMaxCount() { this->antiScanTemplateMaxCount_ = nullptr;};
      inline int64_t getAntiScanTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(antiScanTemplateMaxCount_, 0L) };
      inline Details& setAntiScanTemplateMaxCount(int64_t antiScanTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(antiScanTemplateMaxCount_, antiScanTemplateMaxCount) };


      // backendMaxCount Field Functions 
      bool hasBackendMaxCount() const { return this->backendMaxCount_ != nullptr;};
      void deleteBackendMaxCount() { this->backendMaxCount_ = nullptr;};
      inline int64_t getBackendMaxCount() const { DARABONBA_PTR_GET_DEFAULT(backendMaxCount_, 0L) };
      inline Details& setBackendMaxCount(int64_t backendMaxCount) { DARABONBA_PTR_SET_VALUE(backendMaxCount_, backendMaxCount) };


      // baseWafGroup Field Functions 
      bool hasBaseWafGroup() const { return this->baseWafGroup_ != nullptr;};
      void deleteBaseWafGroup() { this->baseWafGroup_ = nullptr;};
      inline bool getBaseWafGroup() const { DARABONBA_PTR_GET_DEFAULT(baseWafGroup_, false) };
      inline Details& setBaseWafGroup(bool baseWafGroup) { DARABONBA_PTR_SET_VALUE(baseWafGroup_, baseWafGroup) };


      // baseWafGroupRuleInTemplateMaxCount Field Functions 
      bool hasBaseWafGroupRuleInTemplateMaxCount() const { return this->baseWafGroupRuleInTemplateMaxCount_ != nullptr;};
      void deleteBaseWafGroupRuleInTemplateMaxCount() { this->baseWafGroupRuleInTemplateMaxCount_ = nullptr;};
      inline int64_t getBaseWafGroupRuleInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(baseWafGroupRuleInTemplateMaxCount_, 0L) };
      inline Details& setBaseWafGroupRuleInTemplateMaxCount(int64_t baseWafGroupRuleInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(baseWafGroupRuleInTemplateMaxCount_, baseWafGroupRuleInTemplateMaxCount) };


      // baseWafGroupRuleTemplateMaxCount Field Functions 
      bool hasBaseWafGroupRuleTemplateMaxCount() const { return this->baseWafGroupRuleTemplateMaxCount_ != nullptr;};
      void deleteBaseWafGroupRuleTemplateMaxCount() { this->baseWafGroupRuleTemplateMaxCount_ = nullptr;};
      inline int64_t getBaseWafGroupRuleTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(baseWafGroupRuleTemplateMaxCount_, 0L) };
      inline Details& setBaseWafGroupRuleTemplateMaxCount(int64_t baseWafGroupRuleTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(baseWafGroupRuleTemplateMaxCount_, baseWafGroupRuleTemplateMaxCount) };


      // bot Field Functions 
      bool hasBot() const { return this->bot_ != nullptr;};
      void deleteBot() { this->bot_ = nullptr;};
      inline bool getBot() const { DARABONBA_PTR_GET_DEFAULT(bot_, false) };
      inline Details& setBot(bool bot) { DARABONBA_PTR_SET_VALUE(bot_, bot) };


      // botApp Field Functions 
      bool hasBotApp() const { return this->botApp_ != nullptr;};
      void deleteBotApp() { this->botApp_ = nullptr;};
      inline string getBotApp() const { DARABONBA_PTR_GET_DEFAULT(botApp_, "") };
      inline Details& setBotApp(string botApp) { DARABONBA_PTR_SET_VALUE(botApp_, botApp) };


      // botTemplateMaxCount Field Functions 
      bool hasBotTemplateMaxCount() const { return this->botTemplateMaxCount_ != nullptr;};
      void deleteBotTemplateMaxCount() { this->botTemplateMaxCount_ = nullptr;};
      inline int64_t getBotTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(botTemplateMaxCount_, 0L) };
      inline Details& setBotTemplateMaxCount(int64_t botTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(botTemplateMaxCount_, botTemplateMaxCount) };


      // botWeb Field Functions 
      bool hasBotWeb() const { return this->botWeb_ != nullptr;};
      void deleteBotWeb() { this->botWeb_ = nullptr;};
      inline string getBotWeb() const { DARABONBA_PTR_GET_DEFAULT(botWeb_, "") };
      inline Details& setBotWeb(string botWeb) { DARABONBA_PTR_SET_VALUE(botWeb_, botWeb) };


      // cnameResourceMaxCount Field Functions 
      bool hasCnameResourceMaxCount() const { return this->cnameResourceMaxCount_ != nullptr;};
      void deleteCnameResourceMaxCount() { this->cnameResourceMaxCount_ = nullptr;};
      inline int64_t getCnameResourceMaxCount() const { DARABONBA_PTR_GET_DEFAULT(cnameResourceMaxCount_, 0L) };
      inline Details& setCnameResourceMaxCount(int64_t cnameResourceMaxCount) { DARABONBA_PTR_SET_VALUE(cnameResourceMaxCount_, cnameResourceMaxCount) };


      // customResponse Field Functions 
      bool hasCustomResponse() const { return this->customResponse_ != nullptr;};
      void deleteCustomResponse() { this->customResponse_ = nullptr;};
      inline bool getCustomResponse() const { DARABONBA_PTR_GET_DEFAULT(customResponse_, false) };
      inline Details& setCustomResponse(bool customResponse) { DARABONBA_PTR_SET_VALUE(customResponse_, customResponse) };


      // customResponseRuleInTemplateMaxCount Field Functions 
      bool hasCustomResponseRuleInTemplateMaxCount() const { return this->customResponseRuleInTemplateMaxCount_ != nullptr;};
      void deleteCustomResponseRuleInTemplateMaxCount() { this->customResponseRuleInTemplateMaxCount_ = nullptr;};
      inline int64_t getCustomResponseRuleInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(customResponseRuleInTemplateMaxCount_, 0L) };
      inline Details& setCustomResponseRuleInTemplateMaxCount(int64_t customResponseRuleInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(customResponseRuleInTemplateMaxCount_, customResponseRuleInTemplateMaxCount) };


      // customResponseTemplateMaxCount Field Functions 
      bool hasCustomResponseTemplateMaxCount() const { return this->customResponseTemplateMaxCount_ != nullptr;};
      void deleteCustomResponseTemplateMaxCount() { this->customResponseTemplateMaxCount_ = nullptr;};
      inline int64_t getCustomResponseTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(customResponseTemplateMaxCount_, 0L) };
      inline Details& setCustomResponseTemplateMaxCount(int64_t customResponseTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(customResponseTemplateMaxCount_, customResponseTemplateMaxCount) };


      // customRule Field Functions 
      bool hasCustomRule() const { return this->customRule_ != nullptr;};
      void deleteCustomRule() { this->customRule_ = nullptr;};
      inline bool getCustomRule() const { DARABONBA_PTR_GET_DEFAULT(customRule_, false) };
      inline Details& setCustomRule(bool customRule) { DARABONBA_PTR_SET_VALUE(customRule_, customRule) };


      // customRuleAction Field Functions 
      bool hasCustomRuleAction() const { return this->customRuleAction_ != nullptr;};
      void deleteCustomRuleAction() { this->customRuleAction_ = nullptr;};
      inline string getCustomRuleAction() const { DARABONBA_PTR_GET_DEFAULT(customRuleAction_, "") };
      inline Details& setCustomRuleAction(string customRuleAction) { DARABONBA_PTR_SET_VALUE(customRuleAction_, customRuleAction) };


      // customRuleCondition Field Functions 
      bool hasCustomRuleCondition() const { return this->customRuleCondition_ != nullptr;};
      void deleteCustomRuleCondition() { this->customRuleCondition_ = nullptr;};
      inline string getCustomRuleCondition() const { DARABONBA_PTR_GET_DEFAULT(customRuleCondition_, "") };
      inline Details& setCustomRuleCondition(string customRuleCondition) { DARABONBA_PTR_SET_VALUE(customRuleCondition_, customRuleCondition) };


      // customRuleInTemplateMaxCount Field Functions 
      bool hasCustomRuleInTemplateMaxCount() const { return this->customRuleInTemplateMaxCount_ != nullptr;};
      void deleteCustomRuleInTemplateMaxCount() { this->customRuleInTemplateMaxCount_ = nullptr;};
      inline int64_t getCustomRuleInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(customRuleInTemplateMaxCount_, 0L) };
      inline Details& setCustomRuleInTemplateMaxCount(int64_t customRuleInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(customRuleInTemplateMaxCount_, customRuleInTemplateMaxCount) };


      // customRuleRatelimitor Field Functions 
      bool hasCustomRuleRatelimitor() const { return this->customRuleRatelimitor_ != nullptr;};
      void deleteCustomRuleRatelimitor() { this->customRuleRatelimitor_ = nullptr;};
      inline string getCustomRuleRatelimitor() const { DARABONBA_PTR_GET_DEFAULT(customRuleRatelimitor_, "") };
      inline Details& setCustomRuleRatelimitor(string customRuleRatelimitor) { DARABONBA_PTR_SET_VALUE(customRuleRatelimitor_, customRuleRatelimitor) };


      // customRuleTemplateMaxCount Field Functions 
      bool hasCustomRuleTemplateMaxCount() const { return this->customRuleTemplateMaxCount_ != nullptr;};
      void deleteCustomRuleTemplateMaxCount() { this->customRuleTemplateMaxCount_ = nullptr;};
      inline int64_t getCustomRuleTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(customRuleTemplateMaxCount_, 0L) };
      inline Details& setCustomRuleTemplateMaxCount(int64_t customRuleTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(customRuleTemplateMaxCount_, customRuleTemplateMaxCount) };


      // defenseGroupMaxCount Field Functions 
      bool hasDefenseGroupMaxCount() const { return this->defenseGroupMaxCount_ != nullptr;};
      void deleteDefenseGroupMaxCount() { this->defenseGroupMaxCount_ = nullptr;};
      inline int64_t getDefenseGroupMaxCount() const { DARABONBA_PTR_GET_DEFAULT(defenseGroupMaxCount_, 0L) };
      inline Details& setDefenseGroupMaxCount(int64_t defenseGroupMaxCount) { DARABONBA_PTR_SET_VALUE(defenseGroupMaxCount_, defenseGroupMaxCount) };


      // defenseObjectInGroupMaxCount Field Functions 
      bool hasDefenseObjectInGroupMaxCount() const { return this->defenseObjectInGroupMaxCount_ != nullptr;};
      void deleteDefenseObjectInGroupMaxCount() { this->defenseObjectInGroupMaxCount_ = nullptr;};
      inline int64_t getDefenseObjectInGroupMaxCount() const { DARABONBA_PTR_GET_DEFAULT(defenseObjectInGroupMaxCount_, 0L) };
      inline Details& setDefenseObjectInGroupMaxCount(int64_t defenseObjectInGroupMaxCount) { DARABONBA_PTR_SET_VALUE(defenseObjectInGroupMaxCount_, defenseObjectInGroupMaxCount) };


      // defenseObjectInTemplateMaxCount Field Functions 
      bool hasDefenseObjectInTemplateMaxCount() const { return this->defenseObjectInTemplateMaxCount_ != nullptr;};
      void deleteDefenseObjectInTemplateMaxCount() { this->defenseObjectInTemplateMaxCount_ = nullptr;};
      inline int64_t getDefenseObjectInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(defenseObjectInTemplateMaxCount_, 0L) };
      inline Details& setDefenseObjectInTemplateMaxCount(int64_t defenseObjectInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(defenseObjectInTemplateMaxCount_, defenseObjectInTemplateMaxCount) };


      // defenseObjectMaxCount Field Functions 
      bool hasDefenseObjectMaxCount() const { return this->defenseObjectMaxCount_ != nullptr;};
      void deleteDefenseObjectMaxCount() { this->defenseObjectMaxCount_ = nullptr;};
      inline int64_t getDefenseObjectMaxCount() const { DARABONBA_PTR_GET_DEFAULT(defenseObjectMaxCount_, 0L) };
      inline Details& setDefenseObjectMaxCount(int64_t defenseObjectMaxCount) { DARABONBA_PTR_SET_VALUE(defenseObjectMaxCount_, defenseObjectMaxCount) };


      // dlp Field Functions 
      bool hasDlp() const { return this->dlp_ != nullptr;};
      void deleteDlp() { this->dlp_ = nullptr;};
      inline bool getDlp() const { DARABONBA_PTR_GET_DEFAULT(dlp_, false) };
      inline Details& setDlp(bool dlp) { DARABONBA_PTR_SET_VALUE(dlp_, dlp) };


      // dlpRuleInTemplateMaxCount Field Functions 
      bool hasDlpRuleInTemplateMaxCount() const { return this->dlpRuleInTemplateMaxCount_ != nullptr;};
      void deleteDlpRuleInTemplateMaxCount() { this->dlpRuleInTemplateMaxCount_ = nullptr;};
      inline int64_t getDlpRuleInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(dlpRuleInTemplateMaxCount_, 0L) };
      inline Details& setDlpRuleInTemplateMaxCount(int64_t dlpRuleInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(dlpRuleInTemplateMaxCount_, dlpRuleInTemplateMaxCount) };


      // dlpTemplateMaxCount Field Functions 
      bool hasDlpTemplateMaxCount() const { return this->dlpTemplateMaxCount_ != nullptr;};
      void deleteDlpTemplateMaxCount() { this->dlpTemplateMaxCount_ = nullptr;};
      inline int64_t getDlpTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(dlpTemplateMaxCount_, 0L) };
      inline Details& setDlpTemplateMaxCount(int64_t dlpTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(dlpTemplateMaxCount_, dlpTemplateMaxCount) };


      // elasticQps Field Functions 
      bool hasElasticQps() const { return this->elasticQps_ != nullptr;};
      void deleteElasticQps() { this->elasticQps_ = nullptr;};
      inline int32_t getElasticQps() const { DARABONBA_PTR_GET_DEFAULT(elasticQps_, 0) };
      inline Details& setElasticQps(int32_t elasticQps) { DARABONBA_PTR_SET_VALUE(elasticQps_, elasticQps) };


      // exclusiveIp Field Functions 
      bool hasExclusiveIp() const { return this->exclusiveIp_ != nullptr;};
      void deleteExclusiveIp() { this->exclusiveIp_ = nullptr;};
      inline bool getExclusiveIp() const { DARABONBA_PTR_GET_DEFAULT(exclusiveIp_, false) };
      inline Details& setExclusiveIp(bool exclusiveIp) { DARABONBA_PTR_SET_VALUE(exclusiveIp_, exclusiveIp) };


      // extendQps Field Functions 
      bool hasExtendQps() const { return this->extendQps_ != nullptr;};
      void deleteExtendQps() { this->extendQps_ = nullptr;};
      inline int32_t getExtendQps() const { DARABONBA_PTR_GET_DEFAULT(extendQps_, 0) };
      inline Details& setExtendQps(int32_t extendQps) { DARABONBA_PTR_SET_VALUE(extendQps_, extendQps) };


      // freeQps Field Functions 
      bool hasFreeQps() const { return this->freeQps_ != nullptr;};
      void deleteFreeQps() { this->freeQps_ = nullptr;};
      inline int32_t getFreeQps() const { DARABONBA_PTR_GET_DEFAULT(freeQps_, 0) };
      inline Details& setFreeQps(int32_t freeQps) { DARABONBA_PTR_SET_VALUE(freeQps_, freeQps) };


      // gslb Field Functions 
      bool hasGslb() const { return this->gslb_ != nullptr;};
      void deleteGslb() { this->gslb_ = nullptr;};
      inline bool getGslb() const { DARABONBA_PTR_GET_DEFAULT(gslb_, false) };
      inline Details& setGslb(bool gslb) { DARABONBA_PTR_SET_VALUE(gslb_, gslb) };


      // httpPorts Field Functions 
      bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
      void deleteHttpPorts() { this->httpPorts_ = nullptr;};
      inline string getHttpPorts() const { DARABONBA_PTR_GET_DEFAULT(httpPorts_, "") };
      inline Details& setHttpPorts(string httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };


      // httpsPorts Field Functions 
      bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
      void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
      inline string getHttpsPorts() const { DARABONBA_PTR_GET_DEFAULT(httpsPorts_, "") };
      inline Details& setHttpsPorts(string httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };


      // ipBlacklist Field Functions 
      bool hasIpBlacklist() const { return this->ipBlacklist_ != nullptr;};
      void deleteIpBlacklist() { this->ipBlacklist_ = nullptr;};
      inline bool getIpBlacklist() const { DARABONBA_PTR_GET_DEFAULT(ipBlacklist_, false) };
      inline Details& setIpBlacklist(bool ipBlacklist) { DARABONBA_PTR_SET_VALUE(ipBlacklist_, ipBlacklist) };


      // ipBlacklistIpInRuleMaxCount Field Functions 
      bool hasIpBlacklistIpInRuleMaxCount() const { return this->ipBlacklistIpInRuleMaxCount_ != nullptr;};
      void deleteIpBlacklistIpInRuleMaxCount() { this->ipBlacklistIpInRuleMaxCount_ = nullptr;};
      inline int64_t getIpBlacklistIpInRuleMaxCount() const { DARABONBA_PTR_GET_DEFAULT(ipBlacklistIpInRuleMaxCount_, 0L) };
      inline Details& setIpBlacklistIpInRuleMaxCount(int64_t ipBlacklistIpInRuleMaxCount) { DARABONBA_PTR_SET_VALUE(ipBlacklistIpInRuleMaxCount_, ipBlacklistIpInRuleMaxCount) };


      // ipBlacklistRuleInTemplateMaxCount Field Functions 
      bool hasIpBlacklistRuleInTemplateMaxCount() const { return this->ipBlacklistRuleInTemplateMaxCount_ != nullptr;};
      void deleteIpBlacklistRuleInTemplateMaxCount() { this->ipBlacklistRuleInTemplateMaxCount_ = nullptr;};
      inline int64_t getIpBlacklistRuleInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(ipBlacklistRuleInTemplateMaxCount_, 0L) };
      inline Details& setIpBlacklistRuleInTemplateMaxCount(int64_t ipBlacklistRuleInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(ipBlacklistRuleInTemplateMaxCount_, ipBlacklistRuleInTemplateMaxCount) };


      // ipBlacklistTemplateMaxCount Field Functions 
      bool hasIpBlacklistTemplateMaxCount() const { return this->ipBlacklistTemplateMaxCount_ != nullptr;};
      void deleteIpBlacklistTemplateMaxCount() { this->ipBlacklistTemplateMaxCount_ = nullptr;};
      inline int64_t getIpBlacklistTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(ipBlacklistTemplateMaxCount_, 0L) };
      inline Details& setIpBlacklistTemplateMaxCount(int64_t ipBlacklistTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(ipBlacklistTemplateMaxCount_, ipBlacklistTemplateMaxCount) };


      // ipv6 Field Functions 
      bool hasIpv6() const { return this->ipv6_ != nullptr;};
      void deleteIpv6() { this->ipv6_ = nullptr;};
      inline bool getIpv6() const { DARABONBA_PTR_GET_DEFAULT(ipv6_, false) };
      inline Details& setIpv6(bool ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };


      // logService Field Functions 
      bool hasLogService() const { return this->logService_ != nullptr;};
      void deleteLogService() { this->logService_ = nullptr;};
      inline bool getLogService() const { DARABONBA_PTR_GET_DEFAULT(logService_, false) };
      inline Details& setLogService(bool logService) { DARABONBA_PTR_SET_VALUE(logService_, logService) };


      // majorProtection Field Functions 
      bool hasMajorProtection() const { return this->majorProtection_ != nullptr;};
      void deleteMajorProtection() { this->majorProtection_ = nullptr;};
      inline bool getMajorProtection() const { DARABONBA_PTR_GET_DEFAULT(majorProtection_, false) };
      inline Details& setMajorProtection(bool majorProtection) { DARABONBA_PTR_SET_VALUE(majorProtection_, majorProtection) };


      // majorProtectionTemplateMaxCount Field Functions 
      bool hasMajorProtectionTemplateMaxCount() const { return this->majorProtectionTemplateMaxCount_ != nullptr;};
      void deleteMajorProtectionTemplateMaxCount() { this->majorProtectionTemplateMaxCount_ = nullptr;};
      inline int64_t getMajorProtectionTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(majorProtectionTemplateMaxCount_, 0L) };
      inline Details& setMajorProtectionTemplateMaxCount(int64_t majorProtectionTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(majorProtectionTemplateMaxCount_, majorProtectionTemplateMaxCount) };


      // qpsBillingCap Field Functions 
      bool hasQpsBillingCap() const { return this->qpsBillingCap_ != nullptr;};
      void deleteQpsBillingCap() { this->qpsBillingCap_ = nullptr;};
      inline int32_t getQpsBillingCap() const { DARABONBA_PTR_GET_DEFAULT(qpsBillingCap_, 0) };
      inline Details& setQpsBillingCap(int32_t qpsBillingCap) { DARABONBA_PTR_SET_VALUE(qpsBillingCap_, qpsBillingCap) };


      // tamperproof Field Functions 
      bool hasTamperproof() const { return this->tamperproof_ != nullptr;};
      void deleteTamperproof() { this->tamperproof_ = nullptr;};
      inline bool getTamperproof() const { DARABONBA_PTR_GET_DEFAULT(tamperproof_, false) };
      inline Details& setTamperproof(bool tamperproof) { DARABONBA_PTR_SET_VALUE(tamperproof_, tamperproof) };


      // tamperproofRuleInTemplateMaxCount Field Functions 
      bool hasTamperproofRuleInTemplateMaxCount() const { return this->tamperproofRuleInTemplateMaxCount_ != nullptr;};
      void deleteTamperproofRuleInTemplateMaxCount() { this->tamperproofRuleInTemplateMaxCount_ = nullptr;};
      inline int64_t getTamperproofRuleInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(tamperproofRuleInTemplateMaxCount_, 0L) };
      inline Details& setTamperproofRuleInTemplateMaxCount(int64_t tamperproofRuleInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(tamperproofRuleInTemplateMaxCount_, tamperproofRuleInTemplateMaxCount) };


      // tamperproofTemplateMaxCount Field Functions 
      bool hasTamperproofTemplateMaxCount() const { return this->tamperproofTemplateMaxCount_ != nullptr;};
      void deleteTamperproofTemplateMaxCount() { this->tamperproofTemplateMaxCount_ = nullptr;};
      inline int64_t getTamperproofTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(tamperproofTemplateMaxCount_, 0L) };
      inline Details& setTamperproofTemplateMaxCount(int64_t tamperproofTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(tamperproofTemplateMaxCount_, tamperproofTemplateMaxCount) };


      // vastIpBlacklistInFileMaxCount Field Functions 
      bool hasVastIpBlacklistInFileMaxCount() const { return this->vastIpBlacklistInFileMaxCount_ != nullptr;};
      void deleteVastIpBlacklistInFileMaxCount() { this->vastIpBlacklistInFileMaxCount_ = nullptr;};
      inline int64_t getVastIpBlacklistInFileMaxCount() const { DARABONBA_PTR_GET_DEFAULT(vastIpBlacklistInFileMaxCount_, 0L) };
      inline Details& setVastIpBlacklistInFileMaxCount(int64_t vastIpBlacklistInFileMaxCount) { DARABONBA_PTR_SET_VALUE(vastIpBlacklistInFileMaxCount_, vastIpBlacklistInFileMaxCount) };


      // vastIpBlacklistInOperationMaxCount Field Functions 
      bool hasVastIpBlacklistInOperationMaxCount() const { return this->vastIpBlacklistInOperationMaxCount_ != nullptr;};
      void deleteVastIpBlacklistInOperationMaxCount() { this->vastIpBlacklistInOperationMaxCount_ = nullptr;};
      inline int64_t getVastIpBlacklistInOperationMaxCount() const { DARABONBA_PTR_GET_DEFAULT(vastIpBlacklistInOperationMaxCount_, 0L) };
      inline Details& setVastIpBlacklistInOperationMaxCount(int64_t vastIpBlacklistInOperationMaxCount) { DARABONBA_PTR_SET_VALUE(vastIpBlacklistInOperationMaxCount_, vastIpBlacklistInOperationMaxCount) };


      // vastIpBlacklistMaxCount Field Functions 
      bool hasVastIpBlacklistMaxCount() const { return this->vastIpBlacklistMaxCount_ != nullptr;};
      void deleteVastIpBlacklistMaxCount() { this->vastIpBlacklistMaxCount_ = nullptr;};
      inline int64_t getVastIpBlacklistMaxCount() const { DARABONBA_PTR_GET_DEFAULT(vastIpBlacklistMaxCount_, 0L) };
      inline Details& setVastIpBlacklistMaxCount(int64_t vastIpBlacklistMaxCount) { DARABONBA_PTR_SET_VALUE(vastIpBlacklistMaxCount_, vastIpBlacklistMaxCount) };


      // whitelist Field Functions 
      bool hasWhitelist() const { return this->whitelist_ != nullptr;};
      void deleteWhitelist() { this->whitelist_ = nullptr;};
      inline bool getWhitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, false) };
      inline Details& setWhitelist(bool whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


      // whitelistLogical Field Functions 
      bool hasWhitelistLogical() const { return this->whitelistLogical_ != nullptr;};
      void deleteWhitelistLogical() { this->whitelistLogical_ = nullptr;};
      inline string getWhitelistLogical() const { DARABONBA_PTR_GET_DEFAULT(whitelistLogical_, "") };
      inline Details& setWhitelistLogical(string whitelistLogical) { DARABONBA_PTR_SET_VALUE(whitelistLogical_, whitelistLogical) };


      // whitelistRuleCondition Field Functions 
      bool hasWhitelistRuleCondition() const { return this->whitelistRuleCondition_ != nullptr;};
      void deleteWhitelistRuleCondition() { this->whitelistRuleCondition_ = nullptr;};
      inline string getWhitelistRuleCondition() const { DARABONBA_PTR_GET_DEFAULT(whitelistRuleCondition_, "") };
      inline Details& setWhitelistRuleCondition(string whitelistRuleCondition) { DARABONBA_PTR_SET_VALUE(whitelistRuleCondition_, whitelistRuleCondition) };


      // whitelistRuleInTemplateMaxCount Field Functions 
      bool hasWhitelistRuleInTemplateMaxCount() const { return this->whitelistRuleInTemplateMaxCount_ != nullptr;};
      void deleteWhitelistRuleInTemplateMaxCount() { this->whitelistRuleInTemplateMaxCount_ = nullptr;};
      inline int64_t getWhitelistRuleInTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(whitelistRuleInTemplateMaxCount_, 0L) };
      inline Details& setWhitelistRuleInTemplateMaxCount(int64_t whitelistRuleInTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(whitelistRuleInTemplateMaxCount_, whitelistRuleInTemplateMaxCount) };


      // whitelistTemplateMaxCount Field Functions 
      bool hasWhitelistTemplateMaxCount() const { return this->whitelistTemplateMaxCount_ != nullptr;};
      void deleteWhitelistTemplateMaxCount() { this->whitelistTemplateMaxCount_ = nullptr;};
      inline int64_t getWhitelistTemplateMaxCount() const { DARABONBA_PTR_GET_DEFAULT(whitelistTemplateMaxCount_, 0L) };
      inline Details& setWhitelistTemplateMaxCount(int64_t whitelistTemplateMaxCount) { DARABONBA_PTR_SET_VALUE(whitelistTemplateMaxCount_, whitelistTemplateMaxCount) };


    protected:
      // The maximum number of IP addresses that can be added to the match content of a match condition. For more information, see [Match conditions](https://help.aliyun.com/document_detail/374354.html).
      shared_ptr<int64_t> aclRuleMaxIpCount_ {};
      // Indicates whether the scan protection module is supported. Valid values:
      // 
      // *   **true:** The scan protection module is supported.
      // *   **false:** The scan protection module is not supported.
      shared_ptr<bool> antiScan_ {};
      // The maximum number of scan protection rule templates that can be configured.
      shared_ptr<int64_t> antiScanTemplateMaxCount_ {};
      // The maximum number of back-to-origin IP addresses that can be configured.
      shared_ptr<int64_t> backendMaxCount_ {};
      // Indicates whether the basic protection rule module is supported. Valid values:
      // 
      // *   **true:** The basic protection rule module is supported.
      // *   **false:** The basic protection rule module is not supported.
      shared_ptr<bool> baseWafGroup_ {};
      // The maximum number of protection rules that can be included in a basic protection rule template.
      shared_ptr<int64_t> baseWafGroupRuleInTemplateMaxCount_ {};
      // The maximum number of basic protection rule templates that can be configured.
      shared_ptr<int64_t> baseWafGroupRuleTemplateMaxCount_ {};
      // Indicates whether the bot management module is supported. Valid values:
      // 
      // *   **true:** The bot management module is supported.
      // *   **false:** The bot management module is not supported.
      shared_ptr<bool> bot_ {};
      // Indicates whether bot management for app protection is supported. Valid values:
      // 
      // *   **true:** Bot management for app protection is supported.
      // *   **false:** Bot management for app protection is not supported.
      shared_ptr<string> botApp_ {};
      // The maximum number of bot management rule templates that can be configured.
      shared_ptr<int64_t> botTemplateMaxCount_ {};
      // Indicates whether bot management for website protection is supported. Valid values:
      // 
      // *   **true:** Bot management for website protection is supported.
      // *   **false:** Bot management for website protection is not supported.
      shared_ptr<string> botWeb_ {};
      // The maximum number of CNAMEs that can be added.
      shared_ptr<int64_t> cnameResourceMaxCount_ {};
      // Indicates whether the custom response module is supported. Valid values:
      // 
      // *   **true:** The custom response module is supported.
      // *   **false:** The custom response module is not supported.
      shared_ptr<bool> customResponse_ {};
      // The maximum number of rules that can be included in a custom response rule template.
      shared_ptr<int64_t> customResponseRuleInTemplateMaxCount_ {};
      // The maximum number of custom response rule templates that can be configured.
      shared_ptr<int64_t> customResponseTemplateMaxCount_ {};
      // Indicates whether the custom rule module is supported. Valid values:
      // 
      // *   **true:** The custom rule module is supported.
      // *   **false:** The custom rule module is not supported.
      shared_ptr<bool> customRule_ {};
      // The action that can be included in a custom rule.
      shared_ptr<string> customRuleAction_ {};
      // The match conditions that can be used in a custom rule. For more information, see **Match condition parameters** in the "**Parameters of custom rules (custom_acl)**" section in the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
      shared_ptr<string> customRuleCondition_ {};
      // The maximum number of rules that can be included in a custom rule template.
      shared_ptr<int64_t> customRuleInTemplateMaxCount_ {};
      // The statistical object for rate limiting in a custom rule.
      shared_ptr<string> customRuleRatelimitor_ {};
      // The maximum number of custom rule templates that can be configured.
      shared_ptr<int64_t> customRuleTemplateMaxCount_ {};
      // The maximum number of protected object groups that can be configured.
      shared_ptr<int64_t> defenseGroupMaxCount_ {};
      // The maximum number of protected objects that can be included in a protected object group.
      shared_ptr<int64_t> defenseObjectInGroupMaxCount_ {};
      // The maximum number of protected objects to which a protection rule template can be applied.
      shared_ptr<int64_t> defenseObjectInTemplateMaxCount_ {};
      // The maximum number of protected objects that can be configured.
      shared_ptr<int64_t> defenseObjectMaxCount_ {};
      // Indicates whether the data leakage prevention module is supported. Valid values:
      // 
      // *   **true:** The data leakage prevention module is supported.
      // *   **false:** The data leakage prevention module is not supported.
      shared_ptr<bool> dlp_ {};
      // The maximum number of rules that can be included in a data leakage prevention rule template.
      shared_ptr<int64_t> dlpRuleInTemplateMaxCount_ {};
      // The maximum number of data leakage prevention rule templates that can be configured.
      shared_ptr<int64_t> dlpTemplateMaxCount_ {};
      shared_ptr<int32_t> elasticQps_ {};
      // Indicates whether exclusive IP addresses are supported. Valid values:
      // 
      // *   **true:** Exclusive IP addresses are supported.
      // *   **false:** Exclusive IP addresses are not supported.
      shared_ptr<bool> exclusiveIp_ {};
      shared_ptr<int32_t> extendQps_ {};
      shared_ptr<int32_t> freeQps_ {};
      // Indicates whether global server load balancing (GSLB) is supported. Valid values:
      // 
      // *   **true:** GSLB is supported.
      // *   **false:** GSLB is not supported.
      shared_ptr<bool> gslb_ {};
      // The HTTP port range that is supported. For more information, see [View supported ports](https://help.aliyun.com/document_detail/385578.html).
      shared_ptr<string> httpPorts_ {};
      // The HTTPS port range that is supported. For more information, see [View supported ports](https://help.aliyun.com/document_detail/385578.html).
      shared_ptr<string> httpsPorts_ {};
      // Indicates whether the IP address blacklist module is supported. Valid values:
      // 
      // *   **true:** The IP address blacklist module is supported.
      // *   **false:** The IP address blacklist module is not supported.
      shared_ptr<bool> ipBlacklist_ {};
      // The maximum number of IP addresses that can be added to an IP address blacklist rule.
      shared_ptr<int64_t> ipBlacklistIpInRuleMaxCount_ {};
      // The maximum number of rules that can be included in an IP address blacklist rule template.
      shared_ptr<int64_t> ipBlacklistRuleInTemplateMaxCount_ {};
      // The maximum number of IP address blacklist rule templates that can be configured.
      shared_ptr<int64_t> ipBlacklistTemplateMaxCount_ {};
      // Indicates whether IPv6 is supported. Valid values:
      // 
      // *   **true:** IPv6 is supported.
      // *   **false:** IPv6 is not supported.
      shared_ptr<bool> ipv6_ {};
      // Indicates whether the log collection feature is supported. Valid values:
      // 
      // *   **true:** The log collection feature is supported.
      // *   **false:** The log collection feature is not supported.
      shared_ptr<bool> logService_ {};
      // Indicates whether major event protection is supported. Valid values:
      // 
      // *   **true:** Major event protection is supported.
      // *   **false:** Major event protection is not supported.
      shared_ptr<bool> majorProtection_ {};
      // The maximum number of major event protection rule templates that can be configured.
      shared_ptr<int64_t> majorProtectionTemplateMaxCount_ {};
      shared_ptr<int32_t> qpsBillingCap_ {};
      // Indicates whether the website tamper-proofing module is supported. Valid values:
      // 
      // *   **true:** The website tamper-proofing module is supported.
      // *   **false:** The website tamper-proofing module is not supported.
      shared_ptr<bool> tamperproof_ {};
      // The maximum number of rules that can be included in a website tamper-proofing rule template.
      shared_ptr<int64_t> tamperproofRuleInTemplateMaxCount_ {};
      // The maximum number of website tamper-proofing rule templates that can be configured.
      shared_ptr<int64_t> tamperproofTemplateMaxCount_ {};
      // The maximum number of IP addresses or CIDR blocks that can be added to an IP address blacklist in a batch.
      shared_ptr<int64_t> vastIpBlacklistInFileMaxCount_ {};
      // The maximum number of IP addresses or CIDR blocks that can be added to an IP address blacklist on a page.
      shared_ptr<int64_t> vastIpBlacklistInOperationMaxCount_ {};
      // The maximum number of IP addresses or CIDR blocks that can be added to an IP address blacklist per Alibaba Cloud account.
      shared_ptr<int64_t> vastIpBlacklistMaxCount_ {};
      // Indicates whether the whitelist module is supported. Valid values:
      // 
      // *   **true:** The whitelist module is supported.
      // *   **false:** The whitelist module is not supported.
      shared_ptr<bool> whitelist_ {};
      // The logical operators that can be used in a whitelist rule. For more information, see **Match condition parameters** in the "**Parameters of whitelist rules (whitelist)**" section in the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
      shared_ptr<string> whitelistLogical_ {};
      // The match fields that can be used in a whitelist rule. For more information, see **Match condition parameters** in the "**Parameters of whitelist rules (whitelist)**" section in the [CreateDefenseRule](~~CreateDefenseRule~~) topic.
      shared_ptr<string> whitelistRuleCondition_ {};
      // The maximum number of rules that can be included in a whitelist rule template.
      shared_ptr<int64_t> whitelistRuleInTemplateMaxCount_ {};
      // The maximum number of whitelist rule templates that can be configured.
      shared_ptr<int64_t> whitelistTemplateMaxCount_ {};
    };

    virtual bool empty() const override { return this->details_ == nullptr
        && this->edition_ == nullptr && this->endTime_ == nullptr && this->inDebt_ == nullptr && this->instanceId_ == nullptr && this->payType_ == nullptr
        && this->processStatus_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const DescribeInstanceResponseBody::Details & getDetails() const { DARABONBA_PTR_GET_CONST(details_, DescribeInstanceResponseBody::Details) };
    inline DescribeInstanceResponseBody::Details getDetails() { DARABONBA_PTR_GET(details_, DescribeInstanceResponseBody::Details) };
    inline DescribeInstanceResponseBody& setDetails(const DescribeInstanceResponseBody::Details & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DescribeInstanceResponseBody& setDetails(DescribeInstanceResponseBody::Details && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DescribeInstanceResponseBody& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeInstanceResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // inDebt Field Functions 
    bool hasInDebt() const { return this->inDebt_ != nullptr;};
    void deleteInDebt() { this->inDebt_ = nullptr;};
    inline string getInDebt() const { DARABONBA_PTR_GET_DEFAULT(inDebt_, "") };
    inline DescribeInstanceResponseBody& setInDebt(string inDebt) { DARABONBA_PTR_SET_VALUE(inDebt_, inDebt) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeInstanceResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // processStatus Field Functions 
    bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
    void deleteProcessStatus() { this->processStatus_ = nullptr;};
    inline string getProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, "") };
    inline DescribeInstanceResponseBody& setProcessStatus(string processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeInstanceResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeInstanceResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The details of the WAF instance.
    shared_ptr<DescribeInstanceResponseBody::Details> details_ {};
    // The edition of the WAF instance.
    shared_ptr<string> edition_ {};
    // The expiration time of the WAF instance.
    shared_ptr<int64_t> endTime_ {};
    // Indicates whether the WAF instance has overdue payments. Valid values:
    // 
    // *   **0**: The WAF instance does not have overdue payments.
    // *   **1**: The WAF instance has overdue payments.
    shared_ptr<string> inDebt_ {};
    // The ID of the WAF instance.
    shared_ptr<string> instanceId_ {};
    // The billing method of the WAF instance. Valid values:
    // 
    // *   **POSTPAY:** The WAF instance uses the pay-as-you-go billing method.
    // *   **PREPAY:** The WAF instance uses the subscription billing method.
    shared_ptr<string> payType_ {};
    shared_ptr<string> processStatus_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // *   **cn-hangzhou:** the Chinese mainland
    // *   **ap-southeast-1:** outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The purchase time of the WAF instance. The time is in the UNIX timestamp format. The time is displayed in UTC. Unit: milliseconds.
    shared_ptr<int64_t> startTime_ {};
    // The status of the WAF instance. Valid values:
    // 
    // *   **1:** The WAF instance is in a normal state.
    // *   **2:** The WAF instance has expired.
    // *   **3:** The WAF instance has been released.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
