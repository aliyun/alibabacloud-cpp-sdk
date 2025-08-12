// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICPARAMDEFVALUES_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICPARAMDEFVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleAlertMetricParamDefValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleAlertMetricParamDefValues& obj) { 
      DARABONBA_PTR_TO_JSON(labelCn, labelCn_);
      DARABONBA_PTR_TO_JSON(labelEn, labelEn_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleAlertMetricParamDefValues& obj) { 
      DARABONBA_PTR_FROM_JSON(labelCn, labelCn_);
      DARABONBA_PTR_FROM_JSON(labelEn, labelEn_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    AlertRuleAlertMetricParamDefValues() = default ;
    AlertRuleAlertMetricParamDefValues(const AlertRuleAlertMetricParamDefValues &) = default ;
    AlertRuleAlertMetricParamDefValues(AlertRuleAlertMetricParamDefValues &&) = default ;
    AlertRuleAlertMetricParamDefValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleAlertMetricParamDefValues() = default ;
    AlertRuleAlertMetricParamDefValues& operator=(const AlertRuleAlertMetricParamDefValues &) = default ;
    AlertRuleAlertMetricParamDefValues& operator=(AlertRuleAlertMetricParamDefValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labelCn_ != nullptr
        && this->labelEn_ != nullptr && this->value_ != nullptr; };
    // labelCn Field Functions 
    bool hasLabelCn() const { return this->labelCn_ != nullptr;};
    void deleteLabelCn() { this->labelCn_ = nullptr;};
    inline string labelCn() const { DARABONBA_PTR_GET_DEFAULT(labelCn_, "") };
    inline AlertRuleAlertMetricParamDefValues& setLabelCn(string labelCn) { DARABONBA_PTR_SET_VALUE(labelCn_, labelCn) };


    // labelEn Field Functions 
    bool hasLabelEn() const { return this->labelEn_ != nullptr;};
    void deleteLabelEn() { this->labelEn_ = nullptr;};
    inline string labelEn() const { DARABONBA_PTR_GET_DEFAULT(labelEn_, "") };
    inline AlertRuleAlertMetricParamDefValues& setLabelEn(string labelEn) { DARABONBA_PTR_SET_VALUE(labelEn_, labelEn) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AlertRuleAlertMetricParamDefValues& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> labelCn_ = nullptr;
    std::shared_ptr<string> labelEn_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
