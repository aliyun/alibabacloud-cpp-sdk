// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEKEYVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEKEYVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValuesPerformanceValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues& obj) { 
      DARABONBA_PTR_TO_JSON(PerformanceValue, performanceValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues& obj) { 
      DARABONBA_PTR_FROM_JSON(PerformanceValue, performanceValue_);
    };
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues() = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues(const DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues &) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues(DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues &&) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues() = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues& operator=(const DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues &) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues& operator=(DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->performanceValue_ == nullptr; };
    // performanceValue Field Functions 
    bool hasPerformanceValue() const { return this->performanceValue_ != nullptr;};
    void deletePerformanceValue() { this->performanceValue_ = nullptr;};
    inline const vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValuesPerformanceValue> & performanceValue() const { DARABONBA_PTR_GET_CONST(performanceValue_, vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValuesPerformanceValue>) };
    inline vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValuesPerformanceValue> performanceValue() { DARABONBA_PTR_GET(performanceValue_, vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValuesPerformanceValue>) };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues& setPerformanceValue(const vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValuesPerformanceValue> & performanceValue) { DARABONBA_PTR_SET_VALUE(performanceValue_, performanceValue) };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues& setPerformanceValue(vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValuesPerformanceValue> && performanceValue) { DARABONBA_PTR_SET_RVALUE(performanceValue_, performanceValue) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValuesPerformanceValue>> performanceValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
