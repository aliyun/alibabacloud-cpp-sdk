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
    // The name of the applicant. The value can be up to 50 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> trademarkApplicantName_ {};
    // The effective and expiration dates of the exclusive right.
    // 
    // This parameter is required.
    shared_ptr<string> trademarkEffExpDate_ {};
    // The trademark name. The value can be up to 15 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> trademarkName_ {};
    // The fileKey of the trademark details screenshot.
    // 
    // 1. How to query a trademark:
    // - Log on to the China Trademark Network, click **Trademark Online Query**, and take a screenshot of the trademark details.
    // - Accept the terms of use and enter the **Application/Registration Number** to query.
    // - Click the **Application/Registration Number** to view the details.
    // 
    // 2. Information about the trademark file uploaded to OSS. File upload requirements:
    // - The name of the file to be uploaded cannot contain Chinese characters or special characters.
    // - Only images in JPG, PNG, GIF, and JPEG formats are supported, and the image size cannot exceed 5 MB.
    // - The screenshot must contain the complete URL.
    // - The trademark image must be clear and identical to the **signature name**.
    // - The **applicant name** must be identical to the name of the enterprise or institution associated with the signature.
    // - The trademark status must be registered trademark.
    // 
    // 3. To obtain the fileKey, see [Upload files to OSS](https://help.aliyun.com/document_detail/2833114.html).
    // 
    // This parameter is required.
    shared_ptr<string> trademarkPic_ {};
    // The trademark registration number. The value can be up to 15 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> trademarkRegistrationNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
