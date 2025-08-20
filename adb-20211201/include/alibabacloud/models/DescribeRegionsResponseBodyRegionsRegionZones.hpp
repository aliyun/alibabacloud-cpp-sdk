// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGIONZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGIONZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRegionsResponseBodyRegionsRegionZonesZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeRegionsResponseBodyRegionsRegionZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegionsRegionZones& obj) { 
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegionsRegionZones& obj) { 
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    DescribeRegionsResponseBodyRegionsRegionZones() = default ;
    DescribeRegionsResponseBodyRegionsRegionZones(const DescribeRegionsResponseBodyRegionsRegionZones &) = default ;
    DescribeRegionsResponseBodyRegionsRegionZones(DescribeRegionsResponseBodyRegionsRegionZones &&) = default ;
    DescribeRegionsResponseBodyRegionsRegionZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyRegionsRegionZones() = default ;
    DescribeRegionsResponseBodyRegionsRegionZones& operator=(const DescribeRegionsResponseBodyRegionsRegionZones &) = default ;
    DescribeRegionsResponseBodyRegionsRegionZones& operator=(DescribeRegionsResponseBodyRegionsRegionZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->zone_ != nullptr; };
    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline const vector<Models::DescribeRegionsResponseBodyRegionsRegionZonesZone> & zone() const { DARABONBA_PTR_GET_CONST(zone_, vector<Models::DescribeRegionsResponseBodyRegionsRegionZonesZone>) };
    inline vector<Models::DescribeRegionsResponseBodyRegionsRegionZonesZone> zone() { DARABONBA_PTR_GET(zone_, vector<Models::DescribeRegionsResponseBodyRegionsRegionZonesZone>) };
    inline DescribeRegionsResponseBodyRegionsRegionZones& setZone(const vector<Models::DescribeRegionsResponseBodyRegionsRegionZonesZone> & zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };
    inline DescribeRegionsResponseBodyRegionsRegionZones& setZone(vector<Models::DescribeRegionsResponseBodyRegionsRegionZonesZone> && zone) { DARABONBA_PTR_SET_RVALUE(zone_, zone) };


  protected:
    std::shared_ptr<vector<Models::DescribeRegionsResponseBodyRegionsRegionZonesZone>> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
