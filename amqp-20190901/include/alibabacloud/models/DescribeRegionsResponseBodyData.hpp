// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRegionsResponseBodyDataRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class DescribeRegionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
    };
    DescribeRegionsResponseBodyData() = default ;
    DescribeRegionsResponseBodyData(const DescribeRegionsResponseBodyData &) = default ;
    DescribeRegionsResponseBodyData(DescribeRegionsResponseBodyData &&) = default ;
    DescribeRegionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyData() = default ;
    DescribeRegionsResponseBodyData& operator=(const DescribeRegionsResponseBodyData &) = default ;
    DescribeRegionsResponseBodyData& operator=(DescribeRegionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regions_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<Models::DescribeRegionsResponseBodyDataRegions> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<Models::DescribeRegionsResponseBodyDataRegions>) };
    inline vector<Models::DescribeRegionsResponseBodyDataRegions> regions() { DARABONBA_PTR_GET(regions_, vector<Models::DescribeRegionsResponseBodyDataRegions>) };
    inline DescribeRegionsResponseBodyData& setRegions(const vector<Models::DescribeRegionsResponseBodyDataRegions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeRegionsResponseBodyData& setRegions(vector<Models::DescribeRegionsResponseBodyDataRegions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


  protected:
    std::shared_ptr<vector<Models::DescribeRegionsResponseBodyDataRegions>> regions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
