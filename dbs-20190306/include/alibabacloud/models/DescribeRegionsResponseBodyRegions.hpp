// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
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
    virtual bool empty() const override { return this->regionCode_ == nullptr; };
    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline const vector<string> & regionCode() const { DARABONBA_PTR_GET_CONST(regionCode_, vector<string>) };
    inline vector<string> regionCode() { DARABONBA_PTR_GET(regionCode_, vector<string>) };
    inline DescribeRegionsResponseBodyRegions& setRegionCode(const vector<string> & regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };
    inline DescribeRegionsResponseBodyRegions& setRegionCode(vector<string> && regionCode) { DARABONBA_PTR_SET_RVALUE(regionCode_, regionCode) };


  protected:
    std::shared_ptr<vector<string>> regionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
