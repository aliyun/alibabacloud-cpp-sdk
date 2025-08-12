// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICFILTERDEF_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICFILTERDEF_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlertRuleAlertMetricFilterDefSupportedOpts.hpp>
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
    virtual bool empty() const override { this->dim_ != nullptr
        && this->dimDisabled_ != nullptr && this->displayNameCn_ != nullptr && this->displayNameEn_ != nullptr && this->hidden_ != nullptr && this->labelDisabled_ != nullptr
        && this->opt_ != nullptr && this->supportedOpts_ != nullptr; };
    // dim Field Functions 
    bool hasDim() const { return this->dim_ != nullptr;};
    void deleteDim() { this->dim_ = nullptr;};
    inline string dim() const { DARABONBA_PTR_GET_DEFAULT(dim_, "") };
    inline AlertRuleAlertMetricFilterDef& setDim(string dim) { DARABONBA_PTR_SET_VALUE(dim_, dim) };


    // dimDisabled Field Functions 
    bool hasDimDisabled() const { return this->dimDisabled_ != nullptr;};
    void deleteDimDisabled() { this->dimDisabled_ = nullptr;};
    inline bool dimDisabled() const { DARABONBA_PTR_GET_DEFAULT(dimDisabled_, false) };
    inline AlertRuleAlertMetricFilterDef& setDimDisabled(bool dimDisabled) { DARABONBA_PTR_SET_VALUE(dimDisabled_, dimDisabled) };


    // displayNameCn Field Functions 
    bool hasDisplayNameCn() const { return this->displayNameCn_ != nullptr;};
    void deleteDisplayNameCn() { this->displayNameCn_ = nullptr;};
    inline string displayNameCn() const { DARABONBA_PTR_GET_DEFAULT(displayNameCn_, "") };
    inline AlertRuleAlertMetricFilterDef& setDisplayNameCn(string displayNameCn) { DARABONBA_PTR_SET_VALUE(displayNameCn_, displayNameCn) };


    // displayNameEn Field Functions 
    bool hasDisplayNameEn() const { return this->displayNameEn_ != nullptr;};
    void deleteDisplayNameEn() { this->displayNameEn_ = nullptr;};
    inline string displayNameEn() const { DARABONBA_PTR_GET_DEFAULT(displayNameEn_, "") };
    inline AlertRuleAlertMetricFilterDef& setDisplayNameEn(string displayNameEn) { DARABONBA_PTR_SET_VALUE(displayNameEn_, displayNameEn) };


    // hidden Field Functions 
    bool hasHidden() const { return this->hidden_ != nullptr;};
    void deleteHidden() { this->hidden_ = nullptr;};
    inline bool hidden() const { DARABONBA_PTR_GET_DEFAULT(hidden_, false) };
    inline AlertRuleAlertMetricFilterDef& setHidden(bool hidden) { DARABONBA_PTR_SET_VALUE(hidden_, hidden) };


    // labelDisabled Field Functions 
    bool hasLabelDisabled() const { return this->labelDisabled_ != nullptr;};
    void deleteLabelDisabled() { this->labelDisabled_ = nullptr;};
    inline bool labelDisabled() const { DARABONBA_PTR_GET_DEFAULT(labelDisabled_, false) };
    inline AlertRuleAlertMetricFilterDef& setLabelDisabled(bool labelDisabled) { DARABONBA_PTR_SET_VALUE(labelDisabled_, labelDisabled) };


    // opt Field Functions 
    bool hasOpt() const { return this->opt_ != nullptr;};
    void deleteOpt() { this->opt_ = nullptr;};
    inline string opt() const { DARABONBA_PTR_GET_DEFAULT(opt_, "") };
    inline AlertRuleAlertMetricFilterDef& setOpt(string opt) { DARABONBA_PTR_SET_VALUE(opt_, opt) };


    // supportedOpts Field Functions 
    bool hasSupportedOpts() const { return this->supportedOpts_ != nullptr;};
    void deleteSupportedOpts() { this->supportedOpts_ = nullptr;};
    inline const vector<AlertRuleAlertMetricFilterDefSupportedOpts> & supportedOpts() const { DARABONBA_PTR_GET_CONST(supportedOpts_, vector<AlertRuleAlertMetricFilterDefSupportedOpts>) };
    inline vector<AlertRuleAlertMetricFilterDefSupportedOpts> supportedOpts() { DARABONBA_PTR_GET(supportedOpts_, vector<AlertRuleAlertMetricFilterDefSupportedOpts>) };
    inline AlertRuleAlertMetricFilterDef& setSupportedOpts(const vector<AlertRuleAlertMetricFilterDefSupportedOpts> & supportedOpts) { DARABONBA_PTR_SET_VALUE(supportedOpts_, supportedOpts) };
    inline AlertRuleAlertMetricFilterDef& setSupportedOpts(vector<AlertRuleAlertMetricFilterDefSupportedOpts> && supportedOpts) { DARABONBA_PTR_SET_RVALUE(supportedOpts_, supportedOpts) };


  protected:
    std::shared_ptr<string> dim_ = nullptr;
    std::shared_ptr<bool> dimDisabled_ = nullptr;
    std::shared_ptr<string> displayNameCn_ = nullptr;
    std::shared_ptr<string> displayNameEn_ = nullptr;
    std::shared_ptr<bool> hidden_ = nullptr;
    std::shared_ptr<bool> labelDisabled_ = nullptr;
    std::shared_ptr<string> opt_ = nullptr;
    std::shared_ptr<vector<AlertRuleAlertMetricFilterDefSupportedOpts>> supportedOpts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
