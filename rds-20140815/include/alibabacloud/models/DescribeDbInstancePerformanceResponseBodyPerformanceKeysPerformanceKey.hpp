// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEKEY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEKEY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(ValueFormat, valueFormat_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(ValueFormat, valueFormat_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey() = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey(const DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey &) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey(DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey &&) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey() = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey& operator=(const DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey &) = default ;
    DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey& operator=(DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->unit_ == nullptr && return this->valueFormat_ == nullptr && return this->values_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // valueFormat Field Functions 
    bool hasValueFormat() const { return this->valueFormat_ != nullptr;};
    void deleteValueFormat() { this->valueFormat_ = nullptr;};
    inline string valueFormat() const { DARABONBA_PTR_GET_DEFAULT(valueFormat_, "") };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey& setValueFormat(string valueFormat) { DARABONBA_PTR_SET_VALUE(valueFormat_, valueFormat) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues & values() const { DARABONBA_PTR_GET_CONST(values_, Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues) };
    inline Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues values() { DARABONBA_PTR_GET(values_, Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues) };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey& setValues(const Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey& setValues(Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The name of the performance metric.
    std::shared_ptr<string> key_ = nullptr;
    // The unit of the performance metrics.
    std::shared_ptr<string> unit_ = nullptr;
    // The format in which the value of the performance metric is returned.
    // 
    // >  If a performance metric value consists of multiple fields, the values are separated with ampersands (&). Example: com_delete\\&com_insert\\&com_insert_select\\&com_replace.
    std::shared_ptr<string> valueFormat_ = nullptr;
    // The performance metric values.
    std::shared_ptr<Models::DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyValues> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
