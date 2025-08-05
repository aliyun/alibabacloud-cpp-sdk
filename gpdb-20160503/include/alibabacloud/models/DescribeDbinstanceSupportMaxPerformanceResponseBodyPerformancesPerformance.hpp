// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESUPPORTMAXPERFORMANCERESPONSEBODYPERFORMANCESPERFORMANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESUPPORTMAXPERFORMANCERESPONSEBODYPERFORMANCESPERFORMANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance& obj) { 
      DARABONBA_PTR_TO_JSON(Bottleneck, bottleneck_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance& obj) { 
      DARABONBA_PTR_FROM_JSON(Bottleneck, bottleneck_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance() = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance(const DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance &) = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance(DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance &&) = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance() = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance& operator=(const DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance &) = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance& operator=(DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bottleneck_ != nullptr
        && this->key_ != nullptr && this->unit_ != nullptr && this->value_ != nullptr; };
    // bottleneck Field Functions 
    bool hasBottleneck() const { return this->bottleneck_ != nullptr;};
    void deleteBottleneck() { this->bottleneck_ = nullptr;};
    inline string bottleneck() const { DARABONBA_PTR_GET_DEFAULT(bottleneck_, "") };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance& setBottleneck(string bottleneck) { DARABONBA_PTR_SET_VALUE(bottleneck_, bottleneck) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The performance bottleneck type.
    std::shared_ptr<string> bottleneck_ = nullptr;
    // The name of the performance metric.
    std::shared_ptr<string> key_ = nullptr;
    // The unit of the performance metric.
    std::shared_ptr<string> unit_ = nullptr;
    // The value of the performance metric.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
