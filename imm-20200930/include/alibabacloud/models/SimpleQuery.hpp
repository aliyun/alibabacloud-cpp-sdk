// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLEQUERY_HPP_
#define ALIBABACLOUD_MODELS_SIMPLEQUERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SimpleQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SimpleQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleQuery& obj) { 
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(SubQueries, subQueries_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(SubQueries, subQueries_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    SimpleQuery() = default ;
    SimpleQuery(const SimpleQuery &) = default ;
    SimpleQuery(SimpleQuery &&) = default ;
    SimpleQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleQuery() = default ;
    SimpleQuery& operator=(const SimpleQuery &) = default ;
    SimpleQuery& operator=(SimpleQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->field_ != nullptr
        && this->operation_ != nullptr && this->subQueries_ != nullptr && this->value_ != nullptr; };
    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline SimpleQuery& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline SimpleQuery& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // subQueries Field Functions 
    bool hasSubQueries() const { return this->subQueries_ != nullptr;};
    void deleteSubQueries() { this->subQueries_ = nullptr;};
    inline const vector<SimpleQuery> & subQueries() const { DARABONBA_PTR_GET_CONST(subQueries_, vector<SimpleQuery>) };
    inline vector<SimpleQuery> subQueries() { DARABONBA_PTR_GET(subQueries_, vector<SimpleQuery>) };
    inline SimpleQuery& setSubQueries(const vector<SimpleQuery> & subQueries) { DARABONBA_PTR_SET_VALUE(subQueries_, subQueries) };
    inline SimpleQuery& setSubQueries(vector<SimpleQuery> && subQueries) { DARABONBA_PTR_SET_RVALUE(subQueries_, subQueries) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline SimpleQuery& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> field_ = nullptr;
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<vector<SimpleQuery>> subQueries_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
