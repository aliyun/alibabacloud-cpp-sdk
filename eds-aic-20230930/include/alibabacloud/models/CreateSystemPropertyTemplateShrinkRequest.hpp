// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYSTEMPROPERTYTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESYSTEMPROPERTYTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateSystemPropertyTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSystemPropertyTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAuto, enableAuto_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(SystemPropertyInfo, systemPropertyInfoShrink_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSystemPropertyTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAuto, enableAuto_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(SystemPropertyInfo, systemPropertyInfoShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    CreateSystemPropertyTemplateShrinkRequest() = default ;
    CreateSystemPropertyTemplateShrinkRequest(const CreateSystemPropertyTemplateShrinkRequest &) = default ;
    CreateSystemPropertyTemplateShrinkRequest(CreateSystemPropertyTemplateShrinkRequest &&) = default ;
    CreateSystemPropertyTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSystemPropertyTemplateShrinkRequest() = default ;
    CreateSystemPropertyTemplateShrinkRequest& operator=(const CreateSystemPropertyTemplateShrinkRequest &) = default ;
    CreateSystemPropertyTemplateShrinkRequest& operator=(CreateSystemPropertyTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableAuto_ != nullptr
        && this->filePath_ != nullptr && this->systemPropertyInfoShrink_ != nullptr && this->templateName_ != nullptr; };
    // enableAuto Field Functions 
    bool hasEnableAuto() const { return this->enableAuto_ != nullptr;};
    void deleteEnableAuto() { this->enableAuto_ = nullptr;};
    inline bool enableAuto() const { DARABONBA_PTR_GET_DEFAULT(enableAuto_, false) };
    inline CreateSystemPropertyTemplateShrinkRequest& setEnableAuto(bool enableAuto) { DARABONBA_PTR_SET_VALUE(enableAuto_, enableAuto) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline CreateSystemPropertyTemplateShrinkRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // systemPropertyInfoShrink Field Functions 
    bool hasSystemPropertyInfoShrink() const { return this->systemPropertyInfoShrink_ != nullptr;};
    void deleteSystemPropertyInfoShrink() { this->systemPropertyInfoShrink_ = nullptr;};
    inline string systemPropertyInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(systemPropertyInfoShrink_, "") };
    inline CreateSystemPropertyTemplateShrinkRequest& setSystemPropertyInfoShrink(string systemPropertyInfoShrink) { DARABONBA_PTR_SET_VALUE(systemPropertyInfoShrink_, systemPropertyInfoShrink) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateSystemPropertyTemplateShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<bool> enableAuto_ = nullptr;
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<string> systemPropertyInfoShrink_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
