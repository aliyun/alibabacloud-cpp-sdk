// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEITEMPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEITEMPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints& obj) { 
      DARABONBA_PTR_TO_JSON(PerformanceItemValue, performanceItemValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(PerformanceItemValue, performanceItemValue_);
    };
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints(const DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints(DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints &&) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints& operator=(const DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints& operator=(DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->performanceItemValue_ == nullptr; };
    // performanceItemValue Field Functions 
    bool hasPerformanceItemValue() const { return this->performanceItemValue_ != nullptr;};
    void deletePerformanceItemValue() { this->performanceItemValue_ = nullptr;};
    inline const vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> & performanceItemValue() const { DARABONBA_PTR_GET_CONST(performanceItemValue_, vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>) };
    inline vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> performanceItemValue() { DARABONBA_PTR_GET(performanceItemValue_, vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>) };
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints& setPerformanceItemValue(const vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> & performanceItemValue) { DARABONBA_PTR_SET_VALUE(performanceItemValue_, performanceItemValue) };
    inline DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints& setPerformanceItemValue(vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> && performanceItemValue) { DARABONBA_PTR_SET_RVALUE(performanceItemValue_, performanceItemValue) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>> performanceItemValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
