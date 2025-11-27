// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLECROSSREGIONRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLECROSSREGIONRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAvailableCrossRegionResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableCrossRegionResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableCrossRegionResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeAvailableCrossRegionResponseBodyRegions() = default ;
    DescribeAvailableCrossRegionResponseBodyRegions(const DescribeAvailableCrossRegionResponseBodyRegions &) = default ;
    DescribeAvailableCrossRegionResponseBodyRegions(DescribeAvailableCrossRegionResponseBodyRegions &&) = default ;
    DescribeAvailableCrossRegionResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableCrossRegionResponseBodyRegions() = default ;
    DescribeAvailableCrossRegionResponseBodyRegions& operator=(const DescribeAvailableCrossRegionResponseBodyRegions &) = default ;
    DescribeAvailableCrossRegionResponseBodyRegions& operator=(DescribeAvailableCrossRegionResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->region_ == nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline const vector<string> & region() const { DARABONBA_PTR_GET_CONST(region_, vector<string>) };
    inline vector<string> region() { DARABONBA_PTR_GET(region_, vector<string>) };
    inline DescribeAvailableCrossRegionResponseBodyRegions& setRegion(const vector<string> & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
    inline DescribeAvailableCrossRegionResponseBodyRegions& setRegion(vector<string> && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


  protected:
    std::shared_ptr<vector<string>> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
