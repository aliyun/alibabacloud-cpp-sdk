// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLEQUERYRESPONSEBODYAGGREGATIONS_HPP_
#define ALIBABACLOUD_MODELS_SIMPLEQUERYRESPONSEBODYAGGREGATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SimpleQueryResponseBodyAggregationsGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SimpleQueryResponseBodyAggregations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleQueryResponseBodyAggregations& obj) { 
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleQueryResponseBodyAggregations& obj) { 
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    SimpleQueryResponseBodyAggregations() = default ;
    SimpleQueryResponseBodyAggregations(const SimpleQueryResponseBodyAggregations &) = default ;
    SimpleQueryResponseBodyAggregations(SimpleQueryResponseBodyAggregations &&) = default ;
    SimpleQueryResponseBodyAggregations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleQueryResponseBodyAggregations() = default ;
    SimpleQueryResponseBodyAggregations& operator=(const SimpleQueryResponseBodyAggregations &) = default ;
    SimpleQueryResponseBodyAggregations& operator=(SimpleQueryResponseBodyAggregations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->field_ == nullptr
        && return this->groups_ == nullptr && return this->operation_ == nullptr && return this->value_ == nullptr; };
    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline SimpleQueryResponseBodyAggregations& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<Models::SimpleQueryResponseBodyAggregationsGroups> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<Models::SimpleQueryResponseBodyAggregationsGroups>) };
    inline vector<Models::SimpleQueryResponseBodyAggregationsGroups> groups() { DARABONBA_PTR_GET(groups_, vector<Models::SimpleQueryResponseBodyAggregationsGroups>) };
    inline SimpleQueryResponseBodyAggregations& setGroups(const vector<Models::SimpleQueryResponseBodyAggregationsGroups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline SimpleQueryResponseBodyAggregations& setGroups(vector<Models::SimpleQueryResponseBodyAggregationsGroups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline SimpleQueryResponseBodyAggregations& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline SimpleQueryResponseBodyAggregations& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the field.
    std::shared_ptr<string> field_ = nullptr;
    // The grouped aggregations. This parameter is returned only when the group operator is specified in the Aggregations request parameter.
    std::shared_ptr<vector<Models::SimpleQueryResponseBodyAggregationsGroups>> groups_ = nullptr;
    // The operator.
    std::shared_ptr<string> operation_ = nullptr;
    // The statistical result.
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
