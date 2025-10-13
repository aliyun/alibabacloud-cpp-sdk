// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULESLSQUERYJOINCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULESLSQUERYJOINCONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleSlsQueryJoinConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleSlsQueryJoinConditions& obj) { 
      DARABONBA_PTR_TO_JSON(firstField, firstField_);
      DARABONBA_PTR_TO_JSON(oper, oper_);
      DARABONBA_PTR_TO_JSON(secondField, secondField_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleSlsQueryJoinConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(firstField, firstField_);
      DARABONBA_PTR_FROM_JSON(oper, oper_);
      DARABONBA_PTR_FROM_JSON(secondField, secondField_);
    };
    AlertRuleSlsQueryJoinConditions() = default ;
    AlertRuleSlsQueryJoinConditions(const AlertRuleSlsQueryJoinConditions &) = default ;
    AlertRuleSlsQueryJoinConditions(AlertRuleSlsQueryJoinConditions &&) = default ;
    AlertRuleSlsQueryJoinConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleSlsQueryJoinConditions() = default ;
    AlertRuleSlsQueryJoinConditions& operator=(const AlertRuleSlsQueryJoinConditions &) = default ;
    AlertRuleSlsQueryJoinConditions& operator=(AlertRuleSlsQueryJoinConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firstField_ == nullptr
        && return this->oper_ == nullptr && return this->secondField_ == nullptr; };
    // firstField Field Functions 
    bool hasFirstField() const { return this->firstField_ != nullptr;};
    void deleteFirstField() { this->firstField_ = nullptr;};
    inline string firstField() const { DARABONBA_PTR_GET_DEFAULT(firstField_, "") };
    inline AlertRuleSlsQueryJoinConditions& setFirstField(string firstField) { DARABONBA_PTR_SET_VALUE(firstField_, firstField) };


    // oper Field Functions 
    bool hasOper() const { return this->oper_ != nullptr;};
    void deleteOper() { this->oper_ = nullptr;};
    inline string oper() const { DARABONBA_PTR_GET_DEFAULT(oper_, "") };
    inline AlertRuleSlsQueryJoinConditions& setOper(string oper) { DARABONBA_PTR_SET_VALUE(oper_, oper) };


    // secondField Field Functions 
    bool hasSecondField() const { return this->secondField_ != nullptr;};
    void deleteSecondField() { this->secondField_ = nullptr;};
    inline string secondField() const { DARABONBA_PTR_GET_DEFAULT(secondField_, "") };
    inline AlertRuleSlsQueryJoinConditions& setSecondField(string secondField) { DARABONBA_PTR_SET_VALUE(secondField_, secondField) };


  protected:
    // 条件的左操作参数，格式为$<query_idx>.<结果集字段名>
    std::shared_ptr<string> firstField_ = nullptr;
    // <, >, ==, !=, <=, >=
    std::shared_ptr<string> oper_ = nullptr;
    // 条件的右操作参数，格式为$<query_idx>.<结果集字段名>
    std::shared_ptr<string> secondField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
