// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRegionsResponseBodyRegionsRegionZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegionsRegion& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SupportPolarx10, supportPolarx10_);
      DARABONBA_PTR_TO_JSON(SupportPolarx20, supportPolarx20_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegionsRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SupportPolarx10, supportPolarx10_);
      DARABONBA_PTR_FROM_JSON(SupportPolarx20, supportPolarx20_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    DescribeRegionsResponseBodyRegionsRegion() = default ;
    DescribeRegionsResponseBodyRegionsRegion(const DescribeRegionsResponseBodyRegionsRegion &) = default ;
    DescribeRegionsResponseBodyRegionsRegion(DescribeRegionsResponseBodyRegionsRegion &&) = default ;
    DescribeRegionsResponseBodyRegionsRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyRegionsRegion() = default ;
    DescribeRegionsResponseBodyRegionsRegion& operator=(const DescribeRegionsResponseBodyRegionsRegion &) = default ;
    DescribeRegionsResponseBodyRegionsRegion& operator=(DescribeRegionsResponseBodyRegionsRegion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->supportPolarx10_ != nullptr && this->supportPolarx20_ != nullptr && this->zones_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRegionsResponseBodyRegionsRegion& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // supportPolarx10 Field Functions 
    bool hasSupportPolarx10() const { return this->supportPolarx10_ != nullptr;};
    void deleteSupportPolarx10() { this->supportPolarx10_ = nullptr;};
    inline bool supportPolarx10() const { DARABONBA_PTR_GET_DEFAULT(supportPolarx10_, false) };
    inline DescribeRegionsResponseBodyRegionsRegion& setSupportPolarx10(bool supportPolarx10) { DARABONBA_PTR_SET_VALUE(supportPolarx10_, supportPolarx10) };


    // supportPolarx20 Field Functions 
    bool hasSupportPolarx20() const { return this->supportPolarx20_ != nullptr;};
    void deleteSupportPolarx20() { this->supportPolarx20_ = nullptr;};
    inline bool supportPolarx20() const { DARABONBA_PTR_GET_DEFAULT(supportPolarx20_, false) };
    inline DescribeRegionsResponseBodyRegionsRegion& setSupportPolarx20(bool supportPolarx20) { DARABONBA_PTR_SET_VALUE(supportPolarx20_, supportPolarx20) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const Models::DescribeRegionsResponseBodyRegionsRegionZones & zones() const { DARABONBA_PTR_GET_CONST(zones_, Models::DescribeRegionsResponseBodyRegionsRegionZones) };
    inline Models::DescribeRegionsResponseBodyRegionsRegionZones zones() { DARABONBA_PTR_GET(zones_, Models::DescribeRegionsResponseBodyRegionsRegionZones) };
    inline DescribeRegionsResponseBodyRegionsRegion& setZones(const Models::DescribeRegionsResponseBodyRegionsRegionZones & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline DescribeRegionsResponseBodyRegionsRegion& setZones(Models::DescribeRegionsResponseBodyRegionsRegionZones && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<bool> supportPolarx10_ = nullptr;
    std::shared_ptr<bool> supportPolarx20_ = nullptr;
    std::shared_ptr<Models::DescribeRegionsResponseBodyRegionsRegionZones> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
