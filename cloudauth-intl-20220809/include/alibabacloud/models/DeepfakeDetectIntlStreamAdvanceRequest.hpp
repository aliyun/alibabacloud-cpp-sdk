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
      // faceFileObject_ is stream
      DARABONBA_PTR_TO_JSON(FaceInputType, faceInputType_);
      DARABONBA_PTR_TO_JSON(FaceUrl, faceUrl_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
    };
    friend void from_json(const Darabonba::Json& j, DeepfakeDetectIntlStreamAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceBase64, faceBase64_);
      // faceFileObject_ is stream
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
        && this->faceFileObject_ == nullptr && this->faceInputType_ == nullptr && this->faceUrl_ == nullptr && this->merchantBizId_ == nullptr && this->productCode_ == nullptr
        && this->sceneCode_ == nullptr; };
    // faceBase64 Field Functions 
    bool hasFaceBase64() const { return this->faceBase64_ != nullptr;};
    void deleteFaceBase64() { this->faceBase64_ = nullptr;};
    inline string getFaceBase64() const { DARABONBA_PTR_GET_DEFAULT(faceBase64_, "") };
    inline DeepfakeDetectIntlStreamAdvanceRequest& setFaceBase64(string faceBase64) { DARABONBA_PTR_SET_VALUE(faceBase64_, faceBase64) };


    // faceFileObject Field Functions 
    bool hasFaceFileObject() const { return this->faceFileObject_ != nullptr;};
    void deleteFaceFileObject() { this->faceFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFaceFileObject() const { DARABONBA_GET(faceFileObject_) };
    inline DeepfakeDetectIntlStreamAdvanceRequest& setFaceFileObject(shared_ptr<Darabonba::IStream> faceFileObject) { DARABONBA_SET_VALUE(faceFileObject_, faceFileObject) };


    // faceInputType Field Functions 
    bool hasFaceInputType() const { return this->faceInputType_ != nullptr;};
    void deleteFaceInputType() { this->faceInputType_ = nullptr;};
    inline string getFaceInputType() const { DARABONBA_PTR_GET_DEFAULT(faceInputType_, "") };
    inline DeepfakeDetectIntlStreamAdvanceRequest& setFaceInputType(string faceInputType) { DARABONBA_PTR_SET_VALUE(faceInputType_, faceInputType) };


    // faceUrl Field Functions 
    bool hasFaceUrl() const { return this->faceUrl_ != nullptr;};
    void deleteFaceUrl() { this->faceUrl_ = nullptr;};
    inline string getFaceUrl() const { DARABONBA_PTR_GET_DEFAULT(faceUrl_, "") };
    inline DeepfakeDetectIntlStreamAdvanceRequest& setFaceUrl(string faceUrl) { DARABONBA_PTR_SET_VALUE(faceUrl_, faceUrl) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline DeepfakeDetectIntlStreamAdvanceRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DeepfakeDetectIntlStreamAdvanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline DeepfakeDetectIntlStreamAdvanceRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


  protected:
    // The Base64-encoded face image. For videos, we recommend that you use the stream method for transmission.
    shared_ptr<string> faceBase64_ {};
    // The image input stream.
    shared_ptr<Darabonba::IStream> faceFileObject_ {};
    // The type of facial material input:
    // 
    // - IMAGE (default): Face image
    // - VIDEO: Face video
    // 
    // Note
    // Video processing takes a long time. We recommend that you set the timeout period to more than 3 seconds.
    shared_ptr<string> faceInputType_ {};
    // The URL of the face image.
    shared_ptr<string> faceUrl_ {};
    // The unique identifier of the merchant request. The value is an alphanumeric string with a length of 32 characters.
    // 
    // The first few characters consist of a custom abbreviation defined by the merchant, the middle part can contain a timestamp, and the last part can use a random or incremental sequence.
    shared_ptr<string> merchantBizId_ {};
    // The product solution to integrate.
    // Valid value: FACE_DEEPFAKE
    shared_ptr<string> productCode_ {};
    // A custom verification scenario ID that you define. This ID is used to query related records in the console.
    // 
    // The value is a combination of letters, digits, or underscores (_) with a maximum length of 10 characters.
    shared_ptr<string> sceneCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
