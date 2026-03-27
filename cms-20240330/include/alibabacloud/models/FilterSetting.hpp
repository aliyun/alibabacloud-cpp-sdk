// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERSETTING_HPP_
#define ALIBABACLOUD_MODELS_FILTERSETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class FilterSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterSetting& obj) { 
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(expression, expression_);
      DARABONBA_PTR_TO_JSON(relation, relation_);
    };
    friend void from_json(const Darabonba::Json& j, FilterSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(expression, expression_);
      DARABONBA_PTR_FROM_JSON(relation, relation_);
    };
    FilterSetting() = default ;
    FilterSetting(const FilterSetting &) = default ;
    FilterSetting(FilterSetting &&) = default ;
    FilterSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterSetting() = default ;
    FilterSetting& operator=(const FilterSetting &) = default ;
    FilterSetting& operator=(FilterSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Conditions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
        DARABONBA_PTR_TO_JSON(field, field_);
        DARABONBA_PTR_TO_JSON(op, op_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
        DARABONBA_PTR_FROM_JSON(field, field_);
        DARABONBA_PTR_FROM_JSON(op, op_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Conditions() = default ;
      Conditions(const Conditions &) = default ;
      Conditions(Conditions &&) = default ;
      Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Conditions() = default ;
      Conditions& operator=(const Conditions &) = default ;
      Conditions& operator=(Conditions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->field_ == nullptr
        && this->op_ == nullptr && this->value_ == nullptr; };
      // field Field Functions 
      bool hasField() const { return this->field_ != nullptr;};
      void deleteField() { this->field_ = nullptr;};
      inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
      inline Conditions& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


      // op Field Functions 
      bool hasOp() const { return this->op_ != nullptr;};
      void deleteOp() { this->op_ = nullptr;};
      inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
      inline Conditions& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Conditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> field_ {};
      shared_ptr<string> op_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->conditions_ == nullptr
        && this->expression_ == nullptr && this->relation_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<FilterSetting::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<FilterSetting::Conditions>) };
    inline vector<FilterSetting::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<FilterSetting::Conditions>) };
    inline FilterSetting& setConditions(const vector<FilterSetting::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline FilterSetting& setConditions(vector<FilterSetting::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline FilterSetting& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline FilterSetting& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


  protected:
    shared_ptr<vector<FilterSetting::Conditions>> conditions_ {};
    shared_ptr<string> expression_ {};
    shared_ptr<string> relation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
