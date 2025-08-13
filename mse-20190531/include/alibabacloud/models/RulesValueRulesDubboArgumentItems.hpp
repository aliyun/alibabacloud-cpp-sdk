// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RULESVALUERULESDUBBOARGUMENTITEMS_HPP_
#define ALIBABACLOUD_MODELS_RULESVALUERULESDUBBOARGUMENTITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class RulesValueRulesDubboArgumentItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RulesValueRulesDubboArgumentItems& obj) { 
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(nameList, nameList_);
      DARABONBA_PTR_TO_JSON(datum, datum_);
      DARABONBA_PTR_TO_JSON(cond, cond_);
      DARABONBA_PTR_TO_JSON(divisor, divisor_);
      DARABONBA_PTR_TO_JSON(remainder, remainder_);
      DARABONBA_PTR_TO_JSON(rate, rate_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(expr, expr_);
      DARABONBA_ANY_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, RulesValueRulesDubboArgumentItems& obj) { 
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(nameList, nameList_);
      DARABONBA_PTR_FROM_JSON(datum, datum_);
      DARABONBA_PTR_FROM_JSON(cond, cond_);
      DARABONBA_PTR_FROM_JSON(divisor, divisor_);
      DARABONBA_PTR_FROM_JSON(remainder, remainder_);
      DARABONBA_PTR_FROM_JSON(rate, rate_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(expr, expr_);
      DARABONBA_ANY_FROM_JSON(value, value_);
    };
    RulesValueRulesDubboArgumentItems() = default ;
    RulesValueRulesDubboArgumentItems(const RulesValueRulesDubboArgumentItems &) = default ;
    RulesValueRulesDubboArgumentItems(RulesValueRulesDubboArgumentItems &&) = default ;
    RulesValueRulesDubboArgumentItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RulesValueRulesDubboArgumentItems() = default ;
    RulesValueRulesDubboArgumentItems& operator=(const RulesValueRulesDubboArgumentItems &) = default ;
    RulesValueRulesDubboArgumentItems& operator=(RulesValueRulesDubboArgumentItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operator_ != nullptr
        && this->nameList_ != nullptr && this->datum_ != nullptr && this->cond_ != nullptr && this->divisor_ != nullptr && this->remainder_ != nullptr
        && this->rate_ != nullptr && this->index_ != nullptr && this->expr_ != nullptr && this->value_ != nullptr; };
    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline RulesValueRulesDubboArgumentItems& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // nameList Field Functions 
    bool hasNameList() const { return this->nameList_ != nullptr;};
    void deleteNameList() { this->nameList_ = nullptr;};
    inline const vector<string> & nameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
    inline vector<string> nameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
    inline RulesValueRulesDubboArgumentItems& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
    inline RulesValueRulesDubboArgumentItems& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


    // datum Field Functions 
    bool hasDatum() const { return this->datum_ != nullptr;};
    void deleteDatum() { this->datum_ = nullptr;};
    inline string datum() const { DARABONBA_PTR_GET_DEFAULT(datum_, "") };
    inline RulesValueRulesDubboArgumentItems& setDatum(string datum) { DARABONBA_PTR_SET_VALUE(datum_, datum) };


    // cond Field Functions 
    bool hasCond() const { return this->cond_ != nullptr;};
    void deleteCond() { this->cond_ = nullptr;};
    inline string cond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
    inline RulesValueRulesDubboArgumentItems& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


    // divisor Field Functions 
    bool hasDivisor() const { return this->divisor_ != nullptr;};
    void deleteDivisor() { this->divisor_ = nullptr;};
    inline int32_t divisor() const { DARABONBA_PTR_GET_DEFAULT(divisor_, 0) };
    inline RulesValueRulesDubboArgumentItems& setDivisor(int32_t divisor) { DARABONBA_PTR_SET_VALUE(divisor_, divisor) };


    // remainder Field Functions 
    bool hasRemainder() const { return this->remainder_ != nullptr;};
    void deleteRemainder() { this->remainder_ = nullptr;};
    inline int32_t remainder() const { DARABONBA_PTR_GET_DEFAULT(remainder_, 0) };
    inline RulesValueRulesDubboArgumentItems& setRemainder(int32_t remainder) { DARABONBA_PTR_SET_VALUE(remainder_, remainder) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline int32_t rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
    inline RulesValueRulesDubboArgumentItems& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline RulesValueRulesDubboArgumentItems& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string expr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline RulesValueRulesDubboArgumentItems& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline RulesValueRulesDubboArgumentItems& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline RulesValueRulesDubboArgumentItems& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<vector<string>> nameList_ = nullptr;
    std::shared_ptr<string> datum_ = nullptr;
    std::shared_ptr<string> cond_ = nullptr;
    std::shared_ptr<int32_t> divisor_ = nullptr;
    std::shared_ptr<int32_t> remainder_ = nullptr;
    std::shared_ptr<int32_t> rate_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<string> expr_ = nullptr;
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
