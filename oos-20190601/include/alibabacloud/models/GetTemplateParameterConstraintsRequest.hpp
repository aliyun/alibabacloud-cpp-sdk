// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetTemplateParameterConstraintsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateParameterConstraintsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateParameterConstraintsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    GetTemplateParameterConstraintsRequest() = default ;
    GetTemplateParameterConstraintsRequest(const GetTemplateParameterConstraintsRequest &) = default ;
    GetTemplateParameterConstraintsRequest(GetTemplateParameterConstraintsRequest &&) = default ;
    GetTemplateParameterConstraintsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateParameterConstraintsRequest() = default ;
    GetTemplateParameterConstraintsRequest& operator=(const GetTemplateParameterConstraintsRequest &) = default ;
    GetTemplateParameterConstraintsRequest& operator=(GetTemplateParameterConstraintsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameters_ == nullptr
        && return this->regionId_ == nullptr && return this->templateContent_ == nullptr && return this->templateName_ == nullptr && return this->templateURL_ == nullptr && return this->templateVersion_ == nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline GetTemplateParameterConstraintsRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTemplateParameterConstraintsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string templateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline GetTemplateParameterConstraintsRequest& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetTemplateParameterConstraintsRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline GetTemplateParameterConstraintsRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetTemplateParameterConstraintsRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The information about the parameters.
    std::shared_ptr<string> parameters_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The content of the template in the JSON or YAML format. This parameter is the same as the Content parameter that you can specify when you call the CreateTemplate operation. You can use this parameter to specify the tasks that you want to run. This way, you do not need to create a template before you start an execution. If you select an existing template, you do not need to specify this parameter.
    std::shared_ptr<string> templateContent_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The URL that is used to store the content of the Operation Orchestration Service (OOS) template in the Alibaba Cloud Object Storage Service (OSS). Only the public-read URL is supported. You can use this parameter to specify the tasks that you want to run. This way, you do not need to create a template before you start an execution. If you select an existing template, you do not need to specify this parameter.
    std::shared_ptr<string> templateURL_ = nullptr;
    // The version of the template. The default value is the latest version of the template.
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
