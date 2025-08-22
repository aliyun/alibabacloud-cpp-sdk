// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDDOSSPECINFORESPONSEBODYSPECINFOSCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDDOSSPECINFORESPONSEBODYSPECINFOSCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Expr, expr_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Expr, expr_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs() = default ;
    DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs(const DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs &) = default ;
    DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs(DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs &&) = default ;
    DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs() = default ;
    DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs& operator=(const DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs &) = default ;
    DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs& operator=(DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs &&) = default ;
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
    inline DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string expr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDcdnDdosSpecInfoResponseBodySpecInfosConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The configuration code of the version rule. Valid values:
    // 
    // *   **total_defense_num**: the total number of mitigation sessions of the version.
    // *   **consume_defense_num**: the number of used mitigation sessions of the version.
    // *   **max_domain_num**: the limit on the number of added domain names.
    // *   **emain_domain_num**: the number of added domain names.
    // *   **defence_package_num**: the total number of purchased additional mitigation sessions.
    // *   **consume_defence_package_num**: the number of used additional mitigation sessions.
    std::shared_ptr<string> config_ = nullptr;
    // The configuration expression of the version rule.
    std::shared_ptr<string> expr_ = nullptr;
    // The value of the configuration expression of the version rule.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
