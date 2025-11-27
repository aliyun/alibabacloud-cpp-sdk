// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESRESPONSEBODYAVAILABLEZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESRESPONSEBODYAVAILABLEZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAvailableZonesResponseBodyAvailableZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableZonesResponseBodyAvailableZones& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SupportedEngines, supportedEngines_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableZonesResponseBodyAvailableZones& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SupportedEngines, supportedEngines_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAvailableZonesResponseBodyAvailableZones() = default ;
    DescribeAvailableZonesResponseBodyAvailableZones(const DescribeAvailableZonesResponseBodyAvailableZones &) = default ;
    DescribeAvailableZonesResponseBodyAvailableZones(DescribeAvailableZonesResponseBodyAvailableZones &&) = default ;
    DescribeAvailableZonesResponseBodyAvailableZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableZonesResponseBodyAvailableZones() = default ;
    DescribeAvailableZonesResponseBodyAvailableZones& operator=(const DescribeAvailableZonesResponseBodyAvailableZones &) = default ;
    DescribeAvailableZonesResponseBodyAvailableZones& operator=(DescribeAvailableZonesResponseBodyAvailableZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->supportedEngines_ == nullptr && return this->zoneId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableZonesResponseBodyAvailableZones& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // supportedEngines Field Functions 
    bool hasSupportedEngines() const { return this->supportedEngines_ != nullptr;};
    void deleteSupportedEngines() { this->supportedEngines_ = nullptr;};
    inline const vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines> & supportedEngines() const { DARABONBA_PTR_GET_CONST(supportedEngines_, vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines>) };
    inline vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines> supportedEngines() { DARABONBA_PTR_GET(supportedEngines_, vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines>) };
    inline DescribeAvailableZonesResponseBodyAvailableZones& setSupportedEngines(const vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines> & supportedEngines) { DARABONBA_PTR_SET_VALUE(supportedEngines_, supportedEngines) };
    inline DescribeAvailableZonesResponseBodyAvailableZones& setSupportedEngines(vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines> && supportedEngines) { DARABONBA_PTR_SET_RVALUE(supportedEngines_, supportedEngines) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAvailableZonesResponseBodyAvailableZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The database engines that are available for purchase.
    std::shared_ptr<vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines>> supportedEngines_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
