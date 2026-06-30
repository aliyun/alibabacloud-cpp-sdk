// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCELERATORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCELERATORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DescribeAcceleratorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAcceleratorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthBillingType, bandwidthBillingType_);
      DARABONBA_PTR_TO_JSON(BasicBandwidthPackage, basicBandwidthPackage_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CrossBorderMode, crossBorderMode_);
      DARABONBA_PTR_TO_JSON(CrossBorderStatus, crossBorderStatus_);
      DARABONBA_PTR_TO_JSON(CrossDomainBandwidthPackage, crossDomainBandwidthPackage_);
      DARABONBA_PTR_TO_JSON(CrossPrivateState, crossPrivateState_);
      DARABONBA_PTR_TO_JSON(DdosConfigList, ddosConfigList_);
      DARABONBA_PTR_TO_JSON(DdosId, ddosId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DnsName, dnsName_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(IpSetConfig, ipSetConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecondDnsName, secondDnsName_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(ServiceManagedInfos, serviceManagedInfos_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpgradableStatus, upgradableStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAcceleratorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthBillingType, bandwidthBillingType_);
      DARABONBA_PTR_FROM_JSON(BasicBandwidthPackage, basicBandwidthPackage_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CrossBorderMode, crossBorderMode_);
      DARABONBA_PTR_FROM_JSON(CrossBorderStatus, crossBorderStatus_);
      DARABONBA_PTR_FROM_JSON(CrossDomainBandwidthPackage, crossDomainBandwidthPackage_);
      DARABONBA_PTR_FROM_JSON(CrossPrivateState, crossPrivateState_);
      DARABONBA_PTR_FROM_JSON(DdosConfigList, ddosConfigList_);
      DARABONBA_PTR_FROM_JSON(DdosId, ddosId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DnsName, dnsName_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(IpSetConfig, ipSetConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecondDnsName, secondDnsName_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(ServiceManagedInfos, serviceManagedInfos_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpgradableStatus, upgradableStatus_);
    };
    DescribeAcceleratorResponseBody() = default ;
    DescribeAcceleratorResponseBody(const DescribeAcceleratorResponseBody &) = default ;
    DescribeAcceleratorResponseBody(DescribeAcceleratorResponseBody &&) = default ;
    DescribeAcceleratorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAcceleratorResponseBody() = default ;
    DescribeAcceleratorResponseBody& operator=(const DescribeAcceleratorResponseBody &) = default ;
    DescribeAcceleratorResponseBody& operator=(DescribeAcceleratorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class ServiceManagedInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceManagedInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(ChildType, childType_);
        DARABONBA_PTR_TO_JSON(IsManaged, isManaged_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceManagedInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(ChildType, childType_);
        DARABONBA_PTR_FROM_JSON(IsManaged, isManaged_);
      };
      ServiceManagedInfos() = default ;
      ServiceManagedInfos(const ServiceManagedInfos &) = default ;
      ServiceManagedInfos(ServiceManagedInfos &&) = default ;
      ServiceManagedInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceManagedInfos() = default ;
      ServiceManagedInfos& operator=(const ServiceManagedInfos &) = default ;
      ServiceManagedInfos& operator=(ServiceManagedInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->childType_ == nullptr && this->isManaged_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline ServiceManagedInfos& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // childType Field Functions 
      bool hasChildType() const { return this->childType_ != nullptr;};
      void deleteChildType() { this->childType_ = nullptr;};
      inline string getChildType() const { DARABONBA_PTR_GET_DEFAULT(childType_, "") };
      inline ServiceManagedInfos& setChildType(string childType) { DARABONBA_PTR_SET_VALUE(childType_, childType) };


      // isManaged Field Functions 
      bool hasIsManaged() const { return this->isManaged_ != nullptr;};
      void deleteIsManaged() { this->isManaged_ = nullptr;};
      inline bool getIsManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, false) };
      inline ServiceManagedInfos& setIsManaged(bool isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


    protected:
      // The name of the action on the managed instance. Valid values:
      // 
      // - **Create**: creates an instance.
      // 
      // - **Update**: updates the current instance.
      // 
      // - **Delete**: deletes the current instance.
      // 
      // - **Associate**: associates the instance with other resources.
      // 
      // - **UserUnmanaged**: unmanages the instance.
      // 
      // - **CreateChild**: creates a child resource in the instance.
      shared_ptr<string> action_ {};
      // The type of the child resource. Valid values:
      // 
      // - **Listener**: listener.
      // 
      // - **IpSet**: acceleration region.
      // 
      // - **EndpointGroup**: endpoint group.
      // 
      // - **ForwardingRule**: forwarding rule.
      // 
      // - **Endpoint**: endpoint.
      // 
      // - **EndpointGroupDestination**: protocol mapping of an endpoint group associated with a custom routing listener.
      // 
      // - **EndpointPolicy**: access policy of an endpoint associated with a custom routing listener.
      // 
      // > This parameter is valid only when **Action** is set to **CreateChild**.
      shared_ptr<string> childType_ {};
      // Indicates whether the specified action is managed. Valid values:
      // 
      // - **true**: The action is managed. You cannot perform the specified action on the managed instance.
      // 
      // - **false**: The action is not managed. You can perform the specified action on the managed instance.
      shared_ptr<bool> isManaged_ {};
    };

    class IpSetConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpSetConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      };
      friend void from_json(const Darabonba::Json& j, IpSetConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      };
      IpSetConfig() = default ;
      IpSetConfig(const IpSetConfig &) = default ;
      IpSetConfig(IpSetConfig &&) = default ;
      IpSetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpSetConfig() = default ;
      IpSetConfig& operator=(const IpSetConfig &) = default ;
      IpSetConfig& operator=(IpSetConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessMode_ == nullptr; };
      // accessMode Field Functions 
      bool hasAccessMode() const { return this->accessMode_ != nullptr;};
      void deleteAccessMode() { this->accessMode_ = nullptr;};
      inline string getAccessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, "") };
      inline IpSetConfig& setAccessMode(string accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    protected:
      // The access mode of the acceleration area. Valid values:
      // 
      // - **UserDefine**: custom. You can select acceleration areas and regions based on your business needs. Global Accelerator provides a separate elastic IP address (EIP) for each acceleration region.
      // 
      // - **Anycast**: automatic. You do not need to configure an acceleration area. Global Accelerator provides an Anycast EIP for multiple regions. Users can connect to the nearest access point of the Alibaba Cloud network using the Anycast EIP.
      shared_ptr<string> accessMode_ {};
    };

    class DdosConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DdosConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(DdosId, ddosId_);
        DARABONBA_PTR_TO_JSON(DdosRegionId, ddosRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, DdosConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(DdosId, ddosId_);
        DARABONBA_PTR_FROM_JSON(DdosRegionId, ddosRegionId_);
      };
      DdosConfigList() = default ;
      DdosConfigList(const DdosConfigList &) = default ;
      DdosConfigList(DdosConfigList &&) = default ;
      DdosConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DdosConfigList() = default ;
      DdosConfigList& operator=(const DdosConfigList &) = default ;
      DdosConfigList& operator=(DdosConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ddosId_ == nullptr
        && this->ddosRegionId_ == nullptr; };
      // ddosId Field Functions 
      bool hasDdosId() const { return this->ddosId_ != nullptr;};
      void deleteDdosId() { this->ddosId_ = nullptr;};
      inline string getDdosId() const { DARABONBA_PTR_GET_DEFAULT(ddosId_, "") };
      inline DdosConfigList& setDdosId(string ddosId) { DARABONBA_PTR_SET_VALUE(ddosId_, ddosId) };


      // ddosRegionId Field Functions 
      bool hasDdosRegionId() const { return this->ddosRegionId_ != nullptr;};
      void deleteDdosRegionId() { this->ddosRegionId_ = nullptr;};
      inline string getDdosRegionId() const { DARABONBA_PTR_GET_DEFAULT(ddosRegionId_, "") };
      inline DdosConfigList& setDdosRegionId(string ddosRegionId) { DARABONBA_PTR_SET_VALUE(ddosRegionId_, ddosRegionId) };


    protected:
      // The ID of the Anti-DDoS instance that is associated with the Global Accelerator instance.
      shared_ptr<string> ddosId_ {};
      // The region where the Anti-DDoS instance is deployed. Valid values:
      // 
      // - **cn-hangzhou**: the Chinese mainland.
      // 
      // - **ap-southeast-1**: outside the Chinese mainland.
      shared_ptr<string> ddosRegionId_ {};
    };

    class CrossDomainBandwidthPackage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CrossDomainBandwidthPackage& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, CrossDomainBandwidthPackage& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      CrossDomainBandwidthPackage() = default ;
      CrossDomainBandwidthPackage(const CrossDomainBandwidthPackage &) = default ;
      CrossDomainBandwidthPackage(CrossDomainBandwidthPackage &&) = default ;
      CrossDomainBandwidthPackage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CrossDomainBandwidthPackage() = default ;
      CrossDomainBandwidthPackage& operator=(const CrossDomainBandwidthPackage &) = default ;
      CrossDomainBandwidthPackage& operator=(CrossDomainBandwidthPackage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->instanceId_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline CrossDomainBandwidthPackage& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CrossDomainBandwidthPackage& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // The bandwidth of the cross-region bandwidth plan. Unit: Mbps.
      shared_ptr<int32_t> bandwidth_ {};
      // The ID of the cross-region bandwidth plan.
      shared_ptr<string> instanceId_ {};
    };

    class BasicBandwidthPackage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BasicBandwidthPackage& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(BandwidthType, bandwidthType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, BasicBandwidthPackage& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(BandwidthType, bandwidthType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      BasicBandwidthPackage() = default ;
      BasicBandwidthPackage(const BasicBandwidthPackage &) = default ;
      BasicBandwidthPackage(BasicBandwidthPackage &&) = default ;
      BasicBandwidthPackage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BasicBandwidthPackage() = default ;
      BasicBandwidthPackage& operator=(const BasicBandwidthPackage &) = default ;
      BasicBandwidthPackage& operator=(BasicBandwidthPackage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->bandwidthType_ == nullptr && this->instanceId_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline BasicBandwidthPackage& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // bandwidthType Field Functions 
      bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
      void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
      inline string getBandwidthType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthType_, "") };
      inline BasicBandwidthPackage& setBandwidthType(string bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline BasicBandwidthPackage& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // The bandwidth of the basic bandwidth plan. Unit: Mbps.
      shared_ptr<int32_t> bandwidth_ {};
      // The type of the bandwidth of the basic bandwidth plan. Valid values:
      // 
      // - **Basic**: standard acceleration bandwidth.
      // 
      // - **Enhanced**: enhanced acceleration bandwidth.
      // 
      // - **Advanced**: premium acceleration bandwidth.
      shared_ptr<string> bandwidthType_ {};
      // The ID of the basic bandwidth plan.
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->bandwidth_ == nullptr && this->bandwidthBillingType_ == nullptr && this->basicBandwidthPackage_ == nullptr && this->cenId_ == nullptr && this->createTime_ == nullptr
        && this->crossBorderMode_ == nullptr && this->crossBorderStatus_ == nullptr && this->crossDomainBandwidthPackage_ == nullptr && this->crossPrivateState_ == nullptr && this->ddosConfigList_ == nullptr
        && this->ddosId_ == nullptr && this->description_ == nullptr && this->dnsName_ == nullptr && this->expiredTime_ == nullptr && this->instanceChargeType_ == nullptr
        && this->ipSetConfig_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->secondDnsName_ == nullptr && this->serviceId_ == nullptr && this->serviceManaged_ == nullptr && this->serviceManagedInfos_ == nullptr && this->spec_ == nullptr
        && this->state_ == nullptr && this->tags_ == nullptr && this->upgradableStatus_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline DescribeAcceleratorResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeAcceleratorResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthBillingType Field Functions 
    bool hasBandwidthBillingType() const { return this->bandwidthBillingType_ != nullptr;};
    void deleteBandwidthBillingType() { this->bandwidthBillingType_ = nullptr;};
    inline string getBandwidthBillingType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthBillingType_, "") };
    inline DescribeAcceleratorResponseBody& setBandwidthBillingType(string bandwidthBillingType) { DARABONBA_PTR_SET_VALUE(bandwidthBillingType_, bandwidthBillingType) };


    // basicBandwidthPackage Field Functions 
    bool hasBasicBandwidthPackage() const { return this->basicBandwidthPackage_ != nullptr;};
    void deleteBasicBandwidthPackage() { this->basicBandwidthPackage_ = nullptr;};
    inline const DescribeAcceleratorResponseBody::BasicBandwidthPackage & getBasicBandwidthPackage() const { DARABONBA_PTR_GET_CONST(basicBandwidthPackage_, DescribeAcceleratorResponseBody::BasicBandwidthPackage) };
    inline DescribeAcceleratorResponseBody::BasicBandwidthPackage getBasicBandwidthPackage() { DARABONBA_PTR_GET(basicBandwidthPackage_, DescribeAcceleratorResponseBody::BasicBandwidthPackage) };
    inline DescribeAcceleratorResponseBody& setBasicBandwidthPackage(const DescribeAcceleratorResponseBody::BasicBandwidthPackage & basicBandwidthPackage) { DARABONBA_PTR_SET_VALUE(basicBandwidthPackage_, basicBandwidthPackage) };
    inline DescribeAcceleratorResponseBody& setBasicBandwidthPackage(DescribeAcceleratorResponseBody::BasicBandwidthPackage && basicBandwidthPackage) { DARABONBA_PTR_SET_RVALUE(basicBandwidthPackage_, basicBandwidthPackage) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeAcceleratorResponseBody& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeAcceleratorResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossBorderMode Field Functions 
    bool hasCrossBorderMode() const { return this->crossBorderMode_ != nullptr;};
    void deleteCrossBorderMode() { this->crossBorderMode_ = nullptr;};
    inline string getCrossBorderMode() const { DARABONBA_PTR_GET_DEFAULT(crossBorderMode_, "") };
    inline DescribeAcceleratorResponseBody& setCrossBorderMode(string crossBorderMode) { DARABONBA_PTR_SET_VALUE(crossBorderMode_, crossBorderMode) };


    // crossBorderStatus Field Functions 
    bool hasCrossBorderStatus() const { return this->crossBorderStatus_ != nullptr;};
    void deleteCrossBorderStatus() { this->crossBorderStatus_ = nullptr;};
    inline bool getCrossBorderStatus() const { DARABONBA_PTR_GET_DEFAULT(crossBorderStatus_, false) };
    inline DescribeAcceleratorResponseBody& setCrossBorderStatus(bool crossBorderStatus) { DARABONBA_PTR_SET_VALUE(crossBorderStatus_, crossBorderStatus) };


    // crossDomainBandwidthPackage Field Functions 
    bool hasCrossDomainBandwidthPackage() const { return this->crossDomainBandwidthPackage_ != nullptr;};
    void deleteCrossDomainBandwidthPackage() { this->crossDomainBandwidthPackage_ = nullptr;};
    inline const DescribeAcceleratorResponseBody::CrossDomainBandwidthPackage & getCrossDomainBandwidthPackage() const { DARABONBA_PTR_GET_CONST(crossDomainBandwidthPackage_, DescribeAcceleratorResponseBody::CrossDomainBandwidthPackage) };
    inline DescribeAcceleratorResponseBody::CrossDomainBandwidthPackage getCrossDomainBandwidthPackage() { DARABONBA_PTR_GET(crossDomainBandwidthPackage_, DescribeAcceleratorResponseBody::CrossDomainBandwidthPackage) };
    inline DescribeAcceleratorResponseBody& setCrossDomainBandwidthPackage(const DescribeAcceleratorResponseBody::CrossDomainBandwidthPackage & crossDomainBandwidthPackage) { DARABONBA_PTR_SET_VALUE(crossDomainBandwidthPackage_, crossDomainBandwidthPackage) };
    inline DescribeAcceleratorResponseBody& setCrossDomainBandwidthPackage(DescribeAcceleratorResponseBody::CrossDomainBandwidthPackage && crossDomainBandwidthPackage) { DARABONBA_PTR_SET_RVALUE(crossDomainBandwidthPackage_, crossDomainBandwidthPackage) };


    // crossPrivateState Field Functions 
    bool hasCrossPrivateState() const { return this->crossPrivateState_ != nullptr;};
    void deleteCrossPrivateState() { this->crossPrivateState_ = nullptr;};
    inline string getCrossPrivateState() const { DARABONBA_PTR_GET_DEFAULT(crossPrivateState_, "") };
    inline DescribeAcceleratorResponseBody& setCrossPrivateState(string crossPrivateState) { DARABONBA_PTR_SET_VALUE(crossPrivateState_, crossPrivateState) };


    // ddosConfigList Field Functions 
    bool hasDdosConfigList() const { return this->ddosConfigList_ != nullptr;};
    void deleteDdosConfigList() { this->ddosConfigList_ = nullptr;};
    inline const vector<DescribeAcceleratorResponseBody::DdosConfigList> & getDdosConfigList() const { DARABONBA_PTR_GET_CONST(ddosConfigList_, vector<DescribeAcceleratorResponseBody::DdosConfigList>) };
    inline vector<DescribeAcceleratorResponseBody::DdosConfigList> getDdosConfigList() { DARABONBA_PTR_GET(ddosConfigList_, vector<DescribeAcceleratorResponseBody::DdosConfigList>) };
    inline DescribeAcceleratorResponseBody& setDdosConfigList(const vector<DescribeAcceleratorResponseBody::DdosConfigList> & ddosConfigList) { DARABONBA_PTR_SET_VALUE(ddosConfigList_, ddosConfigList) };
    inline DescribeAcceleratorResponseBody& setDdosConfigList(vector<DescribeAcceleratorResponseBody::DdosConfigList> && ddosConfigList) { DARABONBA_PTR_SET_RVALUE(ddosConfigList_, ddosConfigList) };


    // ddosId Field Functions 
    bool hasDdosId() const { return this->ddosId_ != nullptr;};
    void deleteDdosId() { this->ddosId_ = nullptr;};
    inline string getDdosId() const { DARABONBA_PTR_GET_DEFAULT(ddosId_, "") };
    inline DescribeAcceleratorResponseBody& setDdosId(string ddosId) { DARABONBA_PTR_SET_VALUE(ddosId_, ddosId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAcceleratorResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dnsName Field Functions 
    bool hasDnsName() const { return this->dnsName_ != nullptr;};
    void deleteDnsName() { this->dnsName_ = nullptr;};
    inline string getDnsName() const { DARABONBA_PTR_GET_DEFAULT(dnsName_, "") };
    inline DescribeAcceleratorResponseBody& setDnsName(string dnsName) { DARABONBA_PTR_SET_VALUE(dnsName_, dnsName) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline int64_t getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, 0L) };
    inline DescribeAcceleratorResponseBody& setExpiredTime(int64_t expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeAcceleratorResponseBody& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // ipSetConfig Field Functions 
    bool hasIpSetConfig() const { return this->ipSetConfig_ != nullptr;};
    void deleteIpSetConfig() { this->ipSetConfig_ = nullptr;};
    inline const DescribeAcceleratorResponseBody::IpSetConfig & getIpSetConfig() const { DARABONBA_PTR_GET_CONST(ipSetConfig_, DescribeAcceleratorResponseBody::IpSetConfig) };
    inline DescribeAcceleratorResponseBody::IpSetConfig getIpSetConfig() { DARABONBA_PTR_GET(ipSetConfig_, DescribeAcceleratorResponseBody::IpSetConfig) };
    inline DescribeAcceleratorResponseBody& setIpSetConfig(const DescribeAcceleratorResponseBody::IpSetConfig & ipSetConfig) { DARABONBA_PTR_SET_VALUE(ipSetConfig_, ipSetConfig) };
    inline DescribeAcceleratorResponseBody& setIpSetConfig(DescribeAcceleratorResponseBody::IpSetConfig && ipSetConfig) { DARABONBA_PTR_SET_RVALUE(ipSetConfig_, ipSetConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAcceleratorResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAcceleratorResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAcceleratorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeAcceleratorResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // secondDnsName Field Functions 
    bool hasSecondDnsName() const { return this->secondDnsName_ != nullptr;};
    void deleteSecondDnsName() { this->secondDnsName_ = nullptr;};
    inline string getSecondDnsName() const { DARABONBA_PTR_GET_DEFAULT(secondDnsName_, "") };
    inline DescribeAcceleratorResponseBody& setSecondDnsName(string secondDnsName) { DARABONBA_PTR_SET_VALUE(secondDnsName_, secondDnsName) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline DescribeAcceleratorResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline DescribeAcceleratorResponseBody& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // serviceManagedInfos Field Functions 
    bool hasServiceManagedInfos() const { return this->serviceManagedInfos_ != nullptr;};
    void deleteServiceManagedInfos() { this->serviceManagedInfos_ = nullptr;};
    inline const vector<DescribeAcceleratorResponseBody::ServiceManagedInfos> & getServiceManagedInfos() const { DARABONBA_PTR_GET_CONST(serviceManagedInfos_, vector<DescribeAcceleratorResponseBody::ServiceManagedInfos>) };
    inline vector<DescribeAcceleratorResponseBody::ServiceManagedInfos> getServiceManagedInfos() { DARABONBA_PTR_GET(serviceManagedInfos_, vector<DescribeAcceleratorResponseBody::ServiceManagedInfos>) };
    inline DescribeAcceleratorResponseBody& setServiceManagedInfos(const vector<DescribeAcceleratorResponseBody::ServiceManagedInfos> & serviceManagedInfos) { DARABONBA_PTR_SET_VALUE(serviceManagedInfos_, serviceManagedInfos) };
    inline DescribeAcceleratorResponseBody& setServiceManagedInfos(vector<DescribeAcceleratorResponseBody::ServiceManagedInfos> && serviceManagedInfos) { DARABONBA_PTR_SET_RVALUE(serviceManagedInfos_, serviceManagedInfos) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeAcceleratorResponseBody& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeAcceleratorResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeAcceleratorResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeAcceleratorResponseBody::Tags>) };
    inline vector<DescribeAcceleratorResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DescribeAcceleratorResponseBody::Tags>) };
    inline DescribeAcceleratorResponseBody& setTags(const vector<DescribeAcceleratorResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeAcceleratorResponseBody& setTags(vector<DescribeAcceleratorResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // upgradableStatus Field Functions 
    bool hasUpgradableStatus() const { return this->upgradableStatus_ != nullptr;};
    void deleteUpgradableStatus() { this->upgradableStatus_ = nullptr;};
    inline string getUpgradableStatus() const { DARABONBA_PTR_GET_DEFAULT(upgradableStatus_, "") };
    inline DescribeAcceleratorResponseBody& setUpgradableStatus(string upgradableStatus) { DARABONBA_PTR_SET_VALUE(upgradableStatus_, upgradableStatus) };


  protected:
    // The ID of the Global Accelerator instance.
    shared_ptr<string> acceleratorId_ {};
    // The bandwidth of the standard Global Accelerator instance. Unit: Mbps.
    // 
    // > This parameter is valid only when the access mode of the acceleration area is Anycast.
    shared_ptr<int32_t> bandwidth_ {};
    // The billing method of the bandwidth. Valid values:
    // 
    // - **BandwidthPackage**: pay-by-bandwidth-plan.
    // 
    // - **CDT**: pay-by-data-transfer.
    shared_ptr<string> bandwidthBillingType_ {};
    // The details of the basic bandwidth plan that is associated with the Global Accelerator instance.
    shared_ptr<DescribeAcceleratorResponseBody::BasicBandwidthPackage> basicBandwidthPackage_ {};
    // The ID of the Cloud Enterprise Network (CEN) instance that is associated with the Global Accelerator instance.
    shared_ptr<string> cenId_ {};
    // The timestamp that indicates when the Global Accelerator instance was created.
    shared_ptr<int64_t> createTime_ {};
    // The type of cross-border acceleration. This parameter is returned for pay-by-data-transfer instances.
    // 
    // **bpgPro**: premium bandwidth for cross-border acceleration.
    shared_ptr<string> crossBorderMode_ {};
    // Indicates whether the cross-border line feature is enabled for the Global Accelerator instance. Valid values:
    // 
    // - **true**: The cross-border line feature is enabled. You can use Global Accelerator to accelerate data transmission across borders.
    // 
    // - **false**: The cross-border line feature is disabled. You cannot use Global Accelerator to accelerate data transmission across borders.
    shared_ptr<bool> crossBorderStatus_ {};
    // The details of the cross-region bandwidth plan that is associated with the Global Accelerator instance.
    // 
    // This parameter is returned only by the Alibaba Cloud International Website (www\\.alibabacloud.com).
    shared_ptr<DescribeAcceleratorResponseBody::CrossDomainBandwidthPackage> crossDomainBandwidthPackage_ {};
    // Indicates whether cross-border bandwidth is enabled.
    // 
    // - **true**: enabled.
    // 
    // - **false**: disabled.
    shared_ptr<string> crossPrivateState_ {};
    // The list of Anti-DDoS instances that are associated with the Global Accelerator instance.
    shared_ptr<vector<DescribeAcceleratorResponseBody::DdosConfigList>> ddosConfigList_ {};
    // The ID of the Anti-DDoS instance that is associated with the Global Accelerator instance.
    shared_ptr<string> ddosId_ {};
    // The description of the Global Accelerator instance.
    shared_ptr<string> description_ {};
    // The canonical name (CNAME) that is assigned to the Global Accelerator instance.
    shared_ptr<string> dnsName_ {};
    // The timestamp that indicates when the Global Accelerator instance expires.
    shared_ptr<int64_t> expiredTime_ {};
    // The billing method of the Global Accelerator instance.
    shared_ptr<string> instanceChargeType_ {};
    // The configuration of the acceleration area.
    shared_ptr<DescribeAcceleratorResponseBody::IpSetConfig> ipSetConfig_ {};
    // The name of the Global Accelerator instance.
    shared_ptr<string> name_ {};
    // The region where the Global Accelerator instance is deployed.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The CNAME of the Anti-DDoS instance that is associated with the Global Accelerator instance.
    shared_ptr<string> secondDnsName_ {};
    // The ID of the service that manages the instance.
    // 
    // > This parameter is valid only when **ServiceManaged** is set to **True**.
    shared_ptr<string> serviceId_ {};
    // Indicates whether the instance is a managed instance. Valid values:
    // 
    // - **true**: The instance is a managed instance.
    // 
    // - **false**: The instance is not a managed instance.
    shared_ptr<bool> serviceManaged_ {};
    // The actions that you can perform on the managed instance.
    // 
    // > - This parameter is valid only when **ServiceManaged** is set to **True**.
    // >
    // > - When the instance is managed, you cannot perform some operations on the instance.
    shared_ptr<vector<DescribeAcceleratorResponseBody::ServiceManagedInfos>> serviceManagedInfos_ {};
    // The specification of the Global Accelerator instance. Valid values:
    // 
    // - **1**: Small I.
    // 
    // - **2**: Small II.
    // 
    // - **3**: Small III.
    // 
    // - **5**: Medium I.
    // 
    // - **8**: Medium II.
    // 
    // - **10**: Medium III.
    // 
    // - **20**: Large I.
    // 
    // - **30**: Large II.
    // 
    // - **40**: Large III.
    // 
    // - **50**: Large IV.
    // 
    // - **60**: Large V.
    // 
    // - **70**: Large VI.
    // 
    // - **80**: Large VII.
    // 
    // - **90**: Large VIII.
    // 
    // - **100**: Super Large I.
    // 
    // - **200**: Super Large II.
    // 
    // > The Large III and higher specifications are available only to users on the whitelist. To use these specifications, contact your account manager.
    // 
    // The definitions of different specifications vary. For more information, see [Instance specifications](https://help.aliyun.com/document_detail/153127.html).
    shared_ptr<string> spec_ {};
    // The status of the Global Accelerator instance. Valid values:
    // 
    // - **init**: The instance is being initialized.
    // 
    // - **active**: The instance is available.
    // 
    // - **configuring**: The instance is being configured.
    // 
    // - **binding**: The instance is being associated.
    // 
    // - **unbinding**: The instance is being disassociated.
    // 
    // - **deleting**: The instance is being deleted.
    // 
    // - **finacialLocked**: The instance is financially locked.
    shared_ptr<string> state_ {};
    // The tags of the resource.
    shared_ptr<vector<DescribeAcceleratorResponseBody::Tags>> tags_ {};
    // The upgrade status of the Global Accelerator instance. Valid values:
    // 
    // - **notUpgradable**: The instance does not need to be upgraded.
    // 
    // - **upgradable**: The instance can be upgraded.
    // 
    // - **upgradeFailed**: The instance failed to be upgraded.
    shared_ptr<string> upgradableStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
