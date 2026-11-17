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
    // The Base64-encoded string of the face image. For videos, pass the data as a stream.
    shared_ptr<string> faceBase64_ {};
    // The input stream of the image.
    shared_ptr<Darabonba::IStream> faceFileObject_ {};
    // The input type of the face material. Valid values:
    // - IMAGE: face image. This is the default value.
    // - VIDEO: face video.
    // 
    // Note: Video processing takes a long time. Set the timeout period to a value greater than 3 seconds.
    shared_ptr<string> faceInputType_ {};
    // The URL of the face image.
    shared_ptr<string> faceUrl_ {};
    // The unique identifier of the merchant request. The value is a 32-character alphanumeric string. The first few characters consist of a custom merchant abbreviation, the middle part can contain a time period, and the latter part can be a random or incremental sequence.
    shared_ptr<string> merchantBizId_ {};
    // The product solution to be integrated. Valid values: FACE_DEEPFAKE.
    shared_ptr<string> productCode_ {};
    // The custom authentication scenario ID, which is used to query related records by entering this scenario ID in the console. The value must be 10 characters in length and can contain letters, digits, and underscores.
    shared_ptr<string> sceneCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
