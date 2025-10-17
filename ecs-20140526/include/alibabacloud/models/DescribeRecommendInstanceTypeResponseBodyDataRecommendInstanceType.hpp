// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPERESPONSEBODYDATARECOMMENDINSTANCETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPERESPONSEBODYDATARECOMMENDINSTANCETYPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType.hpp>
#include <alibabacloud/models/DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType() = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType(const DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType &) = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType(DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType &&) = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType() = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& operator=(const DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType &) = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& operator=(DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && return this->instanceChargeType_ == nullptr && return this->instanceType_ == nullptr && return this->networkType_ == nullptr && return this->priority_ == nullptr && return this->regionId_ == nullptr
        && return this->scene_ == nullptr && return this->spotStrategy_ == nullptr && return this->zoneId_ == nullptr && return this->zones_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline const Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType & instanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType) };
    inline Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType instanceType() { DARABONBA_PTR_GET(instanceType_, Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType) };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& setInstanceType(const Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& setInstanceType(Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones & zones() const { DARABONBA_PTR_GET_CONST(zones_, Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones) };
    inline Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones zones() { DARABONBA_PTR_GET(zones_, Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones) };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& setZones(const Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType& setZones(Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The commodity code of the instance type.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The billing method of the instances.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The details of the instance type.
    std::shared_ptr<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType> instanceType_ = nullptr;
    // The network type of the ECS instances.
    std::shared_ptr<string> networkType_ = nullptr;
    // The priority based on which the system sorts the instance types.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the region in which the instance type is available.
    std::shared_ptr<string> regionId_ = nullptr;
    // The scenario in which the instance type is recommended.
    std::shared_ptr<string> scene_ = nullptr;
    // The bidding policy for the spot instances.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The ID of the zone in which the instance type is available.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The details of the zones in which the instance type is available.
    std::shared_ptr<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
