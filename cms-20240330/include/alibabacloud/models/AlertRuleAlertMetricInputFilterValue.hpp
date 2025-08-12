// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICINPUTFILTERVALUE_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICINPUTFILTERVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleAlertMetricInputFilterValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleAlertMetricInputFilterValue& obj) { 
      DARABONBA_PTR_TO_JSON(dim, dim_);
      DARABONBA_PTR_TO_JSON(opt, opt_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleAlertMetricInputFilterValue& obj) { 
      DARABONBA_PTR_FROM_JSON(dim, dim_);
      DARABONBA_PTR_FROM_JSON(opt, opt_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    AlertRuleAlertMetricInputFilterValue() = default ;
    AlertRuleAlertMetricInputFilterValue(const AlertRuleAlertMetricInputFilterValue &) = default ;
    AlertRuleAlertMetricInputFilterValue(AlertRuleAlertMetricInputFilterValue &&) = default ;
    AlertRuleAlertMetricInputFilterValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleAlertMetricInputFilterValue() = default ;
    AlertRuleAlertMetricInputFilterValue& operator=(const AlertRuleAlertMetricInputFilterValue &) = default ;
    AlertRuleAlertMetricInputFilterValue& operator=(AlertRuleAlertMetricInputFilterValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dim_ != nullptr
        && this->opt_ != nullptr && this->value_ != nullptr; };
    // dim Field Functions 
    bool hasDim() const { return this->dim_ != nullptr;};
    void deleteDim() { this->dim_ = nullptr;};
    inline string dim() const { DARABONBA_PTR_GET_DEFAULT(dim_, "") };
    inline AlertRuleAlertMetricInputFilterValue& setDim(string dim) { DARABONBA_PTR_SET_VALUE(dim_, dim) };


    // opt Field Functions 
    bool hasOpt() const { return this->opt_ != nullptr;};
    void deleteOpt() { this->opt_ = nullptr;};
    inline string opt() const { DARABONBA_PTR_GET_DEFAULT(opt_, "") };
    inline AlertRuleAlertMetricInputFilterValue& setOpt(string opt) { DARABONBA_PTR_SET_VALUE(opt_, opt) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AlertRuleAlertMetricInputFilterValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dim_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> opt_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
