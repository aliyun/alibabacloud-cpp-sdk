// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREGIONANDISPRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREGIONANDISPRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnRegionAndIspResponseBodyRegionsRegion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnRegionAndIspResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnRegionAndIspResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnRegionAndIspResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeCdnRegionAndIspResponseBodyRegions() = default ;
    DescribeCdnRegionAndIspResponseBodyRegions(const DescribeCdnRegionAndIspResponseBodyRegions &) = default ;
    DescribeCdnRegionAndIspResponseBodyRegions(DescribeCdnRegionAndIspResponseBodyRegions &&) = default ;
    DescribeCdnRegionAndIspResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnRegionAndIspResponseBodyRegions() = default ;
    DescribeCdnRegionAndIspResponseBodyRegions& operator=(const DescribeCdnRegionAndIspResponseBodyRegions &) = default ;
    DescribeCdnRegionAndIspResponseBodyRegions& operator=(DescribeCdnRegionAndIspResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->region_ == nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline const vector<Models::DescribeCdnRegionAndIspResponseBodyRegionsRegion> & region() const { DARABONBA_PTR_GET_CONST(region_, vector<Models::DescribeCdnRegionAndIspResponseBodyRegionsRegion>) };
    inline vector<Models::DescribeCdnRegionAndIspResponseBodyRegionsRegion> region() { DARABONBA_PTR_GET(region_, vector<Models::DescribeCdnRegionAndIspResponseBodyRegionsRegion>) };
    inline DescribeCdnRegionAndIspResponseBodyRegions& setRegion(const vector<Models::DescribeCdnRegionAndIspResponseBodyRegionsRegion> & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
    inline DescribeCdnRegionAndIspResponseBodyRegions& setRegion(vector<Models::DescribeCdnRegionAndIspResponseBodyRegionsRegion> && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnRegionAndIspResponseBodyRegionsRegion>> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
