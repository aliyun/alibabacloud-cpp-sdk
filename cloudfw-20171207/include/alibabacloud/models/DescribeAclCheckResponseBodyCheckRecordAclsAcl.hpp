// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLCHECKRESPONSEBODYCHECKRECORDACLSACL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLCHECKRESPONSEBODYCHECKRECORDACLSACL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses.hpp>
#include <alibabacloud/models/DescribeAclCheckResponseBodyCheckRecordAclsAclTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclCheckResponseBodyCheckRecordAclsAcl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclCheckResponseBodyCheckRecordAclsAcl& obj) { 
      DARABONBA_PTR_TO_JSON(AclAction, aclAction_);
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(AddressList, addressList_);
      DARABONBA_PTR_TO_JSON(AddressListCount, addressListCount_);
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ApplicationNameList, applicationNameList_);
      DARABONBA_PTR_TO_JSON(AutoAddTagEcs, autoAddTagEcs_);
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
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(GroupUuid, groupUuid_);
      DARABONBA_PTR_TO_JSON(HitLastTime, hitLastTime_);
      DARABONBA_PTR_TO_JSON(HitTimes, hitTimes_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(ReferenceCount, referenceCount_);
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
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TagRelation, tagRelation_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclCheckResponseBodyCheckRecordAclsAcl& obj) { 
      DARABONBA_PTR_FROM_JSON(AclAction, aclAction_);
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(AddressList, addressList_);
      DARABONBA_PTR_FROM_JSON(AddressListCount, addressListCount_);
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ApplicationNameList, applicationNameList_);
      DARABONBA_PTR_FROM_JSON(AutoAddTagEcs, autoAddTagEcs_);
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
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(GroupUuid, groupUuid_);
      DARABONBA_PTR_FROM_JSON(HitLastTime, hitLastTime_);
      DARABONBA_PTR_FROM_JSON(HitTimes, hitTimes_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(ReferenceCount, referenceCount_);
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
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TagRelation, tagRelation_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    DescribeAclCheckResponseBodyCheckRecordAclsAcl() = default ;
    DescribeAclCheckResponseBodyCheckRecordAclsAcl(const DescribeAclCheckResponseBodyCheckRecordAclsAcl &) = default ;
    DescribeAclCheckResponseBodyCheckRecordAclsAcl(DescribeAclCheckResponseBodyCheckRecordAclsAcl &&) = default ;
    DescribeAclCheckResponseBodyCheckRecordAclsAcl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclCheckResponseBodyCheckRecordAclsAcl() = default ;
    DescribeAclCheckResponseBodyCheckRecordAclsAcl& operator=(const DescribeAclCheckResponseBodyCheckRecordAclsAcl &) = default ;
    DescribeAclCheckResponseBodyCheckRecordAclsAcl& operator=(DescribeAclCheckResponseBodyCheckRecordAclsAcl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclAction_ == nullptr
        && return this->aclUuid_ == nullptr && return this->addressList_ == nullptr && return this->addressListCount_ == nullptr && return this->addresses_ == nullptr && return this->applicationId_ == nullptr
        && return this->applicationName_ == nullptr && return this->applicationNameList_ == nullptr && return this->autoAddTagEcs_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr
        && return this->destPort_ == nullptr && return this->destPortGroup_ == nullptr && return this->destPortGroupPorts_ == nullptr && return this->destPortType_ == nullptr && return this->destination_ == nullptr
        && return this->destinationGroupCidrs_ == nullptr && return this->destinationGroupType_ == nullptr && return this->destinationType_ == nullptr && return this->direction_ == nullptr && return this->dnsResult_ == nullptr
        && return this->dnsResultTime_ == nullptr && return this->domainResolveType_ == nullptr && return this->endTime_ == nullptr && return this->groupName_ == nullptr && return this->groupType_ == nullptr
        && return this->groupUuid_ == nullptr && return this->hitLastTime_ == nullptr && return this->hitTimes_ == nullptr && return this->ipVersion_ == nullptr && return this->modifyTime_ == nullptr
        && return this->natGatewayId_ == nullptr && return this->order_ == nullptr && return this->proto_ == nullptr && return this->referenceCount_ == nullptr && return this->release_ == nullptr
        && return this->repeatDays_ == nullptr && return this->repeatEndTime_ == nullptr && return this->repeatStartTime_ == nullptr && return this->repeatType_ == nullptr && return this->source_ == nullptr
        && return this->sourceGroupCidrs_ == nullptr && return this->sourceGroupType_ == nullptr && return this->sourceType_ == nullptr && return this->spreadCnt_ == nullptr && return this->startTime_ == nullptr
        && return this->tagList_ == nullptr && return this->tagRelation_ == nullptr && return this->vpcFirewallId_ == nullptr; };
    // aclAction Field Functions 
    bool hasAclAction() const { return this->aclAction_ != nullptr;};
    void deleteAclAction() { this->aclAction_ = nullptr;};
    inline string aclAction() const { DARABONBA_PTR_GET_DEFAULT(aclAction_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setAclAction(string aclAction) { DARABONBA_PTR_SET_VALUE(aclAction_, aclAction) };


    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string aclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // addressList Field Functions 
    bool hasAddressList() const { return this->addressList_ != nullptr;};
    void deleteAddressList() { this->addressList_ = nullptr;};
    inline const vector<string> & addressList() const { DARABONBA_PTR_GET_CONST(addressList_, vector<string>) };
    inline vector<string> addressList() { DARABONBA_PTR_GET(addressList_, vector<string>) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setAddressList(const vector<string> & addressList) { DARABONBA_PTR_SET_VALUE(addressList_, addressList) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setAddressList(vector<string> && addressList) { DARABONBA_PTR_SET_RVALUE(addressList_, addressList) };


    // addressListCount Field Functions 
    bool hasAddressListCount() const { return this->addressListCount_ != nullptr;};
    void deleteAddressListCount() { this->addressListCount_ = nullptr;};
    inline int32_t addressListCount() const { DARABONBA_PTR_GET_DEFAULT(addressListCount_, 0) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setAddressListCount(int32_t addressListCount) { DARABONBA_PTR_SET_VALUE(addressListCount_, addressListCount) };


    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<Models::DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses> & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<Models::DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses>) };
    inline vector<Models::DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses> addresses() { DARABONBA_PTR_GET(addresses_, vector<Models::DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses>) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setAddresses(const vector<Models::DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setAddresses(vector<Models::DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationNameList Field Functions 
    bool hasApplicationNameList() const { return this->applicationNameList_ != nullptr;};
    void deleteApplicationNameList() { this->applicationNameList_ = nullptr;};
    inline const vector<string> & applicationNameList() const { DARABONBA_PTR_GET_CONST(applicationNameList_, vector<string>) };
    inline vector<string> applicationNameList() { DARABONBA_PTR_GET(applicationNameList_, vector<string>) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setApplicationNameList(const vector<string> & applicationNameList) { DARABONBA_PTR_SET_VALUE(applicationNameList_, applicationNameList) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setApplicationNameList(vector<string> && applicationNameList) { DARABONBA_PTR_SET_RVALUE(applicationNameList_, applicationNameList) };


    // autoAddTagEcs Field Functions 
    bool hasAutoAddTagEcs() const { return this->autoAddTagEcs_ != nullptr;};
    void deleteAutoAddTagEcs() { this->autoAddTagEcs_ = nullptr;};
    inline int32_t autoAddTagEcs() const { DARABONBA_PTR_GET_DEFAULT(autoAddTagEcs_, 0) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setAutoAddTagEcs(int32_t autoAddTagEcs) { DARABONBA_PTR_SET_VALUE(autoAddTagEcs_, autoAddTagEcs) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destPort Field Functions 
    bool hasDestPort() const { return this->destPort_ != nullptr;};
    void deleteDestPort() { this->destPort_ = nullptr;};
    inline string destPort() const { DARABONBA_PTR_GET_DEFAULT(destPort_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDestPort(string destPort) { DARABONBA_PTR_SET_VALUE(destPort_, destPort) };


    // destPortGroup Field Functions 
    bool hasDestPortGroup() const { return this->destPortGroup_ != nullptr;};
    void deleteDestPortGroup() { this->destPortGroup_ = nullptr;};
    inline string destPortGroup() const { DARABONBA_PTR_GET_DEFAULT(destPortGroup_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDestPortGroup(string destPortGroup) { DARABONBA_PTR_SET_VALUE(destPortGroup_, destPortGroup) };


    // destPortGroupPorts Field Functions 
    bool hasDestPortGroupPorts() const { return this->destPortGroupPorts_ != nullptr;};
    void deleteDestPortGroupPorts() { this->destPortGroupPorts_ = nullptr;};
    inline const vector<string> & destPortGroupPorts() const { DARABONBA_PTR_GET_CONST(destPortGroupPorts_, vector<string>) };
    inline vector<string> destPortGroupPorts() { DARABONBA_PTR_GET(destPortGroupPorts_, vector<string>) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDestPortGroupPorts(const vector<string> & destPortGroupPorts) { DARABONBA_PTR_SET_VALUE(destPortGroupPorts_, destPortGroupPorts) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDestPortGroupPorts(vector<string> && destPortGroupPorts) { DARABONBA_PTR_SET_RVALUE(destPortGroupPorts_, destPortGroupPorts) };


    // destPortType Field Functions 
    bool hasDestPortType() const { return this->destPortType_ != nullptr;};
    void deleteDestPortType() { this->destPortType_ = nullptr;};
    inline string destPortType() const { DARABONBA_PTR_GET_DEFAULT(destPortType_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDestPortType(string destPortType) { DARABONBA_PTR_SET_VALUE(destPortType_, destPortType) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // destinationGroupCidrs Field Functions 
    bool hasDestinationGroupCidrs() const { return this->destinationGroupCidrs_ != nullptr;};
    void deleteDestinationGroupCidrs() { this->destinationGroupCidrs_ = nullptr;};
    inline const vector<string> & destinationGroupCidrs() const { DARABONBA_PTR_GET_CONST(destinationGroupCidrs_, vector<string>) };
    inline vector<string> destinationGroupCidrs() { DARABONBA_PTR_GET(destinationGroupCidrs_, vector<string>) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDestinationGroupCidrs(const vector<string> & destinationGroupCidrs) { DARABONBA_PTR_SET_VALUE(destinationGroupCidrs_, destinationGroupCidrs) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDestinationGroupCidrs(vector<string> && destinationGroupCidrs) { DARABONBA_PTR_SET_RVALUE(destinationGroupCidrs_, destinationGroupCidrs) };


    // destinationGroupType Field Functions 
    bool hasDestinationGroupType() const { return this->destinationGroupType_ != nullptr;};
    void deleteDestinationGroupType() { this->destinationGroupType_ = nullptr;};
    inline string destinationGroupType() const { DARABONBA_PTR_GET_DEFAULT(destinationGroupType_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDestinationGroupType(string destinationGroupType) { DARABONBA_PTR_SET_VALUE(destinationGroupType_, destinationGroupType) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // dnsResult Field Functions 
    bool hasDnsResult() const { return this->dnsResult_ != nullptr;};
    void deleteDnsResult() { this->dnsResult_ = nullptr;};
    inline string dnsResult() const { DARABONBA_PTR_GET_DEFAULT(dnsResult_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDnsResult(string dnsResult) { DARABONBA_PTR_SET_VALUE(dnsResult_, dnsResult) };


    // dnsResultTime Field Functions 
    bool hasDnsResultTime() const { return this->dnsResultTime_ != nullptr;};
    void deleteDnsResultTime() { this->dnsResultTime_ = nullptr;};
    inline int64_t dnsResultTime() const { DARABONBA_PTR_GET_DEFAULT(dnsResultTime_, 0L) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDnsResultTime(int64_t dnsResultTime) { DARABONBA_PTR_SET_VALUE(dnsResultTime_, dnsResultTime) };


    // domainResolveType Field Functions 
    bool hasDomainResolveType() const { return this->domainResolveType_ != nullptr;};
    void deleteDomainResolveType() { this->domainResolveType_ = nullptr;};
    inline int32_t domainResolveType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveType_, 0) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setDomainResolveType(int32_t domainResolveType) { DARABONBA_PTR_SET_VALUE(domainResolveType_, domainResolveType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // groupUuid Field Functions 
    bool hasGroupUuid() const { return this->groupUuid_ != nullptr;};
    void deleteGroupUuid() { this->groupUuid_ = nullptr;};
    inline string groupUuid() const { DARABONBA_PTR_GET_DEFAULT(groupUuid_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setGroupUuid(string groupUuid) { DARABONBA_PTR_SET_VALUE(groupUuid_, groupUuid) };


    // hitLastTime Field Functions 
    bool hasHitLastTime() const { return this->hitLastTime_ != nullptr;};
    void deleteHitLastTime() { this->hitLastTime_ = nullptr;};
    inline int64_t hitLastTime() const { DARABONBA_PTR_GET_DEFAULT(hitLastTime_, 0L) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setHitLastTime(int64_t hitLastTime) { DARABONBA_PTR_SET_VALUE(hitLastTime_, hitLastTime) };


    // hitTimes Field Functions 
    bool hasHitTimes() const { return this->hitTimes_ != nullptr;};
    void deleteHitTimes() { this->hitTimes_ = nullptr;};
    inline int64_t hitTimes() const { DARABONBA_PTR_GET_DEFAULT(hitTimes_, 0L) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setHitTimes(int64_t hitTimes) { DARABONBA_PTR_SET_VALUE(hitTimes_, hitTimes) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline int32_t ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, 0) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setIpVersion(int32_t ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string proto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // referenceCount Field Functions 
    bool hasReferenceCount() const { return this->referenceCount_ != nullptr;};
    void deleteReferenceCount() { this->referenceCount_ = nullptr;};
    inline int32_t referenceCount() const { DARABONBA_PTR_GET_DEFAULT(referenceCount_, 0) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setReferenceCount(int32_t referenceCount) { DARABONBA_PTR_SET_VALUE(referenceCount_, referenceCount) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline string release() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


    // repeatDays Field Functions 
    bool hasRepeatDays() const { return this->repeatDays_ != nullptr;};
    void deleteRepeatDays() { this->repeatDays_ = nullptr;};
    inline const vector<int64_t> & repeatDays() const { DARABONBA_PTR_GET_CONST(repeatDays_, vector<int64_t>) };
    inline vector<int64_t> repeatDays() { DARABONBA_PTR_GET(repeatDays_, vector<int64_t>) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setRepeatDays(const vector<int64_t> & repeatDays) { DARABONBA_PTR_SET_VALUE(repeatDays_, repeatDays) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setRepeatDays(vector<int64_t> && repeatDays) { DARABONBA_PTR_SET_RVALUE(repeatDays_, repeatDays) };


    // repeatEndTime Field Functions 
    bool hasRepeatEndTime() const { return this->repeatEndTime_ != nullptr;};
    void deleteRepeatEndTime() { this->repeatEndTime_ = nullptr;};
    inline string repeatEndTime() const { DARABONBA_PTR_GET_DEFAULT(repeatEndTime_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setRepeatEndTime(string repeatEndTime) { DARABONBA_PTR_SET_VALUE(repeatEndTime_, repeatEndTime) };


    // repeatStartTime Field Functions 
    bool hasRepeatStartTime() const { return this->repeatStartTime_ != nullptr;};
    void deleteRepeatStartTime() { this->repeatStartTime_ = nullptr;};
    inline string repeatStartTime() const { DARABONBA_PTR_GET_DEFAULT(repeatStartTime_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setRepeatStartTime(string repeatStartTime) { DARABONBA_PTR_SET_VALUE(repeatStartTime_, repeatStartTime) };


    // repeatType Field Functions 
    bool hasRepeatType() const { return this->repeatType_ != nullptr;};
    void deleteRepeatType() { this->repeatType_ = nullptr;};
    inline string repeatType() const { DARABONBA_PTR_GET_DEFAULT(repeatType_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setRepeatType(string repeatType) { DARABONBA_PTR_SET_VALUE(repeatType_, repeatType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceGroupCidrs Field Functions 
    bool hasSourceGroupCidrs() const { return this->sourceGroupCidrs_ != nullptr;};
    void deleteSourceGroupCidrs() { this->sourceGroupCidrs_ = nullptr;};
    inline const vector<string> & sourceGroupCidrs() const { DARABONBA_PTR_GET_CONST(sourceGroupCidrs_, vector<string>) };
    inline vector<string> sourceGroupCidrs() { DARABONBA_PTR_GET(sourceGroupCidrs_, vector<string>) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setSourceGroupCidrs(const vector<string> & sourceGroupCidrs) { DARABONBA_PTR_SET_VALUE(sourceGroupCidrs_, sourceGroupCidrs) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setSourceGroupCidrs(vector<string> && sourceGroupCidrs) { DARABONBA_PTR_SET_RVALUE(sourceGroupCidrs_, sourceGroupCidrs) };


    // sourceGroupType Field Functions 
    bool hasSourceGroupType() const { return this->sourceGroupType_ != nullptr;};
    void deleteSourceGroupType() { this->sourceGroupType_ = nullptr;};
    inline string sourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupType_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setSourceGroupType(string sourceGroupType) { DARABONBA_PTR_SET_VALUE(sourceGroupType_, sourceGroupType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // spreadCnt Field Functions 
    bool hasSpreadCnt() const { return this->spreadCnt_ != nullptr;};
    void deleteSpreadCnt() { this->spreadCnt_ = nullptr;};
    inline int32_t spreadCnt() const { DARABONBA_PTR_GET_DEFAULT(spreadCnt_, 0) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setSpreadCnt(int32_t spreadCnt) { DARABONBA_PTR_SET_VALUE(spreadCnt_, spreadCnt) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<Models::DescribeAclCheckResponseBodyCheckRecordAclsAclTagList> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<Models::DescribeAclCheckResponseBodyCheckRecordAclsAclTagList>) };
    inline vector<Models::DescribeAclCheckResponseBodyCheckRecordAclsAclTagList> tagList() { DARABONBA_PTR_GET(tagList_, vector<Models::DescribeAclCheckResponseBodyCheckRecordAclsAclTagList>) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setTagList(const vector<Models::DescribeAclCheckResponseBodyCheckRecordAclsAclTagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setTagList(vector<Models::DescribeAclCheckResponseBodyCheckRecordAclsAclTagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // tagRelation Field Functions 
    bool hasTagRelation() const { return this->tagRelation_ != nullptr;};
    void deleteTagRelation() { this->tagRelation_ = nullptr;};
    inline string tagRelation() const { DARABONBA_PTR_GET_DEFAULT(tagRelation_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setTagRelation(string tagRelation) { DARABONBA_PTR_SET_VALUE(tagRelation_, tagRelation) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string vpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAcl& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    std::shared_ptr<string> aclAction_ = nullptr;
    std::shared_ptr<string> aclUuid_ = nullptr;
    std::shared_ptr<vector<string>> addressList_ = nullptr;
    std::shared_ptr<int32_t> addressListCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses>> addresses_ = nullptr;
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> applicationName_ = nullptr;
    std::shared_ptr<vector<string>> applicationNameList_ = nullptr;
    std::shared_ptr<int32_t> autoAddTagEcs_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> destPort_ = nullptr;
    std::shared_ptr<string> destPortGroup_ = nullptr;
    std::shared_ptr<vector<string>> destPortGroupPorts_ = nullptr;
    std::shared_ptr<string> destPortType_ = nullptr;
    std::shared_ptr<string> destination_ = nullptr;
    std::shared_ptr<vector<string>> destinationGroupCidrs_ = nullptr;
    std::shared_ptr<string> destinationGroupType_ = nullptr;
    std::shared_ptr<string> destinationType_ = nullptr;
    std::shared_ptr<string> direction_ = nullptr;
    std::shared_ptr<string> dnsResult_ = nullptr;
    std::shared_ptr<int64_t> dnsResultTime_ = nullptr;
    std::shared_ptr<int32_t> domainResolveType_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> groupType_ = nullptr;
    std::shared_ptr<string> groupUuid_ = nullptr;
    std::shared_ptr<int64_t> hitLastTime_ = nullptr;
    std::shared_ptr<int64_t> hitTimes_ = nullptr;
    std::shared_ptr<int32_t> ipVersion_ = nullptr;
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<int32_t> order_ = nullptr;
    std::shared_ptr<string> proto_ = nullptr;
    std::shared_ptr<int32_t> referenceCount_ = nullptr;
    std::shared_ptr<string> release_ = nullptr;
    std::shared_ptr<vector<int64_t>> repeatDays_ = nullptr;
    std::shared_ptr<string> repeatEndTime_ = nullptr;
    std::shared_ptr<string> repeatStartTime_ = nullptr;
    std::shared_ptr<string> repeatType_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<vector<string>> sourceGroupCidrs_ = nullptr;
    std::shared_ptr<string> sourceGroupType_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<int32_t> spreadCnt_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<vector<Models::DescribeAclCheckResponseBodyCheckRecordAclsAclTagList>> tagList_ = nullptr;
    std::shared_ptr<string> tagRelation_ = nullptr;
    std::shared_ptr<string> vpcFirewallId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
