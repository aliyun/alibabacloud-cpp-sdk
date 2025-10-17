// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONESAVAILABLEZONE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONESAVAILABLEZONE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusCategory, statusCategory_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusCategory, statusCategory_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone() = default ;
    DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone(const DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone(DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone &&) = default ;
    DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone() = default ;
    DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone& operator=(const DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone& operator=(DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableResources_ == nullptr
        && return this->regionId_ == nullptr && return this->status_ == nullptr && return this->statusCategory_ == nullptr && return this->zoneId_ == nullptr; };
    // availableResources Field Functions 
    bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
    void deleteAvailableResources() { this->availableResources_ = nullptr;};
    inline const Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources & availableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources) };
    inline Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources availableResources() { DARABONBA_PTR_GET(availableResources_, Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources) };
    inline DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone& setAvailableResources(const Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
    inline DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone& setAvailableResources(Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusCategory Field Functions 
    bool hasStatusCategory() const { return this->statusCategory_ != nullptr;};
    void deleteStatusCategory() { this->statusCategory_ = nullptr;};
    inline string statusCategory() const { DARABONBA_PTR_GET_DEFAULT(statusCategory_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone& setStatusCategory(string statusCategory) { DARABONBA_PTR_SET_VALUE(statusCategory_, statusCategory) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The resources that are available in the zone.
    std::shared_ptr<Models::DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources> availableResources_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of resources in the zone. Valid values:
    // 
    // *   Available
    // *   SoldOut
    std::shared_ptr<string> status_ = nullptr;
    // The resource category based on the stock level in the zone. Valid values:
    // 
    // *   WithStock: Resources are in sufficient stock.
    // *   ClosedWithStock: Resources are in insufficient stock. We recommend that you use other resources that are in sufficient stock.
    // *   WithoutStock: Resources are out of stock and will be replenished. We recommend that you use other resources that are in sufficient stock.
    // *   ClosedWithoutStock: Resources are out of stock and will not be replenished. We recommend that you use other resources that are in sufficient stock.
    std::shared_ptr<string> statusCategory_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
