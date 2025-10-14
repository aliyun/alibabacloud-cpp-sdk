// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGMONITORATTRIBUTERESPONSEBODYLOGMONITORAGGREGATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGMONITORATTRIBUTERESPONSEBODYLOGMONITORAGGREGATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(Min, min_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
    };
    DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates() = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates(const DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates &) = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates(DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates &&) = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates() = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates& operator=(const DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates &) = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates& operator=(DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->fieldName_ == nullptr && return this->function_ == nullptr && return this->max_ == nullptr && return this->min_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string function() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline string max() const { DARABONBA_PTR_GET_DEFAULT(max_, "") };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates& setMax(string max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline string min() const { DARABONBA_PTR_GET_DEFAULT(min_, "") };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates& setMin(string min) { DARABONBA_PTR_SET_VALUE(min_, min) };


  protected:
    // The alias of the field.
    std::shared_ptr<string> alias_ = nullptr;
    // The name of the field in logs.
    std::shared_ptr<string> fieldName_ = nullptr;
    // The function that is used to aggregate the monitoring data of logs within a statistical period. Valid values:
    // 
    // *   count: counts the number
    // *   sum: calculates the total value
    // *   avg: calculates the average value
    // *   max: calculates the maximum value
    // *   min: calculates the minimum value
    // *   countps: calculates the number of values of the specified field divided by the total number of seconds within a statistical period
    // *   sumps: calculates the sum of the values of the specified field divided by the total number of seconds within a statistical period
    // *   distinct: calculates the number of unique values of the specified field within a statistical period
    std::shared_ptr<string> function_ = nullptr;
    // The maximum value.
    std::shared_ptr<string> max_ = nullptr;
    // The minimum value.
    std::shared_ptr<string> min_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
