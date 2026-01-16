// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIGCFACEVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AIGCFACEVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class AIGCFaceVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIGCFaceVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FaceContrastPicture, faceContrastPicture_);
      DARABONBA_PTR_TO_JSON(FaceContrastPictureUrl, faceContrastPictureUrl_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssObjectName, ossObjectName_);
      DARABONBA_PTR_TO_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, AIGCFaceVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceContrastPicture, faceContrastPicture_);
      DARABONBA_PTR_FROM_JSON(FaceContrastPictureUrl, faceContrastPictureUrl_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssObjectName, ossObjectName_);
      DARABONBA_PTR_FROM_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    AIGCFaceVerifyRequest() = default ;
    AIGCFaceVerifyRequest(const AIGCFaceVerifyRequest &) = default ;
    AIGCFaceVerifyRequest(AIGCFaceVerifyRequest &&) = default ;
    AIGCFaceVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIGCFaceVerifyRequest() = default ;
    AIGCFaceVerifyRequest& operator=(const AIGCFaceVerifyRequest &) = default ;
    AIGCFaceVerifyRequest& operator=(AIGCFaceVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceContrastPicture_ == nullptr
        && this->faceContrastPictureUrl_ == nullptr && this->ossBucketName_ == nullptr && this->ossObjectName_ == nullptr && this->outerOrderNo_ == nullptr && this->productCode_ == nullptr
        && this->sceneId_ == nullptr; };
    // faceContrastPicture Field Functions 
    bool hasFaceContrastPicture() const { return this->faceContrastPicture_ != nullptr;};
    void deleteFaceContrastPicture() { this->faceContrastPicture_ = nullptr;};
    inline string getFaceContrastPicture() const { DARABONBA_PTR_GET_DEFAULT(faceContrastPicture_, "") };
    inline AIGCFaceVerifyRequest& setFaceContrastPicture(string faceContrastPicture) { DARABONBA_PTR_SET_VALUE(faceContrastPicture_, faceContrastPicture) };


    // faceContrastPictureUrl Field Functions 
    bool hasFaceContrastPictureUrl() const { return this->faceContrastPictureUrl_ != nullptr;};
    void deleteFaceContrastPictureUrl() { this->faceContrastPictureUrl_ = nullptr;};
    inline string getFaceContrastPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(faceContrastPictureUrl_, "") };
    inline AIGCFaceVerifyRequest& setFaceContrastPictureUrl(string faceContrastPictureUrl) { DARABONBA_PTR_SET_VALUE(faceContrastPictureUrl_, faceContrastPictureUrl) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline AIGCFaceVerifyRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossObjectName Field Functions 
    bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
    void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
    inline string getOssObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
    inline AIGCFaceVerifyRequest& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


    // outerOrderNo Field Functions 
    bool hasOuterOrderNo() const { return this->outerOrderNo_ != nullptr;};
    void deleteOuterOrderNo() { this->outerOrderNo_ = nullptr;};
    inline string getOuterOrderNo() const { DARABONBA_PTR_GET_DEFAULT(outerOrderNo_, "") };
    inline AIGCFaceVerifyRequest& setOuterOrderNo(string outerOrderNo) { DARABONBA_PTR_SET_VALUE(outerOrderNo_, outerOrderNo) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline AIGCFaceVerifyRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline AIGCFaceVerifyRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // Base64 encoded photo.
    // > Choose one of the three ways to input images: FaceContrastPicture, FaceContrastPictureUrl, or OSS.
    shared_ptr<string> faceContrastPicture_ {};
    // Portrait address, accessible via public HTTP or HTTPS link.
    // 
    // > Choose one of the three ways to input images: FaceContrastPicture, FaceContrastPictureUrl, or OSS.
    shared_ptr<string> faceContrastPictureUrl_ {};
    // Authorized OSS bucket name.
    // > Choose one of the three ways to input images: FaceContrastPicture, FaceContrastPictureUrl, or OSS.
    shared_ptr<string> ossBucketName_ {};
    // Authorized OSS file name.
    // > Choose one of the three ways to input images: FaceContrastPicture, FaceContrastPictureUrl, or OSS.
    shared_ptr<string> ossObjectName_ {};
    // A unique business identifier defined by the client side, used for subsequent troubleshooting. The value should be a combination of letters and numbers with a maximum length of 32 characters, please ensure its uniqueness.
    shared_ptr<string> outerOrderNo_ {};
    // Product solution
    shared_ptr<string> productCode_ {};
    // Authentication scene ID. This ID is automatically generated after creating an authentication scene in the console. For how to create an authentication scene, see Adding an Authentication Scene.
    shared_ptr<int64_t> sceneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
