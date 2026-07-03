// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACELIVENESSV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FACELIVENESSV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceLivenessV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceLivenessV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(FacePictureBase64, facePictureBase64_);
      DARABONBA_PTR_TO_JSON(FacePictureFile, facePictureFile_);
      DARABONBA_PTR_TO_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_TO_JSON(FaceQualityCheck, faceQualityCheck_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, FaceLivenessV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(FacePictureBase64, facePictureBase64_);
      DARABONBA_PTR_FROM_JSON(FacePictureFile, facePictureFile_);
      DARABONBA_PTR_FROM_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_FROM_JSON(FaceQualityCheck, faceQualityCheck_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    FaceLivenessV2Request() = default ;
    FaceLivenessV2Request(const FaceLivenessV2Request &) = default ;
    FaceLivenessV2Request(FaceLivenessV2Request &&) = default ;
    FaceLivenessV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceLivenessV2Request() = default ;
    FaceLivenessV2Request& operator=(const FaceLivenessV2Request &) = default ;
    FaceLivenessV2Request& operator=(FaceLivenessV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->facePictureBase64_ == nullptr
        && this->facePictureFile_ == nullptr && this->facePictureUrl_ == nullptr && this->faceQualityCheck_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr
        && this->productCode_ == nullptr; };
    // facePictureBase64 Field Functions 
    bool hasFacePictureBase64() const { return this->facePictureBase64_ != nullptr;};
    void deleteFacePictureBase64() { this->facePictureBase64_ = nullptr;};
    inline string getFacePictureBase64() const { DARABONBA_PTR_GET_DEFAULT(facePictureBase64_, "") };
    inline FaceLivenessV2Request& setFacePictureBase64(string facePictureBase64) { DARABONBA_PTR_SET_VALUE(facePictureBase64_, facePictureBase64) };


    // facePictureFile Field Functions 
    bool hasFacePictureFile() const { return this->facePictureFile_ != nullptr;};
    void deleteFacePictureFile() { this->facePictureFile_ = nullptr;};
    inline string getFacePictureFile() const { DARABONBA_PTR_GET_DEFAULT(facePictureFile_, "") };
    inline FaceLivenessV2Request& setFacePictureFile(string facePictureFile) { DARABONBA_PTR_SET_VALUE(facePictureFile_, facePictureFile) };


    // facePictureUrl Field Functions 
    bool hasFacePictureUrl() const { return this->facePictureUrl_ != nullptr;};
    void deleteFacePictureUrl() { this->facePictureUrl_ = nullptr;};
    inline string getFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(facePictureUrl_, "") };
    inline FaceLivenessV2Request& setFacePictureUrl(string facePictureUrl) { DARABONBA_PTR_SET_VALUE(facePictureUrl_, facePictureUrl) };


    // faceQualityCheck Field Functions 
    bool hasFaceQualityCheck() const { return this->faceQualityCheck_ != nullptr;};
    void deleteFaceQualityCheck() { this->faceQualityCheck_ = nullptr;};
    inline string getFaceQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(faceQualityCheck_, "") };
    inline FaceLivenessV2Request& setFaceQualityCheck(string faceQualityCheck) { DARABONBA_PTR_SET_VALUE(faceQualityCheck_, faceQualityCheck) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline FaceLivenessV2Request& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline FaceLivenessV2Request& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline FaceLivenessV2Request& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // The Base64-encoded face image.
    // 
    // > **Note**
    // 
    // - If you use this method to pass in the image, check the image size and do not pass in an excessively large image.
    // - Specify one of the following parameters: FacePictureBase64, FacePictureUrl, or FacePictureFile.
    shared_ptr<string> facePictureBase64_ {};
    // The file stream of the face image.
    shared_ptr<string> facePictureFile_ {};
    // The URL of the face image. The URL must be a publicly accessible HTTPS URL.
    shared_ptr<string> facePictureUrl_ {};
    // Specifies whether to check the quality of the face image. Valid values:
    // - Y: enabled.
    // - N: disabled. This is the default value.
    shared_ptr<string> faceQualityCheck_ {};
    // The merchant-defined unique business ID for subsequent troubleshooting. The value can be a combination of letters and digits with a maximum length of 32 characters. Make sure the value is unique.
    shared_ptr<string> merchantBizId_ {};
    // The custom user ID or another identifier that can identify a specific user, such as a phone number or email address. We strongly recommend that you desensitize the value of this field in advance, for example, by hashing the value.
    shared_ptr<string> merchantUserId_ {};
    // The product plan to use. Valid values: FACE_LIVENESS_MIN_PRO and FACE_LIVENESS_MIN.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
