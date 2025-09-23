// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEITEMPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEITEMPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints& obj) { 
      DARABONBA_PTR_TO_JSON(PerformanceItemValue, performanceItemValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(PerformanceItemValue, performanceItemValue_);
    };
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints() = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints(const DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints &) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints(DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints &&) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints() = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints& operator=(const DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints &) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints& operator=(DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->performanceItemValue_ != nullptr; };
    // performanceItemValue Field Functions 
    bool hasPerformanceItemValue() const { return this->performanceItemValue_ != nullptr;};
    void deletePerformanceItemValue() { this->performanceItemValue_ = nullptr;};
    inline const vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> & performanceItemValue() const { DARABONBA_PTR_GET_CONST(performanceItemValue_, vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>) };
    inline vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> performanceItemValue() { DARABONBA_PTR_GET(performanceItemValue_, vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>) };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints& setPerformanceItemValue(const vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> & performanceItemValue) { DARABONBA_PTR_SET_VALUE(performanceItemValue_, performanceItemValue) };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPoints& setPerformanceItemValue(vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> && performanceItemValue) { DARABONBA_PTR_SET_RVALUE(performanceItemValue_, performanceItemValue) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>> performanceItemValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
