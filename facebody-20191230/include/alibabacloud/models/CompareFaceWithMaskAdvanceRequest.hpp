// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREFACEWITHMASKADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPAREFACEWITHMASKADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class CompareFaceWithMaskAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareFaceWithMaskAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURLA, imageURLAObject_);
      DARABONBA_TO_JSON(ImageURLB, imageURLBObject_);
      DARABONBA_PTR_TO_JSON(QualityScoreThreshold, qualityScoreThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, CompareFaceWithMaskAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURLA, imageURLAObject_);
      DARABONBA_FROM_JSON(ImageURLB, imageURLBObject_);
      DARABONBA_PTR_FROM_JSON(QualityScoreThreshold, qualityScoreThreshold_);
    };
    CompareFaceWithMaskAdvanceRequest() = default ;
    CompareFaceWithMaskAdvanceRequest(const CompareFaceWithMaskAdvanceRequest &) = default ;
    CompareFaceWithMaskAdvanceRequest(CompareFaceWithMaskAdvanceRequest &&) = default ;
    CompareFaceWithMaskAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareFaceWithMaskAdvanceRequest() = default ;
    CompareFaceWithMaskAdvanceRequest& operator=(const CompareFaceWithMaskAdvanceRequest &) = default ;
    CompareFaceWithMaskAdvanceRequest& operator=(CompareFaceWithMaskAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURLAObject_ == nullptr
        && return this->imageURLBObject_ == nullptr && return this->qualityScoreThreshold_ == nullptr; };
    // imageURLAObject Field Functions 
    bool hasImageURLAObject() const { return this->imageURLAObject_ != nullptr;};
    void deleteImageURLAObject() { this->imageURLAObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLAObject() const { DARABONBA_GET(imageURLAObject_) };
    inline CompareFaceWithMaskAdvanceRequest& setImageURLAObject(shared_ptr<Darabonba::IStream> imageURLAObject) { DARABONBA_SET_VALUE(imageURLAObject_, imageURLAObject) };


    // imageURLBObject Field Functions 
    bool hasImageURLBObject() const { return this->imageURLBObject_ != nullptr;};
    void deleteImageURLBObject() { this->imageURLBObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLBObject() const { DARABONBA_GET(imageURLBObject_) };
    inline CompareFaceWithMaskAdvanceRequest& setImageURLBObject(shared_ptr<Darabonba::IStream> imageURLBObject) { DARABONBA_SET_VALUE(imageURLBObject_, imageURLBObject) };


    // qualityScoreThreshold Field Functions 
    bool hasQualityScoreThreshold() const { return this->qualityScoreThreshold_ != nullptr;};
    void deleteQualityScoreThreshold() { this->qualityScoreThreshold_ = nullptr;};
    inline float qualityScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(qualityScoreThreshold_, 0.0) };
    inline CompareFaceWithMaskAdvanceRequest& setQualityScoreThreshold(float qualityScoreThreshold) { DARABONBA_PTR_SET_VALUE(qualityScoreThreshold_, qualityScoreThreshold) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLAObject_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLBObject_ = nullptr;
    std::shared_ptr<float> qualityScoreThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
