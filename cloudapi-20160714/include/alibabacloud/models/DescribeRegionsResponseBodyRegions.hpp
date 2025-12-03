// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRegionsResponseBodyRegionsRegion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeRegionsResponseBodyRegions() = default ;
    DescribeRegionsResponseBodyRegions(const DescribeRegionsResponseBodyRegions &) = default ;
    DescribeRegionsResponseBodyRegions(DescribeRegionsResponseBodyRegions &&) = default ;
    DescribeRegionsResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyRegions() = default ;
    DescribeRegionsResponseBodyRegions& operator=(const DescribeRegionsResponseBodyRegions &) = default ;
    DescribeRegionsResponseBodyRegions& operator=(DescribeRegionsResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->region_ == nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline const vector<Models::DescribeRegionsResponseBodyRegionsRegion> & region() const { DARABONBA_PTR_GET_CONST(region_, vector<Models::DescribeRegionsResponseBodyRegionsRegion>) };
    inline vector<Models::DescribeRegionsResponseBodyRegionsRegion> region() { DARABONBA_PTR_GET(region_, vector<Models::DescribeRegionsResponseBodyRegionsRegion>) };
    inline DescribeRegionsResponseBodyRegions& setRegion(const vector<Models::DescribeRegionsResponseBodyRegionsRegion> & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
    inline DescribeRegionsResponseBodyRegions& setRegion(vector<Models::DescribeRegionsResponseBodyRegionsRegion> && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


  protected:
    std::shared_ptr<vector<Models::DescribeRegionsResponseBodyRegionsRegion>> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
