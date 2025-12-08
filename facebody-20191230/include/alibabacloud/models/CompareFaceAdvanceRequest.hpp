// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREFACEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPAREFACEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class CompareFaceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageDataA, imageDataA_);
      DARABONBA_PTR_TO_JSON(ImageDataB, imageDataB_);
      DARABONBA_TO_JSON(ImageURLA, imageURLAObject_);
      DARABONBA_TO_JSON(ImageURLB, imageURLBObject_);
      DARABONBA_PTR_TO_JSON(QualityScoreThreshold, qualityScoreThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, CompareFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageDataA, imageDataA_);
      DARABONBA_PTR_FROM_JSON(ImageDataB, imageDataB_);
      DARABONBA_FROM_JSON(ImageURLA, imageURLAObject_);
      DARABONBA_FROM_JSON(ImageURLB, imageURLBObject_);
      DARABONBA_PTR_FROM_JSON(QualityScoreThreshold, qualityScoreThreshold_);
    };
    CompareFaceAdvanceRequest() = default ;
    CompareFaceAdvanceRequest(const CompareFaceAdvanceRequest &) = default ;
    CompareFaceAdvanceRequest(CompareFaceAdvanceRequest &&) = default ;
    CompareFaceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareFaceAdvanceRequest() = default ;
    CompareFaceAdvanceRequest& operator=(const CompareFaceAdvanceRequest &) = default ;
    CompareFaceAdvanceRequest& operator=(CompareFaceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageDataA_ == nullptr
        && return this->imageDataB_ == nullptr && return this->imageURLAObject_ == nullptr && return this->imageURLBObject_ == nullptr && return this->qualityScoreThreshold_ == nullptr; };
    // imageDataA Field Functions 
    bool hasImageDataA() const { return this->imageDataA_ != nullptr;};
    void deleteImageDataA() { this->imageDataA_ = nullptr;};
    inline string imageDataA() const { DARABONBA_PTR_GET_DEFAULT(imageDataA_, "") };
    inline CompareFaceAdvanceRequest& setImageDataA(string imageDataA) { DARABONBA_PTR_SET_VALUE(imageDataA_, imageDataA) };


    // imageDataB Field Functions 
    bool hasImageDataB() const { return this->imageDataB_ != nullptr;};
    void deleteImageDataB() { this->imageDataB_ = nullptr;};
    inline string imageDataB() const { DARABONBA_PTR_GET_DEFAULT(imageDataB_, "") };
    inline CompareFaceAdvanceRequest& setImageDataB(string imageDataB) { DARABONBA_PTR_SET_VALUE(imageDataB_, imageDataB) };


    // imageURLAObject Field Functions 
    bool hasImageURLAObject() const { return this->imageURLAObject_ != nullptr;};
    void deleteImageURLAObject() { this->imageURLAObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLAObject() const { DARABONBA_GET(imageURLAObject_) };
    inline CompareFaceAdvanceRequest& setImageURLAObject(shared_ptr<Darabonba::IStream> imageURLAObject) { DARABONBA_SET_VALUE(imageURLAObject_, imageURLAObject) };


    // imageURLBObject Field Functions 
    bool hasImageURLBObject() const { return this->imageURLBObject_ != nullptr;};
    void deleteImageURLBObject() { this->imageURLBObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLBObject() const { DARABONBA_GET(imageURLBObject_) };
    inline CompareFaceAdvanceRequest& setImageURLBObject(shared_ptr<Darabonba::IStream> imageURLBObject) { DARABONBA_SET_VALUE(imageURLBObject_, imageURLBObject) };


    // qualityScoreThreshold Field Functions 
    bool hasQualityScoreThreshold() const { return this->qualityScoreThreshold_ != nullptr;};
    void deleteQualityScoreThreshold() { this->qualityScoreThreshold_ = nullptr;};
    inline float qualityScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(qualityScoreThreshold_, 0.0) };
    inline CompareFaceAdvanceRequest& setQualityScoreThreshold(float qualityScoreThreshold) { DARABONBA_PTR_SET_VALUE(qualityScoreThreshold_, qualityScoreThreshold) };


  protected:
    std::shared_ptr<string> imageDataA_ = nullptr;
    std::shared_ptr<string> imageDataB_ = nullptr;
    shared_ptr<Darabonba::IStream> imageURLAObject_ = nullptr;
    shared_ptr<Darabonba::IStream> imageURLBObject_ = nullptr;
    std::shared_ptr<float> qualityScoreThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
