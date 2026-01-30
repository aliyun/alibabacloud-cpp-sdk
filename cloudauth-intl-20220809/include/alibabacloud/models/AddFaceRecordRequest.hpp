// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFACERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class AddFaceRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FaceGroupCode, faceGroupCode_);
      DARABONBA_PTR_TO_JSON(FacePicture, facePicture_);
      DARABONBA_PTR_TO_JSON(FacePictureFile, facePictureFile_);
      DARABONBA_PTR_TO_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_TO_JSON(FaceQualityCheck, faceQualityCheck_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceGroupCode, faceGroupCode_);
      DARABONBA_PTR_FROM_JSON(FacePicture, facePicture_);
      DARABONBA_PTR_FROM_JSON(FacePictureFile, facePictureFile_);
      DARABONBA_PTR_FROM_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_FROM_JSON(FaceQualityCheck, faceQualityCheck_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    AddFaceRecordRequest() = default ;
    AddFaceRecordRequest(const AddFaceRecordRequest &) = default ;
    AddFaceRecordRequest(AddFaceRecordRequest &&) = default ;
    AddFaceRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceRecordRequest() = default ;
    AddFaceRecordRequest& operator=(const AddFaceRecordRequest &) = default ;
    AddFaceRecordRequest& operator=(AddFaceRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceGroupCode_ == nullptr
        && this->facePicture_ == nullptr && this->facePictureFile_ == nullptr && this->facePictureUrl_ == nullptr && this->faceQualityCheck_ == nullptr && this->merchantUserId_ == nullptr
        && this->productCode_ == nullptr; };
    // faceGroupCode Field Functions 
    bool hasFaceGroupCode() const { return this->faceGroupCode_ != nullptr;};
    void deleteFaceGroupCode() { this->faceGroupCode_ = nullptr;};
    inline string getFaceGroupCode() const { DARABONBA_PTR_GET_DEFAULT(faceGroupCode_, "") };
    inline AddFaceRecordRequest& setFaceGroupCode(string faceGroupCode) { DARABONBA_PTR_SET_VALUE(faceGroupCode_, faceGroupCode) };


    // facePicture Field Functions 
    bool hasFacePicture() const { return this->facePicture_ != nullptr;};
    void deleteFacePicture() { this->facePicture_ = nullptr;};
    inline string getFacePicture() const { DARABONBA_PTR_GET_DEFAULT(facePicture_, "") };
    inline AddFaceRecordRequest& setFacePicture(string facePicture) { DARABONBA_PTR_SET_VALUE(facePicture_, facePicture) };


    // facePictureFile Field Functions 
    bool hasFacePictureFile() const { return this->facePictureFile_ != nullptr;};
    void deleteFacePictureFile() { this->facePictureFile_ = nullptr;};
    inline string getFacePictureFile() const { DARABONBA_PTR_GET_DEFAULT(facePictureFile_, "") };
    inline AddFaceRecordRequest& setFacePictureFile(string facePictureFile) { DARABONBA_PTR_SET_VALUE(facePictureFile_, facePictureFile) };


    // facePictureUrl Field Functions 
    bool hasFacePictureUrl() const { return this->facePictureUrl_ != nullptr;};
    void deleteFacePictureUrl() { this->facePictureUrl_ = nullptr;};
    inline string getFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(facePictureUrl_, "") };
    inline AddFaceRecordRequest& setFacePictureUrl(string facePictureUrl) { DARABONBA_PTR_SET_VALUE(facePictureUrl_, facePictureUrl) };


    // faceQualityCheck Field Functions 
    bool hasFaceQualityCheck() const { return this->faceQualityCheck_ != nullptr;};
    void deleteFaceQualityCheck() { this->faceQualityCheck_ = nullptr;};
    inline string getFaceQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(faceQualityCheck_, "") };
    inline AddFaceRecordRequest& setFaceQualityCheck(string faceQualityCheck) { DARABONBA_PTR_SET_VALUE(faceQualityCheck_, faceQualityCheck) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline AddFaceRecordRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline AddFaceRecordRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> faceGroupCode_ {};
    shared_ptr<string> facePicture_ {};
    shared_ptr<string> facePictureFile_ {};
    shared_ptr<string> facePictureUrl_ {};
    shared_ptr<string> faceQualityCheck_ {};
    shared_ptr<string> merchantUserId_ {};
    // This parameter is required.
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
