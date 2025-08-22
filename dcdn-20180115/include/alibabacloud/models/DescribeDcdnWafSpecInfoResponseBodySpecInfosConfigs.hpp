// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSPECINFORESPONSEBODYSPECINFOSCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSPECINFORESPONSEBODYSPECINFOSCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Expr, expr_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Expr, expr_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs() = default ;
    DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs(const DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs &) = default ;
    DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs(DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs &&) = default ;
    DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs() = default ;
    DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs& operator=(const DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs &) = default ;
    DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs& operator=(DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->expr_ != nullptr && this->value_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string expr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDcdnWafSpecInfoResponseBodySpecInfosConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The configuration code of the protection rule.
    std::shared_ptr<string> config_ = nullptr;
    // The configuration expression of the protection rule.
    std::shared_ptr<string> expr_ = nullptr;
    // The value of the configuration expression of the protection rule.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
