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
        && return this->aclPreState_ == nullptr && return this->appDpiState_ == nullptr && return this->appId_ == nullptr && return this->assetRegion_ == nullptr && return this->attackType_ == nullptr
        && return this->currentPage_ == nullptr && return this->direction_ == nullptr && return this->domainName_ == nullptr && return this->domainUrl_ == nullptr && return this->dstIP_ == nullptr
        && return this->dstPort_ == nullptr && return this->dstVpcId_ == nullptr && return this->dstVpcRegionNo_ == nullptr && return this->endTime_ == nullptr && return this->firewallType_ == nullptr
        && return this->flowType_ == nullptr && return this->ipProtocol_ == nullptr && return this->ipVersion_ == nullptr && return this->isp_ == nullptr && return this->lang_ == nullptr
        && return this->location_ == nullptr && return this->memberUid_ == nullptr && return this->natFirewallId_ == nullptr && return this->natGatewayId_ == nullptr && return this->pageSize_ == nullptr
        && return this->ruleId_ == nullptr && return this->ruleResult_ == nullptr && return this->ruleSource_ == nullptr && return this->sourceCode_ == nullptr && return this->sourceIp_ == nullptr
        && return this->srcIP_ == nullptr && return this->srcPort_ == nullptr && return this->srcPrivateIP_ == nullptr && return this->srcVpcId_ == nullptr && return this->srcVpcRegionNo_ == nullptr
        && return this->startTime_ == nullptr && return this->tlsScopeId_ == nullptr && return this->vpcFirewallId_ == nullptr && return this->vulLevel_ == nullptr; };
    // aclPreRuleId Field Functions 
    bool hasAclPreRuleId() const { return this->aclPreRuleId_ != nullptr;};
    void deleteAclPreRuleId() { this->aclPreRuleId_ = nullptr;};
    inline string aclPreRuleId() const { DARABONBA_PTR_GET_DEFAULT(aclPreRuleId_, "") };
    inline DescribeTrafficLogRequest& setAclPreRuleId(string aclPreRuleId) { DARABONBA_PTR_SET_VALUE(aclPreRuleId_, aclPreRuleId) };


    // aclPreState Field Functions 
    bool hasAclPreState() const { return this->aclPreState_ != nullptr;};
    void deleteAclPreState() { this->aclPreState_ = nullptr;};
    inline string aclPreState() const { DARABONBA_PTR_GET_DEFAULT(aclPreState_, "") };
    inline DescribeTrafficLogRequest& setAclPreState(string aclPreState) { DARABONBA_PTR_SET_VALUE(aclPreState_, aclPreState) };


    // appDpiState Field Functions 
    bool hasAppDpiState() const { return this->appDpiState_ != nullptr;};
    void deleteAppDpiState() { this->appDpiState_ = nullptr;};
    inline string appDpiState() const { DARABONBA_PTR_GET_DEFAULT(appDpiState_, "") };
    inline DescribeTrafficLogRequest& setAppDpiState(string appDpiState) { DARABONBA_PTR_SET_VALUE(appDpiState_, appDpiState) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeTrafficLogRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // assetRegion Field Functions 
    bool hasAssetRegion() const { return this->assetRegion_ != nullptr;};
    void deleteAssetRegion() { this->assetRegion_ = nullptr;};
    inline string assetRegion() const { DARABONBA_PTR_GET_DEFAULT(assetRegion_, "") };
    inline DescribeTrafficLogRequest& setAssetRegion(string assetRegion) { DARABONBA_PTR_SET_VALUE(assetRegion_, assetRegion) };


    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline string attackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, "") };
    inline DescribeTrafficLogRequest& setAttackType(string attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeTrafficLogRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeTrafficLogRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeTrafficLogRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainUrl Field Functions 
    bool hasDomainUrl() const { return this->domainUrl_ != nullptr;};
    void deleteDomainUrl() { this->domainUrl_ = nullptr;};
    inline string domainUrl() const { DARABONBA_PTR_GET_DEFAULT(domainUrl_, "") };
    inline DescribeTrafficLogRequest& setDomainUrl(string domainUrl) { DARABONBA_PTR_SET_VALUE(domainUrl_, domainUrl) };


    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string dstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeTrafficLogRequest& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline string dstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, "") };
    inline DescribeTrafficLogRequest& setDstPort(string dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // dstVpcId Field Functions 
    bool hasDstVpcId() const { return this->dstVpcId_ != nullptr;};
    void deleteDstVpcId() { this->dstVpcId_ = nullptr;};
    inline string dstVpcId() const { DARABONBA_PTR_GET_DEFAULT(dstVpcId_, "") };
    inline DescribeTrafficLogRequest& setDstVpcId(string dstVpcId) { DARABONBA_PTR_SET_VALUE(dstVpcId_, dstVpcId) };


    // dstVpcRegionNo Field Functions 
    bool hasDstVpcRegionNo() const { return this->dstVpcRegionNo_ != nullptr;};
    void deleteDstVpcRegionNo() { this->dstVpcRegionNo_ = nullptr;};
    inline string dstVpcRegionNo() const { DARABONBA_PTR_GET_DEFAULT(dstVpcRegionNo_, "") };
    inline DescribeTrafficLogRequest& setDstVpcRegionNo(string dstVpcRegionNo) { DARABONBA_PTR_SET_VALUE(dstVpcRegionNo_, dstVpcRegionNo) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeTrafficLogRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // firewallType Field Functions 
    bool hasFirewallType() const { return this->firewallType_ != nullptr;};
    void deleteFirewallType() { this->firewallType_ = nullptr;};
    inline string firewallType() const { DARABONBA_PTR_GET_DEFAULT(firewallType_, "") };
    inline DescribeTrafficLogRequest& setFirewallType(string firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };


    // flowType Field Functions 
    bool hasFlowType() const { return this->flowType_ != nullptr;};
    void deleteFlowType() { this->flowType_ = nullptr;};
    inline string flowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, "") };
    inline DescribeTrafficLogRequest& setFlowType(string flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline DescribeTrafficLogRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeTrafficLogRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeTrafficLogRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTrafficLogRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribeTrafficLogRequest& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline DescribeTrafficLogRequest& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // natFirewallId Field Functions 
    bool hasNatFirewallId() const { return this->natFirewallId_ != nullptr;};
    void deleteNatFirewallId() { this->natFirewallId_ = nullptr;};
    inline string natFirewallId() const { DARABONBA_PTR_GET_DEFAULT(natFirewallId_, "") };
    inline DescribeTrafficLogRequest& setNatFirewallId(string natFirewallId) { DARABONBA_PTR_SET_VALUE(natFirewallId_, natFirewallId) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeTrafficLogRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeTrafficLogRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeTrafficLogRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleResult Field Functions 
    bool hasRuleResult() const { return this->ruleResult_ != nullptr;};
    void deleteRuleResult() { this->ruleResult_ = nullptr;};
    inline string ruleResult() const { DARABONBA_PTR_GET_DEFAULT(ruleResult_, "") };
    inline DescribeTrafficLogRequest& setRuleResult(string ruleResult) { DARABONBA_PTR_SET_VALUE(ruleResult_, ruleResult) };


    // ruleSource Field Functions 
    bool hasRuleSource() const { return this->ruleSource_ != nullptr;};
    void deleteRuleSource() { this->ruleSource_ = nullptr;};
    inline string ruleSource() const { DARABONBA_PTR_GET_DEFAULT(ruleSource_, "") };
    inline DescribeTrafficLogRequest& setRuleSource(string ruleSource) { DARABONBA_PTR_SET_VALUE(ruleSource_, ruleSource) };


    // sourceCode Field Functions 
    bool hasSourceCode() const { return this->sourceCode_ != nullptr;};
    void deleteSourceCode() { this->sourceCode_ = nullptr;};
    inline string sourceCode() const { DARABONBA_PTR_GET_DEFAULT(sourceCode_, "") };
    inline DescribeTrafficLogRequest& setSourceCode(string sourceCode) { DARABONBA_PTR_SET_VALUE(sourceCode_, sourceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeTrafficLogRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // srcIP Field Functions 
    bool hasSrcIP() const { return this->srcIP_ != nullptr;};
    void deleteSrcIP() { this->srcIP_ = nullptr;};
    inline string srcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
    inline DescribeTrafficLogRequest& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


    // srcPort Field Functions 
    bool hasSrcPort() const { return this->srcPort_ != nullptr;};
    void deleteSrcPort() { this->srcPort_ = nullptr;};
    inline string srcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, "") };
    inline DescribeTrafficLogRequest& setSrcPort(string srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


    // srcPrivateIP Field Functions 
    bool hasSrcPrivateIP() const { return this->srcPrivateIP_ != nullptr;};
    void deleteSrcPrivateIP() { this->srcPrivateIP_ = nullptr;};
    inline string srcPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(srcPrivateIP_, "") };
    inline DescribeTrafficLogRequest& setSrcPrivateIP(string srcPrivateIP) { DARABONBA_PTR_SET_VALUE(srcPrivateIP_, srcPrivateIP) };


    // srcVpcId Field Functions 
    bool hasSrcVpcId() const { return this->srcVpcId_ != nullptr;};
    void deleteSrcVpcId() { this->srcVpcId_ = nullptr;};
    inline string srcVpcId() const { DARABONBA_PTR_GET_DEFAULT(srcVpcId_, "") };
    inline DescribeTrafficLogRequest& setSrcVpcId(string srcVpcId) { DARABONBA_PTR_SET_VALUE(srcVpcId_, srcVpcId) };


    // srcVpcRegionNo Field Functions 
    bool hasSrcVpcRegionNo() const { return this->srcVpcRegionNo_ != nullptr;};
    void deleteSrcVpcRegionNo() { this->srcVpcRegionNo_ = nullptr;};
    inline string srcVpcRegionNo() const { DARABONBA_PTR_GET_DEFAULT(srcVpcRegionNo_, "") };
    inline DescribeTrafficLogRequest& setSrcVpcRegionNo(string srcVpcRegionNo) { DARABONBA_PTR_SET_VALUE(srcVpcRegionNo_, srcVpcRegionNo) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeTrafficLogRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tlsScopeId Field Functions 
    bool hasTlsScopeId() const { return this->tlsScopeId_ != nullptr;};
    void deleteTlsScopeId() { this->tlsScopeId_ = nullptr;};
    inline string tlsScopeId() const { DARABONBA_PTR_GET_DEFAULT(tlsScopeId_, "") };
    inline DescribeTrafficLogRequest& setTlsScopeId(string tlsScopeId) { DARABONBA_PTR_SET_VALUE(tlsScopeId_, tlsScopeId) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string vpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeTrafficLogRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


    // vulLevel Field Functions 
    bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
    void deleteVulLevel() { this->vulLevel_ = nullptr;};
    inline string vulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, "") };
    inline DescribeTrafficLogRequest& setVulLevel(string vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


  protected:
    std::shared_ptr<string> aclPreRuleId_ = nullptr;
    std::shared_ptr<string> aclPreState_ = nullptr;
    std::shared_ptr<string> appDpiState_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> assetRegion_ = nullptr;
    std::shared_ptr<string> attackType_ = nullptr;
    std::shared_ptr<string> currentPage_ = nullptr;
    std::shared_ptr<string> direction_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> domainUrl_ = nullptr;
    std::shared_ptr<string> dstIP_ = nullptr;
    std::shared_ptr<string> dstPort_ = nullptr;
    std::shared_ptr<string> dstVpcId_ = nullptr;
    std::shared_ptr<string> dstVpcRegionNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> firewallType_ = nullptr;
    std::shared_ptr<string> flowType_ = nullptr;
    std::shared_ptr<string> ipProtocol_ = nullptr;
    std::shared_ptr<string> ipVersion_ = nullptr;
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<int64_t> memberUid_ = nullptr;
    std::shared_ptr<string> natFirewallId_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<string> ruleResult_ = nullptr;
    std::shared_ptr<string> ruleSource_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceCode_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
    std::shared_ptr<string> srcIP_ = nullptr;
    std::shared_ptr<string> srcPort_ = nullptr;
    std::shared_ptr<string> srcPrivateIP_ = nullptr;
    std::shared_ptr<string> srcVpcId_ = nullptr;
    std::shared_ptr<string> srcVpcRegionNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> tlsScopeId_ = nullptr;
    std::shared_ptr<string> vpcFirewallId_ = nullptr;
    std::shared_ptr<string> vulLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
