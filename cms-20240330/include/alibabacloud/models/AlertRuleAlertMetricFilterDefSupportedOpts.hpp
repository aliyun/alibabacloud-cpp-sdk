// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICFILTERDEFSUPPORTEDOPTS_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICFILTERDEFSUPPORTEDOPTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleAlertMetricFilterDefSupportedOpts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleAlertMetricFilterDefSupportedOpts& obj) { 
      DARABONBA_PTR_TO_JSON(displayNameCn, displayNameCn_);
      DARABONBA_PTR_TO_JSON(displayNameEn, displayNameEn_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleAlertMetricFilterDefSupportedOpts& obj) { 
      DARABONBA_PTR_FROM_JSON(displayNameCn, displayNameCn_);
      DARABONBA_PTR_FROM_JSON(displayNameEn, displayNameEn_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    AlertRuleAlertMetricFilterDefSupportedOpts() = default ;
    AlertRuleAlertMetricFilterDefSupportedOpts(const AlertRuleAlertMetricFilterDefSupportedOpts &) = default ;
    AlertRuleAlertMetricFilterDefSupportedOpts(AlertRuleAlertMetricFilterDefSupportedOpts &&) = default ;
    AlertRuleAlertMetricFilterDefSupportedOpts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleAlertMetricFilterDefSupportedOpts() = default ;
    AlertRuleAlertMetricFilterDefSupportedOpts& operator=(const AlertRuleAlertMetricFilterDefSupportedOpts &) = default ;
    AlertRuleAlertMetricFilterDefSupportedOpts& operator=(AlertRuleAlertMetricFilterDefSupportedOpts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayNameCn_ != nullptr
        && this->displayNameEn_ != nullptr && this->value_ != nullptr; };
    // displayNameCn Field Functions 
    bool hasDisplayNameCn() const { return this->displayNameCn_ != nullptr;};
    void deleteDisplayNameCn() { this->displayNameCn_ = nullptr;};
    inline string displayNameCn() const { DARABONBA_PTR_GET_DEFAULT(displayNameCn_, "") };
    inline AlertRuleAlertMetricFilterDefSupportedOpts& setDisplayNameCn(string displayNameCn) { DARABONBA_PTR_SET_VALUE(displayNameCn_, displayNameCn) };


    // displayNameEn Field Functions 
    bool hasDisplayNameEn() const { return this->displayNameEn_ != nullptr;};
    void deleteDisplayNameEn() { this->displayNameEn_ = nullptr;};
    inline string displayNameEn() const { DARABONBA_PTR_GET_DEFAULT(displayNameEn_, "") };
    inline AlertRuleAlertMetricFilterDefSupportedOpts& setDisplayNameEn(string displayNameEn) { DARABONBA_PTR_SET_VALUE(displayNameEn_, displayNameEn) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AlertRuleAlertMetricFilterDefSupportedOpts& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> displayNameCn_ = nullptr;
    std::shared_ptr<string> displayNameEn_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
