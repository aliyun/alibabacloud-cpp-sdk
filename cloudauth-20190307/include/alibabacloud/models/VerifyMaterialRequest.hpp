// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYMATERIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYMATERIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class VerifyMaterialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyMaterialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(FaceImageUrl, faceImageUrl_);
      DARABONBA_PTR_TO_JSON(IdCardBackImageUrl, idCardBackImageUrl_);
      DARABONBA_PTR_TO_JSON(IdCardFrontImageUrl, idCardFrontImageUrl_);
      DARABONBA_PTR_TO_JSON(IdCardNumber, idCardNumber_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyMaterialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(FaceImageUrl, faceImageUrl_);
      DARABONBA_PTR_FROM_JSON(IdCardBackImageUrl, idCardBackImageUrl_);
      DARABONBA_PTR_FROM_JSON(IdCardFrontImageUrl, idCardFrontImageUrl_);
      DARABONBA_PTR_FROM_JSON(IdCardNumber, idCardNumber_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    VerifyMaterialRequest() = default ;
    VerifyMaterialRequest(const VerifyMaterialRequest &) = default ;
    VerifyMaterialRequest(VerifyMaterialRequest &&) = default ;
    VerifyMaterialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyMaterialRequest() = default ;
    VerifyMaterialRequest& operator=(const VerifyMaterialRequest &) = default ;
    VerifyMaterialRequest& operator=(VerifyMaterialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizType_ == nullptr && this->faceImageUrl_ == nullptr && this->idCardBackImageUrl_ == nullptr && this->idCardFrontImageUrl_ == nullptr && this->idCardNumber_ == nullptr
        && this->name_ == nullptr && this->userId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline VerifyMaterialRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline VerifyMaterialRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // faceImageUrl Field Functions 
    bool hasFaceImageUrl() const { return this->faceImageUrl_ != nullptr;};
    void deleteFaceImageUrl() { this->faceImageUrl_ = nullptr;};
    inline string getFaceImageUrl() const { DARABONBA_PTR_GET_DEFAULT(faceImageUrl_, "") };
    inline VerifyMaterialRequest& setFaceImageUrl(string faceImageUrl) { DARABONBA_PTR_SET_VALUE(faceImageUrl_, faceImageUrl) };


    // idCardBackImageUrl Field Functions 
    bool hasIdCardBackImageUrl() const { return this->idCardBackImageUrl_ != nullptr;};
    void deleteIdCardBackImageUrl() { this->idCardBackImageUrl_ = nullptr;};
    inline string getIdCardBackImageUrl() const { DARABONBA_PTR_GET_DEFAULT(idCardBackImageUrl_, "") };
    inline VerifyMaterialRequest& setIdCardBackImageUrl(string idCardBackImageUrl) { DARABONBA_PTR_SET_VALUE(idCardBackImageUrl_, idCardBackImageUrl) };


    // idCardFrontImageUrl Field Functions 
    bool hasIdCardFrontImageUrl() const { return this->idCardFrontImageUrl_ != nullptr;};
    void deleteIdCardFrontImageUrl() { this->idCardFrontImageUrl_ = nullptr;};
    inline string getIdCardFrontImageUrl() const { DARABONBA_PTR_GET_DEFAULT(idCardFrontImageUrl_, "") };
    inline VerifyMaterialRequest& setIdCardFrontImageUrl(string idCardFrontImageUrl) { DARABONBA_PTR_SET_VALUE(idCardFrontImageUrl_, idCardFrontImageUrl) };


    // idCardNumber Field Functions 
    bool hasIdCardNumber() const { return this->idCardNumber_ != nullptr;};
    void deleteIdCardNumber() { this->idCardNumber_ = nullptr;};
    inline string getIdCardNumber() const { DARABONBA_PTR_GET_DEFAULT(idCardNumber_, "") };
    inline VerifyMaterialRequest& setIdCardNumber(string idCardNumber) { DARABONBA_PTR_SET_VALUE(idCardNumber_, idCardNumber) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline VerifyMaterialRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline VerifyMaterialRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // A unique ID that identifies a single authentication task, not exceeding 64 characters. For a single authentication task, the system supports unlimited submissions until the final authentication is passed and the task is completed.
    // 
    // > Different BizIds are required for different authentication tasks.
    // 
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    // Identifier for the business scenario using the real-person authentication service. Please refer to [Business Setup](https://help.aliyun.com/document_detail/127885.html) and complete the creation in the console first.
    // 
    // This parameter is required.
    shared_ptr<string> bizType_ {};
    // HTTP or HTTPS link to the frontal face image.
    // 
    // This parameter is required.
    shared_ptr<string> faceImageUrl_ {};
    // HTTP or HTTPS link to the national emblem side of the ID card.
    shared_ptr<string> idCardBackImageUrl_ {};
    // HTTP or HTTPS link to the portrait side of the ID card image.
    shared_ptr<string> idCardFrontImageUrl_ {};
    // ID number.
    // 
    // This parameter is required.
    shared_ptr<string> idCardNumber_ {};
    // Name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The ID of the end user, such as the account ID of the end user.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
