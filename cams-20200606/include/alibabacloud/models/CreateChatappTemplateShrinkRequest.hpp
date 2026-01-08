// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATAPPTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATAPPTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class CreateChatappTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatappTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowCategoryChange, allowCategoryChange_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CategoryChangePaused, categoryChangePaused_);
      DARABONBA_PTR_TO_JSON(Components, componentsShrink_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(CustWabaId, custWabaId_);
      DARABONBA_PTR_TO_JSON(Example, exampleShrink_);
      DARABONBA_PTR_TO_JSON(IsvCode, isvCode_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MessageSendTtlSeconds, messageSendTtlSeconds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatappTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowCategoryChange, allowCategoryChange_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CategoryChangePaused, categoryChangePaused_);
      DARABONBA_PTR_FROM_JSON(Components, componentsShrink_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(CustWabaId, custWabaId_);
      DARABONBA_PTR_FROM_JSON(Example, exampleShrink_);
      DARABONBA_PTR_FROM_JSON(IsvCode, isvCode_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MessageSendTtlSeconds, messageSendTtlSeconds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    CreateChatappTemplateShrinkRequest() = default ;
    CreateChatappTemplateShrinkRequest(const CreateChatappTemplateShrinkRequest &) = default ;
    CreateChatappTemplateShrinkRequest(CreateChatappTemplateShrinkRequest &&) = default ;
    CreateChatappTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatappTemplateShrinkRequest() = default ;
    CreateChatappTemplateShrinkRequest& operator=(const CreateChatappTemplateShrinkRequest &) = default ;
    CreateChatappTemplateShrinkRequest& operator=(CreateChatappTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowCategoryChange_ == nullptr
        && this->category_ == nullptr && this->categoryChangePaused_ == nullptr && this->componentsShrink_ == nullptr && this->custSpaceId_ == nullptr && this->custWabaId_ == nullptr
        && this->exampleShrink_ == nullptr && this->isvCode_ == nullptr && this->language_ == nullptr && this->messageSendTtlSeconds_ == nullptr && this->name_ == nullptr
        && this->templateType_ == nullptr; };
    // allowCategoryChange Field Functions 
    bool hasAllowCategoryChange() const { return this->allowCategoryChange_ != nullptr;};
    void deleteAllowCategoryChange() { this->allowCategoryChange_ = nullptr;};
    inline bool getAllowCategoryChange() const { DARABONBA_PTR_GET_DEFAULT(allowCategoryChange_, false) };
    inline CreateChatappTemplateShrinkRequest& setAllowCategoryChange(bool allowCategoryChange) { DARABONBA_PTR_SET_VALUE(allowCategoryChange_, allowCategoryChange) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateChatappTemplateShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // categoryChangePaused Field Functions 
    bool hasCategoryChangePaused() const { return this->categoryChangePaused_ != nullptr;};
    void deleteCategoryChangePaused() { this->categoryChangePaused_ = nullptr;};
    inline bool getCategoryChangePaused() const { DARABONBA_PTR_GET_DEFAULT(categoryChangePaused_, false) };
    inline CreateChatappTemplateShrinkRequest& setCategoryChangePaused(bool categoryChangePaused) { DARABONBA_PTR_SET_VALUE(categoryChangePaused_, categoryChangePaused) };


    // componentsShrink Field Functions 
    bool hasComponentsShrink() const { return this->componentsShrink_ != nullptr;};
    void deleteComponentsShrink() { this->componentsShrink_ = nullptr;};
    inline string getComponentsShrink() const { DARABONBA_PTR_GET_DEFAULT(componentsShrink_, "") };
    inline CreateChatappTemplateShrinkRequest& setComponentsShrink(string componentsShrink) { DARABONBA_PTR_SET_VALUE(componentsShrink_, componentsShrink) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline CreateChatappTemplateShrinkRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // custWabaId Field Functions 
    bool hasCustWabaId() const { return this->custWabaId_ != nullptr;};
    void deleteCustWabaId() { this->custWabaId_ = nullptr;};
    inline string getCustWabaId() const { DARABONBA_PTR_GET_DEFAULT(custWabaId_, "") };
    inline CreateChatappTemplateShrinkRequest& setCustWabaId(string custWabaId) { DARABONBA_PTR_SET_VALUE(custWabaId_, custWabaId) };


    // exampleShrink Field Functions 
    bool hasExampleShrink() const { return this->exampleShrink_ != nullptr;};
    void deleteExampleShrink() { this->exampleShrink_ = nullptr;};
    inline string getExampleShrink() const { DARABONBA_PTR_GET_DEFAULT(exampleShrink_, "") };
    inline CreateChatappTemplateShrinkRequest& setExampleShrink(string exampleShrink) { DARABONBA_PTR_SET_VALUE(exampleShrink_, exampleShrink) };


    // isvCode Field Functions 
    bool hasIsvCode() const { return this->isvCode_ != nullptr;};
    void deleteIsvCode() { this->isvCode_ = nullptr;};
    inline string getIsvCode() const { DARABONBA_PTR_GET_DEFAULT(isvCode_, "") };
    inline CreateChatappTemplateShrinkRequest& setIsvCode(string isvCode) { DARABONBA_PTR_SET_VALUE(isvCode_, isvCode) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateChatappTemplateShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // messageSendTtlSeconds Field Functions 
    bool hasMessageSendTtlSeconds() const { return this->messageSendTtlSeconds_ != nullptr;};
    void deleteMessageSendTtlSeconds() { this->messageSendTtlSeconds_ = nullptr;};
    inline int32_t getMessageSendTtlSeconds() const { DARABONBA_PTR_GET_DEFAULT(messageSendTtlSeconds_, 0) };
    inline CreateChatappTemplateShrinkRequest& setMessageSendTtlSeconds(int32_t messageSendTtlSeconds) { DARABONBA_PTR_SET_VALUE(messageSendTtlSeconds_, messageSendTtlSeconds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateChatappTemplateShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateChatappTemplateShrinkRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // Specifies whether to allow Facebook to automatically change the directory of the template. If you set this parameter to true, the review success rate of the template is improved. This parameter is valid only when TemplateType is set to WHATSAPP.
    shared_ptr<bool> allowCategoryChange_ {};
    // The category of the template if TemplateType is set to WHATSAPP. Valid values:
    // 
    // *   **UTILITY**: the transaction template
    // *   **MARKETING**: the marketing template
    // *   **AUTHENTICATION**: the authentication template
    // 
    // The category of the template if TemplateType is set to VIBER. Valid values:
    // 
    // *   **text**: the template that contains only text
    // *   **image**: the template that contains only images
    // *   **text_image_button**: the template that contains text, images, and buttons
    // *   **text_button**: the template that contains text and buttons
    // *   **document**: the template that contains only documents
    // *   **video**: the template that contains only videos
    // *   **text_video**: the template that contains text and videos
    // *   **text_video_button**: the template that contains text, videos, and buttons
    // *   **text_image**: the template that contains text and images
    // 
    // This parameter is required.
    shared_ptr<string> category_ {};
    shared_ptr<bool> categoryChangePaused_ {};
    // The components of the message template.
    // 
    // >  If Category is set to AUTHENTICATION, the Type sub-parameter of the Components parameter cannot be set to HEADER. If the Type sub-parameter is set to BODY or FOOTER, the Text sub-parameter of the Components parameter must be empty.
    // 
    // This parameter is required.
    shared_ptr<string> componentsShrink_ {};
    // The space ID of the user within the ISV account.
    shared_ptr<string> custSpaceId_ {};
    // The WhatsApp Business account (WABA) ID of the user within the independent software vendor (ISV) account.
    // 
    // > CustWabaId is an obsolete parameter. Use CustSpaceId instead.
    shared_ptr<string> custWabaId_ {};
    // The examples of variables that are used when you create the message template.
    shared_ptr<string> exampleShrink_ {};
    // The independent software vendor (ISV) verification code, which is used to verify whether the user is authorized by the ISV account.
    shared_ptr<string> isvCode_ {};
    // The language that is used in the message template. For more information, see [Language codes](https://help.aliyun.com/document_detail/463420.html).
    // 
    // This parameter is required.
    shared_ptr<string> language_ {};
    // Validity period of authentication template message sending in WhatsApp
    // 
    // > This attribute requires providing waba in advance to Alibaba operators to open the whitelist, otherwise it will result in template submission failure
    shared_ptr<int32_t> messageSendTtlSeconds_ {};
    // The name of the message template.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The type of the message template.
    // 
    // *   **WHATSAPP**
    // *   **VIBER**
    // *   LINE: the Line message template. This type of message template will be released later.
    // 
    // This parameter is required.
    shared_ptr<string> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
