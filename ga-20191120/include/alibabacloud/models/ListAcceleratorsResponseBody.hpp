// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCELERATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCELERATORSRESPONSEBODY_HPP_
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
  class ListAcceleratorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAcceleratorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accelerators, accelerators_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAcceleratorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accelerators, accelerators_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAcceleratorsResponseBody() = default ;
    ListAcceleratorsResponseBody(const ListAcceleratorsResponseBody &) = default ;
    ListAcceleratorsResponseBody(ListAcceleratorsResponseBody &&) = default ;
    ListAcceleratorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAcceleratorsResponseBody() = default ;
    ListAcceleratorsResponseBody& operator=(const ListAcceleratorsResponseBody &) = default ;
    ListAcceleratorsResponseBody& operator=(ListAcceleratorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Accelerators : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Accelerators& obj) { 
        DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(BandwidthBillingType, bandwidthBillingType_);
        DARABONBA_PTR_TO_JSON(BasicBandwidthPackage, basicBandwidthPackage_);
        DARABONBA_PTR_TO_JSON(CenId, cenId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CrossBorderMode, crossBorderMode_);
        DARABONBA_PTR_TO_JSON(CrossBorderStatus, crossBorderStatus_);
        DARABONBA_PTR_TO_JSON(CrossDomainBandwidthPackage, crossDomainBandwidthPackage_);
        DARABONBA_PTR_TO_JSON(DdosConfigList, ddosConfigList_);
        DARABONBA_PTR_TO_JSON(DdosId, ddosId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DnsName, dnsName_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
        DARABONBA_PTR_TO_JSON(IpSetConfig, ipSetConfig_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecondDnsName, secondDnsName_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_TO_JSON(ServiceManagedInfos, serviceManagedInfos_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpgradableStatus, upgradableStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Accelerators& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(BandwidthBillingType, bandwidthBillingType_);
        DARABONBA_PTR_FROM_JSON(BasicBandwidthPackage, basicBandwidthPackage_);
        DARABONBA_PTR_FROM_JSON(CenId, cenId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CrossBorderMode, crossBorderMode_);
        DARABONBA_PTR_FROM_JSON(CrossBorderStatus, crossBorderStatus_);
        DARABONBA_PTR_FROM_JSON(CrossDomainBandwidthPackage, crossDomainBandwidthPackage_);
        DARABONBA_PTR_FROM_JSON(DdosConfigList, ddosConfigList_);
        DARABONBA_PTR_FROM_JSON(DdosId, ddosId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DnsName, dnsName_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
        DARABONBA_PTR_FROM_JSON(IpSetConfig, ipSetConfig_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecondDnsName, secondDnsName_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_FROM_JSON(ServiceManagedInfos, serviceManagedInfos_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpgradableStatus, upgradableStatus_);
      };
      Accelerators() = default ;
      Accelerators(const Accelerators &) = default ;
      Accelerators(Accelerators &&) = default ;
      Accelerators(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Accelerators() = default ;
      Accelerators& operator=(const Accelerators &) = default ;
      Accelerators& operator=(Accelerators &&) = default ;
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
        // The key of the tag.
        shared_ptr<string> key_ {};
        // The value of the tag.
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
        // The name of the action that is performed on the managed instance. Valid values:
        // 
        // *   **Create**
        // *   **Update**
        // *   **Delete**
        // *   **Associate**
        // *   **UserUnmanaged**
        // *   **CreateChild**
        shared_ptr<string> action_ {};
        // The type of the child resource. Valid values:
        // 
        // *   **Listener**: listener.
        // *   **IpSet**: acceleration region.
        // *   **EndpointGroup**: endpoint group.
        // *   **ForwardingRule**: forwarding rule.
        // *   **Endpoint**: endpoint.
        // *   **EndpointGroupDestination**: protocol mapping of an endpoint group associated with a custom routing listener.
        // *   **EndpointPolicy**: traffic policy of an endpoint associated with a custom routing listener.
        // 
        // >  This parameter takes effect only if the value of **Action** is **CreateChild**.
        shared_ptr<string> childType_ {};
        // Indicates whether the specified actions are managed. Valid values:
        // 
        // *   **true**: The specified actions are managed, and users cannot perform the specified actions on the managed instance.
        // *   **false**: The specified actions are not managed, and users can perform the specified actions on the managed instance.
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
        // *   **UserDefine**: custom nearby access mode. You can select acceleration areas and regions based on your business requirements. GA allocates a separate elastic IP address (EIP) to each acceleration region.
        // *   **Anycast**: automatic nearby access mode. You do not need to specify an acceleration area. GA allocates an Anycast EIP to multiple regions across the globe. Users can connect to the nearest access point of the Alibaba Cloud global transmission network by sending requests to the Anycast EIP.
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
        shared_ptr<string> ddosId_ {};
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
        // The bandwidth value of the cross-border acceleration bandwidth plan. Unit: Mbit/s.
        shared_ptr<int32_t> bandwidth_ {};
        // The ID of the cross-border acceleration bandwidth plan.
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
        // The bandwidth value of the basic bandwidth plan. Unit: Mbit/s.
        shared_ptr<int32_t> bandwidth_ {};
        // The bandwidth type that is provided by the basic bandwidth plan. Valid values:
        // 
        // *   **Basic**
        // *   **Enhanced**
        // *   **Advanced**
        shared_ptr<string> bandwidthType_ {};
        // The ID of the basic bandwidth plan.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->bandwidth_ == nullptr && this->bandwidthBillingType_ == nullptr && this->basicBandwidthPackage_ == nullptr && this->cenId_ == nullptr && this->createTime_ == nullptr
        && this->crossBorderMode_ == nullptr && this->crossBorderStatus_ == nullptr && this->crossDomainBandwidthPackage_ == nullptr && this->ddosConfigList_ == nullptr && this->ddosId_ == nullptr
        && this->description_ == nullptr && this->dnsName_ == nullptr && this->expiredTime_ == nullptr && this->instanceChargeType_ == nullptr && this->ipSetConfig_ == nullptr
        && this->name_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->secondDnsName_ == nullptr && this->serviceId_ == nullptr
        && this->serviceManaged_ == nullptr && this->serviceManagedInfos_ == nullptr && this->spec_ == nullptr && this->state_ == nullptr && this->tags_ == nullptr
        && this->type_ == nullptr && this->upgradableStatus_ == nullptr; };
      // acceleratorId Field Functions 
      bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
      void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
      inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
      inline Accelerators& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline Accelerators& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // bandwidthBillingType Field Functions 
      bool hasBandwidthBillingType() const { return this->bandwidthBillingType_ != nullptr;};
      void deleteBandwidthBillingType() { this->bandwidthBillingType_ = nullptr;};
      inline string getBandwidthBillingType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthBillingType_, "") };
      inline Accelerators& setBandwidthBillingType(string bandwidthBillingType) { DARABONBA_PTR_SET_VALUE(bandwidthBillingType_, bandwidthBillingType) };


      // basicBandwidthPackage Field Functions 
      bool hasBasicBandwidthPackage() const { return this->basicBandwidthPackage_ != nullptr;};
      void deleteBasicBandwidthPackage() { this->basicBandwidthPackage_ = nullptr;};
      inline const Accelerators::BasicBandwidthPackage & getBasicBandwidthPackage() const { DARABONBA_PTR_GET_CONST(basicBandwidthPackage_, Accelerators::BasicBandwidthPackage) };
      inline Accelerators::BasicBandwidthPackage getBasicBandwidthPackage() { DARABONBA_PTR_GET(basicBandwidthPackage_, Accelerators::BasicBandwidthPackage) };
      inline Accelerators& setBasicBandwidthPackage(const Accelerators::BasicBandwidthPackage & basicBandwidthPackage) { DARABONBA_PTR_SET_VALUE(basicBandwidthPackage_, basicBandwidthPackage) };
      inline Accelerators& setBasicBandwidthPackage(Accelerators::BasicBandwidthPackage && basicBandwidthPackage) { DARABONBA_PTR_SET_RVALUE(basicBandwidthPackage_, basicBandwidthPackage) };


      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline Accelerators& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Accelerators& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // crossBorderMode Field Functions 
      bool hasCrossBorderMode() const { return this->crossBorderMode_ != nullptr;};
      void deleteCrossBorderMode() { this->crossBorderMode_ = nullptr;};
      inline string getCrossBorderMode() const { DARABONBA_PTR_GET_DEFAULT(crossBorderMode_, "") };
      inline Accelerators& setCrossBorderMode(string crossBorderMode) { DARABONBA_PTR_SET_VALUE(crossBorderMode_, crossBorderMode) };


      // crossBorderStatus Field Functions 
      bool hasCrossBorderStatus() const { return this->crossBorderStatus_ != nullptr;};
      void deleteCrossBorderStatus() { this->crossBorderStatus_ = nullptr;};
      inline bool getCrossBorderStatus() const { DARABONBA_PTR_GET_DEFAULT(crossBorderStatus_, false) };
      inline Accelerators& setCrossBorderStatus(bool crossBorderStatus) { DARABONBA_PTR_SET_VALUE(crossBorderStatus_, crossBorderStatus) };


      // crossDomainBandwidthPackage Field Functions 
      bool hasCrossDomainBandwidthPackage() const { return this->crossDomainBandwidthPackage_ != nullptr;};
      void deleteCrossDomainBandwidthPackage() { this->crossDomainBandwidthPackage_ = nullptr;};
      inline const Accelerators::CrossDomainBandwidthPackage & getCrossDomainBandwidthPackage() const { DARABONBA_PTR_GET_CONST(crossDomainBandwidthPackage_, Accelerators::CrossDomainBandwidthPackage) };
      inline Accelerators::CrossDomainBandwidthPackage getCrossDomainBandwidthPackage() { DARABONBA_PTR_GET(crossDomainBandwidthPackage_, Accelerators::CrossDomainBandwidthPackage) };
      inline Accelerators& setCrossDomainBandwidthPackage(const Accelerators::CrossDomainBandwidthPackage & crossDomainBandwidthPackage) { DARABONBA_PTR_SET_VALUE(crossDomainBandwidthPackage_, crossDomainBandwidthPackage) };
      inline Accelerators& setCrossDomainBandwidthPackage(Accelerators::CrossDomainBandwidthPackage && crossDomainBandwidthPackage) { DARABONBA_PTR_SET_RVALUE(crossDomainBandwidthPackage_, crossDomainBandwidthPackage) };


      // ddosConfigList Field Functions 
      bool hasDdosConfigList() const { return this->ddosConfigList_ != nullptr;};
      void deleteDdosConfigList() { this->ddosConfigList_ = nullptr;};
      inline const vector<Accelerators::DdosConfigList> & getDdosConfigList() const { DARABONBA_PTR_GET_CONST(ddosConfigList_, vector<Accelerators::DdosConfigList>) };
      inline vector<Accelerators::DdosConfigList> getDdosConfigList() { DARABONBA_PTR_GET(ddosConfigList_, vector<Accelerators::DdosConfigList>) };
      inline Accelerators& setDdosConfigList(const vector<Accelerators::DdosConfigList> & ddosConfigList) { DARABONBA_PTR_SET_VALUE(ddosConfigList_, ddosConfigList) };
      inline Accelerators& setDdosConfigList(vector<Accelerators::DdosConfigList> && ddosConfigList) { DARABONBA_PTR_SET_RVALUE(ddosConfigList_, ddosConfigList) };


      // ddosId Field Functions 
      bool hasDdosId() const { return this->ddosId_ != nullptr;};
      void deleteDdosId() { this->ddosId_ = nullptr;};
      inline string getDdosId() const { DARABONBA_PTR_GET_DEFAULT(ddosId_, "") };
      inline Accelerators& setDdosId(string ddosId) { DARABONBA_PTR_SET_VALUE(ddosId_, ddosId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Accelerators& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dnsName Field Functions 
      bool hasDnsName() const { return this->dnsName_ != nullptr;};
      void deleteDnsName() { this->dnsName_ = nullptr;};
      inline string getDnsName() const { DARABONBA_PTR_GET_DEFAULT(dnsName_, "") };
      inline Accelerators& setDnsName(string dnsName) { DARABONBA_PTR_SET_VALUE(dnsName_, dnsName) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline int64_t getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, 0L) };
      inline Accelerators& setExpiredTime(int64_t expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // instanceChargeType Field Functions 
      bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
      void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
      inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
      inline Accelerators& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


      // ipSetConfig Field Functions 
      bool hasIpSetConfig() const { return this->ipSetConfig_ != nullptr;};
      void deleteIpSetConfig() { this->ipSetConfig_ = nullptr;};
      inline const Accelerators::IpSetConfig & getIpSetConfig() const { DARABONBA_PTR_GET_CONST(ipSetConfig_, Accelerators::IpSetConfig) };
      inline Accelerators::IpSetConfig getIpSetConfig() { DARABONBA_PTR_GET(ipSetConfig_, Accelerators::IpSetConfig) };
      inline Accelerators& setIpSetConfig(const Accelerators::IpSetConfig & ipSetConfig) { DARABONBA_PTR_SET_VALUE(ipSetConfig_, ipSetConfig) };
      inline Accelerators& setIpSetConfig(Accelerators::IpSetConfig && ipSetConfig) { DARABONBA_PTR_SET_RVALUE(ipSetConfig_, ipSetConfig) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Accelerators& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Accelerators& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Accelerators& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // secondDnsName Field Functions 
      bool hasSecondDnsName() const { return this->secondDnsName_ != nullptr;};
      void deleteSecondDnsName() { this->secondDnsName_ = nullptr;};
      inline string getSecondDnsName() const { DARABONBA_PTR_GET_DEFAULT(secondDnsName_, "") };
      inline Accelerators& setSecondDnsName(string secondDnsName) { DARABONBA_PTR_SET_VALUE(secondDnsName_, secondDnsName) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Accelerators& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceManaged Field Functions 
      bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
      void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
      inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
      inline Accelerators& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


      // serviceManagedInfos Field Functions 
      bool hasServiceManagedInfos() const { return this->serviceManagedInfos_ != nullptr;};
      void deleteServiceManagedInfos() { this->serviceManagedInfos_ = nullptr;};
      inline const vector<Accelerators::ServiceManagedInfos> & getServiceManagedInfos() const { DARABONBA_PTR_GET_CONST(serviceManagedInfos_, vector<Accelerators::ServiceManagedInfos>) };
      inline vector<Accelerators::ServiceManagedInfos> getServiceManagedInfos() { DARABONBA_PTR_GET(serviceManagedInfos_, vector<Accelerators::ServiceManagedInfos>) };
      inline Accelerators& setServiceManagedInfos(const vector<Accelerators::ServiceManagedInfos> & serviceManagedInfos) { DARABONBA_PTR_SET_VALUE(serviceManagedInfos_, serviceManagedInfos) };
      inline Accelerators& setServiceManagedInfos(vector<Accelerators::ServiceManagedInfos> && serviceManagedInfos) { DARABONBA_PTR_SET_RVALUE(serviceManagedInfos_, serviceManagedInfos) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline Accelerators& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Accelerators& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Accelerators::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Accelerators::Tags>) };
      inline vector<Accelerators::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Accelerators::Tags>) };
      inline Accelerators& setTags(const vector<Accelerators::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Accelerators& setTags(vector<Accelerators::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Accelerators& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // upgradableStatus Field Functions 
      bool hasUpgradableStatus() const { return this->upgradableStatus_ != nullptr;};
      void deleteUpgradableStatus() { this->upgradableStatus_ = nullptr;};
      inline string getUpgradableStatus() const { DARABONBA_PTR_GET_DEFAULT(upgradableStatus_, "") };
      inline Accelerators& setUpgradableStatus(string upgradableStatus) { DARABONBA_PTR_SET_VALUE(upgradableStatus_, upgradableStatus) };


    protected:
      // The ID of the GA instance.
      shared_ptr<string> acceleratorId_ {};
      // The bandwidth of the GA instance. Unit: Mbit/s.
      shared_ptr<int32_t> bandwidth_ {};
      // The bandwidth metering method. Valid values:
      // 
      // *   **BandwidthPackage**: billed based on bandwidth plans.
      // *   **CDT**: billed based on data transfer.
      shared_ptr<string> bandwidthBillingType_ {};
      // The information about the basic bandwidth plan that is associated with the GA instance.
      shared_ptr<Accelerators::BasicBandwidthPackage> basicBandwidthPackage_ {};
      // The ID of the Cloud Enterprise Network (CEN) instance that is associated with the GA instance.
      shared_ptr<string> cenId_ {};
      // The timestamp that indicates when the GA instance was created.
      shared_ptr<int64_t> createTime_ {};
      // The type of cross-border acceleration. This parameter is returned for GA instances whose bandwidth metering method is pay-by-data-transfer.
      // 
      // *   **bpgPro**: BGP (Multi-ISP) Pro lines.
      // *   **private**: cross-border Express Connect circuit.
      shared_ptr<string> crossBorderMode_ {};
      // Indicates whether cross-border acceleration is enabled for the GA instance. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> crossBorderStatus_ {};
      // The information about the cross-border acceleration bandwidth plan that is associated with the GA instance.
      // 
      // This array is returned only for GA instances that are created on the international site (alibabacloud.com).
      shared_ptr<Accelerators::CrossDomainBandwidthPackage> crossDomainBandwidthPackage_ {};
      shared_ptr<vector<Accelerators::DdosConfigList>> ddosConfigList_ {};
      // The ID of the Anti-DDoS Pro or Anti-DDOS Premium instance that is associated with the GA instance.
      shared_ptr<string> ddosId_ {};
      // The description of the GA instance.
      shared_ptr<string> description_ {};
      // The CNAME that is assigned to the GA instance.
      shared_ptr<string> dnsName_ {};
      // The timestamp that indicates when the GA instance expires.
      shared_ptr<int64_t> expiredTime_ {};
      // The billing method of the GA instance.
      shared_ptr<string> instanceChargeType_ {};
      // The configurations of the acceleration area.
      shared_ptr<Accelerators::IpSetConfig> ipSetConfig_ {};
      // The name of the GA instance.
      shared_ptr<string> name_ {};
      // The ID of the region where GA instance is deployed. Only **cn-hangzhou** may be returned.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The CNAME that is used to associate the GA instance with an Anti-DDoS Pro instance or an Anti-DDOS Premium instance.
      shared_ptr<string> secondDnsName_ {};
      // The ID of the service that manages the instance.
      // 
      // >  This parameter takes effect only if the value of **ServiceManaged** is **true**.
      shared_ptr<string> serviceId_ {};
      // Indicates whether the GA instance is managed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> serviceManaged_ {};
      // The actions that users can perform on the managed instance.
      // > *   This parameter takes effect only if the value of **ServiceManaged** is **true**.
      // > *   Users can perform only specific actions on a managed instance.
      shared_ptr<vector<Accelerators::ServiceManagedInfos>> serviceManagedInfos_ {};
      // The specification of the GA instance. Valid values:
      // 
      // *   **1**: Small Ⅰ.
      // *   **2**: Small Ⅱ.
      // *   **3**: Small Ⅲ.
      // *   **5**: Medium Ⅰ.
      // *   **8**: Medium Ⅱ.
      // *   **10**: Medium Ⅲ.
      // *   **20**: Large Ⅰ.
      // *   **30**: Large Ⅱ.
      // *   **40**: Large Ⅲ.
      // *   **50**: Large IV.
      // *   **60**: Large V.
      // *   **70**: Large VI.
      // *   **80**: Large VII.
      // *   **90**: Large VIII.
      // *   **100**: Super Large Ⅰ.
      // *   **200**: Super Large Ⅱ.
      // 
      // >  The Large Ⅲ specification and higher specifications are available only to accounts that are added to the whitelist. To use these specifications, contact your Alibaba Cloud account manager.
      // 
      // Different specifications provide different capabilities. For more information, see [Instance specifications](https://help.aliyun.com/document_detail/153127.html).
      shared_ptr<string> spec_ {};
      // The status of the GA instance. Valid values:
      // 
      // *   **init**: The GA instance is being initialized.
      // *   **active**: The GA instance is available.
      // *   **configuring**: The GA instance is being configured.
      // *   **binding**: The GA instance is being associated.
      // *   **unbinding**: The GA instance is being disassociated.
      // *   **deleting**: The GA instance is being deleted.
      // *   **finacialLocked**: The GA instance is locked due to overdue payments.
      shared_ptr<string> state_ {};
      // The tags that are added to the resource.
      shared_ptr<vector<Accelerators::Tags>> tags_ {};
      // An invalid parameter.
      shared_ptr<string> type_ {};
      // Indicates whether the GA instance can be upgraded. Valid values:
      // 
      // *   **notUpgradable**: The GA instance does not need to be upgraded.
      // *   **upgradable**: The GA instance can be upgraded to the latest version.
      // *   **upgradeFailed**: The GA instance failed to be upgraded.
      shared_ptr<string> upgradableStatus_ {};
    };

    virtual bool empty() const override { return this->accelerators_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accelerators Field Functions 
    bool hasAccelerators() const { return this->accelerators_ != nullptr;};
    void deleteAccelerators() { this->accelerators_ = nullptr;};
    inline const vector<ListAcceleratorsResponseBody::Accelerators> & getAccelerators() const { DARABONBA_PTR_GET_CONST(accelerators_, vector<ListAcceleratorsResponseBody::Accelerators>) };
    inline vector<ListAcceleratorsResponseBody::Accelerators> getAccelerators() { DARABONBA_PTR_GET(accelerators_, vector<ListAcceleratorsResponseBody::Accelerators>) };
    inline ListAcceleratorsResponseBody& setAccelerators(const vector<ListAcceleratorsResponseBody::Accelerators> & accelerators) { DARABONBA_PTR_SET_VALUE(accelerators_, accelerators) };
    inline ListAcceleratorsResponseBody& setAccelerators(vector<ListAcceleratorsResponseBody::Accelerators> && accelerators) { DARABONBA_PTR_SET_RVALUE(accelerators_, accelerators) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAcceleratorsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAcceleratorsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAcceleratorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAcceleratorsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the GA instances.
    shared_ptr<vector<ListAcceleratorsResponseBody::Accelerators>> accelerators_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
