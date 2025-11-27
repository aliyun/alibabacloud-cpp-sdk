// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONINFOSRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONINFOSRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRegionInfosResponseBodyRegionsRDSRegion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRegionInfosResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionInfosResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RDSRegion, RDSRegion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionInfosResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RDSRegion, RDSRegion_);
    };
    DescribeRegionInfosResponseBodyRegions() = default ;
    DescribeRegionInfosResponseBodyRegions(const DescribeRegionInfosResponseBodyRegions &) = default ;
    DescribeRegionInfosResponseBodyRegions(DescribeRegionInfosResponseBodyRegions &&) = default ;
    DescribeRegionInfosResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionInfosResponseBodyRegions() = default ;
    DescribeRegionInfosResponseBodyRegions& operator=(const DescribeRegionInfosResponseBodyRegions &) = default ;
    DescribeRegionInfosResponseBodyRegions& operator=(DescribeRegionInfosResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->RDSRegion_ == nullptr; };
    // RDSRegion Field Functions 
    bool hasRDSRegion() const { return this->RDSRegion_ != nullptr;};
    void deleteRDSRegion() { this->RDSRegion_ = nullptr;};
    inline const vector<Models::DescribeRegionInfosResponseBodyRegionsRDSRegion> & RDSRegion() const { DARABONBA_PTR_GET_CONST(RDSRegion_, vector<Models::DescribeRegionInfosResponseBodyRegionsRDSRegion>) };
    inline vector<Models::DescribeRegionInfosResponseBodyRegionsRDSRegion> RDSRegion() { DARABONBA_PTR_GET(RDSRegion_, vector<Models::DescribeRegionInfosResponseBodyRegionsRDSRegion>) };
    inline DescribeRegionInfosResponseBodyRegions& setRDSRegion(const vector<Models::DescribeRegionInfosResponseBodyRegionsRDSRegion> & RDSRegion) { DARABONBA_PTR_SET_VALUE(RDSRegion_, RDSRegion) };
    inline DescribeRegionInfosResponseBodyRegions& setRDSRegion(vector<Models::DescribeRegionInfosResponseBodyRegionsRDSRegion> && RDSRegion) { DARABONBA_PTR_SET_RVALUE(RDSRegion_, RDSRegion) };


  protected:
    std::shared_ptr<vector<Models::DescribeRegionInfosResponseBodyRegionsRDSRegion>> RDSRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
