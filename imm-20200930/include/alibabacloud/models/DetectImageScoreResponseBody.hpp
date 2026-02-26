// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTIMAGESCORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTIMAGESCORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetectImageScoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectImageScoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageScore, imageScore_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectImageScoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageScore, imageScore_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetectImageScoreResponseBody() = default ;
    DetectImageScoreResponseBody(const DetectImageScoreResponseBody &) = default ;
    DetectImageScoreResponseBody(DetectImageScoreResponseBody &&) = default ;
    DetectImageScoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectImageScoreResponseBody() = default ;
    DetectImageScoreResponseBody& operator=(const DetectImageScoreResponseBody &) = default ;
    DetectImageScoreResponseBody& operator=(DetectImageScoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageScore : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageScore& obj) { 
        DARABONBA_PTR_TO_JSON(OverallQualityScore, overallQualityScore_);
      };
      friend void from_json(const Darabonba::Json& j, ImageScore& obj) { 
        DARABONBA_PTR_FROM_JSON(OverallQualityScore, overallQualityScore_);
      };
      ImageScore() = default ;
      ImageScore(const ImageScore &) = default ;
      ImageScore(ImageScore &&) = default ;
      ImageScore(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageScore() = default ;
      ImageScore& operator=(const ImageScore &) = default ;
      ImageScore& operator=(ImageScore &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->overallQualityScore_ == nullptr; };
      // overallQualityScore Field Functions 
      bool hasOverallQualityScore() const { return this->overallQualityScore_ != nullptr;};
      void deleteOverallQualityScore() { this->overallQualityScore_ = nullptr;};
      inline float getOverallQualityScore() const { DARABONBA_PTR_GET_DEFAULT(overallQualityScore_, 0.0) };
      inline ImageScore& setOverallQualityScore(float overallQualityScore) { DARABONBA_PTR_SET_VALUE(overallQualityScore_, overallQualityScore) };


    protected:
      // The overall quality score.
      shared_ptr<float> overallQualityScore_ {};
    };

    virtual bool empty() const override { return this->imageScore_ == nullptr
        && this->requestId_ == nullptr; };
    // imageScore Field Functions 
    bool hasImageScore() const { return this->imageScore_ != nullptr;};
    void deleteImageScore() { this->imageScore_ = nullptr;};
    inline const DetectImageScoreResponseBody::ImageScore & getImageScore() const { DARABONBA_PTR_GET_CONST(imageScore_, DetectImageScoreResponseBody::ImageScore) };
    inline DetectImageScoreResponseBody::ImageScore getImageScore() { DARABONBA_PTR_GET(imageScore_, DetectImageScoreResponseBody::ImageScore) };
    inline DetectImageScoreResponseBody& setImageScore(const DetectImageScoreResponseBody::ImageScore & imageScore) { DARABONBA_PTR_SET_VALUE(imageScore_, imageScore) };
    inline DetectImageScoreResponseBody& setImageScore(DetectImageScoreResponseBody::ImageScore && imageScore) { DARABONBA_PTR_SET_RVALUE(imageScore_, imageScore) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectImageScoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The quality score of the image.
    shared_ptr<DetectImageScoreResponseBody::ImageScore> imageScore_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
