// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneAvailableDiskCategories.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneAvailableResourceCreation.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneAvailableResources.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeZonesResponseBodyZonesZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZone& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableDedicatedHostTypes, availableDedicatedHostTypes_);
      DARABONBA_PTR_TO_JSON(AvailableDiskCategories, availableDiskCategories_);
      DARABONBA_PTR_TO_JSON(AvailableInstanceTypes, availableInstanceTypes_);
      DARABONBA_PTR_TO_JSON(AvailableResourceCreation, availableResourceCreation_);
      DARABONBA_PTR_TO_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_TO_JSON(AvailableVolumeCategories, availableVolumeCategories_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGenerations, dedicatedHostGenerations_);
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneType, zoneType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZone& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableDedicatedHostTypes, availableDedicatedHostTypes_);
      DARABONBA_PTR_FROM_JSON(AvailableDiskCategories, availableDiskCategories_);
      DARABONBA_PTR_FROM_JSON(AvailableInstanceTypes, availableInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(AvailableResourceCreation, availableResourceCreation_);
      DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_FROM_JSON(AvailableVolumeCategories, availableVolumeCategories_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGenerations, dedicatedHostGenerations_);
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneType, zoneType_);
    };
    DescribeZonesResponseBodyZonesZone() = default ;
    DescribeZonesResponseBodyZonesZone(const DescribeZonesResponseBodyZonesZone &) = default ;
    DescribeZonesResponseBodyZonesZone(DescribeZonesResponseBodyZonesZone &&) = default ;
    DescribeZonesResponseBodyZonesZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZone() = default ;
    DescribeZonesResponseBodyZonesZone& operator=(const DescribeZonesResponseBodyZonesZone &) = default ;
    DescribeZonesResponseBodyZonesZone& operator=(DescribeZonesResponseBodyZonesZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableDedicatedHostTypes_ == nullptr
        && return this->availableDiskCategories_ == nullptr && return this->availableInstanceTypes_ == nullptr && return this->availableResourceCreation_ == nullptr && return this->availableResources_ == nullptr && return this->availableVolumeCategories_ == nullptr
        && return this->dedicatedHostGenerations_ == nullptr && return this->localName_ == nullptr && return this->zoneId_ == nullptr && return this->zoneType_ == nullptr; };
    // availableDedicatedHostTypes Field Functions 
    bool hasAvailableDedicatedHostTypes() const { return this->availableDedicatedHostTypes_ != nullptr;};
    void deleteAvailableDedicatedHostTypes() { this->availableDedicatedHostTypes_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes & availableDedicatedHostTypes() const { DARABONBA_PTR_GET_CONST(availableDedicatedHostTypes_, Models::DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes) };
    inline Models::DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes availableDedicatedHostTypes() { DARABONBA_PTR_GET(availableDedicatedHostTypes_, Models::DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes) };
    inline DescribeZonesResponseBodyZonesZone& setAvailableDedicatedHostTypes(const Models::DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes & availableDedicatedHostTypes) { DARABONBA_PTR_SET_VALUE(availableDedicatedHostTypes_, availableDedicatedHostTypes) };
    inline DescribeZonesResponseBodyZonesZone& setAvailableDedicatedHostTypes(Models::DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes && availableDedicatedHostTypes) { DARABONBA_PTR_SET_RVALUE(availableDedicatedHostTypes_, availableDedicatedHostTypes) };


    // availableDiskCategories Field Functions 
    bool hasAvailableDiskCategories() const { return this->availableDiskCategories_ != nullptr;};
    void deleteAvailableDiskCategories() { this->availableDiskCategories_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneAvailableDiskCategories & availableDiskCategories() const { DARABONBA_PTR_GET_CONST(availableDiskCategories_, Models::DescribeZonesResponseBodyZonesZoneAvailableDiskCategories) };
    inline Models::DescribeZonesResponseBodyZonesZoneAvailableDiskCategories availableDiskCategories() { DARABONBA_PTR_GET(availableDiskCategories_, Models::DescribeZonesResponseBodyZonesZoneAvailableDiskCategories) };
    inline DescribeZonesResponseBodyZonesZone& setAvailableDiskCategories(const Models::DescribeZonesResponseBodyZonesZoneAvailableDiskCategories & availableDiskCategories) { DARABONBA_PTR_SET_VALUE(availableDiskCategories_, availableDiskCategories) };
    inline DescribeZonesResponseBodyZonesZone& setAvailableDiskCategories(Models::DescribeZonesResponseBodyZonesZoneAvailableDiskCategories && availableDiskCategories) { DARABONBA_PTR_SET_RVALUE(availableDiskCategories_, availableDiskCategories) };


    // availableInstanceTypes Field Functions 
    bool hasAvailableInstanceTypes() const { return this->availableInstanceTypes_ != nullptr;};
    void deleteAvailableInstanceTypes() { this->availableInstanceTypes_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes & availableInstanceTypes() const { DARABONBA_PTR_GET_CONST(availableInstanceTypes_, Models::DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes) };
    inline Models::DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes availableInstanceTypes() { DARABONBA_PTR_GET(availableInstanceTypes_, Models::DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes) };
    inline DescribeZonesResponseBodyZonesZone& setAvailableInstanceTypes(const Models::DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes & availableInstanceTypes) { DARABONBA_PTR_SET_VALUE(availableInstanceTypes_, availableInstanceTypes) };
    inline DescribeZonesResponseBodyZonesZone& setAvailableInstanceTypes(Models::DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes && availableInstanceTypes) { DARABONBA_PTR_SET_RVALUE(availableInstanceTypes_, availableInstanceTypes) };


    // availableResourceCreation Field Functions 
    bool hasAvailableResourceCreation() const { return this->availableResourceCreation_ != nullptr;};
    void deleteAvailableResourceCreation() { this->availableResourceCreation_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneAvailableResourceCreation & availableResourceCreation() const { DARABONBA_PTR_GET_CONST(availableResourceCreation_, Models::DescribeZonesResponseBodyZonesZoneAvailableResourceCreation) };
    inline Models::DescribeZonesResponseBodyZonesZoneAvailableResourceCreation availableResourceCreation() { DARABONBA_PTR_GET(availableResourceCreation_, Models::DescribeZonesResponseBodyZonesZoneAvailableResourceCreation) };
    inline DescribeZonesResponseBodyZonesZone& setAvailableResourceCreation(const Models::DescribeZonesResponseBodyZonesZoneAvailableResourceCreation & availableResourceCreation) { DARABONBA_PTR_SET_VALUE(availableResourceCreation_, availableResourceCreation) };
    inline DescribeZonesResponseBodyZonesZone& setAvailableResourceCreation(Models::DescribeZonesResponseBodyZonesZoneAvailableResourceCreation && availableResourceCreation) { DARABONBA_PTR_SET_RVALUE(availableResourceCreation_, availableResourceCreation) };


    // availableResources Field Functions 
    bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
    void deleteAvailableResources() { this->availableResources_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneAvailableResources & availableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, Models::DescribeZonesResponseBodyZonesZoneAvailableResources) };
    inline Models::DescribeZonesResponseBodyZonesZoneAvailableResources availableResources() { DARABONBA_PTR_GET(availableResources_, Models::DescribeZonesResponseBodyZonesZoneAvailableResources) };
    inline DescribeZonesResponseBodyZonesZone& setAvailableResources(const Models::DescribeZonesResponseBodyZonesZoneAvailableResources & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
    inline DescribeZonesResponseBodyZonesZone& setAvailableResources(Models::DescribeZonesResponseBodyZonesZoneAvailableResources && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


    // availableVolumeCategories Field Functions 
    bool hasAvailableVolumeCategories() const { return this->availableVolumeCategories_ != nullptr;};
    void deleteAvailableVolumeCategories() { this->availableVolumeCategories_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories & availableVolumeCategories() const { DARABONBA_PTR_GET_CONST(availableVolumeCategories_, Models::DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories) };
    inline Models::DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories availableVolumeCategories() { DARABONBA_PTR_GET(availableVolumeCategories_, Models::DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories) };
    inline DescribeZonesResponseBodyZonesZone& setAvailableVolumeCategories(const Models::DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories & availableVolumeCategories) { DARABONBA_PTR_SET_VALUE(availableVolumeCategories_, availableVolumeCategories) };
    inline DescribeZonesResponseBodyZonesZone& setAvailableVolumeCategories(Models::DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories && availableVolumeCategories) { DARABONBA_PTR_SET_RVALUE(availableVolumeCategories_, availableVolumeCategories) };


    // dedicatedHostGenerations Field Functions 
    bool hasDedicatedHostGenerations() const { return this->dedicatedHostGenerations_ != nullptr;};
    void deleteDedicatedHostGenerations() { this->dedicatedHostGenerations_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations & dedicatedHostGenerations() const { DARABONBA_PTR_GET_CONST(dedicatedHostGenerations_, Models::DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations) };
    inline Models::DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations dedicatedHostGenerations() { DARABONBA_PTR_GET(dedicatedHostGenerations_, Models::DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations) };
    inline DescribeZonesResponseBodyZonesZone& setDedicatedHostGenerations(const Models::DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations & dedicatedHostGenerations) { DARABONBA_PTR_SET_VALUE(dedicatedHostGenerations_, dedicatedHostGenerations) };
    inline DescribeZonesResponseBodyZonesZone& setDedicatedHostGenerations(Models::DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations && dedicatedHostGenerations) { DARABONBA_PTR_SET_RVALUE(dedicatedHostGenerations_, dedicatedHostGenerations) };


    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeZonesResponseBodyZonesZone& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeZonesResponseBodyZonesZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneType Field Functions 
    bool hasZoneType() const { return this->zoneType_ != nullptr;};
    void deleteZoneType() { this->zoneType_ = nullptr;};
    inline string zoneType() const { DARABONBA_PTR_GET_DEFAULT(zoneType_, "") };
    inline DescribeZonesResponseBodyZonesZone& setZoneType(string zoneType) { DARABONBA_PTR_SET_VALUE(zoneType_, zoneType) };


  protected:
    // The supported dedicated host types.
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes> availableDedicatedHostTypes_ = nullptr;
    // The categories of cloud disks that can be created. Valid values:
    // 
    // *   cloud: basic disk
    // *   cloud_ssd: standard SSD
    // *   cloud_efficiency: ultra disk
    // *   cloud_essd: ESSD
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneAvailableDiskCategories> availableDiskCategories_ = nullptr;
    // The supported instance types.
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes> availableInstanceTypes_ = nullptr;
    // The types of resources that can be created. Valid values:
    // 
    // *   VSwitch: vSwitch
    // *   IoOptimized: I/O optimized instance
    // *   Instance: instance
    // *   DedicatedHost: dedicated host
    // *   disk: cloud disk
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneAvailableResourceCreation> availableResourceCreation_ = nullptr;
    // Details about the resources that can be created in the zone.
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneAvailableResources> availableResources_ = nullptr;
    // The supported Shared Block Storage device categories.
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneAvailableVolumeCategories> availableVolumeCategories_ = nullptr;
    // The supported generations of dedicated hosts.
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneDedicatedHostGenerations> dedicatedHostGenerations_ = nullptr;
    // The name of the zone in the local language.
    std::shared_ptr<string> localName_ = nullptr;
    // The ID of the zone.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The type of the zone. Valid values:
    // 
    // *   AvailabilityZone: zone for the Alibaba Cloud public cloud
    // *   CloudBoxZone: zone for CloudBox
    std::shared_ptr<string> zoneType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
