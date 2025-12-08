// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPAREFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class CompareFaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareFaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageDataA, imageDataA_);
      DARABONBA_PTR_TO_JSON(ImageDataB, imageDataB_);
      DARABONBA_PTR_TO_JSON(ImageURLA, imageURLA_);
      DARABONBA_PTR_TO_JSON(ImageURLB, imageURLB_);
      DARABONBA_PTR_TO_JSON(QualityScoreThreshold, qualityScoreThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, CompareFaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageDataA, imageDataA_);
      DARABONBA_PTR_FROM_JSON(ImageDataB, imageDataB_);
      DARABONBA_PTR_FROM_JSON(ImageURLA, imageURLA_);
      DARABONBA_PTR_FROM_JSON(ImageURLB, imageURLB_);
      DARABONBA_PTR_FROM_JSON(QualityScoreThreshold, qualityScoreThreshold_);
    };
    CompareFaceRequest() = default ;
    CompareFaceRequest(const CompareFaceRequest &) = default ;
    CompareFaceRequest(CompareFaceRequest &&) = default ;
    CompareFaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareFaceRequest() = default ;
    CompareFaceRequest& operator=(const CompareFaceRequest &) = default ;
    CompareFaceRequest& operator=(CompareFaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageDataA_ == nullptr
        && return this->imageDataB_ == nullptr && return this->imageURLA_ == nullptr && return this->imageURLB_ == nullptr && return this->qualityScoreThreshold_ == nullptr; };
    // imageDataA Field Functions 
    bool hasImageDataA() const { return this->imageDataA_ != nullptr;};
    void deleteImageDataA() { this->imageDataA_ = nullptr;};
    inline string imageDataA() const { DARABONBA_PTR_GET_DEFAULT(imageDataA_, "") };
    inline CompareFaceRequest& setImageDataA(string imageDataA) { DARABONBA_PTR_SET_VALUE(imageDataA_, imageDataA) };


    // imageDataB Field Functions 
    bool hasImageDataB() const { return this->imageDataB_ != nullptr;};
    void deleteImageDataB() { this->imageDataB_ = nullptr;};
    inline string imageDataB() const { DARABONBA_PTR_GET_DEFAULT(imageDataB_, "") };
    inline CompareFaceRequest& setImageDataB(string imageDataB) { DARABONBA_PTR_SET_VALUE(imageDataB_, imageDataB) };


    // imageURLA Field Functions 
    bool hasImageURLA() const { return this->imageURLA_ != nullptr;};
    void deleteImageURLA() { this->imageURLA_ = nullptr;};
    inline string imageURLA() const { DARABONBA_PTR_GET_DEFAULT(imageURLA_, "") };
    inline CompareFaceRequest& setImageURLA(string imageURLA) { DARABONBA_PTR_SET_VALUE(imageURLA_, imageURLA) };


    // imageURLB Field Functions 
    bool hasImageURLB() const { return this->imageURLB_ != nullptr;};
    void deleteImageURLB() { this->imageURLB_ = nullptr;};
    inline string imageURLB() const { DARABONBA_PTR_GET_DEFAULT(imageURLB_, "") };
    inline CompareFaceRequest& setImageURLB(string imageURLB) { DARABONBA_PTR_SET_VALUE(imageURLB_, imageURLB) };


    // qualityScoreThreshold Field Functions 
    bool hasQualityScoreThreshold() const { return this->qualityScoreThreshold_ != nullptr;};
    void deleteQualityScoreThreshold() { this->qualityScoreThreshold_ = nullptr;};
    inline float qualityScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(qualityScoreThreshold_, 0.0) };
    inline CompareFaceRequest& setQualityScoreThreshold(float qualityScoreThreshold) { DARABONBA_PTR_SET_VALUE(qualityScoreThreshold_, qualityScoreThreshold) };


  protected:
    std::shared_ptr<string> imageDataA_ = nullptr;
    std::shared_ptr<string> imageDataB_ = nullptr;
    std::shared_ptr<string> imageURLA_ = nullptr;
    std::shared_ptr<string> imageURLB_ = nullptr;
    std::shared_ptr<float> qualityScoreThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
