// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTRULESRESPONSEBODYPAGEBEANALERTRULESFILTERSCUSTOMSLSFILTERS_HPP_
#define ALIBABACLOUD_MODELS_GETALERTRULESRESPONSEBODYPAGEBEANALERTRULESFILTERSCUSTOMSLSFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Opt, opt_);
      DARABONBA_PTR_TO_JSON(Show, show_);
      DARABONBA_PTR_TO_JSON(T, t_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Opt, opt_);
      DARABONBA_PTR_FROM_JSON(Show, show_);
      DARABONBA_PTR_FROM_JSON(T, t_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters() = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters(const GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters &) = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters(GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters &&) = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters() = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters& operator=(const GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters &) = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters& operator=(GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->opt_ != nullptr && this->show_ != nullptr && this->t_ != nullptr && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // opt Field Functions 
    bool hasOpt() const { return this->opt_ != nullptr;};
    void deleteOpt() { this->opt_ = nullptr;};
    inline string opt() const { DARABONBA_PTR_GET_DEFAULT(opt_, "") };
    inline GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters& setOpt(string opt) { DARABONBA_PTR_SET_VALUE(opt_, opt) };


    // show Field Functions 
    bool hasShow() const { return this->show_ != nullptr;};
    void deleteShow() { this->show_ = nullptr;};
    inline bool show() const { DARABONBA_PTR_GET_DEFAULT(show_, false) };
    inline GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters& setShow(bool show) { DARABONBA_PTR_SET_VALUE(show_, show) };


    // t Field Functions 
    bool hasT() const { return this->t_ != nullptr;};
    void deleteT() { this->t_ = nullptr;};
    inline string t() const { DARABONBA_PTR_GET_DEFAULT(t_, "") };
    inline GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters& setT(string t) { DARABONBA_PTR_SET_VALUE(t_, t) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetAlertRulesResponseBodyPageBeanAlertRulesFiltersCustomSLSFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the filter condition.
    std::shared_ptr<string> key_ = nullptr;
    // The logical operator of the filter condition. Valid values:
    // 
    // *   \\=: equal to
    // *   not: not equal to
    std::shared_ptr<string> opt_ = nullptr;
    // Indicates whether this filter condition is displayed on the frontend.
    std::shared_ptr<bool> show_ = nullptr;
    // The log type of Browser Monitoring. This field is not included in other filter conditions.
    std::shared_ptr<string> t_ = nullptr;
    // The value of the filter condition.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
