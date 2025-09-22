// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTRECOGNITION_HPP_
#define ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTRECOGNITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageQueueModerationResponseBodyDataExtRecognition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageQueueModerationResponseBodyDataExtRecognition& obj) { 
      DARABONBA_PTR_TO_JSON(Classification, classification_);
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
    };
    friend void from_json(const Darabonba::Json& j, ImageQueueModerationResponseBodyDataExtRecognition& obj) { 
      DARABONBA_PTR_FROM_JSON(Classification, classification_);
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
    };
    ImageQueueModerationResponseBodyDataExtRecognition() = default ;
    ImageQueueModerationResponseBodyDataExtRecognition(const ImageQueueModerationResponseBodyDataExtRecognition &) = default ;
    ImageQueueModerationResponseBodyDataExtRecognition(ImageQueueModerationResponseBodyDataExtRecognition &&) = default ;
    ImageQueueModerationResponseBodyDataExtRecognition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageQueueModerationResponseBodyDataExtRecognition() = default ;
    ImageQueueModerationResponseBodyDataExtRecognition& operator=(const ImageQueueModerationResponseBodyDataExtRecognition &) = default ;
    ImageQueueModerationResponseBodyDataExtRecognition& operator=(ImageQueueModerationResponseBodyDataExtRecognition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->classification_ != nullptr
        && this->confidence_ != nullptr; };
    // classification Field Functions 
    bool hasClassification() const { return this->classification_ != nullptr;};
    void deleteClassification() { this->classification_ = nullptr;};
    inline string classification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
    inline ImageQueueModerationResponseBodyDataExtRecognition& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline ImageQueueModerationResponseBodyDataExtRecognition& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


  protected:
    std::shared_ptr<string> classification_ = nullptr;
    std::shared_ptr<float> confidence_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
