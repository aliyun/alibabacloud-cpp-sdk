// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREFACEVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPAREFACEVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CompareFaceVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareFaceVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SourceCertifyId, sourceCertifyId_);
      DARABONBA_PTR_TO_JSON(SourceFaceContrastPicture, sourceFaceContrastPicture_);
      DARABONBA_PTR_TO_JSON(SourceFaceContrastPictureUrl, sourceFaceContrastPictureUrl_);
      DARABONBA_PTR_TO_JSON(SourceOssBucketName, sourceOssBucketName_);
      DARABONBA_PTR_TO_JSON(SourceOssObjectName, sourceOssObjectName_);
      DARABONBA_PTR_TO_JSON(TargetCertifyId, targetCertifyId_);
      DARABONBA_PTR_TO_JSON(TargetFaceContrastPicture, targetFaceContrastPicture_);
      DARABONBA_PTR_TO_JSON(TargetFaceContrastPictureUrl, targetFaceContrastPictureUrl_);
      DARABONBA_PTR_TO_JSON(TargetOssBucketName, targetOssBucketName_);
      DARABONBA_PTR_TO_JSON(TargetOssObjectName, targetOssObjectName_);
    };
    friend void from_json(const Darabonba::Json& j, CompareFaceVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SourceCertifyId, sourceCertifyId_);
      DARABONBA_PTR_FROM_JSON(SourceFaceContrastPicture, sourceFaceContrastPicture_);
      DARABONBA_PTR_FROM_JSON(SourceFaceContrastPictureUrl, sourceFaceContrastPictureUrl_);
      DARABONBA_PTR_FROM_JSON(SourceOssBucketName, sourceOssBucketName_);
      DARABONBA_PTR_FROM_JSON(SourceOssObjectName, sourceOssObjectName_);
      DARABONBA_PTR_FROM_JSON(TargetCertifyId, targetCertifyId_);
      DARABONBA_PTR_FROM_JSON(TargetFaceContrastPicture, targetFaceContrastPicture_);
      DARABONBA_PTR_FROM_JSON(TargetFaceContrastPictureUrl, targetFaceContrastPictureUrl_);
      DARABONBA_PTR_FROM_JSON(TargetOssBucketName, targetOssBucketName_);
      DARABONBA_PTR_FROM_JSON(TargetOssObjectName, targetOssObjectName_);
    };
    CompareFaceVerifyRequest() = default ;
    CompareFaceVerifyRequest(const CompareFaceVerifyRequest &) = default ;
    CompareFaceVerifyRequest(CompareFaceVerifyRequest &&) = default ;
    CompareFaceVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareFaceVerifyRequest() = default ;
    CompareFaceVerifyRequest& operator=(const CompareFaceVerifyRequest &) = default ;
    CompareFaceVerifyRequest& operator=(CompareFaceVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->crop_ != nullptr
        && this->outerOrderNo_ != nullptr && this->productCode_ != nullptr && this->sceneId_ != nullptr && this->sourceCertifyId_ != nullptr && this->sourceFaceContrastPicture_ != nullptr
        && this->sourceFaceContrastPictureUrl_ != nullptr && this->sourceOssBucketName_ != nullptr && this->sourceOssObjectName_ != nullptr && this->targetCertifyId_ != nullptr && this->targetFaceContrastPicture_ != nullptr
        && this->targetFaceContrastPictureUrl_ != nullptr && this->targetOssBucketName_ != nullptr && this->targetOssObjectName_ != nullptr; };
    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string crop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline CompareFaceVerifyRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // outerOrderNo Field Functions 
    bool hasOuterOrderNo() const { return this->outerOrderNo_ != nullptr;};
    void deleteOuterOrderNo() { this->outerOrderNo_ = nullptr;};
    inline string outerOrderNo() const { DARABONBA_PTR_GET_DEFAULT(outerOrderNo_, "") };
    inline CompareFaceVerifyRequest& setOuterOrderNo(string outerOrderNo) { DARABONBA_PTR_SET_VALUE(outerOrderNo_, outerOrderNo) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CompareFaceVerifyRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline CompareFaceVerifyRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sourceCertifyId Field Functions 
    bool hasSourceCertifyId() const { return this->sourceCertifyId_ != nullptr;};
    void deleteSourceCertifyId() { this->sourceCertifyId_ = nullptr;};
    inline string sourceCertifyId() const { DARABONBA_PTR_GET_DEFAULT(sourceCertifyId_, "") };
    inline CompareFaceVerifyRequest& setSourceCertifyId(string sourceCertifyId) { DARABONBA_PTR_SET_VALUE(sourceCertifyId_, sourceCertifyId) };


    // sourceFaceContrastPicture Field Functions 
    bool hasSourceFaceContrastPicture() const { return this->sourceFaceContrastPicture_ != nullptr;};
    void deleteSourceFaceContrastPicture() { this->sourceFaceContrastPicture_ = nullptr;};
    inline string sourceFaceContrastPicture() const { DARABONBA_PTR_GET_DEFAULT(sourceFaceContrastPicture_, "") };
    inline CompareFaceVerifyRequest& setSourceFaceContrastPicture(string sourceFaceContrastPicture) { DARABONBA_PTR_SET_VALUE(sourceFaceContrastPicture_, sourceFaceContrastPicture) };


    // sourceFaceContrastPictureUrl Field Functions 
    bool hasSourceFaceContrastPictureUrl() const { return this->sourceFaceContrastPictureUrl_ != nullptr;};
    void deleteSourceFaceContrastPictureUrl() { this->sourceFaceContrastPictureUrl_ = nullptr;};
    inline string sourceFaceContrastPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceFaceContrastPictureUrl_, "") };
    inline CompareFaceVerifyRequest& setSourceFaceContrastPictureUrl(string sourceFaceContrastPictureUrl) { DARABONBA_PTR_SET_VALUE(sourceFaceContrastPictureUrl_, sourceFaceContrastPictureUrl) };


    // sourceOssBucketName Field Functions 
    bool hasSourceOssBucketName() const { return this->sourceOssBucketName_ != nullptr;};
    void deleteSourceOssBucketName() { this->sourceOssBucketName_ = nullptr;};
    inline string sourceOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(sourceOssBucketName_, "") };
    inline CompareFaceVerifyRequest& setSourceOssBucketName(string sourceOssBucketName) { DARABONBA_PTR_SET_VALUE(sourceOssBucketName_, sourceOssBucketName) };


    // sourceOssObjectName Field Functions 
    bool hasSourceOssObjectName() const { return this->sourceOssObjectName_ != nullptr;};
    void deleteSourceOssObjectName() { this->sourceOssObjectName_ = nullptr;};
    inline string sourceOssObjectName() const { DARABONBA_PTR_GET_DEFAULT(sourceOssObjectName_, "") };
    inline CompareFaceVerifyRequest& setSourceOssObjectName(string sourceOssObjectName) { DARABONBA_PTR_SET_VALUE(sourceOssObjectName_, sourceOssObjectName) };


    // targetCertifyId Field Functions 
    bool hasTargetCertifyId() const { return this->targetCertifyId_ != nullptr;};
    void deleteTargetCertifyId() { this->targetCertifyId_ = nullptr;};
    inline string targetCertifyId() const { DARABONBA_PTR_GET_DEFAULT(targetCertifyId_, "") };
    inline CompareFaceVerifyRequest& setTargetCertifyId(string targetCertifyId) { DARABONBA_PTR_SET_VALUE(targetCertifyId_, targetCertifyId) };


    // targetFaceContrastPicture Field Functions 
    bool hasTargetFaceContrastPicture() const { return this->targetFaceContrastPicture_ != nullptr;};
    void deleteTargetFaceContrastPicture() { this->targetFaceContrastPicture_ = nullptr;};
    inline string targetFaceContrastPicture() const { DARABONBA_PTR_GET_DEFAULT(targetFaceContrastPicture_, "") };
    inline CompareFaceVerifyRequest& setTargetFaceContrastPicture(string targetFaceContrastPicture) { DARABONBA_PTR_SET_VALUE(targetFaceContrastPicture_, targetFaceContrastPicture) };


    // targetFaceContrastPictureUrl Field Functions 
    bool hasTargetFaceContrastPictureUrl() const { return this->targetFaceContrastPictureUrl_ != nullptr;};
    void deleteTargetFaceContrastPictureUrl() { this->targetFaceContrastPictureUrl_ = nullptr;};
    inline string targetFaceContrastPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(targetFaceContrastPictureUrl_, "") };
    inline CompareFaceVerifyRequest& setTargetFaceContrastPictureUrl(string targetFaceContrastPictureUrl) { DARABONBA_PTR_SET_VALUE(targetFaceContrastPictureUrl_, targetFaceContrastPictureUrl) };


    // targetOssBucketName Field Functions 
    bool hasTargetOssBucketName() const { return this->targetOssBucketName_ != nullptr;};
    void deleteTargetOssBucketName() { this->targetOssBucketName_ = nullptr;};
    inline string targetOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(targetOssBucketName_, "") };
    inline CompareFaceVerifyRequest& setTargetOssBucketName(string targetOssBucketName) { DARABONBA_PTR_SET_VALUE(targetOssBucketName_, targetOssBucketName) };


    // targetOssObjectName Field Functions 
    bool hasTargetOssObjectName() const { return this->targetOssObjectName_ != nullptr;};
    void deleteTargetOssObjectName() { this->targetOssObjectName_ = nullptr;};
    inline string targetOssObjectName() const { DARABONBA_PTR_GET_DEFAULT(targetOssObjectName_, "") };
    inline CompareFaceVerifyRequest& setTargetOssObjectName(string targetOssObjectName) { DARABONBA_PTR_SET_VALUE(targetOssObjectName_, targetOssObjectName) };


  protected:
    // Whether cropping is allowed. Default is not allowed, T/F.
    // 
    // - T: Indicates that cropping is required
    // - F: Indicates that cropping is not required (default F)
    std::shared_ptr<string> crop_ = nullptr;
    // A unique identifier for the merchant\\"s request. The value is a 32-character alphanumeric combination, where the first few characters are a custom abbreviation defined by the merchant, followed by a period, and the latter part can be a random or incrementing sequence.
    std::shared_ptr<string> outerOrderNo_ = nullptr;
    // Fixed value: PV_FC.
    std::shared_ptr<string> productCode_ = nullptr;
    // Authentication scenario ID.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    // The CertifyId of a previously successful real-person verification, where the photo taken during that verification is used as the face comparison photo.
    // > Among the four ways to input facial photos (FaceContrastPicture, FaceContrastPictureUrl, CertifyId, OSS), choose one to provide.
    std::shared_ptr<string> sourceCertifyId_ = nullptr;
    // Base64 encoding of the photo.
    // > Choose one of the four ways to input a face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS.
    std::shared_ptr<string> sourceFaceContrastPicture_ = nullptr;
    // OSS photo URL, currently only supports authorized OSS photo URLs.
    // > Four ways to input face photos: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, and OSS. Choose one of them to input.
    std::shared_ptr<string> sourceFaceContrastPictureUrl_ = nullptr;
    // Name of the authorized OSS bucket.
    // > Choose one of the four ways to input face photos: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS.
    std::shared_ptr<string> sourceOssBucketName_ = nullptr;
    // Filename of the authorized OSS space.
    // > Choose one of the four ways to input face photos: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS.
    std::shared_ptr<string> sourceOssObjectName_ = nullptr;
    // CertifyId from a previously successful real-person authentication, where the photo taken during the authentication is used for face comparison.
    // 
    // > Choose one of the four methods to provide the reference face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS.
    std::shared_ptr<string> targetCertifyId_ = nullptr;
    // Base64 encoding of the reference photo.
    // 
    // > Choose one of the four methods to provide the reference face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS.
    std::shared_ptr<string> targetFaceContrastPicture_ = nullptr;
    // OSS address of the reference photo. Currently, only authorized OSS addresses are supported.
    // 
    // > Choose one of the four methods to provide the reference face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS.
    std::shared_ptr<string> targetFaceContrastPictureUrl_ = nullptr;
    // Name of the authorized OSS bucket.
    // 
    // > Choose one of the four methods to provide the reference face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS.
    std::shared_ptr<string> targetOssBucketName_ = nullptr;
    // File name in the authorized OSS space.
    // 
    // > Choose one of the four methods to provide the reference face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS.
    std::shared_ptr<string> targetOssObjectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
