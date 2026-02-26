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
    virtual bool empty() const override { return this->field_ == nullptr
        && this->operation_ == nullptr && this->subQueries_ == nullptr && this->value_ == nullptr; };
    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline SimpleQuery& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline SimpleQuery& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // subQueries Field Functions 
    bool hasSubQueries() const { return this->subQueries_ != nullptr;};
    void deleteSubQueries() { this->subQueries_ = nullptr;};
    inline const vector<SimpleQuery> & getSubQueries() const { DARABONBA_PTR_GET_CONST(subQueries_, vector<SimpleQuery>) };
    inline vector<SimpleQuery> getSubQueries() { DARABONBA_PTR_GET(subQueries_, vector<SimpleQuery>) };
    inline SimpleQuery& setSubQueries(const vector<SimpleQuery> & subQueries) { DARABONBA_PTR_SET_VALUE(subQueries_, subQueries) };
    inline SimpleQuery& setSubQueries(vector<SimpleQuery> && subQueries) { DARABONBA_PTR_SET_RVALUE(subQueries_, subQueries) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline SimpleQuery& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // This parameter is required. The field name. For a list of the supported fields, see [Supported fields and operators](https://help.aliyun.com/document_detail/252856.html).
    shared_ptr<string> field_ {};
    // This parameter is required. The operator.
    // 
    // Enumerated values:
    // 
    // *   exist: exists query.
    // *   not: logical NOT.
    // *   or: logical OR.
    // *   prefix: prefix query.
    // *   and: logical AND.
    // *   It: less than.
    // *   match-phrase: string match query.
    // *   gte: greater than or equal to.
    // *   eq: equal to.
    // *   lte: less than or equal to.
    // *   gt: greater than.
    // *   nested: You can perform logical condition queries within the same object when the data type of a field is ARRAY.
    shared_ptr<string> operation_ {};
    // The subquery structure.
    // 
    // You can configure Subquery conditions only if you set the Operation parameter to and, or, not, or nested.
    // 
    // If you set the Operation parameter to and, or, or not, all query conditions specified by the SubQueries parameter must comply with the logical relationship of the parent query condition.
    // 
    // If you set the Operation parameter to nested, the parent field of a subquery must be of the ARRAY type, such as Labels. The operator of a subquery condition must be one or more of the following operators: and, or, and not. The field of the subquery must be a sub-field of the parent field.
    // 
    // For information about how to call the SimpleQuery operation, see [SimpleQuery](https://help.aliyun.com/document_detail/478175.html).
    shared_ptr<vector<SimpleQuery>> subQueries_ {};
    // The field value. If you set the Operation parameter to and, or, not, or nested, this parameter is invalid.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
