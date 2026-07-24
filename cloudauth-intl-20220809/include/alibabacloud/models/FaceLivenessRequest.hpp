// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACELIVENESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FACELIVENESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceLivenessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceLivenessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(FaceAttributeCheck, faceAttributeCheck_);
      DARABONBA_PTR_TO_JSON(FacePictureBase64, facePictureBase64_);
      DARABONBA_PTR_TO_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_TO_JSON(FaceQuality, faceQuality_);
      DARABONBA_PTR_TO_JSON(FaceQualityCheck, faceQualityCheck_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(Occlusion, occlusion_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, FaceLivenessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(FaceAttributeCheck, faceAttributeCheck_);
      DARABONBA_PTR_FROM_JSON(FacePictureBase64, facePictureBase64_);
      DARABONBA_PTR_FROM_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_FROM_JSON(FaceQuality, faceQuality_);
      DARABONBA_PTR_FROM_JSON(FaceQualityCheck, faceQualityCheck_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(Occlusion, occlusion_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    FaceLivenessRequest() = default ;
    FaceLivenessRequest(const FaceLivenessRequest &) = default ;
    FaceLivenessRequest(FaceLivenessRequest &&) = default ;
    FaceLivenessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceLivenessRequest() = default ;
    FaceLivenessRequest& operator=(const FaceLivenessRequest &) = default ;
    FaceLivenessRequest& operator=(FaceLivenessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crop_ == nullptr
        && this->faceAttributeCheck_ == nullptr && this->facePictureBase64_ == nullptr && this->facePictureUrl_ == nullptr && this->faceQuality_ == nullptr && this->faceQualityCheck_ == nullptr
        && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr && this->occlusion_ == nullptr && this->productCode_ == nullptr; };
    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline FaceLivenessRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // faceAttributeCheck Field Functions 
    bool hasFaceAttributeCheck() const { return this->faceAttributeCheck_ != nullptr;};
    void deleteFaceAttributeCheck() { this->faceAttributeCheck_ = nullptr;};
    inline string getFaceAttributeCheck() const { DARABONBA_PTR_GET_DEFAULT(faceAttributeCheck_, "") };
    inline FaceLivenessRequest& setFaceAttributeCheck(string faceAttributeCheck) { DARABONBA_PTR_SET_VALUE(faceAttributeCheck_, faceAttributeCheck) };


    // facePictureBase64 Field Functions 
    bool hasFacePictureBase64() const { return this->facePictureBase64_ != nullptr;};
    void deleteFacePictureBase64() { this->facePictureBase64_ = nullptr;};
    inline string getFacePictureBase64() const { DARABONBA_PTR_GET_DEFAULT(facePictureBase64_, "") };
    inline FaceLivenessRequest& setFacePictureBase64(string facePictureBase64) { DARABONBA_PTR_SET_VALUE(facePictureBase64_, facePictureBase64) };


    // facePictureUrl Field Functions 
    bool hasFacePictureUrl() const { return this->facePictureUrl_ != nullptr;};
    void deleteFacePictureUrl() { this->facePictureUrl_ = nullptr;};
    inline string getFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(facePictureUrl_, "") };
    inline FaceLivenessRequest& setFacePictureUrl(string facePictureUrl) { DARABONBA_PTR_SET_VALUE(facePictureUrl_, facePictureUrl) };


    // faceQuality Field Functions 
    bool hasFaceQuality() const { return this->faceQuality_ != nullptr;};
    void deleteFaceQuality() { this->faceQuality_ = nullptr;};
    inline string getFaceQuality() const { DARABONBA_PTR_GET_DEFAULT(faceQuality_, "") };
    inline FaceLivenessRequest& setFaceQuality(string faceQuality) { DARABONBA_PTR_SET_VALUE(faceQuality_, faceQuality) };


    // faceQualityCheck Field Functions 
    bool hasFaceQualityCheck() const { return this->faceQualityCheck_ != nullptr;};
    void deleteFaceQualityCheck() { this->faceQualityCheck_ = nullptr;};
    inline string getFaceQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(faceQualityCheck_, "") };
    inline FaceLivenessRequest& setFaceQualityCheck(string faceQualityCheck) { DARABONBA_PTR_SET_VALUE(faceQualityCheck_, faceQualityCheck) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline FaceLivenessRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline FaceLivenessRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // occlusion Field Functions 
    bool hasOcclusion() const { return this->occlusion_ != nullptr;};
    void deleteOcclusion() { this->occlusion_ = nullptr;};
    inline string getOcclusion() const { DARABONBA_PTR_GET_DEFAULT(occlusion_, "") };
    inline FaceLivenessRequest& setOcclusion(string occlusion) { DARABONBA_PTR_SET_VALUE(occlusion_, occlusion) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline FaceLivenessRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // Specifies whether to allow cropping. Default value: F. Valid values:
    // 
    // - T: enabled.
    // - F: disabled. (Default)
    shared_ptr<string> crop_ {};
    shared_ptr<string> faceAttributeCheck_ {};
    // The Base64-encoded face photo.
    // 
    // Note:
    // - If you use FacePictureBase64 (Base64-encoded photo) to pass in the face photo, check the photo size and do not pass in an excessively large photo.
    shared_ptr<string> facePictureBase64_ {};
    // The URL of the face photo.
    shared_ptr<string> facePictureUrl_ {};
    // Specifies whether to output the face quality score. Default value: F. Valid values:
    // - T: enabled.
    // - F: disabled. (Default)
    shared_ptr<string> faceQuality_ {};
    // The face quality check.
    shared_ptr<string> faceQualityCheck_ {};
    // The merchant-defined unique business ID used for subsequent troubleshooting. The value can contain letters and digits with a maximum length of 32 characters. Ensure that the value is unique.
    shared_ptr<string> merchantBizId_ {};
    // The merchant user ID or another identifier that can be used to identify a specific user, such as a phone number or email address. We strongly recommend that you desensitize the value of the userId field before passing it in, for example, by hashing the value.
    shared_ptr<string> merchantUserId_ {};
    // Specifies whether to perform occlusion detection. Default value: F. Valid values:
    // 
    // - T: enabled.
    // - F: disabled. (Default)
    shared_ptr<string> occlusion_ {};
    // The product code.
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
