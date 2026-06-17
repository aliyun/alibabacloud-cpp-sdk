// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrafficLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclPreRuleId, aclPreRuleId_);
      DARABONBA_PTR_TO_JSON(AclPreState, aclPreState_);
      DARABONBA_PTR_TO_JSON(AppDpiState, appDpiState_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AssetRegion, assetRegion_);
      DARABONBA_PTR_TO_JSON(AttackType, attackType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainUrl, domainUrl_);
      DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
      DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
      DARABONBA_PTR_TO_JSON(DstVpcId, dstVpcId_);
      DARABONBA_PTR_TO_JSON(DstVpcRegionNo, dstVpcRegionNo_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_TO_JSON(FlowType, flowType_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(NatFirewallId, natFirewallId_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_TO_JSON(RuleSource, ruleSource_);
      DARABONBA_PTR_TO_JSON(RuleSourceFinal, ruleSourceFinal_);
      DARABONBA_PTR_TO_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_TO_JSON(SrcPort, srcPort_);
      DARABONBA_PTR_TO_JSON(SrcPrivateIP, srcPrivateIP_);
      DARABONBA_PTR_TO_JSON(SrcVpcId, srcVpcId_);
      DARABONBA_PTR_TO_JSON(SrcVpcRegionNo, srcVpcRegionNo_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TlsScopeId, tlsScopeId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_TO_JSON(VulLevel, vulLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclPreRuleId, aclPreRuleId_);
      DARABONBA_PTR_FROM_JSON(AclPreState, aclPreState_);
      DARABONBA_PTR_FROM_JSON(AppDpiState, appDpiState_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AssetRegion, assetRegion_);
      DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainUrl, domainUrl_);
      DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
      DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
      DARABONBA_PTR_FROM_JSON(DstVpcId, dstVpcId_);
      DARABONBA_PTR_FROM_JSON(DstVpcRegionNo, dstVpcRegionNo_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_FROM_JSON(FlowType, flowType_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(NatFirewallId, natFirewallId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_FROM_JSON(RuleSource, ruleSource_);
      DARABONBA_PTR_FROM_JSON(RuleSourceFinal, ruleSourceFinal_);
      DARABONBA_PTR_FROM_JSON(SourceCode, sourceCode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_FROM_JSON(SrcPort, srcPort_);
      DARABONBA_PTR_FROM_JSON(SrcPrivateIP, srcPrivateIP_);
      DARABONBA_PTR_FROM_JSON(SrcVpcId, srcVpcId_);
      DARABONBA_PTR_FROM_JSON(SrcVpcRegionNo, srcVpcRegionNo_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TlsScopeId, tlsScopeId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_FROM_JSON(VulLevel, vulLevel_);
    };
    DescribeTrafficLogRequest() = default ;
    DescribeTrafficLogRequest(const DescribeTrafficLogRequest &) = default ;
    DescribeTrafficLogRequest(DescribeTrafficLogRequest &&) = default ;
    DescribeTrafficLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficLogRequest() = default ;
    DescribeTrafficLogRequest& operator=(const DescribeTrafficLogRequest &) = default ;
    DescribeTrafficLogRequest& operator=(DescribeTrafficLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclPreRuleId_ == nullptr
        && this->aclPreState_ == nullptr && this->appDpiState_ == nullptr && this->appId_ == nullptr && this->assetRegion_ == nullptr && this->attackType_ == nullptr
        && this->currentPage_ == nullptr && this->direction_ == nullptr && this->domainName_ == nullptr && this->domainUrl_ == nullptr && this->dstIP_ == nullptr
        && this->dstPort_ == nullptr && this->dstVpcId_ == nullptr && this->dstVpcRegionNo_ == nullptr && this->endTime_ == nullptr && this->firewallType_ == nullptr
        && this->flowType_ == nullptr && this->ipProtocol_ == nullptr && this->ipVersion_ == nullptr && this->isp_ == nullptr && this->lang_ == nullptr
        && this->location_ == nullptr && this->memberUid_ == nullptr && this->natFirewallId_ == nullptr && this->natGatewayId_ == nullptr && this->pageSize_ == nullptr
        && this->ruleId_ == nullptr && this->ruleResult_ == nullptr && this->ruleSource_ == nullptr && this->ruleSourceFinal_ == nullptr && this->sourceCode_ == nullptr
        && this->sourceIp_ == nullptr && this->srcIP_ == nullptr && this->srcPort_ == nullptr && this->srcPrivateIP_ == nullptr && this->srcVpcId_ == nullptr
        && this->srcVpcRegionNo_ == nullptr && this->startTime_ == nullptr && this->tlsScopeId_ == nullptr && this->vpcFirewallId_ == nullptr && this->vulLevel_ == nullptr; };
    // aclPreRuleId Field Functions 
    bool hasAclPreRuleId() const { return this->aclPreRuleId_ != nullptr;};
    void deleteAclPreRuleId() { this->aclPreRuleId_ = nullptr;};
    inline string getAclPreRuleId() const { DARABONBA_PTR_GET_DEFAULT(aclPreRuleId_, "") };
    inline DescribeTrafficLogRequest& setAclPreRuleId(string aclPreRuleId) { DARABONBA_PTR_SET_VALUE(aclPreRuleId_, aclPreRuleId) };


    // aclPreState Field Functions 
    bool hasAclPreState() const { return this->aclPreState_ != nullptr;};
    void deleteAclPreState() { this->aclPreState_ = nullptr;};
    inline string getAclPreState() const { DARABONBA_PTR_GET_DEFAULT(aclPreState_, "") };
    inline DescribeTrafficLogRequest& setAclPreState(string aclPreState) { DARABONBA_PTR_SET_VALUE(aclPreState_, aclPreState) };


    // appDpiState Field Functions 
    bool hasAppDpiState() const { return this->appDpiState_ != nullptr;};
    void deleteAppDpiState() { this->appDpiState_ = nullptr;};
    inline string getAppDpiState() const { DARABONBA_PTR_GET_DEFAULT(appDpiState_, "") };
    inline DescribeTrafficLogRequest& setAppDpiState(string appDpiState) { DARABONBA_PTR_SET_VALUE(appDpiState_, appDpiState) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeTrafficLogRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // assetRegion Field Functions 
    bool hasAssetRegion() const { return this->assetRegion_ != nullptr;};
    void deleteAssetRegion() { this->assetRegion_ = nullptr;};
    inline string getAssetRegion() const { DARABONBA_PTR_GET_DEFAULT(assetRegion_, "") };
    inline DescribeTrafficLogRequest& setAssetRegion(string assetRegion) { DARABONBA_PTR_SET_VALUE(assetRegion_, assetRegion) };


    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline string getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, "") };
    inline DescribeTrafficLogRequest& setAttackType(string attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeTrafficLogRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeTrafficLogRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeTrafficLogRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainUrl Field Functions 
    bool hasDomainUrl() const { return this->domainUrl_ != nullptr;};
    void deleteDomainUrl() { this->domainUrl_ = nullptr;};
    inline string getDomainUrl() const { DARABONBA_PTR_GET_DEFAULT(domainUrl_, "") };
    inline DescribeTrafficLogRequest& setDomainUrl(string domainUrl) { DARABONBA_PTR_SET_VALUE(domainUrl_, domainUrl) };


    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string getDstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeTrafficLogRequest& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline string getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, "") };
    inline DescribeTrafficLogRequest& setDstPort(string dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // dstVpcId Field Functions 
    bool hasDstVpcId() const { return this->dstVpcId_ != nullptr;};
    void deleteDstVpcId() { this->dstVpcId_ = nullptr;};
    inline string getDstVpcId() const { DARABONBA_PTR_GET_DEFAULT(dstVpcId_, "") };
    inline DescribeTrafficLogRequest& setDstVpcId(string dstVpcId) { DARABONBA_PTR_SET_VALUE(dstVpcId_, dstVpcId) };


    // dstVpcRegionNo Field Functions 
    bool hasDstVpcRegionNo() const { return this->dstVpcRegionNo_ != nullptr;};
    void deleteDstVpcRegionNo() { this->dstVpcRegionNo_ = nullptr;};
    inline string getDstVpcRegionNo() const { DARABONBA_PTR_GET_DEFAULT(dstVpcRegionNo_, "") };
    inline DescribeTrafficLogRequest& setDstVpcRegionNo(string dstVpcRegionNo) { DARABONBA_PTR_SET_VALUE(dstVpcRegionNo_, dstVpcRegionNo) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeTrafficLogRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // firewallType Field Functions 
    bool hasFirewallType() const { return this->firewallType_ != nullptr;};
    void deleteFirewallType() { this->firewallType_ = nullptr;};
    inline string getFirewallType() const { DARABONBA_PTR_GET_DEFAULT(firewallType_, "") };
    inline DescribeTrafficLogRequest& setFirewallType(string firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };


    // flowType Field Functions 
    bool hasFlowType() const { return this->flowType_ != nullptr;};
    void deleteFlowType() { this->flowType_ = nullptr;};
    inline string getFlowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, "") };
    inline DescribeTrafficLogRequest& setFlowType(string flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline DescribeTrafficLogRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeTrafficLogRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeTrafficLogRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTrafficLogRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribeTrafficLogRequest& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline DescribeTrafficLogRequest& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // natFirewallId Field Functions 
    bool hasNatFirewallId() const { return this->natFirewallId_ != nullptr;};
    void deleteNatFirewallId() { this->natFirewallId_ = nullptr;};
    inline string getNatFirewallId() const { DARABONBA_PTR_GET_DEFAULT(natFirewallId_, "") };
    inline DescribeTrafficLogRequest& setNatFirewallId(string natFirewallId) { DARABONBA_PTR_SET_VALUE(natFirewallId_, natFirewallId) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeTrafficLogRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeTrafficLogRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeTrafficLogRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleResult Field Functions 
    bool hasRuleResult() const { return this->ruleResult_ != nullptr;};
    void deleteRuleResult() { this->ruleResult_ = nullptr;};
    inline string getRuleResult() const { DARABONBA_PTR_GET_DEFAULT(ruleResult_, "") };
    inline DescribeTrafficLogRequest& setRuleResult(string ruleResult) { DARABONBA_PTR_SET_VALUE(ruleResult_, ruleResult) };


    // ruleSource Field Functions 
    bool hasRuleSource() const { return this->ruleSource_ != nullptr;};
    void deleteRuleSource() { this->ruleSource_ = nullptr;};
    inline string getRuleSource() const { DARABONBA_PTR_GET_DEFAULT(ruleSource_, "") };
    inline DescribeTrafficLogRequest& setRuleSource(string ruleSource) { DARABONBA_PTR_SET_VALUE(ruleSource_, ruleSource) };


    // ruleSourceFinal Field Functions 
    bool hasRuleSourceFinal() const { return this->ruleSourceFinal_ != nullptr;};
    void deleteRuleSourceFinal() { this->ruleSourceFinal_ = nullptr;};
    inline string getRuleSourceFinal() const { DARABONBA_PTR_GET_DEFAULT(ruleSourceFinal_, "") };
    inline DescribeTrafficLogRequest& setRuleSourceFinal(string ruleSourceFinal) { DARABONBA_PTR_SET_VALUE(ruleSourceFinal_, ruleSourceFinal) };


    // sourceCode Field Functions 
    bool hasSourceCode() const { return this->sourceCode_ != nullptr;};
    void deleteSourceCode() { this->sourceCode_ = nullptr;};
    inline string getSourceCode() const { DARABONBA_PTR_GET_DEFAULT(sourceCode_, "") };
    inline DescribeTrafficLogRequest& setSourceCode(string sourceCode) { DARABONBA_PTR_SET_VALUE(sourceCode_, sourceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeTrafficLogRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // srcIP Field Functions 
    bool hasSrcIP() const { return this->srcIP_ != nullptr;};
    void deleteSrcIP() { this->srcIP_ = nullptr;};
    inline string getSrcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
    inline DescribeTrafficLogRequest& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


    // srcPort Field Functions 
    bool hasSrcPort() const { return this->srcPort_ != nullptr;};
    void deleteSrcPort() { this->srcPort_ = nullptr;};
    inline string getSrcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, "") };
    inline DescribeTrafficLogRequest& setSrcPort(string srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


    // srcPrivateIP Field Functions 
    bool hasSrcPrivateIP() const { return this->srcPrivateIP_ != nullptr;};
    void deleteSrcPrivateIP() { this->srcPrivateIP_ = nullptr;};
    inline string getSrcPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(srcPrivateIP_, "") };
    inline DescribeTrafficLogRequest& setSrcPrivateIP(string srcPrivateIP) { DARABONBA_PTR_SET_VALUE(srcPrivateIP_, srcPrivateIP) };


    // srcVpcId Field Functions 
    bool hasSrcVpcId() const { return this->srcVpcId_ != nullptr;};
    void deleteSrcVpcId() { this->srcVpcId_ = nullptr;};
    inline string getSrcVpcId() const { DARABONBA_PTR_GET_DEFAULT(srcVpcId_, "") };
    inline DescribeTrafficLogRequest& setSrcVpcId(string srcVpcId) { DARABONBA_PTR_SET_VALUE(srcVpcId_, srcVpcId) };


    // srcVpcRegionNo Field Functions 
    bool hasSrcVpcRegionNo() const { return this->srcVpcRegionNo_ != nullptr;};
    void deleteSrcVpcRegionNo() { this->srcVpcRegionNo_ = nullptr;};
    inline string getSrcVpcRegionNo() const { DARABONBA_PTR_GET_DEFAULT(srcVpcRegionNo_, "") };
    inline DescribeTrafficLogRequest& setSrcVpcRegionNo(string srcVpcRegionNo) { DARABONBA_PTR_SET_VALUE(srcVpcRegionNo_, srcVpcRegionNo) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeTrafficLogRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tlsScopeId Field Functions 
    bool hasTlsScopeId() const { return this->tlsScopeId_ != nullptr;};
    void deleteTlsScopeId() { this->tlsScopeId_ = nullptr;};
    inline string getTlsScopeId() const { DARABONBA_PTR_GET_DEFAULT(tlsScopeId_, "") };
    inline DescribeTrafficLogRequest& setTlsScopeId(string tlsScopeId) { DARABONBA_PTR_SET_VALUE(tlsScopeId_, tlsScopeId) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeTrafficLogRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


    // vulLevel Field Functions 
    bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
    void deleteVulLevel() { this->vulLevel_ = nullptr;};
    inline string getVulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, "") };
    inline DescribeTrafficLogRequest& setVulLevel(string vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


  protected:
    // The ID of the pre-matched ACL rule.
    shared_ptr<string> aclPreRuleId_ {};
    // The pre-matching status of the ACL.
    shared_ptr<string> aclPreState_ {};
    // The status of deep packet inspection.
    shared_ptr<string> appDpiState_ {};
    // The application ID.
    shared_ptr<string> appId_ {};
    // The region ID.
    shared_ptr<string> assetRegion_ {};
    // The attack type.
    shared_ptr<string> attackType_ {};
    // The page number of the query.
    shared_ptr<string> currentPage_ {};
    // The direction.
    shared_ptr<string> direction_ {};
    // The domain name.
    shared_ptr<string> domainName_ {};
    // The URL in the flow log.
    shared_ptr<string> domainUrl_ {};
    // The destination IP address.
    shared_ptr<string> dstIP_ {};
    // The destination port.
    shared_ptr<string> dstPort_ {};
    // The destination VPC ID.
    shared_ptr<string> dstVpcId_ {};
    // The region of the destination VPC asset.
    shared_ptr<string> dstVpcRegionNo_ {};
    // The end time. This value is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The firewall type.
    shared_ptr<string> firewallType_ {};
    // The flow log type.
    shared_ptr<string> flowType_ {};
    // The protocol type.
    shared_ptr<string> ipProtocol_ {};
    // The IP version.
    shared_ptr<string> ipVersion_ {};
    // The Internet Service Provider (ISP).
    shared_ptr<string> isp_ {};
    // The language of the response. Valid values:
    // 
    // - **zh** (default): Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The region of the source or destination IP address.
    shared_ptr<string> location_ {};
    // The UID of the member account.
    shared_ptr<int64_t> memberUid_ {};
    // The ID of the NAT firewall.
    shared_ptr<string> natFirewallId_ {};
    // The ID of the NAT Gateway.
    shared_ptr<string> natGatewayId_ {};
    // The page number to query. The maximum value is 20.
    shared_ptr<string> pageSize_ {};
    // The rule ID.
    shared_ptr<string> ruleId_ {};
    // The action of the rule.
    shared_ptr<string> ruleResult_ {};
    // The source of the rule.
    shared_ptr<string> ruleSource_ {};
    // The module that takes effect in the end.
    shared_ptr<string> ruleSourceFinal_ {};
    // The traceability code.
    // 
    // This parameter is required.
    shared_ptr<string> sourceCode_ {};
    // The source IP address.
    shared_ptr<string> sourceIp_ {};
    // The source IP address.
    shared_ptr<string> srcIP_ {};
    // The source port.
    shared_ptr<string> srcPort_ {};
    // The private source IP address.
    shared_ptr<string> srcPrivateIP_ {};
    // The source VPC ID.
    shared_ptr<string> srcVpcId_ {};
    // The region of the source VPC asset.
    shared_ptr<string> srcVpcRegionNo_ {};
    // The start time. This value is a UNIX timestamp. Unit: seconds. You can query data within the last 7 days. The time range for a single query cannot exceed one day.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The ID of the TLS inspection scope.
    shared_ptr<string> tlsScopeId_ {};
    // The instance ID of the VPC border firewall.
    shared_ptr<string> vpcFirewallId_ {};
    // The vulnerability level.
    shared_ptr<string> vulLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
