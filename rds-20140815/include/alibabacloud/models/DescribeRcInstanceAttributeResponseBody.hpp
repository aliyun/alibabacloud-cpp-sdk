// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreateMode, createMode_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_TO_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(DedicatedHostAttribute, dedicatedHostAttribute_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(EcsInstanceType, ecsInstanceType_);
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(GpuTypes, gpuTypes_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(HostType, hostType_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InnerIpAddress, innerIpAddress_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoppedMode, stoppedMode_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
      DARABONBA_PTR_TO_JSON(VpcAttributes, vpcAttributes_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreateMode, createMode_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_FROM_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostAttribute, dedicatedHostAttribute_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceType, ecsInstanceType_);
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(GpuTypes, gpuTypes_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(HostType, hostType_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InnerIpAddress, innerIpAddress_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoppedMode, stoppedMode_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
      DARABONBA_PTR_FROM_JSON(VpcAttributes, vpcAttributes_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeRCInstanceAttributeResponseBody() = default ;
    DescribeRCInstanceAttributeResponseBody(const DescribeRCInstanceAttributeResponseBody &) = default ;
    DescribeRCInstanceAttributeResponseBody(DescribeRCInstanceAttributeResponseBody &&) = default ;
    DescribeRCInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceAttributeResponseBody() = default ;
    DescribeRCInstanceAttributeResponseBody& operator=(const DescribeRCInstanceAttributeResponseBody &) = default ;
    DescribeRCInstanceAttributeResponseBody& operator=(DescribeRCInstanceAttributeResponseBody &&) = default ;
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
      // The network address translation (NAT) IP address of the instance. The NAT IP address is used by instances in different VPCs for communication.
      shared_ptr<string> natIpAddress_ {};
      // The private IP addresses of the instance.
      shared_ptr<VpcAttributes::PrivateIpAddress> privateIpAddress_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The VPC ID.
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
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
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
        virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Tag& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Tag& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


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
        shared_ptr<string> resourceId_ {};
        shared_ptr<string> resourceType_ {};
        shared_ptr<string> tagKey_ {};
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

    class SystemDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
        DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
        DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_TO_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      };
      friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
        DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_FROM_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      };
      SystemDisk() = default ;
      SystemDisk(const SystemDisk &) = default ;
      SystemDisk(SystemDisk &&) = default ;
      SystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemDisk() = default ;
      SystemDisk& operator=(const SystemDisk &) = default ;
      SystemDisk& operator=(SystemDisk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deleteWithInstance_ == nullptr
        && this->encrypted_ == nullptr && this->systemDiskCategory_ == nullptr && this->systemDiskPerformanceLevel_ == nullptr && this->systemDiskSize_ == nullptr; };
      // deleteWithInstance Field Functions 
      bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
      void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
      inline bool getDeleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
      inline SystemDisk& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


      // encrypted Field Functions 
      bool hasEncrypted() const { return this->encrypted_ != nullptr;};
      void deleteEncrypted() { this->encrypted_ = nullptr;};
      inline string getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
      inline SystemDisk& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


      // systemDiskCategory Field Functions 
      bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
      void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
      inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
      inline SystemDisk& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


      // systemDiskPerformanceLevel Field Functions 
      bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
      void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
      inline string getSystemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
      inline SystemDisk& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int64_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
      inline SystemDisk& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    protected:
      shared_ptr<bool> deleteWithInstance_ {};
      shared_ptr<string> encrypted_ {};
      shared_ptr<string> systemDiskCategory_ {};
      shared_ptr<string> systemDiskPerformanceLevel_ {};
      shared_ptr<int64_t> systemDiskSize_ {};
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
          DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
        };
        friend void from_json(const Darabonba::Json& j, LockReason& obj) { 
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
        virtual bool empty() const override { return this->lockReason_ == nullptr; };
        // lockReason Field Functions 
        bool hasLockReason() const { return this->lockReason_ != nullptr;};
        void deleteLockReason() { this->lockReason_ = nullptr;};
        inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
        inline LockReason& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


      protected:
        // The reason why the instance is locked. Valid values:
        // 
        // *   **financial**: The instance is locked due to overdue payments.
        // *   **security**: The instance is locked for security purposes.
        // *   **recycling**: The instance is locked because the instance is a preemptible instance and pending to be released.
        // *   **dedicatedhostfinancial**: The instance is locked due to overdue payments for the dedicated host.
        // *   **refunded**: The instance is locked because a refund was made for the instance.
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

    class EipAddress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EipAddress& obj) { 
        DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      };
      friend void from_json(const Darabonba::Json& j, EipAddress& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
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
        && this->bandwidth_ == nullptr && this->internetChargeType_ == nullptr && this->ipAddress_ == nullptr; };
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


    protected:
      // The EIP ID.
      shared_ptr<string> allocationId_ {};
      // The maximum Internet bandwidth of the EIP. Unit: Mbit/s.
      shared_ptr<int32_t> bandwidth_ {};
      // The billing method of the Internet-facing instance. Valid values:
      // 
      // *   **paybytraffic:** pay-by-data-transfer
      // *   **paybybandwidth**: pay-by-bandwidth
      // 
      // >  If the **pay-by-traffic** billing method is used for network usage, the maximum inbound and outbound bandwidths are used as the upper limits of bandwidths instead of guaranteed performance specifications. In scenarios in which demands exceed resource supplies, the maximum bandwidths may not be reached. If you want guaranteed bandwidths for your instance, use the **pay-by-bandwidth** billing method for network usage.
      shared_ptr<string> internetChargeType_ {};
      // The EIP.
      shared_ptr<string> ipAddress_ {};
    };

    class DedicatedHostAttribute : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DedicatedHostAttribute& obj) { 
        DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
        DARABONBA_PTR_TO_JSON(DedicatedHostName, dedicatedHostName_);
      };
      friend void from_json(const Darabonba::Json& j, DedicatedHostAttribute& obj) { 
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
      virtual bool empty() const override { return this->dedicatedHostId_ == nullptr
        && this->dedicatedHostName_ == nullptr; };
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
      // The ID of the dedicated host.
      shared_ptr<string> dedicatedHostId_ {};
      // The name of the dedicated host.
      shared_ptr<string> dedicatedHostName_ {};
    };

    class DataDisks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataDisks& obj) { 
        DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      };
      friend void from_json(const Darabonba::Json& j, DataDisks& obj) { 
        DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      };
      DataDisks() = default ;
      DataDisks(const DataDisks &) = default ;
      DataDisks(DataDisks &&) = default ;
      DataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataDisks() = default ;
      DataDisks& operator=(const DataDisks &) = default ;
      DataDisks& operator=(DataDisks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataDisk : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataDisk& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
          DARABONBA_PTR_TO_JSON(Device, device_);
          DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
        };
        friend void from_json(const Darabonba::Json& j, DataDisk& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
          DARABONBA_PTR_FROM_JSON(Device, device_);
          DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
        };
        DataDisk() = default ;
        DataDisk(const DataDisk &) = default ;
        DataDisk(DataDisk &&) = default ;
        DataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataDisk() = default ;
        DataDisk& operator=(const DataDisk &) = default ;
        DataDisk& operator=(DataDisk &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->deleteWithInstance_ == nullptr && this->device_ == nullptr && this->encrypted_ == nullptr && this->performanceLevel_ == nullptr && this->size_ == nullptr
        && this->snapshotId_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline DataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // deleteWithInstance Field Functions 
        bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
        void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
        inline bool getDeleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
        inline DataDisk& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


        // device Field Functions 
        bool hasDevice() const { return this->device_ != nullptr;};
        void deleteDevice() { this->device_ = nullptr;};
        inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
        inline DataDisk& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


        // encrypted Field Functions 
        bool hasEncrypted() const { return this->encrypted_ != nullptr;};
        void deleteEncrypted() { this->encrypted_ = nullptr;};
        inline string getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
        inline DataDisk& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


        // performanceLevel Field Functions 
        bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
        void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
        inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
        inline DataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline DataDisk& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // snapshotId Field Functions 
        bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
        void deleteSnapshotId() { this->snapshotId_ = nullptr;};
        inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
        inline DataDisk& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


      protected:
        // The category of the data disk.
        shared_ptr<string> category_ {};
        // Indicates whether the data disk is released when the instance is released. Valid values:
        // 
        // *   **true**: The data disk is released when the instance is released.
        // *   **false**: The data disk is reserved when the instance is released.
        shared_ptr<bool> deleteWithInstance_ {};
        shared_ptr<string> device_ {};
        // Indicates whether the data disk is encrypted. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<string> encrypted_ {};
        // The performance level of data disk. This parameter is available when the data disk is an Enterprise SSD (ESSD).
        shared_ptr<string> performanceLevel_ {};
        // The size of the data disk. Unit: GiB.
        shared_ptr<int64_t> size_ {};
        shared_ptr<string> snapshotId_ {};
      };

      virtual bool empty() const override { return this->dataDisk_ == nullptr; };
      // dataDisk Field Functions 
      bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
      void deleteDataDisk() { this->dataDisk_ = nullptr;};
      inline const vector<DataDisks::DataDisk> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<DataDisks::DataDisk>) };
      inline vector<DataDisks::DataDisk> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<DataDisks::DataDisk>) };
      inline DataDisks& setDataDisk(const vector<DataDisks::DataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
      inline DataDisks& setDataDisk(vector<DataDisks::DataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    protected:
      shared_ptr<vector<DataDisks::DataDisk>> dataDisk_ {};
    };

    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->clusterId_ == nullptr && this->cpu_ == nullptr && this->createMode_ == nullptr && this->creationTime_ == nullptr && this->creditSpecification_ == nullptr
        && this->dataDisks_ == nullptr && this->dbType_ == nullptr && this->dedicatedHostAttribute_ == nullptr && this->deletionProtection_ == nullptr && this->deploymentSetId_ == nullptr
        && this->description_ == nullptr && this->diskType_ == nullptr && this->ecsInstanceType_ == nullptr && this->eipAddress_ == nullptr && this->enableJumboFrame_ == nullptr
        && this->expiredTime_ == nullptr && this->gpu_ == nullptr && this->gpuTypes_ == nullptr && this->hostName_ == nullptr && this->hostType_ == nullptr
        && this->imageId_ == nullptr && this->innerIpAddress_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->instanceNetworkType_ == nullptr && this->instanceType_ == nullptr && this->internetChargeType_ == nullptr && this->internetMaxBandwidthIn_ == nullptr && this->internetMaxBandwidthOut_ == nullptr
        && this->ioOptimized_ == nullptr && this->keyPairName_ == nullptr && this->memory_ == nullptr && this->nodeType_ == nullptr && this->operationLocks_ == nullptr
        && this->publicIpAddress_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupIds_ == nullptr
        && this->serialNumber_ == nullptr && this->spotStrategy_ == nullptr && this->status_ == nullptr && this->stoppedMode_ == nullptr && this->systemDisk_ == nullptr
        && this->tags_ == nullptr && this->userData_ == nullptr && this->vlanId_ == nullptr && this->vpcAttributes_ == nullptr && this->zoneId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline DescribeRCInstanceAttributeResponseBody& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeRCInstanceAttributeResponseBody& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createMode Field Functions 
    bool hasCreateMode() const { return this->createMode_ != nullptr;};
    void deleteCreateMode() { this->createMode_ = nullptr;};
    inline int32_t getCreateMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, 0) };
    inline DescribeRCInstanceAttributeResponseBody& setCreateMode(int32_t createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string getCreditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBody::DataDisks & getDataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, DescribeRCInstanceAttributeResponseBody::DataDisks) };
    inline DescribeRCInstanceAttributeResponseBody::DataDisks getDataDisks() { DARABONBA_PTR_GET(dataDisks_, DescribeRCInstanceAttributeResponseBody::DataDisks) };
    inline DescribeRCInstanceAttributeResponseBody& setDataDisks(const DescribeRCInstanceAttributeResponseBody::DataDisks & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline DescribeRCInstanceAttributeResponseBody& setDataDisks(DescribeRCInstanceAttributeResponseBody::DataDisks && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // dedicatedHostAttribute Field Functions 
    bool hasDedicatedHostAttribute() const { return this->dedicatedHostAttribute_ != nullptr;};
    void deleteDedicatedHostAttribute() { this->dedicatedHostAttribute_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBody::DedicatedHostAttribute & getDedicatedHostAttribute() const { DARABONBA_PTR_GET_CONST(dedicatedHostAttribute_, DescribeRCInstanceAttributeResponseBody::DedicatedHostAttribute) };
    inline DescribeRCInstanceAttributeResponseBody::DedicatedHostAttribute getDedicatedHostAttribute() { DARABONBA_PTR_GET(dedicatedHostAttribute_, DescribeRCInstanceAttributeResponseBody::DedicatedHostAttribute) };
    inline DescribeRCInstanceAttributeResponseBody& setDedicatedHostAttribute(const DescribeRCInstanceAttributeResponseBody::DedicatedHostAttribute & dedicatedHostAttribute) { DARABONBA_PTR_SET_VALUE(dedicatedHostAttribute_, dedicatedHostAttribute) };
    inline DescribeRCInstanceAttributeResponseBody& setDedicatedHostAttribute(DescribeRCInstanceAttributeResponseBody::DedicatedHostAttribute && dedicatedHostAttribute) { DARABONBA_PTR_SET_RVALUE(dedicatedHostAttribute_, dedicatedHostAttribute) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeRCInstanceAttributeResponseBody& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // ecsInstanceType Field Functions 
    bool hasEcsInstanceType() const { return this->ecsInstanceType_ != nullptr;};
    void deleteEcsInstanceType() { this->ecsInstanceType_ = nullptr;};
    inline string getEcsInstanceType() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setEcsInstanceType(string ecsInstanceType) { DARABONBA_PTR_SET_VALUE(ecsInstanceType_, ecsInstanceType) };


    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBody::EipAddress & getEipAddress() const { DARABONBA_PTR_GET_CONST(eipAddress_, DescribeRCInstanceAttributeResponseBody::EipAddress) };
    inline DescribeRCInstanceAttributeResponseBody::EipAddress getEipAddress() { DARABONBA_PTR_GET(eipAddress_, DescribeRCInstanceAttributeResponseBody::EipAddress) };
    inline DescribeRCInstanceAttributeResponseBody& setEipAddress(const DescribeRCInstanceAttributeResponseBody::EipAddress & eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };
    inline DescribeRCInstanceAttributeResponseBody& setEipAddress(DescribeRCInstanceAttributeResponseBody::EipAddress && eipAddress) { DARABONBA_PTR_SET_RVALUE(eipAddress_, eipAddress) };


    // enableJumboFrame Field Functions 
    bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
    void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
    inline bool getEnableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
    inline DescribeRCInstanceAttributeResponseBody& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int32_t getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
    inline DescribeRCInstanceAttributeResponseBody& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // gpuTypes Field Functions 
    bool hasGpuTypes() const { return this->gpuTypes_ != nullptr;};
    void deleteGpuTypes() { this->gpuTypes_ = nullptr;};
    inline string getGpuTypes() const { DARABONBA_PTR_GET_DEFAULT(gpuTypes_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setGpuTypes(string gpuTypes) { DARABONBA_PTR_SET_VALUE(gpuTypes_, gpuTypes) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hostType Field Functions 
    bool hasHostType() const { return this->hostType_ != nullptr;};
    void deleteHostType() { this->hostType_ = nullptr;};
    inline string getHostType() const { DARABONBA_PTR_GET_DEFAULT(hostType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setHostType(string hostType) { DARABONBA_PTR_SET_VALUE(hostType_, hostType) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // innerIpAddress Field Functions 
    bool hasInnerIpAddress() const { return this->innerIpAddress_ != nullptr;};
    void deleteInnerIpAddress() { this->innerIpAddress_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBody::InnerIpAddress & getInnerIpAddress() const { DARABONBA_PTR_GET_CONST(innerIpAddress_, DescribeRCInstanceAttributeResponseBody::InnerIpAddress) };
    inline DescribeRCInstanceAttributeResponseBody::InnerIpAddress getInnerIpAddress() { DARABONBA_PTR_GET(innerIpAddress_, DescribeRCInstanceAttributeResponseBody::InnerIpAddress) };
    inline DescribeRCInstanceAttributeResponseBody& setInnerIpAddress(const DescribeRCInstanceAttributeResponseBody::InnerIpAddress & innerIpAddress) { DARABONBA_PTR_SET_VALUE(innerIpAddress_, innerIpAddress) };
    inline DescribeRCInstanceAttributeResponseBody& setInnerIpAddress(DescribeRCInstanceAttributeResponseBody::InnerIpAddress && innerIpAddress) { DARABONBA_PTR_SET_RVALUE(innerIpAddress_, innerIpAddress) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t getInternetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline DescribeRCInstanceAttributeResponseBody& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline DescribeRCInstanceAttributeResponseBody& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeRCInstanceAttributeResponseBody& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBody::OperationLocks & getOperationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, DescribeRCInstanceAttributeResponseBody::OperationLocks) };
    inline DescribeRCInstanceAttributeResponseBody::OperationLocks getOperationLocks() { DARABONBA_PTR_GET(operationLocks_, DescribeRCInstanceAttributeResponseBody::OperationLocks) };
    inline DescribeRCInstanceAttributeResponseBody& setOperationLocks(const DescribeRCInstanceAttributeResponseBody::OperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeRCInstanceAttributeResponseBody& setOperationLocks(DescribeRCInstanceAttributeResponseBody::OperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // publicIpAddress Field Functions 
    bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
    void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBody::PublicIpAddress & getPublicIpAddress() const { DARABONBA_PTR_GET_CONST(publicIpAddress_, DescribeRCInstanceAttributeResponseBody::PublicIpAddress) };
    inline DescribeRCInstanceAttributeResponseBody::PublicIpAddress getPublicIpAddress() { DARABONBA_PTR_GET(publicIpAddress_, DescribeRCInstanceAttributeResponseBody::PublicIpAddress) };
    inline DescribeRCInstanceAttributeResponseBody& setPublicIpAddress(const DescribeRCInstanceAttributeResponseBody::PublicIpAddress & publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };
    inline DescribeRCInstanceAttributeResponseBody& setPublicIpAddress(DescribeRCInstanceAttributeResponseBody::PublicIpAddress && publicIpAddress) { DARABONBA_PTR_SET_RVALUE(publicIpAddress_, publicIpAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBody::SecurityGroupIds & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, DescribeRCInstanceAttributeResponseBody::SecurityGroupIds) };
    inline DescribeRCInstanceAttributeResponseBody::SecurityGroupIds getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, DescribeRCInstanceAttributeResponseBody::SecurityGroupIds) };
    inline DescribeRCInstanceAttributeResponseBody& setSecurityGroupIds(const DescribeRCInstanceAttributeResponseBody::SecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeRCInstanceAttributeResponseBody& setSecurityGroupIds(DescribeRCInstanceAttributeResponseBody::SecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stoppedMode Field Functions 
    bool hasStoppedMode() const { return this->stoppedMode_ != nullptr;};
    void deleteStoppedMode() { this->stoppedMode_ = nullptr;};
    inline string getStoppedMode() const { DARABONBA_PTR_GET_DEFAULT(stoppedMode_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setStoppedMode(string stoppedMode) { DARABONBA_PTR_SET_VALUE(stoppedMode_, stoppedMode) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBody::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, DescribeRCInstanceAttributeResponseBody::SystemDisk) };
    inline DescribeRCInstanceAttributeResponseBody::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, DescribeRCInstanceAttributeResponseBody::SystemDisk) };
    inline DescribeRCInstanceAttributeResponseBody& setSystemDisk(const DescribeRCInstanceAttributeResponseBody::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline DescribeRCInstanceAttributeResponseBody& setSystemDisk(DescribeRCInstanceAttributeResponseBody::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBody::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeRCInstanceAttributeResponseBody::Tags) };
    inline DescribeRCInstanceAttributeResponseBody::Tags getTags() { DARABONBA_PTR_GET(tags_, DescribeRCInstanceAttributeResponseBody::Tags) };
    inline DescribeRCInstanceAttributeResponseBody& setTags(const DescribeRCInstanceAttributeResponseBody::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeRCInstanceAttributeResponseBody& setTags(DescribeRCInstanceAttributeResponseBody::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline string getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


    // vpcAttributes Field Functions 
    bool hasVpcAttributes() const { return this->vpcAttributes_ != nullptr;};
    void deleteVpcAttributes() { this->vpcAttributes_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBody::VpcAttributes & getVpcAttributes() const { DARABONBA_PTR_GET_CONST(vpcAttributes_, DescribeRCInstanceAttributeResponseBody::VpcAttributes) };
    inline DescribeRCInstanceAttributeResponseBody::VpcAttributes getVpcAttributes() { DARABONBA_PTR_GET(vpcAttributes_, DescribeRCInstanceAttributeResponseBody::VpcAttributes) };
    inline DescribeRCInstanceAttributeResponseBody& setVpcAttributes(const DescribeRCInstanceAttributeResponseBody::VpcAttributes & vpcAttributes) { DARABONBA_PTR_SET_VALUE(vpcAttributes_, vpcAttributes) };
    inline DescribeRCInstanceAttributeResponseBody& setVpcAttributes(DescribeRCInstanceAttributeResponseBody::VpcAttributes && vpcAttributes) { DARABONBA_PTR_SET_RVALUE(vpcAttributes_, vpcAttributes) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<bool> autoRenew_ {};
    // The ID of the cluster to which the instance belongs.
    // 
    // >  This parameter will be deprecated. We recommend that you use other parameters to ensure compatibility.
    shared_ptr<string> clusterId_ {};
    // The number of CPU cores.
    shared_ptr<int32_t> cpu_ {};
    shared_ptr<int32_t> createMode_ {};
    // The time when the instance was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC.
    shared_ptr<string> creationTime_ {};
    // The performance mode of the burstable instance.
    shared_ptr<string> creditSpecification_ {};
    // The details of the data disk.
    shared_ptr<DescribeRCInstanceAttributeResponseBody::DataDisks> dataDisks_ {};
    shared_ptr<string> dbType_ {};
    // The attributes of the dedicated hosts.
    shared_ptr<DescribeRCInstanceAttributeResponseBody::DedicatedHostAttribute> dedicatedHostAttribute_ {};
    shared_ptr<bool> deletionProtection_ {};
    // The ID of the deployment set.
    shared_ptr<string> deploymentSetId_ {};
    // The instance description.
    shared_ptr<string> description_ {};
    // The reserved parameter.
    shared_ptr<string> diskType_ {};
    // The Elastic Compute Service (ECS) instance family.
    shared_ptr<string> ecsInstanceType_ {};
    // The elastic IP address (EIP) associated with the instance.
    shared_ptr<DescribeRCInstanceAttributeResponseBody::EipAddress> eipAddress_ {};
    // Indicates whether the Jumbo Frame feature is enabled for the instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> enableJumboFrame_ {};
    // The expiration time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC.
    shared_ptr<string> expiredTime_ {};
    shared_ptr<int32_t> gpu_ {};
    shared_ptr<string> gpuTypes_ {};
    // The instance hostname.
    shared_ptr<string> hostName_ {};
    // The storage type of the host. Valid values:
    // 
    // *   **dhg_cloud_ssd**: ESSD
    // *   **dhg_local_ssd**: local SSD
    shared_ptr<string> hostType_ {};
    // The image ID of the instance.
    shared_ptr<string> imageId_ {};
    // The private IP addresses of the instance in the classic network.
    shared_ptr<DescribeRCInstanceAttributeResponseBody::InnerIpAddress> innerIpAddress_ {};
    shared_ptr<string> instanceChargeType_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The instance name.
    shared_ptr<string> instanceName_ {};
    // The network type. Valid values:
    // 
    // *   **classic**
    // *   **vpc**
    shared_ptr<string> instanceNetworkType_ {};
    // The instance type of the instance.
    shared_ptr<string> instanceType_ {};
    // The billing method for network usage. Valid values:
    // 
    // *   **PayByBandwidth**: pay-by-bandwidth
    // *   **PayByTraffic**: pay-by-data-transfer
    // 
    // >  If the **pay-by-traffic** billing method is used for network usage, the maximum inbound and outbound bandwidths are used as the upper limits of bandwidths instead of guaranteed performance specifications. In scenarios in which demands exceed resource supplies, the maximum bandwidths may not be reached. If you want guaranteed bandwidths for your instance, use the **pay-by-bandwidth** billing method for network usage.
    shared_ptr<string> internetChargeType_ {};
    // The maximum inbound bandwidth from the Internet. Unit: Mbit/s.
    shared_ptr<int32_t> internetMaxBandwidthIn_ {};
    // The maximum outbound bandwidth to the Internet. Unit: Mbit/s.
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // Indicates whether the instance is I/O optimized.
    // 
    // *   **optimized**: The instance is I/O optimized.
    // *   **none**: The instance is not I/O optimized.
    shared_ptr<string> ioOptimized_ {};
    // The name of the key pair.
    shared_ptr<string> keyPairName_ {};
    // The memory capacity of the instance. Unit: MiB.
    shared_ptr<int32_t> memory_ {};
    shared_ptr<string> nodeType_ {};
    // The reasons why the instance is locked.
    shared_ptr<DescribeRCInstanceAttributeResponseBody::OperationLocks> operationLocks_ {};
    // The public IP address of the instance.
    shared_ptr<DescribeRCInstanceAttributeResponseBody::PublicIpAddress> publicIpAddress_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resourceGroupId_ {};
    // The security groups.
    shared_ptr<DescribeRCInstanceAttributeResponseBody::SecurityGroupIds> securityGroupIds_ {};
    // The serial number of the instance.
    shared_ptr<string> serialNumber_ {};
    shared_ptr<string> spotStrategy_ {};
    // The instance status. Valid values:
    // 
    // *   **Pending**
    // *   **Running**
    // *   **Starting**
    // *   **Stopping**
    // *   **Stopped**
    shared_ptr<string> status_ {};
    // Indicates whether the billing of the instance continues after the instance is stopped. Valid values:
    // 
    // *   **KeepCharging**: The billing of the instance continues after the instance is stopped, and resources are retained for the instance.
    // *   **StopCharging**: The billing of the instance stops after the instance is stopped. After the instance is stopped, resources such as CPU cores, memory resources, and public IP address are released. The instance may be unable to restart if some required resources are out of stock in the current region.
    // *   **Not-applicable**: The No Fees for Stopped Instances feature is not supported for the instance.
    shared_ptr<string> stoppedMode_ {};
    shared_ptr<DescribeRCInstanceAttributeResponseBody::SystemDisk> systemDisk_ {};
    shared_ptr<DescribeRCInstanceAttributeResponseBody::Tags> tags_ {};
    shared_ptr<string> userData_ {};
    // The virtual LAN (VLAN) ID of the instance.
    // 
    // >  This parameter will be deprecated. We recommend that you use other parameters to ensure compatibility.
    shared_ptr<string> vlanId_ {};
    // The virtual private cloud (VPC) attributes of the instance.
    shared_ptr<DescribeRCInstanceAttributeResponseBody::VpcAttributes> vpcAttributes_ {};
    // The zone ID.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
