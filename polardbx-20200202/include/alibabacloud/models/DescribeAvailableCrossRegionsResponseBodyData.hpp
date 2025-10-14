// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLECROSSREGIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLECROSSREGIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeAvailableCrossRegionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableCrossRegionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableCrossRegionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
    };
    DescribeAvailableCrossRegionsResponseBodyData() = default ;
    DescribeAvailableCrossRegionsResponseBodyData(const DescribeAvailableCrossRegionsResponseBodyData &) = default ;
    DescribeAvailableCrossRegionsResponseBodyData(DescribeAvailableCrossRegionsResponseBodyData &&) = default ;
    DescribeAvailableCrossRegionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableCrossRegionsResponseBodyData() = default ;
    DescribeAvailableCrossRegionsResponseBodyData& operator=(const DescribeAvailableCrossRegionsResponseBodyData &) = default ;
    DescribeAvailableCrossRegionsResponseBodyData& operator=(DescribeAvailableCrossRegionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regions_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<string> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<string>) };
    inline vector<string> regions() { DARABONBA_PTR_GET(regions_, vector<string>) };
    inline DescribeAvailableCrossRegionsResponseBodyData& setRegions(const vector<string> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeAvailableCrossRegionsResponseBodyData& setRegions(vector<string> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


  protected:
    std::shared_ptr<vector<string>> regions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
