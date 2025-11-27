// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCRESOURCESMODIFICATIONRESPONSEBODYAVAILABLEZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCRESOURCESMODIFICATIONRESPONSEBODYAVAILABLEZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCResourcesModificationResponseBodyAvailableZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCResourcesModificationResponseBodyAvailableZones& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusCategory, statusCategory_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCResourcesModificationResponseBodyAvailableZones& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusCategory, statusCategory_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeRCResourcesModificationResponseBodyAvailableZones() = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZones(const DescribeRCResourcesModificationResponseBodyAvailableZones &) = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZones(DescribeRCResourcesModificationResponseBodyAvailableZones &&) = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCResourcesModificationResponseBodyAvailableZones() = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZones& operator=(const DescribeRCResourcesModificationResponseBodyAvailableZones &) = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZones& operator=(DescribeRCResourcesModificationResponseBodyAvailableZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableResources_ == nullptr
        && return this->regionId_ == nullptr && return this->status_ == nullptr && return this->statusCategory_ == nullptr && return this->zoneId_ == nullptr; };
    // availableResources Field Functions 
    bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
    void deleteAvailableResources() { this->availableResources_ = nullptr;};
    inline const vector<Models::DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources> & availableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, vector<Models::DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources>) };
    inline vector<Models::DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources> availableResources() { DARABONBA_PTR_GET(availableResources_, vector<Models::DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources>) };
    inline DescribeRCResourcesModificationResponseBodyAvailableZones& setAvailableResources(const vector<Models::DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources> & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
    inline DescribeRCResourcesModificationResponseBodyAvailableZones& setAvailableResources(vector<Models::DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources> && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCResourcesModificationResponseBodyAvailableZones& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRCResourcesModificationResponseBodyAvailableZones& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusCategory Field Functions 
    bool hasStatusCategory() const { return this->statusCategory_ != nullptr;};
    void deleteStatusCategory() { this->statusCategory_ = nullptr;};
    inline string statusCategory() const { DARABONBA_PTR_GET_DEFAULT(statusCategory_, "") };
    inline DescribeRCResourcesModificationResponseBodyAvailableZones& setStatusCategory(string statusCategory) { DARABONBA_PTR_SET_VALUE(statusCategory_, statusCategory) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRCResourcesModificationResponseBodyAvailableZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<vector<Models::DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources>> availableResources_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusCategory_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
