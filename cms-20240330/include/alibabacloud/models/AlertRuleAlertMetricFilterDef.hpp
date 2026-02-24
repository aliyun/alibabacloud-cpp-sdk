// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICFILTERDEF_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICFILTERDEF_HPP_
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
  class AlertRuleAlertMetricFilterDef : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleAlertMetricFilterDef& obj) { 
      DARABONBA_PTR_TO_JSON(dim, dim_);
      DARABONBA_PTR_TO_JSON(dimDisabled, dimDisabled_);
      DARABONBA_PTR_TO_JSON(displayNameCn, displayNameCn_);
      DARABONBA_PTR_TO_JSON(displayNameEn, displayNameEn_);
      DARABONBA_PTR_TO_JSON(hidden, hidden_);
      DARABONBA_PTR_TO_JSON(labelDisabled, labelDisabled_);
      DARABONBA_PTR_TO_JSON(opt, opt_);
      DARABONBA_PTR_TO_JSON(supportedOpts, supportedOpts_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleAlertMetricFilterDef& obj) { 
      DARABONBA_PTR_FROM_JSON(dim, dim_);
      DARABONBA_PTR_FROM_JSON(dimDisabled, dimDisabled_);
      DARABONBA_PTR_FROM_JSON(displayNameCn, displayNameCn_);
      DARABONBA_PTR_FROM_JSON(displayNameEn, displayNameEn_);
      DARABONBA_PTR_FROM_JSON(hidden, hidden_);
      DARABONBA_PTR_FROM_JSON(labelDisabled, labelDisabled_);
      DARABONBA_PTR_FROM_JSON(opt, opt_);
      DARABONBA_PTR_FROM_JSON(supportedOpts, supportedOpts_);
    };
    AlertRuleAlertMetricFilterDef() = default ;
    AlertRuleAlertMetricFilterDef(const AlertRuleAlertMetricFilterDef &) = default ;
    AlertRuleAlertMetricFilterDef(AlertRuleAlertMetricFilterDef &&) = default ;
    AlertRuleAlertMetricFilterDef(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleAlertMetricFilterDef() = default ;
    AlertRuleAlertMetricFilterDef& operator=(const AlertRuleAlertMetricFilterDef &) = default ;
    AlertRuleAlertMetricFilterDef& operator=(AlertRuleAlertMetricFilterDef &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SupportedOpts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportedOpts& obj) { 
        DARABONBA_PTR_TO_JSON(displayNameCn, displayNameCn_);
        DARABONBA_PTR_TO_JSON(displayNameEn, displayNameEn_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SupportedOpts& obj) { 
        DARABONBA_PTR_FROM_JSON(displayNameCn, displayNameCn_);
        DARABONBA_PTR_FROM_JSON(displayNameEn, displayNameEn_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      SupportedOpts() = default ;
      SupportedOpts(const SupportedOpts &) = default ;
      SupportedOpts(SupportedOpts &&) = default ;
      SupportedOpts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportedOpts() = default ;
      SupportedOpts& operator=(const SupportedOpts &) = default ;
      SupportedOpts& operator=(SupportedOpts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayNameCn_ == nullptr
        && this->displayNameEn_ == nullptr && this->value_ == nullptr; };
      // displayNameCn Field Functions 
      bool hasDisplayNameCn() const { return this->displayNameCn_ != nullptr;};
      void deleteDisplayNameCn() { this->displayNameCn_ = nullptr;};
      inline string getDisplayNameCn() const { DARABONBA_PTR_GET_DEFAULT(displayNameCn_, "") };
      inline SupportedOpts& setDisplayNameCn(string displayNameCn) { DARABONBA_PTR_SET_VALUE(displayNameCn_, displayNameCn) };


      // displayNameEn Field Functions 
      bool hasDisplayNameEn() const { return this->displayNameEn_ != nullptr;};
      void deleteDisplayNameEn() { this->displayNameEn_ = nullptr;};
      inline string getDisplayNameEn() const { DARABONBA_PTR_GET_DEFAULT(displayNameEn_, "") };
      inline SupportedOpts& setDisplayNameEn(string displayNameEn) { DARABONBA_PTR_SET_VALUE(displayNameEn_, displayNameEn) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline SupportedOpts& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Display Name (Chinese).
      shared_ptr<string> displayNameCn_ {};
      // Display Name (English).
      shared_ptr<string> displayNameEn_ {};
      // Matching value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->dim_ == nullptr
        && this->dimDisabled_ == nullptr && this->displayNameCn_ == nullptr && this->displayNameEn_ == nullptr && this->hidden_ == nullptr && this->labelDisabled_ == nullptr
        && this->opt_ == nullptr && this->supportedOpts_ == nullptr; };
    // dim Field Functions 
    bool hasDim() const { return this->dim_ != nullptr;};
    void deleteDim() { this->dim_ = nullptr;};
    inline string getDim() const { DARABONBA_PTR_GET_DEFAULT(dim_, "") };
    inline AlertRuleAlertMetricFilterDef& setDim(string dim) { DARABONBA_PTR_SET_VALUE(dim_, dim) };


    // dimDisabled Field Functions 
    bool hasDimDisabled() const { return this->dimDisabled_ != nullptr;};
    void deleteDimDisabled() { this->dimDisabled_ = nullptr;};
    inline bool getDimDisabled() const { DARABONBA_PTR_GET_DEFAULT(dimDisabled_, false) };
    inline AlertRuleAlertMetricFilterDef& setDimDisabled(bool dimDisabled) { DARABONBA_PTR_SET_VALUE(dimDisabled_, dimDisabled) };


    // displayNameCn Field Functions 
    bool hasDisplayNameCn() const { return this->displayNameCn_ != nullptr;};
    void deleteDisplayNameCn() { this->displayNameCn_ = nullptr;};
    inline string getDisplayNameCn() const { DARABONBA_PTR_GET_DEFAULT(displayNameCn_, "") };
    inline AlertRuleAlertMetricFilterDef& setDisplayNameCn(string displayNameCn) { DARABONBA_PTR_SET_VALUE(displayNameCn_, displayNameCn) };


    // displayNameEn Field Functions 
    bool hasDisplayNameEn() const { return this->displayNameEn_ != nullptr;};
    void deleteDisplayNameEn() { this->displayNameEn_ = nullptr;};
    inline string getDisplayNameEn() const { DARABONBA_PTR_GET_DEFAULT(displayNameEn_, "") };
    inline AlertRuleAlertMetricFilterDef& setDisplayNameEn(string displayNameEn) { DARABONBA_PTR_SET_VALUE(displayNameEn_, displayNameEn) };


    // hidden Field Functions 
    bool hasHidden() const { return this->hidden_ != nullptr;};
    void deleteHidden() { this->hidden_ = nullptr;};
    inline bool getHidden() const { DARABONBA_PTR_GET_DEFAULT(hidden_, false) };
    inline AlertRuleAlertMetricFilterDef& setHidden(bool hidden) { DARABONBA_PTR_SET_VALUE(hidden_, hidden) };


    // labelDisabled Field Functions 
    bool hasLabelDisabled() const { return this->labelDisabled_ != nullptr;};
    void deleteLabelDisabled() { this->labelDisabled_ = nullptr;};
    inline bool getLabelDisabled() const { DARABONBA_PTR_GET_DEFAULT(labelDisabled_, false) };
    inline AlertRuleAlertMetricFilterDef& setLabelDisabled(bool labelDisabled) { DARABONBA_PTR_SET_VALUE(labelDisabled_, labelDisabled) };


    // opt Field Functions 
    bool hasOpt() const { return this->opt_ != nullptr;};
    void deleteOpt() { this->opt_ = nullptr;};
    inline string getOpt() const { DARABONBA_PTR_GET_DEFAULT(opt_, "") };
    inline AlertRuleAlertMetricFilterDef& setOpt(string opt) { DARABONBA_PTR_SET_VALUE(opt_, opt) };


    // supportedOpts Field Functions 
    bool hasSupportedOpts() const { return this->supportedOpts_ != nullptr;};
    void deleteSupportedOpts() { this->supportedOpts_ = nullptr;};
    inline const vector<AlertRuleAlertMetricFilterDef::SupportedOpts> & getSupportedOpts() const { DARABONBA_PTR_GET_CONST(supportedOpts_, vector<AlertRuleAlertMetricFilterDef::SupportedOpts>) };
    inline vector<AlertRuleAlertMetricFilterDef::SupportedOpts> getSupportedOpts() { DARABONBA_PTR_GET(supportedOpts_, vector<AlertRuleAlertMetricFilterDef::SupportedOpts>) };
    inline AlertRuleAlertMetricFilterDef& setSupportedOpts(const vector<AlertRuleAlertMetricFilterDef::SupportedOpts> & supportedOpts) { DARABONBA_PTR_SET_VALUE(supportedOpts_, supportedOpts) };
    inline AlertRuleAlertMetricFilterDef& setSupportedOpts(vector<AlertRuleAlertMetricFilterDef::SupportedOpts> && supportedOpts) { DARABONBA_PTR_SET_RVALUE(supportedOpts_, supportedOpts) };


  protected:
    // Dimension in APM metrics.
    shared_ptr<string> dim_ {};
    // When true, the filter item will not appear in the GROUP BY clause of the PromQL.
    shared_ptr<bool> dimDisabled_ {};
    // Display Name (Chinese).
    shared_ptr<string> displayNameCn_ {};
    // Display Name (English).
    shared_ptr<string> displayNameEn_ {};
    // Whether to hide. If hidden, it will not be displayed in the frontend UI, but its value can still be included when rendering the PromQL. A typical example is the "pid" filter condition in APM scenarios, which is generally not exposed through configurable UI elements but instead presented as a separate application search list in the frontend.
    shared_ptr<bool> hidden_ {};
    // When true, the filter item will not appear in the label filter of the PromQL.
    shared_ptr<bool> labelDisabled_ {};
    // Filter Condition Operator.
    shared_ptr<string> opt_ {};
    // List of supported options.
    shared_ptr<vector<AlertRuleAlertMetricFilterDef::SupportedOpts>> supportedOpts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
