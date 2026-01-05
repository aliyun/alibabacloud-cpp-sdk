// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYLOGISTICSSMSMAILNOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYLOGISTICSSMSMAILNOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class VerifyLogisticsSmsMailNoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyLogisticsSmsMailNoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpressCompanyCode, expressCompanyCode_);
      DARABONBA_PTR_TO_JSON(MailNo, mailNo_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlatformCompanyCode, platformCompanyCode_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyLogisticsSmsMailNoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpressCompanyCode, expressCompanyCode_);
      DARABONBA_PTR_FROM_JSON(MailNo, mailNo_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlatformCompanyCode, platformCompanyCode_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    VerifyLogisticsSmsMailNoRequest() = default ;
    VerifyLogisticsSmsMailNoRequest(const VerifyLogisticsSmsMailNoRequest &) = default ;
    VerifyLogisticsSmsMailNoRequest(VerifyLogisticsSmsMailNoRequest &&) = default ;
    VerifyLogisticsSmsMailNoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyLogisticsSmsMailNoRequest() = default ;
    VerifyLogisticsSmsMailNoRequest& operator=(const VerifyLogisticsSmsMailNoRequest &) = default ;
    VerifyLogisticsSmsMailNoRequest& operator=(VerifyLogisticsSmsMailNoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expressCompanyCode_ == nullptr
        && this->mailNo_ == nullptr && this->ownerId_ == nullptr && this->platformCompanyCode_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // expressCompanyCode Field Functions 
    bool hasExpressCompanyCode() const { return this->expressCompanyCode_ != nullptr;};
    void deleteExpressCompanyCode() { this->expressCompanyCode_ = nullptr;};
    inline string getExpressCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(expressCompanyCode_, "") };
    inline VerifyLogisticsSmsMailNoRequest& setExpressCompanyCode(string expressCompanyCode) { DARABONBA_PTR_SET_VALUE(expressCompanyCode_, expressCompanyCode) };


    // mailNo Field Functions 
    bool hasMailNo() const { return this->mailNo_ != nullptr;};
    void deleteMailNo() { this->mailNo_ = nullptr;};
    inline string getMailNo() const { DARABONBA_PTR_GET_DEFAULT(mailNo_, "") };
    inline VerifyLogisticsSmsMailNoRequest& setMailNo(string mailNo) { DARABONBA_PTR_SET_VALUE(mailNo_, mailNo) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline VerifyLogisticsSmsMailNoRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // platformCompanyCode Field Functions 
    bool hasPlatformCompanyCode() const { return this->platformCompanyCode_ != nullptr;};
    void deletePlatformCompanyCode() { this->platformCompanyCode_ = nullptr;};
    inline string getPlatformCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(platformCompanyCode_, "") };
    inline VerifyLogisticsSmsMailNoRequest& setPlatformCompanyCode(string platformCompanyCode) { DARABONBA_PTR_SET_VALUE(platformCompanyCode_, platformCompanyCode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline VerifyLogisticsSmsMailNoRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline VerifyLogisticsSmsMailNoRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> expressCompanyCode_ {};
    // This parameter is required.
    shared_ptr<string> mailNo_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> platformCompanyCode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
