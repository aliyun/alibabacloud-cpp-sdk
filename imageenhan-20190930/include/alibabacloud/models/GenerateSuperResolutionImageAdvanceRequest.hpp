// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESUPERRESOLUTIONIMAGEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATESUPERRESOLUTIONIMAGEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class GenerateSuperResolutionImageAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateSuperResolutionImageAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageUrl, imageUrlObject_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(OutputQuality, outputQuality_);
      DARABONBA_PTR_TO_JSON(Scale, scale_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateSuperResolutionImageAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageUrl, imageUrlObject_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(OutputQuality, outputQuality_);
      DARABONBA_PTR_FROM_JSON(Scale, scale_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GenerateSuperResolutionImageAdvanceRequest() = default ;
    GenerateSuperResolutionImageAdvanceRequest(const GenerateSuperResolutionImageAdvanceRequest &) = default ;
    GenerateSuperResolutionImageAdvanceRequest(GenerateSuperResolutionImageAdvanceRequest &&) = default ;
    GenerateSuperResolutionImageAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateSuperResolutionImageAdvanceRequest() = default ;
    GenerateSuperResolutionImageAdvanceRequest& operator=(const GenerateSuperResolutionImageAdvanceRequest &) = default ;
    GenerateSuperResolutionImageAdvanceRequest& operator=(GenerateSuperResolutionImageAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageUrlObject_ != nullptr
        && this->outputFormat_ != nullptr && this->outputQuality_ != nullptr && this->scale_ != nullptr && this->userData_ != nullptr; };
    // imageUrlObject Field Functions 
    bool hasImageUrlObject() const { return this->imageUrlObject_ != nullptr;};
    void deleteImageUrlObject() { this->imageUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageUrlObject() const { DARABONBA_GET(imageUrlObject_) };
    inline GenerateSuperResolutionImageAdvanceRequest& setImageUrlObject(shared_ptr<Darabonba::IStream> imageUrlObject) { DARABONBA_SET_VALUE(imageUrlObject_, imageUrlObject) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline GenerateSuperResolutionImageAdvanceRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // outputQuality Field Functions 
    bool hasOutputQuality() const { return this->outputQuality_ != nullptr;};
    void deleteOutputQuality() { this->outputQuality_ = nullptr;};
    inline int32_t outputQuality() const { DARABONBA_PTR_GET_DEFAULT(outputQuality_, 0) };
    inline GenerateSuperResolutionImageAdvanceRequest& setOutputQuality(int32_t outputQuality) { DARABONBA_PTR_SET_VALUE(outputQuality_, outputQuality) };


    // scale Field Functions 
    bool hasScale() const { return this->scale_ != nullptr;};
    void deleteScale() { this->scale_ = nullptr;};
    inline int32_t scale() const { DARABONBA_PTR_GET_DEFAULT(scale_, 0) };
    inline GenerateSuperResolutionImageAdvanceRequest& setScale(int32_t scale) { DARABONBA_PTR_SET_VALUE(scale_, scale) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GenerateSuperResolutionImageAdvanceRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageUrlObject_ = nullptr;
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<int32_t> outputQuality_ = nullptr;
    std::shared_ptr<int32_t> scale_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
