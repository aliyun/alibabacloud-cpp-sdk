// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIDIMTABLERECORDSREQUESTFILTERCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIDIMTABLERECORDSREQUESTFILTERCONDITIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMultiDimTableRecordsRequestFilterConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiDimTableRecordsRequestFilterConditions& obj) { 
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiDimTableRecordsRequestFilterConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListMultiDimTableRecordsRequestFilterConditions() = default ;
    ListMultiDimTableRecordsRequestFilterConditions(const ListMultiDimTableRecordsRequestFilterConditions &) = default ;
    ListMultiDimTableRecordsRequestFilterConditions(ListMultiDimTableRecordsRequestFilterConditions &&) = default ;
    ListMultiDimTableRecordsRequestFilterConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiDimTableRecordsRequestFilterConditions() = default ;
    ListMultiDimTableRecordsRequestFilterConditions& operator=(const ListMultiDimTableRecordsRequestFilterConditions &) = default ;
    ListMultiDimTableRecordsRequestFilterConditions& operator=(ListMultiDimTableRecordsRequestFilterConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->field_ != nullptr
        && this->operator_ != nullptr && this->value_ != nullptr; };
    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline ListMultiDimTableRecordsRequestFilterConditions& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ListMultiDimTableRecordsRequestFilterConditions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<Darabonba::Json> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> value() { DARABONBA_PTR_GET(value_, vector<Darabonba::Json>) };
    inline ListMultiDimTableRecordsRequestFilterConditions& setValue(const vector<Darabonba::Json> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline ListMultiDimTableRecordsRequestFilterConditions& setValue(vector<Darabonba::Json> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<string> field_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
