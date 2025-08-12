// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMETRICRULETEMPLATEREQUESTALERTTEMPLATESESCALATIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMETRICRULETEMPLATEREQUESTALERTTEMPLATESESCALATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsCritical.hpp>
#include <alibabacloud/models/ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsInfo.hpp>
#include <alibabacloud/models/ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsWarn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyMetricRuleTemplateRequestAlertTemplatesEscalations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMetricRuleTemplateRequestAlertTemplatesEscalations& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Warn, warn_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMetricRuleTemplateRequestAlertTemplatesEscalations& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Warn, warn_);
    };
    ModifyMetricRuleTemplateRequestAlertTemplatesEscalations() = default ;
    ModifyMetricRuleTemplateRequestAlertTemplatesEscalations(const ModifyMetricRuleTemplateRequestAlertTemplatesEscalations &) = default ;
    ModifyMetricRuleTemplateRequestAlertTemplatesEscalations(ModifyMetricRuleTemplateRequestAlertTemplatesEscalations &&) = default ;
    ModifyMetricRuleTemplateRequestAlertTemplatesEscalations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMetricRuleTemplateRequestAlertTemplatesEscalations() = default ;
    ModifyMetricRuleTemplateRequestAlertTemplatesEscalations& operator=(const ModifyMetricRuleTemplateRequestAlertTemplatesEscalations &) = default ;
    ModifyMetricRuleTemplateRequestAlertTemplatesEscalations& operator=(ModifyMetricRuleTemplateRequestAlertTemplatesEscalations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->critical_ != nullptr
        && this->info_ != nullptr && this->warn_ != nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsCritical) };
    inline Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsCritical critical() { DARABONBA_PTR_GET(critical_, Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsCritical) };
    inline ModifyMetricRuleTemplateRequestAlertTemplatesEscalations& setCritical(const Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline ModifyMetricRuleTemplateRequestAlertTemplatesEscalations& setCritical(Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsInfo & info() const { DARABONBA_PTR_GET_CONST(info_, Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsInfo) };
    inline Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsInfo info() { DARABONBA_PTR_GET(info_, Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsInfo) };
    inline ModifyMetricRuleTemplateRequestAlertTemplatesEscalations& setInfo(const Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsInfo & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline ModifyMetricRuleTemplateRequestAlertTemplatesEscalations& setInfo(Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsInfo && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // warn Field Functions 
    bool hasWarn() const { return this->warn_ != nullptr;};
    void deleteWarn() { this->warn_ = nullptr;};
    inline const Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsWarn & warn() const { DARABONBA_PTR_GET_CONST(warn_, Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsWarn) };
    inline Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsWarn warn() { DARABONBA_PTR_GET(warn_, Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsWarn) };
    inline ModifyMetricRuleTemplateRequestAlertTemplatesEscalations& setWarn(const Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsWarn & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
    inline ModifyMetricRuleTemplateRequestAlertTemplatesEscalations& setWarn(Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsWarn && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


  protected:
    std::shared_ptr<Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsCritical> critical_ = nullptr;
    std::shared_ptr<Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsInfo> info_ = nullptr;
    std::shared_ptr<Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalationsWarn> warn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
