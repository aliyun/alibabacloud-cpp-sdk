// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESUPERRESOLUTIONIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATESUPERRESOLUTIONIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class GenerateSuperResolutionImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateSuperResolutionImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(OutputQuality, outputQuality_);
      DARABONBA_PTR_TO_JSON(Scale, scale_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateSuperResolutionImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(OutputQuality, outputQuality_);
      DARABONBA_PTR_FROM_JSON(Scale, scale_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GenerateSuperResolutionImageRequest() = default ;
    GenerateSuperResolutionImageRequest(const GenerateSuperResolutionImageRequest &) = default ;
    GenerateSuperResolutionImageRequest(GenerateSuperResolutionImageRequest &&) = default ;
    GenerateSuperResolutionImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateSuperResolutionImageRequest() = default ;
    GenerateSuperResolutionImageRequest& operator=(const GenerateSuperResolutionImageRequest &) = default ;
    GenerateSuperResolutionImageRequest& operator=(GenerateSuperResolutionImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && return this->outputFormat_ == nullptr && return this->outputQuality_ == nullptr && return this->scale_ == nullptr && return this->userData_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline GenerateSuperResolutionImageRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline GenerateSuperResolutionImageRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // outputQuality Field Functions 
    bool hasOutputQuality() const { return this->outputQuality_ != nullptr;};
    void deleteOutputQuality() { this->outputQuality_ = nullptr;};
    inline int32_t outputQuality() const { DARABONBA_PTR_GET_DEFAULT(outputQuality_, 0) };
    inline GenerateSuperResolutionImageRequest& setOutputQuality(int32_t outputQuality) { DARABONBA_PTR_SET_VALUE(outputQuality_, outputQuality) };


    // scale Field Functions 
    bool hasScale() const { return this->scale_ != nullptr;};
    void deleteScale() { this->scale_ = nullptr;};
    inline int32_t scale() const { DARABONBA_PTR_GET_DEFAULT(scale_, 0) };
    inline GenerateSuperResolutionImageRequest& setScale(int32_t scale) { DARABONBA_PTR_SET_VALUE(scale_, scale) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GenerateSuperResolutionImageRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<int32_t> outputQuality_ = nullptr;
    std::shared_ptr<int32_t> scale_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
