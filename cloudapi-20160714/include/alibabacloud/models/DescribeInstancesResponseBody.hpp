// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody(DescribeInstancesResponseBody &&) = default ;
    DescribeInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody& operator=(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody& operator=(DescribeInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceAttribute, instanceAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceAttribute, instanceAttribute_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(AclId, aclId_);
          DARABONBA_PTR_TO_JSON(AclName, aclName_);
          DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
          DARABONBA_PTR_TO_JSON(AclType, aclType_);
          DARABONBA_PTR_TO_JSON(ClassicEgressAddress, classicEgressAddress_);
          DARABONBA_PTR_TO_JSON(ConnectCidrBlocks, connectCidrBlocks_);
          DARABONBA_PTR_TO_JSON(ConnectVpcId, connectVpcId_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(DedicatedInstanceType, dedicatedInstanceType_);
          DARABONBA_PTR_TO_JSON(EgressIpv6Enable, egressIpv6Enable_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(HttpsPolicies, httpsPolicies_);
          DARABONBA_PTR_TO_JSON(IPV6AclId, IPV6AclId_);
          DARABONBA_PTR_TO_JSON(IPV6AclName, IPV6AclName_);
          DARABONBA_PTR_TO_JSON(IPV6AclStatus, IPV6AclStatus_);
          DARABONBA_PTR_TO_JSON(IPV6AclType, IPV6AclType_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(InstanceCidrBlock, instanceCidrBlock_);
          DARABONBA_PTR_TO_JSON(InstanceClusterId, instanceClusterId_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstanceRpsLimit, instanceRpsLimit_);
          DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
          DARABONBA_PTR_TO_JSON(InstanceSpecAttributes, instanceSpecAttributes_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(InternetEgressAddress, internetEgressAddress_);
          DARABONBA_PTR_TO_JSON(IntranetSegments, intranetSegments_);
          DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
          DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceAttributes, networkInterfaceAttributes_);
          DARABONBA_PTR_TO_JSON(NewVpcEgressAddress, newVpcEgressAddress_);
          DARABONBA_PTR_TO_JSON(PrivateDnsList, privateDnsList_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SupportIpv6, supportIpv6_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UserVpcId, userVpcId_);
          DARABONBA_PTR_TO_JSON(UserVswitchId, userVswitchId_);
          DARABONBA_PTR_TO_JSON(VpcEgressAddress, vpcEgressAddress_);
          DARABONBA_PTR_TO_JSON(VpcIntranetEnable, vpcIntranetEnable_);
          DARABONBA_PTR_TO_JSON(VpcOwnerId, vpcOwnerId_);
          DARABONBA_PTR_TO_JSON(VpcSlbIntranetEnable, vpcSlbIntranetEnable_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_TO_JSON(ZoneLocalName, zoneLocalName_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(AclId, aclId_);
          DARABONBA_PTR_FROM_JSON(AclName, aclName_);
          DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
          DARABONBA_PTR_FROM_JSON(AclType, aclType_);
          DARABONBA_PTR_FROM_JSON(ClassicEgressAddress, classicEgressAddress_);
          DARABONBA_PTR_FROM_JSON(ConnectCidrBlocks, connectCidrBlocks_);
          DARABONBA_PTR_FROM_JSON(ConnectVpcId, connectVpcId_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(DedicatedInstanceType, dedicatedInstanceType_);
          DARABONBA_PTR_FROM_JSON(EgressIpv6Enable, egressIpv6Enable_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(HttpsPolicies, httpsPolicies_);
          DARABONBA_PTR_FROM_JSON(IPV6AclId, IPV6AclId_);
          DARABONBA_PTR_FROM_JSON(IPV6AclName, IPV6AclName_);
          DARABONBA_PTR_FROM_JSON(IPV6AclStatus, IPV6AclStatus_);
          DARABONBA_PTR_FROM_JSON(IPV6AclType, IPV6AclType_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(InstanceCidrBlock, instanceCidrBlock_);
          DARABONBA_PTR_FROM_JSON(InstanceClusterId, instanceClusterId_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceRpsLimit, instanceRpsLimit_);
          DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
          DARABONBA_PTR_FROM_JSON(InstanceSpecAttributes, instanceSpecAttributes_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(InternetEgressAddress, internetEgressAddress_);
          DARABONBA_PTR_FROM_JSON(IntranetSegments, intranetSegments_);
          DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
          DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceAttributes, networkInterfaceAttributes_);
          DARABONBA_PTR_FROM_JSON(NewVpcEgressAddress, newVpcEgressAddress_);
          DARABONBA_PTR_FROM_JSON(PrivateDnsList, privateDnsList_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SupportIpv6, supportIpv6_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UserVpcId, userVpcId_);
          DARABONBA_PTR_FROM_JSON(UserVswitchId, userVswitchId_);
          DARABONBA_PTR_FROM_JSON(VpcEgressAddress, vpcEgressAddress_);
          DARABONBA_PTR_FROM_JSON(VpcIntranetEnable, vpcIntranetEnable_);
          DARABONBA_PTR_FROM_JSON(VpcOwnerId, vpcOwnerId_);
          DARABONBA_PTR_FROM_JSON(VpcSlbIntranetEnable, vpcSlbIntranetEnable_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_FROM_JSON(ZoneLocalName, zoneLocalName_);
        };
        InstanceAttribute() = default ;
        InstanceAttribute(const InstanceAttribute &) = default ;
        InstanceAttribute(InstanceAttribute &&) = default ;
        InstanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceAttribute() = default ;
        InstanceAttribute& operator=(const InstanceAttribute &) = default ;
        InstanceAttribute& operator=(InstanceAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagInfo, tagInfo_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagInfo, tagInfo_);
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
          class TagInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagInfo() = default ;
            TagInfo(const TagInfo &) = default ;
            TagInfo(TagInfo &&) = default ;
            TagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagInfo() = default ;
            TagInfo& operator=(const TagInfo &) = default ;
            TagInfo& operator=(TagInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline TagInfo& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key of the instance.
            shared_ptr<string> key_ {};
            // The tag value of the instance.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tagInfo_ == nullptr; };
          // tagInfo Field Functions 
          bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
          void deleteTagInfo() { this->tagInfo_ = nullptr;};
          inline const vector<Tags::TagInfo> & getTagInfo() const { DARABONBA_PTR_GET_CONST(tagInfo_, vector<Tags::TagInfo>) };
          inline vector<Tags::TagInfo> getTagInfo() { DARABONBA_PTR_GET(tagInfo_, vector<Tags::TagInfo>) };
          inline Tags& setTagInfo(const vector<Tags::TagInfo> & tagInfo) { DARABONBA_PTR_SET_VALUE(tagInfo_, tagInfo) };
          inline Tags& setTagInfo(vector<Tags::TagInfo> && tagInfo) { DARABONBA_PTR_SET_RVALUE(tagInfo_, tagInfo) };


        protected:
          shared_ptr<vector<Tags::TagInfo>> tagInfo_ {};
        };

        class PrivateDnsList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrivateDnsList& obj) { 
            DARABONBA_PTR_TO_JSON(PrivateDns, privateDns_);
          };
          friend void from_json(const Darabonba::Json& j, PrivateDnsList& obj) { 
            DARABONBA_PTR_FROM_JSON(PrivateDns, privateDns_);
          };
          PrivateDnsList() = default ;
          PrivateDnsList(const PrivateDnsList &) = default ;
          PrivateDnsList(PrivateDnsList &&) = default ;
          PrivateDnsList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrivateDnsList() = default ;
          PrivateDnsList& operator=(const PrivateDnsList &) = default ;
          PrivateDnsList& operator=(PrivateDnsList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->privateDns_ == nullptr; };
          // privateDns Field Functions 
          bool hasPrivateDns() const { return this->privateDns_ != nullptr;};
          void deletePrivateDns() { this->privateDns_ = nullptr;};
          inline const vector<string> & getPrivateDns() const { DARABONBA_PTR_GET_CONST(privateDns_, vector<string>) };
          inline vector<string> getPrivateDns() { DARABONBA_PTR_GET(privateDns_, vector<string>) };
          inline PrivateDnsList& setPrivateDns(const vector<string> & privateDns) { DARABONBA_PTR_SET_VALUE(privateDns_, privateDns) };
          inline PrivateDnsList& setPrivateDns(vector<string> && privateDns) { DARABONBA_PTR_SET_RVALUE(privateDns_, privateDns) };


        protected:
          shared_ptr<vector<string>> privateDns_ {};
        };

        class NetworkInterfaceAttributes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkInterfaceAttributes& obj) { 
            DARABONBA_PTR_TO_JSON(NetworkInterfaceAttribute, networkInterfaceAttribute_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkInterfaceAttributes& obj) { 
            DARABONBA_PTR_FROM_JSON(NetworkInterfaceAttribute, networkInterfaceAttribute_);
          };
          NetworkInterfaceAttributes() = default ;
          NetworkInterfaceAttributes(const NetworkInterfaceAttributes &) = default ;
          NetworkInterfaceAttributes(NetworkInterfaceAttributes &&) = default ;
          NetworkInterfaceAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkInterfaceAttributes() = default ;
          NetworkInterfaceAttributes& operator=(const NetworkInterfaceAttributes &) = default ;
          NetworkInterfaceAttributes& operator=(NetworkInterfaceAttributes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class NetworkInterfaceAttribute : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const NetworkInterfaceAttribute& obj) { 
              DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
              DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
              DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
              DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
            };
            friend void from_json(const Darabonba::Json& j, NetworkInterfaceAttribute& obj) { 
              DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
              DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
              DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
              DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
            };
            NetworkInterfaceAttribute() = default ;
            NetworkInterfaceAttribute(const NetworkInterfaceAttribute &) = default ;
            NetworkInterfaceAttribute(NetworkInterfaceAttribute &&) = default ;
            NetworkInterfaceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~NetworkInterfaceAttribute() = default ;
            NetworkInterfaceAttribute& operator=(const NetworkInterfaceAttribute &) = default ;
            NetworkInterfaceAttribute& operator=(NetworkInterfaceAttribute &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->securityGroupId_ == nullptr && this->vswitchId_ == nullptr && this->zoneId_ == nullptr; };
            // cidrBlock Field Functions 
            bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
            void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
            inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
            inline NetworkInterfaceAttribute& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


            // securityGroupId Field Functions 
            bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
            void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
            inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
            inline NetworkInterfaceAttribute& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


            // vswitchId Field Functions 
            bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
            void deleteVswitchId() { this->vswitchId_ = nullptr;};
            inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
            inline NetworkInterfaceAttribute& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


            // zoneId Field Functions 
            bool hasZoneId() const { return this->zoneId_ != nullptr;};
            void deleteZoneId() { this->zoneId_ = nullptr;};
            inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
            inline NetworkInterfaceAttribute& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


          protected:
            // The CIDR block of the vSwitch.
            shared_ptr<string> cidrBlock_ {};
            // The security group ID. Services in the same security group can access each other.
            shared_ptr<string> securityGroupId_ {};
            // The vSwitch ID.
            shared_ptr<string> vswitchId_ {};
            // The zone ID.
            shared_ptr<string> zoneId_ {};
          };

          virtual bool empty() const override { return this->networkInterfaceAttribute_ == nullptr; };
          // networkInterfaceAttribute Field Functions 
          bool hasNetworkInterfaceAttribute() const { return this->networkInterfaceAttribute_ != nullptr;};
          void deleteNetworkInterfaceAttribute() { this->networkInterfaceAttribute_ = nullptr;};
          inline const vector<NetworkInterfaceAttributes::NetworkInterfaceAttribute> & getNetworkInterfaceAttribute() const { DARABONBA_PTR_GET_CONST(networkInterfaceAttribute_, vector<NetworkInterfaceAttributes::NetworkInterfaceAttribute>) };
          inline vector<NetworkInterfaceAttributes::NetworkInterfaceAttribute> getNetworkInterfaceAttribute() { DARABONBA_PTR_GET(networkInterfaceAttribute_, vector<NetworkInterfaceAttributes::NetworkInterfaceAttribute>) };
          inline NetworkInterfaceAttributes& setNetworkInterfaceAttribute(const vector<NetworkInterfaceAttributes::NetworkInterfaceAttribute> & networkInterfaceAttribute) { DARABONBA_PTR_SET_VALUE(networkInterfaceAttribute_, networkInterfaceAttribute) };
          inline NetworkInterfaceAttributes& setNetworkInterfaceAttribute(vector<NetworkInterfaceAttributes::NetworkInterfaceAttribute> && networkInterfaceAttribute) { DARABONBA_PTR_SET_RVALUE(networkInterfaceAttribute_, networkInterfaceAttribute) };


        protected:
          shared_ptr<vector<NetworkInterfaceAttributes::NetworkInterfaceAttribute>> networkInterfaceAttribute_ {};
        };

        class InstanceSpecAttributes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceSpecAttributes& obj) { 
            DARABONBA_PTR_TO_JSON(SpecAttribute, specAttribute_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceSpecAttributes& obj) { 
            DARABONBA_PTR_FROM_JSON(SpecAttribute, specAttribute_);
          };
          InstanceSpecAttributes() = default ;
          InstanceSpecAttributes(const InstanceSpecAttributes &) = default ;
          InstanceSpecAttributes(InstanceSpecAttributes &&) = default ;
          InstanceSpecAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceSpecAttributes() = default ;
          InstanceSpecAttributes& operator=(const InstanceSpecAttributes &) = default ;
          InstanceSpecAttributes& operator=(InstanceSpecAttributes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SpecAttribute : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SpecAttribute& obj) { 
              DARABONBA_PTR_TO_JSON(LocalName, localName_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, SpecAttribute& obj) { 
              DARABONBA_PTR_FROM_JSON(LocalName, localName_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            SpecAttribute() = default ;
            SpecAttribute(const SpecAttribute &) = default ;
            SpecAttribute(SpecAttribute &&) = default ;
            SpecAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SpecAttribute() = default ;
            SpecAttribute& operator=(const SpecAttribute &) = default ;
            SpecAttribute& operator=(SpecAttribute &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->localName_ == nullptr
        && this->value_ == nullptr; };
            // localName Field Functions 
            bool hasLocalName() const { return this->localName_ != nullptr;};
            void deleteLocalName() { this->localName_ = nullptr;};
            inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
            inline SpecAttribute& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline SpecAttribute& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The variable name.
            shared_ptr<string> localName_ {};
            // The variable value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->specAttribute_ == nullptr; };
          // specAttribute Field Functions 
          bool hasSpecAttribute() const { return this->specAttribute_ != nullptr;};
          void deleteSpecAttribute() { this->specAttribute_ = nullptr;};
          inline const vector<InstanceSpecAttributes::SpecAttribute> & getSpecAttribute() const { DARABONBA_PTR_GET_CONST(specAttribute_, vector<InstanceSpecAttributes::SpecAttribute>) };
          inline vector<InstanceSpecAttributes::SpecAttribute> getSpecAttribute() { DARABONBA_PTR_GET(specAttribute_, vector<InstanceSpecAttributes::SpecAttribute>) };
          inline InstanceSpecAttributes& setSpecAttribute(const vector<InstanceSpecAttributes::SpecAttribute> & specAttribute) { DARABONBA_PTR_SET_VALUE(specAttribute_, specAttribute) };
          inline InstanceSpecAttributes& setSpecAttribute(vector<InstanceSpecAttributes::SpecAttribute> && specAttribute) { DARABONBA_PTR_SET_RVALUE(specAttribute_, specAttribute) };


        protected:
          shared_ptr<vector<InstanceSpecAttributes::SpecAttribute>> specAttribute_ {};
        };

        virtual bool empty() const override { return this->aclId_ == nullptr
        && this->aclName_ == nullptr && this->aclStatus_ == nullptr && this->aclType_ == nullptr && this->classicEgressAddress_ == nullptr && this->connectCidrBlocks_ == nullptr
        && this->connectVpcId_ == nullptr && this->createdTime_ == nullptr && this->dedicatedInstanceType_ == nullptr && this->egressIpv6Enable_ == nullptr && this->expiredTime_ == nullptr
        && this->httpsPolicies_ == nullptr && this->IPV6AclId_ == nullptr && this->IPV6AclName_ == nullptr && this->IPV6AclStatus_ == nullptr && this->IPV6AclType_ == nullptr
        && this->instanceChargeType_ == nullptr && this->instanceCidrBlock_ == nullptr && this->instanceClusterId_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->instanceRpsLimit_ == nullptr && this->instanceSpec_ == nullptr && this->instanceSpecAttributes_ == nullptr && this->instanceType_ == nullptr && this->internetEgressAddress_ == nullptr
        && this->intranetSegments_ == nullptr && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->networkInterfaceAttributes_ == nullptr && this->newVpcEgressAddress_ == nullptr
        && this->privateDnsList_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->supportIpv6_ == nullptr && this->tags_ == nullptr
        && this->userVpcId_ == nullptr && this->userVswitchId_ == nullptr && this->vpcEgressAddress_ == nullptr && this->vpcIntranetEnable_ == nullptr && this->vpcOwnerId_ == nullptr
        && this->vpcSlbIntranetEnable_ == nullptr && this->zoneId_ == nullptr && this->zoneLocalName_ == nullptr; };
        // aclId Field Functions 
        bool hasAclId() const { return this->aclId_ != nullptr;};
        void deleteAclId() { this->aclId_ = nullptr;};
        inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
        inline InstanceAttribute& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


        // aclName Field Functions 
        bool hasAclName() const { return this->aclName_ != nullptr;};
        void deleteAclName() { this->aclName_ = nullptr;};
        inline string getAclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
        inline InstanceAttribute& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


        // aclStatus Field Functions 
        bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
        void deleteAclStatus() { this->aclStatus_ = nullptr;};
        inline string getAclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
        inline InstanceAttribute& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


        // aclType Field Functions 
        bool hasAclType() const { return this->aclType_ != nullptr;};
        void deleteAclType() { this->aclType_ = nullptr;};
        inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
        inline InstanceAttribute& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


        // classicEgressAddress Field Functions 
        bool hasClassicEgressAddress() const { return this->classicEgressAddress_ != nullptr;};
        void deleteClassicEgressAddress() { this->classicEgressAddress_ = nullptr;};
        inline string getClassicEgressAddress() const { DARABONBA_PTR_GET_DEFAULT(classicEgressAddress_, "") };
        inline InstanceAttribute& setClassicEgressAddress(string classicEgressAddress) { DARABONBA_PTR_SET_VALUE(classicEgressAddress_, classicEgressAddress) };


        // connectCidrBlocks Field Functions 
        bool hasConnectCidrBlocks() const { return this->connectCidrBlocks_ != nullptr;};
        void deleteConnectCidrBlocks() { this->connectCidrBlocks_ = nullptr;};
        inline string getConnectCidrBlocks() const { DARABONBA_PTR_GET_DEFAULT(connectCidrBlocks_, "") };
        inline InstanceAttribute& setConnectCidrBlocks(string connectCidrBlocks) { DARABONBA_PTR_SET_VALUE(connectCidrBlocks_, connectCidrBlocks) };


        // connectVpcId Field Functions 
        bool hasConnectVpcId() const { return this->connectVpcId_ != nullptr;};
        void deleteConnectVpcId() { this->connectVpcId_ = nullptr;};
        inline string getConnectVpcId() const { DARABONBA_PTR_GET_DEFAULT(connectVpcId_, "") };
        inline InstanceAttribute& setConnectVpcId(string connectVpcId) { DARABONBA_PTR_SET_VALUE(connectVpcId_, connectVpcId) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline InstanceAttribute& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // dedicatedInstanceType Field Functions 
        bool hasDedicatedInstanceType() const { return this->dedicatedInstanceType_ != nullptr;};
        void deleteDedicatedInstanceType() { this->dedicatedInstanceType_ = nullptr;};
        inline string getDedicatedInstanceType() const { DARABONBA_PTR_GET_DEFAULT(dedicatedInstanceType_, "") };
        inline InstanceAttribute& setDedicatedInstanceType(string dedicatedInstanceType) { DARABONBA_PTR_SET_VALUE(dedicatedInstanceType_, dedicatedInstanceType) };


        // egressIpv6Enable Field Functions 
        bool hasEgressIpv6Enable() const { return this->egressIpv6Enable_ != nullptr;};
        void deleteEgressIpv6Enable() { this->egressIpv6Enable_ = nullptr;};
        inline bool getEgressIpv6Enable() const { DARABONBA_PTR_GET_DEFAULT(egressIpv6Enable_, false) };
        inline InstanceAttribute& setEgressIpv6Enable(bool egressIpv6Enable) { DARABONBA_PTR_SET_VALUE(egressIpv6Enable_, egressIpv6Enable) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline InstanceAttribute& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // httpsPolicies Field Functions 
        bool hasHttpsPolicies() const { return this->httpsPolicies_ != nullptr;};
        void deleteHttpsPolicies() { this->httpsPolicies_ = nullptr;};
        inline string getHttpsPolicies() const { DARABONBA_PTR_GET_DEFAULT(httpsPolicies_, "") };
        inline InstanceAttribute& setHttpsPolicies(string httpsPolicies) { DARABONBA_PTR_SET_VALUE(httpsPolicies_, httpsPolicies) };


        // IPV6AclId Field Functions 
        bool hasIPV6AclId() const { return this->IPV6AclId_ != nullptr;};
        void deleteIPV6AclId() { this->IPV6AclId_ = nullptr;};
        inline string getIPV6AclId() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclId_, "") };
        inline InstanceAttribute& setIPV6AclId(string IPV6AclId) { DARABONBA_PTR_SET_VALUE(IPV6AclId_, IPV6AclId) };


        // IPV6AclName Field Functions 
        bool hasIPV6AclName() const { return this->IPV6AclName_ != nullptr;};
        void deleteIPV6AclName() { this->IPV6AclName_ = nullptr;};
        inline string getIPV6AclName() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclName_, "") };
        inline InstanceAttribute& setIPV6AclName(string IPV6AclName) { DARABONBA_PTR_SET_VALUE(IPV6AclName_, IPV6AclName) };


        // IPV6AclStatus Field Functions 
        bool hasIPV6AclStatus() const { return this->IPV6AclStatus_ != nullptr;};
        void deleteIPV6AclStatus() { this->IPV6AclStatus_ = nullptr;};
        inline string getIPV6AclStatus() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclStatus_, "") };
        inline InstanceAttribute& setIPV6AclStatus(string IPV6AclStatus) { DARABONBA_PTR_SET_VALUE(IPV6AclStatus_, IPV6AclStatus) };


        // IPV6AclType Field Functions 
        bool hasIPV6AclType() const { return this->IPV6AclType_ != nullptr;};
        void deleteIPV6AclType() { this->IPV6AclType_ = nullptr;};
        inline string getIPV6AclType() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclType_, "") };
        inline InstanceAttribute& setIPV6AclType(string IPV6AclType) { DARABONBA_PTR_SET_VALUE(IPV6AclType_, IPV6AclType) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline InstanceAttribute& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // instanceCidrBlock Field Functions 
        bool hasInstanceCidrBlock() const { return this->instanceCidrBlock_ != nullptr;};
        void deleteInstanceCidrBlock() { this->instanceCidrBlock_ = nullptr;};
        inline string getInstanceCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(instanceCidrBlock_, "") };
        inline InstanceAttribute& setInstanceCidrBlock(string instanceCidrBlock) { DARABONBA_PTR_SET_VALUE(instanceCidrBlock_, instanceCidrBlock) };


        // instanceClusterId Field Functions 
        bool hasInstanceClusterId() const { return this->instanceClusterId_ != nullptr;};
        void deleteInstanceClusterId() { this->instanceClusterId_ = nullptr;};
        inline string getInstanceClusterId() const { DARABONBA_PTR_GET_DEFAULT(instanceClusterId_, "") };
        inline InstanceAttribute& setInstanceClusterId(string instanceClusterId) { DARABONBA_PTR_SET_VALUE(instanceClusterId_, instanceClusterId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline InstanceAttribute& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceRpsLimit Field Functions 
        bool hasInstanceRpsLimit() const { return this->instanceRpsLimit_ != nullptr;};
        void deleteInstanceRpsLimit() { this->instanceRpsLimit_ = nullptr;};
        inline int32_t getInstanceRpsLimit() const { DARABONBA_PTR_GET_DEFAULT(instanceRpsLimit_, 0) };
        inline InstanceAttribute& setInstanceRpsLimit(int32_t instanceRpsLimit) { DARABONBA_PTR_SET_VALUE(instanceRpsLimit_, instanceRpsLimit) };


        // instanceSpec Field Functions 
        bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
        void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
        inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
        inline InstanceAttribute& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


        // instanceSpecAttributes Field Functions 
        bool hasInstanceSpecAttributes() const { return this->instanceSpecAttributes_ != nullptr;};
        void deleteInstanceSpecAttributes() { this->instanceSpecAttributes_ = nullptr;};
        inline const InstanceAttribute::InstanceSpecAttributes & getInstanceSpecAttributes() const { DARABONBA_PTR_GET_CONST(instanceSpecAttributes_, InstanceAttribute::InstanceSpecAttributes) };
        inline InstanceAttribute::InstanceSpecAttributes getInstanceSpecAttributes() { DARABONBA_PTR_GET(instanceSpecAttributes_, InstanceAttribute::InstanceSpecAttributes) };
        inline InstanceAttribute& setInstanceSpecAttributes(const InstanceAttribute::InstanceSpecAttributes & instanceSpecAttributes) { DARABONBA_PTR_SET_VALUE(instanceSpecAttributes_, instanceSpecAttributes) };
        inline InstanceAttribute& setInstanceSpecAttributes(InstanceAttribute::InstanceSpecAttributes && instanceSpecAttributes) { DARABONBA_PTR_SET_RVALUE(instanceSpecAttributes_, instanceSpecAttributes) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline InstanceAttribute& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // internetEgressAddress Field Functions 
        bool hasInternetEgressAddress() const { return this->internetEgressAddress_ != nullptr;};
        void deleteInternetEgressAddress() { this->internetEgressAddress_ = nullptr;};
        inline string getInternetEgressAddress() const { DARABONBA_PTR_GET_DEFAULT(internetEgressAddress_, "") };
        inline InstanceAttribute& setInternetEgressAddress(string internetEgressAddress) { DARABONBA_PTR_SET_VALUE(internetEgressAddress_, internetEgressAddress) };


        // intranetSegments Field Functions 
        bool hasIntranetSegments() const { return this->intranetSegments_ != nullptr;};
        void deleteIntranetSegments() { this->intranetSegments_ = nullptr;};
        inline string getIntranetSegments() const { DARABONBA_PTR_GET_DEFAULT(intranetSegments_, "") };
        inline InstanceAttribute& setIntranetSegments(string intranetSegments) { DARABONBA_PTR_SET_VALUE(intranetSegments_, intranetSegments) };


        // maintainEndTime Field Functions 
        bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
        void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
        inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
        inline InstanceAttribute& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


        // maintainStartTime Field Functions 
        bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
        void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
        inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
        inline InstanceAttribute& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


        // networkInterfaceAttributes Field Functions 
        bool hasNetworkInterfaceAttributes() const { return this->networkInterfaceAttributes_ != nullptr;};
        void deleteNetworkInterfaceAttributes() { this->networkInterfaceAttributes_ = nullptr;};
        inline const InstanceAttribute::NetworkInterfaceAttributes & getNetworkInterfaceAttributes() const { DARABONBA_PTR_GET_CONST(networkInterfaceAttributes_, InstanceAttribute::NetworkInterfaceAttributes) };
        inline InstanceAttribute::NetworkInterfaceAttributes getNetworkInterfaceAttributes() { DARABONBA_PTR_GET(networkInterfaceAttributes_, InstanceAttribute::NetworkInterfaceAttributes) };
        inline InstanceAttribute& setNetworkInterfaceAttributes(const InstanceAttribute::NetworkInterfaceAttributes & networkInterfaceAttributes) { DARABONBA_PTR_SET_VALUE(networkInterfaceAttributes_, networkInterfaceAttributes) };
        inline InstanceAttribute& setNetworkInterfaceAttributes(InstanceAttribute::NetworkInterfaceAttributes && networkInterfaceAttributes) { DARABONBA_PTR_SET_RVALUE(networkInterfaceAttributes_, networkInterfaceAttributes) };


        // newVpcEgressAddress Field Functions 
        bool hasNewVpcEgressAddress() const { return this->newVpcEgressAddress_ != nullptr;};
        void deleteNewVpcEgressAddress() { this->newVpcEgressAddress_ = nullptr;};
        inline string getNewVpcEgressAddress() const { DARABONBA_PTR_GET_DEFAULT(newVpcEgressAddress_, "") };
        inline InstanceAttribute& setNewVpcEgressAddress(string newVpcEgressAddress) { DARABONBA_PTR_SET_VALUE(newVpcEgressAddress_, newVpcEgressAddress) };


        // privateDnsList Field Functions 
        bool hasPrivateDnsList() const { return this->privateDnsList_ != nullptr;};
        void deletePrivateDnsList() { this->privateDnsList_ = nullptr;};
        inline const InstanceAttribute::PrivateDnsList & getPrivateDnsList() const { DARABONBA_PTR_GET_CONST(privateDnsList_, InstanceAttribute::PrivateDnsList) };
        inline InstanceAttribute::PrivateDnsList getPrivateDnsList() { DARABONBA_PTR_GET(privateDnsList_, InstanceAttribute::PrivateDnsList) };
        inline InstanceAttribute& setPrivateDnsList(const InstanceAttribute::PrivateDnsList & privateDnsList) { DARABONBA_PTR_SET_VALUE(privateDnsList_, privateDnsList) };
        inline InstanceAttribute& setPrivateDnsList(InstanceAttribute::PrivateDnsList && privateDnsList) { DARABONBA_PTR_SET_RVALUE(privateDnsList_, privateDnsList) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline InstanceAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InstanceAttribute& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // supportIpv6 Field Functions 
        bool hasSupportIpv6() const { return this->supportIpv6_ != nullptr;};
        void deleteSupportIpv6() { this->supportIpv6_ = nullptr;};
        inline bool getSupportIpv6() const { DARABONBA_PTR_GET_DEFAULT(supportIpv6_, false) };
        inline InstanceAttribute& setSupportIpv6(bool supportIpv6) { DARABONBA_PTR_SET_VALUE(supportIpv6_, supportIpv6) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const InstanceAttribute::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, InstanceAttribute::Tags) };
        inline InstanceAttribute::Tags getTags() { DARABONBA_PTR_GET(tags_, InstanceAttribute::Tags) };
        inline InstanceAttribute& setTags(const InstanceAttribute::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline InstanceAttribute& setTags(InstanceAttribute::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // userVpcId Field Functions 
        bool hasUserVpcId() const { return this->userVpcId_ != nullptr;};
        void deleteUserVpcId() { this->userVpcId_ = nullptr;};
        inline string getUserVpcId() const { DARABONBA_PTR_GET_DEFAULT(userVpcId_, "") };
        inline InstanceAttribute& setUserVpcId(string userVpcId) { DARABONBA_PTR_SET_VALUE(userVpcId_, userVpcId) };


        // userVswitchId Field Functions 
        bool hasUserVswitchId() const { return this->userVswitchId_ != nullptr;};
        void deleteUserVswitchId() { this->userVswitchId_ = nullptr;};
        inline string getUserVswitchId() const { DARABONBA_PTR_GET_DEFAULT(userVswitchId_, "") };
        inline InstanceAttribute& setUserVswitchId(string userVswitchId) { DARABONBA_PTR_SET_VALUE(userVswitchId_, userVswitchId) };


        // vpcEgressAddress Field Functions 
        bool hasVpcEgressAddress() const { return this->vpcEgressAddress_ != nullptr;};
        void deleteVpcEgressAddress() { this->vpcEgressAddress_ = nullptr;};
        inline string getVpcEgressAddress() const { DARABONBA_PTR_GET_DEFAULT(vpcEgressAddress_, "") };
        inline InstanceAttribute& setVpcEgressAddress(string vpcEgressAddress) { DARABONBA_PTR_SET_VALUE(vpcEgressAddress_, vpcEgressAddress) };


        // vpcIntranetEnable Field Functions 
        bool hasVpcIntranetEnable() const { return this->vpcIntranetEnable_ != nullptr;};
        void deleteVpcIntranetEnable() { this->vpcIntranetEnable_ = nullptr;};
        inline bool getVpcIntranetEnable() const { DARABONBA_PTR_GET_DEFAULT(vpcIntranetEnable_, false) };
        inline InstanceAttribute& setVpcIntranetEnable(bool vpcIntranetEnable) { DARABONBA_PTR_SET_VALUE(vpcIntranetEnable_, vpcIntranetEnable) };


        // vpcOwnerId Field Functions 
        bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
        void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
        inline int64_t getVpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, 0L) };
        inline InstanceAttribute& setVpcOwnerId(int64_t vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


        // vpcSlbIntranetEnable Field Functions 
        bool hasVpcSlbIntranetEnable() const { return this->vpcSlbIntranetEnable_ != nullptr;};
        void deleteVpcSlbIntranetEnable() { this->vpcSlbIntranetEnable_ = nullptr;};
        inline bool getVpcSlbIntranetEnable() const { DARABONBA_PTR_GET_DEFAULT(vpcSlbIntranetEnable_, false) };
        inline InstanceAttribute& setVpcSlbIntranetEnable(bool vpcSlbIntranetEnable) { DARABONBA_PTR_SET_VALUE(vpcSlbIntranetEnable_, vpcSlbIntranetEnable) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline InstanceAttribute& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        // zoneLocalName Field Functions 
        bool hasZoneLocalName() const { return this->zoneLocalName_ != nullptr;};
        void deleteZoneLocalName() { this->zoneLocalName_ = nullptr;};
        inline string getZoneLocalName() const { DARABONBA_PTR_GET_DEFAULT(zoneLocalName_, "") };
        inline InstanceAttribute& setZoneLocalName(string zoneLocalName) { DARABONBA_PTR_SET_VALUE(zoneLocalName_, zoneLocalName) };


      protected:
        // The ACL ID.
        shared_ptr<string> aclId_ {};
        // The name of the access control list (ACL).
        shared_ptr<string> aclName_ {};
        // Indicates whether the ACL is enabled. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> aclStatus_ {};
        // The ACL type. Valid values:
        // 
        // *   black: blacklist
        // *   white: whitelist
        shared_ptr<string> aclType_ {};
        // The egress IP address.
        shared_ptr<string> classicEgressAddress_ {};
        // The internal CIDR block of the user\\"s VPC that can be accessed if the instance is a VPC integration instance.
        shared_ptr<string> connectCidrBlocks_ {};
        // The ID of the user\\"s VPC if the instance is a VPC integration instance.
        shared_ptr<string> connectVpcId_ {};
        // The time when the instance was created.
        shared_ptr<string> createdTime_ {};
        // The type of the dedicated instance. Valid values:
        // 
        // *   vpc_connect: VPC integration instance
        // *   normal: conventional dedicated instance
        shared_ptr<string> dedicatedInstanceType_ {};
        // Indicates whether outbound IPv6 traffic is supported.
        shared_ptr<bool> egressIpv6Enable_ {};
        // The time when the instance expires.
        shared_ptr<string> expiredTime_ {};
        // The HTTPS security policy.
        shared_ptr<string> httpsPolicies_ {};
        // The ID of the IPv6 ACL.
        shared_ptr<string> IPV6AclId_ {};
        // The name of the IPv6 ACL.
        shared_ptr<string> IPV6AclName_ {};
        // Indicates whether the IPv6 ACL is enabled. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> IPV6AclStatus_ {};
        // The type of the IPv6 ACL. Valid values:
        // 
        // *   black: blacklist
        // *   white: whitelist
        shared_ptr<string> IPV6AclType_ {};
        // The billing method of the instance. Valid values:
        // 
        // *   PrePaid: subscription
        // *   PayAsYouGo: pay-as-you-go
        shared_ptr<string> instanceChargeType_ {};
        // The CIDR block of the dedicated instance.
        // 
        // *   172.16.0.0/12
        // *   192.168.0.0/16
        shared_ptr<string> instanceCidrBlock_ {};
        // The ID of the cluster to which the dedicated instance cluster belongs.
        shared_ptr<string> instanceClusterId_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The instance name.
        shared_ptr<string> instanceName_ {};
        // The requests per second (RPS) limit on the instance.
        shared_ptr<int32_t> instanceRpsLimit_ {};
        // The instance specification.
        shared_ptr<string> instanceSpec_ {};
        // The instance specification details.
        shared_ptr<InstanceAttribute::InstanceSpecAttributes> instanceSpecAttributes_ {};
        // The instance type. Valid values:
        // 
        // *   VPC_SHARED: shared instance (VPC)
        // *   VPC_DEDICATED: dedicated instance (VPC)
        shared_ptr<string> instanceType_ {};
        // The outbound public IP address.
        shared_ptr<string> internetEgressAddress_ {};
        // The internal CIDR block that is allowed to access the API Gateway instance.
        shared_ptr<string> intranetSegments_ {};
        // The end time of the maintenance window. The time is in the *HH:mm*Z format. The time is displayed in UTC.
        shared_ptr<string> maintainEndTime_ {};
        // The start time of the maintenance window. The time is in the *HH:mm*Z format. The time is displayed in UTC.
        shared_ptr<string> maintainStartTime_ {};
        // The network information of the user\\"s VPC if the instance is a VPC integration instance.
        shared_ptr<InstanceAttribute::NetworkInterfaceAttributes> networkInterfaceAttributes_ {};
        // The new VPC egress CIDR block.
        shared_ptr<string> newVpcEgressAddress_ {};
        // The private DNS list.
        shared_ptr<InstanceAttribute::PrivateDnsList> privateDnsList_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The instance status.
        shared_ptr<string> status_ {};
        // Indicates whether IPv6 traffic is supported.
        shared_ptr<bool> supportIpv6_ {};
        // The tags of the instance.
        shared_ptr<InstanceAttribute::Tags> tags_ {};
        // The user VPC ID.
        shared_ptr<string> userVpcId_ {};
        // The user vSwitch ID.
        shared_ptr<string> userVswitchId_ {};
        // The VPC egress CIDR block.
        shared_ptr<string> vpcEgressAddress_ {};
        // Indicates whether VPC access is enabled.
        shared_ptr<bool> vpcIntranetEnable_ {};
        // The ID of the account to which the VPC-based instance belongs.
        shared_ptr<int64_t> vpcOwnerId_ {};
        // Indicates whether virtual private cloud (VPC) Server Load Balancer (SLB) is enabled.
        shared_ptr<bool> vpcSlbIntranetEnable_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
        // The zone.
        shared_ptr<string> zoneLocalName_ {};
      };

      virtual bool empty() const override { return this->instanceAttribute_ == nullptr; };
      // instanceAttribute Field Functions 
      bool hasInstanceAttribute() const { return this->instanceAttribute_ != nullptr;};
      void deleteInstanceAttribute() { this->instanceAttribute_ = nullptr;};
      inline const vector<Instances::InstanceAttribute> & getInstanceAttribute() const { DARABONBA_PTR_GET_CONST(instanceAttribute_, vector<Instances::InstanceAttribute>) };
      inline vector<Instances::InstanceAttribute> getInstanceAttribute() { DARABONBA_PTR_GET(instanceAttribute_, vector<Instances::InstanceAttribute>) };
      inline Instances& setInstanceAttribute(const vector<Instances::InstanceAttribute> & instanceAttribute) { DARABONBA_PTR_SET_VALUE(instanceAttribute_, instanceAttribute) };
      inline Instances& setInstanceAttribute(vector<Instances::InstanceAttribute> && instanceAttribute) { DARABONBA_PTR_SET_RVALUE(instanceAttribute_, instanceAttribute) };


    protected:
      shared_ptr<vector<Instances::InstanceAttribute>> instanceAttribute_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeInstancesResponseBody::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeInstancesResponseBody::Instances) };
    inline DescribeInstancesResponseBody::Instances getInstances() { DARABONBA_PTR_GET(instances_, DescribeInstancesResponseBody::Instances) };
    inline DescribeInstancesResponseBody& setInstances(const DescribeInstancesResponseBody::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeInstancesResponseBody& setInstances(DescribeInstancesResponseBody::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the instances.
    shared_ptr<DescribeInstancesResponseBody::Instances> instances_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
