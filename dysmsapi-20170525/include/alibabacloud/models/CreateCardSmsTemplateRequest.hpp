// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECARDSMSTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECARDSMSTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateCardSmsTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCardSmsTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Factorys, factorys_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
      DARABONBA_ANY_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCardSmsTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Factorys, factorys_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
      DARABONBA_ANY_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    CreateCardSmsTemplateRequest() = default ;
    CreateCardSmsTemplateRequest(const CreateCardSmsTemplateRequest &) = default ;
    CreateCardSmsTemplateRequest(CreateCardSmsTemplateRequest &&) = default ;
    CreateCardSmsTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCardSmsTemplateRequest() = default ;
    CreateCardSmsTemplateRequest& operator=(const CreateCardSmsTemplateRequest &) = default ;
    CreateCardSmsTemplateRequest& operator=(CreateCardSmsTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->factorys_ == nullptr
        && return this->memo_ == nullptr && return this->template_ == nullptr && return this->templateName_ == nullptr; };
    // factorys Field Functions 
    bool hasFactorys() const { return this->factorys_ != nullptr;};
    void deleteFactorys() { this->factorys_ = nullptr;};
    inline string factorys() const { DARABONBA_PTR_GET_DEFAULT(factorys_, "") };
    inline CreateCardSmsTemplateRequest& setFactorys(string factorys) { DARABONBA_PTR_SET_VALUE(factorys_, factorys) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline CreateCardSmsTemplateRequest& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline     const Darabonba::Json & _template() const { DARABONBA_GET(template_) };
    Darabonba::Json & _template() { DARABONBA_GET(template_) };
    inline CreateCardSmsTemplateRequest& setTemplate(const Darabonba::Json & _template) { DARABONBA_SET_VALUE(template_, _template) };
    inline CreateCardSmsTemplateRequest& setTemplate(Darabonba::Json & _template) { DARABONBA_SET_RVALUE(template_, _template) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateCardSmsTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The mobile phone manufacturer. Valid values:
    // 
    // *   **HuaWei**: HUAWEI
    // *   **XiaoMi**: Xiaomi
    // *   **OPPO**: OPPO
    // *   **VIVO**: vivo
    // *   **MEIZU**: MEIZU
    // 
    // > If this parameter is not specified, the system automatically specifies a supported mobile phone manufacturer.
    std::shared_ptr<string> factorys_ = nullptr;
    // The description of the message template.
    std::shared_ptr<string> memo_ = nullptr;
    // The content of the card message template.
    // 
    // > 
    // 
    // *   For information about fields such as Template, ExtendInfo, TemplateContent, TmpCard, and Action, see [Parameters of card message templates](https://help.aliyun.com/document_detail/434929.html).
    // 
    // *   Message template content varies based on the template type. For more information, see [Sample message templates](https://help.aliyun.com/document_detail/435361.html).
    // 
    // This parameter is required.
    Darabonba::Json template_ = nullptr;
    // The name of the card message template.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
