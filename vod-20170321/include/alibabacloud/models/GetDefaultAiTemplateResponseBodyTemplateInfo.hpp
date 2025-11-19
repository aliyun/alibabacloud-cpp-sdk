// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEFAULTAITEMPLATERESPONSEBODYTEMPLATEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDEFAULTAITEMPLATERESPONSEBODYTEMPLATEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDefaultAITemplateResponseBodyTemplateInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDefaultAITemplateResponseBodyTemplateInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDefaultAITemplateResponseBodyTemplateInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    GetDefaultAITemplateResponseBodyTemplateInfo() = default ;
    GetDefaultAITemplateResponseBodyTemplateInfo(const GetDefaultAITemplateResponseBodyTemplateInfo &) = default ;
    GetDefaultAITemplateResponseBodyTemplateInfo(GetDefaultAITemplateResponseBodyTemplateInfo &&) = default ;
    GetDefaultAITemplateResponseBodyTemplateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDefaultAITemplateResponseBodyTemplateInfo() = default ;
    GetDefaultAITemplateResponseBodyTemplateInfo& operator=(const GetDefaultAITemplateResponseBodyTemplateInfo &) = default ;
    GetDefaultAITemplateResponseBodyTemplateInfo& operator=(GetDefaultAITemplateResponseBodyTemplateInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->isDefault_ == nullptr && return this->modifyTime_ == nullptr && return this->source_ == nullptr && return this->templateConfig_ == nullptr && return this->templateId_ == nullptr
        && return this->templateName_ == nullptr && return this->templateType_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetDefaultAITemplateResponseBodyTemplateInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline string isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
    inline GetDefaultAITemplateResponseBodyTemplateInfo& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline GetDefaultAITemplateResponseBodyTemplateInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetDefaultAITemplateResponseBodyTemplateInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string templateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline GetDefaultAITemplateResponseBodyTemplateInfo& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetDefaultAITemplateResponseBodyTemplateInfo& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetDefaultAITemplateResponseBodyTemplateInfo& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline GetDefaultAITemplateResponseBodyTemplateInfo& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The time when the AI template was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether the template is the default AI template. Valid values:
    // 
    // *   **Default**
    // *   **NotDefault**
    std::shared_ptr<string> isDefault_ = nullptr;
    // The time when the AI template was modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The source of the AI template. Valid values:
    // 
    // *   **System**
    // *   **Custom**
    std::shared_ptr<string> source_ = nullptr;
    // The detailed configurations of the AI template. The value is a JSON string. For more information, see [AITemplateConfig](~~89863#title-vd3-499-o36~~).
    std::shared_ptr<string> templateConfig_ = nullptr;
    // The ID of the AI template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the AI template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The type of the AI template. The value is **AIMediaAudit**, which indicates automated review.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
