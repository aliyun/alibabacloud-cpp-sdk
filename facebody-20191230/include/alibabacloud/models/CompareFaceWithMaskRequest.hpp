// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREFACEWITHMASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPAREFACEWITHMASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class CompareFaceWithMaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareFaceWithMaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURLA, imageURLA_);
      DARABONBA_PTR_TO_JSON(ImageURLB, imageURLB_);
      DARABONBA_PTR_TO_JSON(QualityScoreThreshold, qualityScoreThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, CompareFaceWithMaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURLA, imageURLA_);
      DARABONBA_PTR_FROM_JSON(ImageURLB, imageURLB_);
      DARABONBA_PTR_FROM_JSON(QualityScoreThreshold, qualityScoreThreshold_);
    };
    CompareFaceWithMaskRequest() = default ;
    CompareFaceWithMaskRequest(const CompareFaceWithMaskRequest &) = default ;
    CompareFaceWithMaskRequest(CompareFaceWithMaskRequest &&) = default ;
    CompareFaceWithMaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareFaceWithMaskRequest() = default ;
    CompareFaceWithMaskRequest& operator=(const CompareFaceWithMaskRequest &) = default ;
    CompareFaceWithMaskRequest& operator=(CompareFaceWithMaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURLA_ == nullptr
        && return this->imageURLB_ == nullptr && return this->qualityScoreThreshold_ == nullptr; };
    // imageURLA Field Functions 
    bool hasImageURLA() const { return this->imageURLA_ != nullptr;};
    void deleteImageURLA() { this->imageURLA_ = nullptr;};
    inline string imageURLA() const { DARABONBA_PTR_GET_DEFAULT(imageURLA_, "") };
    inline CompareFaceWithMaskRequest& setImageURLA(string imageURLA) { DARABONBA_PTR_SET_VALUE(imageURLA_, imageURLA) };


    // imageURLB Field Functions 
    bool hasImageURLB() const { return this->imageURLB_ != nullptr;};
    void deleteImageURLB() { this->imageURLB_ = nullptr;};
    inline string imageURLB() const { DARABONBA_PTR_GET_DEFAULT(imageURLB_, "") };
    inline CompareFaceWithMaskRequest& setImageURLB(string imageURLB) { DARABONBA_PTR_SET_VALUE(imageURLB_, imageURLB) };


    // qualityScoreThreshold Field Functions 
    bool hasQualityScoreThreshold() const { return this->qualityScoreThreshold_ != nullptr;};
    void deleteQualityScoreThreshold() { this->qualityScoreThreshold_ = nullptr;};
    inline float qualityScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(qualityScoreThreshold_, 0.0) };
    inline CompareFaceWithMaskRequest& setQualityScoreThreshold(float qualityScoreThreshold) { DARABONBA_PTR_SET_VALUE(qualityScoreThreshold_, qualityScoreThreshold) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURLA_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageURLB_ = nullptr;
    std::shared_ptr<float> qualityScoreThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
