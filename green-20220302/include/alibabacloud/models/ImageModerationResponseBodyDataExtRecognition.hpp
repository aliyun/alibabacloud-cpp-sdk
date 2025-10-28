// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTRECOGNITION_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTRECOGNITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtRecognition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtRecognition& obj) { 
      DARABONBA_PTR_TO_JSON(Classification, classification_);
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtRecognition& obj) { 
      DARABONBA_PTR_FROM_JSON(Classification, classification_);
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
    };
    ImageModerationResponseBodyDataExtRecognition() = default ;
    ImageModerationResponseBodyDataExtRecognition(const ImageModerationResponseBodyDataExtRecognition &) = default ;
    ImageModerationResponseBodyDataExtRecognition(ImageModerationResponseBodyDataExtRecognition &&) = default ;
    ImageModerationResponseBodyDataExtRecognition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtRecognition() = default ;
    ImageModerationResponseBodyDataExtRecognition& operator=(const ImageModerationResponseBodyDataExtRecognition &) = default ;
    ImageModerationResponseBodyDataExtRecognition& operator=(ImageModerationResponseBodyDataExtRecognition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classification_ == nullptr
        && return this->confidence_ == nullptr; };
    // classification Field Functions 
    bool hasClassification() const { return this->classification_ != nullptr;};
    void deleteClassification() { this->classification_ = nullptr;};
    inline string classification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
    inline ImageModerationResponseBodyDataExtRecognition& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline ImageModerationResponseBodyDataExtRecognition& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


  protected:
    // The category of image recognition.
    std::shared_ptr<string> classification_ = nullptr;
    // The score of the confidence level. Valid values: 0 to 100. The value is accurate to two decimal places. Some labels do not have scores of confidence levels.
    std::shared_ptr<float> confidence_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
