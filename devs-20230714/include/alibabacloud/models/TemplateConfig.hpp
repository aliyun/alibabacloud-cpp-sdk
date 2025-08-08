// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TemplateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(serviceNameChanges, serviceNameChanges_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(variableValues, variableValues_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(serviceNameChanges, serviceNameChanges_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(variableValues, variableValues_);
    };
    TemplateConfig() = default ;
    TemplateConfig(const TemplateConfig &) = default ;
    TemplateConfig(TemplateConfig &&) = default ;
    TemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateConfig() = default ;
    TemplateConfig& operator=(const TemplateConfig &) = default ;
    TemplateConfig& operator=(TemplateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameters_ != nullptr
        && this->serviceNameChanges_ != nullptr && this->templateName_ != nullptr && this->variableValues_ != nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline TemplateConfig& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline TemplateConfig& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // serviceNameChanges Field Functions 
    bool hasServiceNameChanges() const { return this->serviceNameChanges_ != nullptr;};
    void deleteServiceNameChanges() { this->serviceNameChanges_ = nullptr;};
    inline const map<string, string> & serviceNameChanges() const { DARABONBA_PTR_GET_CONST(serviceNameChanges_, map<string, string>) };
    inline map<string, string> serviceNameChanges() { DARABONBA_PTR_GET(serviceNameChanges_, map<string, string>) };
    inline TemplateConfig& setServiceNameChanges(const map<string, string> & serviceNameChanges) { DARABONBA_PTR_SET_VALUE(serviceNameChanges_, serviceNameChanges) };
    inline TemplateConfig& setServiceNameChanges(map<string, string> && serviceNameChanges) { DARABONBA_PTR_SET_RVALUE(serviceNameChanges_, serviceNameChanges) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline TemplateConfig& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // variableValues Field Functions 
    bool hasVariableValues() const { return this->variableValues_ != nullptr;};
    void deleteVariableValues() { this->variableValues_ = nullptr;};
    inline const TemplateVariableValueMap & variableValues() const { DARABONBA_PTR_GET_CONST(variableValues_, TemplateVariableValueMap) };
    inline TemplateVariableValueMap variableValues() { DARABONBA_PTR_GET(variableValues_, TemplateVariableValueMap) };
    inline TemplateConfig& setVariableValues(const TemplateVariableValueMap & variableValues) { DARABONBA_PTR_SET_VALUE(variableValues_, variableValues) };
    inline TemplateConfig& setVariableValues(TemplateVariableValueMap && variableValues) { DARABONBA_PTR_SET_RVALUE(variableValues_, variableValues) };


  protected:
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    std::shared_ptr<map<string, string>> serviceNameChanges_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<TemplateVariableValueMap> variableValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
