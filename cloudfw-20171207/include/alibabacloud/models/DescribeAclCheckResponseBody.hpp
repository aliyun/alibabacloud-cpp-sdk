// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLCHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLCHECKRESPONSEBODY_HPP_
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
  class DescribeAclCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckRecord, checkRecord_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRecord, checkRecord_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAclCheckResponseBody() = default ;
    DescribeAclCheckResponseBody(const DescribeAclCheckResponseBody &) = default ;
    DescribeAclCheckResponseBody(DescribeAclCheckResponseBody &&) = default ;
    DescribeAclCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclCheckResponseBody() = default ;
    DescribeAclCheckResponseBody& operator=(const DescribeAclCheckResponseBody &) = default ;
    DescribeAclCheckResponseBody& operator=(DescribeAclCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckRecord : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckRecord& obj) { 
        DARABONBA_PTR_TO_JSON(AclTotalCount, aclTotalCount_);
        DARABONBA_PTR_TO_JSON(Acls, acls_);
        DARABONBA_PTR_TO_JSON(CheckName, checkName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(RecordAssessmentDetail, recordAssessmentDetail_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, CheckRecord& obj) { 
        DARABONBA_PTR_FROM_JSON(AclTotalCount, aclTotalCount_);
        DARABONBA_PTR_FROM_JSON(Acls, acls_);
        DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(RecordAssessmentDetail, recordAssessmentDetail_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      CheckRecord() = default ;
      CheckRecord(const CheckRecord &) = default ;
      CheckRecord(CheckRecord &&) = default ;
      CheckRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckRecord() = default ;
      CheckRecord& operator=(const CheckRecord &) = default ;
      CheckRecord& operator=(CheckRecord &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Acls : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Acls& obj) { 
          DARABONBA_PTR_TO_JSON(Acl, acl_);
          DARABONBA_PTR_TO_JSON(AclAssessmentDetail, aclAssessmentDetail_);
          DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Acls& obj) { 
          DARABONBA_PTR_FROM_JSON(Acl, acl_);
          DARABONBA_PTR_FROM_JSON(AclAssessmentDetail, aclAssessmentDetail_);
          DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
        };
        Acls() = default ;
        Acls(const Acls &) = default ;
        Acls(Acls &&) = default ;
        Acls(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Acls() = default ;
        Acls& operator=(const Acls &) = default ;
        Acls& operator=(Acls &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Acl : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Acl& obj) { 
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
          friend void from_json(const Darabonba::Json& j, Acl& obj) { 
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
          Acl() = default ;
          Acl(const Acl &) = default ;
          Acl(Acl &&) = default ;
          Acl(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Acl() = default ;
          Acl& operator=(const Acl &) = default ;
          Acl& operator=(Acl &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TagList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagList& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, TagList& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
            };
            TagList() = default ;
            TagList(const TagList &) = default ;
            TagList(TagList &&) = default ;
            TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagList() = default ;
            TagList& operator=(const TagList &) = default ;
            TagList& operator=(TagList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline TagList& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline TagList& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            shared_ptr<string> tagKey_ {};
            shared_ptr<string> tagValue_ {};
          };

          class Addresses : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Addresses& obj) { 
              DARABONBA_PTR_TO_JSON(Address, address_);
              DARABONBA_PTR_TO_JSON(Note, note_);
            };
            friend void from_json(const Darabonba::Json& j, Addresses& obj) { 
              DARABONBA_PTR_FROM_JSON(Address, address_);
              DARABONBA_PTR_FROM_JSON(Note, note_);
            };
            Addresses() = default ;
            Addresses(const Addresses &) = default ;
            Addresses(Addresses &&) = default ;
            Addresses(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Addresses() = default ;
            Addresses& operator=(const Addresses &) = default ;
            Addresses& operator=(Addresses &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->address_ == nullptr
        && this->note_ == nullptr; };
            // address Field Functions 
            bool hasAddress() const { return this->address_ != nullptr;};
            void deleteAddress() { this->address_ = nullptr;};
            inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
            inline Addresses& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


            // note Field Functions 
            bool hasNote() const { return this->note_ != nullptr;};
            void deleteNote() { this->note_ = nullptr;};
            inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
            inline Addresses& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


          protected:
            shared_ptr<string> address_ {};
            shared_ptr<string> note_ {};
          };

          virtual bool empty() const override { return this->aclAction_ == nullptr
        && this->aclUuid_ == nullptr && this->addressList_ == nullptr && this->addressListCount_ == nullptr && this->addresses_ == nullptr && this->applicationId_ == nullptr
        && this->applicationName_ == nullptr && this->applicationNameList_ == nullptr && this->autoAddTagEcs_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->destPort_ == nullptr && this->destPortGroup_ == nullptr && this->destPortGroupPorts_ == nullptr && this->destPortType_ == nullptr && this->destination_ == nullptr
        && this->destinationGroupCidrs_ == nullptr && this->destinationGroupType_ == nullptr && this->destinationType_ == nullptr && this->direction_ == nullptr && this->dnsResult_ == nullptr
        && this->dnsResultTime_ == nullptr && this->domainResolveType_ == nullptr && this->endTime_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr
        && this->groupUuid_ == nullptr && this->hitLastTime_ == nullptr && this->hitTimes_ == nullptr && this->ipVersion_ == nullptr && this->modifyTime_ == nullptr
        && this->natGatewayId_ == nullptr && this->order_ == nullptr && this->proto_ == nullptr && this->referenceCount_ == nullptr && this->release_ == nullptr
        && this->repeatDays_ == nullptr && this->repeatEndTime_ == nullptr && this->repeatStartTime_ == nullptr && this->repeatType_ == nullptr && this->source_ == nullptr
        && this->sourceGroupCidrs_ == nullptr && this->sourceGroupType_ == nullptr && this->sourceType_ == nullptr && this->spreadCnt_ == nullptr && this->startTime_ == nullptr
        && this->tagList_ == nullptr && this->tagRelation_ == nullptr && this->vpcFirewallId_ == nullptr; };
          // aclAction Field Functions 
          bool hasAclAction() const { return this->aclAction_ != nullptr;};
          void deleteAclAction() { this->aclAction_ = nullptr;};
          inline string getAclAction() const { DARABONBA_PTR_GET_DEFAULT(aclAction_, "") };
          inline Acl& setAclAction(string aclAction) { DARABONBA_PTR_SET_VALUE(aclAction_, aclAction) };


          // aclUuid Field Functions 
          bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
          void deleteAclUuid() { this->aclUuid_ = nullptr;};
          inline string getAclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
          inline Acl& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


          // addressList Field Functions 
          bool hasAddressList() const { return this->addressList_ != nullptr;};
          void deleteAddressList() { this->addressList_ = nullptr;};
          inline const vector<string> & getAddressList() const { DARABONBA_PTR_GET_CONST(addressList_, vector<string>) };
          inline vector<string> getAddressList() { DARABONBA_PTR_GET(addressList_, vector<string>) };
          inline Acl& setAddressList(const vector<string> & addressList) { DARABONBA_PTR_SET_VALUE(addressList_, addressList) };
          inline Acl& setAddressList(vector<string> && addressList) { DARABONBA_PTR_SET_RVALUE(addressList_, addressList) };


          // addressListCount Field Functions 
          bool hasAddressListCount() const { return this->addressListCount_ != nullptr;};
          void deleteAddressListCount() { this->addressListCount_ = nullptr;};
          inline int32_t getAddressListCount() const { DARABONBA_PTR_GET_DEFAULT(addressListCount_, 0) };
          inline Acl& setAddressListCount(int32_t addressListCount) { DARABONBA_PTR_SET_VALUE(addressListCount_, addressListCount) };


          // addresses Field Functions 
          bool hasAddresses() const { return this->addresses_ != nullptr;};
          void deleteAddresses() { this->addresses_ = nullptr;};
          inline const vector<Acl::Addresses> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<Acl::Addresses>) };
          inline vector<Acl::Addresses> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<Acl::Addresses>) };
          inline Acl& setAddresses(const vector<Acl::Addresses> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
          inline Acl& setAddresses(vector<Acl::Addresses> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


          // applicationId Field Functions 
          bool hasApplicationId() const { return this->applicationId_ != nullptr;};
          void deleteApplicationId() { this->applicationId_ = nullptr;};
          inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
          inline Acl& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


          // applicationName Field Functions 
          bool hasApplicationName() const { return this->applicationName_ != nullptr;};
          void deleteApplicationName() { this->applicationName_ = nullptr;};
          inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
          inline Acl& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


          // applicationNameList Field Functions 
          bool hasApplicationNameList() const { return this->applicationNameList_ != nullptr;};
          void deleteApplicationNameList() { this->applicationNameList_ = nullptr;};
          inline const vector<string> & getApplicationNameList() const { DARABONBA_PTR_GET_CONST(applicationNameList_, vector<string>) };
          inline vector<string> getApplicationNameList() { DARABONBA_PTR_GET(applicationNameList_, vector<string>) };
          inline Acl& setApplicationNameList(const vector<string> & applicationNameList) { DARABONBA_PTR_SET_VALUE(applicationNameList_, applicationNameList) };
          inline Acl& setApplicationNameList(vector<string> && applicationNameList) { DARABONBA_PTR_SET_RVALUE(applicationNameList_, applicationNameList) };


          // autoAddTagEcs Field Functions 
          bool hasAutoAddTagEcs() const { return this->autoAddTagEcs_ != nullptr;};
          void deleteAutoAddTagEcs() { this->autoAddTagEcs_ = nullptr;};
          inline int32_t getAutoAddTagEcs() const { DARABONBA_PTR_GET_DEFAULT(autoAddTagEcs_, 0) };
          inline Acl& setAutoAddTagEcs(int32_t autoAddTagEcs) { DARABONBA_PTR_SET_VALUE(autoAddTagEcs_, autoAddTagEcs) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline Acl& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Acl& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // destPort Field Functions 
          bool hasDestPort() const { return this->destPort_ != nullptr;};
          void deleteDestPort() { this->destPort_ = nullptr;};
          inline string getDestPort() const { DARABONBA_PTR_GET_DEFAULT(destPort_, "") };
          inline Acl& setDestPort(string destPort) { DARABONBA_PTR_SET_VALUE(destPort_, destPort) };


          // destPortGroup Field Functions 
          bool hasDestPortGroup() const { return this->destPortGroup_ != nullptr;};
          void deleteDestPortGroup() { this->destPortGroup_ = nullptr;};
          inline string getDestPortGroup() const { DARABONBA_PTR_GET_DEFAULT(destPortGroup_, "") };
          inline Acl& setDestPortGroup(string destPortGroup) { DARABONBA_PTR_SET_VALUE(destPortGroup_, destPortGroup) };


          // destPortGroupPorts Field Functions 
          bool hasDestPortGroupPorts() const { return this->destPortGroupPorts_ != nullptr;};
          void deleteDestPortGroupPorts() { this->destPortGroupPorts_ = nullptr;};
          inline const vector<string> & getDestPortGroupPorts() const { DARABONBA_PTR_GET_CONST(destPortGroupPorts_, vector<string>) };
          inline vector<string> getDestPortGroupPorts() { DARABONBA_PTR_GET(destPortGroupPorts_, vector<string>) };
          inline Acl& setDestPortGroupPorts(const vector<string> & destPortGroupPorts) { DARABONBA_PTR_SET_VALUE(destPortGroupPorts_, destPortGroupPorts) };
          inline Acl& setDestPortGroupPorts(vector<string> && destPortGroupPorts) { DARABONBA_PTR_SET_RVALUE(destPortGroupPorts_, destPortGroupPorts) };


          // destPortType Field Functions 
          bool hasDestPortType() const { return this->destPortType_ != nullptr;};
          void deleteDestPortType() { this->destPortType_ = nullptr;};
          inline string getDestPortType() const { DARABONBA_PTR_GET_DEFAULT(destPortType_, "") };
          inline Acl& setDestPortType(string destPortType) { DARABONBA_PTR_SET_VALUE(destPortType_, destPortType) };


          // destination Field Functions 
          bool hasDestination() const { return this->destination_ != nullptr;};
          void deleteDestination() { this->destination_ = nullptr;};
          inline string getDestination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
          inline Acl& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


          // destinationGroupCidrs Field Functions 
          bool hasDestinationGroupCidrs() const { return this->destinationGroupCidrs_ != nullptr;};
          void deleteDestinationGroupCidrs() { this->destinationGroupCidrs_ = nullptr;};
          inline const vector<string> & getDestinationGroupCidrs() const { DARABONBA_PTR_GET_CONST(destinationGroupCidrs_, vector<string>) };
          inline vector<string> getDestinationGroupCidrs() { DARABONBA_PTR_GET(destinationGroupCidrs_, vector<string>) };
          inline Acl& setDestinationGroupCidrs(const vector<string> & destinationGroupCidrs) { DARABONBA_PTR_SET_VALUE(destinationGroupCidrs_, destinationGroupCidrs) };
          inline Acl& setDestinationGroupCidrs(vector<string> && destinationGroupCidrs) { DARABONBA_PTR_SET_RVALUE(destinationGroupCidrs_, destinationGroupCidrs) };


          // destinationGroupType Field Functions 
          bool hasDestinationGroupType() const { return this->destinationGroupType_ != nullptr;};
          void deleteDestinationGroupType() { this->destinationGroupType_ = nullptr;};
          inline string getDestinationGroupType() const { DARABONBA_PTR_GET_DEFAULT(destinationGroupType_, "") };
          inline Acl& setDestinationGroupType(string destinationGroupType) { DARABONBA_PTR_SET_VALUE(destinationGroupType_, destinationGroupType) };


          // destinationType Field Functions 
          bool hasDestinationType() const { return this->destinationType_ != nullptr;};
          void deleteDestinationType() { this->destinationType_ = nullptr;};
          inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
          inline Acl& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


          // direction Field Functions 
          bool hasDirection() const { return this->direction_ != nullptr;};
          void deleteDirection() { this->direction_ = nullptr;};
          inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
          inline Acl& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


          // dnsResult Field Functions 
          bool hasDnsResult() const { return this->dnsResult_ != nullptr;};
          void deleteDnsResult() { this->dnsResult_ = nullptr;};
          inline string getDnsResult() const { DARABONBA_PTR_GET_DEFAULT(dnsResult_, "") };
          inline Acl& setDnsResult(string dnsResult) { DARABONBA_PTR_SET_VALUE(dnsResult_, dnsResult) };


          // dnsResultTime Field Functions 
          bool hasDnsResultTime() const { return this->dnsResultTime_ != nullptr;};
          void deleteDnsResultTime() { this->dnsResultTime_ = nullptr;};
          inline int64_t getDnsResultTime() const { DARABONBA_PTR_GET_DEFAULT(dnsResultTime_, 0L) };
          inline Acl& setDnsResultTime(int64_t dnsResultTime) { DARABONBA_PTR_SET_VALUE(dnsResultTime_, dnsResultTime) };


          // domainResolveType Field Functions 
          bool hasDomainResolveType() const { return this->domainResolveType_ != nullptr;};
          void deleteDomainResolveType() { this->domainResolveType_ = nullptr;};
          inline int32_t getDomainResolveType() const { DARABONBA_PTR_GET_DEFAULT(domainResolveType_, 0) };
          inline Acl& setDomainResolveType(int32_t domainResolveType) { DARABONBA_PTR_SET_VALUE(domainResolveType_, domainResolveType) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline Acl& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // groupName Field Functions 
          bool hasGroupName() const { return this->groupName_ != nullptr;};
          void deleteGroupName() { this->groupName_ = nullptr;};
          inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
          inline Acl& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


          // groupType Field Functions 
          bool hasGroupType() const { return this->groupType_ != nullptr;};
          void deleteGroupType() { this->groupType_ = nullptr;};
          inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
          inline Acl& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


          // groupUuid Field Functions 
          bool hasGroupUuid() const { return this->groupUuid_ != nullptr;};
          void deleteGroupUuid() { this->groupUuid_ = nullptr;};
          inline string getGroupUuid() const { DARABONBA_PTR_GET_DEFAULT(groupUuid_, "") };
          inline Acl& setGroupUuid(string groupUuid) { DARABONBA_PTR_SET_VALUE(groupUuid_, groupUuid) };


          // hitLastTime Field Functions 
          bool hasHitLastTime() const { return this->hitLastTime_ != nullptr;};
          void deleteHitLastTime() { this->hitLastTime_ = nullptr;};
          inline int64_t getHitLastTime() const { DARABONBA_PTR_GET_DEFAULT(hitLastTime_, 0L) };
          inline Acl& setHitLastTime(int64_t hitLastTime) { DARABONBA_PTR_SET_VALUE(hitLastTime_, hitLastTime) };


          // hitTimes Field Functions 
          bool hasHitTimes() const { return this->hitTimes_ != nullptr;};
          void deleteHitTimes() { this->hitTimes_ = nullptr;};
          inline int64_t getHitTimes() const { DARABONBA_PTR_GET_DEFAULT(hitTimes_, 0L) };
          inline Acl& setHitTimes(int64_t hitTimes) { DARABONBA_PTR_SET_VALUE(hitTimes_, hitTimes) };


          // ipVersion Field Functions 
          bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
          void deleteIpVersion() { this->ipVersion_ = nullptr;};
          inline int32_t getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, 0) };
          inline Acl& setIpVersion(int32_t ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


          // modifyTime Field Functions 
          bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
          void deleteModifyTime() { this->modifyTime_ = nullptr;};
          inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
          inline Acl& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


          // natGatewayId Field Functions 
          bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
          void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
          inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
          inline Acl& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


          // order Field Functions 
          bool hasOrder() const { return this->order_ != nullptr;};
          void deleteOrder() { this->order_ = nullptr;};
          inline int32_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
          inline Acl& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


          // proto Field Functions 
          bool hasProto() const { return this->proto_ != nullptr;};
          void deleteProto() { this->proto_ = nullptr;};
          inline string getProto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
          inline Acl& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


          // referenceCount Field Functions 
          bool hasReferenceCount() const { return this->referenceCount_ != nullptr;};
          void deleteReferenceCount() { this->referenceCount_ = nullptr;};
          inline int32_t getReferenceCount() const { DARABONBA_PTR_GET_DEFAULT(referenceCount_, 0) };
          inline Acl& setReferenceCount(int32_t referenceCount) { DARABONBA_PTR_SET_VALUE(referenceCount_, referenceCount) };


          // release Field Functions 
          bool hasRelease() const { return this->release_ != nullptr;};
          void deleteRelease() { this->release_ = nullptr;};
          inline string getRelease() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
          inline Acl& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


          // repeatDays Field Functions 
          bool hasRepeatDays() const { return this->repeatDays_ != nullptr;};
          void deleteRepeatDays() { this->repeatDays_ = nullptr;};
          inline const vector<int64_t> & getRepeatDays() const { DARABONBA_PTR_GET_CONST(repeatDays_, vector<int64_t>) };
          inline vector<int64_t> getRepeatDays() { DARABONBA_PTR_GET(repeatDays_, vector<int64_t>) };
          inline Acl& setRepeatDays(const vector<int64_t> & repeatDays) { DARABONBA_PTR_SET_VALUE(repeatDays_, repeatDays) };
          inline Acl& setRepeatDays(vector<int64_t> && repeatDays) { DARABONBA_PTR_SET_RVALUE(repeatDays_, repeatDays) };


          // repeatEndTime Field Functions 
          bool hasRepeatEndTime() const { return this->repeatEndTime_ != nullptr;};
          void deleteRepeatEndTime() { this->repeatEndTime_ = nullptr;};
          inline string getRepeatEndTime() const { DARABONBA_PTR_GET_DEFAULT(repeatEndTime_, "") };
          inline Acl& setRepeatEndTime(string repeatEndTime) { DARABONBA_PTR_SET_VALUE(repeatEndTime_, repeatEndTime) };


          // repeatStartTime Field Functions 
          bool hasRepeatStartTime() const { return this->repeatStartTime_ != nullptr;};
          void deleteRepeatStartTime() { this->repeatStartTime_ = nullptr;};
          inline string getRepeatStartTime() const { DARABONBA_PTR_GET_DEFAULT(repeatStartTime_, "") };
          inline Acl& setRepeatStartTime(string repeatStartTime) { DARABONBA_PTR_SET_VALUE(repeatStartTime_, repeatStartTime) };


          // repeatType Field Functions 
          bool hasRepeatType() const { return this->repeatType_ != nullptr;};
          void deleteRepeatType() { this->repeatType_ = nullptr;};
          inline string getRepeatType() const { DARABONBA_PTR_GET_DEFAULT(repeatType_, "") };
          inline Acl& setRepeatType(string repeatType) { DARABONBA_PTR_SET_VALUE(repeatType_, repeatType) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline Acl& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // sourceGroupCidrs Field Functions 
          bool hasSourceGroupCidrs() const { return this->sourceGroupCidrs_ != nullptr;};
          void deleteSourceGroupCidrs() { this->sourceGroupCidrs_ = nullptr;};
          inline const vector<string> & getSourceGroupCidrs() const { DARABONBA_PTR_GET_CONST(sourceGroupCidrs_, vector<string>) };
          inline vector<string> getSourceGroupCidrs() { DARABONBA_PTR_GET(sourceGroupCidrs_, vector<string>) };
          inline Acl& setSourceGroupCidrs(const vector<string> & sourceGroupCidrs) { DARABONBA_PTR_SET_VALUE(sourceGroupCidrs_, sourceGroupCidrs) };
          inline Acl& setSourceGroupCidrs(vector<string> && sourceGroupCidrs) { DARABONBA_PTR_SET_RVALUE(sourceGroupCidrs_, sourceGroupCidrs) };


          // sourceGroupType Field Functions 
          bool hasSourceGroupType() const { return this->sourceGroupType_ != nullptr;};
          void deleteSourceGroupType() { this->sourceGroupType_ = nullptr;};
          inline string getSourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupType_, "") };
          inline Acl& setSourceGroupType(string sourceGroupType) { DARABONBA_PTR_SET_VALUE(sourceGroupType_, sourceGroupType) };


          // sourceType Field Functions 
          bool hasSourceType() const { return this->sourceType_ != nullptr;};
          void deleteSourceType() { this->sourceType_ = nullptr;};
          inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
          inline Acl& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


          // spreadCnt Field Functions 
          bool hasSpreadCnt() const { return this->spreadCnt_ != nullptr;};
          void deleteSpreadCnt() { this->spreadCnt_ = nullptr;};
          inline int32_t getSpreadCnt() const { DARABONBA_PTR_GET_DEFAULT(spreadCnt_, 0) };
          inline Acl& setSpreadCnt(int32_t spreadCnt) { DARABONBA_PTR_SET_VALUE(spreadCnt_, spreadCnt) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
          inline Acl& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // tagList Field Functions 
          bool hasTagList() const { return this->tagList_ != nullptr;};
          void deleteTagList() { this->tagList_ = nullptr;};
          inline const vector<Acl::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<Acl::TagList>) };
          inline vector<Acl::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<Acl::TagList>) };
          inline Acl& setTagList(const vector<Acl::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
          inline Acl& setTagList(vector<Acl::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


          // tagRelation Field Functions 
          bool hasTagRelation() const { return this->tagRelation_ != nullptr;};
          void deleteTagRelation() { this->tagRelation_ = nullptr;};
          inline string getTagRelation() const { DARABONBA_PTR_GET_DEFAULT(tagRelation_, "") };
          inline Acl& setTagRelation(string tagRelation) { DARABONBA_PTR_SET_VALUE(tagRelation_, tagRelation) };


          // vpcFirewallId Field Functions 
          bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
          void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
          inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
          inline Acl& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


        protected:
          shared_ptr<string> aclAction_ {};
          shared_ptr<string> aclUuid_ {};
          shared_ptr<vector<string>> addressList_ {};
          shared_ptr<int32_t> addressListCount_ {};
          shared_ptr<vector<Acl::Addresses>> addresses_ {};
          shared_ptr<string> applicationId_ {};
          shared_ptr<string> applicationName_ {};
          shared_ptr<vector<string>> applicationNameList_ {};
          shared_ptr<int32_t> autoAddTagEcs_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<string> description_ {};
          shared_ptr<string> destPort_ {};
          shared_ptr<string> destPortGroup_ {};
          shared_ptr<vector<string>> destPortGroupPorts_ {};
          shared_ptr<string> destPortType_ {};
          shared_ptr<string> destination_ {};
          shared_ptr<vector<string>> destinationGroupCidrs_ {};
          shared_ptr<string> destinationGroupType_ {};
          shared_ptr<string> destinationType_ {};
          shared_ptr<string> direction_ {};
          shared_ptr<string> dnsResult_ {};
          shared_ptr<int64_t> dnsResultTime_ {};
          shared_ptr<int32_t> domainResolveType_ {};
          shared_ptr<int64_t> endTime_ {};
          shared_ptr<string> groupName_ {};
          shared_ptr<string> groupType_ {};
          shared_ptr<string> groupUuid_ {};
          shared_ptr<int64_t> hitLastTime_ {};
          shared_ptr<int64_t> hitTimes_ {};
          shared_ptr<int32_t> ipVersion_ {};
          shared_ptr<int64_t> modifyTime_ {};
          shared_ptr<string> natGatewayId_ {};
          shared_ptr<int32_t> order_ {};
          shared_ptr<string> proto_ {};
          shared_ptr<int32_t> referenceCount_ {};
          shared_ptr<string> release_ {};
          shared_ptr<vector<int64_t>> repeatDays_ {};
          shared_ptr<string> repeatEndTime_ {};
          shared_ptr<string> repeatStartTime_ {};
          shared_ptr<string> repeatType_ {};
          shared_ptr<string> source_ {};
          shared_ptr<vector<string>> sourceGroupCidrs_ {};
          shared_ptr<string> sourceGroupType_ {};
          shared_ptr<string> sourceType_ {};
          shared_ptr<int32_t> spreadCnt_ {};
          shared_ptr<int64_t> startTime_ {};
          shared_ptr<vector<Acl::TagList>> tagList_ {};
          shared_ptr<string> tagRelation_ {};
          shared_ptr<string> vpcFirewallId_ {};
        };

        virtual bool empty() const override { return this->acl_ == nullptr
        && this->aclAssessmentDetail_ == nullptr && this->aclStatus_ == nullptr; };
        // acl Field Functions 
        bool hasAcl() const { return this->acl_ != nullptr;};
        void deleteAcl() { this->acl_ = nullptr;};
        inline const Acls::Acl & getAcl() const { DARABONBA_PTR_GET_CONST(acl_, Acls::Acl) };
        inline Acls::Acl getAcl() { DARABONBA_PTR_GET(acl_, Acls::Acl) };
        inline Acls& setAcl(const Acls::Acl & acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };
        inline Acls& setAcl(Acls::Acl && acl) { DARABONBA_PTR_SET_RVALUE(acl_, acl) };


        // aclAssessmentDetail Field Functions 
        bool hasAclAssessmentDetail() const { return this->aclAssessmentDetail_ != nullptr;};
        void deleteAclAssessmentDetail() { this->aclAssessmentDetail_ = nullptr;};
        inline string getAclAssessmentDetail() const { DARABONBA_PTR_GET_DEFAULT(aclAssessmentDetail_, "") };
        inline Acls& setAclAssessmentDetail(string aclAssessmentDetail) { DARABONBA_PTR_SET_VALUE(aclAssessmentDetail_, aclAssessmentDetail) };


        // aclStatus Field Functions 
        bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
        void deleteAclStatus() { this->aclStatus_ = nullptr;};
        inline string getAclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
        inline Acls& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


      protected:
        shared_ptr<Acls::Acl> acl_ {};
        shared_ptr<string> aclAssessmentDetail_ {};
        shared_ptr<string> aclStatus_ {};
      };

      virtual bool empty() const override { return this->aclTotalCount_ == nullptr
        && this->acls_ == nullptr && this->checkName_ == nullptr && this->description_ == nullptr && this->lastCheckTime_ == nullptr && this->level_ == nullptr
        && this->recordAssessmentDetail_ == nullptr && this->taskId_ == nullptr; };
      // aclTotalCount Field Functions 
      bool hasAclTotalCount() const { return this->aclTotalCount_ != nullptr;};
      void deleteAclTotalCount() { this->aclTotalCount_ = nullptr;};
      inline int64_t getAclTotalCount() const { DARABONBA_PTR_GET_DEFAULT(aclTotalCount_, 0L) };
      inline CheckRecord& setAclTotalCount(int64_t aclTotalCount) { DARABONBA_PTR_SET_VALUE(aclTotalCount_, aclTotalCount) };


      // acls Field Functions 
      bool hasAcls() const { return this->acls_ != nullptr;};
      void deleteAcls() { this->acls_ = nullptr;};
      inline const vector<CheckRecord::Acls> & getAcls() const { DARABONBA_PTR_GET_CONST(acls_, vector<CheckRecord::Acls>) };
      inline vector<CheckRecord::Acls> getAcls() { DARABONBA_PTR_GET(acls_, vector<CheckRecord::Acls>) };
      inline CheckRecord& setAcls(const vector<CheckRecord::Acls> & acls) { DARABONBA_PTR_SET_VALUE(acls_, acls) };
      inline CheckRecord& setAcls(vector<CheckRecord::Acls> && acls) { DARABONBA_PTR_SET_RVALUE(acls_, acls) };


      // checkName Field Functions 
      bool hasCheckName() const { return this->checkName_ != nullptr;};
      void deleteCheckName() { this->checkName_ = nullptr;};
      inline string getCheckName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
      inline CheckRecord& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CheckRecord& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // lastCheckTime Field Functions 
      bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
      void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
      inline string getLastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, "") };
      inline CheckRecord& setLastCheckTime(string lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline CheckRecord& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // recordAssessmentDetail Field Functions 
      bool hasRecordAssessmentDetail() const { return this->recordAssessmentDetail_ != nullptr;};
      void deleteRecordAssessmentDetail() { this->recordAssessmentDetail_ = nullptr;};
      inline string getRecordAssessmentDetail() const { DARABONBA_PTR_GET_DEFAULT(recordAssessmentDetail_, "") };
      inline CheckRecord& setRecordAssessmentDetail(string recordAssessmentDetail) { DARABONBA_PTR_SET_VALUE(recordAssessmentDetail_, recordAssessmentDetail) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline CheckRecord& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<int64_t> aclTotalCount_ {};
      shared_ptr<vector<CheckRecord::Acls>> acls_ {};
      shared_ptr<string> checkName_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> lastCheckTime_ {};
      shared_ptr<string> level_ {};
      shared_ptr<string> recordAssessmentDetail_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->checkRecord_ == nullptr
        && this->requestId_ == nullptr; };
    // checkRecord Field Functions 
    bool hasCheckRecord() const { return this->checkRecord_ != nullptr;};
    void deleteCheckRecord() { this->checkRecord_ = nullptr;};
    inline const DescribeAclCheckResponseBody::CheckRecord & getCheckRecord() const { DARABONBA_PTR_GET_CONST(checkRecord_, DescribeAclCheckResponseBody::CheckRecord) };
    inline DescribeAclCheckResponseBody::CheckRecord getCheckRecord() { DARABONBA_PTR_GET(checkRecord_, DescribeAclCheckResponseBody::CheckRecord) };
    inline DescribeAclCheckResponseBody& setCheckRecord(const DescribeAclCheckResponseBody::CheckRecord & checkRecord) { DARABONBA_PTR_SET_VALUE(checkRecord_, checkRecord) };
    inline DescribeAclCheckResponseBody& setCheckRecord(DescribeAclCheckResponseBody::CheckRecord && checkRecord) { DARABONBA_PTR_SET_RVALUE(checkRecord_, checkRecord) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeAclCheckResponseBody::CheckRecord> checkRecord_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
