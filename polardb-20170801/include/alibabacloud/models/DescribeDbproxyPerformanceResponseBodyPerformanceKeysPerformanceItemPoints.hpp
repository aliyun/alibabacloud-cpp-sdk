// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEITEMPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEITEMPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints& obj) { 
      DARABONBA_PTR_TO_JSON(PerformanceItemValue, performanceItemValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(PerformanceItemValue, performanceItemValue_);
    };
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints() = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints(const DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints &) = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints(DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints &&) = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints() = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints& operator=(const DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints &) = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints& operator=(DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->performanceItemValue_ != nullptr; };
    // performanceItemValue Field Functions 
    bool hasPerformanceItemValue() const { return this->performanceItemValue_ != nullptr;};
    void deletePerformanceItemValue() { this->performanceItemValue_ = nullptr;};
    inline const vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> & performanceItemValue() const { DARABONBA_PTR_GET_CONST(performanceItemValue_, vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>) };
    inline vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> performanceItemValue() { DARABONBA_PTR_GET(performanceItemValue_, vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>) };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints& setPerformanceItemValue(const vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> & performanceItemValue) { DARABONBA_PTR_SET_VALUE(performanceItemValue_, performanceItemValue) };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints& setPerformanceItemValue(vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> && performanceItemValue) { DARABONBA_PTR_SET_RVALUE(performanceItemValue_, performanceItemValue) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>> performanceItemValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
