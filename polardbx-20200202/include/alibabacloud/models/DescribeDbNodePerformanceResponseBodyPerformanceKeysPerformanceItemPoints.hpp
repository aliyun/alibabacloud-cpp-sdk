// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBNODEPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEITEMPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBNODEPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEITEMPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints& obj) { 
      DARABONBA_PTR_TO_JSON(PerformanceItemValue, performanceItemValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(PerformanceItemValue, performanceItemValue_);
    };
    DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints() = default ;
    DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints(const DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints &) = default ;
    DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints(DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints &&) = default ;
    DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints() = default ;
    DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints& operator=(const DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints &) = default ;
    DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints& operator=(DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->performanceItemValue_ == nullptr; };
    // performanceItemValue Field Functions 
    bool hasPerformanceItemValue() const { return this->performanceItemValue_ != nullptr;};
    void deletePerformanceItemValue() { this->performanceItemValue_ = nullptr;};
    inline const vector<Models::DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> & performanceItemValue() const { DARABONBA_PTR_GET_CONST(performanceItemValue_, vector<Models::DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>) };
    inline vector<Models::DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> performanceItemValue() { DARABONBA_PTR_GET(performanceItemValue_, vector<Models::DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>) };
    inline DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints& setPerformanceItemValue(const vector<Models::DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> & performanceItemValue) { DARABONBA_PTR_SET_VALUE(performanceItemValue_, performanceItemValue) };
    inline DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints& setPerformanceItemValue(vector<Models::DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> && performanceItemValue) { DARABONBA_PTR_SET_RVALUE(performanceItemValue_, performanceItemValue) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>> performanceItemValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
