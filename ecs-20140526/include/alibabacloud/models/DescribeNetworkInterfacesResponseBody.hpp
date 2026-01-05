// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceSets, networkInterfaceSets_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceSets, networkInterfaceSets_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNetworkInterfacesResponseBody() = default ;
    DescribeNetworkInterfacesResponseBody(const DescribeNetworkInterfacesResponseBody &) = default ;
    DescribeNetworkInterfacesResponseBody(DescribeNetworkInterfacesResponseBody &&) = default ;
    DescribeNetworkInterfacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfacesResponseBody() = default ;
    DescribeNetworkInterfacesResponseBody& operator=(const DescribeNetworkInterfacesResponseBody &) = default ;
    DescribeNetworkInterfacesResponseBody& operator=(DescribeNetworkInterfacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkInterfaceSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInterfaceSets& obj) { 
        DARABONBA_PTR_TO_JSON(NetworkInterfaceSet, networkInterfaceSet_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInterfaceSets& obj) { 
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceSet, networkInterfaceSet_);
      };
      NetworkInterfaceSets() = default ;
      NetworkInterfaceSets(const NetworkInterfaceSets &) = default ;
      NetworkInterfaceSets(NetworkInterfaceSets &&) = default ;
      NetworkInterfaceSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkInterfaceSets() = default ;
      NetworkInterfaceSets& operator=(const NetworkInterfaceSets &) = default ;
      NetworkInterfaceSets& operator=(NetworkInterfaceSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NetworkInterfaceSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkInterfaceSet& obj) { 
          DARABONBA_PTR_TO_JSON(AssociatedPublicIp, associatedPublicIp_);
          DARABONBA_PTR_TO_JSON(Attachment, attachment_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DeleteOnRelease, deleteOnRelease_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Ipv4PrefixSets, ipv4PrefixSets_);
          DARABONBA_PTR_TO_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
          DARABONBA_PTR_TO_JSON(Ipv6Sets, ipv6Sets_);
          DARABONBA_PTR_TO_JSON(MacAddress, macAddress_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
          DARABONBA_PTR_TO_JSON(PrivateIpSets, privateIpSets_);
          DARABONBA_PTR_TO_JSON(QueueNumber, queueNumber_);
          DARABONBA_PTR_TO_JSON(QueuePairNumber, queuePairNumber_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
          DARABONBA_PTR_TO_JSON(ServiceID, serviceID_);
          DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
          DARABONBA_PTR_TO_JSON(SourceDestCheck, sourceDestCheck_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkInterfaceSet& obj) { 
          DARABONBA_PTR_FROM_JSON(AssociatedPublicIp, associatedPublicIp_);
          DARABONBA_PTR_FROM_JSON(Attachment, attachment_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DeleteOnRelease, deleteOnRelease_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Ipv4PrefixSets, ipv4PrefixSets_);
          DARABONBA_PTR_FROM_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
          DARABONBA_PTR_FROM_JSON(Ipv6Sets, ipv6Sets_);
          DARABONBA_PTR_FROM_JSON(MacAddress, macAddress_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
          DARABONBA_PTR_FROM_JSON(PrivateIpSets, privateIpSets_);
          DARABONBA_PTR_FROM_JSON(QueueNumber, queueNumber_);
          DARABONBA_PTR_FROM_JSON(QueuePairNumber, queuePairNumber_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
          DARABONBA_PTR_FROM_JSON(ServiceID, serviceID_);
          DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
          DARABONBA_PTR_FROM_JSON(SourceDestCheck, sourceDestCheck_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        NetworkInterfaceSet() = default ;
        NetworkInterfaceSet(const NetworkInterfaceSet &) = default ;
        NetworkInterfaceSet(NetworkInterfaceSet &&) = default ;
        NetworkInterfaceSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkInterfaceSet() = default ;
        NetworkInterfaceSet& operator=(const NetworkInterfaceSet &) = default ;
        NetworkInterfaceSet& operator=(NetworkInterfaceSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
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
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            // The tag key.
            shared_ptr<string> tagKey_ {};
            // The tag value.
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class SecurityGroupIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecurityGroupIds& obj) { 
            DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          };
          friend void from_json(const Darabonba::Json& j, SecurityGroupIds& obj) { 
            DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          };
          SecurityGroupIds() = default ;
          SecurityGroupIds(const SecurityGroupIds &) = default ;
          SecurityGroupIds(SecurityGroupIds &&) = default ;
          SecurityGroupIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecurityGroupIds() = default ;
          SecurityGroupIds& operator=(const SecurityGroupIds &) = default ;
          SecurityGroupIds& operator=(SecurityGroupIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->securityGroupId_ == nullptr; };
          // securityGroupId Field Functions 
          bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
          void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
          inline const vector<string> & getSecurityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, vector<string>) };
          inline vector<string> getSecurityGroupId() { DARABONBA_PTR_GET(securityGroupId_, vector<string>) };
          inline SecurityGroupIds& setSecurityGroupId(const vector<string> & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
          inline SecurityGroupIds& setSecurityGroupId(vector<string> && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


        protected:
          shared_ptr<vector<string>> securityGroupId_ {};
        };

        class PrivateIpSets : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrivateIpSets& obj) { 
            DARABONBA_PTR_TO_JSON(PrivateIpSet, privateIpSet_);
          };
          friend void from_json(const Darabonba::Json& j, PrivateIpSets& obj) { 
            DARABONBA_PTR_FROM_JSON(PrivateIpSet, privateIpSet_);
          };
          PrivateIpSets() = default ;
          PrivateIpSets(const PrivateIpSets &) = default ;
          PrivateIpSets(PrivateIpSets &&) = default ;
          PrivateIpSets(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrivateIpSets() = default ;
          PrivateIpSets& operator=(const PrivateIpSets &) = default ;
          PrivateIpSets& operator=(PrivateIpSets &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PrivateIpSet : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PrivateIpSet& obj) { 
              DARABONBA_PTR_TO_JSON(AssociatedPublicIp, associatedPublicIp_);
              DARABONBA_PTR_TO_JSON(Primary, primary_);
              DARABONBA_PTR_TO_JSON(PrivateDnsName, privateDnsName_);
              DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
            };
            friend void from_json(const Darabonba::Json& j, PrivateIpSet& obj) { 
              DARABONBA_PTR_FROM_JSON(AssociatedPublicIp, associatedPublicIp_);
              DARABONBA_PTR_FROM_JSON(Primary, primary_);
              DARABONBA_PTR_FROM_JSON(PrivateDnsName, privateDnsName_);
              DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
            };
            PrivateIpSet() = default ;
            PrivateIpSet(const PrivateIpSet &) = default ;
            PrivateIpSet(PrivateIpSet &&) = default ;
            PrivateIpSet(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PrivateIpSet() = default ;
            PrivateIpSet& operator=(const PrivateIpSet &) = default ;
            PrivateIpSet& operator=(PrivateIpSet &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class AssociatedPublicIp : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const AssociatedPublicIp& obj) { 
                DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
                DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
              };
              friend void from_json(const Darabonba::Json& j, AssociatedPublicIp& obj) { 
                DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
                DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
              };
              AssociatedPublicIp() = default ;
              AssociatedPublicIp(const AssociatedPublicIp &) = default ;
              AssociatedPublicIp(AssociatedPublicIp &&) = default ;
              AssociatedPublicIp(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~AssociatedPublicIp() = default ;
              AssociatedPublicIp& operator=(const AssociatedPublicIp &) = default ;
              AssociatedPublicIp& operator=(AssociatedPublicIp &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->publicIpAddress_ == nullptr; };
              // allocationId Field Functions 
              bool hasAllocationId() const { return this->allocationId_ != nullptr;};
              void deleteAllocationId() { this->allocationId_ = nullptr;};
              inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
              inline AssociatedPublicIp& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


              // publicIpAddress Field Functions 
              bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
              void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
              inline string getPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddress_, "") };
              inline AssociatedPublicIp& setPublicIpAddress(string publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };


            protected:
              // >  This parameter is in invitational preview and is not publicly available.
              shared_ptr<string> allocationId_ {};
              // The EIP.
              shared_ptr<string> publicIpAddress_ {};
            };

            virtual bool empty() const override { return this->associatedPublicIp_ == nullptr
        && this->primary_ == nullptr && this->privateDnsName_ == nullptr && this->privateIpAddress_ == nullptr; };
            // associatedPublicIp Field Functions 
            bool hasAssociatedPublicIp() const { return this->associatedPublicIp_ != nullptr;};
            void deleteAssociatedPublicIp() { this->associatedPublicIp_ = nullptr;};
            inline const PrivateIpSet::AssociatedPublicIp & getAssociatedPublicIp() const { DARABONBA_PTR_GET_CONST(associatedPublicIp_, PrivateIpSet::AssociatedPublicIp) };
            inline PrivateIpSet::AssociatedPublicIp getAssociatedPublicIp() { DARABONBA_PTR_GET(associatedPublicIp_, PrivateIpSet::AssociatedPublicIp) };
            inline PrivateIpSet& setAssociatedPublicIp(const PrivateIpSet::AssociatedPublicIp & associatedPublicIp) { DARABONBA_PTR_SET_VALUE(associatedPublicIp_, associatedPublicIp) };
            inline PrivateIpSet& setAssociatedPublicIp(PrivateIpSet::AssociatedPublicIp && associatedPublicIp) { DARABONBA_PTR_SET_RVALUE(associatedPublicIp_, associatedPublicIp) };


            // primary Field Functions 
            bool hasPrimary() const { return this->primary_ != nullptr;};
            void deletePrimary() { this->primary_ = nullptr;};
            inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
            inline PrivateIpSet& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


            // privateDnsName Field Functions 
            bool hasPrivateDnsName() const { return this->privateDnsName_ != nullptr;};
            void deletePrivateDnsName() { this->privateDnsName_ = nullptr;};
            inline string getPrivateDnsName() const { DARABONBA_PTR_GET_DEFAULT(privateDnsName_, "") };
            inline PrivateIpSet& setPrivateDnsName(string privateDnsName) { DARABONBA_PTR_SET_VALUE(privateDnsName_, privateDnsName) };


            // privateIpAddress Field Functions 
            bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
            void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
            inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
            inline PrivateIpSet& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


          protected:
            // The elastic IP address (EIP) that is associated with the private IP address.
            shared_ptr<PrivateIpSet::AssociatedPublicIp> associatedPublicIp_ {};
            // Indicates whether the private IP address is the primary private IP address. Valid values:
            // 
            // *   true: The IP address is the primary private IP address.
            // *   false: The IP address is a secondary private IP address.
            shared_ptr<bool> primary_ {};
            // The private domain name of the ECS instance.
            // 
            // >  A private domain name can be returned in a specific format only when `HostnameType` is set to `IP` or `InstanceId`.
            shared_ptr<string> privateDnsName_ {};
            // The private IP address of the ENI.
            shared_ptr<string> privateIpAddress_ {};
          };

          virtual bool empty() const override { return this->privateIpSet_ == nullptr; };
          // privateIpSet Field Functions 
          bool hasPrivateIpSet() const { return this->privateIpSet_ != nullptr;};
          void deletePrivateIpSet() { this->privateIpSet_ = nullptr;};
          inline const vector<PrivateIpSets::PrivateIpSet> & getPrivateIpSet() const { DARABONBA_PTR_GET_CONST(privateIpSet_, vector<PrivateIpSets::PrivateIpSet>) };
          inline vector<PrivateIpSets::PrivateIpSet> getPrivateIpSet() { DARABONBA_PTR_GET(privateIpSet_, vector<PrivateIpSets::PrivateIpSet>) };
          inline PrivateIpSets& setPrivateIpSet(const vector<PrivateIpSets::PrivateIpSet> & privateIpSet) { DARABONBA_PTR_SET_VALUE(privateIpSet_, privateIpSet) };
          inline PrivateIpSets& setPrivateIpSet(vector<PrivateIpSets::PrivateIpSet> && privateIpSet) { DARABONBA_PTR_SET_RVALUE(privateIpSet_, privateIpSet) };


        protected:
          shared_ptr<vector<PrivateIpSets::PrivateIpSet>> privateIpSet_ {};
        };

        class Ipv6Sets : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ipv6Sets& obj) { 
            DARABONBA_PTR_TO_JSON(Ipv6Set, ipv6Set_);
          };
          friend void from_json(const Darabonba::Json& j, Ipv6Sets& obj) { 
            DARABONBA_PTR_FROM_JSON(Ipv6Set, ipv6Set_);
          };
          Ipv6Sets() = default ;
          Ipv6Sets(const Ipv6Sets &) = default ;
          Ipv6Sets(Ipv6Sets &&) = default ;
          Ipv6Sets(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ipv6Sets() = default ;
          Ipv6Sets& operator=(const Ipv6Sets &) = default ;
          Ipv6Sets& operator=(Ipv6Sets &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Ipv6Set : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Ipv6Set& obj) { 
              DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
            };
            friend void from_json(const Darabonba::Json& j, Ipv6Set& obj) { 
              DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
            };
            Ipv6Set() = default ;
            Ipv6Set(const Ipv6Set &) = default ;
            Ipv6Set(Ipv6Set &&) = default ;
            Ipv6Set(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Ipv6Set() = default ;
            Ipv6Set& operator=(const Ipv6Set &) = default ;
            Ipv6Set& operator=(Ipv6Set &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->ipv6Address_ == nullptr; };
            // ipv6Address Field Functions 
            bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
            void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
            inline string getIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
            inline Ipv6Set& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


          protected:
            // The IPv6 address of the ENI.
            shared_ptr<string> ipv6Address_ {};
          };

          virtual bool empty() const override { return this->ipv6Set_ == nullptr; };
          // ipv6Set Field Functions 
          bool hasIpv6Set() const { return this->ipv6Set_ != nullptr;};
          void deleteIpv6Set() { this->ipv6Set_ = nullptr;};
          inline const vector<Ipv6Sets::Ipv6Set> & getIpv6Set() const { DARABONBA_PTR_GET_CONST(ipv6Set_, vector<Ipv6Sets::Ipv6Set>) };
          inline vector<Ipv6Sets::Ipv6Set> getIpv6Set() { DARABONBA_PTR_GET(ipv6Set_, vector<Ipv6Sets::Ipv6Set>) };
          inline Ipv6Sets& setIpv6Set(const vector<Ipv6Sets::Ipv6Set> & ipv6Set) { DARABONBA_PTR_SET_VALUE(ipv6Set_, ipv6Set) };
          inline Ipv6Sets& setIpv6Set(vector<Ipv6Sets::Ipv6Set> && ipv6Set) { DARABONBA_PTR_SET_RVALUE(ipv6Set_, ipv6Set) };


        protected:
          shared_ptr<vector<Ipv6Sets::Ipv6Set>> ipv6Set_ {};
        };

        class Ipv6PrefixSets : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ipv6PrefixSets& obj) { 
            DARABONBA_PTR_TO_JSON(Ipv6PrefixSet, ipv6PrefixSet_);
          };
          friend void from_json(const Darabonba::Json& j, Ipv6PrefixSets& obj) { 
            DARABONBA_PTR_FROM_JSON(Ipv6PrefixSet, ipv6PrefixSet_);
          };
          Ipv6PrefixSets() = default ;
          Ipv6PrefixSets(const Ipv6PrefixSets &) = default ;
          Ipv6PrefixSets(Ipv6PrefixSets &&) = default ;
          Ipv6PrefixSets(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ipv6PrefixSets() = default ;
          Ipv6PrefixSets& operator=(const Ipv6PrefixSets &) = default ;
          Ipv6PrefixSets& operator=(Ipv6PrefixSets &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Ipv6PrefixSet : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Ipv6PrefixSet& obj) { 
              DARABONBA_PTR_TO_JSON(Ipv6Prefix, ipv6Prefix_);
            };
            friend void from_json(const Darabonba::Json& j, Ipv6PrefixSet& obj) { 
              DARABONBA_PTR_FROM_JSON(Ipv6Prefix, ipv6Prefix_);
            };
            Ipv6PrefixSet() = default ;
            Ipv6PrefixSet(const Ipv6PrefixSet &) = default ;
            Ipv6PrefixSet(Ipv6PrefixSet &&) = default ;
            Ipv6PrefixSet(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Ipv6PrefixSet() = default ;
            Ipv6PrefixSet& operator=(const Ipv6PrefixSet &) = default ;
            Ipv6PrefixSet& operator=(Ipv6PrefixSet &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->ipv6Prefix_ == nullptr; };
            // ipv6Prefix Field Functions 
            bool hasIpv6Prefix() const { return this->ipv6Prefix_ != nullptr;};
            void deleteIpv6Prefix() { this->ipv6Prefix_ = nullptr;};
            inline string getIpv6Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv6Prefix_, "") };
            inline Ipv6PrefixSet& setIpv6Prefix(string ipv6Prefix) { DARABONBA_PTR_SET_VALUE(ipv6Prefix_, ipv6Prefix) };


          protected:
            // The IPv6 prefix of the ENI.
            shared_ptr<string> ipv6Prefix_ {};
          };

          virtual bool empty() const override { return this->ipv6PrefixSet_ == nullptr; };
          // ipv6PrefixSet Field Functions 
          bool hasIpv6PrefixSet() const { return this->ipv6PrefixSet_ != nullptr;};
          void deleteIpv6PrefixSet() { this->ipv6PrefixSet_ = nullptr;};
          inline const vector<Ipv6PrefixSets::Ipv6PrefixSet> & getIpv6PrefixSet() const { DARABONBA_PTR_GET_CONST(ipv6PrefixSet_, vector<Ipv6PrefixSets::Ipv6PrefixSet>) };
          inline vector<Ipv6PrefixSets::Ipv6PrefixSet> getIpv6PrefixSet() { DARABONBA_PTR_GET(ipv6PrefixSet_, vector<Ipv6PrefixSets::Ipv6PrefixSet>) };
          inline Ipv6PrefixSets& setIpv6PrefixSet(const vector<Ipv6PrefixSets::Ipv6PrefixSet> & ipv6PrefixSet) { DARABONBA_PTR_SET_VALUE(ipv6PrefixSet_, ipv6PrefixSet) };
          inline Ipv6PrefixSets& setIpv6PrefixSet(vector<Ipv6PrefixSets::Ipv6PrefixSet> && ipv6PrefixSet) { DARABONBA_PTR_SET_RVALUE(ipv6PrefixSet_, ipv6PrefixSet) };


        protected:
          shared_ptr<vector<Ipv6PrefixSets::Ipv6PrefixSet>> ipv6PrefixSet_ {};
        };

        class Ipv4PrefixSets : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ipv4PrefixSets& obj) { 
            DARABONBA_PTR_TO_JSON(Ipv4PrefixSet, ipv4PrefixSet_);
          };
          friend void from_json(const Darabonba::Json& j, Ipv4PrefixSets& obj) { 
            DARABONBA_PTR_FROM_JSON(Ipv4PrefixSet, ipv4PrefixSet_);
          };
          Ipv4PrefixSets() = default ;
          Ipv4PrefixSets(const Ipv4PrefixSets &) = default ;
          Ipv4PrefixSets(Ipv4PrefixSets &&) = default ;
          Ipv4PrefixSets(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ipv4PrefixSets() = default ;
          Ipv4PrefixSets& operator=(const Ipv4PrefixSets &) = default ;
          Ipv4PrefixSets& operator=(Ipv4PrefixSets &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Ipv4PrefixSet : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Ipv4PrefixSet& obj) { 
              DARABONBA_PTR_TO_JSON(Ipv4Prefix, ipv4Prefix_);
            };
            friend void from_json(const Darabonba::Json& j, Ipv4PrefixSet& obj) { 
              DARABONBA_PTR_FROM_JSON(Ipv4Prefix, ipv4Prefix_);
            };
            Ipv4PrefixSet() = default ;
            Ipv4PrefixSet(const Ipv4PrefixSet &) = default ;
            Ipv4PrefixSet(Ipv4PrefixSet &&) = default ;
            Ipv4PrefixSet(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Ipv4PrefixSet() = default ;
            Ipv4PrefixSet& operator=(const Ipv4PrefixSet &) = default ;
            Ipv4PrefixSet& operator=(Ipv4PrefixSet &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->ipv4Prefix_ == nullptr; };
            // ipv4Prefix Field Functions 
            bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
            void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
            inline string getIpv4Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv4Prefix_, "") };
            inline Ipv4PrefixSet& setIpv4Prefix(string ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };


          protected:
            // The IPv4 prefix of the ENI.
            shared_ptr<string> ipv4Prefix_ {};
          };

          virtual bool empty() const override { return this->ipv4PrefixSet_ == nullptr; };
          // ipv4PrefixSet Field Functions 
          bool hasIpv4PrefixSet() const { return this->ipv4PrefixSet_ != nullptr;};
          void deleteIpv4PrefixSet() { this->ipv4PrefixSet_ = nullptr;};
          inline const vector<Ipv4PrefixSets::Ipv4PrefixSet> & getIpv4PrefixSet() const { DARABONBA_PTR_GET_CONST(ipv4PrefixSet_, vector<Ipv4PrefixSets::Ipv4PrefixSet>) };
          inline vector<Ipv4PrefixSets::Ipv4PrefixSet> getIpv4PrefixSet() { DARABONBA_PTR_GET(ipv4PrefixSet_, vector<Ipv4PrefixSets::Ipv4PrefixSet>) };
          inline Ipv4PrefixSets& setIpv4PrefixSet(const vector<Ipv4PrefixSets::Ipv4PrefixSet> & ipv4PrefixSet) { DARABONBA_PTR_SET_VALUE(ipv4PrefixSet_, ipv4PrefixSet) };
          inline Ipv4PrefixSets& setIpv4PrefixSet(vector<Ipv4PrefixSets::Ipv4PrefixSet> && ipv4PrefixSet) { DARABONBA_PTR_SET_RVALUE(ipv4PrefixSet_, ipv4PrefixSet) };


        protected:
          shared_ptr<vector<Ipv4PrefixSets::Ipv4PrefixSet>> ipv4PrefixSet_ {};
        };

        class Attachment : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Attachment& obj) { 
            DARABONBA_PTR_TO_JSON(DeviceIndex, deviceIndex_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(NetworkCardIndex, networkCardIndex_);
            DARABONBA_PTR_TO_JSON(TrunkNetworkInterfaceId, trunkNetworkInterfaceId_);
          };
          friend void from_json(const Darabonba::Json& j, Attachment& obj) { 
            DARABONBA_PTR_FROM_JSON(DeviceIndex, deviceIndex_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(NetworkCardIndex, networkCardIndex_);
            DARABONBA_PTR_FROM_JSON(TrunkNetworkInterfaceId, trunkNetworkInterfaceId_);
          };
          Attachment() = default ;
          Attachment(const Attachment &) = default ;
          Attachment(Attachment &&) = default ;
          Attachment(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Attachment() = default ;
          Attachment& operator=(const Attachment &) = default ;
          Attachment& operator=(Attachment &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->deviceIndex_ == nullptr
        && this->instanceId_ == nullptr && this->networkCardIndex_ == nullptr && this->trunkNetworkInterfaceId_ == nullptr; };
          // deviceIndex Field Functions 
          bool hasDeviceIndex() const { return this->deviceIndex_ != nullptr;};
          void deleteDeviceIndex() { this->deviceIndex_ = nullptr;};
          inline int32_t getDeviceIndex() const { DARABONBA_PTR_GET_DEFAULT(deviceIndex_, 0) };
          inline Attachment& setDeviceIndex(int32_t deviceIndex) { DARABONBA_PTR_SET_VALUE(deviceIndex_, deviceIndex) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline Attachment& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // networkCardIndex Field Functions 
          bool hasNetworkCardIndex() const { return this->networkCardIndex_ != nullptr;};
          void deleteNetworkCardIndex() { this->networkCardIndex_ = nullptr;};
          inline int32_t getNetworkCardIndex() const { DARABONBA_PTR_GET_DEFAULT(networkCardIndex_, 0) };
          inline Attachment& setNetworkCardIndex(int32_t networkCardIndex) { DARABONBA_PTR_SET_VALUE(networkCardIndex_, networkCardIndex) };


          // trunkNetworkInterfaceId Field Functions 
          bool hasTrunkNetworkInterfaceId() const { return this->trunkNetworkInterfaceId_ != nullptr;};
          void deleteTrunkNetworkInterfaceId() { this->trunkNetworkInterfaceId_ = nullptr;};
          inline string getTrunkNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(trunkNetworkInterfaceId_, "") };
          inline Attachment& setTrunkNetworkInterfaceId(string trunkNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(trunkNetworkInterfaceId_, trunkNetworkInterfaceId) };


        protected:
          // >  This parameter is in invitational preview and is not publicly available.
          shared_ptr<int32_t> deviceIndex_ {};
          // >  This parameter is in invitational preview and is not publicly available.
          shared_ptr<string> instanceId_ {};
          // The index of the network card.
          // 
          // *   If the ENI is in the Available state or if no network card index was specified when the ENI was attached, this parameter is empty.
          // *   If the ENI is in the InUse state and a network card index was specified when the ENI was attached, the specified network card index is returned as the value of this parameter.
          shared_ptr<int32_t> networkCardIndex_ {};
          // >  This parameter is in invitational preview and is not publicly available.
          shared_ptr<string> trunkNetworkInterfaceId_ {};
        };

        class AssociatedPublicIp : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AssociatedPublicIp& obj) { 
            DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
            DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
          };
          friend void from_json(const Darabonba::Json& j, AssociatedPublicIp& obj) { 
            DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
            DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
          };
          AssociatedPublicIp() = default ;
          AssociatedPublicIp(const AssociatedPublicIp &) = default ;
          AssociatedPublicIp(AssociatedPublicIp &&) = default ;
          AssociatedPublicIp(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AssociatedPublicIp() = default ;
          AssociatedPublicIp& operator=(const AssociatedPublicIp &) = default ;
          AssociatedPublicIp& operator=(AssociatedPublicIp &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->publicIpAddress_ == nullptr; };
          // allocationId Field Functions 
          bool hasAllocationId() const { return this->allocationId_ != nullptr;};
          void deleteAllocationId() { this->allocationId_ = nullptr;};
          inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
          inline AssociatedPublicIp& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


          // publicIpAddress Field Functions 
          bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
          void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
          inline string getPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddress_, "") };
          inline AssociatedPublicIp& setPublicIpAddress(string publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };


        protected:
          // >  This parameter is in invitational preview and is not publicly available.
          shared_ptr<string> allocationId_ {};
          // The EIP.
          shared_ptr<string> publicIpAddress_ {};
        };

        virtual bool empty() const override { return this->associatedPublicIp_ == nullptr
        && this->attachment_ == nullptr && this->creationTime_ == nullptr && this->deleteOnRelease_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr
        && this->ipv4PrefixSets_ == nullptr && this->ipv6PrefixSets_ == nullptr && this->ipv6Sets_ == nullptr && this->macAddress_ == nullptr && this->networkInterfaceId_ == nullptr
        && this->networkInterfaceName_ == nullptr && this->networkInterfaceTrafficMode_ == nullptr && this->ownerId_ == nullptr && this->privateIpAddress_ == nullptr && this->privateIpSets_ == nullptr
        && this->queueNumber_ == nullptr && this->queuePairNumber_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupIds_ == nullptr && this->serviceID_ == nullptr
        && this->serviceManaged_ == nullptr && this->sourceDestCheck_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // associatedPublicIp Field Functions 
        bool hasAssociatedPublicIp() const { return this->associatedPublicIp_ != nullptr;};
        void deleteAssociatedPublicIp() { this->associatedPublicIp_ = nullptr;};
        inline const NetworkInterfaceSet::AssociatedPublicIp & getAssociatedPublicIp() const { DARABONBA_PTR_GET_CONST(associatedPublicIp_, NetworkInterfaceSet::AssociatedPublicIp) };
        inline NetworkInterfaceSet::AssociatedPublicIp getAssociatedPublicIp() { DARABONBA_PTR_GET(associatedPublicIp_, NetworkInterfaceSet::AssociatedPublicIp) };
        inline NetworkInterfaceSet& setAssociatedPublicIp(const NetworkInterfaceSet::AssociatedPublicIp & associatedPublicIp) { DARABONBA_PTR_SET_VALUE(associatedPublicIp_, associatedPublicIp) };
        inline NetworkInterfaceSet& setAssociatedPublicIp(NetworkInterfaceSet::AssociatedPublicIp && associatedPublicIp) { DARABONBA_PTR_SET_RVALUE(associatedPublicIp_, associatedPublicIp) };


        // attachment Field Functions 
        bool hasAttachment() const { return this->attachment_ != nullptr;};
        void deleteAttachment() { this->attachment_ = nullptr;};
        inline const NetworkInterfaceSet::Attachment & getAttachment() const { DARABONBA_PTR_GET_CONST(attachment_, NetworkInterfaceSet::Attachment) };
        inline NetworkInterfaceSet::Attachment getAttachment() { DARABONBA_PTR_GET(attachment_, NetworkInterfaceSet::Attachment) };
        inline NetworkInterfaceSet& setAttachment(const NetworkInterfaceSet::Attachment & attachment) { DARABONBA_PTR_SET_VALUE(attachment_, attachment) };
        inline NetworkInterfaceSet& setAttachment(NetworkInterfaceSet::Attachment && attachment) { DARABONBA_PTR_SET_RVALUE(attachment_, attachment) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline NetworkInterfaceSet& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // deleteOnRelease Field Functions 
        bool hasDeleteOnRelease() const { return this->deleteOnRelease_ != nullptr;};
        void deleteDeleteOnRelease() { this->deleteOnRelease_ = nullptr;};
        inline bool getDeleteOnRelease() const { DARABONBA_PTR_GET_DEFAULT(deleteOnRelease_, false) };
        inline NetworkInterfaceSet& setDeleteOnRelease(bool deleteOnRelease) { DARABONBA_PTR_SET_VALUE(deleteOnRelease_, deleteOnRelease) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline NetworkInterfaceSet& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline NetworkInterfaceSet& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // ipv4PrefixSets Field Functions 
        bool hasIpv4PrefixSets() const { return this->ipv4PrefixSets_ != nullptr;};
        void deleteIpv4PrefixSets() { this->ipv4PrefixSets_ = nullptr;};
        inline const NetworkInterfaceSet::Ipv4PrefixSets & getIpv4PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv4PrefixSets_, NetworkInterfaceSet::Ipv4PrefixSets) };
        inline NetworkInterfaceSet::Ipv4PrefixSets getIpv4PrefixSets() { DARABONBA_PTR_GET(ipv4PrefixSets_, NetworkInterfaceSet::Ipv4PrefixSets) };
        inline NetworkInterfaceSet& setIpv4PrefixSets(const NetworkInterfaceSet::Ipv4PrefixSets & ipv4PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv4PrefixSets_, ipv4PrefixSets) };
        inline NetworkInterfaceSet& setIpv4PrefixSets(NetworkInterfaceSet::Ipv4PrefixSets && ipv4PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv4PrefixSets_, ipv4PrefixSets) };


        // ipv6PrefixSets Field Functions 
        bool hasIpv6PrefixSets() const { return this->ipv6PrefixSets_ != nullptr;};
        void deleteIpv6PrefixSets() { this->ipv6PrefixSets_ = nullptr;};
        inline const NetworkInterfaceSet::Ipv6PrefixSets & getIpv6PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv6PrefixSets_, NetworkInterfaceSet::Ipv6PrefixSets) };
        inline NetworkInterfaceSet::Ipv6PrefixSets getIpv6PrefixSets() { DARABONBA_PTR_GET(ipv6PrefixSets_, NetworkInterfaceSet::Ipv6PrefixSets) };
        inline NetworkInterfaceSet& setIpv6PrefixSets(const NetworkInterfaceSet::Ipv6PrefixSets & ipv6PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv6PrefixSets_, ipv6PrefixSets) };
        inline NetworkInterfaceSet& setIpv6PrefixSets(NetworkInterfaceSet::Ipv6PrefixSets && ipv6PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv6PrefixSets_, ipv6PrefixSets) };


        // ipv6Sets Field Functions 
        bool hasIpv6Sets() const { return this->ipv6Sets_ != nullptr;};
        void deleteIpv6Sets() { this->ipv6Sets_ = nullptr;};
        inline const NetworkInterfaceSet::Ipv6Sets & getIpv6Sets() const { DARABONBA_PTR_GET_CONST(ipv6Sets_, NetworkInterfaceSet::Ipv6Sets) };
        inline NetworkInterfaceSet::Ipv6Sets getIpv6Sets() { DARABONBA_PTR_GET(ipv6Sets_, NetworkInterfaceSet::Ipv6Sets) };
        inline NetworkInterfaceSet& setIpv6Sets(const NetworkInterfaceSet::Ipv6Sets & ipv6Sets) { DARABONBA_PTR_SET_VALUE(ipv6Sets_, ipv6Sets) };
        inline NetworkInterfaceSet& setIpv6Sets(NetworkInterfaceSet::Ipv6Sets && ipv6Sets) { DARABONBA_PTR_SET_RVALUE(ipv6Sets_, ipv6Sets) };


        // macAddress Field Functions 
        bool hasMacAddress() const { return this->macAddress_ != nullptr;};
        void deleteMacAddress() { this->macAddress_ = nullptr;};
        inline string getMacAddress() const { DARABONBA_PTR_GET_DEFAULT(macAddress_, "") };
        inline NetworkInterfaceSet& setMacAddress(string macAddress) { DARABONBA_PTR_SET_VALUE(macAddress_, macAddress) };


        // networkInterfaceId Field Functions 
        bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
        void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
        inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
        inline NetworkInterfaceSet& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


        // networkInterfaceName Field Functions 
        bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
        void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
        inline string getNetworkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
        inline NetworkInterfaceSet& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


        // networkInterfaceTrafficMode Field Functions 
        bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
        void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
        inline string getNetworkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
        inline NetworkInterfaceSet& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline NetworkInterfaceSet& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // privateIpAddress Field Functions 
        bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
        void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
        inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
        inline NetworkInterfaceSet& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


        // privateIpSets Field Functions 
        bool hasPrivateIpSets() const { return this->privateIpSets_ != nullptr;};
        void deletePrivateIpSets() { this->privateIpSets_ = nullptr;};
        inline const NetworkInterfaceSet::PrivateIpSets & getPrivateIpSets() const { DARABONBA_PTR_GET_CONST(privateIpSets_, NetworkInterfaceSet::PrivateIpSets) };
        inline NetworkInterfaceSet::PrivateIpSets getPrivateIpSets() { DARABONBA_PTR_GET(privateIpSets_, NetworkInterfaceSet::PrivateIpSets) };
        inline NetworkInterfaceSet& setPrivateIpSets(const NetworkInterfaceSet::PrivateIpSets & privateIpSets) { DARABONBA_PTR_SET_VALUE(privateIpSets_, privateIpSets) };
        inline NetworkInterfaceSet& setPrivateIpSets(NetworkInterfaceSet::PrivateIpSets && privateIpSets) { DARABONBA_PTR_SET_RVALUE(privateIpSets_, privateIpSets) };


        // queueNumber Field Functions 
        bool hasQueueNumber() const { return this->queueNumber_ != nullptr;};
        void deleteQueueNumber() { this->queueNumber_ = nullptr;};
        inline int32_t getQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(queueNumber_, 0) };
        inline NetworkInterfaceSet& setQueueNumber(int32_t queueNumber) { DARABONBA_PTR_SET_VALUE(queueNumber_, queueNumber) };


        // queuePairNumber Field Functions 
        bool hasQueuePairNumber() const { return this->queuePairNumber_ != nullptr;};
        void deleteQueuePairNumber() { this->queuePairNumber_ = nullptr;};
        inline int32_t getQueuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(queuePairNumber_, 0) };
        inline NetworkInterfaceSet& setQueuePairNumber(int32_t queuePairNumber) { DARABONBA_PTR_SET_VALUE(queuePairNumber_, queuePairNumber) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline NetworkInterfaceSet& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // securityGroupIds Field Functions 
        bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
        void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
        inline const NetworkInterfaceSet::SecurityGroupIds & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, NetworkInterfaceSet::SecurityGroupIds) };
        inline NetworkInterfaceSet::SecurityGroupIds getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, NetworkInterfaceSet::SecurityGroupIds) };
        inline NetworkInterfaceSet& setSecurityGroupIds(const NetworkInterfaceSet::SecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
        inline NetworkInterfaceSet& setSecurityGroupIds(NetworkInterfaceSet::SecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


        // serviceID Field Functions 
        bool hasServiceID() const { return this->serviceID_ != nullptr;};
        void deleteServiceID() { this->serviceID_ = nullptr;};
        inline int64_t getServiceID() const { DARABONBA_PTR_GET_DEFAULT(serviceID_, 0L) };
        inline NetworkInterfaceSet& setServiceID(int64_t serviceID) { DARABONBA_PTR_SET_VALUE(serviceID_, serviceID) };


        // serviceManaged Field Functions 
        bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
        void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
        inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
        inline NetworkInterfaceSet& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


        // sourceDestCheck Field Functions 
        bool hasSourceDestCheck() const { return this->sourceDestCheck_ != nullptr;};
        void deleteSourceDestCheck() { this->sourceDestCheck_ = nullptr;};
        inline bool getSourceDestCheck() const { DARABONBA_PTR_GET_DEFAULT(sourceDestCheck_, false) };
        inline NetworkInterfaceSet& setSourceDestCheck(bool sourceDestCheck) { DARABONBA_PTR_SET_VALUE(sourceDestCheck_, sourceDestCheck) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline NetworkInterfaceSet& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const NetworkInterfaceSet::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, NetworkInterfaceSet::Tags) };
        inline NetworkInterfaceSet::Tags getTags() { DARABONBA_PTR_GET(tags_, NetworkInterfaceSet::Tags) };
        inline NetworkInterfaceSet& setTags(const NetworkInterfaceSet::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline NetworkInterfaceSet& setTags(NetworkInterfaceSet::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline NetworkInterfaceSet& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline NetworkInterfaceSet& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline NetworkInterfaceSet& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline NetworkInterfaceSet& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The EIPs that are associated with the secondary private IP addresses of the ENI.
        shared_ptr<NetworkInterfaceSet::AssociatedPublicIp> associatedPublicIp_ {};
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<NetworkInterfaceSet::Attachment> attachment_ {};
        // The time when the security group was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // Indicates whether to retain the ENI when the associated instance is released. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> deleteOnRelease_ {};
        // The description of the ENI.
        shared_ptr<string> description_ {};
        // The ID of the Elastic Compute Service (ECS) instance to which the ENI is attached.
        // 
        // >  If the ENI is managed by other Alibaba Cloud services, no instance ID is returned.
        shared_ptr<string> instanceId_ {};
        // The IPv4 prefixes of the ENI.
        shared_ptr<NetworkInterfaceSet::Ipv4PrefixSets> ipv4PrefixSets_ {};
        // The IPv6 prefixes of the ENI.
        shared_ptr<NetworkInterfaceSet::Ipv6PrefixSets> ipv6PrefixSets_ {};
        // The IPv6 addresses of the ENI.
        shared_ptr<NetworkInterfaceSet::Ipv6Sets> ipv6Sets_ {};
        // The MAC address of the ENI.
        shared_ptr<string> macAddress_ {};
        // The ID of the ENI.
        shared_ptr<string> networkInterfaceId_ {};
        // The name of the ENI.
        shared_ptr<string> networkInterfaceName_ {};
        // The communication mode of the ENI. Valid values:
        // 
        // *   Standard: The TCP communication mode is used.
        // *   HighPerformance: The Elastic RDMA Interface (ERI) is enabled and the remote direct memory access (RDMA) communication mode is used.
        // 
        // >  This parameter can have a value of HighPerformance only when the ENI is attached to a c7re RDMA-enhanced instance that resides in Beijing Zone K.
        shared_ptr<string> networkInterfaceTrafficMode_ {};
        // The ID of the account to which the ENI belongs.
        shared_ptr<string> ownerId_ {};
        // The primary private IP address of the ENI.
        shared_ptr<string> privateIpAddress_ {};
        // Details about the private IP addresses of the ENI.
        shared_ptr<NetworkInterfaceSet::PrivateIpSets> privateIpSets_ {};
        // The number of queues supported by the ENI.
        // 
        // *   If the ENI is a secondary ENI in the InUse state and the number of queues supported by the ENI has never been modified, the default number of queues per secondary ENI that the instance type supports is returned.
        // *   If the ENI is a secondary ENI and the number of queues supported by the ENI has been modified, the new number of queues is returned.
        // *   If the ENI is a secondary ENI in the Available state and the number of queues supported by the ENI has never been modified, an empty value is returned.
        // *   If the ENI is a primary ENI, the default number of queues per primary ENI that the instance type supports is returned.
        shared_ptr<int32_t> queueNumber_ {};
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<int32_t> queuePairNumber_ {};
        // The ID of the resource group to which the ENI belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The security groups to which the ENI belongs.
        shared_ptr<NetworkInterfaceSet::SecurityGroupIds> securityGroupIds_ {};
        // The ID of the distributor to which the ENI belongs.
        shared_ptr<int64_t> serviceID_ {};
        // Indicates whether the user of the ENI is an Alibaba Cloud service or a distributor.
        shared_ptr<bool> serviceManaged_ {};
        // Indicates whether the source and destination IP address check feature is enabled. To improve network security, enable this feature. Valid values:
        // 
        // *   true
        // *   false
        // 
        // Default value: false.
        // 
        // >  Before you use this parameter, read [Source and destination IP address check](https://help.aliyun.com/document_detail/2863210.html).
        shared_ptr<bool> sourceDestCheck_ {};
        // The state of the ENI.
        shared_ptr<string> status_ {};
        // The tags of the ENI.
        shared_ptr<NetworkInterfaceSet::Tags> tags_ {};
        // The type of the ENI.
        shared_ptr<string> type_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vSwitchId_ {};
        // The ID of the VPC to which the ENI belongs.
        shared_ptr<string> vpcId_ {};
        // The zone ID of the ENI.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->networkInterfaceSet_ == nullptr; };
      // networkInterfaceSet Field Functions 
      bool hasNetworkInterfaceSet() const { return this->networkInterfaceSet_ != nullptr;};
      void deleteNetworkInterfaceSet() { this->networkInterfaceSet_ = nullptr;};
      inline const vector<NetworkInterfaceSets::NetworkInterfaceSet> & getNetworkInterfaceSet() const { DARABONBA_PTR_GET_CONST(networkInterfaceSet_, vector<NetworkInterfaceSets::NetworkInterfaceSet>) };
      inline vector<NetworkInterfaceSets::NetworkInterfaceSet> getNetworkInterfaceSet() { DARABONBA_PTR_GET(networkInterfaceSet_, vector<NetworkInterfaceSets::NetworkInterfaceSet>) };
      inline NetworkInterfaceSets& setNetworkInterfaceSet(const vector<NetworkInterfaceSets::NetworkInterfaceSet> & networkInterfaceSet) { DARABONBA_PTR_SET_VALUE(networkInterfaceSet_, networkInterfaceSet) };
      inline NetworkInterfaceSets& setNetworkInterfaceSet(vector<NetworkInterfaceSets::NetworkInterfaceSet> && networkInterfaceSet) { DARABONBA_PTR_SET_RVALUE(networkInterfaceSet_, networkInterfaceSet) };


    protected:
      shared_ptr<vector<NetworkInterfaceSets::NetworkInterfaceSet>> networkInterfaceSet_ {};
    };

    virtual bool empty() const override { return this->networkInterfaceSets_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networkInterfaceSets Field Functions 
    bool hasNetworkInterfaceSets() const { return this->networkInterfaceSets_ != nullptr;};
    void deleteNetworkInterfaceSets() { this->networkInterfaceSets_ = nullptr;};
    inline const DescribeNetworkInterfacesResponseBody::NetworkInterfaceSets & getNetworkInterfaceSets() const { DARABONBA_PTR_GET_CONST(networkInterfaceSets_, DescribeNetworkInterfacesResponseBody::NetworkInterfaceSets) };
    inline DescribeNetworkInterfacesResponseBody::NetworkInterfaceSets getNetworkInterfaceSets() { DARABONBA_PTR_GET(networkInterfaceSets_, DescribeNetworkInterfacesResponseBody::NetworkInterfaceSets) };
    inline DescribeNetworkInterfacesResponseBody& setNetworkInterfaceSets(const DescribeNetworkInterfacesResponseBody::NetworkInterfaceSets & networkInterfaceSets) { DARABONBA_PTR_SET_VALUE(networkInterfaceSets_, networkInterfaceSets) };
    inline DescribeNetworkInterfacesResponseBody& setNetworkInterfaceSets(DescribeNetworkInterfacesResponseBody::NetworkInterfaceSets && networkInterfaceSets) { DARABONBA_PTR_SET_RVALUE(networkInterfaceSets_, networkInterfaceSets) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNetworkInterfacesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeNetworkInterfacesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNetworkInterfacesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkInterfacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNetworkInterfacesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details of the ENIs.
    shared_ptr<DescribeNetworkInterfacesResponseBody::NetworkInterfaceSets> networkInterfaceSets_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The page number of the returned page.
    // 
    // > This parameter will be removed in the future. We recommend that you use the NextToken and MaxResults parameters for a paged query.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    // 
    // > This parameter will be removed in the future. We recommend that you use the NextToken and MaxResults parameters for a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of ENIs.
    // 
    // > If you specify the `MaxResults` and `NextToken` parameters to perform a paged query, the value of the `TotalCount` response parameter is invalid.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
