// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTROLPOLICYRESPONSEBODYPOLICYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTROLPOLICYRESPONSEBODYPOLICYS_HPP_
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
  class DescribeControlPolicyResponseBodyPolicys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeControlPolicyResponseBodyPolicys& obj) { 
      DARABONBA_PTR_TO_JSON(AclAction, aclAction_);
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
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
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DnsResult, dnsResult_);
      DARABONBA_PTR_TO_JSON(DnsResultTime, dnsResultTime_);
      DARABONBA_PTR_TO_JSON(DomainResolveType, domainResolveType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HitLastTime, hitLastTime_);
      DARABONBA_PTR_TO_JSON(HitTimes, hitTimes_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
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
    friend void from_json(const Darabonba::Json& j, DescribeControlPolicyResponseBodyPolicys& obj) { 
      DARABONBA_PTR_FROM_JSON(AclAction, aclAction_);
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
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
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DnsResult, dnsResult_);
      DARABONBA_PTR_FROM_JSON(DnsResultTime, dnsResultTime_);
      DARABONBA_PTR_FROM_JSON(DomainResolveType, domainResolveType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HitLastTime, hitLastTime_);
      DARABONBA_PTR_FROM_JSON(HitTimes, hitTimes_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
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
    DescribeControlPolicyResponseBodyPolicys() = default ;
    DescribeControlPolicyResponseBodyPolicys(const DescribeControlPolicyResponseBodyPolicys &) = default ;
    DescribeControlPolicyResponseBodyPolicys(DescribeControlPolicyResponseBodyPolicys &&) = default ;
    DescribeControlPolicyResponseBodyPolicys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeControlPolicyResponseBodyPolicys() = default ;
    DescribeControlPolicyResponseBodyPolicys& operator=(const DescribeControlPolicyResponseBodyPolicys &) = default ;
    DescribeControlPolicyResponseBodyPolicys& operator=(DescribeControlPolicyResponseBodyPolicys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclAction_ == nullptr
        && return this->aclUuid_ == nullptr && return this->applicationId_ == nullptr && return this->applicationName_ == nullptr && return this->applicationNameList_ == nullptr && return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->destPort_ == nullptr && return this->destPortGroup_ == nullptr && return this->destPortGroupPorts_ == nullptr && return this->destPortType_ == nullptr
        && return this->destination_ == nullptr && return this->destinationGroupCidrs_ == nullptr && return this->destinationGroupType_ == nullptr && return this->destinationType_ == nullptr && return this->direction_ == nullptr
        && return this->dnsResult_ == nullptr && return this->dnsResultTime_ == nullptr && return this->domainResolveType_ == nullptr && return this->endTime_ == nullptr && return this->hitLastTime_ == nullptr
        && return this->hitTimes_ == nullptr && return this->ipVersion_ == nullptr && return this->modifyTime_ == nullptr && return this->order_ == nullptr && return this->proto_ == nullptr
        && return this->release_ == nullptr && return this->repeatDays_ == nullptr && return this->repeatEndTime_ == nullptr && return this->repeatStartTime_ == nullptr && return this->repeatType_ == nullptr
        && return this->source_ == nullptr && return this->sourceGroupCidrs_ == nullptr && return this->sourceGroupType_ == nullptr && return this->sourceType_ == nullptr && return this->spreadCnt_ == nullptr
        && return this->startTime_ == nullptr; };
    // aclAction Field Functions 
    bool hasAclAction() const { return this->aclAction_ != nullptr;};
    void deleteAclAction() { this->aclAction_ = nullptr;};
    inline string aclAction() const { DARABONBA_PTR_GET_DEFAULT(aclAction_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setAclAction(string aclAction) { DARABONBA_PTR_SET_VALUE(aclAction_, aclAction) };


    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string aclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationNameList Field Functions 
    bool hasApplicationNameList() const { return this->applicationNameList_ != nullptr;};
    void deleteApplicationNameList() { this->applicationNameList_ = nullptr;};
    inline const vector<string> & applicationNameList() const { DARABONBA_PTR_GET_CONST(applicationNameList_, vector<string>) };
    inline vector<string> applicationNameList() { DARABONBA_PTR_GET(applicationNameList_, vector<string>) };
    inline DescribeControlPolicyResponseBodyPolicys& setApplicationNameList(const vector<string> & applicationNameList) { DARABONBA_PTR_SET_VALUE(applicationNameList_, applicationNameList) };
    inline DescribeControlPolicyResponseBodyPolicys& setApplicationNameList(vector<string> && applicationNameList) { DARABONBA_PTR_SET_RVALUE(applicationNameList_, applicationNameList) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeControlPolicyResponseBodyPolicys& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destPort Field Functions 
    bool hasDestPort() const { return this->destPort_ != nullptr;};
    void deleteDestPort() { this->destPort_ = nullptr;};
    inline string destPort() const { DARABONBA_PTR_GET_DEFAULT(destPort_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setDestPort(string destPort) { DARABONBA_PTR_SET_VALUE(destPort_, destPort) };


    // destPortGroup Field Functions 
    bool hasDestPortGroup() const { return this->destPortGroup_ != nullptr;};
    void deleteDestPortGroup() { this->destPortGroup_ = nullptr;};
    inline string destPortGroup() const { DARABONBA_PTR_GET_DEFAULT(destPortGroup_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setDestPortGroup(string destPortGroup) { DARABONBA_PTR_SET_VALUE(destPortGroup_, destPortGroup) };


    // destPortGroupPorts Field Functions 
    bool hasDestPortGroupPorts() const { return this->destPortGroupPorts_ != nullptr;};
    void deleteDestPortGroupPorts() { this->destPortGroupPorts_ = nullptr;};
    inline const vector<string> & destPortGroupPorts() const { DARABONBA_PTR_GET_CONST(destPortGroupPorts_, vector<string>) };
    inline vector<string> destPortGroupPorts() { DARABONBA_PTR_GET(destPortGroupPorts_, vector<string>) };
    inline DescribeControlPolicyResponseBodyPolicys& setDestPortGroupPorts(const vector<string> & destPortGroupPorts) { DARABONBA_PTR_SET_VALUE(destPortGroupPorts_, destPortGroupPorts) };
    inline DescribeControlPolicyResponseBodyPolicys& setDestPortGroupPorts(vector<string> && destPortGroupPorts) { DARABONBA_PTR_SET_RVALUE(destPortGroupPorts_, destPortGroupPorts) };


    // destPortType Field Functions 
    bool hasDestPortType() const { return this->destPortType_ != nullptr;};
    void deleteDestPortType() { this->destPortType_ = nullptr;};
    inline string destPortType() const { DARABONBA_PTR_GET_DEFAULT(destPortType_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setDestPortType(string destPortType) { DARABONBA_PTR_SET_VALUE(destPortType_, destPortType) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // destinationGroupCidrs Field Functions 
    bool hasDestinationGroupCidrs() const { return this->destinationGroupCidrs_ != nullptr;};
    void deleteDestinationGroupCidrs() { this->destinationGroupCidrs_ = nullptr;};
    inline const vector<string> & destinationGroupCidrs() const { DARABONBA_PTR_GET_CONST(destinationGroupCidrs_, vector<string>) };
    inline vector<string> destinationGroupCidrs() { DARABONBA_PTR_GET(destinationGroupCidrs_, vector<string>) };
    inline DescribeControlPolicyResponseBodyPolicys& setDestinationGroupCidrs(const vector<string> & destinationGroupCidrs) { DARABONBA_PTR_SET_VALUE(destinationGroupCidrs_, destinationGroupCidrs) };
    inline DescribeControlPolicyResponseBodyPolicys& setDestinationGroupCidrs(vector<string> && destinationGroupCidrs) { DARABONBA_PTR_SET_RVALUE(destinationGroupCidrs_, destinationGroupCidrs) };


    // destinationGroupType Field Functions 
    bool hasDestinationGroupType() const { return this->destinationGroupType_ != nullptr;};
    void deleteDestinationGroupType() { this->destinationGroupType_ = nullptr;};
    inline string destinationGroupType() const { DARABONBA_PTR_GET_DEFAULT(destinationGroupType_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setDestinationGroupType(string destinationGroupType) { DARABONBA_PTR_SET_VALUE(destinationGroupType_, destinationGroupType) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // dnsResult Field Functions 
    bool hasDnsResult() const { return this->dnsResult_ != nullptr;};
    void deleteDnsResult() { this->dnsResult_ = nullptr;};
    inline string dnsResult() const { DARABONBA_PTR_GET_DEFAULT(dnsResult_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setDnsResult(string dnsResult) { DARABONBA_PTR_SET_VALUE(dnsResult_, dnsResult) };


    // dnsResultTime Field Functions 
    bool hasDnsResultTime() const { return this->dnsResultTime_ != nullptr;};
    void deleteDnsResultTime() { this->dnsResultTime_ = nullptr;};
    inline int64_t dnsResultTime() const { DARABONBA_PTR_GET_DEFAULT(dnsResultTime_, 0L) };
    inline DescribeControlPolicyResponseBodyPolicys& setDnsResultTime(int64_t dnsResultTime) { DARABONBA_PTR_SET_VALUE(dnsResultTime_, dnsResultTime) };


    // domainResolveType Field Functions 
    bool hasDomainResolveType() const { return this->domainResolveType_ != nullptr;};
    void deleteDomainResolveType() { this->domainResolveType_ = nullptr;};
    inline string domainResolveType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveType_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setDomainResolveType(string domainResolveType) { DARABONBA_PTR_SET_VALUE(domainResolveType_, domainResolveType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeControlPolicyResponseBodyPolicys& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // hitLastTime Field Functions 
    bool hasHitLastTime() const { return this->hitLastTime_ != nullptr;};
    void deleteHitLastTime() { this->hitLastTime_ = nullptr;};
    inline int64_t hitLastTime() const { DARABONBA_PTR_GET_DEFAULT(hitLastTime_, 0L) };
    inline DescribeControlPolicyResponseBodyPolicys& setHitLastTime(int64_t hitLastTime) { DARABONBA_PTR_SET_VALUE(hitLastTime_, hitLastTime) };


    // hitTimes Field Functions 
    bool hasHitTimes() const { return this->hitTimes_ != nullptr;};
    void deleteHitTimes() { this->hitTimes_ = nullptr;};
    inline int64_t hitTimes() const { DARABONBA_PTR_GET_DEFAULT(hitTimes_, 0L) };
    inline DescribeControlPolicyResponseBodyPolicys& setHitTimes(int64_t hitTimes) { DARABONBA_PTR_SET_VALUE(hitTimes_, hitTimes) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline int32_t ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, 0) };
    inline DescribeControlPolicyResponseBodyPolicys& setIpVersion(int32_t ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline DescribeControlPolicyResponseBodyPolicys& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline DescribeControlPolicyResponseBodyPolicys& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string proto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline string release() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


    // repeatDays Field Functions 
    bool hasRepeatDays() const { return this->repeatDays_ != nullptr;};
    void deleteRepeatDays() { this->repeatDays_ = nullptr;};
    inline const vector<int64_t> & repeatDays() const { DARABONBA_PTR_GET_CONST(repeatDays_, vector<int64_t>) };
    inline vector<int64_t> repeatDays() { DARABONBA_PTR_GET(repeatDays_, vector<int64_t>) };
    inline DescribeControlPolicyResponseBodyPolicys& setRepeatDays(const vector<int64_t> & repeatDays) { DARABONBA_PTR_SET_VALUE(repeatDays_, repeatDays) };
    inline DescribeControlPolicyResponseBodyPolicys& setRepeatDays(vector<int64_t> && repeatDays) { DARABONBA_PTR_SET_RVALUE(repeatDays_, repeatDays) };


    // repeatEndTime Field Functions 
    bool hasRepeatEndTime() const { return this->repeatEndTime_ != nullptr;};
    void deleteRepeatEndTime() { this->repeatEndTime_ = nullptr;};
    inline string repeatEndTime() const { DARABONBA_PTR_GET_DEFAULT(repeatEndTime_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setRepeatEndTime(string repeatEndTime) { DARABONBA_PTR_SET_VALUE(repeatEndTime_, repeatEndTime) };


    // repeatStartTime Field Functions 
    bool hasRepeatStartTime() const { return this->repeatStartTime_ != nullptr;};
    void deleteRepeatStartTime() { this->repeatStartTime_ = nullptr;};
    inline string repeatStartTime() const { DARABONBA_PTR_GET_DEFAULT(repeatStartTime_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setRepeatStartTime(string repeatStartTime) { DARABONBA_PTR_SET_VALUE(repeatStartTime_, repeatStartTime) };


    // repeatType Field Functions 
    bool hasRepeatType() const { return this->repeatType_ != nullptr;};
    void deleteRepeatType() { this->repeatType_ = nullptr;};
    inline string repeatType() const { DARABONBA_PTR_GET_DEFAULT(repeatType_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setRepeatType(string repeatType) { DARABONBA_PTR_SET_VALUE(repeatType_, repeatType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceGroupCidrs Field Functions 
    bool hasSourceGroupCidrs() const { return this->sourceGroupCidrs_ != nullptr;};
    void deleteSourceGroupCidrs() { this->sourceGroupCidrs_ = nullptr;};
    inline const vector<string> & sourceGroupCidrs() const { DARABONBA_PTR_GET_CONST(sourceGroupCidrs_, vector<string>) };
    inline vector<string> sourceGroupCidrs() { DARABONBA_PTR_GET(sourceGroupCidrs_, vector<string>) };
    inline DescribeControlPolicyResponseBodyPolicys& setSourceGroupCidrs(const vector<string> & sourceGroupCidrs) { DARABONBA_PTR_SET_VALUE(sourceGroupCidrs_, sourceGroupCidrs) };
    inline DescribeControlPolicyResponseBodyPolicys& setSourceGroupCidrs(vector<string> && sourceGroupCidrs) { DARABONBA_PTR_SET_RVALUE(sourceGroupCidrs_, sourceGroupCidrs) };


    // sourceGroupType Field Functions 
    bool hasSourceGroupType() const { return this->sourceGroupType_ != nullptr;};
    void deleteSourceGroupType() { this->sourceGroupType_ = nullptr;};
    inline string sourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupType_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setSourceGroupType(string sourceGroupType) { DARABONBA_PTR_SET_VALUE(sourceGroupType_, sourceGroupType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeControlPolicyResponseBodyPolicys& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // spreadCnt Field Functions 
    bool hasSpreadCnt() const { return this->spreadCnt_ != nullptr;};
    void deleteSpreadCnt() { this->spreadCnt_ = nullptr;};
    inline int32_t spreadCnt() const { DARABONBA_PTR_GET_DEFAULT(spreadCnt_, 0) };
    inline DescribeControlPolicyResponseBodyPolicys& setSpreadCnt(int32_t spreadCnt) { DARABONBA_PTR_SET_VALUE(spreadCnt_, spreadCnt) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeControlPolicyResponseBodyPolicys& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The action that Cloud Firewall performs on the traffic. Valid values:
    // 
    // *   **accept**: allows the traffic.
    // *   **drop**: denies the traffic.
    // *   **log**: monitors the traffic.
    std::shared_ptr<string> aclAction_ = nullptr;
    // The UUID of the access control policy.
    std::shared_ptr<string> aclUuid_ = nullptr;
    // The application ID in the access control policy.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The application type supported by the access control policy. We recommend that you specify ApplicationNameList. Valid values:
    // 
    // *   **FTP**
    // *   **HTTP**
    // *   **HTTPS**
    // *   **Memcache**
    // *   **MongoDB**
    // *   **MQTT**
    // *   **MySQL**
    // *   **RDP**
    // *   **Redis**
    // *   **SMTP**
    // *   **SMTPS**
    // *   **SSH**
    // *   **SSL**
    // *   **VNC**
    // *   **ANY**: all types of applications
    std::shared_ptr<string> applicationName_ = nullptr;
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
    // The destination address in the access control policy. The value of this parameter varies based on the value of DestinationType.
    // 
    // *   If the value of **DestinationType** is **net**, the value of Destination is a CIDR block. Example: 192.0.XX.XX/24.
    // *   If the value of **DestinationType** is **domain**, the value of Destination is a domain name. Example: aliyuncs.com.
    // *   If the value of **DestinationType** is **group**, the value of Destination is the name of an address book. Example: db_group.
    // *   If the value of **DestinationType** is **location**, the value of Destination is the name of a location. For more information about location codes, see AddControlPolicy. Example: ["BJ11", "ZB"].
    std::shared_ptr<string> destination_ = nullptr;
    // The CIDR blocks in the destination address book.
    std::shared_ptr<vector<string>> destinationGroupCidrs_ = nullptr;
    // The type of the destination address book in the access control policy. Valid values:
    // 
    // *   **ip**: an address book that includes one or more IP addresses
    // *   **tag**: an ECS tag-based address book that includes the IP addresses of the ECS instances with one or more specific tags
    // *   **domain**: an address book that includes one or more domain names
    // *   **threat**: an address book that includes one or more malicious IP addresses or domain names
    // *   **backsrc**: an address book that includes one or more back-to-origin addresses of Anti-DDoS Pro or Anti-DDoS Premium instances or WAF instances
    std::shared_ptr<string> destinationGroupType_ = nullptr;
    // The type of the destination address in the access control policy. Valid values:
    // 
    // *   **net**: CIDR block
    // *   **group**: address book
    // *   **domain**: domain name
    // *   **location**: location
    std::shared_ptr<string> destinationType_ = nullptr;
    // The direction of the traffic to which the access control policy applies. Valid values:
    // 
    // *   **in**: inbound traffic
    // *   **out**: outbound traffic
    std::shared_ptr<string> direction_ = nullptr;
    // The DNS resolution results.
    std::shared_ptr<string> dnsResult_ = nullptr;
    // The time when the Domain Name System (DNS) resolution was performed. The value is a timestamp. Unit: seconds.
    std::shared_ptr<int64_t> dnsResultTime_ = nullptr;
    // The domain name resolution method of the access control policy. By default, an access control policy is enabled after the policy is created. Valid values:
    // 
    // * **FQDN**: fully qualified domain name (FQDN)-based resolution
    // * **DNS**: DNS-based dynamic resolution
    // * **FQDN_AND_DNS**: FQDN and DNS-based dynamic resolution
    std::shared_ptr<string> domainResolveType_ = nullptr;
    // The time when the access control policy stops taking effect. The value is a timestamp. Unit: seconds. The end time must be on the hour or on the half hour, and at least 30 minutes later than the start time.
    // 
    // >  If RepeatType is set to Permanent, this parameter is left empty. If RepeatType is set to None, Daily, Weekly, or Monthly, this parameter must be specified.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The time when the access control policy was last hit. The value is a timestamp. Unit: seconds.
    std::shared_ptr<int64_t> hitLastTime_ = nullptr;
    // The number of hits for the access control policy.
    std::shared_ptr<int64_t> hitTimes_ = nullptr;
    // The IP version used in the access control policy. Valid values:
    // 
    // *   **4**: IPv4
    // *   **6**: IPv6
    std::shared_ptr<int32_t> ipVersion_ = nullptr;
    // The time when the access control policy was modified.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
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
    // *   If RepeatType is set to `Permanent`, `None`, or `Daily`, this parameter is left empty. Example: [].
    // *   If RepeatType is set to Weekly, this parameter must be specified. Example: [0, 6].
    // 
    // >  If RepeatType is set to Weekly, the fields in the value of RepeatDays cannot be repeated.
    // 
    // *   If RepeatType is set to `Monthly`, this parameter must be specified. Example: [1, 31].
    // 
    // >  If RepeatType is set to Monthly, the fields in the value of RepeatDays cannot be repeated.
    std::shared_ptr<vector<int64_t>> repeatDays_ = nullptr;
    // The point in time when the recurrence ends. Example: 23:30. The value must be on the hour or on the half hour, and at least 30 minutes later than the start time.
    // 
    // >  If RepeatType is set to Permanent or None, this parameter is left empty. If RepeatType is set to Daily, Weekly, or Monthly, this parameter must be specified.
    std::shared_ptr<string> repeatEndTime_ = nullptr;
    // The point in time when the recurrence starts. Example: 08:00. The value must be on the hour or on the half hour, and at least 30 minutes earlier than the end time.
    // 
    // >  If RepeatType is set to Permanent or None, this parameter is left empty. If RepeatType is set to Daily, Weekly, or Monthly, this parameter must be specified.
    std::shared_ptr<string> repeatStartTime_ = nullptr;
    // The recurrence type based on which the access control policy takes effect. Valid values:
    // 
    // *   **Permanent** (default): The policy always takes effect.
    // *   **None**: The policy takes effect for only once.
    // *   **Daily**: The policy takes effect on a daily basis.
    // *   **Weekly**: The policy takes effect on a weekly basis.
    // *   **Monthly**: The policy takes effect on a monthly basis.
    std::shared_ptr<string> repeatType_ = nullptr;
    // The source address in the access control policy. Valid values:
    // 
    // *   If **SourceType** is set to `net`, the value of Source is a CIDR block. Example: 192.0.XX.XX/24.
    // *   If **SourceType** is set to `group`, the value of Source is the name of an address book. Example: db_group.
    // *   If **SourceType** is set to `location`, the value of Source is a location. For more information about location codes, see [AddControlPolicy](https://help.aliyun.com/document_detail/138867.html). Example: ["BJ11", "ZB"].
    std::shared_ptr<string> source_ = nullptr;
    // The CIDR blocks in the source address book.
    std::shared_ptr<vector<string>> sourceGroupCidrs_ = nullptr;
    // The type of the source address book in the access control policy. Valid values:
    // 
    // *   **ip**: an address book that includes one or more IP addresses
    // *   **tag**: an Elastic Compute Service (ECS) tag-based address book that includes the IP addresses of the ECS instances with one or more specific tags
    // *   **domain**: an address book that includes one or more domain names
    // *   **threat**: an address book that includes one or more malicious IP addresses or domain names
    // *   **backsrc**: an address book that includes one or more back-to-origin addresses of Anti-DDoS Pro or Anti-DDoS Premium instances or Web Application Firewall (WAF) instances
    std::shared_ptr<string> sourceGroupType_ = nullptr;
    // The type of the source address in the access control policy. Valid values:
    // 
    // *   **net**: CIDR block
    // *   **group**: address book
    // *   **location**: location
    std::shared_ptr<string> sourceType_ = nullptr;
    // The total quota consumed by the returned access control policies, which is the sum of the quota consumed by each policy. The quota that is consumed by an access control policy is calculated by using the following formula: Quota that is consumed by an access control policy = Number of source addresses (number of CIDR blocks or regions) × Number of destination addresses (number of CIDR blocks, regions, or domain names) × Number of port ranges × Number of applications.
    std::shared_ptr<int32_t> spreadCnt_ = nullptr;
    // The time when the access control policy starts to take effect. The value is a timestamp. Unit: seconds. The start time must be on the hour or on the half hour, and at least 30 minutes earlier than the end time.
    // 
    // >  If RepeatType is set to Permanent, this parameter is left empty. If RepeatType is set to None, Daily, Weekly, or Monthly, this parameter must be specified.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
