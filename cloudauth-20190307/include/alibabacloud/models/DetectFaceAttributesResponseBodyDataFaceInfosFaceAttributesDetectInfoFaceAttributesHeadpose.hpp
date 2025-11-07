// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESRESPONSEBODYDATAFACEINFOSFACEATTRIBUTESDETECTINFOFACEATTRIBUTESHEADPOSE_HPP_
#define ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESRESPONSEBODYDATAFACEINFOSFACEATTRIBUTESDETECTINFOFACEATTRIBUTESHEADPOSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose& obj) { 
      DARABONBA_PTR_TO_JSON(PitchAngle, pitchAngle_);
      DARABONBA_PTR_TO_JSON(RollAngle, rollAngle_);
      DARABONBA_PTR_TO_JSON(YawAngle, yawAngle_);
    };
    friend void from_json(const Darabonba::Json& j, DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose& obj) { 
      DARABONBA_PTR_FROM_JSON(PitchAngle, pitchAngle_);
      DARABONBA_PTR_FROM_JSON(RollAngle, rollAngle_);
      DARABONBA_PTR_FROM_JSON(YawAngle, yawAngle_);
    };
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose() = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose(const DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose &) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose(DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose &&) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose() = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose& operator=(const DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose &) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose& operator=(DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pitchAngle_ == nullptr
        && return this->rollAngle_ == nullptr && return this->yawAngle_ == nullptr; };
    // pitchAngle Field Functions 
    bool hasPitchAngle() const { return this->pitchAngle_ != nullptr;};
    void deletePitchAngle() { this->pitchAngle_ = nullptr;};
    inline float pitchAngle() const { DARABONBA_PTR_GET_DEFAULT(pitchAngle_, 0.0) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose& setPitchAngle(float pitchAngle) { DARABONBA_PTR_SET_VALUE(pitchAngle_, pitchAngle) };


    // rollAngle Field Functions 
    bool hasRollAngle() const { return this->rollAngle_ != nullptr;};
    void deleteRollAngle() { this->rollAngle_ = nullptr;};
    inline float rollAngle() const { DARABONBA_PTR_GET_DEFAULT(rollAngle_, 0.0) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose& setRollAngle(float rollAngle) { DARABONBA_PTR_SET_VALUE(rollAngle_, rollAngle) };


    // yawAngle Field Functions 
    bool hasYawAngle() const { return this->yawAngle_ != nullptr;};
    void deleteYawAngle() { this->yawAngle_ = nullptr;};
    inline float yawAngle() const { DARABONBA_PTR_GET_DEFAULT(yawAngle_, 0.0) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose& setYawAngle(float yawAngle) { DARABONBA_PTR_SET_VALUE(yawAngle_, yawAngle) };


  protected:
    // Pitch angle, in degrees.
    std::shared_ptr<float> pitchAngle_ = nullptr;
    // Roll angle, in degrees.
    std::shared_ptr<float> rollAngle_ = nullptr;
    // Yaw angle, in degrees.
    std::shared_ptr<float> yawAngle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
