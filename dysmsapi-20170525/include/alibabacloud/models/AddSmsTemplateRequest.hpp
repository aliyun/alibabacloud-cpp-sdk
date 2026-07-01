// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSMSTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSMSTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class AddSmsTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSmsTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, AddSmsTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    AddSmsTemplateRequest() = default ;
    AddSmsTemplateRequest(const AddSmsTemplateRequest &) = default ;
    AddSmsTemplateRequest(AddSmsTemplateRequest &&) = default ;
    AddSmsTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSmsTemplateRequest() = default ;
    AddSmsTemplateRequest& operator=(const AddSmsTemplateRequest &) = default ;
    AddSmsTemplateRequest& operator=(AddSmsTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->templateContent_ == nullptr && this->templateName_ == nullptr
        && this->templateType_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddSmsTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddSmsTemplateRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddSmsTemplateRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddSmsTemplateRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string getTemplateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline AddSmsTemplateRequest& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline AddSmsTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int32_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
    inline AddSmsTemplateRequest& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    // The description for the SMS template application. The length must not exceed 100 characters.
    // 
    // This is reference information for template review. Providing a complete application description helps reviewers understand your business scenario and improves review efficiency. Guidelines:
    // 
    // - You can provide the usage scenario of business that has been launched.
    // - You can provide SMS examples for real scenarios to demonstrate your business scenario.
    // - You can provide the variable parameter content, describing the business usage scenario in detail and the reason for choosing this variable attribute.
    // - You can provide website links of actual business, registered domain addresses, app market download links, and so on.
    // - For login scenarios, you can provide a test account and password.
    // 
    // This parameter is required.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The template content. The length must not exceed 500 characters.
    // 
    // The template content and variable content must comply with the [SMS template specifications](https://help.aliyun.com/document_detail/463161.html); otherwise, the template review will fail. You can also view common template examples on the [Apply for template](https://dysms.console.aliyun.com/domestic/text/template/add) page. Using example templates can improve review efficiency and success rate. For variable specifications, see [TemplateContent parameter variable specifications](https://help.aliyun.com/document_detail/2806243.html).
    // 
    // This parameter is required.
    shared_ptr<string> templateContent_ {};
    // The template name. The length must not exceed 30 characters.
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    // The SMS type. Valid values:
    // 
    // - **0**: verification code.
    // - **1**: notification SMS.
    // - **2**: promotional SMS.
    // - **3**: international/Hong Kong, Macao, and Taiwan messages.
    // 
    // > Only enterprise-verified users can apply for promotional SMS and international/Hong Kong, Macao, and Taiwan messages. For details about the differences between individual and enterprise user privileges, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
    // 
    // This parameter is required.
    shared_ptr<int32_t> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
