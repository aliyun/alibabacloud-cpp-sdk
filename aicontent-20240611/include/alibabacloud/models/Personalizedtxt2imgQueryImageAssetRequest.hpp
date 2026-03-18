// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGQUERYIMAGEASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGQUERYIMAGEASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class Personalizedtxt2imgQueryImageAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Personalizedtxt2imgQueryImageAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(encodeFormat, encodeFormat_);
      DARABONBA_PTR_TO_JSON(imageId, imageId_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(promptId, promptId_);
    };
    friend void from_json(const Darabonba::Json& j, Personalizedtxt2imgQueryImageAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(encodeFormat, encodeFormat_);
      DARABONBA_PTR_FROM_JSON(imageId, imageId_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(promptId, promptId_);
    };
    Personalizedtxt2imgQueryImageAssetRequest() = default ;
    Personalizedtxt2imgQueryImageAssetRequest(const Personalizedtxt2imgQueryImageAssetRequest &) = default ;
    Personalizedtxt2imgQueryImageAssetRequest(Personalizedtxt2imgQueryImageAssetRequest &&) = default ;
    Personalizedtxt2imgQueryImageAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Personalizedtxt2imgQueryImageAssetRequest() = default ;
    Personalizedtxt2imgQueryImageAssetRequest& operator=(const Personalizedtxt2imgQueryImageAssetRequest &) = default ;
    Personalizedtxt2imgQueryImageAssetRequest& operator=(Personalizedtxt2imgQueryImageAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encodeFormat_ == nullptr
        && this->imageId_ == nullptr && this->modelId_ == nullptr && this->promptId_ == nullptr; };
    // encodeFormat Field Functions 
    bool hasEncodeFormat() const { return this->encodeFormat_ != nullptr;};
    void deleteEncodeFormat() { this->encodeFormat_ = nullptr;};
    inline string getEncodeFormat() const { DARABONBA_PTR_GET_DEFAULT(encodeFormat_, "") };
    inline Personalizedtxt2imgQueryImageAssetRequest& setEncodeFormat(string encodeFormat) { DARABONBA_PTR_SET_VALUE(encodeFormat_, encodeFormat) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline Personalizedtxt2imgQueryImageAssetRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline Personalizedtxt2imgQueryImageAssetRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // promptId Field Functions 
    bool hasPromptId() const { return this->promptId_ != nullptr;};
    void deletePromptId() { this->promptId_ = nullptr;};
    inline string getPromptId() const { DARABONBA_PTR_GET_DEFAULT(promptId_, "") };
    inline Personalizedtxt2imgQueryImageAssetRequest& setPromptId(string promptId) { DARABONBA_PTR_SET_VALUE(promptId_, promptId) };


  protected:
    shared_ptr<string> encodeFormat_ {};
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // This parameter is required.
    shared_ptr<string> modelId_ {};
    // This parameter is required.
    shared_ptr<string> promptId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
