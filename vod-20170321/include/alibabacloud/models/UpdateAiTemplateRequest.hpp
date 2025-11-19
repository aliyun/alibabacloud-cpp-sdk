// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAITEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAITEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateAITemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAITemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAITemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    UpdateAITemplateRequest() = default ;
    UpdateAITemplateRequest(const UpdateAITemplateRequest &) = default ;
    UpdateAITemplateRequest(UpdateAITemplateRequest &&) = default ;
    UpdateAITemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAITemplateRequest() = default ;
    UpdateAITemplateRequest& operator=(const UpdateAITemplateRequest &) = default ;
    UpdateAITemplateRequest& operator=(UpdateAITemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateConfig_ == nullptr
        && return this->templateId_ == nullptr && return this->templateName_ == nullptr; };
    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string templateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline UpdateAITemplateRequest& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateAITemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateAITemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The detailed configurations of the AI template. The value is a JSON string. For more information, see [AITemplateConfig](~~89863#title-vd3-499-o36~~).
    // 
    // This parameter is required.
    std::shared_ptr<string> templateConfig_ = nullptr;
    // The ID of the AI template. You can use one of the following methods to obtain the ID:
    // 
    // *   Call the [AddAITemplate](https://help.aliyun.com/document_detail/102930.html) operation to add an AI template if no AI template exists. The value of TemplateId in the response is the ID of the AI template.
    // *   Call the [ListAITemplate](https://help.aliyun.com/document_detail/102936.html) operation if the template already exists. The value of TemplateId in the response is the ID of the AI template.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the AI template. The name can be up to 128 bytes in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
