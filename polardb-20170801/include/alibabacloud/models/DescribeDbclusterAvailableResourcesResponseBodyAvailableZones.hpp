// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERAVAILABLERESOURCESRESPONSEBODYAVAILABLEZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERAVAILABLERESOURCESRESPONSEBODYAVAILABLEZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterAvailableResourcesResponseBodyAvailableZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAvailableResourcesResponseBodyAvailableZones& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SupportedEngines, supportedEngines_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAvailableResourcesResponseBodyAvailableZones& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SupportedEngines, supportedEngines_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZones() = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZones(const DescribeDBClusterAvailableResourcesResponseBodyAvailableZones &) = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZones(DescribeDBClusterAvailableResourcesResponseBodyAvailableZones &&) = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAvailableResourcesResponseBodyAvailableZones() = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZones& operator=(const DescribeDBClusterAvailableResourcesResponseBodyAvailableZones &) = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZones& operator=(DescribeDBClusterAvailableResourcesResponseBodyAvailableZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->supportedEngines_ != nullptr && this->zoneId_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBClusterAvailableResourcesResponseBodyAvailableZones& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // supportedEngines Field Functions 
    bool hasSupportedEngines() const { return this->supportedEngines_ != nullptr;};
    void deleteSupportedEngines() { this->supportedEngines_ = nullptr;};
    inline const vector<Models::DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines> & supportedEngines() const { DARABONBA_PTR_GET_CONST(supportedEngines_, vector<Models::DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines>) };
    inline vector<Models::DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines> supportedEngines() { DARABONBA_PTR_GET(supportedEngines_, vector<Models::DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines>) };
    inline DescribeDBClusterAvailableResourcesResponseBodyAvailableZones& setSupportedEngines(const vector<Models::DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines> & supportedEngines) { DARABONBA_PTR_SET_VALUE(supportedEngines_, supportedEngines) };
    inline DescribeDBClusterAvailableResourcesResponseBodyAvailableZones& setSupportedEngines(vector<Models::DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines> && supportedEngines) { DARABONBA_PTR_SET_RVALUE(supportedEngines_, supportedEngines) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBClusterAvailableResourcesResponseBodyAvailableZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    // The database engines that the available resources support.
    std::shared_ptr<vector<Models::DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines>> supportedEngines_ = nullptr;
    // The zone ID of the cluster.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
