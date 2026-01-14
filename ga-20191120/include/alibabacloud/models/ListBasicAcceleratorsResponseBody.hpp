// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASICACCELERATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBASICACCELERATORSRESPONSEBODY_HPP_
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
  class ListBasicAcceleratorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBasicAcceleratorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accelerators, accelerators_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBasicAcceleratorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accelerators, accelerators_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBasicAcceleratorsResponseBody() = default ;
    ListBasicAcceleratorsResponseBody(const ListBasicAcceleratorsResponseBody &) = default ;
    ListBasicAcceleratorsResponseBody(ListBasicAcceleratorsResponseBody &&) = default ;
    ListBasicAcceleratorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBasicAcceleratorsResponseBody() = default ;
    ListBasicAcceleratorsResponseBody& operator=(const ListBasicAcceleratorsResponseBody &) = default ;
    ListBasicAcceleratorsResponseBody& operator=(ListBasicAcceleratorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Accelerators : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Accelerators& obj) { 
        DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_TO_JSON(BandwidthBillingType, bandwidthBillingType_);
        DARABONBA_PTR_TO_JSON(BasicBandwidthPackage, basicBandwidthPackage_);
        DARABONBA_PTR_TO_JSON(BasicEndpointGroupId, basicEndpointGroupId_);
        DARABONBA_PTR_TO_JSON(BasicIpSetId, basicIpSetId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CrossBorderStatus, crossBorderStatus_);
        DARABONBA_PTR_TO_JSON(CrossDomainBandwidthPackage, crossDomainBandwidthPackage_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Accelerators& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_FROM_JSON(BandwidthBillingType, bandwidthBillingType_);
        DARABONBA_PTR_FROM_JSON(BasicBandwidthPackage, basicBandwidthPackage_);
        DARABONBA_PTR_FROM_JSON(BasicEndpointGroupId, basicEndpointGroupId_);
        DARABONBA_PTR_FROM_JSON(BasicIpSetId, basicIpSetId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CrossBorderStatus, crossBorderStatus_);
        DARABONBA_PTR_FROM_JSON(CrossDomainBandwidthPackage, crossDomainBandwidthPackage_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
        // The tag key of the basic GA instance.
        shared_ptr<string> key_ {};
        // The tag value of the basic GA instance.
        shared_ptr<string> value_ {};
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
        // The bandwidth value of the cross-region acceleration bandwidth plan. Unit: Mbit/s.
        shared_ptr<int32_t> bandwidth_ {};
        // The ID of the cross-region acceleration bandwidth plan.
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
        // The type of the bandwidth that is provided by the basic bandwidth plan.
        // 
        // *   **Basic**: basic
        // *   **Enhanced**: enhanced
        // *   **Advanced**: premium
        shared_ptr<string> bandwidthType_ {};
        // The ID of the basic bandwidth plan.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->bandwidthBillingType_ == nullptr && this->basicBandwidthPackage_ == nullptr && this->basicEndpointGroupId_ == nullptr && this->basicIpSetId_ == nullptr && this->createTime_ == nullptr
        && this->crossBorderStatus_ == nullptr && this->crossDomainBandwidthPackage_ == nullptr && this->description_ == nullptr && this->expiredTime_ == nullptr && this->instanceChargeType_ == nullptr
        && this->name_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->state_ == nullptr && this->tags_ == nullptr
        && this->type_ == nullptr; };
      // acceleratorId Field Functions 
      bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
      void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
      inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
      inline Accelerators& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


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


      // basicEndpointGroupId Field Functions 
      bool hasBasicEndpointGroupId() const { return this->basicEndpointGroupId_ != nullptr;};
      void deleteBasicEndpointGroupId() { this->basicEndpointGroupId_ = nullptr;};
      inline string getBasicEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(basicEndpointGroupId_, "") };
      inline Accelerators& setBasicEndpointGroupId(string basicEndpointGroupId) { DARABONBA_PTR_SET_VALUE(basicEndpointGroupId_, basicEndpointGroupId) };


      // basicIpSetId Field Functions 
      bool hasBasicIpSetId() const { return this->basicIpSetId_ != nullptr;};
      void deleteBasicIpSetId() { this->basicIpSetId_ = nullptr;};
      inline string getBasicIpSetId() const { DARABONBA_PTR_GET_DEFAULT(basicIpSetId_, "") };
      inline Accelerators& setBasicIpSetId(string basicIpSetId) { DARABONBA_PTR_SET_VALUE(basicIpSetId_, basicIpSetId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Accelerators& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


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


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Accelerators& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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


    protected:
      // The ID of the basic GA instance.
      shared_ptr<string> acceleratorId_ {};
      // The bandwidth billing method.
      // 
      // *   **BandwidthPackage**: billed based on bandwidth plans.
      // *   **CDT**: billed through Cloud Data Transfer (CDT) and based on data transfer.
      // *   **CDT95**: billed through CDT and based on the 95th percentile bandwidth. This bandwidth billing method is available only for users that are included in the whitelist.
      shared_ptr<string> bandwidthBillingType_ {};
      // Details about the basic bandwidth plan that is associated with the basic GA instance.
      shared_ptr<Accelerators::BasicBandwidthPackage> basicBandwidthPackage_ {};
      // The ID of the endpoint group that is associated with the basic GA instance.
      shared_ptr<string> basicEndpointGroupId_ {};
      // The ID of the acceleration region where the basic GA instance is deployed.
      shared_ptr<string> basicIpSetId_ {};
      // The timestamp that indicates when the basic GA instance was created.
      // 
      // The time follows the UNIX time format. It is the number of seconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTime_ {};
      // Indicates whether cross-border acceleration is enabled for the GA instance. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> crossBorderStatus_ {};
      // Details about the cross-region acceleration bandwidth plan that is associated with the GA instance.
      // 
      // This parameter is returned only when you call this operation on the International site (alibabacloud.com).
      shared_ptr<Accelerators::CrossDomainBandwidthPackage> crossDomainBandwidthPackage_ {};
      // The description of the basic GA instance.
      shared_ptr<string> description_ {};
      // The timestamp that indicates when the basic GA instance expires.
      // 
      // The time follows the UNIX time format. It is the number of seconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> expiredTime_ {};
      // The billing method of the basic GA instance. Only **PREPAY** is returned, which indicates the subscription billing method.
      shared_ptr<string> instanceChargeType_ {};
      // The name of the basic GA instance.
      shared_ptr<string> name_ {};
      // The ID of the region where the basic GA instance is deployed.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group to which the basic GA instance belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The state of the basic GA instance.
      // 
      // *   **init**: The basic GA instance is being initialized.
      // *   **active**: The basic GA instance is available.
      // *   **configuring**: The basic GA instance is being configured.
      // *   **binding**: The basic GA instance is being associated.
      // *   **unbinding**: The GA instance is being disassociated.
      // *   **deleting**: The basic GA instance is being deleted.
      // *   **finacialLocked**: The basic GA instance is locked due to overdue payments.
      shared_ptr<string> state_ {};
      // The tags of the basic GA instance.
      shared_ptr<vector<Accelerators::Tags>> tags_ {};
      // This parameter is invalid.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->accelerators_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accelerators Field Functions 
    bool hasAccelerators() const { return this->accelerators_ != nullptr;};
    void deleteAccelerators() { this->accelerators_ = nullptr;};
    inline const vector<ListBasicAcceleratorsResponseBody::Accelerators> & getAccelerators() const { DARABONBA_PTR_GET_CONST(accelerators_, vector<ListBasicAcceleratorsResponseBody::Accelerators>) };
    inline vector<ListBasicAcceleratorsResponseBody::Accelerators> getAccelerators() { DARABONBA_PTR_GET(accelerators_, vector<ListBasicAcceleratorsResponseBody::Accelerators>) };
    inline ListBasicAcceleratorsResponseBody& setAccelerators(const vector<ListBasicAcceleratorsResponseBody::Accelerators> & accelerators) { DARABONBA_PTR_SET_VALUE(accelerators_, accelerators) };
    inline ListBasicAcceleratorsResponseBody& setAccelerators(vector<ListBasicAcceleratorsResponseBody::Accelerators> && accelerators) { DARABONBA_PTR_SET_RVALUE(accelerators_, accelerators) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBasicAcceleratorsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBasicAcceleratorsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBasicAcceleratorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBasicAcceleratorsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about basic GA instances.
    shared_ptr<vector<ListBasicAcceleratorsResponseBody::Accelerators>> accelerators_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of basic GA instances returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
