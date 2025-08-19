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
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->bizType_ != nullptr && this->callbackSeed_ != nullptr && this->callbackUrl_ != nullptr && this->faceRetainedImageUrl_ != nullptr && this->failedRedirectUrl_ != nullptr
        && this->idCardBackImageUrl_ != nullptr && this->idCardFrontImageUrl_ != nullptr && this->idCardNumber_ != nullptr && this->name_ != nullptr && this->passedRedirectUrl_ != nullptr
        && this->userId_ != nullptr && this->userIp_ != nullptr && this->userPhoneNumber_ != nullptr && this->userRegistTime_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline DescribeVerifyTokenRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeVerifyTokenRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // callbackSeed Field Functions 
    bool hasCallbackSeed() const { return this->callbackSeed_ != nullptr;};
    void deleteCallbackSeed() { this->callbackSeed_ = nullptr;};
    inline string callbackSeed() const { DARABONBA_PTR_GET_DEFAULT(callbackSeed_, "") };
    inline DescribeVerifyTokenRequest& setCallbackSeed(string callbackSeed) { DARABONBA_PTR_SET_VALUE(callbackSeed_, callbackSeed) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline DescribeVerifyTokenRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // faceRetainedImageUrl Field Functions 
    bool hasFaceRetainedImageUrl() const { return this->faceRetainedImageUrl_ != nullptr;};
    void deleteFaceRetainedImageUrl() { this->faceRetainedImageUrl_ = nullptr;};
    inline string faceRetainedImageUrl() const { DARABONBA_PTR_GET_DEFAULT(faceRetainedImageUrl_, "") };
    inline DescribeVerifyTokenRequest& setFaceRetainedImageUrl(string faceRetainedImageUrl) { DARABONBA_PTR_SET_VALUE(faceRetainedImageUrl_, faceRetainedImageUrl) };


    // failedRedirectUrl Field Functions 
    bool hasFailedRedirectUrl() const { return this->failedRedirectUrl_ != nullptr;};
    void deleteFailedRedirectUrl() { this->failedRedirectUrl_ = nullptr;};
    inline string failedRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(failedRedirectUrl_, "") };
    inline DescribeVerifyTokenRequest& setFailedRedirectUrl(string failedRedirectUrl) { DARABONBA_PTR_SET_VALUE(failedRedirectUrl_, failedRedirectUrl) };


    // idCardBackImageUrl Field Functions 
    bool hasIdCardBackImageUrl() const { return this->idCardBackImageUrl_ != nullptr;};
    void deleteIdCardBackImageUrl() { this->idCardBackImageUrl_ = nullptr;};
    inline string idCardBackImageUrl() const { DARABONBA_PTR_GET_DEFAULT(idCardBackImageUrl_, "") };
    inline DescribeVerifyTokenRequest& setIdCardBackImageUrl(string idCardBackImageUrl) { DARABONBA_PTR_SET_VALUE(idCardBackImageUrl_, idCardBackImageUrl) };


    // idCardFrontImageUrl Field Functions 
    bool hasIdCardFrontImageUrl() const { return this->idCardFrontImageUrl_ != nullptr;};
    void deleteIdCardFrontImageUrl() { this->idCardFrontImageUrl_ = nullptr;};
    inline string idCardFrontImageUrl() const { DARABONBA_PTR_GET_DEFAULT(idCardFrontImageUrl_, "") };
    inline DescribeVerifyTokenRequest& setIdCardFrontImageUrl(string idCardFrontImageUrl) { DARABONBA_PTR_SET_VALUE(idCardFrontImageUrl_, idCardFrontImageUrl) };


    // idCardNumber Field Functions 
    bool hasIdCardNumber() const { return this->idCardNumber_ != nullptr;};
    void deleteIdCardNumber() { this->idCardNumber_ = nullptr;};
    inline string idCardNumber() const { DARABONBA_PTR_GET_DEFAULT(idCardNumber_, "") };
    inline DescribeVerifyTokenRequest& setIdCardNumber(string idCardNumber) { DARABONBA_PTR_SET_VALUE(idCardNumber_, idCardNumber) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVerifyTokenRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // passedRedirectUrl Field Functions 
    bool hasPassedRedirectUrl() const { return this->passedRedirectUrl_ != nullptr;};
    void deletePassedRedirectUrl() { this->passedRedirectUrl_ = nullptr;};
    inline string passedRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(passedRedirectUrl_, "") };
    inline DescribeVerifyTokenRequest& setPassedRedirectUrl(string passedRedirectUrl) { DARABONBA_PTR_SET_VALUE(passedRedirectUrl_, passedRedirectUrl) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeVerifyTokenRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userIp Field Functions 
    bool hasUserIp() const { return this->userIp_ != nullptr;};
    void deleteUserIp() { this->userIp_ = nullptr;};
    inline string userIp() const { DARABONBA_PTR_GET_DEFAULT(userIp_, "") };
    inline DescribeVerifyTokenRequest& setUserIp(string userIp) { DARABONBA_PTR_SET_VALUE(userIp_, userIp) };


    // userPhoneNumber Field Functions 
    bool hasUserPhoneNumber() const { return this->userPhoneNumber_ != nullptr;};
    void deleteUserPhoneNumber() { this->userPhoneNumber_ = nullptr;};
    inline string userPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(userPhoneNumber_, "") };
    inline DescribeVerifyTokenRequest& setUserPhoneNumber(string userPhoneNumber) { DARABONBA_PTR_SET_VALUE(userPhoneNumber_, userPhoneNumber) };


    // userRegistTime Field Functions 
    bool hasUserRegistTime() const { return this->userRegistTime_ != nullptr;};
    void deleteUserRegistTime() { this->userRegistTime_ = nullptr;};
    inline int64_t userRegistTime() const { DARABONBA_PTR_GET_DEFAULT(userRegistTime_, 0L) };
    inline DescribeVerifyTokenRequest& setUserRegistTime(int64_t userRegistTime) { DARABONBA_PTR_SET_VALUE(userRegistTime_, userRegistTime) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> callbackSeed_ = nullptr;
    std::shared_ptr<string> callbackUrl_ = nullptr;
    std::shared_ptr<string> faceRetainedImageUrl_ = nullptr;
    std::shared_ptr<string> failedRedirectUrl_ = nullptr;
    std::shared_ptr<string> idCardBackImageUrl_ = nullptr;
    std::shared_ptr<string> idCardFrontImageUrl_ = nullptr;
    std::shared_ptr<string> idCardNumber_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> passedRedirectUrl_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userIp_ = nullptr;
    std::shared_ptr<string> userPhoneNumber_ = nullptr;
    std::shared_ptr<int64_t> userRegistTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
