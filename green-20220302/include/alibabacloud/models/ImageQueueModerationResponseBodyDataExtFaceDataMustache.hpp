// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTFACEDATAMUSTACHE_HPP_
#define ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTFACEDATAMUSTACHE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageQueueModerationResponseBodyDataExtFaceDataMustache : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageQueueModerationResponseBodyDataExtFaceDataMustache& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ImageQueueModerationResponseBodyDataExtFaceDataMustache& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ImageQueueModerationResponseBodyDataExtFaceDataMustache() = default ;
    ImageQueueModerationResponseBodyDataExtFaceDataMustache(const ImageQueueModerationResponseBodyDataExtFaceDataMustache &) = default ;
    ImageQueueModerationResponseBodyDataExtFaceDataMustache(ImageQueueModerationResponseBodyDataExtFaceDataMustache &&) = default ;
    ImageQueueModerationResponseBodyDataExtFaceDataMustache(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageQueueModerationResponseBodyDataExtFaceDataMustache() = default ;
    ImageQueueModerationResponseBodyDataExtFaceDataMustache& operator=(const ImageQueueModerationResponseBodyDataExtFaceDataMustache &) = default ;
    ImageQueueModerationResponseBodyDataExtFaceDataMustache& operator=(ImageQueueModerationResponseBodyDataExtFaceDataMustache &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confidence_ != nullptr
        && this->value_ != nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline ImageQueueModerationResponseBodyDataExtFaceDataMustache& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ImageQueueModerationResponseBodyDataExtFaceDataMustache& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<float> confidence_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
