// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEEPFAKEDETECTINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEEPFAKEDETECTINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DeepfakeDetectIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeepfakeDetectIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FaceBase64, faceBase64_);
      DARABONBA_PTR_TO_JSON(FaceInputType, faceInputType_);
      DARABONBA_PTR_TO_JSON(FaceUrl, faceUrl_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
    };
    friend void from_json(const Darabonba::Json& j, DeepfakeDetectIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceBase64, faceBase64_);
      DARABONBA_PTR_FROM_JSON(FaceInputType, faceInputType_);
      DARABONBA_PTR_FROM_JSON(FaceUrl, faceUrl_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
    };
    DeepfakeDetectIntlRequest() = default ;
    DeepfakeDetectIntlRequest(const DeepfakeDetectIntlRequest &) = default ;
    DeepfakeDetectIntlRequest(DeepfakeDetectIntlRequest &&) = default ;
    DeepfakeDetectIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeepfakeDetectIntlRequest() = default ;
    DeepfakeDetectIntlRequest& operator=(const DeepfakeDetectIntlRequest &) = default ;
    DeepfakeDetectIntlRequest& operator=(DeepfakeDetectIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceBase64_ == nullptr
        && this->faceInputType_ == nullptr && this->faceUrl_ == nullptr && this->merchantBizId_ == nullptr && this->productCode_ == nullptr && this->sceneCode_ == nullptr; };
    // faceBase64 Field Functions 
    bool hasFaceBase64() const { return this->faceBase64_ != nullptr;};
    void deleteFaceBase64() { this->faceBase64_ = nullptr;};
    inline string getFaceBase64() const { DARABONBA_PTR_GET_DEFAULT(faceBase64_, "") };
    inline DeepfakeDetectIntlRequest& setFaceBase64(string faceBase64) { DARABONBA_PTR_SET_VALUE(faceBase64_, faceBase64) };


    // faceInputType Field Functions 
    bool hasFaceInputType() const { return this->faceInputType_ != nullptr;};
    void deleteFaceInputType() { this->faceInputType_ = nullptr;};
    inline string getFaceInputType() const { DARABONBA_PTR_GET_DEFAULT(faceInputType_, "") };
    inline DeepfakeDetectIntlRequest& setFaceInputType(string faceInputType) { DARABONBA_PTR_SET_VALUE(faceInputType_, faceInputType) };


    // faceUrl Field Functions 
    bool hasFaceUrl() const { return this->faceUrl_ != nullptr;};
    void deleteFaceUrl() { this->faceUrl_ = nullptr;};
    inline string getFaceUrl() const { DARABONBA_PTR_GET_DEFAULT(faceUrl_, "") };
    inline DeepfakeDetectIntlRequest& setFaceUrl(string faceUrl) { DARABONBA_PTR_SET_VALUE(faceUrl_, faceUrl) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline DeepfakeDetectIntlRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DeepfakeDetectIntlRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline DeepfakeDetectIntlRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


  protected:
    // The Base64-encoded content of the facial image.
    // > Specify either FaceUrl or FaceBase64.
    shared_ptr<string> faceBase64_ {};
    // Set the value to **IMAGE** to specify a facial image.
    shared_ptr<string> faceInputType_ {};
    // The URL of the facial image.
    // > Specify either FaceUrl or FaceBase64.
    shared_ptr<string> faceUrl_ {};
    // The unique identifier of the merchant request. The value is a 32-character combination of letters and digits. The first few characters are a custom merchant abbreviation, the middle part can contain a timestamp, and the last part can be a random or incremental sequence.
    // 
    // This parameter is required.
    shared_ptr<string> merchantBizId_ {};
    // The product solution to use. Set the value to **FACE_DEEPFAKE**.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The custom scene ID for authentication. You can use this scene ID to query related records in the console. The value can be up to 10 characters long and can contain letters, digits, and underscores.
    shared_ptr<string> sceneCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
