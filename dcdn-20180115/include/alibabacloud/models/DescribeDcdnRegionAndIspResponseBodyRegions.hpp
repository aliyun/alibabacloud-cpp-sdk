// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNREGIONANDISPRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNREGIONANDISPRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnRegionAndIspResponseBodyRegionsRegion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnRegionAndIspResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnRegionAndIspResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnRegionAndIspResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeDcdnRegionAndIspResponseBodyRegions() = default ;
    DescribeDcdnRegionAndIspResponseBodyRegions(const DescribeDcdnRegionAndIspResponseBodyRegions &) = default ;
    DescribeDcdnRegionAndIspResponseBodyRegions(DescribeDcdnRegionAndIspResponseBodyRegions &&) = default ;
    DescribeDcdnRegionAndIspResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnRegionAndIspResponseBodyRegions() = default ;
    DescribeDcdnRegionAndIspResponseBodyRegions& operator=(const DescribeDcdnRegionAndIspResponseBodyRegions &) = default ;
    DescribeDcdnRegionAndIspResponseBodyRegions& operator=(DescribeDcdnRegionAndIspResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->region_ != nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline const vector<Models::DescribeDcdnRegionAndIspResponseBodyRegionsRegion> & region() const { DARABONBA_PTR_GET_CONST(region_, vector<Models::DescribeDcdnRegionAndIspResponseBodyRegionsRegion>) };
    inline vector<Models::DescribeDcdnRegionAndIspResponseBodyRegionsRegion> region() { DARABONBA_PTR_GET(region_, vector<Models::DescribeDcdnRegionAndIspResponseBodyRegionsRegion>) };
    inline DescribeDcdnRegionAndIspResponseBodyRegions& setRegion(const vector<Models::DescribeDcdnRegionAndIspResponseBodyRegionsRegion> & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
    inline DescribeDcdnRegionAndIspResponseBodyRegions& setRegion(vector<Models::DescribeDcdnRegionAndIspResponseBodyRegionsRegion> && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnRegionAndIspResponseBodyRegionsRegion>> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
