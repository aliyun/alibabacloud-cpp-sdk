// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGIONRECOMMENDZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGIONRECOMMENDZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeRegionsResponseBodyRegionsRegionRecommendZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegionsRegionRecommendZones& obj) { 
      DARABONBA_PTR_TO_JSON(RecommendZone, recommendZone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegionsRegionRecommendZones& obj) { 
      DARABONBA_PTR_FROM_JSON(RecommendZone, recommendZone_);
    };
    DescribeRegionsResponseBodyRegionsRegionRecommendZones() = default ;
    DescribeRegionsResponseBodyRegionsRegionRecommendZones(const DescribeRegionsResponseBodyRegionsRegionRecommendZones &) = default ;
    DescribeRegionsResponseBodyRegionsRegionRecommendZones(DescribeRegionsResponseBodyRegionsRegionRecommendZones &&) = default ;
    DescribeRegionsResponseBodyRegionsRegionRecommendZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyRegionsRegionRecommendZones() = default ;
    DescribeRegionsResponseBodyRegionsRegionRecommendZones& operator=(const DescribeRegionsResponseBodyRegionsRegionRecommendZones &) = default ;
    DescribeRegionsResponseBodyRegionsRegionRecommendZones& operator=(DescribeRegionsResponseBodyRegionsRegionRecommendZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recommendZone_ == nullptr; };
    // recommendZone Field Functions 
    bool hasRecommendZone() const { return this->recommendZone_ != nullptr;};
    void deleteRecommendZone() { this->recommendZone_ = nullptr;};
    inline const vector<string> & recommendZone() const { DARABONBA_PTR_GET_CONST(recommendZone_, vector<string>) };
    inline vector<string> recommendZone() { DARABONBA_PTR_GET(recommendZone_, vector<string>) };
    inline DescribeRegionsResponseBodyRegionsRegionRecommendZones& setRecommendZone(const vector<string> & recommendZone) { DARABONBA_PTR_SET_VALUE(recommendZone_, recommendZone) };
    inline DescribeRegionsResponseBodyRegionsRegionRecommendZones& setRecommendZone(vector<string> && recommendZone) { DARABONBA_PTR_SET_RVALUE(recommendZone_, recommendZone) };


  protected:
    std::shared_ptr<vector<string>> recommendZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
