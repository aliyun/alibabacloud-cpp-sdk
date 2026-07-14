// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCHATAPPTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCHATAPPTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ModifyChatappTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyChatappTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CategoryChangePaused, categoryChangePaused_);
      DARABONBA_PTR_TO_JSON(Components, componentsShrink_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(CustWabaId, custWabaId_);
      DARABONBA_PTR_TO_JSON(Example, exampleShrink_);
      DARABONBA_PTR_TO_JSON(IsvCode, isvCode_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MessageSendTtlSeconds, messageSendTtlSeconds_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyChatappTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CategoryChangePaused, categoryChangePaused_);
      DARABONBA_PTR_FROM_JSON(Components, componentsShrink_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(CustWabaId, custWabaId_);
      DARABONBA_PTR_FROM_JSON(Example, exampleShrink_);
      DARABONBA_PTR_FROM_JSON(IsvCode, isvCode_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MessageSendTtlSeconds, messageSendTtlSeconds_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    ModifyChatappTemplateShrinkRequest() = default ;
    ModifyChatappTemplateShrinkRequest(const ModifyChatappTemplateShrinkRequest &) = default ;
    ModifyChatappTemplateShrinkRequest(ModifyChatappTemplateShrinkRequest &&) = default ;
    ModifyChatappTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyChatappTemplateShrinkRequest() = default ;
    ModifyChatappTemplateShrinkRequest& operator=(const ModifyChatappTemplateShrinkRequest &) = default ;
    ModifyChatappTemplateShrinkRequest& operator=(ModifyChatappTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->categoryChangePaused_ == nullptr && this->componentsShrink_ == nullptr && this->custSpaceId_ == nullptr && this->custWabaId_ == nullptr && this->exampleShrink_ == nullptr
        && this->isvCode_ == nullptr && this->language_ == nullptr && this->messageSendTtlSeconds_ == nullptr && this->templateCode_ == nullptr && this->templateName_ == nullptr
        && this->templateType_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyChatappTemplateShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // categoryChangePaused Field Functions 
    bool hasCategoryChangePaused() const { return this->categoryChangePaused_ != nullptr;};
    void deleteCategoryChangePaused() { this->categoryChangePaused_ = nullptr;};
    inline bool getCategoryChangePaused() const { DARABONBA_PTR_GET_DEFAULT(categoryChangePaused_, false) };
    inline ModifyChatappTemplateShrinkRequest& setCategoryChangePaused(bool categoryChangePaused) { DARABONBA_PTR_SET_VALUE(categoryChangePaused_, categoryChangePaused) };


    // componentsShrink Field Functions 
    bool hasComponentsShrink() const { return this->componentsShrink_ != nullptr;};
    void deleteComponentsShrink() { this->componentsShrink_ = nullptr;};
    inline string getComponentsShrink() const { DARABONBA_PTR_GET_DEFAULT(componentsShrink_, "") };
    inline ModifyChatappTemplateShrinkRequest& setComponentsShrink(string componentsShrink) { DARABONBA_PTR_SET_VALUE(componentsShrink_, componentsShrink) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline ModifyChatappTemplateShrinkRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // custWabaId Field Functions 
    bool hasCustWabaId() const { return this->custWabaId_ != nullptr;};
    void deleteCustWabaId() { this->custWabaId_ = nullptr;};
    inline string getCustWabaId() const { DARABONBA_PTR_GET_DEFAULT(custWabaId_, "") };
    inline ModifyChatappTemplateShrinkRequest& setCustWabaId(string custWabaId) { DARABONBA_PTR_SET_VALUE(custWabaId_, custWabaId) };


    // exampleShrink Field Functions 
    bool hasExampleShrink() const { return this->exampleShrink_ != nullptr;};
    void deleteExampleShrink() { this->exampleShrink_ = nullptr;};
    inline string getExampleShrink() const { DARABONBA_PTR_GET_DEFAULT(exampleShrink_, "") };
    inline ModifyChatappTemplateShrinkRequest& setExampleShrink(string exampleShrink) { DARABONBA_PTR_SET_VALUE(exampleShrink_, exampleShrink) };


    // isvCode Field Functions 
    bool hasIsvCode() const { return this->isvCode_ != nullptr;};
    void deleteIsvCode() { this->isvCode_ = nullptr;};
    inline string getIsvCode() const { DARABONBA_PTR_GET_DEFAULT(isvCode_, "") };
    inline ModifyChatappTemplateShrinkRequest& setIsvCode(string isvCode) { DARABONBA_PTR_SET_VALUE(isvCode_, isvCode) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ModifyChatappTemplateShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // messageSendTtlSeconds Field Functions 
    bool hasMessageSendTtlSeconds() const { return this->messageSendTtlSeconds_ != nullptr;};
    void deleteMessageSendTtlSeconds() { this->messageSendTtlSeconds_ = nullptr;};
    inline int32_t getMessageSendTtlSeconds() const { DARABONBA_PTR_GET_DEFAULT(messageSendTtlSeconds_, 0) };
    inline ModifyChatappTemplateShrinkRequest& setMessageSendTtlSeconds(int32_t messageSendTtlSeconds) { DARABONBA_PTR_SET_VALUE(messageSendTtlSeconds_, messageSendTtlSeconds) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline ModifyChatappTemplateShrinkRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ModifyChatappTemplateShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline ModifyChatappTemplateShrinkRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The templatetype cannot be modified.
    shared_ptr<string> category_ {};
    // Specifies whether to pause sending when a Utility template is changed to Marketing type.
    shared_ptr<bool> categoryChangePaused_ {};
    // The list of message template components.
    // 
    // > When Category is set to AUTHENTICATION, Components cannot contain a node with Type set to HEADER. When Type is set to BODY or FOOTER and the Text content is empty, the content is automatically generated.
    // 
    // This parameter is required.
    shared_ptr<string> componentsShrink_ {};
    // The SpaceId of the ISV sub-customer or the instance ID of a direct customer.
    shared_ptr<string> custSpaceId_ {};
    // The ISV customer WabaId.
    // 
    // > Deprecated parameter. Use CustSpaceId instead.
    shared_ptr<string> custWabaId_ {};
    // The examples for creating the template.
    shared_ptr<string> exampleShrink_ {};
    // The ISV verification code used to verify whether the RAM user is authorized by the ISV.
    shared_ptr<string> isvCode_ {};
    // The template language. For detailed language codes, see [Language codes](https://help.aliyun.com/document_detail/463420.html).
    // 
    // This parameter is required.
    shared_ptr<string> language_ {};
    // The validity period for sending template messages in WhatsApp.
    // - AUTHENTICATION: valid values are 30 to 900. 
    // - UTILITY: valid values are 30 to 43200.
    shared_ptr<int32_t> messageSendTtlSeconds_ {};
    // The message template code.
    shared_ptr<string> templateCode_ {};
    // The template name.
    shared_ptr<string> templateName_ {};
    // The templatetype.
    // 
    // - **WHATSAPP**
    shared_ptr<string> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
