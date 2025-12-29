// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIVENESSFACEVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LIVENESSFACEVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class LivenessFaceVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LivenessFaceVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(DeviceToken, deviceToken_);
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
    friend void from_json(const Darabonba::Json& j, LivenessFaceVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(DeviceToken, deviceToken_);
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
    LivenessFaceVerifyRequest() = default ;
    LivenessFaceVerifyRequest(const LivenessFaceVerifyRequest &) = default ;
    LivenessFaceVerifyRequest(LivenessFaceVerifyRequest &&) = default ;
    LivenessFaceVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LivenessFaceVerifyRequest() = default ;
    LivenessFaceVerifyRequest& operator=(const LivenessFaceVerifyRequest &) = default ;
    LivenessFaceVerifyRequest& operator=(LivenessFaceVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certifyId_ == nullptr
        && this->crop_ == nullptr && this->deviceToken_ == nullptr && this->faceContrastPicture_ == nullptr && this->faceContrastPictureUrl_ == nullptr && this->ip_ == nullptr
        && this->mobile_ == nullptr && this->model_ == nullptr && this->ossBucketName_ == nullptr && this->ossObjectName_ == nullptr && this->outerOrderNo_ == nullptr
        && this->productCode_ == nullptr && this->sceneId_ == nullptr && this->userId_ == nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline LivenessFaceVerifyRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline LivenessFaceVerifyRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // deviceToken Field Functions 
    bool hasDeviceToken() const { return this->deviceToken_ != nullptr;};
    void deleteDeviceToken() { this->deviceToken_ = nullptr;};
    inline string getDeviceToken() const { DARABONBA_PTR_GET_DEFAULT(deviceToken_, "") };
    inline LivenessFaceVerifyRequest& setDeviceToken(string deviceToken) { DARABONBA_PTR_SET_VALUE(deviceToken_, deviceToken) };


    // faceContrastPicture Field Functions 
    bool hasFaceContrastPicture() const { return this->faceContrastPicture_ != nullptr;};
    void deleteFaceContrastPicture() { this->faceContrastPicture_ = nullptr;};
    inline string getFaceContrastPicture() const { DARABONBA_PTR_GET_DEFAULT(faceContrastPicture_, "") };
    inline LivenessFaceVerifyRequest& setFaceContrastPicture(string faceContrastPicture) { DARABONBA_PTR_SET_VALUE(faceContrastPicture_, faceContrastPicture) };


    // faceContrastPictureUrl Field Functions 
    bool hasFaceContrastPictureUrl() const { return this->faceContrastPictureUrl_ != nullptr;};
    void deleteFaceContrastPictureUrl() { this->faceContrastPictureUrl_ = nullptr;};
    inline string getFaceContrastPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(faceContrastPictureUrl_, "") };
    inline LivenessFaceVerifyRequest& setFaceContrastPictureUrl(string faceContrastPictureUrl) { DARABONBA_PTR_SET_VALUE(faceContrastPictureUrl_, faceContrastPictureUrl) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline LivenessFaceVerifyRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline LivenessFaceVerifyRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline LivenessFaceVerifyRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline LivenessFaceVerifyRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossObjectName Field Functions 
    bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
    void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
    inline string getOssObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
    inline LivenessFaceVerifyRequest& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


    // outerOrderNo Field Functions 
    bool hasOuterOrderNo() const { return this->outerOrderNo_ != nullptr;};
    void deleteOuterOrderNo() { this->outerOrderNo_ = nullptr;};
    inline string getOuterOrderNo() const { DARABONBA_PTR_GET_DEFAULT(outerOrderNo_, "") };
    inline LivenessFaceVerifyRequest& setOuterOrderNo(string outerOrderNo) { DARABONBA_PTR_SET_VALUE(outerOrderNo_, outerOrderNo) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline LivenessFaceVerifyRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline LivenessFaceVerifyRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline LivenessFaceVerifyRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Unique identifier for real-person authentication.
    shared_ptr<string> certifyId_ {};
    // Whether to allow cropping of the face image:
    // 
    // - T: Allow cropping
    // 
    // - F (default): Do not allow cropping.
    shared_ptr<string> crop_ {};
    // Device token, used for risk identification.
    shared_ptr<string> deviceToken_ {};
    // Base64 encoded photo.
    shared_ptr<string> faceContrastPicture_ {};
    // Image URL.
    shared_ptr<string> faceContrastPictureUrl_ {};
    // User\\"s network IP address.
    shared_ptr<string> ip_ {};
    // User\\"s mobile phone number.
    shared_ptr<string> mobile_ {};
    // Liveness detection parameters.
    shared_ptr<string> model_ {};
    // Authorized OSS bucket name.
    shared_ptr<string> ossBucketName_ {};
    // Authorized OSS file name.
    shared_ptr<string> ossObjectName_ {};
    // A unique business identifier defined by the client side, used for subsequent troubleshooting. The value should be a combination of letters and numbers up to 32 characters long, ensuring uniqueness.
    shared_ptr<string> outerOrderNo_ {};
    // Fixed value: LR_FR_MIN.
    shared_ptr<string> productCode_ {};
    // Authentication scenario ID. This ID is automatically generated after creating an authentication scenario in the console.
    shared_ptr<int64_t> sceneId_ {};
    // Your custom user ID (up to 100 characters), please ensure it is unique.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
