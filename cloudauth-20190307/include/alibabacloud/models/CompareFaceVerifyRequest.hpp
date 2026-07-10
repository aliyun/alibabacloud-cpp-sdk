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
    virtual bool empty() const override { return this->crop_ == nullptr
        && this->outerOrderNo_ == nullptr && this->productCode_ == nullptr && this->sceneId_ == nullptr && this->sourceCertifyId_ == nullptr && this->sourceFaceContrastPicture_ == nullptr
        && this->sourceFaceContrastPictureUrl_ == nullptr && this->sourceOssBucketName_ == nullptr && this->sourceOssObjectName_ == nullptr && this->targetCertifyId_ == nullptr && this->targetFaceContrastPicture_ == nullptr
        && this->targetFaceContrastPictureUrl_ == nullptr && this->targetOssBucketName_ == nullptr && this->targetOssObjectName_ == nullptr; };
    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline CompareFaceVerifyRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // outerOrderNo Field Functions 
    bool hasOuterOrderNo() const { return this->outerOrderNo_ != nullptr;};
    void deleteOuterOrderNo() { this->outerOrderNo_ = nullptr;};
    inline string getOuterOrderNo() const { DARABONBA_PTR_GET_DEFAULT(outerOrderNo_, "") };
    inline CompareFaceVerifyRequest& setOuterOrderNo(string outerOrderNo) { DARABONBA_PTR_SET_VALUE(outerOrderNo_, outerOrderNo) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CompareFaceVerifyRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline CompareFaceVerifyRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sourceCertifyId Field Functions 
    bool hasSourceCertifyId() const { return this->sourceCertifyId_ != nullptr;};
    void deleteSourceCertifyId() { this->sourceCertifyId_ = nullptr;};
    inline string getSourceCertifyId() const { DARABONBA_PTR_GET_DEFAULT(sourceCertifyId_, "") };
    inline CompareFaceVerifyRequest& setSourceCertifyId(string sourceCertifyId) { DARABONBA_PTR_SET_VALUE(sourceCertifyId_, sourceCertifyId) };


    // sourceFaceContrastPicture Field Functions 
    bool hasSourceFaceContrastPicture() const { return this->sourceFaceContrastPicture_ != nullptr;};
    void deleteSourceFaceContrastPicture() { this->sourceFaceContrastPicture_ = nullptr;};
    inline string getSourceFaceContrastPicture() const { DARABONBA_PTR_GET_DEFAULT(sourceFaceContrastPicture_, "") };
    inline CompareFaceVerifyRequest& setSourceFaceContrastPicture(string sourceFaceContrastPicture) { DARABONBA_PTR_SET_VALUE(sourceFaceContrastPicture_, sourceFaceContrastPicture) };


    // sourceFaceContrastPictureUrl Field Functions 
    bool hasSourceFaceContrastPictureUrl() const { return this->sourceFaceContrastPictureUrl_ != nullptr;};
    void deleteSourceFaceContrastPictureUrl() { this->sourceFaceContrastPictureUrl_ = nullptr;};
    inline string getSourceFaceContrastPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceFaceContrastPictureUrl_, "") };
    inline CompareFaceVerifyRequest& setSourceFaceContrastPictureUrl(string sourceFaceContrastPictureUrl) { DARABONBA_PTR_SET_VALUE(sourceFaceContrastPictureUrl_, sourceFaceContrastPictureUrl) };


    // sourceOssBucketName Field Functions 
    bool hasSourceOssBucketName() const { return this->sourceOssBucketName_ != nullptr;};
    void deleteSourceOssBucketName() { this->sourceOssBucketName_ = nullptr;};
    inline string getSourceOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(sourceOssBucketName_, "") };
    inline CompareFaceVerifyRequest& setSourceOssBucketName(string sourceOssBucketName) { DARABONBA_PTR_SET_VALUE(sourceOssBucketName_, sourceOssBucketName) };


    // sourceOssObjectName Field Functions 
    bool hasSourceOssObjectName() const { return this->sourceOssObjectName_ != nullptr;};
    void deleteSourceOssObjectName() { this->sourceOssObjectName_ = nullptr;};
    inline string getSourceOssObjectName() const { DARABONBA_PTR_GET_DEFAULT(sourceOssObjectName_, "") };
    inline CompareFaceVerifyRequest& setSourceOssObjectName(string sourceOssObjectName) { DARABONBA_PTR_SET_VALUE(sourceOssObjectName_, sourceOssObjectName) };


    // targetCertifyId Field Functions 
    bool hasTargetCertifyId() const { return this->targetCertifyId_ != nullptr;};
    void deleteTargetCertifyId() { this->targetCertifyId_ = nullptr;};
    inline string getTargetCertifyId() const { DARABONBA_PTR_GET_DEFAULT(targetCertifyId_, "") };
    inline CompareFaceVerifyRequest& setTargetCertifyId(string targetCertifyId) { DARABONBA_PTR_SET_VALUE(targetCertifyId_, targetCertifyId) };


    // targetFaceContrastPicture Field Functions 
    bool hasTargetFaceContrastPicture() const { return this->targetFaceContrastPicture_ != nullptr;};
    void deleteTargetFaceContrastPicture() { this->targetFaceContrastPicture_ = nullptr;};
    inline string getTargetFaceContrastPicture() const { DARABONBA_PTR_GET_DEFAULT(targetFaceContrastPicture_, "") };
    inline CompareFaceVerifyRequest& setTargetFaceContrastPicture(string targetFaceContrastPicture) { DARABONBA_PTR_SET_VALUE(targetFaceContrastPicture_, targetFaceContrastPicture) };


    // targetFaceContrastPictureUrl Field Functions 
    bool hasTargetFaceContrastPictureUrl() const { return this->targetFaceContrastPictureUrl_ != nullptr;};
    void deleteTargetFaceContrastPictureUrl() { this->targetFaceContrastPictureUrl_ = nullptr;};
    inline string getTargetFaceContrastPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(targetFaceContrastPictureUrl_, "") };
    inline CompareFaceVerifyRequest& setTargetFaceContrastPictureUrl(string targetFaceContrastPictureUrl) { DARABONBA_PTR_SET_VALUE(targetFaceContrastPictureUrl_, targetFaceContrastPictureUrl) };


    // targetOssBucketName Field Functions 
    bool hasTargetOssBucketName() const { return this->targetOssBucketName_ != nullptr;};
    void deleteTargetOssBucketName() { this->targetOssBucketName_ = nullptr;};
    inline string getTargetOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(targetOssBucketName_, "") };
    inline CompareFaceVerifyRequest& setTargetOssBucketName(string targetOssBucketName) { DARABONBA_PTR_SET_VALUE(targetOssBucketName_, targetOssBucketName) };


    // targetOssObjectName Field Functions 
    bool hasTargetOssObjectName() const { return this->targetOssObjectName_ != nullptr;};
    void deleteTargetOssObjectName() { this->targetOssObjectName_ = nullptr;};
    inline string getTargetOssObjectName() const { DARABONBA_PTR_GET_DEFAULT(targetOssObjectName_, "") };
    inline CompareFaceVerifyRequest& setTargetOssObjectName(string targetOssObjectName) { DARABONBA_PTR_SET_VALUE(targetOssObjectName_, targetOssObjectName) };


  protected:
    // Specifies whether cropping is allowed. Default value: F.
    // 
    // - T: detection is required.
    // - F: detection is required. (Default: F).
    shared_ptr<string> crop_ {};
    // The unique identifier of the merchant request.
    // 
    // The value is a 32-character alphanumeric string. The first few characters are a custom abbreviation defined by the merchant, the middle part can be a time segment, and the last part can be a random or incremental sequence.
    shared_ptr<string> outerOrderNo_ {};
    // Fixed value: PV_FC.
    shared_ptr<string> productCode_ {};
    // The verification scenario ID.
    shared_ptr<int64_t> sceneId_ {};
    // The CertifyId from a previous successful ID Verification. The photo captured during that verification is used as the face comparison photo.
    // 
    // > You can use one of the following four methods to submit a face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS. Select one method.
    shared_ptr<string> sourceCertifyId_ {};
    // The Base64-encoded photo.
    // 
    // > You can use one of the following four methods to submit a face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS. Select one method.
    shared_ptr<string> sourceFaceContrastPicture_ {};
    // The OSS photo URL. Only authorized OSS photo URLs are supported.
    // 
    // > You can use one of the following four methods to submit a face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS. Select one method.
    shared_ptr<string> sourceFaceContrastPictureUrl_ {};
    // The bucket name of the authorized OSS space.
    // 
    // > You can use one of the following four methods to submit a face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS. Select one method.
    shared_ptr<string> sourceOssBucketName_ {};
    // The file name in the authorized OSS space.
    // 
    // > You can use one of the following four methods to submit a face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS. Select one method.
    shared_ptr<string> sourceOssObjectName_ {};
    // The CertifyId from a previous successful ID Verification. The photo captured during that verification is used as the face comparison photo.
    // 
    // > You can use one of the following four methods to submit a reference face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS. Select one method.
    shared_ptr<string> targetCertifyId_ {};
    // The Base64-encoded reference photo.
    // 
    // > You can use one of the following four methods to submit a reference face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS. Select one method.
    shared_ptr<string> targetFaceContrastPicture_ {};
    // The OSS URL of the reference photo. Only authorized OSS photo URLs are supported.
    // 
    // > You can use one of the following four methods to submit a reference face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS. Select one method.
    shared_ptr<string> targetFaceContrastPictureUrl_ {};
    // The bucket name of the authorized OSS space.
    // 
    // > You can use one of the following four methods to submit a reference face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS. Select one method.
    shared_ptr<string> targetOssBucketName_ {};
    // The file name in the authorized OSS space.
    // 
    // > You can use one of the following four methods to submit a reference face photo: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS. Select one method.
    shared_ptr<string> targetOssObjectName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
