// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTFACEDATAHAT_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTFACEDATAHAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtFaceDataHat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtFaceDataHat& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtFaceDataHat& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ImageModerationResponseBodyDataExtFaceDataHat() = default ;
    ImageModerationResponseBodyDataExtFaceDataHat(const ImageModerationResponseBodyDataExtFaceDataHat &) = default ;
    ImageModerationResponseBodyDataExtFaceDataHat(ImageModerationResponseBodyDataExtFaceDataHat &&) = default ;
    ImageModerationResponseBodyDataExtFaceDataHat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtFaceDataHat() = default ;
    ImageModerationResponseBodyDataExtFaceDataHat& operator=(const ImageModerationResponseBodyDataExtFaceDataHat &) = default ;
    ImageModerationResponseBodyDataExtFaceDataHat& operator=(ImageModerationResponseBodyDataExtFaceDataHat &&) = default ;
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
    inline ImageModerationResponseBodyDataExtFaceDataHat& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ImageModerationResponseBodyDataExtFaceDataHat& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The confidence level of the result of wearing the hat. Valid values: 0 to 100. A higher value indicates a more credible result.
    std::shared_ptr<float> confidence_ = nullptr;
    // The recognition result of whether to wear the hat. Valid values:
    // 
    // - Wear: Wear a hat.
    // 
    // - None: No hat.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
