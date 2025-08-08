// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENDERSERVICESBYTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENDERSERVICESBYTEMPLATEREQUEST_HPP_
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
  class RenderServicesByTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenderServicesByTemplateRequest& obj) { 
      DARABONBA_ANY_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
      DARABONBA_PTR_TO_JSON(serviceNameChanges, serviceNameChanges_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(variableValues, variableValues_);
    };
    friend void from_json(const Darabonba::Json& j, RenderServicesByTemplateRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
      DARABONBA_PTR_FROM_JSON(serviceNameChanges, serviceNameChanges_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(variableValues, variableValues_);
    };
    RenderServicesByTemplateRequest() = default ;
    RenderServicesByTemplateRequest(const RenderServicesByTemplateRequest &) = default ;
    RenderServicesByTemplateRequest(RenderServicesByTemplateRequest &&) = default ;
    RenderServicesByTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenderServicesByTemplateRequest() = default ;
    RenderServicesByTemplateRequest& operator=(const RenderServicesByTemplateRequest &) = default ;
    RenderServicesByTemplateRequest& operator=(RenderServicesByTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameters_ != nullptr
        && this->projectName_ != nullptr && this->serviceNameChanges_ != nullptr && this->templateName_ != nullptr && this->variableValues_ != nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline RenderServicesByTemplateRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline RenderServicesByTemplateRequest& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline RenderServicesByTemplateRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // serviceNameChanges Field Functions 
    bool hasServiceNameChanges() const { return this->serviceNameChanges_ != nullptr;};
    void deleteServiceNameChanges() { this->serviceNameChanges_ = nullptr;};
    inline const map<string, string> & serviceNameChanges() const { DARABONBA_PTR_GET_CONST(serviceNameChanges_, map<string, string>) };
    inline map<string, string> serviceNameChanges() { DARABONBA_PTR_GET(serviceNameChanges_, map<string, string>) };
    inline RenderServicesByTemplateRequest& setServiceNameChanges(const map<string, string> & serviceNameChanges) { DARABONBA_PTR_SET_VALUE(serviceNameChanges_, serviceNameChanges) };
    inline RenderServicesByTemplateRequest& setServiceNameChanges(map<string, string> && serviceNameChanges) { DARABONBA_PTR_SET_RVALUE(serviceNameChanges_, serviceNameChanges) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline RenderServicesByTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // variableValues Field Functions 
    bool hasVariableValues() const { return this->variableValues_ != nullptr;};
    void deleteVariableValues() { this->variableValues_ = nullptr;};
    inline const TemplateVariableValueMap & variableValues() const { DARABONBA_PTR_GET_CONST(variableValues_, TemplateVariableValueMap) };
    inline TemplateVariableValueMap variableValues() { DARABONBA_PTR_GET(variableValues_, TemplateVariableValueMap) };
    inline RenderServicesByTemplateRequest& setVariableValues(const TemplateVariableValueMap & variableValues) { DARABONBA_PTR_SET_VALUE(variableValues_, variableValues) };
    inline RenderServicesByTemplateRequest& setVariableValues(TemplateVariableValueMap && variableValues) { DARABONBA_PTR_SET_RVALUE(variableValues_, variableValues) };


  protected:
    Darabonba::Json parameters_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<map<string, string>> serviceNameChanges_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<TemplateVariableValueMap> variableValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
