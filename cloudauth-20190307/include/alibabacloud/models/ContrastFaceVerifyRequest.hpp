// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTRASTFACEVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONTRASTFACEVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ContrastFaceVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContrastFaceVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertNo, certNo_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(DeviceToken, deviceToken_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(FaceContrastFile, faceContrastFile_);
      DARABONBA_PTR_TO_JSON(FaceContrastPicture, faceContrastPicture_);
      DARABONBA_PTR_TO_JSON(FaceContrastPictureUrl, faceContrastPictureUrl_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssObjectName, ossObjectName_);
      DARABONBA_PTR_TO_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ContrastFaceVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(DeviceToken, deviceToken_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(FaceContrastFile, faceContrastFile_);
      DARABONBA_PTR_FROM_JSON(FaceContrastPicture, faceContrastPicture_);
      DARABONBA_PTR_FROM_JSON(FaceContrastPictureUrl, faceContrastPictureUrl_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssObjectName, ossObjectName_);
      DARABONBA_PTR_FROM_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ContrastFaceVerifyRequest() = default ;
    ContrastFaceVerifyRequest(const ContrastFaceVerifyRequest &) = default ;
    ContrastFaceVerifyRequest(ContrastFaceVerifyRequest &&) = default ;
    ContrastFaceVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContrastFaceVerifyRequest() = default ;
    ContrastFaceVerifyRequest& operator=(const ContrastFaceVerifyRequest &) = default ;
    ContrastFaceVerifyRequest& operator=(ContrastFaceVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certName_ != nullptr
        && this->certNo_ != nullptr && this->certType_ != nullptr && this->certifyId_ != nullptr && this->crop_ != nullptr && this->deviceToken_ != nullptr
        && this->encryptType_ != nullptr && this->faceContrastFile_ != nullptr && this->faceContrastPicture_ != nullptr && this->faceContrastPictureUrl_ != nullptr && this->ip_ != nullptr
        && this->mobile_ != nullptr && this->model_ != nullptr && this->ossBucketName_ != nullptr && this->ossObjectName_ != nullptr && this->outerOrderNo_ != nullptr
        && this->productCode_ != nullptr && this->sceneId_ != nullptr && this->userId_ != nullptr; };
    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline ContrastFaceVerifyRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline ContrastFaceVerifyRequest& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline ContrastFaceVerifyRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline ContrastFaceVerifyRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string crop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline ContrastFaceVerifyRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // deviceToken Field Functions 
    bool hasDeviceToken() const { return this->deviceToken_ != nullptr;};
    void deleteDeviceToken() { this->deviceToken_ = nullptr;};
    inline string deviceToken() const { DARABONBA_PTR_GET_DEFAULT(deviceToken_, "") };
    inline ContrastFaceVerifyRequest& setDeviceToken(string deviceToken) { DARABONBA_PTR_SET_VALUE(deviceToken_, deviceToken) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline ContrastFaceVerifyRequest& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // faceContrastFile Field Functions 
    bool hasFaceContrastFile() const { return this->faceContrastFile_ != nullptr;};
    void deleteFaceContrastFile() { this->faceContrastFile_ = nullptr;};
    inline string faceContrastFile() const { DARABONBA_PTR_GET_DEFAULT(faceContrastFile_, "") };
    inline ContrastFaceVerifyRequest& setFaceContrastFile(string faceContrastFile) { DARABONBA_PTR_SET_VALUE(faceContrastFile_, faceContrastFile) };


    // faceContrastPicture Field Functions 
    bool hasFaceContrastPicture() const { return this->faceContrastPicture_ != nullptr;};
    void deleteFaceContrastPicture() { this->faceContrastPicture_ = nullptr;};
    inline string faceContrastPicture() const { DARABONBA_PTR_GET_DEFAULT(faceContrastPicture_, "") };
    inline ContrastFaceVerifyRequest& setFaceContrastPicture(string faceContrastPicture) { DARABONBA_PTR_SET_VALUE(faceContrastPicture_, faceContrastPicture) };


    // faceContrastPictureUrl Field Functions 
    bool hasFaceContrastPictureUrl() const { return this->faceContrastPictureUrl_ != nullptr;};
    void deleteFaceContrastPictureUrl() { this->faceContrastPictureUrl_ = nullptr;};
    inline string faceContrastPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(faceContrastPictureUrl_, "") };
    inline ContrastFaceVerifyRequest& setFaceContrastPictureUrl(string faceContrastPictureUrl) { DARABONBA_PTR_SET_VALUE(faceContrastPictureUrl_, faceContrastPictureUrl) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ContrastFaceVerifyRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline ContrastFaceVerifyRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ContrastFaceVerifyRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline ContrastFaceVerifyRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossObjectName Field Functions 
    bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
    void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
    inline string ossObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
    inline ContrastFaceVerifyRequest& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


    // outerOrderNo Field Functions 
    bool hasOuterOrderNo() const { return this->outerOrderNo_ != nullptr;};
    void deleteOuterOrderNo() { this->outerOrderNo_ = nullptr;};
    inline string outerOrderNo() const { DARABONBA_PTR_GET_DEFAULT(outerOrderNo_, "") };
    inline ContrastFaceVerifyRequest& setOuterOrderNo(string outerOrderNo) { DARABONBA_PTR_SET_VALUE(outerOrderNo_, outerOrderNo) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ContrastFaceVerifyRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline ContrastFaceVerifyRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ContrastFaceVerifyRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Real name.
    std::shared_ptr<string> certName_ = nullptr;
    // ID number
    std::shared_ptr<string> certNo_ = nullptr;
    // Type of identification. Currently, only IDENTITY_CARD is supported and must be provided.
    std::shared_ptr<string> certType_ = nullptr;
    // The CertifyId of a previously passed real-person authentication, with the photo taken during that authentication used as the comparison photo. 
    // > Among the four ways to input images (FaceContrastPicture, FaceContrastPictureUrl, CertifyId, OSS), choose one to provide.
    std::shared_ptr<string> certifyId_ = nullptr;
    // Allow face image cropping:
    // 
    // -  **T** – Cropping is allowed.
    // -  **F** (default) – Cropping is not allowed.
    std::shared_ptr<string> crop_ = nullptr;
    // Risk Identification - Device Token
    std::shared_ptr<string> deviceToken_ = nullptr;
    // Encryption type. Leave it empty if no encryption is required.
    // 
    // If you enable encrypted transmission, you must specify the encryption algorithm; currently, only the SM2 (Chinese national standard) algorithm is supported.
    // 
    // When an encryption algorithm is specified, encrypt both **CertName** and **CertNo** and submit the resulting ciphertext. For more details on parameter encryption, see the [Parameter Encryption documentation](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/description-of-parameter-encryption?spm=a2c4g.11186623.0.0.49541a8554cELI#task-2229332).
    std::shared_ptr<string> encryptType_ = nullptr;
    // Local video file.
    std::shared_ptr<string> faceContrastFile_ = nullptr;
    // Base64 encoded photo
    std::shared_ptr<string> faceContrastPicture_ = nullptr;
    // OSS photo URL, currently only supports authorized OSS photo URLs.
    // > Among the four ways to input images (FaceContrastPicture, FaceContrastPictureUrl, CertifyId, OSS), choose one to input.
    std::shared_ptr<string> faceContrastPictureUrl_ = nullptr;
    // User IP.
    std::shared_ptr<string> ip_ = nullptr;
    // User\\"s phone number.
    std::shared_ptr<string> mobile_ = nullptr;
    // Liveness detection type. Possible values:
    // 
    // • **NO_LIVENESS** – Liveness detection is disabled.
    // 
    // • **FRONT_CAMERA_LIVENESS** (default) – Liveness detection on face images captured with the mobile device’s front camera.
    // 
    // • **REAR_CAMERA_LIVENESS** – Liveness detection on face images captured in other scenarios (e.g., via the rear camera).
    std::shared_ptr<string> model_ = nullptr;
    // Authorized OSS space Bucket name. In the methods of passing images, including FaceContrastPicture, FaceContrastPictureUrl, CertifyId, and OSS, choose one to pass in.
    std::shared_ptr<string> ossBucketName_ = nullptr;
    // Filename of the authorized OSS space.
    // > Among the four ways to input images (FaceContrastPicture, FaceContrastPictureUrl, CertifyId, OSS), choose one to input.
    std::shared_ptr<string> ossObjectName_ = nullptr;
    // A unique identifier for the merchant\\"s request. It is a 32-character alphanumeric combination. The first few characters are a custom abbreviation defined by the merchant, followed by a period, and the latter part can be a random or incrementing sequence.
    std::shared_ptr<string> outerOrderNo_ = nullptr;
    // Fixed value: ID_MIN.
    std::shared_ptr<string> productCode_ = nullptr;
    // Authentication scenario ID.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    // Custom user ID defined by the customer\\"s business.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
