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
        && this->memo_ == nullptr && this->template_ == nullptr && this->templateName_ == nullptr; };
    // factorys Field Functions 
    bool hasFactorys() const { return this->factorys_ != nullptr;};
    void deleteFactorys() { this->factorys_ = nullptr;};
    inline string getFactorys() const { DARABONBA_PTR_GET_DEFAULT(factorys_, "") };
    inline CreateCardSmsTemplateRequest& setFactorys(string factorys) { DARABONBA_PTR_SET_VALUE(factorys_, factorys) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline CreateCardSmsTemplateRequest& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline     const Darabonba::Json & getTemplate() const { DARABONBA_GET(template_) };
    Darabonba::Json & getTemplate() { DARABONBA_GET(template_) };
    inline CreateCardSmsTemplateRequest& setTemplate(const Darabonba::Json & _template) { DARABONBA_SET_VALUE(template_, _template) };
    inline CreateCardSmsTemplateRequest& setTemplate(Darabonba::Json && _template) { DARABONBA_SET_RVALUE(template_, _template) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateCardSmsTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The vendors to which the template will be submitted. Valid values:
    // 
    // - **HuaWei**: Huawei
    // 
    // - **XiaoMi**: Xiaomi
    // 
    // - **OPPO**: OPPO
    // 
    // - **VIVO**: VIVO
    // 
    // - **MEIZU**: MEIZU
    // 
    // - **HONOR**: HONOR
    // 
    // > If you do not specify this parameter, the system automatically submits the template to all supported mobile phone vendors.
    shared_ptr<string> factorys_ {};
    // A description of the template.
    shared_ptr<string> memo_ {};
    // The content of the card SMS template.
    // 
    // > - For more information about the `Template`, `ExtendInfo`, `TemplateContent`, `TmpCard`, and `Action` fields, see [Card SMS template parameters](https://help.aliyun.com/document_detail/434929.html).
    // >
    // > - The content structure varies based on the type of card SMS template. For more information, see [Card SMS template examples](https://help.aliyun.com/document_detail/435361.html).
    // 
    // This parameter is required.
    Darabonba::Json template_ {};
    // The name of the card SMS template.
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
