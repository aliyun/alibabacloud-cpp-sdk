// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFACERECORDV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFACERECORDV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DeleteFaceRecordV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFaceRecordV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(FaceGroupCode, faceGroupCode_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFaceRecordV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceGroupCode, faceGroupCode_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
    };
    DeleteFaceRecordV2Request() = default ;
    DeleteFaceRecordV2Request(const DeleteFaceRecordV2Request &) = default ;
    DeleteFaceRecordV2Request(DeleteFaceRecordV2Request &&) = default ;
    DeleteFaceRecordV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFaceRecordV2Request() = default ;
    DeleteFaceRecordV2Request& operator=(const DeleteFaceRecordV2Request &) = default ;
    DeleteFaceRecordV2Request& operator=(DeleteFaceRecordV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceGroupCode_ == nullptr
        && this->merchantUserId_ == nullptr; };
    // faceGroupCode Field Functions 
    bool hasFaceGroupCode() const { return this->faceGroupCode_ != nullptr;};
    void deleteFaceGroupCode() { this->faceGroupCode_ = nullptr;};
    inline string getFaceGroupCode() const { DARABONBA_PTR_GET_DEFAULT(faceGroupCode_, "") };
    inline DeleteFaceRecordV2Request& setFaceGroupCode(string faceGroupCode) { DARABONBA_PTR_SET_VALUE(faceGroupCode_, faceGroupCode) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline DeleteFaceRecordV2Request& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


  protected:
    // The face group code. If this parameter is not specified, the face data of the user is deleted from all face groups.
    shared_ptr<string> faceGroupCode_ {};
    // The unique user identifier, which must be consistent with the one used when calling AddFaceRecord. If this parameter was not specified during registration, you can use the default image name.
    // 
    // This parameter is required.
    shared_ptr<string> merchantUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
