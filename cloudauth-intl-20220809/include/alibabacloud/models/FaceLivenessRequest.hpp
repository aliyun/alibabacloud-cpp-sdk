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
      DARABONBA_PTR_TO_JSON(FacePictureBase64, facePictureBase64_);
      DARABONBA_PTR_TO_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_TO_JSON(FaceQuality, faceQuality_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(Occlusion, occlusion_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, FaceLivenessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(FacePictureBase64, facePictureBase64_);
      DARABONBA_PTR_FROM_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_FROM_JSON(FaceQuality, faceQuality_);
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
        && return this->facePictureBase64_ == nullptr && return this->facePictureUrl_ == nullptr && return this->faceQuality_ == nullptr && return this->merchantBizId_ == nullptr && return this->merchantUserId_ == nullptr
        && return this->occlusion_ == nullptr && return this->productCode_ == nullptr; };
    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string crop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline FaceLivenessRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // facePictureBase64 Field Functions 
    bool hasFacePictureBase64() const { return this->facePictureBase64_ != nullptr;};
    void deleteFacePictureBase64() { this->facePictureBase64_ = nullptr;};
    inline string facePictureBase64() const { DARABONBA_PTR_GET_DEFAULT(facePictureBase64_, "") };
    inline FaceLivenessRequest& setFacePictureBase64(string facePictureBase64) { DARABONBA_PTR_SET_VALUE(facePictureBase64_, facePictureBase64) };


    // facePictureUrl Field Functions 
    bool hasFacePictureUrl() const { return this->facePictureUrl_ != nullptr;};
    void deleteFacePictureUrl() { this->facePictureUrl_ = nullptr;};
    inline string facePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(facePictureUrl_, "") };
    inline FaceLivenessRequest& setFacePictureUrl(string facePictureUrl) { DARABONBA_PTR_SET_VALUE(facePictureUrl_, facePictureUrl) };


    // faceQuality Field Functions 
    bool hasFaceQuality() const { return this->faceQuality_ != nullptr;};
    void deleteFaceQuality() { this->faceQuality_ = nullptr;};
    inline string faceQuality() const { DARABONBA_PTR_GET_DEFAULT(faceQuality_, "") };
    inline FaceLivenessRequest& setFaceQuality(string faceQuality) { DARABONBA_PTR_SET_VALUE(faceQuality_, faceQuality) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string merchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline FaceLivenessRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string merchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline FaceLivenessRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // occlusion Field Functions 
    bool hasOcclusion() const { return this->occlusion_ != nullptr;};
    void deleteOcclusion() { this->occlusion_ = nullptr;};
    inline string occlusion() const { DARABONBA_PTR_GET_DEFAULT(occlusion_, "") };
    inline FaceLivenessRequest& setOcclusion(string occlusion) { DARABONBA_PTR_SET_VALUE(occlusion_, occlusion) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline FaceLivenessRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // Specifies whether to crop the facial image. The default value is F.
    // 
    // - **T**: allows cropping.
    // 
    // - **F**: Forbidden
    std::shared_ptr<string> crop_ = nullptr;
    std::shared_ptr<string> facePictureBase64_ = nullptr;
    // The URL of the portrait image. The URL must be an HTTP or HTTPS link accessible over the Internet.
    std::shared_ptr<string> facePictureUrl_ = nullptr;
    // Specifies whether to return the facial image quality score. The default value is F.
    // 
    // - **T**: returns the score.
    // 
    // - **F**: does not return the score.
    std::shared_ptr<string> faceQuality_ = nullptr;
    // A custom unique business identifier. You can use this identifier to track and troubleshoot issues. The identifier can be up to 32 characters in length and can contain letters and digits. Make sure the identifier is unique.
    // 
    // > Alibaba Cloud servers do not check the uniqueness of this value. For better tracking, ensure this value is unique.
    std::shared_ptr<string> merchantBizId_ = nullptr;
    // A  custom user ID or another identifier for a specific user, such as a mobile number or email address. For security, desensitize this value in advance, for example, by hashing it.
    std::shared_ptr<string> merchantUserId_ = nullptr;
    // Specifies whether to enable occlusion detection. The default value is F.
    // 
    // - **T**: enables the feature.
    // 
    // - **F**: disables the feature.
    std::shared_ptr<string> occlusion_ = nullptr;
    // The product solution to use. Set the value to **FACE_LIVENESS_MIN** to use the passive liveness detection API.
    std::shared_ptr<string> productCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
