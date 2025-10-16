// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLCONTROLPOLICYRESPONSEBODYPOLICYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLCONTROLPOLICYRESPONSEBODYPOLICYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallControlPolicyResponseBodyPolicys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallControlPolicyResponseBodyPolicys& obj) { 
      DARABONBA_PTR_TO_JSON(AclAction, aclAction_);
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(ApplicationNameList, applicationNameList_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestPort, destPort_);
      DARABONBA_PTR_TO_JSON(DestPortGroup, destPortGroup_);
      DARABONBA_PTR_TO_JSON(DestPortGroupPorts, destPortGroupPorts_);
      DARABONBA_PTR_TO_JSON(DestPortType, destPortType_);
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(DestinationGroupCidrs, destinationGroupCidrs_);
      DARABONBA_PTR_TO_JSON(DestinationGroupType, destinationGroupType_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(DnsResult, dnsResult_);
      DARABONBA_PTR_TO_JSON(DnsResultTime, dnsResultTime_);
      DARABONBA_PTR_TO_JSON(DomainResolveType, domainResolveType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HitLastTime, hitLastTime_);
      DARABONBA_PTR_TO_JSON(HitTimes, hitTimes_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(Release, release_);
      DARABONBA_PTR_TO_JSON(RepeatDays, repeatDays_);
      DARABONBA_PTR_TO_JSON(RepeatEndTime, repeatEndTime_);
      DARABONBA_PTR_TO_JSON(RepeatStartTime, repeatStartTime_);
      DARABONBA_PTR_TO_JSON(RepeatType, repeatType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceGroupCidrs, sourceGroupCidrs_);
      DARABONBA_PTR_TO_JSON(SourceGroupType, sourceGroupType_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SpreadCnt, spreadCnt_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallControlPolicyResponseBodyPolicys& obj) { 
      DARABONBA_PTR_FROM_JSON(AclAction, aclAction_);
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(ApplicationNameList, applicationNameList_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestPort, destPort_);
      DARABONBA_PTR_FROM_JSON(DestPortGroup, destPortGroup_);
      DARABONBA_PTR_FROM_JSON(DestPortGroupPorts, destPortGroupPorts_);
      DARABONBA_PTR_FROM_JSON(DestPortType, destPortType_);
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(DestinationGroupCidrs, destinationGroupCidrs_);
      DARABONBA_PTR_FROM_JSON(DestinationGroupType, destinationGroupType_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(DnsResult, dnsResult_);
      DARABONBA_PTR_FROM_JSON(DnsResultTime, dnsResultTime_);
      DARABONBA_PTR_FROM_JSON(DomainResolveType, domainResolveType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HitLastTime, hitLastTime_);
      DARABONBA_PTR_FROM_JSON(HitTimes, hitTimes_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(Release, release_);
      DARABONBA_PTR_FROM_JSON(RepeatDays, repeatDays_);
      DARABONBA_PTR_FROM_JSON(RepeatEndTime, repeatEndTime_);
      DARABONBA_PTR_FROM_JSON(RepeatStartTime, repeatStartTime_);
      DARABONBA_PTR_FROM_JSON(RepeatType, repeatType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceGroupCidrs, sourceGroupCidrs_);
      DARABONBA_PTR_FROM_JSON(SourceGroupType, sourceGroupType_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SpreadCnt, spreadCnt_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeNatFirewallControlPolicyResponseBodyPolicys() = default ;
    DescribeNatFirewallControlPolicyResponseBodyPolicys(const DescribeNatFirewallControlPolicyResponseBodyPolicys &) = default ;
    DescribeNatFirewallControlPolicyResponseBodyPolicys(DescribeNatFirewallControlPolicyResponseBodyPolicys &&) = default ;
    DescribeNatFirewallControlPolicyResponseBodyPolicys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallControlPolicyResponseBodyPolicys() = default ;
    DescribeNatFirewallControlPolicyResponseBodyPolicys& operator=(const DescribeNatFirewallControlPolicyResponseBodyPolicys &) = default ;
    DescribeNatFirewallControlPolicyResponseBodyPolicys& operator=(DescribeNatFirewallControlPolicyResponseBodyPolicys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclAction_ == nullptr
        && return this->aclUuid_ == nullptr && return this->applicationNameList_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->destPort_ == nullptr
        && return this->destPortGroup_ == nullptr && return this->destPortGroupPorts_ == nullptr && return this->destPortType_ == nullptr && return this->destination_ == nullptr && return this->destinationGroupCidrs_ == nullptr
        && return this->destinationGroupType_ == nullptr && return this->destinationType_ == nullptr && return this->dnsResult_ == nullptr && return this->dnsResultTime_ == nullptr && return this->domainResolveType_ == nullptr
        && return this->endTime_ == nullptr && return this->hitLastTime_ == nullptr && return this->hitTimes_ == nullptr && return this->modifyTime_ == nullptr && return this->natGatewayId_ == nullptr
        && return this->order_ == nullptr && return this->proto_ == nullptr && return this->release_ == nullptr && return this->repeatDays_ == nullptr && return this->repeatEndTime_ == nullptr
        && return this->repeatStartTime_ == nullptr && return this->repeatType_ == nullptr && return this->source_ == nullptr && return this->sourceGroupCidrs_ == nullptr && return this->sourceGroupType_ == nullptr
        && return this->sourceType_ == nullptr && return this->spreadCnt_ == nullptr && return this->startTime_ == nullptr; };
    // aclAction Field Functions 
    bool hasAclAction() const { return this->aclAction_ != nullptr;};
    void deleteAclAction() { this->aclAction_ = nullptr;};
    inline string aclAction() const { DARABONBA_PTR_GET_DEFAULT(aclAction_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setAclAction(string aclAction) { DARABONBA_PTR_SET_VALUE(aclAction_, aclAction) };


    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string aclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // applicationNameList Field Functions 
    bool hasApplicationNameList() const { return this->applicationNameList_ != nullptr;};
    void deleteApplicationNameList() { this->applicationNameList_ = nullptr;};
    inline const vector<string> & applicationNameList() const { DARABONBA_PTR_GET_CONST(applicationNameList_, vector<string>) };
    inline vector<string> applicationNameList() { DARABONBA_PTR_GET(applicationNameList_, vector<string>) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setApplicationNameList(const vector<string> & applicationNameList) { DARABONBA_PTR_SET_VALUE(applicationNameList_, applicationNameList) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setApplicationNameList(vector<string> && applicationNameList) { DARABONBA_PTR_SET_RVALUE(applicationNameList_, applicationNameList) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destPort Field Functions 
    bool hasDestPort() const { return this->destPort_ != nullptr;};
    void deleteDestPort() { this->destPort_ = nullptr;};
    inline string destPort() const { DARABONBA_PTR_GET_DEFAULT(destPort_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setDestPort(string destPort) { DARABONBA_PTR_SET_VALUE(destPort_, destPort) };


    // destPortGroup Field Functions 
    bool hasDestPortGroup() const { return this->destPortGroup_ != nullptr;};
    void deleteDestPortGroup() { this->destPortGroup_ = nullptr;};
    inline string destPortGroup() const { DARABONBA_PTR_GET_DEFAULT(destPortGroup_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setDestPortGroup(string destPortGroup) { DARABONBA_PTR_SET_VALUE(destPortGroup_, destPortGroup) };


    // destPortGroupPorts Field Functions 
    bool hasDestPortGroupPorts() const { return this->destPortGroupPorts_ != nullptr;};
    void deleteDestPortGroupPorts() { this->destPortGroupPorts_ = nullptr;};
    inline const vector<string> & destPortGroupPorts() const { DARABONBA_PTR_GET_CONST(destPortGroupPorts_, vector<string>) };
    inline vector<string> destPortGroupPorts() { DARABONBA_PTR_GET(destPortGroupPorts_, vector<string>) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setDestPortGroupPorts(const vector<string> & destPortGroupPorts) { DARABONBA_PTR_SET_VALUE(destPortGroupPorts_, destPortGroupPorts) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setDestPortGroupPorts(vector<string> && destPortGroupPorts) { DARABONBA_PTR_SET_RVALUE(destPortGroupPorts_, destPortGroupPorts) };


    // destPortType Field Functions 
    bool hasDestPortType() const { return this->destPortType_ != nullptr;};
    void deleteDestPortType() { this->destPortType_ = nullptr;};
    inline string destPortType() const { DARABONBA_PTR_GET_DEFAULT(destPortType_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setDestPortType(string destPortType) { DARABONBA_PTR_SET_VALUE(destPortType_, destPortType) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // destinationGroupCidrs Field Functions 
    bool hasDestinationGroupCidrs() const { return this->destinationGroupCidrs_ != nullptr;};
    void deleteDestinationGroupCidrs() { this->destinationGroupCidrs_ = nullptr;};
    inline const vector<string> & destinationGroupCidrs() const { DARABONBA_PTR_GET_CONST(destinationGroupCidrs_, vector<string>) };
    inline vector<string> destinationGroupCidrs() { DARABONBA_PTR_GET(destinationGroupCidrs_, vector<string>) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setDestinationGroupCidrs(const vector<string> & destinationGroupCidrs) { DARABONBA_PTR_SET_VALUE(destinationGroupCidrs_, destinationGroupCidrs) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setDestinationGroupCidrs(vector<string> && destinationGroupCidrs) { DARABONBA_PTR_SET_RVALUE(destinationGroupCidrs_, destinationGroupCidrs) };


    // destinationGroupType Field Functions 
    bool hasDestinationGroupType() const { return this->destinationGroupType_ != nullptr;};
    void deleteDestinationGroupType() { this->destinationGroupType_ = nullptr;};
    inline string destinationGroupType() const { DARABONBA_PTR_GET_DEFAULT(destinationGroupType_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setDestinationGroupType(string destinationGroupType) { DARABONBA_PTR_SET_VALUE(destinationGroupType_, destinationGroupType) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // dnsResult Field Functions 
    bool hasDnsResult() const { return this->dnsResult_ != nullptr;};
    void deleteDnsResult() { this->dnsResult_ = nullptr;};
    inline string dnsResult() const { DARABONBA_PTR_GET_DEFAULT(dnsResult_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setDnsResult(string dnsResult) { DARABONBA_PTR_SET_VALUE(dnsResult_, dnsResult) };


    // dnsResultTime Field Functions 
    bool hasDnsResultTime() const { return this->dnsResultTime_ != nullptr;};
    void deleteDnsResultTime() { this->dnsResultTime_ = nullptr;};
    inline int64_t dnsResultTime() const { DARABONBA_PTR_GET_DEFAULT(dnsResultTime_, 0L) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setDnsResultTime(int64_t dnsResultTime) { DARABONBA_PTR_SET_VALUE(dnsResultTime_, dnsResultTime) };


    // domainResolveType Field Functions 
    bool hasDomainResolveType() const { return this->domainResolveType_ != nullptr;};
    void deleteDomainResolveType() { this->domainResolveType_ = nullptr;};
    inline int32_t domainResolveType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveType_, 0) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setDomainResolveType(int32_t domainResolveType) { DARABONBA_PTR_SET_VALUE(domainResolveType_, domainResolveType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // hitLastTime Field Functions 
    bool hasHitLastTime() const { return this->hitLastTime_ != nullptr;};
    void deleteHitLastTime() { this->hitLastTime_ = nullptr;};
    inline int64_t hitLastTime() const { DARABONBA_PTR_GET_DEFAULT(hitLastTime_, 0L) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setHitLastTime(int64_t hitLastTime) { DARABONBA_PTR_SET_VALUE(hitLastTime_, hitLastTime) };


    // hitTimes Field Functions 
    bool hasHitTimes() const { return this->hitTimes_ != nullptr;};
    void deleteHitTimes() { this->hitTimes_ = nullptr;};
    inline int64_t hitTimes() const { DARABONBA_PTR_GET_DEFAULT(hitTimes_, 0L) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setHitTimes(int64_t hitTimes) { DARABONBA_PTR_SET_VALUE(hitTimes_, hitTimes) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string proto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline string release() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


    // repeatDays Field Functions 
    bool hasRepeatDays() const { return this->repeatDays_ != nullptr;};
    void deleteRepeatDays() { this->repeatDays_ = nullptr;};
    inline const vector<int64_t> & repeatDays() const { DARABONBA_PTR_GET_CONST(repeatDays_, vector<int64_t>) };
    inline vector<int64_t> repeatDays() { DARABONBA_PTR_GET(repeatDays_, vector<int64_t>) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setRepeatDays(const vector<int64_t> & repeatDays) { DARABONBA_PTR_SET_VALUE(repeatDays_, repeatDays) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setRepeatDays(vector<int64_t> && repeatDays) { DARABONBA_PTR_SET_RVALUE(repeatDays_, repeatDays) };


    // repeatEndTime Field Functions 
    bool hasRepeatEndTime() const { return this->repeatEndTime_ != nullptr;};
    void deleteRepeatEndTime() { this->repeatEndTime_ = nullptr;};
    inline string repeatEndTime() const { DARABONBA_PTR_GET_DEFAULT(repeatEndTime_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setRepeatEndTime(string repeatEndTime) { DARABONBA_PTR_SET_VALUE(repeatEndTime_, repeatEndTime) };


    // repeatStartTime Field Functions 
    bool hasRepeatStartTime() const { return this->repeatStartTime_ != nullptr;};
    void deleteRepeatStartTime() { this->repeatStartTime_ = nullptr;};
    inline string repeatStartTime() const { DARABONBA_PTR_GET_DEFAULT(repeatStartTime_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setRepeatStartTime(string repeatStartTime) { DARABONBA_PTR_SET_VALUE(repeatStartTime_, repeatStartTime) };


    // repeatType Field Functions 
    bool hasRepeatType() const { return this->repeatType_ != nullptr;};
    void deleteRepeatType() { this->repeatType_ = nullptr;};
    inline string repeatType() const { DARABONBA_PTR_GET_DEFAULT(repeatType_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setRepeatType(string repeatType) { DARABONBA_PTR_SET_VALUE(repeatType_, repeatType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceGroupCidrs Field Functions 
    bool hasSourceGroupCidrs() const { return this->sourceGroupCidrs_ != nullptr;};
    void deleteSourceGroupCidrs() { this->sourceGroupCidrs_ = nullptr;};
    inline const vector<string> & sourceGroupCidrs() const { DARABONBA_PTR_GET_CONST(sourceGroupCidrs_, vector<string>) };
    inline vector<string> sourceGroupCidrs() { DARABONBA_PTR_GET(sourceGroupCidrs_, vector<string>) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setSourceGroupCidrs(const vector<string> & sourceGroupCidrs) { DARABONBA_PTR_SET_VALUE(sourceGroupCidrs_, sourceGroupCidrs) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setSourceGroupCidrs(vector<string> && sourceGroupCidrs) { DARABONBA_PTR_SET_RVALUE(sourceGroupCidrs_, sourceGroupCidrs) };


    // sourceGroupType Field Functions 
    bool hasSourceGroupType() const { return this->sourceGroupType_ != nullptr;};
    void deleteSourceGroupType() { this->sourceGroupType_ = nullptr;};
    inline string sourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupType_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setSourceGroupType(string sourceGroupType) { DARABONBA_PTR_SET_VALUE(sourceGroupType_, sourceGroupType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // spreadCnt Field Functions 
    bool hasSpreadCnt() const { return this->spreadCnt_ != nullptr;};
    void deleteSpreadCnt() { this->spreadCnt_ = nullptr;};
    inline string spreadCnt() const { DARABONBA_PTR_GET_DEFAULT(spreadCnt_, "") };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setSpreadCnt(string spreadCnt) { DARABONBA_PTR_SET_VALUE(spreadCnt_, spreadCnt) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeNatFirewallControlPolicyResponseBodyPolicys& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The action that Cloud Firewall performs on the traffic. Valid values:
    // 
    // *   **accept**: allows the traffic.
    // *   **drop**: denies the traffic.
    // *   **log**: monitors the traffic.
    std::shared_ptr<string> aclAction_ = nullptr;
    // The UUID of the access control policy.
    std::shared_ptr<string> aclUuid_ = nullptr;
    // The application names.
    std::shared_ptr<vector<string>> applicationNameList_ = nullptr;
    // The time when the access control policy was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the access control policy.
    std::shared_ptr<string> description_ = nullptr;
    // The destination port in the access control policy.
    std::shared_ptr<string> destPort_ = nullptr;
    // The name of the destination port address book in the access control policy.
    std::shared_ptr<string> destPortGroup_ = nullptr;
    // The ports in the destination port address book.
    std::shared_ptr<vector<string>> destPortGroupPorts_ = nullptr;
    // The type of the destination port in the access control policy. Valid values:
    // 
    // *   **port**: port
    // *   **group**: port address book
    std::shared_ptr<string> destPortType_ = nullptr;
    // The destination address in the access control policy. The value of this parameter varies based on the value of DestinationType. Valid values:
    // 
    // *   If the value of **DestinationType** is **net**, the value of this parameter is a CIDR block. Example: 192.0.XX.XX/24.
    // *   If the value of **DestinationType** is **domain**, the value of this parameter is a domain name. Example: aliyuncs.com.
    // *   If the value of **DestinationType** is **group**, the value of this parameter is the name of an address book. Example: db_group.
    // *   If the value of **DestinationType** is **location**, the value of this parameter is a location. For more information about location codes, see [AddControlPolicy](https://help.aliyun.com/document_detail/138867.html). Example: ["BJ11", "ZB"].
    std::shared_ptr<string> destination_ = nullptr;
    // The CIDR blocks in the destination address book.
    std::shared_ptr<vector<string>> destinationGroupCidrs_ = nullptr;
    // The type of the destination address book in the access control policy. Valid values:
    // 
    // *   **ip**: an address book that includes one or more CIDR blocks
    // *   **domain**: an address book that includes one or more domain names
    std::shared_ptr<string> destinationGroupType_ = nullptr;
    // The type of the destination address in the access control policy. Valid values:
    // 
    // *   **net**: CIDR block
    // *   **group**: address book
    // *   **domain**: domain name
    // *   **location**: location
    std::shared_ptr<string> destinationType_ = nullptr;
    // The DNS resolution result.
    std::shared_ptr<string> dnsResult_ = nullptr;
    // The time when the Domain Name System (DNS) resolution was performed. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> dnsResultTime_ = nullptr;
    // The domain name resolution method of the access control policy. By default, an access control policy is enabled after the policy is created. Valid values:
    // 
    // *   **0**: fully qualified domain name (FQDN)-based resolution
    // *   **1**: DNS-based dynamic resolution
    // *   **2**: FQDN and DNS-based dynamic resolution
    std::shared_ptr<int32_t> domainResolveType_ = nullptr;
    // The time when the access control policy stops taking effect. The value is a UNIX timestamp. Unit: seconds. The end time must be on the hour or on the half hour, and at least 30 minutes later than the start time.
    // 
    // >  If RepeatType is set to Permanent, this parameter is left empty. If RepeatType is set to None, Daily, Weekly, or Monthly, this parameter must be specified.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The time when the access control policy was last hit. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> hitLastTime_ = nullptr;
    // The number of hits for the access control policy.
    std::shared_ptr<int64_t> hitTimes_ = nullptr;
    // The time when the access control policy was modified.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The ID of the NAT gateway.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The priority of the access control policy.
    // 
    // The priority value starts from 1. A smaller priority value indicates a higher priority.
    std::shared_ptr<int32_t> order_ = nullptr;
    // The protocol type in the access control policy. Valid values:
    // 
    // *   **ANY**
    // *   **TCP**
    // *   **UDP**
    // *   **ICMP**
    std::shared_ptr<string> proto_ = nullptr;
    // The status of the access control policy. By default, an access control policy is enabled after it is created. Valid values:
    // 
    // *   **true**: enabled
    // *   **false**: disabled
    std::shared_ptr<string> release_ = nullptr;
    // The days of a week or of a month on which the access control policy takes effect.
    // 
    // *   If RepeatType is set to `Permanent`, `None`, or `Daily`, the value of this parameter is an empty array. Example: [].
    // *   If RepeatType is set to Weekly, this parameter must be specified. Example: [0, 6].
    // 
    // >  If RepeatType is set to Weekly, the fields in the value of this parameter cannot be repeated.
    // 
    // *   If RepeatType is set to `Monthly`, this parameter must be specified. Example: [1, 31].
    // 
    // >  If RepeatType is set to Monthly, the fields in the value of this parameter cannot be repeated.
    std::shared_ptr<vector<int64_t>> repeatDays_ = nullptr;
    // The point in time when the recurrence ends. Example: 23:30. The end time must be on the hour or on the half hour, and at least 30 minutes later than the start time.
    // 
    // >  If RepeatType is set to Permanent or None, this parameter is left empty. If RepeatType is set to Daily, Weekly, or Monthly, this parameter must be specified.
    std::shared_ptr<string> repeatEndTime_ = nullptr;
    // The point in time when the recurrence starts. Example: 08:00. The start time must be on the hour or on the half hour, and at least 30 minutes earlier than the end time.
    // 
    // >  If RepeatType is set to Permanent or None, this parameter is left empty. If RepeatType is set to Daily, Weekly, or Monthly, this parameter must be specified.
    std::shared_ptr<string> repeatStartTime_ = nullptr;
    // The recurrence type for the access control policy to take effect. Valid values:
    // 
    // *   **Permanent** (default): The policy always takes effect.
    // *   **None**: The policy takes effect for only once.
    // *   **Daily**: The policy takes effect on a daily basis.
    // *   **Weekly**: The policy takes effect on a weekly basis.
    // *   **Monthly**: The policy takes effect on a monthly basis.
    std::shared_ptr<string> repeatType_ = nullptr;
    // The source address in the access control policy. Valid values:
    // 
    // *   If the value of **SourceType** is `net`, the value of this parameter is a CIDR block. Example: 192.0.XX.XX/24.
    // *   If the value of **SourceType** is `group`, the value of this parameter is the name of an address book. Example: db_group.
    // *   If the value of **SourceType** is `location`, the value of this parameter is a location. For more information about location codes, see [AddControlPolicy](https://help.aliyun.com/document_detail/138867.html). Example: ["BJ11", "ZB"].
    std::shared_ptr<string> source_ = nullptr;
    // The CIDR blocks in the source address book.
    std::shared_ptr<vector<string>> sourceGroupCidrs_ = nullptr;
    // The type of the source address book in the access control policy. The value is fixed as **ip**. The value indicates an address book that includes one or more CIDR blocks.
    std::shared_ptr<string> sourceGroupType_ = nullptr;
    // The type of the source address in the access control policy. Valid values:
    // 
    // *   **net**: CIDR block
    // *   **group**: address book
    // *   **location**: location
    std::shared_ptr<string> sourceType_ = nullptr;
    // The total quota consumed by the returned access control policies, which is the sum of the quota consumed by each policy. The quota that is consumed by an access control policy is calculated by using the following formula: Quota that is consumed by an access control policy = Number of source addresses (number of CIDR blocks or regions) × Number of destination addresses (number of CIDR blocks, regions, or domain names) × Number of port ranges × Number of applications.
    std::shared_ptr<string> spreadCnt_ = nullptr;
    // The time when the access control policy starts to take effect. The value is a UNIX timestamp. Unit: seconds. The start time must be on the hour or on the half hour, and at least 30 minutes earlier than the end time.
    // 
    // >  If RepeatType is set to Permanent, this parameter is left empty. If RepeatType is set to None, Daily, Weekly, or Monthly, this parameter must be specified.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
