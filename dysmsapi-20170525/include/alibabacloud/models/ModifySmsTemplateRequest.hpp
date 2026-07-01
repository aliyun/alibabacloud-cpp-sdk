// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSMSTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSMSTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class ModifySmsTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySmsTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySmsTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    ModifySmsTemplateRequest() = default ;
    ModifySmsTemplateRequest(const ModifySmsTemplateRequest &) = default ;
    ModifySmsTemplateRequest(ModifySmsTemplateRequest &&) = default ;
    ModifySmsTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySmsTemplateRequest() = default ;
    ModifySmsTemplateRequest& operator=(const ModifySmsTemplateRequest &) = default ;
    ModifySmsTemplateRequest& operator=(ModifySmsTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->templateCode_ == nullptr && this->templateContent_ == nullptr
        && this->templateName_ == nullptr && this->templateType_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySmsTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ModifySmsTemplateRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySmsTemplateRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySmsTemplateRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline ModifySmsTemplateRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string getTemplateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline ModifySmsTemplateRequest& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ModifySmsTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int32_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
    inline ModifySmsTemplateRequest& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    // The description of the SMS template application. The description cannot exceed 100 characters in length.
    // 
    // This information helps reviewers understand your business scenarios and improves review efficiency. Guidelines:
    // 
    // - Provide the use case of your live business.
    // - Provide SMS examples for real scenarios to reflect your business scenarios.
    // - Provide variable values and describe in detail the business use case and the reason for choosing the variable attributes.
    // - Provide the website URL, registered domain name, or application marketplace download link of the actual business.
    // - For logon scenarios, provide the test account and password.
    // 
    // This parameter is required.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The code of the SMS template that failed the review.
    // 
    // - Call the [QuerySmsTemplateList](https://help.aliyun.com/document_detail/419288.html) operation to obtain the code of the SMS template that failed the review.
    // - View the code of the SMS template that failed the review on the [Templates](https://dysms.console.aliyun.com/domestic/text/template) page.
    // 
    // This parameter is required.
    shared_ptr<string> templateCode_ {};
    // The template content. The content cannot exceed 500 characters in length.
    // 
    // The template content and variable content must comply with the [SMS template specifications](https://help.aliyun.com/document_detail/463161.html). Otherwise, the template fails the review. You can view common template examples on the [Apply for Template](https://dysms.console.aliyun.com/domestic/text/template/add) page. Using sample templates can improve review efficiency and success rate. For variable specifications, see [TemplateContent variable specifications](https://help.aliyun.com/document_detail/2806243.html).
    // 
    // This parameter is required.
    shared_ptr<string> templateContent_ {};
    // The template name. The name must be 1 to 30 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    // The SMS type. Valid values:
    // 
    // - **0**: verification code.
    // - **1**: SMS notification.
    // - **2**: promotional message.
    // - **3**: international or Hong Kong, Macao, and Taiwan message.
    // 
    // This parameter is required.
    shared_ptr<int32_t> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
