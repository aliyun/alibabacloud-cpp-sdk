// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACERECORDADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFACERECORDADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class AddFaceRecordAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceRecordAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FaceGroupCode, faceGroupCode_);
      DARABONBA_PTR_TO_JSON(FacePicture, facePicture_);
      DARABONBA_TO_JSON(FacePictureFile, facePictureFileObject_);
      DARABONBA_PTR_TO_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_TO_JSON(FaceQualityCheck, faceQualityCheck_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceRecordAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceGroupCode, faceGroupCode_);
      DARABONBA_PTR_FROM_JSON(FacePicture, facePicture_);
      DARABONBA_FROM_JSON(FacePictureFile, facePictureFileObject_);
      DARABONBA_PTR_FROM_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_FROM_JSON(FaceQualityCheck, faceQualityCheck_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    AddFaceRecordAdvanceRequest() = default ;
    AddFaceRecordAdvanceRequest(const AddFaceRecordAdvanceRequest &) = default ;
    AddFaceRecordAdvanceRequest(AddFaceRecordAdvanceRequest &&) = default ;
    AddFaceRecordAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceRecordAdvanceRequest() = default ;
    AddFaceRecordAdvanceRequest& operator=(const AddFaceRecordAdvanceRequest &) = default ;
    AddFaceRecordAdvanceRequest& operator=(AddFaceRecordAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceGroupCode_ == nullptr
        && return this->facePicture_ == nullptr && return this->facePictureFileObject_ == nullptr && return this->facePictureUrl_ == nullptr && return this->faceQualityCheck_ == nullptr && return this->merchantUserId_ == nullptr
        && return this->productCode_ == nullptr; };
    // faceGroupCode Field Functions 
    bool hasFaceGroupCode() const { return this->faceGroupCode_ != nullptr;};
    void deleteFaceGroupCode() { this->faceGroupCode_ = nullptr;};
    inline string faceGroupCode() const { DARABONBA_PTR_GET_DEFAULT(faceGroupCode_, "") };
    inline AddFaceRecordAdvanceRequest& setFaceGroupCode(string faceGroupCode) { DARABONBA_PTR_SET_VALUE(faceGroupCode_, faceGroupCode) };


    // facePicture Field Functions 
    bool hasFacePicture() const { return this->facePicture_ != nullptr;};
    void deleteFacePicture() { this->facePicture_ = nullptr;};
    inline string facePicture() const { DARABONBA_PTR_GET_DEFAULT(facePicture_, "") };
    inline AddFaceRecordAdvanceRequest& setFacePicture(string facePicture) { DARABONBA_PTR_SET_VALUE(facePicture_, facePicture) };


    // facePictureFileObject Field Functions 
    bool hasFacePictureFileObject() const { return this->facePictureFileObject_ != nullptr;};
    void deleteFacePictureFileObject() { this->facePictureFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> facePictureFileObject() const { DARABONBA_GET(facePictureFileObject_) };
    inline AddFaceRecordAdvanceRequest& setFacePictureFileObject(shared_ptr<Darabonba::IStream> facePictureFileObject) { DARABONBA_SET_VALUE(facePictureFileObject_, facePictureFileObject) };


    // facePictureUrl Field Functions 
    bool hasFacePictureUrl() const { return this->facePictureUrl_ != nullptr;};
    void deleteFacePictureUrl() { this->facePictureUrl_ = nullptr;};
    inline string facePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(facePictureUrl_, "") };
    inline AddFaceRecordAdvanceRequest& setFacePictureUrl(string facePictureUrl) { DARABONBA_PTR_SET_VALUE(facePictureUrl_, facePictureUrl) };


    // faceQualityCheck Field Functions 
    bool hasFaceQualityCheck() const { return this->faceQualityCheck_ != nullptr;};
    void deleteFaceQualityCheck() { this->faceQualityCheck_ = nullptr;};
    inline string faceQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(faceQualityCheck_, "") };
    inline AddFaceRecordAdvanceRequest& setFaceQualityCheck(string faceQualityCheck) { DARABONBA_PTR_SET_VALUE(faceQualityCheck_, faceQualityCheck) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string merchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline AddFaceRecordAdvanceRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline AddFaceRecordAdvanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> faceGroupCode_ = nullptr;
    std::shared_ptr<string> facePicture_ = nullptr;
    shared_ptr<Darabonba::IStream> facePictureFileObject_ = nullptr;
    std::shared_ptr<string> facePictureUrl_ = nullptr;
    std::shared_ptr<string> faceQualityCheck_ = nullptr;
    std::shared_ptr<string> merchantUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
