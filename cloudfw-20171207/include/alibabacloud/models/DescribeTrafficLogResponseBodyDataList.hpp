// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICLOGRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICLOGRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTrafficLogResponseBodyDataListDstVpc.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTrafficLogResponseBodyDataListRules.hpp>
#include <alibabacloud/models/DescribeTrafficLogResponseBodyDataListSrcVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrafficLogResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficLogResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AclPreRuleId, aclPreRuleId_);
      DARABONBA_PTR_TO_JSON(AclPreRuleName, aclPreRuleName_);
      DARABONBA_PTR_TO_JSON(AclPreState, aclPreState_);
      DARABONBA_PTR_TO_JSON(AppDpiState, appDpiState_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AttackApp, attackApp_);
      DARABONBA_PTR_TO_JSON(AttackType, attackType_);
      DARABONBA_PTR_TO_JSON(CityId, cityId_);
      DARABONBA_PTR_TO_JSON(CloseReason, closeReason_);
      DARABONBA_PTR_TO_JSON(CloudInstanceId, cloudInstanceId_);
      DARABONBA_PTR_TO_JSON(CountryId, countryId_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainUrl, domainUrl_);
      DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
      DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
      DARABONBA_PTR_TO_JSON(DstVpc, dstVpc_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(InPackets, inPackets_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(IspId, ispId_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_TO_JSON(OutPackets, outPackets_);
      DARABONBA_PTR_TO_JSON(PacketBytes, packetBytes_);
      DARABONBA_PTR_TO_JSON(PacketCount, packetCount_);
      DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_TO_JSON(PrivatePort, privatePort_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_TO_JSON(RuleSource, ruleSource_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_TO_JSON(SrcPort, srcPort_);
      DARABONBA_PTR_TO_JSON(SrcPrivateIP, srcPrivateIP_);
      DARABONBA_PTR_TO_JSON(SrcVpc, srcVpc_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TlsRuleId, tlsRuleId_);
      DARABONBA_PTR_TO_JSON(TlsRuleName, tlsRuleName_);
      DARABONBA_PTR_TO_JSON(TlsScopeId, tlsScopeId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_TO_JSON(VulLevel, vulLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficLogResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AclPreRuleId, aclPreRuleId_);
      DARABONBA_PTR_FROM_JSON(AclPreRuleName, aclPreRuleName_);
      DARABONBA_PTR_FROM_JSON(AclPreState, aclPreState_);
      DARABONBA_PTR_FROM_JSON(AppDpiState, appDpiState_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AttackApp, attackApp_);
      DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
      DARABONBA_PTR_FROM_JSON(CityId, cityId_);
      DARABONBA_PTR_FROM_JSON(CloseReason, closeReason_);
      DARABONBA_PTR_FROM_JSON(CloudInstanceId, cloudInstanceId_);
      DARABONBA_PTR_FROM_JSON(CountryId, countryId_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainUrl, domainUrl_);
      DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
      DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
      DARABONBA_PTR_FROM_JSON(DstVpc, dstVpc_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(InPackets, inPackets_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(IspId, ispId_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_FROM_JSON(OutPackets, outPackets_);
      DARABONBA_PTR_FROM_JSON(PacketBytes, packetBytes_);
      DARABONBA_PTR_FROM_JSON(PacketCount, packetCount_);
      DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_FROM_JSON(PrivatePort, privatePort_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_FROM_JSON(RuleSource, ruleSource_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_FROM_JSON(SrcPort, srcPort_);
      DARABONBA_PTR_FROM_JSON(SrcPrivateIP, srcPrivateIP_);
      DARABONBA_PTR_FROM_JSON(SrcVpc, srcVpc_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TlsRuleId, tlsRuleId_);
      DARABONBA_PTR_FROM_JSON(TlsRuleName, tlsRuleName_);
      DARABONBA_PTR_FROM_JSON(TlsScopeId, tlsScopeId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_FROM_JSON(VulLevel, vulLevel_);
    };
    DescribeTrafficLogResponseBodyDataList() = default ;
    DescribeTrafficLogResponseBodyDataList(const DescribeTrafficLogResponseBodyDataList &) = default ;
    DescribeTrafficLogResponseBodyDataList(DescribeTrafficLogResponseBodyDataList &&) = default ;
    DescribeTrafficLogResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficLogResponseBodyDataList() = default ;
    DescribeTrafficLogResponseBodyDataList& operator=(const DescribeTrafficLogResponseBodyDataList &) = default ;
    DescribeTrafficLogResponseBodyDataList& operator=(DescribeTrafficLogResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclPreRuleId_ == nullptr
        && return this->aclPreRuleName_ == nullptr && return this->aclPreState_ == nullptr && return this->appDpiState_ == nullptr && return this->appId_ == nullptr && return this->appName_ == nullptr
        && return this->attackApp_ == nullptr && return this->attackType_ == nullptr && return this->cityId_ == nullptr && return this->closeReason_ == nullptr && return this->cloudInstanceId_ == nullptr
        && return this->countryId_ == nullptr && return this->direction_ == nullptr && return this->domainName_ == nullptr && return this->domainUrl_ == nullptr && return this->dstIP_ == nullptr
        && return this->dstPort_ == nullptr && return this->dstVpc_ == nullptr && return this->endTime_ == nullptr && return this->ext_ == nullptr && return this->inBytes_ == nullptr
        && return this->inPackets_ == nullptr && return this->ipProtocol_ == nullptr && return this->isp_ == nullptr && return this->ispId_ == nullptr && return this->location_ == nullptr
        && return this->memberUid_ == nullptr && return this->outBytes_ == nullptr && return this->outPackets_ == nullptr && return this->packetBytes_ == nullptr && return this->packetCount_ == nullptr
        && return this->privateIp_ == nullptr && return this->privatePort_ == nullptr && return this->regionId_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr
        && return this->ruleResult_ == nullptr && return this->ruleSource_ == nullptr && return this->rules_ == nullptr && return this->srcIP_ == nullptr && return this->srcPort_ == nullptr
        && return this->srcPrivateIP_ == nullptr && return this->srcVpc_ == nullptr && return this->startTime_ == nullptr && return this->tlsRuleId_ == nullptr && return this->tlsRuleName_ == nullptr
        && return this->tlsScopeId_ == nullptr && return this->vpcFirewallId_ == nullptr && return this->vulLevel_ == nullptr; };
    // aclPreRuleId Field Functions 
    bool hasAclPreRuleId() const { return this->aclPreRuleId_ != nullptr;};
    void deleteAclPreRuleId() { this->aclPreRuleId_ = nullptr;};
    inline string aclPreRuleId() const { DARABONBA_PTR_GET_DEFAULT(aclPreRuleId_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setAclPreRuleId(string aclPreRuleId) { DARABONBA_PTR_SET_VALUE(aclPreRuleId_, aclPreRuleId) };


    // aclPreRuleName Field Functions 
    bool hasAclPreRuleName() const { return this->aclPreRuleName_ != nullptr;};
    void deleteAclPreRuleName() { this->aclPreRuleName_ = nullptr;};
    inline string aclPreRuleName() const { DARABONBA_PTR_GET_DEFAULT(aclPreRuleName_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setAclPreRuleName(string aclPreRuleName) { DARABONBA_PTR_SET_VALUE(aclPreRuleName_, aclPreRuleName) };


    // aclPreState Field Functions 
    bool hasAclPreState() const { return this->aclPreState_ != nullptr;};
    void deleteAclPreState() { this->aclPreState_ = nullptr;};
    inline string aclPreState() const { DARABONBA_PTR_GET_DEFAULT(aclPreState_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setAclPreState(string aclPreState) { DARABONBA_PTR_SET_VALUE(aclPreState_, aclPreState) };


    // appDpiState Field Functions 
    bool hasAppDpiState() const { return this->appDpiState_ != nullptr;};
    void deleteAppDpiState() { this->appDpiState_ = nullptr;};
    inline string appDpiState() const { DARABONBA_PTR_GET_DEFAULT(appDpiState_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setAppDpiState(string appDpiState) { DARABONBA_PTR_SET_VALUE(appDpiState_, appDpiState) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int32_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
    inline DescribeTrafficLogResponseBodyDataList& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // attackApp Field Functions 
    bool hasAttackApp() const { return this->attackApp_ != nullptr;};
    void deleteAttackApp() { this->attackApp_ = nullptr;};
    inline string attackApp() const { DARABONBA_PTR_GET_DEFAULT(attackApp_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setAttackApp(string attackApp) { DARABONBA_PTR_SET_VALUE(attackApp_, attackApp) };


    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline int32_t attackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, 0) };
    inline DescribeTrafficLogResponseBodyDataList& setAttackType(int32_t attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // cityId Field Functions 
    bool hasCityId() const { return this->cityId_ != nullptr;};
    void deleteCityId() { this->cityId_ = nullptr;};
    inline string cityId() const { DARABONBA_PTR_GET_DEFAULT(cityId_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setCityId(string cityId) { DARABONBA_PTR_SET_VALUE(cityId_, cityId) };


    // closeReason Field Functions 
    bool hasCloseReason() const { return this->closeReason_ != nullptr;};
    void deleteCloseReason() { this->closeReason_ = nullptr;};
    inline string closeReason() const { DARABONBA_PTR_GET_DEFAULT(closeReason_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setCloseReason(string closeReason) { DARABONBA_PTR_SET_VALUE(closeReason_, closeReason) };


    // cloudInstanceId Field Functions 
    bool hasCloudInstanceId() const { return this->cloudInstanceId_ != nullptr;};
    void deleteCloudInstanceId() { this->cloudInstanceId_ = nullptr;};
    inline string cloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cloudInstanceId_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setCloudInstanceId(string cloudInstanceId) { DARABONBA_PTR_SET_VALUE(cloudInstanceId_, cloudInstanceId) };


    // countryId Field Functions 
    bool hasCountryId() const { return this->countryId_ != nullptr;};
    void deleteCountryId() { this->countryId_ = nullptr;};
    inline string countryId() const { DARABONBA_PTR_GET_DEFAULT(countryId_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setCountryId(string countryId) { DARABONBA_PTR_SET_VALUE(countryId_, countryId) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainUrl Field Functions 
    bool hasDomainUrl() const { return this->domainUrl_ != nullptr;};
    void deleteDomainUrl() { this->domainUrl_ = nullptr;};
    inline string domainUrl() const { DARABONBA_PTR_GET_DEFAULT(domainUrl_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setDomainUrl(string domainUrl) { DARABONBA_PTR_SET_VALUE(domainUrl_, domainUrl) };


    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string dstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline int32_t dstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, 0) };
    inline DescribeTrafficLogResponseBodyDataList& setDstPort(int32_t dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // dstVpc Field Functions 
    bool hasDstVpc() const { return this->dstVpc_ != nullptr;};
    void deleteDstVpc() { this->dstVpc_ = nullptr;};
    inline const Models::DescribeTrafficLogResponseBodyDataListDstVpc & dstVpc() const { DARABONBA_PTR_GET_CONST(dstVpc_, Models::DescribeTrafficLogResponseBodyDataListDstVpc) };
    inline Models::DescribeTrafficLogResponseBodyDataListDstVpc dstVpc() { DARABONBA_PTR_GET(dstVpc_, Models::DescribeTrafficLogResponseBodyDataListDstVpc) };
    inline DescribeTrafficLogResponseBodyDataList& setDstVpc(const Models::DescribeTrafficLogResponseBodyDataListDstVpc & dstVpc) { DARABONBA_PTR_SET_VALUE(dstVpc_, dstVpc) };
    inline DescribeTrafficLogResponseBodyDataList& setDstVpc(Models::DescribeTrafficLogResponseBodyDataListDstVpc && dstVpc) { DARABONBA_PTR_SET_RVALUE(dstVpc_, dstVpc) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeTrafficLogResponseBodyDataList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline string ext() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline string inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setInBytes(string inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // inPackets Field Functions 
    bool hasInPackets() const { return this->inPackets_ != nullptr;};
    void deleteInPackets() { this->inPackets_ = nullptr;};
    inline string inPackets() const { DARABONBA_PTR_GET_DEFAULT(inPackets_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setInPackets(string inPackets) { DARABONBA_PTR_SET_VALUE(inPackets_, inPackets) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // ispId Field Functions 
    bool hasIspId() const { return this->ispId_ != nullptr;};
    void deleteIspId() { this->ispId_ = nullptr;};
    inline string ispId() const { DARABONBA_PTR_GET_DEFAULT(ispId_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setIspId(string ispId) { DARABONBA_PTR_SET_VALUE(ispId_, ispId) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline string outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setOutBytes(string outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // outPackets Field Functions 
    bool hasOutPackets() const { return this->outPackets_ != nullptr;};
    void deleteOutPackets() { this->outPackets_ = nullptr;};
    inline string outPackets() const { DARABONBA_PTR_GET_DEFAULT(outPackets_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setOutPackets(string outPackets) { DARABONBA_PTR_SET_VALUE(outPackets_, outPackets) };


    // packetBytes Field Functions 
    bool hasPacketBytes() const { return this->packetBytes_ != nullptr;};
    void deletePacketBytes() { this->packetBytes_ = nullptr;};
    inline int64_t packetBytes() const { DARABONBA_PTR_GET_DEFAULT(packetBytes_, 0L) };
    inline DescribeTrafficLogResponseBodyDataList& setPacketBytes(int64_t packetBytes) { DARABONBA_PTR_SET_VALUE(packetBytes_, packetBytes) };


    // packetCount Field Functions 
    bool hasPacketCount() const { return this->packetCount_ != nullptr;};
    void deletePacketCount() { this->packetCount_ = nullptr;};
    inline int64_t packetCount() const { DARABONBA_PTR_GET_DEFAULT(packetCount_, 0L) };
    inline DescribeTrafficLogResponseBodyDataList& setPacketCount(int64_t packetCount) { DARABONBA_PTR_SET_VALUE(packetCount_, packetCount) };


    // privateIp Field Functions 
    bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
    void deletePrivateIp() { this->privateIp_ = nullptr;};
    inline string privateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


    // privatePort Field Functions 
    bool hasPrivatePort() const { return this->privatePort_ != nullptr;};
    void deletePrivatePort() { this->privatePort_ = nullptr;};
    inline int32_t privatePort() const { DARABONBA_PTR_GET_DEFAULT(privatePort_, 0) };
    inline DescribeTrafficLogResponseBodyDataList& setPrivatePort(int32_t privatePort) { DARABONBA_PTR_SET_VALUE(privatePort_, privatePort) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleResult Field Functions 
    bool hasRuleResult() const { return this->ruleResult_ != nullptr;};
    void deleteRuleResult() { this->ruleResult_ = nullptr;};
    inline int32_t ruleResult() const { DARABONBA_PTR_GET_DEFAULT(ruleResult_, 0) };
    inline DescribeTrafficLogResponseBodyDataList& setRuleResult(int32_t ruleResult) { DARABONBA_PTR_SET_VALUE(ruleResult_, ruleResult) };


    // ruleSource Field Functions 
    bool hasRuleSource() const { return this->ruleSource_ != nullptr;};
    void deleteRuleSource() { this->ruleSource_ = nullptr;};
    inline string ruleSource() const { DARABONBA_PTR_GET_DEFAULT(ruleSource_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setRuleSource(string ruleSource) { DARABONBA_PTR_SET_VALUE(ruleSource_, ruleSource) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeTrafficLogResponseBodyDataListRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeTrafficLogResponseBodyDataListRules>) };
    inline vector<Models::DescribeTrafficLogResponseBodyDataListRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeTrafficLogResponseBodyDataListRules>) };
    inline DescribeTrafficLogResponseBodyDataList& setRules(const vector<Models::DescribeTrafficLogResponseBodyDataListRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeTrafficLogResponseBodyDataList& setRules(vector<Models::DescribeTrafficLogResponseBodyDataListRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // srcIP Field Functions 
    bool hasSrcIP() const { return this->srcIP_ != nullptr;};
    void deleteSrcIP() { this->srcIP_ = nullptr;};
    inline string srcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


    // srcPort Field Functions 
    bool hasSrcPort() const { return this->srcPort_ != nullptr;};
    void deleteSrcPort() { this->srcPort_ = nullptr;};
    inline int32_t srcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, 0) };
    inline DescribeTrafficLogResponseBodyDataList& setSrcPort(int32_t srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


    // srcPrivateIP Field Functions 
    bool hasSrcPrivateIP() const { return this->srcPrivateIP_ != nullptr;};
    void deleteSrcPrivateIP() { this->srcPrivateIP_ = nullptr;};
    inline string srcPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(srcPrivateIP_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setSrcPrivateIP(string srcPrivateIP) { DARABONBA_PTR_SET_VALUE(srcPrivateIP_, srcPrivateIP) };


    // srcVpc Field Functions 
    bool hasSrcVpc() const { return this->srcVpc_ != nullptr;};
    void deleteSrcVpc() { this->srcVpc_ = nullptr;};
    inline const Models::DescribeTrafficLogResponseBodyDataListSrcVpc & srcVpc() const { DARABONBA_PTR_GET_CONST(srcVpc_, Models::DescribeTrafficLogResponseBodyDataListSrcVpc) };
    inline Models::DescribeTrafficLogResponseBodyDataListSrcVpc srcVpc() { DARABONBA_PTR_GET(srcVpc_, Models::DescribeTrafficLogResponseBodyDataListSrcVpc) };
    inline DescribeTrafficLogResponseBodyDataList& setSrcVpc(const Models::DescribeTrafficLogResponseBodyDataListSrcVpc & srcVpc) { DARABONBA_PTR_SET_VALUE(srcVpc_, srcVpc) };
    inline DescribeTrafficLogResponseBodyDataList& setSrcVpc(Models::DescribeTrafficLogResponseBodyDataListSrcVpc && srcVpc) { DARABONBA_PTR_SET_RVALUE(srcVpc_, srcVpc) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeTrafficLogResponseBodyDataList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tlsRuleId Field Functions 
    bool hasTlsRuleId() const { return this->tlsRuleId_ != nullptr;};
    void deleteTlsRuleId() { this->tlsRuleId_ = nullptr;};
    inline string tlsRuleId() const { DARABONBA_PTR_GET_DEFAULT(tlsRuleId_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setTlsRuleId(string tlsRuleId) { DARABONBA_PTR_SET_VALUE(tlsRuleId_, tlsRuleId) };


    // tlsRuleName Field Functions 
    bool hasTlsRuleName() const { return this->tlsRuleName_ != nullptr;};
    void deleteTlsRuleName() { this->tlsRuleName_ = nullptr;};
    inline string tlsRuleName() const { DARABONBA_PTR_GET_DEFAULT(tlsRuleName_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setTlsRuleName(string tlsRuleName) { DARABONBA_PTR_SET_VALUE(tlsRuleName_, tlsRuleName) };


    // tlsScopeId Field Functions 
    bool hasTlsScopeId() const { return this->tlsScopeId_ != nullptr;};
    void deleteTlsScopeId() { this->tlsScopeId_ = nullptr;};
    inline string tlsScopeId() const { DARABONBA_PTR_GET_DEFAULT(tlsScopeId_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setTlsScopeId(string tlsScopeId) { DARABONBA_PTR_SET_VALUE(tlsScopeId_, tlsScopeId) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string vpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeTrafficLogResponseBodyDataList& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


    // vulLevel Field Functions 
    bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
    void deleteVulLevel() { this->vulLevel_ = nullptr;};
    inline int32_t vulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, 0) };
    inline DescribeTrafficLogResponseBodyDataList& setVulLevel(int32_t vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


  protected:
    std::shared_ptr<string> aclPreRuleId_ = nullptr;
    std::shared_ptr<string> aclPreRuleName_ = nullptr;
    std::shared_ptr<string> aclPreState_ = nullptr;
    std::shared_ptr<string> appDpiState_ = nullptr;
    std::shared_ptr<int32_t> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> attackApp_ = nullptr;
    std::shared_ptr<int32_t> attackType_ = nullptr;
    std::shared_ptr<string> cityId_ = nullptr;
    std::shared_ptr<string> closeReason_ = nullptr;
    std::shared_ptr<string> cloudInstanceId_ = nullptr;
    std::shared_ptr<string> countryId_ = nullptr;
    std::shared_ptr<string> direction_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> domainUrl_ = nullptr;
    std::shared_ptr<string> dstIP_ = nullptr;
    std::shared_ptr<int32_t> dstPort_ = nullptr;
    std::shared_ptr<Models::DescribeTrafficLogResponseBodyDataListDstVpc> dstVpc_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> ext_ = nullptr;
    std::shared_ptr<string> inBytes_ = nullptr;
    std::shared_ptr<string> inPackets_ = nullptr;
    std::shared_ptr<string> ipProtocol_ = nullptr;
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<string> ispId_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> memberUid_ = nullptr;
    std::shared_ptr<string> outBytes_ = nullptr;
    std::shared_ptr<string> outPackets_ = nullptr;
    std::shared_ptr<int64_t> packetBytes_ = nullptr;
    std::shared_ptr<int64_t> packetCount_ = nullptr;
    std::shared_ptr<string> privateIp_ = nullptr;
    std::shared_ptr<int32_t> privatePort_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<int32_t> ruleResult_ = nullptr;
    std::shared_ptr<string> ruleSource_ = nullptr;
    std::shared_ptr<vector<Models::DescribeTrafficLogResponseBodyDataListRules>> rules_ = nullptr;
    std::shared_ptr<string> srcIP_ = nullptr;
    std::shared_ptr<int32_t> srcPort_ = nullptr;
    std::shared_ptr<string> srcPrivateIP_ = nullptr;
    std::shared_ptr<Models::DescribeTrafficLogResponseBodyDataListSrcVpc> srcVpc_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> tlsRuleId_ = nullptr;
    std::shared_ptr<string> tlsRuleName_ = nullptr;
    std::shared_ptr<string> tlsScopeId_ = nullptr;
    std::shared_ptr<string> vpcFirewallId_ = nullptr;
    std::shared_ptr<int32_t> vulLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
