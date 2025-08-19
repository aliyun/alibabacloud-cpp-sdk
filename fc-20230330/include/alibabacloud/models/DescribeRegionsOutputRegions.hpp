// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSOUTPUTREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSOUTPUTREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRegionsOutputRegionsRegion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class DescribeRegionsOutputRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsOutputRegions& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsOutputRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeRegionsOutputRegions() = default ;
    DescribeRegionsOutputRegions(const DescribeRegionsOutputRegions &) = default ;
    DescribeRegionsOutputRegions(DescribeRegionsOutputRegions &&) = default ;
    DescribeRegionsOutputRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsOutputRegions() = default ;
    DescribeRegionsOutputRegions& operator=(const DescribeRegionsOutputRegions &) = default ;
    DescribeRegionsOutputRegions& operator=(DescribeRegionsOutputRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->region_ != nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline const vector<Models::DescribeRegionsOutputRegionsRegion> & region() const { DARABONBA_PTR_GET_CONST(region_, vector<Models::DescribeRegionsOutputRegionsRegion>) };
    inline vector<Models::DescribeRegionsOutputRegionsRegion> region() { DARABONBA_PTR_GET(region_, vector<Models::DescribeRegionsOutputRegionsRegion>) };
    inline DescribeRegionsOutputRegions& setRegion(const vector<Models::DescribeRegionsOutputRegionsRegion> & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
    inline DescribeRegionsOutputRegions& setRegion(vector<Models::DescribeRegionsOutputRegionsRegion> && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


  protected:
    std::shared_ptr<vector<Models::DescribeRegionsOutputRegionsRegion>> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
