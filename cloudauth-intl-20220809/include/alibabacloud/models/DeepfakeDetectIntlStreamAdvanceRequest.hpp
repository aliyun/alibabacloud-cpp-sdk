// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEEPFAKEDETECTINTLSTREAMADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEEPFAKEDETECTINTLSTREAMADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DeepfakeDetectIntlStreamAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeepfakeDetectIntlStreamAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FaceBase64, faceBase64_);
      DARABONBA_TO_JSON(FaceFile, faceFileObject_);
      DARABONBA_PTR_TO_JSON(FaceInputType, faceInputType_);
      DARABONBA_PTR_TO_JSON(FaceUrl, faceUrl_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
    };
    friend void from_json(const Darabonba::Json& j, DeepfakeDetectIntlStreamAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceBase64, faceBase64_);
      DARABONBA_FROM_JSON(FaceFile, faceFileObject_);
      DARABONBA_PTR_FROM_JSON(FaceInputType, faceInputType_);
      DARABONBA_PTR_FROM_JSON(FaceUrl, faceUrl_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
    };
    DeepfakeDetectIntlStreamAdvanceRequest() = default ;
    DeepfakeDetectIntlStreamAdvanceRequest(const DeepfakeDetectIntlStreamAdvanceRequest &) = default ;
    DeepfakeDetectIntlStreamAdvanceRequest(DeepfakeDetectIntlStreamAdvanceRequest &&) = default ;
    DeepfakeDetectIntlStreamAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeepfakeDetectIntlStreamAdvanceRequest() = default ;
    DeepfakeDetectIntlStreamAdvanceRequest& operator=(const DeepfakeDetectIntlStreamAdvanceRequest &) = default ;
    DeepfakeDetectIntlStreamAdvanceRequest& operator=(DeepfakeDetectIntlStreamAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceBase64_ == nullptr
        && return this->faceFileObject_ == nullptr && return this->faceInputType_ == nullptr && return this->faceUrl_ == nullptr && return this->merchantBizId_ == nullptr && return this->productCode_ == nullptr
        && return this->sceneCode_ == nullptr; };
    // faceBase64 Field Functions 
    bool hasFaceBase64() const { return this->faceBase64_ != nullptr;};
    void deleteFaceBase64() { this->faceBase64_ = nullptr;};
    inline string faceBase64() const { DARABONBA_PTR_GET_DEFAULT(faceBase64_, "") };
    inline DeepfakeDetectIntlStreamAdvanceRequest& setFaceBase64(string faceBase64) { DARABONBA_PTR_SET_VALUE(faceBase64_, faceBase64) };


    // faceFileObject Field Functions 
    bool hasFaceFileObject() const { return this->faceFileObject_ != nullptr;};
    void deleteFaceFileObject() { this->faceFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> faceFileObject() const { DARABONBA_GET(faceFileObject_) };
    inline DeepfakeDetectIntlStreamAdvanceRequest& setFaceFileObject(shared_ptr<Darabonba::IStream> faceFileObject) { DARABONBA_SET_VALUE(faceFileObject_, faceFileObject) };


    // faceInputType Field Functions 
    bool hasFaceInputType() const { return this->faceInputType_ != nullptr;};
    void deleteFaceInputType() { this->faceInputType_ = nullptr;};
    inline string faceInputType() const { DARABONBA_PTR_GET_DEFAULT(faceInputType_, "") };
    inline DeepfakeDetectIntlStreamAdvanceRequest& setFaceInputType(string faceInputType) { DARABONBA_PTR_SET_VALUE(faceInputType_, faceInputType) };


    // faceUrl Field Functions 
    bool hasFaceUrl() const { return this->faceUrl_ != nullptr;};
    void deleteFaceUrl() { this->faceUrl_ = nullptr;};
    inline string faceUrl() const { DARABONBA_PTR_GET_DEFAULT(faceUrl_, "") };
    inline DeepfakeDetectIntlStreamAdvanceRequest& setFaceUrl(string faceUrl) { DARABONBA_PTR_SET_VALUE(faceUrl_, faceUrl) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string merchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline DeepfakeDetectIntlStreamAdvanceRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DeepfakeDetectIntlStreamAdvanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline DeepfakeDetectIntlStreamAdvanceRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


  protected:
    // Enter the Base64 encoded format of the face image; for video formats, it is recommended to input via stream.
    std::shared_ptr<string> faceBase64_ = nullptr;
    // Image input stream.
    shared_ptr<Darabonba::IStream> faceFileObject_ = nullptr;
    // Face material input type:
    // 
    // - IMAGE (default): Face image
    // - VIDEO: Face video
    // 
    // Note: Video processing takes longer, it is recommended to set the timeout > 3S.
    std::shared_ptr<string> faceInputType_ = nullptr;
    // Enter the URL address of the face image.
    std::shared_ptr<string> faceUrl_ = nullptr;
    // A unique identifier for the merchant\\"s request, consisting of a 32-character alphanumeric combination.
    // 
    // The first few characters are composed of a custom abbreviation defined by the merchant, the middle part can include a period of time, and the latter part can use a random or incremental sequence.
    std::shared_ptr<string> merchantBizId_ = nullptr;
    // The product solution to be integrated.
    // Value: FACE_DEEPFAKE
    std::shared_ptr<string> productCode_ = nullptr;
    // Your custom authentication scenario ID, used for querying related records by entering this scenario ID in the console later.
    // 
    // Supports a combination of 10 characters, including letters, numbers, or underscores.
    std::shared_ptr<string> sceneCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
