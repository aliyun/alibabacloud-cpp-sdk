// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSYSTEMPROPERTYTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSYSTEMPROPERTYTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifySystemPropertyTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySystemPropertyTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAuto, enableAuto_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(SystemPropertyInfo, systemPropertyInfoShrink_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySystemPropertyTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAuto, enableAuto_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(SystemPropertyInfo, systemPropertyInfoShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    ModifySystemPropertyTemplateShrinkRequest() = default ;
    ModifySystemPropertyTemplateShrinkRequest(const ModifySystemPropertyTemplateShrinkRequest &) = default ;
    ModifySystemPropertyTemplateShrinkRequest(ModifySystemPropertyTemplateShrinkRequest &&) = default ;
    ModifySystemPropertyTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySystemPropertyTemplateShrinkRequest() = default ;
    ModifySystemPropertyTemplateShrinkRequest& operator=(const ModifySystemPropertyTemplateShrinkRequest &) = default ;
    ModifySystemPropertyTemplateShrinkRequest& operator=(ModifySystemPropertyTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableAuto_ != nullptr
        && this->filePath_ != nullptr && this->systemPropertyInfoShrink_ != nullptr && this->templateId_ != nullptr && this->templateName_ != nullptr; };
    // enableAuto Field Functions 
    bool hasEnableAuto() const { return this->enableAuto_ != nullptr;};
    void deleteEnableAuto() { this->enableAuto_ = nullptr;};
    inline bool enableAuto() const { DARABONBA_PTR_GET_DEFAULT(enableAuto_, false) };
    inline ModifySystemPropertyTemplateShrinkRequest& setEnableAuto(bool enableAuto) { DARABONBA_PTR_SET_VALUE(enableAuto_, enableAuto) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ModifySystemPropertyTemplateShrinkRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // systemPropertyInfoShrink Field Functions 
    bool hasSystemPropertyInfoShrink() const { return this->systemPropertyInfoShrink_ != nullptr;};
    void deleteSystemPropertyInfoShrink() { this->systemPropertyInfoShrink_ = nullptr;};
    inline string systemPropertyInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(systemPropertyInfoShrink_, "") };
    inline ModifySystemPropertyTemplateShrinkRequest& setSystemPropertyInfoShrink(string systemPropertyInfoShrink) { DARABONBA_PTR_SET_VALUE(systemPropertyInfoShrink_, systemPropertyInfoShrink) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ModifySystemPropertyTemplateShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ModifySystemPropertyTemplateShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<bool> enableAuto_ = nullptr;
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<string> systemPropertyInfoShrink_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
