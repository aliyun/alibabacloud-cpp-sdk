// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYADDREQUESTCARRULE_HPP_
#define ALIBABACLOUD_MODELS_APPLYADDREQUESTCARRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyAddRequestCarRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyAddRequestCarRule& obj) { 
      DARABONBA_PTR_TO_JSON(scenario_template_id, scenarioTemplateId_);
      DARABONBA_PTR_TO_JSON(scenario_template_name, scenarioTemplateName_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyAddRequestCarRule& obj) { 
      DARABONBA_PTR_FROM_JSON(scenario_template_id, scenarioTemplateId_);
      DARABONBA_PTR_FROM_JSON(scenario_template_name, scenarioTemplateName_);
    };
    ApplyAddRequestCarRule() = default ;
    ApplyAddRequestCarRule(const ApplyAddRequestCarRule &) = default ;
    ApplyAddRequestCarRule(ApplyAddRequestCarRule &&) = default ;
    ApplyAddRequestCarRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyAddRequestCarRule() = default ;
    ApplyAddRequestCarRule& operator=(const ApplyAddRequestCarRule &) = default ;
    ApplyAddRequestCarRule& operator=(ApplyAddRequestCarRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scenarioTemplateId_ != nullptr
        && this->scenarioTemplateName_ != nullptr; };
    // scenarioTemplateId Field Functions 
    bool hasScenarioTemplateId() const { return this->scenarioTemplateId_ != nullptr;};
    void deleteScenarioTemplateId() { this->scenarioTemplateId_ = nullptr;};
    inline string scenarioTemplateId() const { DARABONBA_PTR_GET_DEFAULT(scenarioTemplateId_, "") };
    inline ApplyAddRequestCarRule& setScenarioTemplateId(string scenarioTemplateId) { DARABONBA_PTR_SET_VALUE(scenarioTemplateId_, scenarioTemplateId) };


    // scenarioTemplateName Field Functions 
    bool hasScenarioTemplateName() const { return this->scenarioTemplateName_ != nullptr;};
    void deleteScenarioTemplateName() { this->scenarioTemplateName_ = nullptr;};
    inline string scenarioTemplateName() const { DARABONBA_PTR_GET_DEFAULT(scenarioTemplateName_, "") };
    inline ApplyAddRequestCarRule& setScenarioTemplateName(string scenarioTemplateName) { DARABONBA_PTR_SET_VALUE(scenarioTemplateName_, scenarioTemplateName) };


  protected:
    std::shared_ptr<string> scenarioTemplateId_ = nullptr;
    std::shared_ptr<string> scenarioTemplateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
