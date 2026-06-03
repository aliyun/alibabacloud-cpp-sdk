// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMSTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESMSTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class CreateSmsTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmsTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizUrl, bizUrl_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SmsTemplateContent, smsTemplateContent_);
      DARABONBA_PTR_TO_JSON(SmsTemplateName, smsTemplateName_);
      DARABONBA_PTR_TO_JSON(SmsTemplateRule, smsTemplateRule_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmsTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUrl, bizUrl_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateContent, smsTemplateContent_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateName, smsTemplateName_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateRule, smsTemplateRule_);
    };
    CreateSmsTemplateRequest() = default ;
    CreateSmsTemplateRequest(const CreateSmsTemplateRequest &) = default ;
    CreateSmsTemplateRequest(CreateSmsTemplateRequest &&) = default ;
    CreateSmsTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmsTemplateRequest() = default ;
    CreateSmsTemplateRequest& operator=(const CreateSmsTemplateRequest &) = default ;
    CreateSmsTemplateRequest& operator=(CreateSmsTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizUrl_ == nullptr
        && this->businessType_ == nullptr && this->ownerId_ == nullptr && this->prodCode_ == nullptr && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->smsTemplateContent_ == nullptr && this->smsTemplateName_ == nullptr && this->smsTemplateRule_ == nullptr; };
    // bizUrl Field Functions 
    bool hasBizUrl() const { return this->bizUrl_ != nullptr;};
    void deleteBizUrl() { this->bizUrl_ = nullptr;};
    inline string getBizUrl() const { DARABONBA_PTR_GET_DEFAULT(bizUrl_, "") };
    inline CreateSmsTemplateRequest& setBizUrl(string bizUrl) { DARABONBA_PTR_SET_VALUE(bizUrl_, bizUrl) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CreateSmsTemplateRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSmsTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prodCode Field Functions 
    bool hasProdCode() const { return this->prodCode_ != nullptr;};
    void deleteProdCode() { this->prodCode_ = nullptr;};
    inline string getProdCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
    inline CreateSmsTemplateRequest& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateSmsTemplateRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSmsTemplateRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSmsTemplateRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smsTemplateContent Field Functions 
    bool hasSmsTemplateContent() const { return this->smsTemplateContent_ != nullptr;};
    void deleteSmsTemplateContent() { this->smsTemplateContent_ = nullptr;};
    inline string getSmsTemplateContent() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateContent_, "") };
    inline CreateSmsTemplateRequest& setSmsTemplateContent(string smsTemplateContent) { DARABONBA_PTR_SET_VALUE(smsTemplateContent_, smsTemplateContent) };


    // smsTemplateName Field Functions 
    bool hasSmsTemplateName() const { return this->smsTemplateName_ != nullptr;};
    void deleteSmsTemplateName() { this->smsTemplateName_ = nullptr;};
    inline string getSmsTemplateName() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateName_, "") };
    inline CreateSmsTemplateRequest& setSmsTemplateName(string smsTemplateName) { DARABONBA_PTR_SET_VALUE(smsTemplateName_, smsTemplateName) };


    // smsTemplateRule Field Functions 
    bool hasSmsTemplateRule() const { return this->smsTemplateRule_ != nullptr;};
    void deleteSmsTemplateRule() { this->smsTemplateRule_ = nullptr;};
    inline string getSmsTemplateRule() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateRule_, "") };
    inline CreateSmsTemplateRequest& setSmsTemplateRule(string smsTemplateRule) { DARABONBA_PTR_SET_VALUE(smsTemplateRule_, smsTemplateRule) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizUrl_ {};
    // This parameter is required.
    shared_ptr<string> businessType_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> prodCode_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> smsTemplateContent_ {};
    // This parameter is required.
    shared_ptr<string> smsTemplateName_ {};
    // This parameter is required.
    shared_ptr<string> smsTemplateRule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
