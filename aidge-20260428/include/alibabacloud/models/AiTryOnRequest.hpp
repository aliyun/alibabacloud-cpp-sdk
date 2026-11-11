// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AITRYONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AITRYONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class AiTryOnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiTryOnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClothImageUrl, clothImageUrl_);
      DARABONBA_PTR_TO_JSON(ClothType, clothType_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(ModelImageUrl, modelImageUrl_);
      DARABONBA_PTR_TO_JSON(ModelTemplateUrl, modelTemplateUrl_);
      DARABONBA_PTR_TO_JSON(PoseTemplateUrl, poseTemplateUrl_);
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(TryonType, tryonType_);
    };
    friend void from_json(const Darabonba::Json& j, AiTryOnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClothImageUrl, clothImageUrl_);
      DARABONBA_PTR_FROM_JSON(ClothType, clothType_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(ModelImageUrl, modelImageUrl_);
      DARABONBA_PTR_FROM_JSON(ModelTemplateUrl, modelTemplateUrl_);
      DARABONBA_PTR_FROM_JSON(PoseTemplateUrl, poseTemplateUrl_);
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(TryonType, tryonType_);
    };
    AiTryOnRequest() = default ;
    AiTryOnRequest(const AiTryOnRequest &) = default ;
    AiTryOnRequest(AiTryOnRequest &&) = default ;
    AiTryOnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiTryOnRequest() = default ;
    AiTryOnRequest& operator=(const AiTryOnRequest &) = default ;
    AiTryOnRequest& operator=(AiTryOnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clothImageUrl_ == nullptr
        && this->clothType_ == nullptr && this->mode_ == nullptr && this->modelImageUrl_ == nullptr && this->modelTemplateUrl_ == nullptr && this->poseTemplateUrl_ == nullptr
        && this->ratio_ == nullptr && this->resolution_ == nullptr && this->tryonType_ == nullptr; };
    // clothImageUrl Field Functions 
    bool hasClothImageUrl() const { return this->clothImageUrl_ != nullptr;};
    void deleteClothImageUrl() { this->clothImageUrl_ = nullptr;};
    inline string getClothImageUrl() const { DARABONBA_PTR_GET_DEFAULT(clothImageUrl_, "") };
    inline AiTryOnRequest& setClothImageUrl(string clothImageUrl) { DARABONBA_PTR_SET_VALUE(clothImageUrl_, clothImageUrl) };


    // clothType Field Functions 
    bool hasClothType() const { return this->clothType_ != nullptr;};
    void deleteClothType() { this->clothType_ = nullptr;};
    inline string getClothType() const { DARABONBA_PTR_GET_DEFAULT(clothType_, "") };
    inline AiTryOnRequest& setClothType(string clothType) { DARABONBA_PTR_SET_VALUE(clothType_, clothType) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline AiTryOnRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // modelImageUrl Field Functions 
    bool hasModelImageUrl() const { return this->modelImageUrl_ != nullptr;};
    void deleteModelImageUrl() { this->modelImageUrl_ = nullptr;};
    inline string getModelImageUrl() const { DARABONBA_PTR_GET_DEFAULT(modelImageUrl_, "") };
    inline AiTryOnRequest& setModelImageUrl(string modelImageUrl) { DARABONBA_PTR_SET_VALUE(modelImageUrl_, modelImageUrl) };


    // modelTemplateUrl Field Functions 
    bool hasModelTemplateUrl() const { return this->modelTemplateUrl_ != nullptr;};
    void deleteModelTemplateUrl() { this->modelTemplateUrl_ = nullptr;};
    inline string getModelTemplateUrl() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateUrl_, "") };
    inline AiTryOnRequest& setModelTemplateUrl(string modelTemplateUrl) { DARABONBA_PTR_SET_VALUE(modelTemplateUrl_, modelTemplateUrl) };


    // poseTemplateUrl Field Functions 
    bool hasPoseTemplateUrl() const { return this->poseTemplateUrl_ != nullptr;};
    void deletePoseTemplateUrl() { this->poseTemplateUrl_ = nullptr;};
    inline string getPoseTemplateUrl() const { DARABONBA_PTR_GET_DEFAULT(poseTemplateUrl_, "") };
    inline AiTryOnRequest& setPoseTemplateUrl(string poseTemplateUrl) { DARABONBA_PTR_SET_VALUE(poseTemplateUrl_, poseTemplateUrl) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline AiTryOnRequest& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline AiTryOnRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // tryonType Field Functions 
    bool hasTryonType() const { return this->tryonType_ != nullptr;};
    void deleteTryonType() { this->tryonType_ = nullptr;};
    inline string getTryonType() const { DARABONBA_PTR_GET_DEFAULT(tryonType_, "") };
    inline AiTryOnRequest& setTryonType(string tryonType) { DARABONBA_PTR_SET_VALUE(tryonType_, tryonType) };


  protected:
    // The URL of the garment image. Only one image is supported. The URL must be a publicly accessible `http` or `https` address. The image must be in JPG, JPEG, PNG, BMP, or WEBP format. The resolution must be between 256×256 and 2049×2049 pixels, and the file size cannot exceed 10 MB.<br>
    shared_ptr<string> clothImageUrl_ {};
    // The clothing type. If specified, valid values are tops, bottoms, dresses, tops_and_bottoms, shoes, and hats. If this parameter is not specified, the clothing type is automatically identified.
    shared_ptr<string> clothType_ {};
    // The model tier. Set the value to lite. This parameter is required.
    shared_ptr<string> mode_ {};
    // The URL of the model image. Only one image is supported. The URL must be a publicly accessible `http` or `https` address. The image must be in JPG, JPEG, PNG, BMP, or WEBP format. The resolution must be between 256×256 and 2049×2049 pixels, and the file size cannot exceed 10 MB.<br>
    // 
    // This parameter is required.
    shared_ptr<string> modelImageUrl_ {};
    // The URL of the identity template image. Only one image is supported. This parameter is mutually exclusive with PoseTemplateUrl.
    shared_ptr<string> modelTemplateUrl_ {};
    // The URL of the pose template image. Only one image is supported. This parameter is mutually exclusive with ModelTemplateUrl.
    shared_ptr<string> poseTemplateUrl_ {};
    // The aspect ratio of the output image. Valid values: 1:1, 2:3, 3:4, and 9:16. This parameter is optional. If this parameter is not specified, the aspect ratio of the original model image is used.
    shared_ptr<string> ratio_ {};
    // The resolution of the output image. Synchronous API operations only support 1K resolution.
    // 
    // This parameter is required.
    shared_ptr<string> resolution_ {};
    // The try-on type. Valid values: singletryon and multitryon. This parameter is optional. If this parameter is not specified, the workflow defaults to singletryon based on whether a product image is provided.
    shared_ptr<string> tryonType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
