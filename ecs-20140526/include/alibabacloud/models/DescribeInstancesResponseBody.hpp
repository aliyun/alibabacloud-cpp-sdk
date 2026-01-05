// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
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
  class DescribeInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
        DARABONBA_PTR_TO_JSON(Instance, instance_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
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
      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(AdditionalInfo, additionalInfo_);
          DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
          DARABONBA_PTR_TO_JSON(ClockOptions, clockOptions_);
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(CpuOptions, cpuOptions_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
          DARABONBA_PTR_TO_JSON(DedicatedHostAttribute, dedicatedHostAttribute_);
          DARABONBA_PTR_TO_JSON(DedicatedInstanceAttribute, dedicatedInstanceAttribute_);
          DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_TO_JSON(DeploymentSetGroupNo, deploymentSetGroupNo_);
          DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DeviceAvailable, deviceAvailable_);
          DARABONBA_PTR_TO_JSON(EcsCapacityReservationAttr, ecsCapacityReservationAttr_);
          DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
          DARABONBA_PTR_TO_JSON(EnableNVS, enableNVS_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(GPUAmount, GPUAmount_);
          DARABONBA_PTR_TO_JSON(GPUSpec, GPUSpec_);
          DARABONBA_PTR_TO_JSON(HibernationOptions, hibernationOptions_);
          DARABONBA_PTR_TO_JSON(HostName, hostName_);
          DARABONBA_PTR_TO_JSON(HpcClusterId, hpcClusterId_);
          DARABONBA_PTR_TO_JSON(ISP, ISP_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(ImageOptions, imageOptions_);
          DARABONBA_PTR_TO_JSON(InnerIpAddress, innerIpAddress_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
          DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
          DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
          DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
          DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
          DARABONBA_PTR_TO_JSON(LocalStorageAmount, localStorageAmount_);
          DARABONBA_PTR_TO_JSON(LocalStorageCapacity, localStorageCapacity_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(MetadataOptions, metadataOptions_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaces, networkInterfaces_);
          DARABONBA_PTR_TO_JSON(OSName, OSName_);
          DARABONBA_PTR_TO_JSON(OSNameEn, OSNameEn_);
          DARABONBA_PTR_TO_JSON(OSType, OSType_);
          DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
          DARABONBA_PTR_TO_JSON(PrivateDnsNameOptions, privateDnsNameOptions_);
          DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
          DARABONBA_PTR_TO_JSON(RdmaIpAddress, rdmaIpAddress_);
          DARABONBA_PTR_TO_JSON(Recyclable, recyclable_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SaleCycle, saleCycle_);
          DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
          DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
          DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
          DARABONBA_PTR_TO_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
          DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
          DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StoppedMode, stoppedMode_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
          DARABONBA_PTR_TO_JSON(VpcAttributes, vpcAttributes_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(AdditionalInfo, additionalInfo_);
          DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
          DARABONBA_PTR_FROM_JSON(ClockOptions, clockOptions_);
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(CpuOptions, cpuOptions_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostAttribute, dedicatedHostAttribute_);
          DARABONBA_PTR_FROM_JSON(DedicatedInstanceAttribute, dedicatedInstanceAttribute_);
          DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_FROM_JSON(DeploymentSetGroupNo, deploymentSetGroupNo_);
          DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DeviceAvailable, deviceAvailable_);
          DARABONBA_PTR_FROM_JSON(EcsCapacityReservationAttr, ecsCapacityReservationAttr_);
          DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
          DARABONBA_PTR_FROM_JSON(EnableNVS, enableNVS_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(GPUAmount, GPUAmount_);
          DARABONBA_PTR_FROM_JSON(GPUSpec, GPUSpec_);
          DARABONBA_PTR_FROM_JSON(HibernationOptions, hibernationOptions_);
          DARABONBA_PTR_FROM_JSON(HostName, hostName_);
          DARABONBA_PTR_FROM_JSON(HpcClusterId, hpcClusterId_);
          DARABONBA_PTR_FROM_JSON(ISP, ISP_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(ImageOptions, imageOptions_);
          DARABONBA_PTR_FROM_JSON(InnerIpAddress, innerIpAddress_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
          DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
          DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
          DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
          DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
          DARABONBA_PTR_FROM_JSON(LocalStorageAmount, localStorageAmount_);
          DARABONBA_PTR_FROM_JSON(LocalStorageCapacity, localStorageCapacity_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(MetadataOptions, metadataOptions_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaces, networkInterfaces_);
          DARABONBA_PTR_FROM_JSON(OSName, OSName_);
          DARABONBA_PTR_FROM_JSON(OSNameEn, OSNameEn_);
          DARABONBA_PTR_FROM_JSON(OSType, OSType_);
          DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
          DARABONBA_PTR_FROM_JSON(PrivateDnsNameOptions, privateDnsNameOptions_);
          DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
          DARABONBA_PTR_FROM_JSON(RdmaIpAddress, rdmaIpAddress_);
          DARABONBA_PTR_FROM_JSON(Recyclable, recyclable_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SaleCycle, saleCycle_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
          DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
          DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
          DARABONBA_PTR_FROM_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
          DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
          DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StoppedMode, stoppedMode_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
          DARABONBA_PTR_FROM_JSON(VpcAttributes, vpcAttributes_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        Instance() = default ;
        Instance(const Instance &) = default ;
        Instance(Instance &&) = default ;
        Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instance() = default ;
        Instance& operator=(const Instance &) = default ;
        Instance& operator=(Instance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VpcAttributes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VpcAttributes& obj) { 
            DARABONBA_PTR_TO_JSON(NatIpAddress, natIpAddress_);
            DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
            DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
            DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          };
          friend void from_json(const Darabonba::Json& j, VpcAttributes& obj) { 
            DARABONBA_PTR_FROM_JSON(NatIpAddress, natIpAddress_);
            DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
            DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
            DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          };
          VpcAttributes() = default ;
          VpcAttributes(const VpcAttributes &) = default ;
          VpcAttributes(VpcAttributes &&) = default ;
          VpcAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VpcAttributes() = default ;
          VpcAttributes& operator=(const VpcAttributes &) = default ;
          VpcAttributes& operator=(VpcAttributes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PrivateIpAddress : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PrivateIpAddress& obj) { 
              DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
            };
            friend void from_json(const Darabonba::Json& j, PrivateIpAddress& obj) { 
              DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
            };
            PrivateIpAddress() = default ;
            PrivateIpAddress(const PrivateIpAddress &) = default ;
            PrivateIpAddress(PrivateIpAddress &&) = default ;
            PrivateIpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PrivateIpAddress() = default ;
            PrivateIpAddress& operator=(const PrivateIpAddress &) = default ;
            PrivateIpAddress& operator=(PrivateIpAddress &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->ipAddress_ == nullptr; };
            // ipAddress Field Functions 
            bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
            void deleteIpAddress() { this->ipAddress_ = nullptr;};
            inline const vector<string> & getIpAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
            inline vector<string> getIpAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
            inline PrivateIpAddress& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
            inline PrivateIpAddress& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


          protected:
            shared_ptr<vector<string>> ipAddress_ {};
          };

          virtual bool empty() const override { return this->natIpAddress_ == nullptr
        && this->privateIpAddress_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
          // natIpAddress Field Functions 
          bool hasNatIpAddress() const { return this->natIpAddress_ != nullptr;};
          void deleteNatIpAddress() { this->natIpAddress_ = nullptr;};
          inline string getNatIpAddress() const { DARABONBA_PTR_GET_DEFAULT(natIpAddress_, "") };
          inline VpcAttributes& setNatIpAddress(string natIpAddress) { DARABONBA_PTR_SET_VALUE(natIpAddress_, natIpAddress) };


          // privateIpAddress Field Functions 
          bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
          void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
          inline const VpcAttributes::PrivateIpAddress & getPrivateIpAddress() const { DARABONBA_PTR_GET_CONST(privateIpAddress_, VpcAttributes::PrivateIpAddress) };
          inline VpcAttributes::PrivateIpAddress getPrivateIpAddress() { DARABONBA_PTR_GET(privateIpAddress_, VpcAttributes::PrivateIpAddress) };
          inline VpcAttributes& setPrivateIpAddress(const VpcAttributes::PrivateIpAddress & privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };
          inline VpcAttributes& setPrivateIpAddress(VpcAttributes::PrivateIpAddress && privateIpAddress) { DARABONBA_PTR_SET_RVALUE(privateIpAddress_, privateIpAddress) };


          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline VpcAttributes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline VpcAttributes& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        protected:
          // The NAT IP address of the instance. The NAT IP address is used by ECS instances in different VPCs for communication.
          shared_ptr<string> natIpAddress_ {};
          // The private IP addresses of the instance.
          shared_ptr<VpcAttributes::PrivateIpAddress> privateIpAddress_ {};
          // The ID of the vSwitch to which the instance is connected.
          shared_ptr<string> vSwitchId_ {};
          // The ID of the VPC.
          shared_ptr<string> vpcId_ {};
        };

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
            // The tag key of the instance.
            shared_ptr<string> tagKey_ {};
            // The tag value of the instance.
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

        class RdmaIpAddress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RdmaIpAddress& obj) { 
            DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          };
          friend void from_json(const Darabonba::Json& j, RdmaIpAddress& obj) { 
            DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          };
          RdmaIpAddress() = default ;
          RdmaIpAddress(const RdmaIpAddress &) = default ;
          RdmaIpAddress(RdmaIpAddress &&) = default ;
          RdmaIpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RdmaIpAddress() = default ;
          RdmaIpAddress& operator=(const RdmaIpAddress &) = default ;
          RdmaIpAddress& operator=(RdmaIpAddress &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ipAddress_ == nullptr; };
          // ipAddress Field Functions 
          bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
          void deleteIpAddress() { this->ipAddress_ = nullptr;};
          inline const vector<string> & getIpAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
          inline vector<string> getIpAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
          inline RdmaIpAddress& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
          inline RdmaIpAddress& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


        protected:
          shared_ptr<vector<string>> ipAddress_ {};
        };

        class PublicIpAddress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PublicIpAddress& obj) { 
            DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          };
          friend void from_json(const Darabonba::Json& j, PublicIpAddress& obj) { 
            DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          };
          PublicIpAddress() = default ;
          PublicIpAddress(const PublicIpAddress &) = default ;
          PublicIpAddress(PublicIpAddress &&) = default ;
          PublicIpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PublicIpAddress() = default ;
          PublicIpAddress& operator=(const PublicIpAddress &) = default ;
          PublicIpAddress& operator=(PublicIpAddress &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ipAddress_ == nullptr; };
          // ipAddress Field Functions 
          bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
          void deleteIpAddress() { this->ipAddress_ = nullptr;};
          inline const vector<string> & getIpAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
          inline vector<string> getIpAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
          inline PublicIpAddress& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
          inline PublicIpAddress& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


        protected:
          shared_ptr<vector<string>> ipAddress_ {};
        };

        class PrivateDnsNameOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrivateDnsNameOptions& obj) { 
            DARABONBA_PTR_TO_JSON(EnableInstanceIdDnsAAAARecord, enableInstanceIdDnsAAAARecord_);
            DARABONBA_PTR_TO_JSON(EnableInstanceIdDnsARecord, enableInstanceIdDnsARecord_);
            DARABONBA_PTR_TO_JSON(EnableIpDnsARecord, enableIpDnsARecord_);
            DARABONBA_PTR_TO_JSON(EnableIpDnsPtrRecord, enableIpDnsPtrRecord_);
            DARABONBA_PTR_TO_JSON(HostnameType, hostnameType_);
          };
          friend void from_json(const Darabonba::Json& j, PrivateDnsNameOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(EnableInstanceIdDnsAAAARecord, enableInstanceIdDnsAAAARecord_);
            DARABONBA_PTR_FROM_JSON(EnableInstanceIdDnsARecord, enableInstanceIdDnsARecord_);
            DARABONBA_PTR_FROM_JSON(EnableIpDnsARecord, enableIpDnsARecord_);
            DARABONBA_PTR_FROM_JSON(EnableIpDnsPtrRecord, enableIpDnsPtrRecord_);
            DARABONBA_PTR_FROM_JSON(HostnameType, hostnameType_);
          };
          PrivateDnsNameOptions() = default ;
          PrivateDnsNameOptions(const PrivateDnsNameOptions &) = default ;
          PrivateDnsNameOptions(PrivateDnsNameOptions &&) = default ;
          PrivateDnsNameOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrivateDnsNameOptions() = default ;
          PrivateDnsNameOptions& operator=(const PrivateDnsNameOptions &) = default ;
          PrivateDnsNameOptions& operator=(PrivateDnsNameOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enableInstanceIdDnsAAAARecord_ == nullptr
        && this->enableInstanceIdDnsARecord_ == nullptr && this->enableIpDnsARecord_ == nullptr && this->enableIpDnsPtrRecord_ == nullptr && this->hostnameType_ == nullptr; };
          // enableInstanceIdDnsAAAARecord Field Functions 
          bool hasEnableInstanceIdDnsAAAARecord() const { return this->enableInstanceIdDnsAAAARecord_ != nullptr;};
          void deleteEnableInstanceIdDnsAAAARecord() { this->enableInstanceIdDnsAAAARecord_ = nullptr;};
          inline bool getEnableInstanceIdDnsAAAARecord() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceIdDnsAAAARecord_, false) };
          inline PrivateDnsNameOptions& setEnableInstanceIdDnsAAAARecord(bool enableInstanceIdDnsAAAARecord) { DARABONBA_PTR_SET_VALUE(enableInstanceIdDnsAAAARecord_, enableInstanceIdDnsAAAARecord) };


          // enableInstanceIdDnsARecord Field Functions 
          bool hasEnableInstanceIdDnsARecord() const { return this->enableInstanceIdDnsARecord_ != nullptr;};
          void deleteEnableInstanceIdDnsARecord() { this->enableInstanceIdDnsARecord_ = nullptr;};
          inline bool getEnableInstanceIdDnsARecord() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceIdDnsARecord_, false) };
          inline PrivateDnsNameOptions& setEnableInstanceIdDnsARecord(bool enableInstanceIdDnsARecord) { DARABONBA_PTR_SET_VALUE(enableInstanceIdDnsARecord_, enableInstanceIdDnsARecord) };


          // enableIpDnsARecord Field Functions 
          bool hasEnableIpDnsARecord() const { return this->enableIpDnsARecord_ != nullptr;};
          void deleteEnableIpDnsARecord() { this->enableIpDnsARecord_ = nullptr;};
          inline bool getEnableIpDnsARecord() const { DARABONBA_PTR_GET_DEFAULT(enableIpDnsARecord_, false) };
          inline PrivateDnsNameOptions& setEnableIpDnsARecord(bool enableIpDnsARecord) { DARABONBA_PTR_SET_VALUE(enableIpDnsARecord_, enableIpDnsARecord) };


          // enableIpDnsPtrRecord Field Functions 
          bool hasEnableIpDnsPtrRecord() const { return this->enableIpDnsPtrRecord_ != nullptr;};
          void deleteEnableIpDnsPtrRecord() { this->enableIpDnsPtrRecord_ = nullptr;};
          inline bool getEnableIpDnsPtrRecord() const { DARABONBA_PTR_GET_DEFAULT(enableIpDnsPtrRecord_, false) };
          inline PrivateDnsNameOptions& setEnableIpDnsPtrRecord(bool enableIpDnsPtrRecord) { DARABONBA_PTR_SET_VALUE(enableIpDnsPtrRecord_, enableIpDnsPtrRecord) };


          // hostnameType Field Functions 
          bool hasHostnameType() const { return this->hostnameType_ != nullptr;};
          void deleteHostnameType() { this->hostnameType_ = nullptr;};
          inline string getHostnameType() const { DARABONBA_PTR_GET_DEFAULT(hostnameType_, "") };
          inline PrivateDnsNameOptions& setHostnameType(string hostnameType) { DARABONBA_PTR_SET_VALUE(hostnameType_, hostnameType) };


        protected:
          // Indicates whether DNS Resolution from the Instance ID-based Hostname to the Instance Primary Private IPv6 Address (AAAA Record) is enabled. Valid values:
          // 
          // *   true
          // *   false
          // 
          // Default value: false.
          shared_ptr<bool> enableInstanceIdDnsAAAARecord_ {};
          // Indicates whether DNS Resolution from the Instance ID-based Hostname to the Instance Primary Private IPv4 Address (A Record) is enabled. Valid values:
          // 
          // *   true
          // *   false
          // 
          // Default value: false.
          shared_ptr<bool> enableInstanceIdDnsARecord_ {};
          // Indicates whether DNS Resolution from the IP Address-based Hostname to the Instance Primary Private IPv4 Address (A Record) is enabled. Valid values:
          // 
          // *   true
          // *   false
          // 
          // Default value: false.
          shared_ptr<bool> enableIpDnsARecord_ {};
          // Indicates whether Reverse DNS Resolution from the Instance Primary Private IPv4 Address to the IP Address-based Hostname (PTR Record) is enabled. Valid values:
          // 
          // *   true
          // *   false
          // 
          // Default value: false.
          shared_ptr<bool> enableIpDnsPtrRecord_ {};
          // The type of hostname. Valid values:
          // 
          // *   Custom: custom hostname
          // *   IpBased: IP address-based hostname
          // *   InstanceIdBased: instance ID-based hostname
          // 
          // Default value: Custom.
          shared_ptr<string> hostnameType_ {};
        };

        class OperationLocks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OperationLocks& obj) { 
            DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
          };
          friend void from_json(const Darabonba::Json& j, OperationLocks& obj) { 
            DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
          };
          OperationLocks() = default ;
          OperationLocks(const OperationLocks &) = default ;
          OperationLocks(OperationLocks &&) = default ;
          OperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OperationLocks() = default ;
          OperationLocks& operator=(const OperationLocks &) = default ;
          OperationLocks& operator=(OperationLocks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class LockReason : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LockReason& obj) { 
              DARABONBA_PTR_TO_JSON(LockMsg, lockMsg_);
              DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
            };
            friend void from_json(const Darabonba::Json& j, LockReason& obj) { 
              DARABONBA_PTR_FROM_JSON(LockMsg, lockMsg_);
              DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
            };
            LockReason() = default ;
            LockReason(const LockReason &) = default ;
            LockReason(LockReason &&) = default ;
            LockReason(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LockReason() = default ;
            LockReason& operator=(const LockReason &) = default ;
            LockReason& operator=(LockReason &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->lockMsg_ == nullptr
        && this->lockReason_ == nullptr; };
            // lockMsg Field Functions 
            bool hasLockMsg() const { return this->lockMsg_ != nullptr;};
            void deleteLockMsg() { this->lockMsg_ = nullptr;};
            inline string getLockMsg() const { DARABONBA_PTR_GET_DEFAULT(lockMsg_, "") };
            inline LockReason& setLockMsg(string lockMsg) { DARABONBA_PTR_SET_VALUE(lockMsg_, lockMsg) };


            // lockReason Field Functions 
            bool hasLockReason() const { return this->lockReason_ != nullptr;};
            void deleteLockReason() { this->lockReason_ = nullptr;};
            inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
            inline LockReason& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


          protected:
            // The message returned when the instance was locked.
            shared_ptr<string> lockMsg_ {};
            // The reason why the instance was locked. Valid values:
            // 
            // *   financial: The instance was locked due to overdue payments.
            // *   security: The instance was locked due to security reasons.
            // *   recycling: The spot instance was locked and pending release.
            // *   dedicatedhostfinancial: The instance was locked due to overdue payments for the dedicated host.
            // *   refunded: The instance was locked because a refund was made for the instance.
            shared_ptr<string> lockReason_ {};
          };

          virtual bool empty() const override { return this->lockReason_ == nullptr; };
          // lockReason Field Functions 
          bool hasLockReason() const { return this->lockReason_ != nullptr;};
          void deleteLockReason() { this->lockReason_ = nullptr;};
          inline const vector<OperationLocks::LockReason> & getLockReason() const { DARABONBA_PTR_GET_CONST(lockReason_, vector<OperationLocks::LockReason>) };
          inline vector<OperationLocks::LockReason> getLockReason() { DARABONBA_PTR_GET(lockReason_, vector<OperationLocks::LockReason>) };
          inline OperationLocks& setLockReason(const vector<OperationLocks::LockReason> & lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };
          inline OperationLocks& setLockReason(vector<OperationLocks::LockReason> && lockReason) { DARABONBA_PTR_SET_RVALUE(lockReason_, lockReason) };


        protected:
          shared_ptr<vector<OperationLocks::LockReason>> lockReason_ {};
        };

        class NetworkInterfaces : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkInterfaces& obj) { 
            DARABONBA_PTR_TO_JSON(NetworkInterface, networkInterface_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkInterfaces& obj) { 
            DARABONBA_PTR_FROM_JSON(NetworkInterface, networkInterface_);
          };
          NetworkInterfaces() = default ;
          NetworkInterfaces(const NetworkInterfaces &) = default ;
          NetworkInterfaces(NetworkInterfaces &&) = default ;
          NetworkInterfaces(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkInterfaces() = default ;
          NetworkInterfaces& operator=(const NetworkInterfaces &) = default ;
          NetworkInterfaces& operator=(NetworkInterfaces &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class NetworkInterface : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const NetworkInterface& obj) { 
              DARABONBA_PTR_TO_JSON(Ipv4PrefixSets, ipv4PrefixSets_);
              DARABONBA_PTR_TO_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
              DARABONBA_PTR_TO_JSON(Ipv6Sets, ipv6Sets_);
              DARABONBA_PTR_TO_JSON(MacAddress, macAddress_);
              DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
              DARABONBA_PTR_TO_JSON(PrimaryIpAddress, primaryIpAddress_);
              DARABONBA_PTR_TO_JSON(PrivateIpSets, privateIpSets_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, NetworkInterface& obj) { 
              DARABONBA_PTR_FROM_JSON(Ipv4PrefixSets, ipv4PrefixSets_);
              DARABONBA_PTR_FROM_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
              DARABONBA_PTR_FROM_JSON(Ipv6Sets, ipv6Sets_);
              DARABONBA_PTR_FROM_JSON(MacAddress, macAddress_);
              DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
              DARABONBA_PTR_FROM_JSON(PrimaryIpAddress, primaryIpAddress_);
              DARABONBA_PTR_FROM_JSON(PrivateIpSets, privateIpSets_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            NetworkInterface() = default ;
            NetworkInterface(const NetworkInterface &) = default ;
            NetworkInterface(NetworkInterface &&) = default ;
            NetworkInterface(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~NetworkInterface() = default ;
            NetworkInterface& operator=(const NetworkInterface &) = default ;
            NetworkInterface& operator=(NetworkInterface &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
                  DARABONBA_PTR_TO_JSON(Primary, primary_);
                  DARABONBA_PTR_TO_JSON(PrivateDnsName, privateDnsName_);
                  DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
                };
                friend void from_json(const Darabonba::Json& j, PrivateIpSet& obj) { 
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
                virtual bool empty() const override { return this->primary_ == nullptr
        && this->privateDnsName_ == nullptr && this->privateIpAddress_ == nullptr; };
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
                // Indicates whether the IP address is the primary private IP address. Valid values:
                // 
                // *   true
                // *   false
                shared_ptr<bool> primary_ {};
                // The private domain name of the instance.
                // 
                // >  This parameter has a value in a specific format only if `HostnameType` is set to `IpBased` or `InstanceIdBased`.
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

            virtual bool empty() const override { return this->ipv4PrefixSets_ == nullptr
        && this->ipv6PrefixSets_ == nullptr && this->ipv6Sets_ == nullptr && this->macAddress_ == nullptr && this->networkInterfaceId_ == nullptr && this->primaryIpAddress_ == nullptr
        && this->privateIpSets_ == nullptr && this->type_ == nullptr; };
            // ipv4PrefixSets Field Functions 
            bool hasIpv4PrefixSets() const { return this->ipv4PrefixSets_ != nullptr;};
            void deleteIpv4PrefixSets() { this->ipv4PrefixSets_ = nullptr;};
            inline const NetworkInterface::Ipv4PrefixSets & getIpv4PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv4PrefixSets_, NetworkInterface::Ipv4PrefixSets) };
            inline NetworkInterface::Ipv4PrefixSets getIpv4PrefixSets() { DARABONBA_PTR_GET(ipv4PrefixSets_, NetworkInterface::Ipv4PrefixSets) };
            inline NetworkInterface& setIpv4PrefixSets(const NetworkInterface::Ipv4PrefixSets & ipv4PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv4PrefixSets_, ipv4PrefixSets) };
            inline NetworkInterface& setIpv4PrefixSets(NetworkInterface::Ipv4PrefixSets && ipv4PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv4PrefixSets_, ipv4PrefixSets) };


            // ipv6PrefixSets Field Functions 
            bool hasIpv6PrefixSets() const { return this->ipv6PrefixSets_ != nullptr;};
            void deleteIpv6PrefixSets() { this->ipv6PrefixSets_ = nullptr;};
            inline const NetworkInterface::Ipv6PrefixSets & getIpv6PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv6PrefixSets_, NetworkInterface::Ipv6PrefixSets) };
            inline NetworkInterface::Ipv6PrefixSets getIpv6PrefixSets() { DARABONBA_PTR_GET(ipv6PrefixSets_, NetworkInterface::Ipv6PrefixSets) };
            inline NetworkInterface& setIpv6PrefixSets(const NetworkInterface::Ipv6PrefixSets & ipv6PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv6PrefixSets_, ipv6PrefixSets) };
            inline NetworkInterface& setIpv6PrefixSets(NetworkInterface::Ipv6PrefixSets && ipv6PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv6PrefixSets_, ipv6PrefixSets) };


            // ipv6Sets Field Functions 
            bool hasIpv6Sets() const { return this->ipv6Sets_ != nullptr;};
            void deleteIpv6Sets() { this->ipv6Sets_ = nullptr;};
            inline const NetworkInterface::Ipv6Sets & getIpv6Sets() const { DARABONBA_PTR_GET_CONST(ipv6Sets_, NetworkInterface::Ipv6Sets) };
            inline NetworkInterface::Ipv6Sets getIpv6Sets() { DARABONBA_PTR_GET(ipv6Sets_, NetworkInterface::Ipv6Sets) };
            inline NetworkInterface& setIpv6Sets(const NetworkInterface::Ipv6Sets & ipv6Sets) { DARABONBA_PTR_SET_VALUE(ipv6Sets_, ipv6Sets) };
            inline NetworkInterface& setIpv6Sets(NetworkInterface::Ipv6Sets && ipv6Sets) { DARABONBA_PTR_SET_RVALUE(ipv6Sets_, ipv6Sets) };


            // macAddress Field Functions 
            bool hasMacAddress() const { return this->macAddress_ != nullptr;};
            void deleteMacAddress() { this->macAddress_ = nullptr;};
            inline string getMacAddress() const { DARABONBA_PTR_GET_DEFAULT(macAddress_, "") };
            inline NetworkInterface& setMacAddress(string macAddress) { DARABONBA_PTR_SET_VALUE(macAddress_, macAddress) };


            // networkInterfaceId Field Functions 
            bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
            void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
            inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
            inline NetworkInterface& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


            // primaryIpAddress Field Functions 
            bool hasPrimaryIpAddress() const { return this->primaryIpAddress_ != nullptr;};
            void deletePrimaryIpAddress() { this->primaryIpAddress_ = nullptr;};
            inline string getPrimaryIpAddress() const { DARABONBA_PTR_GET_DEFAULT(primaryIpAddress_, "") };
            inline NetworkInterface& setPrimaryIpAddress(string primaryIpAddress) { DARABONBA_PTR_SET_VALUE(primaryIpAddress_, primaryIpAddress) };


            // privateIpSets Field Functions 
            bool hasPrivateIpSets() const { return this->privateIpSets_ != nullptr;};
            void deletePrivateIpSets() { this->privateIpSets_ = nullptr;};
            inline const NetworkInterface::PrivateIpSets & getPrivateIpSets() const { DARABONBA_PTR_GET_CONST(privateIpSets_, NetworkInterface::PrivateIpSets) };
            inline NetworkInterface::PrivateIpSets getPrivateIpSets() { DARABONBA_PTR_GET(privateIpSets_, NetworkInterface::PrivateIpSets) };
            inline NetworkInterface& setPrivateIpSets(const NetworkInterface::PrivateIpSets & privateIpSets) { DARABONBA_PTR_SET_VALUE(privateIpSets_, privateIpSets) };
            inline NetworkInterface& setPrivateIpSets(NetworkInterface::PrivateIpSets && privateIpSets) { DARABONBA_PTR_SET_RVALUE(privateIpSets_, privateIpSets) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline NetworkInterface& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // The IPv4 prefixes of the ENI. This parameter has a value only when `AdditionalAttributes.N` is set to `NETWORK_PRIMARY_ENI_IP`.
            shared_ptr<NetworkInterface::Ipv4PrefixSets> ipv4PrefixSets_ {};
            // The IPv6 prefixes of the ENI. This parameter has a value only when `AdditionalAttributes.N` is set to `NETWORK_PRIMARY_ENI_IP`.
            shared_ptr<NetworkInterface::Ipv6PrefixSets> ipv6PrefixSets_ {};
            // The IPv6 addresses of the ENI. This parameter has a value only when `AdditionalAttributes.N` is set to `NETWORK_PRIMARY_ENI_IP`.
            shared_ptr<NetworkInterface::Ipv6Sets> ipv6Sets_ {};
            // The MAC address of the ENI.
            shared_ptr<string> macAddress_ {};
            // The ID of the ENI.
            shared_ptr<string> networkInterfaceId_ {};
            // The primary private IP address of the ENI.
            shared_ptr<string> primaryIpAddress_ {};
            // The private IP addresses of the ENI.
            shared_ptr<NetworkInterface::PrivateIpSets> privateIpSets_ {};
            // The type of the ENI. Valid values:
            // 
            // *   Primary
            // *   Secondary
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->networkInterface_ == nullptr; };
          // networkInterface Field Functions 
          bool hasNetworkInterface() const { return this->networkInterface_ != nullptr;};
          void deleteNetworkInterface() { this->networkInterface_ = nullptr;};
          inline const vector<NetworkInterfaces::NetworkInterface> & getNetworkInterface() const { DARABONBA_PTR_GET_CONST(networkInterface_, vector<NetworkInterfaces::NetworkInterface>) };
          inline vector<NetworkInterfaces::NetworkInterface> getNetworkInterface() { DARABONBA_PTR_GET(networkInterface_, vector<NetworkInterfaces::NetworkInterface>) };
          inline NetworkInterfaces& setNetworkInterface(const vector<NetworkInterfaces::NetworkInterface> & networkInterface) { DARABONBA_PTR_SET_VALUE(networkInterface_, networkInterface) };
          inline NetworkInterfaces& setNetworkInterface(vector<NetworkInterfaces::NetworkInterface> && networkInterface) { DARABONBA_PTR_SET_RVALUE(networkInterface_, networkInterface) };


        protected:
          shared_ptr<vector<NetworkInterfaces::NetworkInterface>> networkInterface_ {};
        };

        class MetadataOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MetadataOptions& obj) { 
            DARABONBA_PTR_TO_JSON(HttpEndpoint, httpEndpoint_);
            DARABONBA_PTR_TO_JSON(HttpPutResponseHopLimit, httpPutResponseHopLimit_);
            DARABONBA_PTR_TO_JSON(HttpTokens, httpTokens_);
          };
          friend void from_json(const Darabonba::Json& j, MetadataOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(HttpEndpoint, httpEndpoint_);
            DARABONBA_PTR_FROM_JSON(HttpPutResponseHopLimit, httpPutResponseHopLimit_);
            DARABONBA_PTR_FROM_JSON(HttpTokens, httpTokens_);
          };
          MetadataOptions() = default ;
          MetadataOptions(const MetadataOptions &) = default ;
          MetadataOptions(MetadataOptions &&) = default ;
          MetadataOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MetadataOptions() = default ;
          MetadataOptions& operator=(const MetadataOptions &) = default ;
          MetadataOptions& operator=(MetadataOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->httpEndpoint_ == nullptr
        && this->httpPutResponseHopLimit_ == nullptr && this->httpTokens_ == nullptr; };
          // httpEndpoint Field Functions 
          bool hasHttpEndpoint() const { return this->httpEndpoint_ != nullptr;};
          void deleteHttpEndpoint() { this->httpEndpoint_ = nullptr;};
          inline string getHttpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpEndpoint_, "") };
          inline MetadataOptions& setHttpEndpoint(string httpEndpoint) { DARABONBA_PTR_SET_VALUE(httpEndpoint_, httpEndpoint) };


          // httpPutResponseHopLimit Field Functions 
          bool hasHttpPutResponseHopLimit() const { return this->httpPutResponseHopLimit_ != nullptr;};
          void deleteHttpPutResponseHopLimit() { this->httpPutResponseHopLimit_ = nullptr;};
          inline int32_t getHttpPutResponseHopLimit() const { DARABONBA_PTR_GET_DEFAULT(httpPutResponseHopLimit_, 0) };
          inline MetadataOptions& setHttpPutResponseHopLimit(int32_t httpPutResponseHopLimit) { DARABONBA_PTR_SET_VALUE(httpPutResponseHopLimit_, httpPutResponseHopLimit) };


          // httpTokens Field Functions 
          bool hasHttpTokens() const { return this->httpTokens_ != nullptr;};
          void deleteHttpTokens() { this->httpTokens_ = nullptr;};
          inline string getHttpTokens() const { DARABONBA_PTR_GET_DEFAULT(httpTokens_, "") };
          inline MetadataOptions& setHttpTokens(string httpTokens) { DARABONBA_PTR_SET_VALUE(httpTokens_, httpTokens) };


        protected:
          // Indicates whether the access channel is enabled for instance metadata. Valid values:
          // 
          // *   enabled
          // *   disabled
          shared_ptr<string> httpEndpoint_ {};
          // >  This parameter is not publicly available.
          shared_ptr<int32_t> httpPutResponseHopLimit_ {};
          // Indicates whether the security hardening mode (IMDSv2) is forcefully used to access instance metadata. Valid values:
          // 
          // *   optional: The security hardening mode (IMDSv2) is not forcefully used.
          // *   required: The security hardening mode (IMDSv2) is forcefully used.
          shared_ptr<string> httpTokens_ {};
        };

        class InnerIpAddress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InnerIpAddress& obj) { 
            DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          };
          friend void from_json(const Darabonba::Json& j, InnerIpAddress& obj) { 
            DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          };
          InnerIpAddress() = default ;
          InnerIpAddress(const InnerIpAddress &) = default ;
          InnerIpAddress(InnerIpAddress &&) = default ;
          InnerIpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InnerIpAddress() = default ;
          InnerIpAddress& operator=(const InnerIpAddress &) = default ;
          InnerIpAddress& operator=(InnerIpAddress &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ipAddress_ == nullptr; };
          // ipAddress Field Functions 
          bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
          void deleteIpAddress() { this->ipAddress_ = nullptr;};
          inline const vector<string> & getIpAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
          inline vector<string> getIpAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
          inline InnerIpAddress& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
          inline InnerIpAddress& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


        protected:
          shared_ptr<vector<string>> ipAddress_ {};
        };

        class ImageOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImageOptions& obj) { 
            DARABONBA_PTR_TO_JSON(CurrentOSNVMeSupported, currentOSNVMeSupported_);
            DARABONBA_PTR_TO_JSON(LoginAsNonRoot, loginAsNonRoot_);
          };
          friend void from_json(const Darabonba::Json& j, ImageOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(CurrentOSNVMeSupported, currentOSNVMeSupported_);
            DARABONBA_PTR_FROM_JSON(LoginAsNonRoot, loginAsNonRoot_);
          };
          ImageOptions() = default ;
          ImageOptions(const ImageOptions &) = default ;
          ImageOptions(ImageOptions &&) = default ;
          ImageOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImageOptions() = default ;
          ImageOptions& operator=(const ImageOptions &) = default ;
          ImageOptions& operator=(ImageOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->currentOSNVMeSupported_ == nullptr
        && this->loginAsNonRoot_ == nullptr; };
          // currentOSNVMeSupported Field Functions 
          bool hasCurrentOSNVMeSupported() const { return this->currentOSNVMeSupported_ != nullptr;};
          void deleteCurrentOSNVMeSupported() { this->currentOSNVMeSupported_ = nullptr;};
          inline bool getCurrentOSNVMeSupported() const { DARABONBA_PTR_GET_DEFAULT(currentOSNVMeSupported_, false) };
          inline ImageOptions& setCurrentOSNVMeSupported(bool currentOSNVMeSupported) { DARABONBA_PTR_SET_VALUE(currentOSNVMeSupported_, currentOSNVMeSupported) };


          // loginAsNonRoot Field Functions 
          bool hasLoginAsNonRoot() const { return this->loginAsNonRoot_ != nullptr;};
          void deleteLoginAsNonRoot() { this->loginAsNonRoot_ = nullptr;};
          inline bool getLoginAsNonRoot() const { DARABONBA_PTR_GET_DEFAULT(loginAsNonRoot_, false) };
          inline ImageOptions& setLoginAsNonRoot(bool loginAsNonRoot) { DARABONBA_PTR_SET_VALUE(loginAsNonRoot_, loginAsNonRoot) };


        protected:
          // Indicates whether the operating system supports access to disks over the NVMe protocol. Valid values:
          // 
          // *   true
          // *   false
          // 
          // >  This parameter is returned only if you specify CURRENT_OS_NVME_SUPPORTED in AdditionalAttributes in the request.
          shared_ptr<bool> currentOSNVMeSupported_ {};
          // Indicates whether the instance that uses the image supports logons of the ecs-user user. Valid values:
          // 
          // *   true
          // *   false
          shared_ptr<bool> loginAsNonRoot_ {};
        };

        class HibernationOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HibernationOptions& obj) { 
            DARABONBA_PTR_TO_JSON(Configured, configured_);
          };
          friend void from_json(const Darabonba::Json& j, HibernationOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(Configured, configured_);
          };
          HibernationOptions() = default ;
          HibernationOptions(const HibernationOptions &) = default ;
          HibernationOptions(HibernationOptions &&) = default ;
          HibernationOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HibernationOptions() = default ;
          HibernationOptions& operator=(const HibernationOptions &) = default ;
          HibernationOptions& operator=(HibernationOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->configured_ == nullptr; };
          // configured Field Functions 
          bool hasConfigured() const { return this->configured_ != nullptr;};
          void deleteConfigured() { this->configured_ = nullptr;};
          inline bool getConfigured() const { DARABONBA_PTR_GET_DEFAULT(configured_, false) };
          inline HibernationOptions& setConfigured(bool configured) { DARABONBA_PTR_SET_VALUE(configured_, configured) };


        protected:
          // >  This parameter is in invitational preview and is not publicly available.
          shared_ptr<bool> configured_ {};
        };

        class EipAddress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EipAddress& obj) { 
            DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
            DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
            DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
            DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
            DARABONBA_PTR_TO_JSON(IsSupportUnassociate, isSupportUnassociate_);
          };
          friend void from_json(const Darabonba::Json& j, EipAddress& obj) { 
            DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
            DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
            DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
            DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
            DARABONBA_PTR_FROM_JSON(IsSupportUnassociate, isSupportUnassociate_);
          };
          EipAddress() = default ;
          EipAddress(const EipAddress &) = default ;
          EipAddress(EipAddress &&) = default ;
          EipAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EipAddress() = default ;
          EipAddress& operator=(const EipAddress &) = default ;
          EipAddress& operator=(EipAddress &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->bandwidth_ == nullptr && this->internetChargeType_ == nullptr && this->ipAddress_ == nullptr && this->isSupportUnassociate_ == nullptr; };
          // allocationId Field Functions 
          bool hasAllocationId() const { return this->allocationId_ != nullptr;};
          void deleteAllocationId() { this->allocationId_ = nullptr;};
          inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
          inline EipAddress& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


          // bandwidth Field Functions 
          bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
          void deleteBandwidth() { this->bandwidth_ = nullptr;};
          inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
          inline EipAddress& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


          // internetChargeType Field Functions 
          bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
          void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
          inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
          inline EipAddress& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


          // ipAddress Field Functions 
          bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
          void deleteIpAddress() { this->ipAddress_ = nullptr;};
          inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
          inline EipAddress& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


          // isSupportUnassociate Field Functions 
          bool hasIsSupportUnassociate() const { return this->isSupportUnassociate_ != nullptr;};
          void deleteIsSupportUnassociate() { this->isSupportUnassociate_ = nullptr;};
          inline bool getIsSupportUnassociate() const { DARABONBA_PTR_GET_DEFAULT(isSupportUnassociate_, false) };
          inline EipAddress& setIsSupportUnassociate(bool isSupportUnassociate) { DARABONBA_PTR_SET_VALUE(isSupportUnassociate_, isSupportUnassociate) };


        protected:
          // The ID of the EIP.
          shared_ptr<string> allocationId_ {};
          // The maximum public bandwidth of the EIP. Unit: Mbit/s.
          shared_ptr<int32_t> bandwidth_ {};
          // The metering method of the EIP. Valid values:
          // 
          // *   PayByBandwidth
          // *   PayByTraffic
          shared_ptr<string> internetChargeType_ {};
          // The EIP.
          shared_ptr<string> ipAddress_ {};
          // Indicates whether the EIP can be disassociated.
          shared_ptr<bool> isSupportUnassociate_ {};
        };

        class EcsCapacityReservationAttr : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EcsCapacityReservationAttr& obj) { 
            DARABONBA_PTR_TO_JSON(CapacityReservationId, capacityReservationId_);
            DARABONBA_PTR_TO_JSON(CapacityReservationPreference, capacityReservationPreference_);
          };
          friend void from_json(const Darabonba::Json& j, EcsCapacityReservationAttr& obj) { 
            DARABONBA_PTR_FROM_JSON(CapacityReservationId, capacityReservationId_);
            DARABONBA_PTR_FROM_JSON(CapacityReservationPreference, capacityReservationPreference_);
          };
          EcsCapacityReservationAttr() = default ;
          EcsCapacityReservationAttr(const EcsCapacityReservationAttr &) = default ;
          EcsCapacityReservationAttr(EcsCapacityReservationAttr &&) = default ;
          EcsCapacityReservationAttr(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EcsCapacityReservationAttr() = default ;
          EcsCapacityReservationAttr& operator=(const EcsCapacityReservationAttr &) = default ;
          EcsCapacityReservationAttr& operator=(EcsCapacityReservationAttr &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->capacityReservationId_ == nullptr
        && this->capacityReservationPreference_ == nullptr; };
          // capacityReservationId Field Functions 
          bool hasCapacityReservationId() const { return this->capacityReservationId_ != nullptr;};
          void deleteCapacityReservationId() { this->capacityReservationId_ = nullptr;};
          inline string getCapacityReservationId() const { DARABONBA_PTR_GET_DEFAULT(capacityReservationId_, "") };
          inline EcsCapacityReservationAttr& setCapacityReservationId(string capacityReservationId) { DARABONBA_PTR_SET_VALUE(capacityReservationId_, capacityReservationId) };


          // capacityReservationPreference Field Functions 
          bool hasCapacityReservationPreference() const { return this->capacityReservationPreference_ != nullptr;};
          void deleteCapacityReservationPreference() { this->capacityReservationPreference_ = nullptr;};
          inline string getCapacityReservationPreference() const { DARABONBA_PTR_GET_DEFAULT(capacityReservationPreference_, "") };
          inline EcsCapacityReservationAttr& setCapacityReservationPreference(string capacityReservationPreference) { DARABONBA_PTR_SET_VALUE(capacityReservationPreference_, capacityReservationPreference) };


        protected:
          // The ID of the capacity reservation.
          shared_ptr<string> capacityReservationId_ {};
          // The preference of the capacity reservation.
          shared_ptr<string> capacityReservationPreference_ {};
        };

        class DedicatedInstanceAttribute : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DedicatedInstanceAttribute& obj) { 
            DARABONBA_PTR_TO_JSON(Affinity, affinity_);
            DARABONBA_PTR_TO_JSON(Tenancy, tenancy_);
          };
          friend void from_json(const Darabonba::Json& j, DedicatedInstanceAttribute& obj) { 
            DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
            DARABONBA_PTR_FROM_JSON(Tenancy, tenancy_);
          };
          DedicatedInstanceAttribute() = default ;
          DedicatedInstanceAttribute(const DedicatedInstanceAttribute &) = default ;
          DedicatedInstanceAttribute(DedicatedInstanceAttribute &&) = default ;
          DedicatedInstanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DedicatedInstanceAttribute() = default ;
          DedicatedInstanceAttribute& operator=(const DedicatedInstanceAttribute &) = default ;
          DedicatedInstanceAttribute& operator=(DedicatedInstanceAttribute &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->affinity_ == nullptr
        && this->tenancy_ == nullptr; };
          // affinity Field Functions 
          bool hasAffinity() const { return this->affinity_ != nullptr;};
          void deleteAffinity() { this->affinity_ = nullptr;};
          inline string getAffinity() const { DARABONBA_PTR_GET_DEFAULT(affinity_, "") };
          inline DedicatedInstanceAttribute& setAffinity(string affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };


          // tenancy Field Functions 
          bool hasTenancy() const { return this->tenancy_ != nullptr;};
          void deleteTenancy() { this->tenancy_ = nullptr;};
          inline string getTenancy() const { DARABONBA_PTR_GET_DEFAULT(tenancy_, "") };
          inline DedicatedInstanceAttribute& setTenancy(string tenancy) { DARABONBA_PTR_SET_VALUE(tenancy_, tenancy) };


        protected:
          // Indicates whether the instance on the dedicated host is associated with the dedicated host. Valid values:
          // 
          // *   default: The instance is not associated with the dedicated host. When the instance is restarted from economical mode, the instance may be automatically deployed on another dedicated host in the automatic deployment resource pool.
          // *   host: The instance is associated with the dedicated host. When the instance is restarted from economical mode, the instance is still deployed on the original dedicated host.
          shared_ptr<string> affinity_ {};
          // Indicates whether the instance is hosted on a dedicated host. Valid values:
          // 
          // *   default: The instance is not hosted on a dedicated host.
          // *   host: The instance is hosted on a dedicated host.
          shared_ptr<string> tenancy_ {};
        };

        class DedicatedHostAttribute : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DedicatedHostAttribute& obj) { 
            DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
            DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
            DARABONBA_PTR_TO_JSON(DedicatedHostName, dedicatedHostName_);
          };
          friend void from_json(const Darabonba::Json& j, DedicatedHostAttribute& obj) { 
            DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
            DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
            DARABONBA_PTR_FROM_JSON(DedicatedHostName, dedicatedHostName_);
          };
          DedicatedHostAttribute() = default ;
          DedicatedHostAttribute(const DedicatedHostAttribute &) = default ;
          DedicatedHostAttribute(DedicatedHostAttribute &&) = default ;
          DedicatedHostAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DedicatedHostAttribute() = default ;
          DedicatedHostAttribute& operator=(const DedicatedHostAttribute &) = default ;
          DedicatedHostAttribute& operator=(DedicatedHostAttribute &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dedicatedHostClusterId_ == nullptr
        && this->dedicatedHostId_ == nullptr && this->dedicatedHostName_ == nullptr; };
          // dedicatedHostClusterId Field Functions 
          bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
          void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
          inline string getDedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
          inline DedicatedHostAttribute& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


          // dedicatedHostId Field Functions 
          bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
          void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
          inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
          inline DedicatedHostAttribute& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


          // dedicatedHostName Field Functions 
          bool hasDedicatedHostName() const { return this->dedicatedHostName_ != nullptr;};
          void deleteDedicatedHostName() { this->dedicatedHostName_ = nullptr;};
          inline string getDedicatedHostName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostName_, "") };
          inline DedicatedHostAttribute& setDedicatedHostName(string dedicatedHostName) { DARABONBA_PTR_SET_VALUE(dedicatedHostName_, dedicatedHostName) };


        protected:
          // The ID of the dedicated host cluster.
          shared_ptr<string> dedicatedHostClusterId_ {};
          // The ID of the dedicated host.
          shared_ptr<string> dedicatedHostId_ {};
          // The name of the dedicated host.
          shared_ptr<string> dedicatedHostName_ {};
        };

        class CpuOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CpuOptions& obj) { 
            DARABONBA_PTR_TO_JSON(CoreCount, coreCount_);
            DARABONBA_PTR_TO_JSON(EnableVISST, enableVISST_);
            DARABONBA_PTR_TO_JSON(EnableVRDT, enableVRDT_);
            DARABONBA_PTR_TO_JSON(Numa, numa_);
            DARABONBA_PTR_TO_JSON(ThreadsPerCore, threadsPerCore_);
            DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
            DARABONBA_PTR_TO_JSON(TurboMode, turboMode_);
          };
          friend void from_json(const Darabonba::Json& j, CpuOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(CoreCount, coreCount_);
            DARABONBA_PTR_FROM_JSON(EnableVISST, enableVISST_);
            DARABONBA_PTR_FROM_JSON(EnableVRDT, enableVRDT_);
            DARABONBA_PTR_FROM_JSON(Numa, numa_);
            DARABONBA_PTR_FROM_JSON(ThreadsPerCore, threadsPerCore_);
            DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
            DARABONBA_PTR_FROM_JSON(TurboMode, turboMode_);
          };
          CpuOptions() = default ;
          CpuOptions(const CpuOptions &) = default ;
          CpuOptions(CpuOptions &&) = default ;
          CpuOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CpuOptions() = default ;
          CpuOptions& operator=(const CpuOptions &) = default ;
          CpuOptions& operator=(CpuOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->coreCount_ == nullptr
        && this->enableVISST_ == nullptr && this->enableVRDT_ == nullptr && this->numa_ == nullptr && this->threadsPerCore_ == nullptr && this->topologyType_ == nullptr
        && this->turboMode_ == nullptr; };
          // coreCount Field Functions 
          bool hasCoreCount() const { return this->coreCount_ != nullptr;};
          void deleteCoreCount() { this->coreCount_ = nullptr;};
          inline int32_t getCoreCount() const { DARABONBA_PTR_GET_DEFAULT(coreCount_, 0) };
          inline CpuOptions& setCoreCount(int32_t coreCount) { DARABONBA_PTR_SET_VALUE(coreCount_, coreCount) };


          // enableVISST Field Functions 
          bool hasEnableVISST() const { return this->enableVISST_ != nullptr;};
          void deleteEnableVISST() { this->enableVISST_ = nullptr;};
          inline bool getEnableVISST() const { DARABONBA_PTR_GET_DEFAULT(enableVISST_, false) };
          inline CpuOptions& setEnableVISST(bool enableVISST) { DARABONBA_PTR_SET_VALUE(enableVISST_, enableVISST) };


          // enableVRDT Field Functions 
          bool hasEnableVRDT() const { return this->enableVRDT_ != nullptr;};
          void deleteEnableVRDT() { this->enableVRDT_ = nullptr;};
          inline bool getEnableVRDT() const { DARABONBA_PTR_GET_DEFAULT(enableVRDT_, false) };
          inline CpuOptions& setEnableVRDT(bool enableVRDT) { DARABONBA_PTR_SET_VALUE(enableVRDT_, enableVRDT) };


          // numa Field Functions 
          bool hasNuma() const { return this->numa_ != nullptr;};
          void deleteNuma() { this->numa_ = nullptr;};
          inline string getNuma() const { DARABONBA_PTR_GET_DEFAULT(numa_, "") };
          inline CpuOptions& setNuma(string numa) { DARABONBA_PTR_SET_VALUE(numa_, numa) };


          // threadsPerCore Field Functions 
          bool hasThreadsPerCore() const { return this->threadsPerCore_ != nullptr;};
          void deleteThreadsPerCore() { this->threadsPerCore_ = nullptr;};
          inline int32_t getThreadsPerCore() const { DARABONBA_PTR_GET_DEFAULT(threadsPerCore_, 0) };
          inline CpuOptions& setThreadsPerCore(int32_t threadsPerCore) { DARABONBA_PTR_SET_VALUE(threadsPerCore_, threadsPerCore) };


          // topologyType Field Functions 
          bool hasTopologyType() const { return this->topologyType_ != nullptr;};
          void deleteTopologyType() { this->topologyType_ = nullptr;};
          inline string getTopologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
          inline CpuOptions& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


          // turboMode Field Functions 
          bool hasTurboMode() const { return this->turboMode_ != nullptr;};
          void deleteTurboMode() { this->turboMode_ = nullptr;};
          inline string getTurboMode() const { DARABONBA_PTR_GET_DEFAULT(turboMode_, "") };
          inline CpuOptions& setTurboMode(string turboMode) { DARABONBA_PTR_SET_VALUE(turboMode_, turboMode) };


        protected:
          // The number of physical CPU cores.
          shared_ptr<int32_t> coreCount_ {};
          shared_ptr<bool> enableVISST_ {};
          shared_ptr<bool> enableVRDT_ {};
          // >  This parameter is deprecated.
          shared_ptr<string> numa_ {};
          // The number of threads per CPU core.
          shared_ptr<int32_t> threadsPerCore_ {};
          // The CPU topology type of the instance. Valid values:
          // 
          // *   ContinuousCoreToHTMapping: Hyper-Threading (HT) continuous CPU topology
          // *   DiscreteCoreToHTMapping: HT discrete CPU topology
          shared_ptr<string> topologyType_ {};
          shared_ptr<string> turboMode_ {};
        };

        class ClockOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ClockOptions& obj) { 
            DARABONBA_PTR_TO_JSON(PtpStatus, ptpStatus_);
          };
          friend void from_json(const Darabonba::Json& j, ClockOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(PtpStatus, ptpStatus_);
          };
          ClockOptions() = default ;
          ClockOptions(const ClockOptions &) = default ;
          ClockOptions(ClockOptions &&) = default ;
          ClockOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ClockOptions() = default ;
          ClockOptions& operator=(const ClockOptions &) = default ;
          ClockOptions& operator=(ClockOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ptpStatus_ == nullptr; };
          // ptpStatus Field Functions 
          bool hasPtpStatus() const { return this->ptpStatus_ != nullptr;};
          void deletePtpStatus() { this->ptpStatus_ = nullptr;};
          inline string getPtpStatus() const { DARABONBA_PTR_GET_DEFAULT(ptpStatus_, "") };
          inline ClockOptions& setPtpStatus(string ptpStatus) { DARABONBA_PTR_SET_VALUE(ptpStatus_, ptpStatus) };


        protected:
          shared_ptr<string> ptpStatus_ {};
        };

        class AdditionalInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AdditionalInfo& obj) { 
            DARABONBA_PTR_TO_JSON(EnableHighDensityMode, enableHighDensityMode_);
          };
          friend void from_json(const Darabonba::Json& j, AdditionalInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(EnableHighDensityMode, enableHighDensityMode_);
          };
          AdditionalInfo() = default ;
          AdditionalInfo(const AdditionalInfo &) = default ;
          AdditionalInfo(AdditionalInfo &&) = default ;
          AdditionalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AdditionalInfo() = default ;
          AdditionalInfo& operator=(const AdditionalInfo &) = default ;
          AdditionalInfo& operator=(AdditionalInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enableHighDensityMode_ == nullptr; };
          // enableHighDensityMode Field Functions 
          bool hasEnableHighDensityMode() const { return this->enableHighDensityMode_ != nullptr;};
          void deleteEnableHighDensityMode() { this->enableHighDensityMode_ = nullptr;};
          inline bool getEnableHighDensityMode() const { DARABONBA_PTR_GET_DEFAULT(enableHighDensityMode_, false) };
          inline AdditionalInfo& setEnableHighDensityMode(bool enableHighDensityMode) { DARABONBA_PTR_SET_VALUE(enableHighDensityMode_, enableHighDensityMode) };


        protected:
          // >  This parameter is in invitational preview and is not publicly available.
          shared_ptr<bool> enableHighDensityMode_ {};
        };

        virtual bool empty() const override { return this->additionalInfo_ == nullptr
        && this->autoReleaseTime_ == nullptr && this->clockOptions_ == nullptr && this->clusterId_ == nullptr && this->cpu_ == nullptr && this->cpuOptions_ == nullptr
        && this->creationTime_ == nullptr && this->creditSpecification_ == nullptr && this->dedicatedHostAttribute_ == nullptr && this->dedicatedInstanceAttribute_ == nullptr && this->deletionProtection_ == nullptr
        && this->deploymentSetGroupNo_ == nullptr && this->deploymentSetId_ == nullptr && this->description_ == nullptr && this->deviceAvailable_ == nullptr && this->ecsCapacityReservationAttr_ == nullptr
        && this->eipAddress_ == nullptr && this->enableNVS_ == nullptr && this->expiredTime_ == nullptr && this->GPUAmount_ == nullptr && this->GPUSpec_ == nullptr
        && this->hibernationOptions_ == nullptr && this->hostName_ == nullptr && this->hpcClusterId_ == nullptr && this->ISP_ == nullptr && this->imageId_ == nullptr
        && this->imageOptions_ == nullptr && this->innerIpAddress_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->instanceNetworkType_ == nullptr && this->instanceType_ == nullptr && this->instanceTypeFamily_ == nullptr && this->internetChargeType_ == nullptr && this->internetMaxBandwidthIn_ == nullptr
        && this->internetMaxBandwidthOut_ == nullptr && this->ioOptimized_ == nullptr && this->keyPairName_ == nullptr && this->localStorageAmount_ == nullptr && this->localStorageCapacity_ == nullptr
        && this->memory_ == nullptr && this->metadataOptions_ == nullptr && this->networkInterfaces_ == nullptr && this->OSName_ == nullptr && this->OSNameEn_ == nullptr
        && this->OSType_ == nullptr && this->operationLocks_ == nullptr && this->privateDnsNameOptions_ == nullptr && this->publicIpAddress_ == nullptr && this->rdmaIpAddress_ == nullptr
        && this->recyclable_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->saleCycle_ == nullptr && this->securityGroupIds_ == nullptr
        && this->serialNumber_ == nullptr && this->spotDuration_ == nullptr && this->spotInterruptionBehavior_ == nullptr && this->spotPriceLimit_ == nullptr && this->spotStrategy_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->stoppedMode_ == nullptr && this->tags_ == nullptr && this->vlanId_ == nullptr
        && this->vpcAttributes_ == nullptr && this->zoneId_ == nullptr; };
        // additionalInfo Field Functions 
        bool hasAdditionalInfo() const { return this->additionalInfo_ != nullptr;};
        void deleteAdditionalInfo() { this->additionalInfo_ = nullptr;};
        inline const Instance::AdditionalInfo & getAdditionalInfo() const { DARABONBA_PTR_GET_CONST(additionalInfo_, Instance::AdditionalInfo) };
        inline Instance::AdditionalInfo getAdditionalInfo() { DARABONBA_PTR_GET(additionalInfo_, Instance::AdditionalInfo) };
        inline Instance& setAdditionalInfo(const Instance::AdditionalInfo & additionalInfo) { DARABONBA_PTR_SET_VALUE(additionalInfo_, additionalInfo) };
        inline Instance& setAdditionalInfo(Instance::AdditionalInfo && additionalInfo) { DARABONBA_PTR_SET_RVALUE(additionalInfo_, additionalInfo) };


        // autoReleaseTime Field Functions 
        bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
        void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
        inline string getAutoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, "") };
        inline Instance& setAutoReleaseTime(string autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


        // clockOptions Field Functions 
        bool hasClockOptions() const { return this->clockOptions_ != nullptr;};
        void deleteClockOptions() { this->clockOptions_ = nullptr;};
        inline const Instance::ClockOptions & getClockOptions() const { DARABONBA_PTR_GET_CONST(clockOptions_, Instance::ClockOptions) };
        inline Instance::ClockOptions getClockOptions() { DARABONBA_PTR_GET(clockOptions_, Instance::ClockOptions) };
        inline Instance& setClockOptions(const Instance::ClockOptions & clockOptions) { DARABONBA_PTR_SET_VALUE(clockOptions_, clockOptions) };
        inline Instance& setClockOptions(Instance::ClockOptions && clockOptions) { DARABONBA_PTR_SET_RVALUE(clockOptions_, clockOptions) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Instance& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline Instance& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // cpuOptions Field Functions 
        bool hasCpuOptions() const { return this->cpuOptions_ != nullptr;};
        void deleteCpuOptions() { this->cpuOptions_ = nullptr;};
        inline const Instance::CpuOptions & getCpuOptions() const { DARABONBA_PTR_GET_CONST(cpuOptions_, Instance::CpuOptions) };
        inline Instance::CpuOptions getCpuOptions() { DARABONBA_PTR_GET(cpuOptions_, Instance::CpuOptions) };
        inline Instance& setCpuOptions(const Instance::CpuOptions & cpuOptions) { DARABONBA_PTR_SET_VALUE(cpuOptions_, cpuOptions) };
        inline Instance& setCpuOptions(Instance::CpuOptions && cpuOptions) { DARABONBA_PTR_SET_RVALUE(cpuOptions_, cpuOptions) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Instance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // creditSpecification Field Functions 
        bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
        void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
        inline string getCreditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
        inline Instance& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


        // dedicatedHostAttribute Field Functions 
        bool hasDedicatedHostAttribute() const { return this->dedicatedHostAttribute_ != nullptr;};
        void deleteDedicatedHostAttribute() { this->dedicatedHostAttribute_ = nullptr;};
        inline const Instance::DedicatedHostAttribute & getDedicatedHostAttribute() const { DARABONBA_PTR_GET_CONST(dedicatedHostAttribute_, Instance::DedicatedHostAttribute) };
        inline Instance::DedicatedHostAttribute getDedicatedHostAttribute() { DARABONBA_PTR_GET(dedicatedHostAttribute_, Instance::DedicatedHostAttribute) };
        inline Instance& setDedicatedHostAttribute(const Instance::DedicatedHostAttribute & dedicatedHostAttribute) { DARABONBA_PTR_SET_VALUE(dedicatedHostAttribute_, dedicatedHostAttribute) };
        inline Instance& setDedicatedHostAttribute(Instance::DedicatedHostAttribute && dedicatedHostAttribute) { DARABONBA_PTR_SET_RVALUE(dedicatedHostAttribute_, dedicatedHostAttribute) };


        // dedicatedInstanceAttribute Field Functions 
        bool hasDedicatedInstanceAttribute() const { return this->dedicatedInstanceAttribute_ != nullptr;};
        void deleteDedicatedInstanceAttribute() { this->dedicatedInstanceAttribute_ = nullptr;};
        inline const Instance::DedicatedInstanceAttribute & getDedicatedInstanceAttribute() const { DARABONBA_PTR_GET_CONST(dedicatedInstanceAttribute_, Instance::DedicatedInstanceAttribute) };
        inline Instance::DedicatedInstanceAttribute getDedicatedInstanceAttribute() { DARABONBA_PTR_GET(dedicatedInstanceAttribute_, Instance::DedicatedInstanceAttribute) };
        inline Instance& setDedicatedInstanceAttribute(const Instance::DedicatedInstanceAttribute & dedicatedInstanceAttribute) { DARABONBA_PTR_SET_VALUE(dedicatedInstanceAttribute_, dedicatedInstanceAttribute) };
        inline Instance& setDedicatedInstanceAttribute(Instance::DedicatedInstanceAttribute && dedicatedInstanceAttribute) { DARABONBA_PTR_SET_RVALUE(dedicatedInstanceAttribute_, dedicatedInstanceAttribute) };


        // deletionProtection Field Functions 
        bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
        void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
        inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
        inline Instance& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


        // deploymentSetGroupNo Field Functions 
        bool hasDeploymentSetGroupNo() const { return this->deploymentSetGroupNo_ != nullptr;};
        void deleteDeploymentSetGroupNo() { this->deploymentSetGroupNo_ = nullptr;};
        inline int32_t getDeploymentSetGroupNo() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetGroupNo_, 0) };
        inline Instance& setDeploymentSetGroupNo(int32_t deploymentSetGroupNo) { DARABONBA_PTR_SET_VALUE(deploymentSetGroupNo_, deploymentSetGroupNo) };


        // deploymentSetId Field Functions 
        bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
        void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
        inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
        inline Instance& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Instance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // deviceAvailable Field Functions 
        bool hasDeviceAvailable() const { return this->deviceAvailable_ != nullptr;};
        void deleteDeviceAvailable() { this->deviceAvailable_ = nullptr;};
        inline bool getDeviceAvailable() const { DARABONBA_PTR_GET_DEFAULT(deviceAvailable_, false) };
        inline Instance& setDeviceAvailable(bool deviceAvailable) { DARABONBA_PTR_SET_VALUE(deviceAvailable_, deviceAvailable) };


        // ecsCapacityReservationAttr Field Functions 
        bool hasEcsCapacityReservationAttr() const { return this->ecsCapacityReservationAttr_ != nullptr;};
        void deleteEcsCapacityReservationAttr() { this->ecsCapacityReservationAttr_ = nullptr;};
        inline const Instance::EcsCapacityReservationAttr & getEcsCapacityReservationAttr() const { DARABONBA_PTR_GET_CONST(ecsCapacityReservationAttr_, Instance::EcsCapacityReservationAttr) };
        inline Instance::EcsCapacityReservationAttr getEcsCapacityReservationAttr() { DARABONBA_PTR_GET(ecsCapacityReservationAttr_, Instance::EcsCapacityReservationAttr) };
        inline Instance& setEcsCapacityReservationAttr(const Instance::EcsCapacityReservationAttr & ecsCapacityReservationAttr) { DARABONBA_PTR_SET_VALUE(ecsCapacityReservationAttr_, ecsCapacityReservationAttr) };
        inline Instance& setEcsCapacityReservationAttr(Instance::EcsCapacityReservationAttr && ecsCapacityReservationAttr) { DARABONBA_PTR_SET_RVALUE(ecsCapacityReservationAttr_, ecsCapacityReservationAttr) };


        // eipAddress Field Functions 
        bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
        void deleteEipAddress() { this->eipAddress_ = nullptr;};
        inline const Instance::EipAddress & getEipAddress() const { DARABONBA_PTR_GET_CONST(eipAddress_, Instance::EipAddress) };
        inline Instance::EipAddress getEipAddress() { DARABONBA_PTR_GET(eipAddress_, Instance::EipAddress) };
        inline Instance& setEipAddress(const Instance::EipAddress & eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };
        inline Instance& setEipAddress(Instance::EipAddress && eipAddress) { DARABONBA_PTR_SET_RVALUE(eipAddress_, eipAddress) };


        // enableNVS Field Functions 
        bool hasEnableNVS() const { return this->enableNVS_ != nullptr;};
        void deleteEnableNVS() { this->enableNVS_ = nullptr;};
        inline bool getEnableNVS() const { DARABONBA_PTR_GET_DEFAULT(enableNVS_, false) };
        inline Instance& setEnableNVS(bool enableNVS) { DARABONBA_PTR_SET_VALUE(enableNVS_, enableNVS) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline Instance& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // GPUAmount Field Functions 
        bool hasGPUAmount() const { return this->GPUAmount_ != nullptr;};
        void deleteGPUAmount() { this->GPUAmount_ = nullptr;};
        inline int32_t getGPUAmount() const { DARABONBA_PTR_GET_DEFAULT(GPUAmount_, 0) };
        inline Instance& setGPUAmount(int32_t GPUAmount) { DARABONBA_PTR_SET_VALUE(GPUAmount_, GPUAmount) };


        // GPUSpec Field Functions 
        bool hasGPUSpec() const { return this->GPUSpec_ != nullptr;};
        void deleteGPUSpec() { this->GPUSpec_ = nullptr;};
        inline string getGPUSpec() const { DARABONBA_PTR_GET_DEFAULT(GPUSpec_, "") };
        inline Instance& setGPUSpec(string GPUSpec) { DARABONBA_PTR_SET_VALUE(GPUSpec_, GPUSpec) };


        // hibernationOptions Field Functions 
        bool hasHibernationOptions() const { return this->hibernationOptions_ != nullptr;};
        void deleteHibernationOptions() { this->hibernationOptions_ = nullptr;};
        inline const Instance::HibernationOptions & getHibernationOptions() const { DARABONBA_PTR_GET_CONST(hibernationOptions_, Instance::HibernationOptions) };
        inline Instance::HibernationOptions getHibernationOptions() { DARABONBA_PTR_GET(hibernationOptions_, Instance::HibernationOptions) };
        inline Instance& setHibernationOptions(const Instance::HibernationOptions & hibernationOptions) { DARABONBA_PTR_SET_VALUE(hibernationOptions_, hibernationOptions) };
        inline Instance& setHibernationOptions(Instance::HibernationOptions && hibernationOptions) { DARABONBA_PTR_SET_RVALUE(hibernationOptions_, hibernationOptions) };


        // hostName Field Functions 
        bool hasHostName() const { return this->hostName_ != nullptr;};
        void deleteHostName() { this->hostName_ = nullptr;};
        inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
        inline Instance& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


        // hpcClusterId Field Functions 
        bool hasHpcClusterId() const { return this->hpcClusterId_ != nullptr;};
        void deleteHpcClusterId() { this->hpcClusterId_ = nullptr;};
        inline string getHpcClusterId() const { DARABONBA_PTR_GET_DEFAULT(hpcClusterId_, "") };
        inline Instance& setHpcClusterId(string hpcClusterId) { DARABONBA_PTR_SET_VALUE(hpcClusterId_, hpcClusterId) };


        // ISP Field Functions 
        bool hasISP() const { return this->ISP_ != nullptr;};
        void deleteISP() { this->ISP_ = nullptr;};
        inline string getISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
        inline Instance& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline Instance& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // imageOptions Field Functions 
        bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
        void deleteImageOptions() { this->imageOptions_ = nullptr;};
        inline const Instance::ImageOptions & getImageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, Instance::ImageOptions) };
        inline Instance::ImageOptions getImageOptions() { DARABONBA_PTR_GET(imageOptions_, Instance::ImageOptions) };
        inline Instance& setImageOptions(const Instance::ImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
        inline Instance& setImageOptions(Instance::ImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


        // innerIpAddress Field Functions 
        bool hasInnerIpAddress() const { return this->innerIpAddress_ != nullptr;};
        void deleteInnerIpAddress() { this->innerIpAddress_ = nullptr;};
        inline const Instance::InnerIpAddress & getInnerIpAddress() const { DARABONBA_PTR_GET_CONST(innerIpAddress_, Instance::InnerIpAddress) };
        inline Instance::InnerIpAddress getInnerIpAddress() { DARABONBA_PTR_GET(innerIpAddress_, Instance::InnerIpAddress) };
        inline Instance& setInnerIpAddress(const Instance::InnerIpAddress & innerIpAddress) { DARABONBA_PTR_SET_VALUE(innerIpAddress_, innerIpAddress) };
        inline Instance& setInnerIpAddress(Instance::InnerIpAddress && innerIpAddress) { DARABONBA_PTR_SET_RVALUE(innerIpAddress_, innerIpAddress) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline Instance& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Instance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceNetworkType Field Functions 
        bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
        void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
        inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
        inline Instance& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline Instance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // instanceTypeFamily Field Functions 
        bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
        void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
        inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
        inline Instance& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


        // internetChargeType Field Functions 
        bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
        void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
        inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
        inline Instance& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


        // internetMaxBandwidthIn Field Functions 
        bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
        void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
        inline int32_t getInternetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
        inline Instance& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


        // internetMaxBandwidthOut Field Functions 
        bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
        void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
        inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
        inline Instance& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


        // ioOptimized Field Functions 
        bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
        void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
        inline bool getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, false) };
        inline Instance& setIoOptimized(bool ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


        // keyPairName Field Functions 
        bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
        void deleteKeyPairName() { this->keyPairName_ = nullptr;};
        inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
        inline Instance& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


        // localStorageAmount Field Functions 
        bool hasLocalStorageAmount() const { return this->localStorageAmount_ != nullptr;};
        void deleteLocalStorageAmount() { this->localStorageAmount_ = nullptr;};
        inline int32_t getLocalStorageAmount() const { DARABONBA_PTR_GET_DEFAULT(localStorageAmount_, 0) };
        inline Instance& setLocalStorageAmount(int32_t localStorageAmount) { DARABONBA_PTR_SET_VALUE(localStorageAmount_, localStorageAmount) };


        // localStorageCapacity Field Functions 
        bool hasLocalStorageCapacity() const { return this->localStorageCapacity_ != nullptr;};
        void deleteLocalStorageCapacity() { this->localStorageCapacity_ = nullptr;};
        inline int64_t getLocalStorageCapacity() const { DARABONBA_PTR_GET_DEFAULT(localStorageCapacity_, 0L) };
        inline Instance& setLocalStorageCapacity(int64_t localStorageCapacity) { DARABONBA_PTR_SET_VALUE(localStorageCapacity_, localStorageCapacity) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
        inline Instance& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // metadataOptions Field Functions 
        bool hasMetadataOptions() const { return this->metadataOptions_ != nullptr;};
        void deleteMetadataOptions() { this->metadataOptions_ = nullptr;};
        inline const Instance::MetadataOptions & getMetadataOptions() const { DARABONBA_PTR_GET_CONST(metadataOptions_, Instance::MetadataOptions) };
        inline Instance::MetadataOptions getMetadataOptions() { DARABONBA_PTR_GET(metadataOptions_, Instance::MetadataOptions) };
        inline Instance& setMetadataOptions(const Instance::MetadataOptions & metadataOptions) { DARABONBA_PTR_SET_VALUE(metadataOptions_, metadataOptions) };
        inline Instance& setMetadataOptions(Instance::MetadataOptions && metadataOptions) { DARABONBA_PTR_SET_RVALUE(metadataOptions_, metadataOptions) };


        // networkInterfaces Field Functions 
        bool hasNetworkInterfaces() const { return this->networkInterfaces_ != nullptr;};
        void deleteNetworkInterfaces() { this->networkInterfaces_ = nullptr;};
        inline const Instance::NetworkInterfaces & getNetworkInterfaces() const { DARABONBA_PTR_GET_CONST(networkInterfaces_, Instance::NetworkInterfaces) };
        inline Instance::NetworkInterfaces getNetworkInterfaces() { DARABONBA_PTR_GET(networkInterfaces_, Instance::NetworkInterfaces) };
        inline Instance& setNetworkInterfaces(const Instance::NetworkInterfaces & networkInterfaces) { DARABONBA_PTR_SET_VALUE(networkInterfaces_, networkInterfaces) };
        inline Instance& setNetworkInterfaces(Instance::NetworkInterfaces && networkInterfaces) { DARABONBA_PTR_SET_RVALUE(networkInterfaces_, networkInterfaces) };


        // OSName Field Functions 
        bool hasOSName() const { return this->OSName_ != nullptr;};
        void deleteOSName() { this->OSName_ = nullptr;};
        inline string getOSName() const { DARABONBA_PTR_GET_DEFAULT(OSName_, "") };
        inline Instance& setOSName(string OSName) { DARABONBA_PTR_SET_VALUE(OSName_, OSName) };


        // OSNameEn Field Functions 
        bool hasOSNameEn() const { return this->OSNameEn_ != nullptr;};
        void deleteOSNameEn() { this->OSNameEn_ = nullptr;};
        inline string getOSNameEn() const { DARABONBA_PTR_GET_DEFAULT(OSNameEn_, "") };
        inline Instance& setOSNameEn(string OSNameEn) { DARABONBA_PTR_SET_VALUE(OSNameEn_, OSNameEn) };


        // OSType Field Functions 
        bool hasOSType() const { return this->OSType_ != nullptr;};
        void deleteOSType() { this->OSType_ = nullptr;};
        inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
        inline Instance& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


        // operationLocks Field Functions 
        bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
        void deleteOperationLocks() { this->operationLocks_ = nullptr;};
        inline const Instance::OperationLocks & getOperationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, Instance::OperationLocks) };
        inline Instance::OperationLocks getOperationLocks() { DARABONBA_PTR_GET(operationLocks_, Instance::OperationLocks) };
        inline Instance& setOperationLocks(const Instance::OperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
        inline Instance& setOperationLocks(Instance::OperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


        // privateDnsNameOptions Field Functions 
        bool hasPrivateDnsNameOptions() const { return this->privateDnsNameOptions_ != nullptr;};
        void deletePrivateDnsNameOptions() { this->privateDnsNameOptions_ = nullptr;};
        inline const Instance::PrivateDnsNameOptions & getPrivateDnsNameOptions() const { DARABONBA_PTR_GET_CONST(privateDnsNameOptions_, Instance::PrivateDnsNameOptions) };
        inline Instance::PrivateDnsNameOptions getPrivateDnsNameOptions() { DARABONBA_PTR_GET(privateDnsNameOptions_, Instance::PrivateDnsNameOptions) };
        inline Instance& setPrivateDnsNameOptions(const Instance::PrivateDnsNameOptions & privateDnsNameOptions) { DARABONBA_PTR_SET_VALUE(privateDnsNameOptions_, privateDnsNameOptions) };
        inline Instance& setPrivateDnsNameOptions(Instance::PrivateDnsNameOptions && privateDnsNameOptions) { DARABONBA_PTR_SET_RVALUE(privateDnsNameOptions_, privateDnsNameOptions) };


        // publicIpAddress Field Functions 
        bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
        void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
        inline const Instance::PublicIpAddress & getPublicIpAddress() const { DARABONBA_PTR_GET_CONST(publicIpAddress_, Instance::PublicIpAddress) };
        inline Instance::PublicIpAddress getPublicIpAddress() { DARABONBA_PTR_GET(publicIpAddress_, Instance::PublicIpAddress) };
        inline Instance& setPublicIpAddress(const Instance::PublicIpAddress & publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };
        inline Instance& setPublicIpAddress(Instance::PublicIpAddress && publicIpAddress) { DARABONBA_PTR_SET_RVALUE(publicIpAddress_, publicIpAddress) };


        // rdmaIpAddress Field Functions 
        bool hasRdmaIpAddress() const { return this->rdmaIpAddress_ != nullptr;};
        void deleteRdmaIpAddress() { this->rdmaIpAddress_ = nullptr;};
        inline const Instance::RdmaIpAddress & getRdmaIpAddress() const { DARABONBA_PTR_GET_CONST(rdmaIpAddress_, Instance::RdmaIpAddress) };
        inline Instance::RdmaIpAddress getRdmaIpAddress() { DARABONBA_PTR_GET(rdmaIpAddress_, Instance::RdmaIpAddress) };
        inline Instance& setRdmaIpAddress(const Instance::RdmaIpAddress & rdmaIpAddress) { DARABONBA_PTR_SET_VALUE(rdmaIpAddress_, rdmaIpAddress) };
        inline Instance& setRdmaIpAddress(Instance::RdmaIpAddress && rdmaIpAddress) { DARABONBA_PTR_SET_RVALUE(rdmaIpAddress_, rdmaIpAddress) };


        // recyclable Field Functions 
        bool hasRecyclable() const { return this->recyclable_ != nullptr;};
        void deleteRecyclable() { this->recyclable_ = nullptr;};
        inline bool getRecyclable() const { DARABONBA_PTR_GET_DEFAULT(recyclable_, false) };
        inline Instance& setRecyclable(bool recyclable) { DARABONBA_PTR_SET_VALUE(recyclable_, recyclable) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Instance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Instance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // saleCycle Field Functions 
        bool hasSaleCycle() const { return this->saleCycle_ != nullptr;};
        void deleteSaleCycle() { this->saleCycle_ = nullptr;};
        inline string getSaleCycle() const { DARABONBA_PTR_GET_DEFAULT(saleCycle_, "") };
        inline Instance& setSaleCycle(string saleCycle) { DARABONBA_PTR_SET_VALUE(saleCycle_, saleCycle) };


        // securityGroupIds Field Functions 
        bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
        void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
        inline const Instance::SecurityGroupIds & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, Instance::SecurityGroupIds) };
        inline Instance::SecurityGroupIds getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, Instance::SecurityGroupIds) };
        inline Instance& setSecurityGroupIds(const Instance::SecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
        inline Instance& setSecurityGroupIds(Instance::SecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


        // serialNumber Field Functions 
        bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
        void deleteSerialNumber() { this->serialNumber_ = nullptr;};
        inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
        inline Instance& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


        // spotDuration Field Functions 
        bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
        void deleteSpotDuration() { this->spotDuration_ = nullptr;};
        inline int32_t getSpotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
        inline Instance& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


        // spotInterruptionBehavior Field Functions 
        bool hasSpotInterruptionBehavior() const { return this->spotInterruptionBehavior_ != nullptr;};
        void deleteSpotInterruptionBehavior() { this->spotInterruptionBehavior_ = nullptr;};
        inline string getSpotInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(spotInterruptionBehavior_, "") };
        inline Instance& setSpotInterruptionBehavior(string spotInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(spotInterruptionBehavior_, spotInterruptionBehavior) };


        // spotPriceLimit Field Functions 
        bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
        void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
        inline float getSpotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
        inline Instance& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


        // spotStrategy Field Functions 
        bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
        void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
        inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
        inline Instance& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Instance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Instance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // stoppedMode Field Functions 
        bool hasStoppedMode() const { return this->stoppedMode_ != nullptr;};
        void deleteStoppedMode() { this->stoppedMode_ = nullptr;};
        inline string getStoppedMode() const { DARABONBA_PTR_GET_DEFAULT(stoppedMode_, "") };
        inline Instance& setStoppedMode(string stoppedMode) { DARABONBA_PTR_SET_VALUE(stoppedMode_, stoppedMode) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Instance::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Instance::Tags) };
        inline Instance::Tags getTags() { DARABONBA_PTR_GET(tags_, Instance::Tags) };
        inline Instance& setTags(const Instance::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Instance& setTags(Instance::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vlanId Field Functions 
        bool hasVlanId() const { return this->vlanId_ != nullptr;};
        void deleteVlanId() { this->vlanId_ = nullptr;};
        inline string getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
        inline Instance& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


        // vpcAttributes Field Functions 
        bool hasVpcAttributes() const { return this->vpcAttributes_ != nullptr;};
        void deleteVpcAttributes() { this->vpcAttributes_ = nullptr;};
        inline const Instance::VpcAttributes & getVpcAttributes() const { DARABONBA_PTR_GET_CONST(vpcAttributes_, Instance::VpcAttributes) };
        inline Instance::VpcAttributes getVpcAttributes() { DARABONBA_PTR_GET(vpcAttributes_, Instance::VpcAttributes) };
        inline Instance& setVpcAttributes(const Instance::VpcAttributes & vpcAttributes) { DARABONBA_PTR_SET_VALUE(vpcAttributes_, vpcAttributes) };
        inline Instance& setVpcAttributes(Instance::VpcAttributes && vpcAttributes) { DARABONBA_PTR_SET_RVALUE(vpcAttributes_, vpcAttributes) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Instance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<Instance::AdditionalInfo> additionalInfo_ {};
        // The automatic release time of the pay-as-you-go instance.
        shared_ptr<string> autoReleaseTime_ {};
        shared_ptr<Instance::ClockOptions> clockOptions_ {};
        // The ID of the cluster to which the instance belongs.
        // 
        // >  This parameter will be removed in the future. We recommend that you use other parameters to ensure future compatibility.
        shared_ptr<string> clusterId_ {};
        // The number of vCPUs.
        shared_ptr<int32_t> cpu_ {};
        // Details about the CPU options.
        shared_ptr<Instance::CpuOptions> cpuOptions_ {};
        // The time when the instance was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
        shared_ptr<string> creationTime_ {};
        // The performance mode of the burstable instance. Valid values:
        // 
        // *   Standard: the standard mode. For more information, see the "Standard mode" section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
        // *   Unlimited: the unlimited mode. For more information, see the "Unlimited mode" section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
        shared_ptr<string> creditSpecification_ {};
        // The information about the dedicated host. The value is an array that consists of DedicatedHostClusterId, DedicatedHostId, and DedicatedHostName.
        shared_ptr<Instance::DedicatedHostAttribute> dedicatedHostAttribute_ {};
        // The attributes of the instance on the dedicated host.
        shared_ptr<Instance::DedicatedInstanceAttribute> dedicatedInstanceAttribute_ {};
        // Indicates whether release protection is enabled for the instance. This parameter determines whether you can use the ECS console or call the DeleteInstance operation to release the instance. Valid values:
        // 
        // *   true: Release protection is enabled for the instance.
        // *   false: Release protection is disabled for the instance.
        // 
        // >  This parameter is applicable only to pay-as-you-go instances. The release protection feature can protect instances against manual releases, but not against automatic releases.
        shared_ptr<bool> deletionProtection_ {};
        // The number of the deployment set group to which the instance belongs in a deployment set.
        shared_ptr<int32_t> deploymentSetGroupNo_ {};
        // The ID of the deployment set to which the instance belongs.
        shared_ptr<string> deploymentSetId_ {};
        // The description of the instance.
        shared_ptr<string> description_ {};
        // Indicates whether data disks can be attached to the instance. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> deviceAvailable_ {};
        // Details about the capacity reservation associated with the instance.
        shared_ptr<Instance::EcsCapacityReservationAttr> ecsCapacityReservationAttr_ {};
        // Details about the EIP associated with the instance.
        shared_ptr<Instance::EipAddress> eipAddress_ {};
        shared_ptr<bool> enableNVS_ {};
        // The expiration time of the instance. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
        shared_ptr<string> expiredTime_ {};
        // The number of GPUs for the instance type.
        shared_ptr<int32_t> GPUAmount_ {};
        // The category of GPUs for the instance type.
        shared_ptr<string> GPUSpec_ {};
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<Instance::HibernationOptions> hibernationOptions_ {};
        // The hostname of the instance.
        shared_ptr<string> hostName_ {};
        // The ID of the HPC cluster to which the instance belongs.
        shared_ptr<string> hpcClusterId_ {};
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<string> ISP_ {};
        // The image ID of the instance.
        shared_ptr<string> imageId_ {};
        // The image options.
        shared_ptr<Instance::ImageOptions> imageOptions_ {};
        // The internal IP addresses of the instance located in the classic network.
        shared_ptr<Instance::InnerIpAddress> innerIpAddress_ {};
        // The billing method of the instance. Valid values:
        // 
        // *   PrePaid: subscription
        // *   PostPaid: pay-as-you-go
        shared_ptr<string> instanceChargeType_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The instance name.
        shared_ptr<string> instanceName_ {};
        // The network type of the instance. Valid values:
        // 
        // *   classic
        // *   vpc
        shared_ptr<string> instanceNetworkType_ {};
        // The instance type of the instance.
        shared_ptr<string> instanceType_ {};
        // The instance family of the instance.
        shared_ptr<string> instanceTypeFamily_ {};
        // The billing method for network usage. Valid values:
        // 
        // *   PayByBandwidth: pay-by-bandwidth
        // *   PayByTraffic: pay-by-traffic
        shared_ptr<string> internetChargeType_ {};
        // The maximum inbound public bandwidth. Unit: Mbit/s.
        shared_ptr<int32_t> internetMaxBandwidthIn_ {};
        // The maximum outbound public bandwidth. Unit: Mbit/s.
        shared_ptr<int32_t> internetMaxBandwidthOut_ {};
        // Indicates whether the instance is an I/O optimized instance. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> ioOptimized_ {};
        // The name of the key pair.
        shared_ptr<string> keyPairName_ {};
        // The number of local disks attached to the instance.
        shared_ptr<int32_t> localStorageAmount_ {};
        // The capacity of local disks attached to the instance. Unit: GiB.
        shared_ptr<int64_t> localStorageCapacity_ {};
        // The memory size. Unit: MiB.
        shared_ptr<int32_t> memory_ {};
        // Details about the metadata options.
        shared_ptr<Instance::MetadataOptions> metadataOptions_ {};
        // The ENIs attached to the instance.
        shared_ptr<Instance::NetworkInterfaces> networkInterfaces_ {};
        // The name of the operating system of the instance.
        shared_ptr<string> OSName_ {};
        // The English name of the operating system of the instance.
        shared_ptr<string> OSNameEn_ {};
        // The type of the operating system of the instance. Valid values:
        // 
        // *   windows: Windows operating systems
        // *   linux: Linux operating systems
        shared_ptr<string> OSType_ {};
        // The reasons why the instance was locked.
        shared_ptr<Instance::OperationLocks> operationLocks_ {};
        // The private domain name options of the instance.
        // 
        // For information about the resolution of ECS private domain names, see [ECS private DNS resolution](https://help.aliyun.com/document_detail/2844797.html).
        // 
        // >  This parameter is returned only when the `AdditionalAttributes` parameter contains `PRIVATE_DNS_OPTIONS` in the request.
        shared_ptr<Instance::PrivateDnsNameOptions> privateDnsNameOptions_ {};
        // The public IP addresses of the instance.
        shared_ptr<Instance::PublicIpAddress> publicIpAddress_ {};
        // The RDMA IP addresses of the instance in the HPC cluster.
        shared_ptr<Instance::RdmaIpAddress> rdmaIpAddress_ {};
        // Indicates whether the instance can be recycled.
        shared_ptr<bool> recyclable_ {};
        // The region ID of the instance.
        shared_ptr<string> regionId_ {};
        // The ID of the resource group to which the instance belongs.
        shared_ptr<string> resourceGroupId_ {};
        // >  The parameter is removed.
        shared_ptr<string> saleCycle_ {};
        // The IDs of the security groups to which the instance belongs.
        shared_ptr<Instance::SecurityGroupIds> securityGroupIds_ {};
        // The serial number of the instance.
        shared_ptr<string> serialNumber_ {};
        // The protection period of the spot instance. Unit: hours. Valid values:
        // 
        // *   1: After a spot instance is created, Alibaba Cloud ensures that the instance is not automatically released within 1 hour. After the 1-hour protection period ends, the system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
        // *   0: After a spot instance is created, Alibaba Cloud does not ensure that the instance runs for 1 hour. The system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
        // 
        // Alibaba Cloud sends an ECS system event to notify you 5 minutes before the instance is released. Spot instances are billed by second. We recommend that you specify a protection period based on your business requirements.
        // 
        // >  This parameter is returned when SpotStrategy is set to SpotWithPriceLimit or SpotAsPriceGo.
        shared_ptr<int32_t> spotDuration_ {};
        // The interruption mode of the spot instance when the system initiates a spot instance interruption operation. Valid values:
        // 
        // *   Terminate: releases the spot instance.
        // *   Stop: stops the instance in economical mode.
        shared_ptr<string> spotInterruptionBehavior_ {};
        // The maximum hourly price of the instance. The value can be accurate to three decimal places. This parameter is valid when SpotStrategy is set to SpotWithPriceLimit.
        shared_ptr<float> spotPriceLimit_ {};
        // The bidding policy for the pay-as-you-go instance. Valid values:
        // 
        // *   NoSpot: The instance is a regular pay-as-you-go instance.
        // *   SpotWithPriceLimit: The instance is a spot instance with a user-defined maximum hourly price.
        // *   SpotAsPriceGo: The instance is a spot instance for which the market price is automatically used as the bid price. The market price can be up to the pay-as-you-go price.
        shared_ptr<string> spotStrategy_ {};
        // The time when the instance was last started. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
        shared_ptr<string> startTime_ {};
        // The status of the instance.
        shared_ptr<string> status_ {};
        // Indicates whether the instance continues to be billed after it is stopped. Valid values:
        // 
        // *   KeepCharging: The instance is stopped in standard mode. Billing for the instance continues after the instance is stopped, and resources are retained for the instance.
        // *   StopCharging: The instance is stopped in economical mode. Billing for some resources of the instance stops after the instance is stopped. When the instance is stopped, its resources such as vCPUs, memory, and public IP addresses are released. The instance may be unable to restart if some required resources are out of stock in the current region.
        // *   Not-applicable: The instance does not support economical mode.
        shared_ptr<string> stoppedMode_ {};
        // The tags of the instance.
        shared_ptr<Instance::Tags> tags_ {};
        // The virtual LAN (VLAN) ID of the instance.
        // 
        // >  This parameter will be removed in the future. We recommend that you use other parameters to ensure future compatibility.
        shared_ptr<string> vlanId_ {};
        // The VPC attributes of the instance.
        shared_ptr<Instance::VpcAttributes> vpcAttributes_ {};
        // The zone ID of the instance.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->instance_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const vector<Instances::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Instances::Instance>) };
      inline vector<Instances::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<Instances::Instance>) };
      inline Instances& setInstance(const vector<Instances::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline Instances& setInstance(vector<Instances::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    protected:
      shared_ptr<vector<Instances::Instance>> instance_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeInstancesResponseBody::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeInstancesResponseBody::Instances) };
    inline DescribeInstancesResponseBody::Instances getInstances() { DARABONBA_PTR_GET(instances_, DescribeInstancesResponseBody::Instances) };
    inline DescribeInstancesResponseBody& setInstances(const DescribeInstancesResponseBody::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeInstancesResponseBody& setInstances(DescribeInstancesResponseBody::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


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
    // Details about the queried instances.
    shared_ptr<DescribeInstancesResponseBody::Instances> instances_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of instances queried.
    // 
    // >  If you specify the `MaxResults` and `NextToken` request parameters to perform a paged query, the value of the `TotalCount` response parameter is invalid.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
