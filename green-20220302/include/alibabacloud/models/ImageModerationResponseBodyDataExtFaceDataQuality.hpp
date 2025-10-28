// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTFACEDATAQUALITY_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTFACEDATAQUALITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtFaceDataQuality : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtFaceDataQuality& obj) { 
      DARABONBA_PTR_TO_JSON(Blur, blur_);
      DARABONBA_PTR_TO_JSON(Integrity, integrity_);
      DARABONBA_PTR_TO_JSON(Pitch, pitch_);
      DARABONBA_PTR_TO_JSON(Roll, roll_);
      DARABONBA_PTR_TO_JSON(Yaw, yaw_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtFaceDataQuality& obj) { 
      DARABONBA_PTR_FROM_JSON(Blur, blur_);
      DARABONBA_PTR_FROM_JSON(Integrity, integrity_);
      DARABONBA_PTR_FROM_JSON(Pitch, pitch_);
      DARABONBA_PTR_FROM_JSON(Roll, roll_);
      DARABONBA_PTR_FROM_JSON(Yaw, yaw_);
    };
    ImageModerationResponseBodyDataExtFaceDataQuality() = default ;
    ImageModerationResponseBodyDataExtFaceDataQuality(const ImageModerationResponseBodyDataExtFaceDataQuality &) = default ;
    ImageModerationResponseBodyDataExtFaceDataQuality(ImageModerationResponseBodyDataExtFaceDataQuality &&) = default ;
    ImageModerationResponseBodyDataExtFaceDataQuality(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtFaceDataQuality() = default ;
    ImageModerationResponseBodyDataExtFaceDataQuality& operator=(const ImageModerationResponseBodyDataExtFaceDataQuality &) = default ;
    ImageModerationResponseBodyDataExtFaceDataQuality& operator=(ImageModerationResponseBodyDataExtFaceDataQuality &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blur_ == nullptr
        && return this->integrity_ == nullptr && return this->pitch_ == nullptr && return this->roll_ == nullptr && return this->yaw_ == nullptr; };
    // blur Field Functions 
    bool hasBlur() const { return this->blur_ != nullptr;};
    void deleteBlur() { this->blur_ = nullptr;};
    inline float blur() const { DARABONBA_PTR_GET_DEFAULT(blur_, 0.0) };
    inline ImageModerationResponseBodyDataExtFaceDataQuality& setBlur(float blur) { DARABONBA_PTR_SET_VALUE(blur_, blur) };


    // integrity Field Functions 
    bool hasIntegrity() const { return this->integrity_ != nullptr;};
    void deleteIntegrity() { this->integrity_ = nullptr;};
    inline float integrity() const { DARABONBA_PTR_GET_DEFAULT(integrity_, 0.0) };
    inline ImageModerationResponseBodyDataExtFaceDataQuality& setIntegrity(float integrity) { DARABONBA_PTR_SET_VALUE(integrity_, integrity) };


    // pitch Field Functions 
    bool hasPitch() const { return this->pitch_ != nullptr;};
    void deletePitch() { this->pitch_ = nullptr;};
    inline float pitch() const { DARABONBA_PTR_GET_DEFAULT(pitch_, 0.0) };
    inline ImageModerationResponseBodyDataExtFaceDataQuality& setPitch(float pitch) { DARABONBA_PTR_SET_VALUE(pitch_, pitch) };


    // roll Field Functions 
    bool hasRoll() const { return this->roll_ != nullptr;};
    void deleteRoll() { this->roll_ = nullptr;};
    inline float roll() const { DARABONBA_PTR_GET_DEFAULT(roll_, 0.0) };
    inline ImageModerationResponseBodyDataExtFaceDataQuality& setRoll(float roll) { DARABONBA_PTR_SET_VALUE(roll_, roll) };


    // yaw Field Functions 
    bool hasYaw() const { return this->yaw_ != nullptr;};
    void deleteYaw() { this->yaw_ = nullptr;};
    inline float yaw() const { DARABONBA_PTR_GET_DEFAULT(yaw_, 0.0) };
    inline ImageModerationResponseBodyDataExtFaceDataQuality& setYaw(float yaw) { DARABONBA_PTR_SET_VALUE(yaw_, yaw) };


  protected:
    // The blur of the face image. Valid values: 0 to 100. The higher the score, the more fuzzy it is.
    // Recommended values: 0 to 25.
    std::shared_ptr<float> blur_ = nullptr;
    // The integrity of the human face. Recommended values:80 to 100.
    std::shared_ptr<float> integrity_ = nullptr;
    // The head-up or head-down angle of the face.
    // Recommended values:-30 to 30.
    std::shared_ptr<float> pitch_ = nullptr;
    // The plane rotation angle of the face.
    // Recommended values:-30 to 30.
    std::shared_ptr<float> roll_ = nullptr;
    // The left and right shaking angle of the human face.
    // Recommended values:-30 to 30.
    std::shared_ptr<float> yaw_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
