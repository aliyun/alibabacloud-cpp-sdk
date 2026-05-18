// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class CreateTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromType, fromType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SmsContent, smsContent_);
      DARABONBA_PTR_TO_JSON(SmsType, smsType_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateNickName, templateNickName_);
      DARABONBA_PTR_TO_JSON(TemplateSubject, templateSubject_);
      DARABONBA_PTR_TO_JSON(TemplateText, templateText_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromType, fromType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SmsContent, smsContent_);
      DARABONBA_PTR_FROM_JSON(SmsType, smsType_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateNickName, templateNickName_);
      DARABONBA_PTR_FROM_JSON(TemplateSubject, templateSubject_);
      DARABONBA_PTR_FROM_JSON(TemplateText, templateText_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    CreateTemplateRequest() = default ;
    CreateTemplateRequest(const CreateTemplateRequest &) = default ;
    CreateTemplateRequest(CreateTemplateRequest &&) = default ;
    CreateTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateRequest() = default ;
    CreateTemplateRequest& operator=(const CreateTemplateRequest &) = default ;
    CreateTemplateRequest& operator=(CreateTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fromType_ == nullptr
        && this->ownerId_ == nullptr && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->smsContent_ == nullptr
        && this->smsType_ == nullptr && this->templateName_ == nullptr && this->templateNickName_ == nullptr && this->templateSubject_ == nullptr && this->templateText_ == nullptr
        && this->templateType_ == nullptr; };
    // fromType Field Functions 
    bool hasFromType() const { return this->fromType_ != nullptr;};
    void deleteFromType() { this->fromType_ = nullptr;};
    inline int32_t getFromType() const { DARABONBA_PTR_GET_DEFAULT(fromType_, 0) };
    inline CreateTemplateRequest& setFromType(int32_t fromType) { DARABONBA_PTR_SET_VALUE(fromType_, fromType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateTemplateRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTemplateRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTemplateRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smsContent Field Functions 
    bool hasSmsContent() const { return this->smsContent_ != nullptr;};
    void deleteSmsContent() { this->smsContent_ = nullptr;};
    inline string getSmsContent() const { DARABONBA_PTR_GET_DEFAULT(smsContent_, "") };
    inline CreateTemplateRequest& setSmsContent(string smsContent) { DARABONBA_PTR_SET_VALUE(smsContent_, smsContent) };


    // smsType Field Functions 
    bool hasSmsType() const { return this->smsType_ != nullptr;};
    void deleteSmsType() { this->smsType_ = nullptr;};
    inline int32_t getSmsType() const { DARABONBA_PTR_GET_DEFAULT(smsType_, 0) };
    inline CreateTemplateRequest& setSmsType(int32_t smsType) { DARABONBA_PTR_SET_VALUE(smsType_, smsType) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateNickName Field Functions 
    bool hasTemplateNickName() const { return this->templateNickName_ != nullptr;};
    void deleteTemplateNickName() { this->templateNickName_ = nullptr;};
    inline string getTemplateNickName() const { DARABONBA_PTR_GET_DEFAULT(templateNickName_, "") };
    inline CreateTemplateRequest& setTemplateNickName(string templateNickName) { DARABONBA_PTR_SET_VALUE(templateNickName_, templateNickName) };


    // templateSubject Field Functions 
    bool hasTemplateSubject() const { return this->templateSubject_ != nullptr;};
    void deleteTemplateSubject() { this->templateSubject_ = nullptr;};
    inline string getTemplateSubject() const { DARABONBA_PTR_GET_DEFAULT(templateSubject_, "") };
    inline CreateTemplateRequest& setTemplateSubject(string templateSubject) { DARABONBA_PTR_SET_VALUE(templateSubject_, templateSubject) };


    // templateText Field Functions 
    bool hasTemplateText() const { return this->templateText_ != nullptr;};
    void deleteTemplateText() { this->templateText_ = nullptr;};
    inline string getTemplateText() const { DARABONBA_PTR_GET_DEFAULT(templateText_, "") };
    inline CreateTemplateRequest& setTemplateText(string templateText) { DARABONBA_PTR_SET_VALUE(templateText_, templateText) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int32_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
    inline CreateTemplateRequest& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    shared_ptr<int32_t> fromType_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> smsContent_ {};
    shared_ptr<int32_t> smsType_ {};
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    shared_ptr<string> templateNickName_ {};
    shared_ptr<string> templateSubject_ {};
    shared_ptr<string> templateText_ {};
    shared_ptr<int32_t> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
