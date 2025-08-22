// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSECSPECINFORESPONSEBODYSPECINFOSRULECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSECSPECINFORESPONSEBODYSPECINFOSRULECONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Expr, expr_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Expr, expr_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs() = default ;
    DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs(const DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs &) = default ;
    DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs(DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs &&) = default ;
    DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs() = default ;
    DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs& operator=(const DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs &) = default ;
    DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs& operator=(DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->expr_ != nullptr && this->value_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string expr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The configuration code of the security rule.
    std::shared_ptr<string> code_ = nullptr;
    // The configuration expression of the security rule.
    std::shared_ptr<string> expr_ = nullptr;
    // The value of the configuration expression of the security rule.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
