// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACECROSSCOMPAREINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FACECROSSCOMPAREINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceCrossCompareIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceCrossCompareIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompareModel, compareModel_);
      DARABONBA_PTR_TO_JSON(FaceVerifyThreshold, faceVerifyThreshold_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(SourceAFacePicture, sourceAFacePicture_);
      DARABONBA_PTR_TO_JSON(SourceAFacePictureUrl, sourceAFacePictureUrl_);
      DARABONBA_PTR_TO_JSON(SourceBFacePicture, sourceBFacePicture_);
      DARABONBA_PTR_TO_JSON(SourceBFacePictureUrl, sourceBFacePictureUrl_);
      DARABONBA_PTR_TO_JSON(SourceCFacePicture, sourceCFacePicture_);
      DARABONBA_PTR_TO_JSON(SourceCFacePictureUrl, sourceCFacePictureUrl_);
    };
    friend void from_json(const Darabonba::Json& j, FaceCrossCompareIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompareModel, compareModel_);
      DARABONBA_PTR_FROM_JSON(FaceVerifyThreshold, faceVerifyThreshold_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(SourceAFacePicture, sourceAFacePicture_);
      DARABONBA_PTR_FROM_JSON(SourceAFacePictureUrl, sourceAFacePictureUrl_);
      DARABONBA_PTR_FROM_JSON(SourceBFacePicture, sourceBFacePicture_);
      DARABONBA_PTR_FROM_JSON(SourceBFacePictureUrl, sourceBFacePictureUrl_);
      DARABONBA_PTR_FROM_JSON(SourceCFacePicture, sourceCFacePicture_);
      DARABONBA_PTR_FROM_JSON(SourceCFacePictureUrl, sourceCFacePictureUrl_);
    };
    FaceCrossCompareIntlRequest() = default ;
    FaceCrossCompareIntlRequest(const FaceCrossCompareIntlRequest &) = default ;
    FaceCrossCompareIntlRequest(FaceCrossCompareIntlRequest &&) = default ;
    FaceCrossCompareIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceCrossCompareIntlRequest() = default ;
    FaceCrossCompareIntlRequest& operator=(const FaceCrossCompareIntlRequest &) = default ;
    FaceCrossCompareIntlRequest& operator=(FaceCrossCompareIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compareModel_ == nullptr
        && return this->faceVerifyThreshold_ == nullptr && return this->merchantBizId_ == nullptr && return this->productCode_ == nullptr && return this->sceneCode_ == nullptr && return this->sourceAFacePicture_ == nullptr
        && return this->sourceAFacePictureUrl_ == nullptr && return this->sourceBFacePicture_ == nullptr && return this->sourceBFacePictureUrl_ == nullptr && return this->sourceCFacePicture_ == nullptr && return this->sourceCFacePictureUrl_ == nullptr; };
    // compareModel Field Functions 
    bool hasCompareModel() const { return this->compareModel_ != nullptr;};
    void deleteCompareModel() { this->compareModel_ = nullptr;};
    inline string compareModel() const { DARABONBA_PTR_GET_DEFAULT(compareModel_, "") };
    inline FaceCrossCompareIntlRequest& setCompareModel(string compareModel) { DARABONBA_PTR_SET_VALUE(compareModel_, compareModel) };


    // faceVerifyThreshold Field Functions 
    bool hasFaceVerifyThreshold() const { return this->faceVerifyThreshold_ != nullptr;};
    void deleteFaceVerifyThreshold() { this->faceVerifyThreshold_ = nullptr;};
    inline string faceVerifyThreshold() const { DARABONBA_PTR_GET_DEFAULT(faceVerifyThreshold_, "") };
    inline FaceCrossCompareIntlRequest& setFaceVerifyThreshold(string faceVerifyThreshold) { DARABONBA_PTR_SET_VALUE(faceVerifyThreshold_, faceVerifyThreshold) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string merchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline FaceCrossCompareIntlRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline FaceCrossCompareIntlRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline FaceCrossCompareIntlRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // sourceAFacePicture Field Functions 
    bool hasSourceAFacePicture() const { return this->sourceAFacePicture_ != nullptr;};
    void deleteSourceAFacePicture() { this->sourceAFacePicture_ = nullptr;};
    inline string sourceAFacePicture() const { DARABONBA_PTR_GET_DEFAULT(sourceAFacePicture_, "") };
    inline FaceCrossCompareIntlRequest& setSourceAFacePicture(string sourceAFacePicture) { DARABONBA_PTR_SET_VALUE(sourceAFacePicture_, sourceAFacePicture) };


    // sourceAFacePictureUrl Field Functions 
    bool hasSourceAFacePictureUrl() const { return this->sourceAFacePictureUrl_ != nullptr;};
    void deleteSourceAFacePictureUrl() { this->sourceAFacePictureUrl_ = nullptr;};
    inline string sourceAFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceAFacePictureUrl_, "") };
    inline FaceCrossCompareIntlRequest& setSourceAFacePictureUrl(string sourceAFacePictureUrl) { DARABONBA_PTR_SET_VALUE(sourceAFacePictureUrl_, sourceAFacePictureUrl) };


    // sourceBFacePicture Field Functions 
    bool hasSourceBFacePicture() const { return this->sourceBFacePicture_ != nullptr;};
    void deleteSourceBFacePicture() { this->sourceBFacePicture_ = nullptr;};
    inline string sourceBFacePicture() const { DARABONBA_PTR_GET_DEFAULT(sourceBFacePicture_, "") };
    inline FaceCrossCompareIntlRequest& setSourceBFacePicture(string sourceBFacePicture) { DARABONBA_PTR_SET_VALUE(sourceBFacePicture_, sourceBFacePicture) };


    // sourceBFacePictureUrl Field Functions 
    bool hasSourceBFacePictureUrl() const { return this->sourceBFacePictureUrl_ != nullptr;};
    void deleteSourceBFacePictureUrl() { this->sourceBFacePictureUrl_ = nullptr;};
    inline string sourceBFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceBFacePictureUrl_, "") };
    inline FaceCrossCompareIntlRequest& setSourceBFacePictureUrl(string sourceBFacePictureUrl) { DARABONBA_PTR_SET_VALUE(sourceBFacePictureUrl_, sourceBFacePictureUrl) };


    // sourceCFacePicture Field Functions 
    bool hasSourceCFacePicture() const { return this->sourceCFacePicture_ != nullptr;};
    void deleteSourceCFacePicture() { this->sourceCFacePicture_ = nullptr;};
    inline string sourceCFacePicture() const { DARABONBA_PTR_GET_DEFAULT(sourceCFacePicture_, "") };
    inline FaceCrossCompareIntlRequest& setSourceCFacePicture(string sourceCFacePicture) { DARABONBA_PTR_SET_VALUE(sourceCFacePicture_, sourceCFacePicture) };


    // sourceCFacePictureUrl Field Functions 
    bool hasSourceCFacePictureUrl() const { return this->sourceCFacePictureUrl_ != nullptr;};
    void deleteSourceCFacePictureUrl() { this->sourceCFacePictureUrl_ = nullptr;};
    inline string sourceCFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceCFacePictureUrl_, "") };
    inline FaceCrossCompareIntlRequest& setSourceCFacePictureUrl(string sourceCFacePictureUrl) { DARABONBA_PTR_SET_VALUE(sourceCFacePictureUrl_, sourceCFacePictureUrl) };


  protected:
    // Comparison mode
    // - 0-Chain comparison (default): A:B and B:C
    // - 1-Circular comparison: A:B and B:C and C:A
    std::shared_ptr<string> compareModel_ = nullptr;
    // Face matching threshold.
    std::shared_ptr<string> faceVerifyThreshold_ = nullptr;
    // A unique business identifier for subsequent troubleshooting. It supports a combination of 32 alphanumeric characters, please ensure its uniqueness.
    // 
    // This parameter is required.
    std::shared_ptr<string> merchantBizId_ = nullptr;
    // Product solution to be integrated. Value: 
    // FACE_CROSS_COMPARE
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // Custom business scenario ID
    std::shared_ptr<string> sceneCode_ = nullptr;
    // Base64 encoded portrait photo.
    std::shared_ptr<string> sourceAFacePicture_ = nullptr;
    // Portrait image URL, accessible via HTTP or HTTPS on the public network.
    std::shared_ptr<string> sourceAFacePictureUrl_ = nullptr;
    // Base64 encoded portrait photo.
    std::shared_ptr<string> sourceBFacePicture_ = nullptr;
    // Portrait image URL, accessible via HTTP or HTTPS on the public network.
    std::shared_ptr<string> sourceBFacePictureUrl_ = nullptr;
    // Base64 encoded portrait photo.
    std::shared_ptr<string> sourceCFacePicture_ = nullptr;
    // Portrait image URL, accessible via HTTP or HTTPS on the public network.
    std::shared_ptr<string> sourceCFacePictureUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
