// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSMIXEDRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSMIXEDRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRegionsMixedResponseBodyRegionsRegion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeRegionsMixedResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsMixedResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsMixedResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeRegionsMixedResponseBodyRegions() = default ;
    DescribeRegionsMixedResponseBodyRegions(const DescribeRegionsMixedResponseBodyRegions &) = default ;
    DescribeRegionsMixedResponseBodyRegions(DescribeRegionsMixedResponseBodyRegions &&) = default ;
    DescribeRegionsMixedResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsMixedResponseBodyRegions() = default ;
    DescribeRegionsMixedResponseBodyRegions& operator=(const DescribeRegionsMixedResponseBodyRegions &) = default ;
    DescribeRegionsMixedResponseBodyRegions& operator=(DescribeRegionsMixedResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->region_ != nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline const vector<Models::DescribeRegionsMixedResponseBodyRegionsRegion> & region() const { DARABONBA_PTR_GET_CONST(region_, vector<Models::DescribeRegionsMixedResponseBodyRegionsRegion>) };
    inline vector<Models::DescribeRegionsMixedResponseBodyRegionsRegion> region() { DARABONBA_PTR_GET(region_, vector<Models::DescribeRegionsMixedResponseBodyRegionsRegion>) };
    inline DescribeRegionsMixedResponseBodyRegions& setRegion(const vector<Models::DescribeRegionsMixedResponseBodyRegionsRegion> & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
    inline DescribeRegionsMixedResponseBodyRegions& setRegion(vector<Models::DescribeRegionsMixedResponseBodyRegionsRegion> && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


  protected:
    std::shared_ptr<vector<Models::DescribeRegionsMixedResponseBodyRegionsRegion>> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
