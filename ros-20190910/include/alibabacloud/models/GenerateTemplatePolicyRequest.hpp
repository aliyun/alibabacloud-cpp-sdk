// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETEMPLATEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATETEMPLATEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GenerateTemplatePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTemplatePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperationTypes, operationTypes_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTemplatePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationTypes, operationTypes_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    GenerateTemplatePolicyRequest() = default ;
    GenerateTemplatePolicyRequest(const GenerateTemplatePolicyRequest &) = default ;
    GenerateTemplatePolicyRequest(GenerateTemplatePolicyRequest &&) = default ;
    GenerateTemplatePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTemplatePolicyRequest() = default ;
    GenerateTemplatePolicyRequest& operator=(const GenerateTemplatePolicyRequest &) = default ;
    GenerateTemplatePolicyRequest& operator=(GenerateTemplatePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operationTypes_ != nullptr
        && this->templateBody_ != nullptr && this->templateId_ != nullptr && this->templateURL_ != nullptr && this->templateVersion_ != nullptr; };
    // operationTypes Field Functions 
    bool hasOperationTypes() const { return this->operationTypes_ != nullptr;};
    void deleteOperationTypes() { this->operationTypes_ = nullptr;};
    inline const vector<string> & operationTypes() const { DARABONBA_PTR_GET_CONST(operationTypes_, vector<string>) };
    inline vector<string> operationTypes() { DARABONBA_PTR_GET(operationTypes_, vector<string>) };
    inline GenerateTemplatePolicyRequest& setOperationTypes(const vector<string> & operationTypes) { DARABONBA_PTR_SET_VALUE(operationTypes_, operationTypes) };
    inline GenerateTemplatePolicyRequest& setOperationTypes(vector<string> && operationTypes) { DARABONBA_PTR_SET_RVALUE(operationTypes_, operationTypes) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GenerateTemplatePolicyRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GenerateTemplatePolicyRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline GenerateTemplatePolicyRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GenerateTemplatePolicyRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The type of operation N for which you want to generate the policy information.
    // 
    // Valid values:
    // 
    // *   CreateStack: creates a stack by calling the CreateStack operation.
    // *   UpdateStack: updates a stack by calling the UpdateStack operation.
    // *   DeleteStack: deletes a stack by calling the DeleteStack operation.
    // *   DetectStackDrift: detects drifts on a stack by calling the DelectStackDrift operation.
    // *   ListStackOperationRisks: lists the risks of a deletion operation on a stack by setting the OperationType parameter to DeleteStack in the ListStackOperationRisks operation.
    // *   GetTemplateEstimateCost: queries the estimated prices of resources that you want to use in the template by calling the GetTemplateEstimateCost operation.
    // *   GetTemplateParameterConstraints: queries the values of parameters in the template by calling the GetTemplateParameterConstraints operation.
    // *   ImportResourcesToStack: imports resources to a stack by setting the ChangeSetType parameter to IMPORT in the CreateChangeSet operation.
    // *   SignalResource: sends a signal to a stack.
    // 
    // >  The default value is the combination of all valid values.
    std::shared_ptr<vector<string>> operationTypes_ = nullptr;
    // The structure that contains the template body. The template body must be 1 to 524,288 bytes in length.
    // 
    // If the length of the template body exceeds the upper limit, we recommend that you add parameters to the HTTP POST request body to prevent request failures caused by excessively long URLs.
    // 
    // You can specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId.
    std::shared_ptr<string> templateBody_ = nullptr;
    // The ID of the template. This parameter applies to shared templates and private templates.
    // 
    // You can specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId.
    std::shared_ptr<string> templateId_ = nullptr;
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP or HTTPS web server or in an Object Storage Service (OSS) bucket, such as oss://ros/template/demo or oss://ros/template/demo?RegionId=cn-hangzhou. The template body can be up to 524,288 bytes in length.
    // 
    // >  If you do not specify the region ID of the OSS bucket, the value of the RegionId parameter is used.
    // 
    // You can specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId.
    // 
    // The URL can be up to 1,024 bytes in length.
    std::shared_ptr<string> templateURL_ = nullptr;
    // The version of the template. This parameter takes effect only when the TemplateId parameter is specified.
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
