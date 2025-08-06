// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESMODIFICATIONRESPONSEBODYAVAILABLEZONESAVAILABLEZONE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESMODIFICATIONRESPONSEBODYAVAILABLEZONESAVAILABLEZONE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusCategory, statusCategory_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusCategory, statusCategory_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone() = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone(const DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone &) = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone(DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone &&) = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone() = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone& operator=(const DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone &) = default ;
    DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone& operator=(DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableResources_ != nullptr
        && this->regionId_ != nullptr && this->status_ != nullptr && this->statusCategory_ != nullptr && this->zoneId_ != nullptr; };
    // availableResources Field Functions 
    bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
    void deleteAvailableResources() { this->availableResources_ = nullptr;};
    inline const Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources & availableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources) };
    inline Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources availableResources() { DARABONBA_PTR_GET(availableResources_, Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources) };
    inline DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone& setAvailableResources(const Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
    inline DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone& setAvailableResources(Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusCategory Field Functions 
    bool hasStatusCategory() const { return this->statusCategory_ != nullptr;};
    void deleteStatusCategory() { this->statusCategory_ = nullptr;};
    inline string statusCategory() const { DARABONBA_PTR_GET_DEFAULT(statusCategory_, "") };
    inline DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone& setStatusCategory(string statusCategory) { DARABONBA_PTR_SET_VALUE(statusCategory_, statusCategory) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeResourcesModificationResponseBodyAvailableZonesAvailableZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The resources that are available in the zone.
    std::shared_ptr<Models::DescribeResourcesModificationResponseBodyAvailableZonesAvailableZoneAvailableResources> availableResources_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The state of the resource. Valid values:
    // 
    // *   Available
    // *   SoldOut
    std::shared_ptr<string> status_ = nullptr;
    // The category of the resource based on stock status. Valid values:
    // 
    // *   WithStock: resources that are in sufficient stock
    // *   ClosedWithStock: resources that are in insufficient stock
    // *   WithoutStock: resources that are out of stock
    std::shared_ptr<string> statusCategory_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
