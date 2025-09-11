// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONMODELLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONMODELLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRegionsResponseBodyRegionModelListZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeRegionsResponseBodyRegionModelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegionModelList& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegionModelList& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    DescribeRegionsResponseBodyRegionModelList() = default ;
    DescribeRegionsResponseBodyRegionModelList(const DescribeRegionsResponseBodyRegionModelList &) = default ;
    DescribeRegionsResponseBodyRegionModelList(DescribeRegionsResponseBodyRegionModelList &&) = default ;
    DescribeRegionsResponseBodyRegionModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyRegionModelList() = default ;
    DescribeRegionsResponseBodyRegionModelList& operator=(const DescribeRegionsResponseBodyRegionModelList &) = default ;
    DescribeRegionsResponseBodyRegionModelList& operator=(DescribeRegionsResponseBodyRegionModelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->zones_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRegionsResponseBodyRegionModelList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<Models::DescribeRegionsResponseBodyRegionModelListZones> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<Models::DescribeRegionsResponseBodyRegionModelListZones>) };
    inline vector<Models::DescribeRegionsResponseBodyRegionModelListZones> zones() { DARABONBA_PTR_GET(zones_, vector<Models::DescribeRegionsResponseBodyRegionModelListZones>) };
    inline DescribeRegionsResponseBodyRegionModelList& setZones(const vector<Models::DescribeRegionsResponseBodyRegionModelListZones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline DescribeRegionsResponseBodyRegionModelList& setZones(vector<Models::DescribeRegionsResponseBodyRegionModelListZones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // An array of zones.
    std::shared_ptr<vector<Models::DescribeRegionsResponseBodyRegionModelListZones>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
