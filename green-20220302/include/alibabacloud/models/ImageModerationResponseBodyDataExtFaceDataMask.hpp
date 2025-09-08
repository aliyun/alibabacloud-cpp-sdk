// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTFACEDATAMASK_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTFACEDATAMASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtFaceDataMask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtFaceDataMask& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtFaceDataMask& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ImageModerationResponseBodyDataExtFaceDataMask() = default ;
    ImageModerationResponseBodyDataExtFaceDataMask(const ImageModerationResponseBodyDataExtFaceDataMask &) = default ;
    ImageModerationResponseBodyDataExtFaceDataMask(ImageModerationResponseBodyDataExtFaceDataMask &&) = default ;
    ImageModerationResponseBodyDataExtFaceDataMask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtFaceDataMask() = default ;
    ImageModerationResponseBodyDataExtFaceDataMask& operator=(const ImageModerationResponseBodyDataExtFaceDataMask &) = default ;
    ImageModerationResponseBodyDataExtFaceDataMask& operator=(ImageModerationResponseBodyDataExtFaceDataMask &&) = default ;
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
    inline ImageModerationResponseBodyDataExtFaceDataMask& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ImageModerationResponseBodyDataExtFaceDataMask& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The confidence level of the result of wearing the mask. Valid values: 0 to 100. A higher value indicates a more credible result.
    std::shared_ptr<float> confidence_ = nullptr;
    // The recognition result of whether to wear a mask. Valid values:
    // 
    // - Wear a mask.
    // 
    //  - None: No mask.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
