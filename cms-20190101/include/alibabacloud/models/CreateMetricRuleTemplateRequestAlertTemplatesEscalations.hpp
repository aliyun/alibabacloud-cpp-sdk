// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMETRICRULETEMPLATEREQUESTALERTTEMPLATESESCALATIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMETRICRULETEMPLATEREQUESTALERTTEMPLATESESCALATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical.hpp>
#include <alibabacloud/models/CreateMetricRuleTemplateRequestAlertTemplatesEscalationsInfo.hpp>
#include <alibabacloud/models/CreateMetricRuleTemplateRequestAlertTemplatesEscalationsWarn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateMetricRuleTemplateRequestAlertTemplatesEscalations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMetricRuleTemplateRequestAlertTemplatesEscalations& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Warn, warn_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMetricRuleTemplateRequestAlertTemplatesEscalations& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Warn, warn_);
    };
    CreateMetricRuleTemplateRequestAlertTemplatesEscalations() = default ;
    CreateMetricRuleTemplateRequestAlertTemplatesEscalations(const CreateMetricRuleTemplateRequestAlertTemplatesEscalations &) = default ;
    CreateMetricRuleTemplateRequestAlertTemplatesEscalations(CreateMetricRuleTemplateRequestAlertTemplatesEscalations &&) = default ;
    CreateMetricRuleTemplateRequestAlertTemplatesEscalations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMetricRuleTemplateRequestAlertTemplatesEscalations() = default ;
    CreateMetricRuleTemplateRequestAlertTemplatesEscalations& operator=(const CreateMetricRuleTemplateRequestAlertTemplatesEscalations &) = default ;
    CreateMetricRuleTemplateRequestAlertTemplatesEscalations& operator=(CreateMetricRuleTemplateRequestAlertTemplatesEscalations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->critical_ == nullptr
        && return this->info_ == nullptr && return this->warn_ == nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical) };
    inline Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical critical() { DARABONBA_PTR_GET(critical_, Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical) };
    inline CreateMetricRuleTemplateRequestAlertTemplatesEscalations& setCritical(const Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline CreateMetricRuleTemplateRequestAlertTemplatesEscalations& setCritical(Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsInfo & info() const { DARABONBA_PTR_GET_CONST(info_, Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsInfo) };
    inline Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsInfo info() { DARABONBA_PTR_GET(info_, Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsInfo) };
    inline CreateMetricRuleTemplateRequestAlertTemplatesEscalations& setInfo(const Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsInfo & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline CreateMetricRuleTemplateRequestAlertTemplatesEscalations& setInfo(Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsInfo && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // warn Field Functions 
    bool hasWarn() const { return this->warn_ != nullptr;};
    void deleteWarn() { this->warn_ = nullptr;};
    inline const Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsWarn & warn() const { DARABONBA_PTR_GET_CONST(warn_, Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsWarn) };
    inline Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsWarn warn() { DARABONBA_PTR_GET(warn_, Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsWarn) };
    inline CreateMetricRuleTemplateRequestAlertTemplatesEscalations& setWarn(const Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsWarn & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
    inline CreateMetricRuleTemplateRequestAlertTemplatesEscalations& setWarn(Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsWarn && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


  protected:
    std::shared_ptr<Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsCritical> critical_ = nullptr;
    std::shared_ptr<Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsInfo> info_ = nullptr;
    std::shared_ptr<Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalationsWarn> warn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
