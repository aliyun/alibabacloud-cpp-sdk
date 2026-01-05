// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMSTRADEMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESMSTRADEMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateSmsTrademarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmsTrademarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrademarkApplicantName, trademarkApplicantName_);
      DARABONBA_PTR_TO_JSON(TrademarkEffExpDate, trademarkEffExpDate_);
      DARABONBA_PTR_TO_JSON(TrademarkName, trademarkName_);
      DARABONBA_PTR_TO_JSON(TrademarkPic, trademarkPic_);
      DARABONBA_PTR_TO_JSON(TrademarkRegistrationNumber, trademarkRegistrationNumber_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmsTrademarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrademarkApplicantName, trademarkApplicantName_);
      DARABONBA_PTR_FROM_JSON(TrademarkEffExpDate, trademarkEffExpDate_);
      DARABONBA_PTR_FROM_JSON(TrademarkName, trademarkName_);
      DARABONBA_PTR_FROM_JSON(TrademarkPic, trademarkPic_);
      DARABONBA_PTR_FROM_JSON(TrademarkRegistrationNumber, trademarkRegistrationNumber_);
    };
    CreateSmsTrademarkRequest() = default ;
    CreateSmsTrademarkRequest(const CreateSmsTrademarkRequest &) = default ;
    CreateSmsTrademarkRequest(CreateSmsTrademarkRequest &&) = default ;
    CreateSmsTrademarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmsTrademarkRequest() = default ;
    CreateSmsTrademarkRequest& operator=(const CreateSmsTrademarkRequest &) = default ;
    CreateSmsTrademarkRequest& operator=(CreateSmsTrademarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->trademarkApplicantName_ == nullptr && this->trademarkEffExpDate_ == nullptr && this->trademarkName_ == nullptr
        && this->trademarkPic_ == nullptr && this->trademarkRegistrationNumber_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSmsTrademarkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSmsTrademarkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSmsTrademarkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trademarkApplicantName Field Functions 
    bool hasTrademarkApplicantName() const { return this->trademarkApplicantName_ != nullptr;};
    void deleteTrademarkApplicantName() { this->trademarkApplicantName_ = nullptr;};
    inline string getTrademarkApplicantName() const { DARABONBA_PTR_GET_DEFAULT(trademarkApplicantName_, "") };
    inline CreateSmsTrademarkRequest& setTrademarkApplicantName(string trademarkApplicantName) { DARABONBA_PTR_SET_VALUE(trademarkApplicantName_, trademarkApplicantName) };


    // trademarkEffExpDate Field Functions 
    bool hasTrademarkEffExpDate() const { return this->trademarkEffExpDate_ != nullptr;};
    void deleteTrademarkEffExpDate() { this->trademarkEffExpDate_ = nullptr;};
    inline string getTrademarkEffExpDate() const { DARABONBA_PTR_GET_DEFAULT(trademarkEffExpDate_, "") };
    inline CreateSmsTrademarkRequest& setTrademarkEffExpDate(string trademarkEffExpDate) { DARABONBA_PTR_SET_VALUE(trademarkEffExpDate_, trademarkEffExpDate) };


    // trademarkName Field Functions 
    bool hasTrademarkName() const { return this->trademarkName_ != nullptr;};
    void deleteTrademarkName() { this->trademarkName_ = nullptr;};
    inline string getTrademarkName() const { DARABONBA_PTR_GET_DEFAULT(trademarkName_, "") };
    inline CreateSmsTrademarkRequest& setTrademarkName(string trademarkName) { DARABONBA_PTR_SET_VALUE(trademarkName_, trademarkName) };


    // trademarkPic Field Functions 
    bool hasTrademarkPic() const { return this->trademarkPic_ != nullptr;};
    void deleteTrademarkPic() { this->trademarkPic_ = nullptr;};
    inline string getTrademarkPic() const { DARABONBA_PTR_GET_DEFAULT(trademarkPic_, "") };
    inline CreateSmsTrademarkRequest& setTrademarkPic(string trademarkPic) { DARABONBA_PTR_SET_VALUE(trademarkPic_, trademarkPic) };


    // trademarkRegistrationNumber Field Functions 
    bool hasTrademarkRegistrationNumber() const { return this->trademarkRegistrationNumber_ != nullptr;};
    void deleteTrademarkRegistrationNumber() { this->trademarkRegistrationNumber_ = nullptr;};
    inline string getTrademarkRegistrationNumber() const { DARABONBA_PTR_GET_DEFAULT(trademarkRegistrationNumber_, "") };
    inline CreateSmsTrademarkRequest& setTrademarkRegistrationNumber(string trademarkRegistrationNumber) { DARABONBA_PTR_SET_VALUE(trademarkRegistrationNumber_, trademarkRegistrationNumber) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 申请人名称
    // 
    // This parameter is required.
    shared_ptr<string> trademarkApplicantName_ {};
    // 专用权生失效日期
    // 
    // This parameter is required.
    shared_ptr<string> trademarkEffExpDate_ {};
    // 商标名称
    // 
    // This parameter is required.
    shared_ptr<string> trademarkName_ {};
    // 商标详情截图osskey
    // 
    // This parameter is required.
    shared_ptr<string> trademarkPic_ {};
    // 商标注册号
    // 
    // This parameter is required.
    shared_ptr<string> trademarkRegistrationNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
