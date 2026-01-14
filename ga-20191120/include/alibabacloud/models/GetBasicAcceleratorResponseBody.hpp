// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASICACCELERATORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBASICACCELERATORRESPONSEBODY_HPP_
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
  class GetBasicAcceleratorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBasicAcceleratorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(BandwidthBillingType, bandwidthBillingType_);
      DARABONBA_PTR_TO_JSON(BasicBandwidthPackage, basicBandwidthPackage_);
      DARABONBA_PTR_TO_JSON(BasicEndpointGroupId, basicEndpointGroupId_);
      DARABONBA_PTR_TO_JSON(BasicIpSetId, basicIpSetId_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CrossBorderStatus, crossBorderStatus_);
      DARABONBA_PTR_TO_JSON(CrossDomainBandwidthPackage, crossDomainBandwidthPackage_);
      DARABONBA_PTR_TO_JSON(CrossPrivateState, crossPrivateState_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetBasicAcceleratorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(BandwidthBillingType, bandwidthBillingType_);
      DARABONBA_PTR_FROM_JSON(BasicBandwidthPackage, basicBandwidthPackage_);
      DARABONBA_PTR_FROM_JSON(BasicEndpointGroupId, basicEndpointGroupId_);
      DARABONBA_PTR_FROM_JSON(BasicIpSetId, basicIpSetId_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CrossBorderStatus, crossBorderStatus_);
      DARABONBA_PTR_FROM_JSON(CrossDomainBandwidthPackage, crossDomainBandwidthPackage_);
      DARABONBA_PTR_FROM_JSON(CrossPrivateState, crossPrivateState_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetBasicAcceleratorResponseBody() = default ;
    GetBasicAcceleratorResponseBody(const GetBasicAcceleratorResponseBody &) = default ;
    GetBasicAcceleratorResponseBody(GetBasicAcceleratorResponseBody &&) = default ;
    GetBasicAcceleratorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBasicAcceleratorResponseBody() = default ;
    GetBasicAcceleratorResponseBody& operator=(const GetBasicAcceleratorResponseBody &) = default ;
    GetBasicAcceleratorResponseBody& operator=(GetBasicAcceleratorResponseBody &&) = default ;
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
        && this->bandwidthBillingType_ == nullptr && this->basicBandwidthPackage_ == nullptr && this->basicEndpointGroupId_ == nullptr && this->basicIpSetId_ == nullptr && this->cenId_ == nullptr
        && this->createTime_ == nullptr && this->crossBorderStatus_ == nullptr && this->crossDomainBandwidthPackage_ == nullptr && this->crossPrivateState_ == nullptr && this->description_ == nullptr
        && this->expiredTime_ == nullptr && this->instanceChargeType_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->state_ == nullptr && this->tags_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline GetBasicAcceleratorResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // bandwidthBillingType Field Functions 
    bool hasBandwidthBillingType() const { return this->bandwidthBillingType_ != nullptr;};
    void deleteBandwidthBillingType() { this->bandwidthBillingType_ = nullptr;};
    inline string getBandwidthBillingType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthBillingType_, "") };
    inline GetBasicAcceleratorResponseBody& setBandwidthBillingType(string bandwidthBillingType) { DARABONBA_PTR_SET_VALUE(bandwidthBillingType_, bandwidthBillingType) };


    // basicBandwidthPackage Field Functions 
    bool hasBasicBandwidthPackage() const { return this->basicBandwidthPackage_ != nullptr;};
    void deleteBasicBandwidthPackage() { this->basicBandwidthPackage_ = nullptr;};
    inline const GetBasicAcceleratorResponseBody::BasicBandwidthPackage & getBasicBandwidthPackage() const { DARABONBA_PTR_GET_CONST(basicBandwidthPackage_, GetBasicAcceleratorResponseBody::BasicBandwidthPackage) };
    inline GetBasicAcceleratorResponseBody::BasicBandwidthPackage getBasicBandwidthPackage() { DARABONBA_PTR_GET(basicBandwidthPackage_, GetBasicAcceleratorResponseBody::BasicBandwidthPackage) };
    inline GetBasicAcceleratorResponseBody& setBasicBandwidthPackage(const GetBasicAcceleratorResponseBody::BasicBandwidthPackage & basicBandwidthPackage) { DARABONBA_PTR_SET_VALUE(basicBandwidthPackage_, basicBandwidthPackage) };
    inline GetBasicAcceleratorResponseBody& setBasicBandwidthPackage(GetBasicAcceleratorResponseBody::BasicBandwidthPackage && basicBandwidthPackage) { DARABONBA_PTR_SET_RVALUE(basicBandwidthPackage_, basicBandwidthPackage) };


    // basicEndpointGroupId Field Functions 
    bool hasBasicEndpointGroupId() const { return this->basicEndpointGroupId_ != nullptr;};
    void deleteBasicEndpointGroupId() { this->basicEndpointGroupId_ = nullptr;};
    inline string getBasicEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(basicEndpointGroupId_, "") };
    inline GetBasicAcceleratorResponseBody& setBasicEndpointGroupId(string basicEndpointGroupId) { DARABONBA_PTR_SET_VALUE(basicEndpointGroupId_, basicEndpointGroupId) };


    // basicIpSetId Field Functions 
    bool hasBasicIpSetId() const { return this->basicIpSetId_ != nullptr;};
    void deleteBasicIpSetId() { this->basicIpSetId_ = nullptr;};
    inline string getBasicIpSetId() const { DARABONBA_PTR_GET_DEFAULT(basicIpSetId_, "") };
    inline GetBasicAcceleratorResponseBody& setBasicIpSetId(string basicIpSetId) { DARABONBA_PTR_SET_VALUE(basicIpSetId_, basicIpSetId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline GetBasicAcceleratorResponseBody& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetBasicAcceleratorResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossBorderStatus Field Functions 
    bool hasCrossBorderStatus() const { return this->crossBorderStatus_ != nullptr;};
    void deleteCrossBorderStatus() { this->crossBorderStatus_ = nullptr;};
    inline bool getCrossBorderStatus() const { DARABONBA_PTR_GET_DEFAULT(crossBorderStatus_, false) };
    inline GetBasicAcceleratorResponseBody& setCrossBorderStatus(bool crossBorderStatus) { DARABONBA_PTR_SET_VALUE(crossBorderStatus_, crossBorderStatus) };


    // crossDomainBandwidthPackage Field Functions 
    bool hasCrossDomainBandwidthPackage() const { return this->crossDomainBandwidthPackage_ != nullptr;};
    void deleteCrossDomainBandwidthPackage() { this->crossDomainBandwidthPackage_ = nullptr;};
    inline const GetBasicAcceleratorResponseBody::CrossDomainBandwidthPackage & getCrossDomainBandwidthPackage() const { DARABONBA_PTR_GET_CONST(crossDomainBandwidthPackage_, GetBasicAcceleratorResponseBody::CrossDomainBandwidthPackage) };
    inline GetBasicAcceleratorResponseBody::CrossDomainBandwidthPackage getCrossDomainBandwidthPackage() { DARABONBA_PTR_GET(crossDomainBandwidthPackage_, GetBasicAcceleratorResponseBody::CrossDomainBandwidthPackage) };
    inline GetBasicAcceleratorResponseBody& setCrossDomainBandwidthPackage(const GetBasicAcceleratorResponseBody::CrossDomainBandwidthPackage & crossDomainBandwidthPackage) { DARABONBA_PTR_SET_VALUE(crossDomainBandwidthPackage_, crossDomainBandwidthPackage) };
    inline GetBasicAcceleratorResponseBody& setCrossDomainBandwidthPackage(GetBasicAcceleratorResponseBody::CrossDomainBandwidthPackage && crossDomainBandwidthPackage) { DARABONBA_PTR_SET_RVALUE(crossDomainBandwidthPackage_, crossDomainBandwidthPackage) };


    // crossPrivateState Field Functions 
    bool hasCrossPrivateState() const { return this->crossPrivateState_ != nullptr;};
    void deleteCrossPrivateState() { this->crossPrivateState_ = nullptr;};
    inline string getCrossPrivateState() const { DARABONBA_PTR_GET_DEFAULT(crossPrivateState_, "") };
    inline GetBasicAcceleratorResponseBody& setCrossPrivateState(string crossPrivateState) { DARABONBA_PTR_SET_VALUE(crossPrivateState_, crossPrivateState) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetBasicAcceleratorResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline int64_t getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, 0L) };
    inline GetBasicAcceleratorResponseBody& setExpiredTime(int64_t expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline GetBasicAcceleratorResponseBody& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetBasicAcceleratorResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetBasicAcceleratorResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBasicAcceleratorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetBasicAcceleratorResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetBasicAcceleratorResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetBasicAcceleratorResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetBasicAcceleratorResponseBody::Tags>) };
    inline vector<GetBasicAcceleratorResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetBasicAcceleratorResponseBody::Tags>) };
    inline GetBasicAcceleratorResponseBody& setTags(const vector<GetBasicAcceleratorResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetBasicAcceleratorResponseBody& setTags(vector<GetBasicAcceleratorResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the basic GA instance.
    shared_ptr<string> acceleratorId_ {};
    // The bandwidth metering method.
    // 
    // *   **BandwidthPackage**: billed based on bandwidth plans.
    // *   **CDT**: billed by Cloud Data Transfer (CDT) and based on data transfer.
    // *   **CDT95**: billed by CDT and based on the 95th percentile bandwidth. This bandwidth metering method is available only to users that are included in the whitelist.
    shared_ptr<string> bandwidthBillingType_ {};
    // The details about the basic bandwidth plan that is associated with the basic GA instance.
    shared_ptr<GetBasicAcceleratorResponseBody::BasicBandwidthPackage> basicBandwidthPackage_ {};
    // The ID of the endpoint group.
    shared_ptr<string> basicEndpointGroupId_ {};
    // The ID of the acceleration region.
    shared_ptr<string> basicIpSetId_ {};
    // The ID of the Cloud Enterprise Network (CEN) instance to which the basic GA instance is attached.
    shared_ptr<string> cenId_ {};
    // The timestamp that indicates when the basic GA instance is created.
    shared_ptr<int64_t> createTime_ {};
    // Indicates whether cross-border acceleration is enabled for the basic GA instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> crossBorderStatus_ {};
    // The details about the cross-border acceleration bandwidth plan that is associated with the GA instance.
    // 
    // This array is returned only for GA instances that are created on the international site (alibabacloud.com).
    shared_ptr<GetBasicAcceleratorResponseBody::CrossDomainBandwidthPackage> crossDomainBandwidthPackage_ {};
    // Indicates whether cross-border acceleration is enabled.
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<string> crossPrivateState_ {};
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
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the basic GA instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The status of the basic GA instance.
    // 
    // *   **init**: The GA instance is being initialized.
    // *   **active**: The GA instance is available.
    // *   **configuring**: The GA instance is being configured.
    // *   **binding**: The GA instance is being associated.
    // *   **unbinding**: The GA instance is being disassociated.
    // *   **deleting**: The GA instance is being deleted.
    // *   **finacialLocked**: The GA instance is locked due to overdue payments.
    shared_ptr<string> state_ {};
    // The tags of the basic GA instance.
    shared_ptr<vector<GetBasicAcceleratorResponseBody::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
