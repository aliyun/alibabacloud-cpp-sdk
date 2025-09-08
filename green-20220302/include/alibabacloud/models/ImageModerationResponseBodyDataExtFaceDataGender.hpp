// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTFACEDATAGENDER_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTFACEDATAGENDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtFaceDataGender : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtFaceDataGender& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtFaceDataGender& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ImageModerationResponseBodyDataExtFaceDataGender() = default ;
    ImageModerationResponseBodyDataExtFaceDataGender(const ImageModerationResponseBodyDataExtFaceDataGender &) = default ;
    ImageModerationResponseBodyDataExtFaceDataGender(ImageModerationResponseBodyDataExtFaceDataGender &&) = default ;
    ImageModerationResponseBodyDataExtFaceDataGender(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtFaceDataGender() = default ;
    ImageModerationResponseBodyDataExtFaceDataGender& operator=(const ImageModerationResponseBodyDataExtFaceDataGender &) = default ;
    ImageModerationResponseBodyDataExtFaceDataGender& operator=(ImageModerationResponseBodyDataExtFaceDataGender &&) = default ;
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
    inline ImageModerationResponseBodyDataExtFaceDataGender& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ImageModerationResponseBodyDataExtFaceDataGender& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The confidence level of the gender recognition result. Valid values: 0 to 100. A higher value indicates a more credible result.
    std::shared_ptr<float> confidence_ = nullptr;
    // The gender recognition result. Valid values:
    // 
    // - Male
    // 
    // - FeMale
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
