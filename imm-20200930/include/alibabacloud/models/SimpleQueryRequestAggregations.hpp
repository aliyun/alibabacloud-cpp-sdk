// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLEQUERYREQUESTAGGREGATIONS_HPP_
#define ALIBABACLOUD_MODELS_SIMPLEQUERYREQUESTAGGREGATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SimpleQueryRequestAggregations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleQueryRequestAggregations& obj) { 
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleQueryRequestAggregations& obj) { 
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
    };
    SimpleQueryRequestAggregations() = default ;
    SimpleQueryRequestAggregations(const SimpleQueryRequestAggregations &) = default ;
    SimpleQueryRequestAggregations(SimpleQueryRequestAggregations &&) = default ;
    SimpleQueryRequestAggregations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleQueryRequestAggregations() = default ;
    SimpleQueryRequestAggregations& operator=(const SimpleQueryRequestAggregations &) = default ;
    SimpleQueryRequestAggregations& operator=(SimpleQueryRequestAggregations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->field_ == nullptr
        && return this->operation_ == nullptr; };
    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline SimpleQueryRequestAggregations& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline SimpleQueryRequestAggregations& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


  protected:
    // The name of the field. For more information about supported fields, see [Supported fields and operators](https://help.aliyun.com/document_detail/2743991.html).
    std::shared_ptr<string> field_ = nullptr;
    // The operator.
    // 
    // Enumerated values:
    // 
    // *   average: calculates the average number.
    // *   min: finds the minimum value.
    // *   max: finds the maximum value.
    // *   count: counts the number of results.
    // *   distinct: counts the number of distinct results.
    // *   sum: calculates the sum of all matching results..
    // *   group: counts the number of results by group. The results are sorted by the count number in descending order.
    std::shared_ptr<string> operation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
