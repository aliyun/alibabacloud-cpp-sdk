// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAITEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAITEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddAITemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAITemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, AddAITemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    AddAITemplateRequest() = default ;
    AddAITemplateRequest(const AddAITemplateRequest &) = default ;
    AddAITemplateRequest(AddAITemplateRequest &&) = default ;
    AddAITemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAITemplateRequest() = default ;
    AddAITemplateRequest& operator=(const AddAITemplateRequest &) = default ;
    AddAITemplateRequest& operator=(AddAITemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateConfig_ == nullptr
        && this->templateName_ == nullptr && this->templateType_ == nullptr; };
    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline AddAITemplateRequest& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline AddAITemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline AddAITemplateRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The detailed configurations of the AI template. The value must be a JSON string. For more information, see [AITemplateConfig](~~89863#title-vd3-499-o36~~).
    // 
    // This parameter is required.
    shared_ptr<string> templateConfig_ {};
    // The name of the AI template. The name can be up to 128 bytes in length.
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    // The type of the AI template. Valid values:
    // 
    // *   **AIMediaAudit**: automated review
    // *   **AIImage**: smart thumbnail
    // 
    // This parameter is required.
    shared_ptr<string> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
