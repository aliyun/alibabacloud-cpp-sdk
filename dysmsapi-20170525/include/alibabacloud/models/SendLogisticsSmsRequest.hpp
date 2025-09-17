// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDLOGISTICSSMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDLOGISTICSSMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SendLogisticsSmsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendLogisticsSmsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpressCompanyCode, expressCompanyCode_);
      DARABONBA_PTR_TO_JSON(MailNo, mailNo_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlatformCompanyCode, platformCompanyCode_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateParam, templateParam_);
    };
    friend void from_json(const Darabonba::Json& j, SendLogisticsSmsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpressCompanyCode, expressCompanyCode_);
      DARABONBA_PTR_FROM_JSON(MailNo, mailNo_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlatformCompanyCode, platformCompanyCode_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateParam, templateParam_);
    };
    SendLogisticsSmsRequest() = default ;
    SendLogisticsSmsRequest(const SendLogisticsSmsRequest &) = default ;
    SendLogisticsSmsRequest(SendLogisticsSmsRequest &&) = default ;
    SendLogisticsSmsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendLogisticsSmsRequest() = default ;
    SendLogisticsSmsRequest& operator=(const SendLogisticsSmsRequest &) = default ;
    SendLogisticsSmsRequest& operator=(SendLogisticsSmsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expressCompanyCode_ != nullptr
        && this->mailNo_ != nullptr && this->outId_ != nullptr && this->ownerId_ != nullptr && this->platformCompanyCode_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->signName_ != nullptr && this->templateCode_ != nullptr && this->templateParam_ != nullptr; };
    // expressCompanyCode Field Functions 
    bool hasExpressCompanyCode() const { return this->expressCompanyCode_ != nullptr;};
    void deleteExpressCompanyCode() { this->expressCompanyCode_ = nullptr;};
    inline string expressCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(expressCompanyCode_, "") };
    inline SendLogisticsSmsRequest& setExpressCompanyCode(string expressCompanyCode) { DARABONBA_PTR_SET_VALUE(expressCompanyCode_, expressCompanyCode) };


    // mailNo Field Functions 
    bool hasMailNo() const { return this->mailNo_ != nullptr;};
    void deleteMailNo() { this->mailNo_ = nullptr;};
    inline string mailNo() const { DARABONBA_PTR_GET_DEFAULT(mailNo_, "") };
    inline SendLogisticsSmsRequest& setMailNo(string mailNo) { DARABONBA_PTR_SET_VALUE(mailNo_, mailNo) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline SendLogisticsSmsRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SendLogisticsSmsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // platformCompanyCode Field Functions 
    bool hasPlatformCompanyCode() const { return this->platformCompanyCode_ != nullptr;};
    void deletePlatformCompanyCode() { this->platformCompanyCode_ = nullptr;};
    inline string platformCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(platformCompanyCode_, "") };
    inline SendLogisticsSmsRequest& setPlatformCompanyCode(string platformCompanyCode) { DARABONBA_PTR_SET_VALUE(platformCompanyCode_, platformCompanyCode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SendLogisticsSmsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SendLogisticsSmsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string signName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline SendLogisticsSmsRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline SendLogisticsSmsRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateParam Field Functions 
    bool hasTemplateParam() const { return this->templateParam_ != nullptr;};
    void deleteTemplateParam() { this->templateParam_ = nullptr;};
    inline string templateParam() const { DARABONBA_PTR_GET_DEFAULT(templateParam_, "") };
    inline SendLogisticsSmsRequest& setTemplateParam(string templateParam) { DARABONBA_PTR_SET_VALUE(templateParam_, templateParam) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> expressCompanyCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mailNo_ = nullptr;
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> platformCompanyCode_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> signName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateCode_ = nullptr;
    std::shared_ptr<string> templateParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
