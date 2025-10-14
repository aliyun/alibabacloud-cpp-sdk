// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGIONZONESZONE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGIONZONESZONE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeRegionsResponseBodyRegionsRegionZonesZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegionsRegionZonesZone& obj) { 
      DARABONBA_PTR_TO_JSON(VpcEnabled, vpcEnabled_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegionsRegionZonesZone& obj) { 
      DARABONBA_PTR_FROM_JSON(VpcEnabled, vpcEnabled_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeRegionsResponseBodyRegionsRegionZonesZone() = default ;
    DescribeRegionsResponseBodyRegionsRegionZonesZone(const DescribeRegionsResponseBodyRegionsRegionZonesZone &) = default ;
    DescribeRegionsResponseBodyRegionsRegionZonesZone(DescribeRegionsResponseBodyRegionsRegionZonesZone &&) = default ;
    DescribeRegionsResponseBodyRegionsRegionZonesZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyRegionsRegionZonesZone() = default ;
    DescribeRegionsResponseBodyRegionsRegionZonesZone& operator=(const DescribeRegionsResponseBodyRegionsRegionZonesZone &) = default ;
    DescribeRegionsResponseBodyRegionsRegionZonesZone& operator=(DescribeRegionsResponseBodyRegionsRegionZonesZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpcEnabled_ == nullptr
        && return this->zoneId_ == nullptr; };
    // vpcEnabled Field Functions 
    bool hasVpcEnabled() const { return this->vpcEnabled_ != nullptr;};
    void deleteVpcEnabled() { this->vpcEnabled_ = nullptr;};
    inline bool vpcEnabled() const { DARABONBA_PTR_GET_DEFAULT(vpcEnabled_, false) };
    inline DescribeRegionsResponseBodyRegionsRegionZonesZone& setVpcEnabled(bool vpcEnabled) { DARABONBA_PTR_SET_VALUE(vpcEnabled_, vpcEnabled) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRegionsResponseBodyRegionsRegionZonesZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<bool> vpcEnabled_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
