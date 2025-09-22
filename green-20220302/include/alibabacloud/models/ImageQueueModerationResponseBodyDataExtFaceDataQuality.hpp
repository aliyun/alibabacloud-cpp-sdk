// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTFACEDATAQUALITY_HPP_
#define ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTFACEDATAQUALITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageQueueModerationResponseBodyDataExtFaceDataQuality : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageQueueModerationResponseBodyDataExtFaceDataQuality& obj) { 
      DARABONBA_PTR_TO_JSON(Blur, blur_);
      DARABONBA_PTR_TO_JSON(Integrity, integrity_);
      DARABONBA_PTR_TO_JSON(Pitch, pitch_);
      DARABONBA_PTR_TO_JSON(Roll, roll_);
      DARABONBA_PTR_TO_JSON(Yaw, yaw_);
    };
    friend void from_json(const Darabonba::Json& j, ImageQueueModerationResponseBodyDataExtFaceDataQuality& obj) { 
      DARABONBA_PTR_FROM_JSON(Blur, blur_);
      DARABONBA_PTR_FROM_JSON(Integrity, integrity_);
      DARABONBA_PTR_FROM_JSON(Pitch, pitch_);
      DARABONBA_PTR_FROM_JSON(Roll, roll_);
      DARABONBA_PTR_FROM_JSON(Yaw, yaw_);
    };
    ImageQueueModerationResponseBodyDataExtFaceDataQuality() = default ;
    ImageQueueModerationResponseBodyDataExtFaceDataQuality(const ImageQueueModerationResponseBodyDataExtFaceDataQuality &) = default ;
    ImageQueueModerationResponseBodyDataExtFaceDataQuality(ImageQueueModerationResponseBodyDataExtFaceDataQuality &&) = default ;
    ImageQueueModerationResponseBodyDataExtFaceDataQuality(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageQueueModerationResponseBodyDataExtFaceDataQuality() = default ;
    ImageQueueModerationResponseBodyDataExtFaceDataQuality& operator=(const ImageQueueModerationResponseBodyDataExtFaceDataQuality &) = default ;
    ImageQueueModerationResponseBodyDataExtFaceDataQuality& operator=(ImageQueueModerationResponseBodyDataExtFaceDataQuality &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blur_ != nullptr
        && this->integrity_ != nullptr && this->pitch_ != nullptr && this->roll_ != nullptr && this->yaw_ != nullptr; };
    // blur Field Functions 
    bool hasBlur() const { return this->blur_ != nullptr;};
    void deleteBlur() { this->blur_ = nullptr;};
    inline float blur() const { DARABONBA_PTR_GET_DEFAULT(blur_, 0.0) };
    inline ImageQueueModerationResponseBodyDataExtFaceDataQuality& setBlur(float blur) { DARABONBA_PTR_SET_VALUE(blur_, blur) };


    // integrity Field Functions 
    bool hasIntegrity() const { return this->integrity_ != nullptr;};
    void deleteIntegrity() { this->integrity_ = nullptr;};
    inline float integrity() const { DARABONBA_PTR_GET_DEFAULT(integrity_, 0.0) };
    inline ImageQueueModerationResponseBodyDataExtFaceDataQuality& setIntegrity(float integrity) { DARABONBA_PTR_SET_VALUE(integrity_, integrity) };


    // pitch Field Functions 
    bool hasPitch() const { return this->pitch_ != nullptr;};
    void deletePitch() { this->pitch_ = nullptr;};
    inline float pitch() const { DARABONBA_PTR_GET_DEFAULT(pitch_, 0.0) };
    inline ImageQueueModerationResponseBodyDataExtFaceDataQuality& setPitch(float pitch) { DARABONBA_PTR_SET_VALUE(pitch_, pitch) };


    // roll Field Functions 
    bool hasRoll() const { return this->roll_ != nullptr;};
    void deleteRoll() { this->roll_ = nullptr;};
    inline float roll() const { DARABONBA_PTR_GET_DEFAULT(roll_, 0.0) };
    inline ImageQueueModerationResponseBodyDataExtFaceDataQuality& setRoll(float roll) { DARABONBA_PTR_SET_VALUE(roll_, roll) };


    // yaw Field Functions 
    bool hasYaw() const { return this->yaw_ != nullptr;};
    void deleteYaw() { this->yaw_ = nullptr;};
    inline float yaw() const { DARABONBA_PTR_GET_DEFAULT(yaw_, 0.0) };
    inline ImageQueueModerationResponseBodyDataExtFaceDataQuality& setYaw(float yaw) { DARABONBA_PTR_SET_VALUE(yaw_, yaw) };


  protected:
    std::shared_ptr<float> blur_ = nullptr;
    std::shared_ptr<float> integrity_ = nullptr;
    std::shared_ptr<float> pitch_ = nullptr;
    std::shared_ptr<float> roll_ = nullptr;
    std::shared_ptr<float> yaw_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
