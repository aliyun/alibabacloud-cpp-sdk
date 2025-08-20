// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATEREQUEST_HPP_
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
  class UpdateTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IsDraft, isDraft_);
      DARABONBA_PTR_TO_JSON(RotateStrategy, rotateStrategy_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(ValidationOptions, validationOptions_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IsDraft, isDraft_);
      DARABONBA_PTR_FROM_JSON(RotateStrategy, rotateStrategy_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(ValidationOptions, validationOptions_);
    };
    UpdateTemplateRequest() = default ;
    UpdateTemplateRequest(const UpdateTemplateRequest &) = default ;
    UpdateTemplateRequest(UpdateTemplateRequest &&) = default ;
    UpdateTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateRequest() = default ;
    UpdateTemplateRequest& operator=(const UpdateTemplateRequest &) = default ;
    UpdateTemplateRequest& operator=(UpdateTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->isDraft_ != nullptr && this->rotateStrategy_ != nullptr && this->templateBody_ != nullptr && this->templateId_ != nullptr && this->templateName_ != nullptr
        && this->templateURL_ != nullptr && this->validationOptions_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isDraft Field Functions 
    bool hasIsDraft() const { return this->isDraft_ != nullptr;};
    void deleteIsDraft() { this->isDraft_ = nullptr;};
    inline bool isDraft() const { DARABONBA_PTR_GET_DEFAULT(isDraft_, false) };
    inline UpdateTemplateRequest& setIsDraft(bool isDraft) { DARABONBA_PTR_SET_VALUE(isDraft_, isDraft) };


    // rotateStrategy Field Functions 
    bool hasRotateStrategy() const { return this->rotateStrategy_ != nullptr;};
    void deleteRotateStrategy() { this->rotateStrategy_ = nullptr;};
    inline string rotateStrategy() const { DARABONBA_PTR_GET_DEFAULT(rotateStrategy_, "") };
    inline UpdateTemplateRequest& setRotateStrategy(string rotateStrategy) { DARABONBA_PTR_SET_VALUE(rotateStrategy_, rotateStrategy) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline UpdateTemplateRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline UpdateTemplateRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // validationOptions Field Functions 
    bool hasValidationOptions() const { return this->validationOptions_ != nullptr;};
    void deleteValidationOptions() { this->validationOptions_ = nullptr;};
    inline const vector<string> & validationOptions() const { DARABONBA_PTR_GET_CONST(validationOptions_, vector<string>) };
    inline vector<string> validationOptions() { DARABONBA_PTR_GET(validationOptions_, vector<string>) };
    inline UpdateTemplateRequest& setValidationOptions(const vector<string> & validationOptions) { DARABONBA_PTR_SET_VALUE(validationOptions_, validationOptions) };
    inline UpdateTemplateRequest& setValidationOptions(vector<string> && validationOptions) { DARABONBA_PTR_SET_RVALUE(validationOptions_, validationOptions) };


  protected:
    // The description of the template. The maximum length is 256 characters.
    std::shared_ptr<string> description_ = nullptr;
    // Whether to update the Draft (draft) version. Values:
    // - false (default): If template content is provided, a new version is created, and the Draft version is cleared. Otherwise, the current latest version is modified.
    // - true: Modifies the Draft version. The Draft version can only be retrieved via the GetTemplate interface. The ListTemplateVersions interface will not return it. The TemplateVersion parameter in other interfaces cannot specify Draft.
    std::shared_ptr<bool> isDraft_ = nullptr;
    // Template version rotation strategy. Values:
    // - None (default): No rotation. An error occurs when the version limit is reached.
    // - DeleteOldestNonSharedVersionWhenLimitExceeded: Rotates and deletes non-shared template versions.
    // > 
    // > - If all versions of the template are shared, they cannot be rotated and deleted.
    // > - The current latest version will not be rotated and deleted.
    // > - Regardless of whether rotation deletion is used, the template version number cannot exceed v65000.
    std::shared_ptr<string> rotateStrategy_ = nullptr;
    // The structure of the template body. The length should be between 1 and 524,288 bytes. If the content is long, it is recommended to use HTTP POST + Body Param to pass the parameter in the request body to avoid request failure due to an overly long URL.
    // 
    // > You must and can only specify one of `TemplateBody`, `TemplateURL`, `TemplateId`, or `TemplateScratchId`.
    std::shared_ptr<string> templateBody_ = nullptr;
    // The template ID. Supports both shared and private templates.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the template.  
    // The length should not exceed 255 characters (utf-8 encoding), and it must start with a number, letter, or Chinese character. It can include numbers, letters, Chinese characters, hyphens (-), and underscores (_).
    std::shared_ptr<string> templateName_ = nullptr;
    // The location of the file containing the template body. The URL must point to a template located on a web server (HTTP or HTTPS) or in an Alibaba Cloud OSS bucket (e.g., oss://ros/template/demo, oss://ros/template/demo?RegionId=cn-hangzhou), with a maximum size of 524,288 bytes.   
    // 
    // > If the OSS region is not specified, it defaults to the same as the `RegionId` parameter in the request.
    //    
    // You can only specify one of `TemplateBody` or `TemplateURL`.   
    // The maximum length of the URL is 1,024 bytes.
    std::shared_ptr<string> templateURL_ = nullptr;
    // Validation options.
    // 
    // By default, no options are enabled, and strict validation is performed.
    std::shared_ptr<vector<string>> validationOptions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
