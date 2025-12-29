// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CallbackSeed, callbackSeed_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(FaceRetainedImageUrl, faceRetainedImageUrl_);
      DARABONBA_PTR_TO_JSON(FailedRedirectUrl, failedRedirectUrl_);
      DARABONBA_PTR_TO_JSON(IdCardBackImageUrl, idCardBackImageUrl_);
      DARABONBA_PTR_TO_JSON(IdCardFrontImageUrl, idCardFrontImageUrl_);
      DARABONBA_PTR_TO_JSON(IdCardNumber, idCardNumber_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PassedRedirectUrl, passedRedirectUrl_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserIp, userIp_);
      DARABONBA_PTR_TO_JSON(UserPhoneNumber, userPhoneNumber_);
      DARABONBA_PTR_TO_JSON(UserRegistTime, userRegistTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CallbackSeed, callbackSeed_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(FaceRetainedImageUrl, faceRetainedImageUrl_);
      DARABONBA_PTR_FROM_JSON(FailedRedirectUrl, failedRedirectUrl_);
      DARABONBA_PTR_FROM_JSON(IdCardBackImageUrl, idCardBackImageUrl_);
      DARABONBA_PTR_FROM_JSON(IdCardFrontImageUrl, idCardFrontImageUrl_);
      DARABONBA_PTR_FROM_JSON(IdCardNumber, idCardNumber_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PassedRedirectUrl, passedRedirectUrl_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserIp, userIp_);
      DARABONBA_PTR_FROM_JSON(UserPhoneNumber, userPhoneNumber_);
      DARABONBA_PTR_FROM_JSON(UserRegistTime, userRegistTime_);
    };
    DescribeVerifyTokenRequest() = default ;
    DescribeVerifyTokenRequest(const DescribeVerifyTokenRequest &) = default ;
    DescribeVerifyTokenRequest(DescribeVerifyTokenRequest &&) = default ;
    DescribeVerifyTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyTokenRequest() = default ;
    DescribeVerifyTokenRequest& operator=(const DescribeVerifyTokenRequest &) = default ;
    DescribeVerifyTokenRequest& operator=(DescribeVerifyTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizType_ == nullptr && this->callbackSeed_ == nullptr && this->callbackUrl_ == nullptr && this->faceRetainedImageUrl_ == nullptr && this->failedRedirectUrl_ == nullptr
        && this->idCardBackImageUrl_ == nullptr && this->idCardFrontImageUrl_ == nullptr && this->idCardNumber_ == nullptr && this->name_ == nullptr && this->passedRedirectUrl_ == nullptr
        && this->userId_ == nullptr && this->userIp_ == nullptr && this->userPhoneNumber_ == nullptr && this->userRegistTime_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline DescribeVerifyTokenRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeVerifyTokenRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // callbackSeed Field Functions 
    bool hasCallbackSeed() const { return this->callbackSeed_ != nullptr;};
    void deleteCallbackSeed() { this->callbackSeed_ = nullptr;};
    inline string getCallbackSeed() const { DARABONBA_PTR_GET_DEFAULT(callbackSeed_, "") };
    inline DescribeVerifyTokenRequest& setCallbackSeed(string callbackSeed) { DARABONBA_PTR_SET_VALUE(callbackSeed_, callbackSeed) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline DescribeVerifyTokenRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // faceRetainedImageUrl Field Functions 
    bool hasFaceRetainedImageUrl() const { return this->faceRetainedImageUrl_ != nullptr;};
    void deleteFaceRetainedImageUrl() { this->faceRetainedImageUrl_ = nullptr;};
    inline string getFaceRetainedImageUrl() const { DARABONBA_PTR_GET_DEFAULT(faceRetainedImageUrl_, "") };
    inline DescribeVerifyTokenRequest& setFaceRetainedImageUrl(string faceRetainedImageUrl) { DARABONBA_PTR_SET_VALUE(faceRetainedImageUrl_, faceRetainedImageUrl) };


    // failedRedirectUrl Field Functions 
    bool hasFailedRedirectUrl() const { return this->failedRedirectUrl_ != nullptr;};
    void deleteFailedRedirectUrl() { this->failedRedirectUrl_ = nullptr;};
    inline string getFailedRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(failedRedirectUrl_, "") };
    inline DescribeVerifyTokenRequest& setFailedRedirectUrl(string failedRedirectUrl) { DARABONBA_PTR_SET_VALUE(failedRedirectUrl_, failedRedirectUrl) };


    // idCardBackImageUrl Field Functions 
    bool hasIdCardBackImageUrl() const { return this->idCardBackImageUrl_ != nullptr;};
    void deleteIdCardBackImageUrl() { this->idCardBackImageUrl_ = nullptr;};
    inline string getIdCardBackImageUrl() const { DARABONBA_PTR_GET_DEFAULT(idCardBackImageUrl_, "") };
    inline DescribeVerifyTokenRequest& setIdCardBackImageUrl(string idCardBackImageUrl) { DARABONBA_PTR_SET_VALUE(idCardBackImageUrl_, idCardBackImageUrl) };


    // idCardFrontImageUrl Field Functions 
    bool hasIdCardFrontImageUrl() const { return this->idCardFrontImageUrl_ != nullptr;};
    void deleteIdCardFrontImageUrl() { this->idCardFrontImageUrl_ = nullptr;};
    inline string getIdCardFrontImageUrl() const { DARABONBA_PTR_GET_DEFAULT(idCardFrontImageUrl_, "") };
    inline DescribeVerifyTokenRequest& setIdCardFrontImageUrl(string idCardFrontImageUrl) { DARABONBA_PTR_SET_VALUE(idCardFrontImageUrl_, idCardFrontImageUrl) };


    // idCardNumber Field Functions 
    bool hasIdCardNumber() const { return this->idCardNumber_ != nullptr;};
    void deleteIdCardNumber() { this->idCardNumber_ = nullptr;};
    inline string getIdCardNumber() const { DARABONBA_PTR_GET_DEFAULT(idCardNumber_, "") };
    inline DescribeVerifyTokenRequest& setIdCardNumber(string idCardNumber) { DARABONBA_PTR_SET_VALUE(idCardNumber_, idCardNumber) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVerifyTokenRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // passedRedirectUrl Field Functions 
    bool hasPassedRedirectUrl() const { return this->passedRedirectUrl_ != nullptr;};
    void deletePassedRedirectUrl() { this->passedRedirectUrl_ = nullptr;};
    inline string getPassedRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(passedRedirectUrl_, "") };
    inline DescribeVerifyTokenRequest& setPassedRedirectUrl(string passedRedirectUrl) { DARABONBA_PTR_SET_VALUE(passedRedirectUrl_, passedRedirectUrl) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeVerifyTokenRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userIp Field Functions 
    bool hasUserIp() const { return this->userIp_ != nullptr;};
    void deleteUserIp() { this->userIp_ = nullptr;};
    inline string getUserIp() const { DARABONBA_PTR_GET_DEFAULT(userIp_, "") };
    inline DescribeVerifyTokenRequest& setUserIp(string userIp) { DARABONBA_PTR_SET_VALUE(userIp_, userIp) };


    // userPhoneNumber Field Functions 
    bool hasUserPhoneNumber() const { return this->userPhoneNumber_ != nullptr;};
    void deleteUserPhoneNumber() { this->userPhoneNumber_ = nullptr;};
    inline string getUserPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(userPhoneNumber_, "") };
    inline DescribeVerifyTokenRequest& setUserPhoneNumber(string userPhoneNumber) { DARABONBA_PTR_SET_VALUE(userPhoneNumber_, userPhoneNumber) };


    // userRegistTime Field Functions 
    bool hasUserRegistTime() const { return this->userRegistTime_ != nullptr;};
    void deleteUserRegistTime() { this->userRegistTime_ = nullptr;};
    inline int64_t getUserRegistTime() const { DARABONBA_PTR_GET_DEFAULT(userRegistTime_, 0L) };
    inline DescribeVerifyTokenRequest& setUserRegistTime(int64_t userRegistTime) { DARABONBA_PTR_SET_VALUE(userRegistTime_, userRegistTime) };


  protected:
    // Verification ID. A unique ID that identifies a verification task, not exceeding 64 characters. For a single verification task, the system supports unlimited submissions until the final verification is passed and the task is completed.
    // 
    // > Different BizIds are required for different verification tasks.
    // 
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    // Identifier for the business scenario using the real person authentication service. Please refer to [Business Settings](https://help.aliyun.com/document_detail/127885.html) and complete the creation in the console first.
    // 
    // This parameter is required.
    shared_ptr<string> bizType_ {};
    // Callback seed.
    shared_ptr<string> callbackSeed_ {};
    // Callback URL.
    shared_ptr<string> callbackUrl_ {};
    // HTTP or HTTPS link to the retained portrait photo.
    shared_ptr<string> faceRetainedImageUrl_ {};
    // Redirect URL for failed verification.
    shared_ptr<string> failedRedirectUrl_ {};
    // HTTP or HTTPS link to the national emblem side of the ID card image.
    shared_ptr<string> idCardBackImageUrl_ {};
    // HTTP or HTTPS link to the portrait side of the ID card image.
    shared_ptr<string> idCardFrontImageUrl_ {};
    // ID card number.
    shared_ptr<string> idCardNumber_ {};
    // Name.
    shared_ptr<string> name_ {};
    // Redirect URL upon successful verification.
    shared_ptr<string> passedRedirectUrl_ {};
    // ID of the end user, such as the account ID of the end user.
    shared_ptr<string> userId_ {};
    // User IP.
    shared_ptr<string> userIp_ {};
    // User phone number.
    shared_ptr<string> userPhoneNumber_ {};
    // User registration time. Expressed in timestamp format, unit: milliseconds.
    shared_ptr<int64_t> userRegistTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
