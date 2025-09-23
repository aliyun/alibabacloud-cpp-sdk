// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEITEMPOINTSPERFORMANCEITEMVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEITEMPOINTSPERFORMANCEITEMVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue& obj) { 
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue() = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue(const DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue &) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue(DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue &&) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue() = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue& operator=(const DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue &) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue& operator=(DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->timestamp_ != nullptr
        && this->value_ != nullptr; };
    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
