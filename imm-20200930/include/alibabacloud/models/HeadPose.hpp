// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HEADPOSE_HPP_
#define ALIBABACLOUD_MODELS_HEADPOSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class HeadPose : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HeadPose& obj) { 
      DARABONBA_PTR_TO_JSON(Pitch, pitch_);
      DARABONBA_PTR_TO_JSON(Roll, roll_);
      DARABONBA_PTR_TO_JSON(Yaw, yaw_);
    };
    friend void from_json(const Darabonba::Json& j, HeadPose& obj) { 
      DARABONBA_PTR_FROM_JSON(Pitch, pitch_);
      DARABONBA_PTR_FROM_JSON(Roll, roll_);
      DARABONBA_PTR_FROM_JSON(Yaw, yaw_);
    };
    HeadPose() = default ;
    HeadPose(const HeadPose &) = default ;
    HeadPose(HeadPose &&) = default ;
    HeadPose(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HeadPose() = default ;
    HeadPose& operator=(const HeadPose &) = default ;
    HeadPose& operator=(HeadPose &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pitch_ == nullptr
        && return this->roll_ == nullptr && return this->yaw_ == nullptr; };
    // pitch Field Functions 
    bool hasPitch() const { return this->pitch_ != nullptr;};
    void deletePitch() { this->pitch_ = nullptr;};
    inline float pitch() const { DARABONBA_PTR_GET_DEFAULT(pitch_, 0.0) };
    inline HeadPose& setPitch(float pitch) { DARABONBA_PTR_SET_VALUE(pitch_, pitch) };


    // roll Field Functions 
    bool hasRoll() const { return this->roll_ != nullptr;};
    void deleteRoll() { this->roll_ = nullptr;};
    inline float roll() const { DARABONBA_PTR_GET_DEFAULT(roll_, 0.0) };
    inline HeadPose& setRoll(float roll) { DARABONBA_PTR_SET_VALUE(roll_, roll) };


    // yaw Field Functions 
    bool hasYaw() const { return this->yaw_ != nullptr;};
    void deleteYaw() { this->yaw_ = nullptr;};
    inline float yaw() const { DARABONBA_PTR_GET_DEFAULT(yaw_, 0.0) };
    inline HeadPose& setYaw(float yaw) { DARABONBA_PTR_SET_VALUE(yaw_, yaw) };


  protected:
    std::shared_ptr<float> pitch_ = nullptr;
    std::shared_ptr<float> roll_ = nullptr;
    std::shared_ptr<float> yaw_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
