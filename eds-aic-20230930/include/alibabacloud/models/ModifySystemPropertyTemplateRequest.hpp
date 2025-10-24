// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSYSTEMPROPERTYTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSYSTEMPROPERTYTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifySystemPropertyTemplateRequestSystemPropertyInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifySystemPropertyTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySystemPropertyTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAuto, enableAuto_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(SystemPropertyInfo, systemPropertyInfo_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySystemPropertyTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAuto, enableAuto_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(SystemPropertyInfo, systemPropertyInfo_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    ModifySystemPropertyTemplateRequest() = default ;
    ModifySystemPropertyTemplateRequest(const ModifySystemPropertyTemplateRequest &) = default ;
    ModifySystemPropertyTemplateRequest(ModifySystemPropertyTemplateRequest &&) = default ;
    ModifySystemPropertyTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySystemPropertyTemplateRequest() = default ;
    ModifySystemPropertyTemplateRequest& operator=(const ModifySystemPropertyTemplateRequest &) = default ;
    ModifySystemPropertyTemplateRequest& operator=(ModifySystemPropertyTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableAuto_ == nullptr
        && return this->filePath_ == nullptr && return this->systemPropertyInfo_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr; };
    // enableAuto Field Functions 
    bool hasEnableAuto() const { return this->enableAuto_ != nullptr;};
    void deleteEnableAuto() { this->enableAuto_ = nullptr;};
    inline bool enableAuto() const { DARABONBA_PTR_GET_DEFAULT(enableAuto_, false) };
    inline ModifySystemPropertyTemplateRequest& setEnableAuto(bool enableAuto) { DARABONBA_PTR_SET_VALUE(enableAuto_, enableAuto) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ModifySystemPropertyTemplateRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // systemPropertyInfo Field Functions 
    bool hasSystemPropertyInfo() const { return this->systemPropertyInfo_ != nullptr;};
    void deleteSystemPropertyInfo() { this->systemPropertyInfo_ = nullptr;};
    inline const ModifySystemPropertyTemplateRequestSystemPropertyInfo & systemPropertyInfo() const { DARABONBA_PTR_GET_CONST(systemPropertyInfo_, ModifySystemPropertyTemplateRequestSystemPropertyInfo) };
    inline ModifySystemPropertyTemplateRequestSystemPropertyInfo systemPropertyInfo() { DARABONBA_PTR_GET(systemPropertyInfo_, ModifySystemPropertyTemplateRequestSystemPropertyInfo) };
    inline ModifySystemPropertyTemplateRequest& setSystemPropertyInfo(const ModifySystemPropertyTemplateRequestSystemPropertyInfo & systemPropertyInfo) { DARABONBA_PTR_SET_VALUE(systemPropertyInfo_, systemPropertyInfo) };
    inline ModifySystemPropertyTemplateRequest& setSystemPropertyInfo(ModifySystemPropertyTemplateRequestSystemPropertyInfo && systemPropertyInfo) { DARABONBA_PTR_SET_RVALUE(systemPropertyInfo_, systemPropertyInfo) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ModifySystemPropertyTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ModifySystemPropertyTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<bool> enableAuto_ = nullptr;
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<ModifySystemPropertyTemplateRequestSystemPropertyInfo> systemPropertyInfo_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
