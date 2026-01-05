// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECARDSMSTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECARDSMSTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateCardSmsTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCardSmsTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Factorys, factorys_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
      DARABONBA_PTR_TO_JSON(Template, templateShrink_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCardSmsTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Factorys, factorys_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
      DARABONBA_PTR_FROM_JSON(Template, templateShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    CreateCardSmsTemplateShrinkRequest() = default ;
    CreateCardSmsTemplateShrinkRequest(const CreateCardSmsTemplateShrinkRequest &) = default ;
    CreateCardSmsTemplateShrinkRequest(CreateCardSmsTemplateShrinkRequest &&) = default ;
    CreateCardSmsTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCardSmsTemplateShrinkRequest() = default ;
    CreateCardSmsTemplateShrinkRequest& operator=(const CreateCardSmsTemplateShrinkRequest &) = default ;
    CreateCardSmsTemplateShrinkRequest& operator=(CreateCardSmsTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->factorys_ == nullptr
        && this->memo_ == nullptr && this->templateShrink_ == nullptr && this->templateName_ == nullptr; };
    // factorys Field Functions 
    bool hasFactorys() const { return this->factorys_ != nullptr;};
    void deleteFactorys() { this->factorys_ = nullptr;};
    inline string getFactorys() const { DARABONBA_PTR_GET_DEFAULT(factorys_, "") };
    inline CreateCardSmsTemplateShrinkRequest& setFactorys(string factorys) { DARABONBA_PTR_SET_VALUE(factorys_, factorys) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline CreateCardSmsTemplateShrinkRequest& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // templateShrink Field Functions 
    bool hasTemplateShrink() const { return this->templateShrink_ != nullptr;};
    void deleteTemplateShrink() { this->templateShrink_ = nullptr;};
    inline string getTemplateShrink() const { DARABONBA_PTR_GET_DEFAULT(templateShrink_, "") };
    inline CreateCardSmsTemplateShrinkRequest& setTemplateShrink(string templateShrink) { DARABONBA_PTR_SET_VALUE(templateShrink_, templateShrink) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateCardSmsTemplateShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


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
    shared_ptr<string> factorys_ {};
    // The description of the message template.
    shared_ptr<string> memo_ {};
    // The content of the card message template.
    // 
    // > 
    // 
    // *   For information about fields such as Template, ExtendInfo, TemplateContent, TmpCard, and Action, see [Parameters of card message templates](https://help.aliyun.com/document_detail/434929.html).
    // 
    // *   Message template content varies based on the template type. For more information, see [Sample message templates](https://help.aliyun.com/document_detail/435361.html).
    // 
    // This parameter is required.
    shared_ptr<string> templateShrink_ {};
    // The name of the card message template.
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
