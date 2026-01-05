// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_TO_JSON(DedicatedHostAttribute, dedicatedHostAttribute_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_TO_JSON(EnableNetworkEncryption, enableNetworkEncryption_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
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
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkOptions, networkOptions_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoppedMode, stoppedMode_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
      DARABONBA_PTR_TO_JSON(VpcAttributes, vpcAttributes_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostAttribute, dedicatedHostAttribute_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_FROM_JSON(EnableNetworkEncryption, enableNetworkEncryption_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
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
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkOptions, networkOptions_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoppedMode, stoppedMode_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
      DARABONBA_PTR_FROM_JSON(VpcAttributes, vpcAttributes_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeInstanceAttributeResponseBody() = default ;
    DescribeInstanceAttributeResponseBody(const DescribeInstanceAttributeResponseBody &) = default ;
    DescribeInstanceAttributeResponseBody(DescribeInstanceAttributeResponseBody &&) = default ;
    DescribeInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttributeResponseBody() = default ;
    DescribeInstanceAttributeResponseBody& operator=(const DescribeInstanceAttributeResponseBody &) = default ;
    DescribeInstanceAttributeResponseBody& operator=(DescribeInstanceAttributeResponseBody &&) = default ;
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
      // The NAT IP address of the instance. It is used by ECS instances in different VPCs for communication.
      shared_ptr<string> natIpAddress_ {};
      // The private IP address of the instance.
      shared_ptr<VpcAttributes::PrivateIpAddress> privateIpAddress_ {};
      // The ID of the vSwitch to which the instance is connected.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the VPC.
      shared_ptr<string> vpcId_ {};
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
        // The reason why the instance was locked. Valid values:
        // 
        // *   financial: The instance was locked due to overdue payments.
        // *   security: The instance was locked due to security reasons.
        // *   recycling: The spot instance was locked and pending release.
        // *   dedicatedhostfinancial: The instance was locked due to overdue payments for the dedicated host.
        // *   refunded: The instance was locked because a refund is made for the instance.
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

    class NetworkOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkOptions& obj) { 
        DARABONBA_PTR_TO_JSON(BandwidthWeighting, bandwidthWeighting_);
        DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
        DARABONBA_PTR_TO_JSON(EnableNetworkEncryption, enableNetworkEncryption_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(BandwidthWeighting, bandwidthWeighting_);
        DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
        DARABONBA_PTR_FROM_JSON(EnableNetworkEncryption, enableNetworkEncryption_);
      };
      NetworkOptions() = default ;
      NetworkOptions(const NetworkOptions &) = default ;
      NetworkOptions(NetworkOptions &&) = default ;
      NetworkOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkOptions() = default ;
      NetworkOptions& operator=(const NetworkOptions &) = default ;
      NetworkOptions& operator=(NetworkOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidthWeighting_ == nullptr
        && this->enableJumboFrame_ == nullptr && this->enableNetworkEncryption_ == nullptr; };
      // bandwidthWeighting Field Functions 
      bool hasBandwidthWeighting() const { return this->bandwidthWeighting_ != nullptr;};
      void deleteBandwidthWeighting() { this->bandwidthWeighting_ = nullptr;};
      inline string getBandwidthWeighting() const { DARABONBA_PTR_GET_DEFAULT(bandwidthWeighting_, "") };
      inline NetworkOptions& setBandwidthWeighting(string bandwidthWeighting) { DARABONBA_PTR_SET_VALUE(bandwidthWeighting_, bandwidthWeighting) };


      // enableJumboFrame Field Functions 
      bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
      void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
      inline bool getEnableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
      inline NetworkOptions& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


      // enableNetworkEncryption Field Functions 
      bool hasEnableNetworkEncryption() const { return this->enableNetworkEncryption_ != nullptr;};
      void deleteEnableNetworkEncryption() { this->enableNetworkEncryption_ = nullptr;};
      inline bool getEnableNetworkEncryption() const { DARABONBA_PTR_GET_DEFAULT(enableNetworkEncryption_, false) };
      inline NetworkOptions& setEnableNetworkEncryption(bool enableNetworkEncryption) { DARABONBA_PTR_SET_VALUE(enableNetworkEncryption_, enableNetworkEncryption) };


    protected:
      // The bandwidth weight.
      // 
      // The supported values vary with instance types. You can query the bandwidth weights supported by the current instance type by using the DescribeInstanceTypes.
      // 
      // Valid values:
      // 
      // *   Vpc-L1.
      // *   Vpc-L2.
      // *   Ebs-L1.
      // *   Ebs-L2.
      // *   Default.
      shared_ptr<string> bandwidthWeighting_ {};
      shared_ptr<bool> enableJumboFrame_ {};
      shared_ptr<bool> enableNetworkEncryption_ {};
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
      // The ID of the EIP.
      shared_ptr<string> allocationId_ {};
      // The maximum public bandwidth of the EIP. Unit: Mbit/s.
      shared_ptr<int32_t> bandwidth_ {};
      // The billing method for network usage. Valid values:
      // 
      // *   PayByBandwidth
      // *   PayByTraffic
      // 
      // >  When the **pay-by-traffic** billing method is used for network usage, the maximum inbound and outbound bandwidths are used as the upper limits of bandwidths instead of guaranteed performance specifications. In scenarios in which demands exceed resource supplies, the maximum bandwidths may not be reached. If you want guaranteed bandwidths for your instance, use the **pay-by-bandwidth** billing method for network usage.
      shared_ptr<string> internetChargeType_ {};
      // The ID of the elastic IP address (EIP).
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

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->cpu_ == nullptr && this->creationTime_ == nullptr && this->creditSpecification_ == nullptr && this->dedicatedHostAttribute_ == nullptr && this->description_ == nullptr
        && this->eipAddress_ == nullptr && this->enableJumboFrame_ == nullptr && this->enableNetworkEncryption_ == nullptr && this->expiredTime_ == nullptr && this->hostName_ == nullptr
        && this->imageId_ == nullptr && this->innerIpAddress_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->instanceNetworkType_ == nullptr && this->instanceType_ == nullptr && this->internetChargeType_ == nullptr && this->internetMaxBandwidthIn_ == nullptr && this->internetMaxBandwidthOut_ == nullptr
        && this->ioOptimized_ == nullptr && this->memory_ == nullptr && this->networkOptions_ == nullptr && this->operationLocks_ == nullptr && this->publicIpAddress_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr && this->securityGroupIds_ == nullptr && this->serialNumber_ == nullptr && this->status_ == nullptr
        && this->stoppedMode_ == nullptr && this->vlanId_ == nullptr && this->vpcAttributes_ == nullptr && this->zoneId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeInstanceAttributeResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeInstanceAttributeResponseBody& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeInstanceAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string getCreditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline DescribeInstanceAttributeResponseBody& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // dedicatedHostAttribute Field Functions 
    bool hasDedicatedHostAttribute() const { return this->dedicatedHostAttribute_ != nullptr;};
    void deleteDedicatedHostAttribute() { this->dedicatedHostAttribute_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBody::DedicatedHostAttribute & getDedicatedHostAttribute() const { DARABONBA_PTR_GET_CONST(dedicatedHostAttribute_, DescribeInstanceAttributeResponseBody::DedicatedHostAttribute) };
    inline DescribeInstanceAttributeResponseBody::DedicatedHostAttribute getDedicatedHostAttribute() { DARABONBA_PTR_GET(dedicatedHostAttribute_, DescribeInstanceAttributeResponseBody::DedicatedHostAttribute) };
    inline DescribeInstanceAttributeResponseBody& setDedicatedHostAttribute(const DescribeInstanceAttributeResponseBody::DedicatedHostAttribute & dedicatedHostAttribute) { DARABONBA_PTR_SET_VALUE(dedicatedHostAttribute_, dedicatedHostAttribute) };
    inline DescribeInstanceAttributeResponseBody& setDedicatedHostAttribute(DescribeInstanceAttributeResponseBody::DedicatedHostAttribute && dedicatedHostAttribute) { DARABONBA_PTR_SET_RVALUE(dedicatedHostAttribute_, dedicatedHostAttribute) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeInstanceAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBody::EipAddress & getEipAddress() const { DARABONBA_PTR_GET_CONST(eipAddress_, DescribeInstanceAttributeResponseBody::EipAddress) };
    inline DescribeInstanceAttributeResponseBody::EipAddress getEipAddress() { DARABONBA_PTR_GET(eipAddress_, DescribeInstanceAttributeResponseBody::EipAddress) };
    inline DescribeInstanceAttributeResponseBody& setEipAddress(const DescribeInstanceAttributeResponseBody::EipAddress & eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };
    inline DescribeInstanceAttributeResponseBody& setEipAddress(DescribeInstanceAttributeResponseBody::EipAddress && eipAddress) { DARABONBA_PTR_SET_RVALUE(eipAddress_, eipAddress) };


    // enableJumboFrame Field Functions 
    bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
    void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
    inline bool getEnableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
    inline DescribeInstanceAttributeResponseBody& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


    // enableNetworkEncryption Field Functions 
    bool hasEnableNetworkEncryption() const { return this->enableNetworkEncryption_ != nullptr;};
    void deleteEnableNetworkEncryption() { this->enableNetworkEncryption_ = nullptr;};
    inline bool getEnableNetworkEncryption() const { DARABONBA_PTR_GET_DEFAULT(enableNetworkEncryption_, false) };
    inline DescribeInstanceAttributeResponseBody& setEnableNetworkEncryption(bool enableNetworkEncryption) { DARABONBA_PTR_SET_VALUE(enableNetworkEncryption_, enableNetworkEncryption) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeInstanceAttributeResponseBody& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeInstanceAttributeResponseBody& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeInstanceAttributeResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // innerIpAddress Field Functions 
    bool hasInnerIpAddress() const { return this->innerIpAddress_ != nullptr;};
    void deleteInnerIpAddress() { this->innerIpAddress_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBody::InnerIpAddress & getInnerIpAddress() const { DARABONBA_PTR_GET_CONST(innerIpAddress_, DescribeInstanceAttributeResponseBody::InnerIpAddress) };
    inline DescribeInstanceAttributeResponseBody::InnerIpAddress getInnerIpAddress() { DARABONBA_PTR_GET(innerIpAddress_, DescribeInstanceAttributeResponseBody::InnerIpAddress) };
    inline DescribeInstanceAttributeResponseBody& setInnerIpAddress(const DescribeInstanceAttributeResponseBody::InnerIpAddress & innerIpAddress) { DARABONBA_PTR_SET_VALUE(innerIpAddress_, innerIpAddress) };
    inline DescribeInstanceAttributeResponseBody& setInnerIpAddress(DescribeInstanceAttributeResponseBody::InnerIpAddress && innerIpAddress) { DARABONBA_PTR_SET_RVALUE(innerIpAddress_, innerIpAddress) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeInstanceAttributeResponseBody& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceAttributeResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstanceAttributeResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeInstanceAttributeResponseBody& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstanceAttributeResponseBody& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeInstanceAttributeResponseBody& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t getInternetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline DescribeInstanceAttributeResponseBody& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline DescribeInstanceAttributeResponseBody& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline DescribeInstanceAttributeResponseBody& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeInstanceAttributeResponseBody& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkOptions Field Functions 
    bool hasNetworkOptions() const { return this->networkOptions_ != nullptr;};
    void deleteNetworkOptions() { this->networkOptions_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBody::NetworkOptions & getNetworkOptions() const { DARABONBA_PTR_GET_CONST(networkOptions_, DescribeInstanceAttributeResponseBody::NetworkOptions) };
    inline DescribeInstanceAttributeResponseBody::NetworkOptions getNetworkOptions() { DARABONBA_PTR_GET(networkOptions_, DescribeInstanceAttributeResponseBody::NetworkOptions) };
    inline DescribeInstanceAttributeResponseBody& setNetworkOptions(const DescribeInstanceAttributeResponseBody::NetworkOptions & networkOptions) { DARABONBA_PTR_SET_VALUE(networkOptions_, networkOptions) };
    inline DescribeInstanceAttributeResponseBody& setNetworkOptions(DescribeInstanceAttributeResponseBody::NetworkOptions && networkOptions) { DARABONBA_PTR_SET_RVALUE(networkOptions_, networkOptions) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBody::OperationLocks & getOperationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, DescribeInstanceAttributeResponseBody::OperationLocks) };
    inline DescribeInstanceAttributeResponseBody::OperationLocks getOperationLocks() { DARABONBA_PTR_GET(operationLocks_, DescribeInstanceAttributeResponseBody::OperationLocks) };
    inline DescribeInstanceAttributeResponseBody& setOperationLocks(const DescribeInstanceAttributeResponseBody::OperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeInstanceAttributeResponseBody& setOperationLocks(DescribeInstanceAttributeResponseBody::OperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // publicIpAddress Field Functions 
    bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
    void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBody::PublicIpAddress & getPublicIpAddress() const { DARABONBA_PTR_GET_CONST(publicIpAddress_, DescribeInstanceAttributeResponseBody::PublicIpAddress) };
    inline DescribeInstanceAttributeResponseBody::PublicIpAddress getPublicIpAddress() { DARABONBA_PTR_GET(publicIpAddress_, DescribeInstanceAttributeResponseBody::PublicIpAddress) };
    inline DescribeInstanceAttributeResponseBody& setPublicIpAddress(const DescribeInstanceAttributeResponseBody::PublicIpAddress & publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };
    inline DescribeInstanceAttributeResponseBody& setPublicIpAddress(DescribeInstanceAttributeResponseBody::PublicIpAddress && publicIpAddress) { DARABONBA_PTR_SET_RVALUE(publicIpAddress_, publicIpAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBody::SecurityGroupIds & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, DescribeInstanceAttributeResponseBody::SecurityGroupIds) };
    inline DescribeInstanceAttributeResponseBody::SecurityGroupIds getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, DescribeInstanceAttributeResponseBody::SecurityGroupIds) };
    inline DescribeInstanceAttributeResponseBody& setSecurityGroupIds(const DescribeInstanceAttributeResponseBody::SecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeInstanceAttributeResponseBody& setSecurityGroupIds(DescribeInstanceAttributeResponseBody::SecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeInstanceAttributeResponseBody& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stoppedMode Field Functions 
    bool hasStoppedMode() const { return this->stoppedMode_ != nullptr;};
    void deleteStoppedMode() { this->stoppedMode_ = nullptr;};
    inline string getStoppedMode() const { DARABONBA_PTR_GET_DEFAULT(stoppedMode_, "") };
    inline DescribeInstanceAttributeResponseBody& setStoppedMode(string stoppedMode) { DARABONBA_PTR_SET_VALUE(stoppedMode_, stoppedMode) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline string getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
    inline DescribeInstanceAttributeResponseBody& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


    // vpcAttributes Field Functions 
    bool hasVpcAttributes() const { return this->vpcAttributes_ != nullptr;};
    void deleteVpcAttributes() { this->vpcAttributes_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBody::VpcAttributes & getVpcAttributes() const { DARABONBA_PTR_GET_CONST(vpcAttributes_, DescribeInstanceAttributeResponseBody::VpcAttributes) };
    inline DescribeInstanceAttributeResponseBody::VpcAttributes getVpcAttributes() { DARABONBA_PTR_GET(vpcAttributes_, DescribeInstanceAttributeResponseBody::VpcAttributes) };
    inline DescribeInstanceAttributeResponseBody& setVpcAttributes(const DescribeInstanceAttributeResponseBody::VpcAttributes & vpcAttributes) { DARABONBA_PTR_SET_VALUE(vpcAttributes_, vpcAttributes) };
    inline DescribeInstanceAttributeResponseBody& setVpcAttributes(DescribeInstanceAttributeResponseBody::VpcAttributes && vpcAttributes) { DARABONBA_PTR_SET_RVALUE(vpcAttributes_, vpcAttributes) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeInstanceAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the cluster to which the instance belongs.
    // 
    // > This parameter will be removed in the future. To ensure future compatibility, we recommend that you use other parameters.
    shared_ptr<string> clusterId_ {};
    // The number of vCPUs.
    shared_ptr<int32_t> cpu_ {};
    // The time when the instance was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    shared_ptr<string> creationTime_ {};
    // The performance mode of the burstable instance. Valid values:
    // 
    // *   Standard: the standard mode. For more information, see the [Performance modes](~~59977#section-svb-w9d-dju~~) section of the "Overview of burstable instances" topic.
    // *   Unlimited: the unlimited mode. For more information, see the [Performance modes](~~59977#section-svb-w9d-dju~~) section of the "Overview of burstable instances" topic.
    shared_ptr<string> creditSpecification_ {};
    // Details about the dedicated host. It is an array that consists of the DedicatedHostClusterId, DedicatedHostId, and DedicatedHostName parameters.
    shared_ptr<DescribeInstanceAttributeResponseBody::DedicatedHostAttribute> dedicatedHostAttribute_ {};
    // The description of the instance.
    shared_ptr<string> description_ {};
    // The elastic IP address (EIP) associated with the instance.
    shared_ptr<DescribeInstanceAttributeResponseBody::EipAddress> eipAddress_ {};
    // Indicates whether the Jumbo Frame feature is enabled for the instance. Valid values:
    // 
    // *   true
    // *   false
    // 
    // For more information, see [MTUs](https://help.aliyun.com/document_detail/200512.html).
    shared_ptr<bool> enableJumboFrame_ {};
    shared_ptr<bool> enableNetworkEncryption_ {};
    // The time when the instance expires. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    shared_ptr<string> expiredTime_ {};
    // The hostname of the instance.
    shared_ptr<string> hostName_ {};
    // The ID of the image that the instance is running.
    shared_ptr<string> imageId_ {};
    // The internal IP address of the instance located in the classic network.
    shared_ptr<DescribeInstanceAttributeResponseBody::InnerIpAddress> innerIpAddress_ {};
    // The billing method of the instance. Valid values:
    // 
    // *   PrePaid: subscription.
    // *   PostPaid: pay-as-you-go
    shared_ptr<string> instanceChargeType_ {};
    // The instance ID
    shared_ptr<string> instanceId_ {};
    // The instance name.
    shared_ptr<string> instanceName_ {};
    // The network type of the instance. Valid values:
    // 
    // *   classic: classic network
    // *   vpc: VPC
    shared_ptr<string> instanceNetworkType_ {};
    // The instance type.
    shared_ptr<string> instanceType_ {};
    // The billing method for network usage. Valid values:
    // 
    // *   PayByBandwidth
    // *   PayByTraffic
    // 
    // >  When the **pay-by-traffic** billing method is used for network usage, the maximum inbound and outbound bandwidths are used as the upper limits of bandwidths instead of guaranteed performance specifications. In scenarios in which demands exceed resource supplies, the maximum bandwidths may not be reached. If you want guaranteed bandwidths for your instance, use the **pay-by-bandwidth** billing method for network usage.
    shared_ptr<string> internetChargeType_ {};
    // The maximum inbound public bandwidth. Unit: Mbit/s.
    shared_ptr<int32_t> internetMaxBandwidthIn_ {};
    // The maximum outbound public bandwidth. Unit: Mbit/s.
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // Indicates whether the ECS instance is I/O optimized. Valid values:
    // 
    // *   optimized: The ECS instance is I/O optimized.
    // *   none: The ECS instance is not I/O optimized.
    shared_ptr<string> ioOptimized_ {};
    // The memory size of the instance. Unit: MiB.
    shared_ptr<int32_t> memory_ {};
    // Details about network options.
    // 
    // > This parameter is in invitational preview and is not publicly available.
    shared_ptr<DescribeInstanceAttributeResponseBody::NetworkOptions> networkOptions_ {};
    // The reason why the instance was locked. Valid values:
    // 
    // *   financial: The dedicated host was locked due to overdue payments.
    // *   security: The instance was locked due to security reasons.
    // *   recycling: The spot instance was locked and pending release.
    // *   dedicatedhostfinancial: The instance was locked due to overdue payments for the dedicated host.
    // *   refunded: The instance was locked because a refund was made for the instance.
    shared_ptr<DescribeInstanceAttributeResponseBody::OperationLocks> operationLocks_ {};
    // The public IP address of the instance.
    shared_ptr<DescribeInstanceAttributeResponseBody::PublicIpAddress> publicIpAddress_ {};
    // The ID of the region in which the instance resides.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The IDs of the security groups to which the instance belongs.
    shared_ptr<DescribeInstanceAttributeResponseBody::SecurityGroupIds> securityGroupIds_ {};
    // The serial number of the instance.
    shared_ptr<string> serialNumber_ {};
    // The status of the instance. Valid values:
    // 
    // *   Pending: The instance is being created.
    // *   Running: The instance is running.
    // *   Starting: The instance is being started.
    // *   Stopping: The instance is being stopped.
    // *   Stopped: The instance is stopped.
    shared_ptr<string> status_ {};
    // Indicates whether the system implements billing after the instance is stopped. Valid values:
    // 
    // *   KeepCharging: The instance is stopped in standard mode. The billing of the instance continues after the instance is stopped, and resources are retained for the instance.
    // *   StopCharging: The instance is stopped in economical mode. The billing of some resources of the instance stops after the instance is stopped. When the instance is stopped, its resources such as vCPUs, memory, and public IP address are released. The instance may be unable to start again if some required resources are out of stock in the current region.
    // *   Not-applicable: The instance does not support economical mode.
    shared_ptr<string> stoppedMode_ {};
    // The virtual LAN (VLAN) ID of the instance.
    // 
    // > This parameter will be removed in the future. To ensure future compatibility, we recommend that you use other parameters.
    shared_ptr<string> vlanId_ {};
    // The VPC attributes of the instance.
    shared_ptr<DescribeInstanceAttributeResponseBody::VpcAttributes> vpcAttributes_ {};
    // The ID of the zone in which the instance resides.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
