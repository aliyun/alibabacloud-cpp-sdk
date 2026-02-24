// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULESLSQUERYJOIN_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULESLSQUERYJOIN_HPP_
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
  class AlertRuleSlsQueryJoin : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleSlsQueryJoin& obj) { 
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleSlsQueryJoin& obj) { 
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AlertRuleSlsQueryJoin() = default ;
    AlertRuleSlsQueryJoin(const AlertRuleSlsQueryJoin &) = default ;
    AlertRuleSlsQueryJoin(AlertRuleSlsQueryJoin &&) = default ;
    AlertRuleSlsQueryJoin(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleSlsQueryJoin() = default ;
    AlertRuleSlsQueryJoin& operator=(const AlertRuleSlsQueryJoin &) = default ;
    AlertRuleSlsQueryJoin& operator=(AlertRuleSlsQueryJoin &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Conditions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
        DARABONBA_PTR_TO_JSON(firstField, firstField_);
        DARABONBA_PTR_TO_JSON(oper, oper_);
        DARABONBA_PTR_TO_JSON(secondField, secondField_);
      };
      friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
        DARABONBA_PTR_FROM_JSON(firstField, firstField_);
        DARABONBA_PTR_FROM_JSON(oper, oper_);
        DARABONBA_PTR_FROM_JSON(secondField, secondField_);
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
      virtual bool empty() const override { return this->firstField_ == nullptr
        && this->oper_ == nullptr && this->secondField_ == nullptr; };
      // firstField Field Functions 
      bool hasFirstField() const { return this->firstField_ != nullptr;};
      void deleteFirstField() { this->firstField_ = nullptr;};
      inline string getFirstField() const { DARABONBA_PTR_GET_DEFAULT(firstField_, "") };
      inline Conditions& setFirstField(string firstField) { DARABONBA_PTR_SET_VALUE(firstField_, firstField) };


      // oper Field Functions 
      bool hasOper() const { return this->oper_ != nullptr;};
      void deleteOper() { this->oper_ = nullptr;};
      inline string getOper() const { DARABONBA_PTR_GET_DEFAULT(oper_, "") };
      inline Conditions& setOper(string oper) { DARABONBA_PTR_SET_VALUE(oper_, oper) };


      // secondField Field Functions 
      bool hasSecondField() const { return this->secondField_ != nullptr;};
      void deleteSecondField() { this->secondField_ = nullptr;};
      inline string getSecondField() const { DARABONBA_PTR_GET_DEFAULT(secondField_, "") };
      inline Conditions& setSecondField(string secondField) { DARABONBA_PTR_SET_VALUE(secondField_, secondField) };


    protected:
      // Left-hand operand of the condition, formatted as $<query_idx>.<result_set_field_name>.
      shared_ptr<string> firstField_ {};
      // Comparison operator; valid values: <, >, ==, !=, <=, >=.
      shared_ptr<string> oper_ {};
      // Right-hand operand of the condition, formatted as $<query_idx>.<result_set_field_name>.
      shared_ptr<string> secondField_ {};
    };

    virtual bool empty() const override { return this->conditions_ == nullptr
        && this->type_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<AlertRuleSlsQueryJoin::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<AlertRuleSlsQueryJoin::Conditions>) };
    inline vector<AlertRuleSlsQueryJoin::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<AlertRuleSlsQueryJoin::Conditions>) };
    inline AlertRuleSlsQueryJoin& setConditions(const vector<AlertRuleSlsQueryJoin::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline AlertRuleSlsQueryJoin& setConditions(vector<AlertRuleSlsQueryJoin::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleSlsQueryJoin& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // List of connection conditions.
    shared_ptr<vector<AlertRuleSlsQueryJoin::Conditions>> conditions_ {};
    // Set operation type.
    // CrossJoin: Cartesian product
    // FullJoin: Full outer join
    // InnerJoin: Inner join
    // LeftExclude: Left anti join
    // RightExclude: Right anti join
    // LeftJoin: Left outer join
    // RightJoin: Right outer join
    // NoJoin: No merge
    // Concat: Concatenation
    // 
    // See also: https://help.aliyun.com/zh/sls/user-guide/set-query-statistics-statement
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
