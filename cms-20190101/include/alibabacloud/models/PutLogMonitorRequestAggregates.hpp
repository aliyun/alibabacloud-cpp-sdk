// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTLOGMONITORREQUESTAGGREGATES_HPP_
#define ALIBABACLOUD_MODELS_PUTLOGMONITORREQUESTAGGREGATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutLogMonitorRequestAggregates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutLogMonitorRequestAggregates& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(Function, function_);
    };
    friend void from_json(const Darabonba::Json& j, PutLogMonitorRequestAggregates& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(Function, function_);
    };
    PutLogMonitorRequestAggregates() = default ;
    PutLogMonitorRequestAggregates(const PutLogMonitorRequestAggregates &) = default ;
    PutLogMonitorRequestAggregates(PutLogMonitorRequestAggregates &&) = default ;
    PutLogMonitorRequestAggregates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutLogMonitorRequestAggregates() = default ;
    PutLogMonitorRequestAggregates& operator=(const PutLogMonitorRequestAggregates &) = default ;
    PutLogMonitorRequestAggregates& operator=(PutLogMonitorRequestAggregates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->fieldName_ != nullptr && this->function_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline PutLogMonitorRequestAggregates& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline PutLogMonitorRequestAggregates& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string function() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline PutLogMonitorRequestAggregates& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


  protected:
    // The alias of the aggregate function. Valid values of N: 1 to 10.
    // 
    // This parameter is required.
    std::shared_ptr<string> alias_ = nullptr;
    // The name of the field to be aggregated. Valid values of N: 1 to 10.
    // 
    // This parameter is required.
    std::shared_ptr<string> fieldName_ = nullptr;
    // The function that is used to aggregate log data within a statistical period. Valid values of N: 1 to 10. Valid values:
    // 
    // *   count: counts the number.
    // *   sum: calculates the total value.
    // *   avg: calculates the average value.
    // *   max: calculates the maximum value.
    // *   min: calculates the minimum value.
    // *   countps: calculates the number of values of the specified field divided by the total number of seconds within a statistical period.
    // *   sumps: calculates the sum of the values of the specified field divided by the total number of seconds within a statistical period.
    // *   distinct: calculates the number of unique values of the specified field within a statistical period.
    // 
    // This parameter is required.
    std::shared_ptr<string> function_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
