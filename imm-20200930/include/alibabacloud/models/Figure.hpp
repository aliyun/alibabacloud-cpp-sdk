// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIGURE_HPP_
#define ALIBABACLOUD_MODELS_FIGURE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Boundary.hpp>
#include <alibabacloud/models/HeadPose.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Figure : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Figure& obj) { 
      DARABONBA_PTR_TO_JSON(Age, age_);
      DARABONBA_PTR_TO_JSON(AgeSD, ageSD_);
      DARABONBA_PTR_TO_JSON(Attractive, attractive_);
      DARABONBA_PTR_TO_JSON(Beard, beard_);
      DARABONBA_PTR_TO_JSON(BeardConfidence, beardConfidence_);
      DARABONBA_PTR_TO_JSON(Boundary, boundary_);
      DARABONBA_PTR_TO_JSON(Emotion, emotion_);
      DARABONBA_PTR_TO_JSON(EmotionConfidence, emotionConfidence_);
      DARABONBA_PTR_TO_JSON(FaceQuality, faceQuality_);
      DARABONBA_PTR_TO_JSON(FigureClusterConfidence, figureClusterConfidence_);
      DARABONBA_PTR_TO_JSON(FigureClusterId, figureClusterId_);
      DARABONBA_PTR_TO_JSON(FigureConfidence, figureConfidence_);
      DARABONBA_PTR_TO_JSON(FigureId, figureId_);
      DARABONBA_PTR_TO_JSON(FigureType, figureType_);
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(GenderConfidence, genderConfidence_);
      DARABONBA_PTR_TO_JSON(Glasses, glasses_);
      DARABONBA_PTR_TO_JSON(GlassesConfidence, glassesConfidence_);
      DARABONBA_PTR_TO_JSON(Hat, hat_);
      DARABONBA_PTR_TO_JSON(HatConfidence, hatConfidence_);
      DARABONBA_PTR_TO_JSON(HeadPose, headPose_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(MaskConfidence, maskConfidence_);
      DARABONBA_PTR_TO_JSON(Mouth, mouth_);
      DARABONBA_PTR_TO_JSON(MouthConfidence, mouthConfidence_);
      DARABONBA_PTR_TO_JSON(Sharpness, sharpness_);
    };
    friend void from_json(const Darabonba::Json& j, Figure& obj) { 
      DARABONBA_PTR_FROM_JSON(Age, age_);
      DARABONBA_PTR_FROM_JSON(AgeSD, ageSD_);
      DARABONBA_PTR_FROM_JSON(Attractive, attractive_);
      DARABONBA_PTR_FROM_JSON(Beard, beard_);
      DARABONBA_PTR_FROM_JSON(BeardConfidence, beardConfidence_);
      DARABONBA_PTR_FROM_JSON(Boundary, boundary_);
      DARABONBA_PTR_FROM_JSON(Emotion, emotion_);
      DARABONBA_PTR_FROM_JSON(EmotionConfidence, emotionConfidence_);
      DARABONBA_PTR_FROM_JSON(FaceQuality, faceQuality_);
      DARABONBA_PTR_FROM_JSON(FigureClusterConfidence, figureClusterConfidence_);
      DARABONBA_PTR_FROM_JSON(FigureClusterId, figureClusterId_);
      DARABONBA_PTR_FROM_JSON(FigureConfidence, figureConfidence_);
      DARABONBA_PTR_FROM_JSON(FigureId, figureId_);
      DARABONBA_PTR_FROM_JSON(FigureType, figureType_);
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(GenderConfidence, genderConfidence_);
      DARABONBA_PTR_FROM_JSON(Glasses, glasses_);
      DARABONBA_PTR_FROM_JSON(GlassesConfidence, glassesConfidence_);
      DARABONBA_PTR_FROM_JSON(Hat, hat_);
      DARABONBA_PTR_FROM_JSON(HatConfidence, hatConfidence_);
      DARABONBA_PTR_FROM_JSON(HeadPose, headPose_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(MaskConfidence, maskConfidence_);
      DARABONBA_PTR_FROM_JSON(Mouth, mouth_);
      DARABONBA_PTR_FROM_JSON(MouthConfidence, mouthConfidence_);
      DARABONBA_PTR_FROM_JSON(Sharpness, sharpness_);
    };
    Figure() = default ;
    Figure(const Figure &) = default ;
    Figure(Figure &&) = default ;
    Figure(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Figure() = default ;
    Figure& operator=(const Figure &) = default ;
    Figure& operator=(Figure &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->age_ == nullptr
        && return this->ageSD_ == nullptr && return this->attractive_ == nullptr && return this->beard_ == nullptr && return this->beardConfidence_ == nullptr && return this->boundary_ == nullptr
        && return this->emotion_ == nullptr && return this->emotionConfidence_ == nullptr && return this->faceQuality_ == nullptr && return this->figureClusterConfidence_ == nullptr && return this->figureClusterId_ == nullptr
        && return this->figureConfidence_ == nullptr && return this->figureId_ == nullptr && return this->figureType_ == nullptr && return this->gender_ == nullptr && return this->genderConfidence_ == nullptr
        && return this->glasses_ == nullptr && return this->glassesConfidence_ == nullptr && return this->hat_ == nullptr && return this->hatConfidence_ == nullptr && return this->headPose_ == nullptr
        && return this->mask_ == nullptr && return this->maskConfidence_ == nullptr && return this->mouth_ == nullptr && return this->mouthConfidence_ == nullptr && return this->sharpness_ == nullptr; };
    // age Field Functions 
    bool hasAge() const { return this->age_ != nullptr;};
    void deleteAge() { this->age_ = nullptr;};
    inline int64_t age() const { DARABONBA_PTR_GET_DEFAULT(age_, 0L) };
    inline Figure& setAge(int64_t age) { DARABONBA_PTR_SET_VALUE(age_, age) };


    // ageSD Field Functions 
    bool hasAgeSD() const { return this->ageSD_ != nullptr;};
    void deleteAgeSD() { this->ageSD_ = nullptr;};
    inline float ageSD() const { DARABONBA_PTR_GET_DEFAULT(ageSD_, 0.0) };
    inline Figure& setAgeSD(float ageSD) { DARABONBA_PTR_SET_VALUE(ageSD_, ageSD) };


    // attractive Field Functions 
    bool hasAttractive() const { return this->attractive_ != nullptr;};
    void deleteAttractive() { this->attractive_ = nullptr;};
    inline float attractive() const { DARABONBA_PTR_GET_DEFAULT(attractive_, 0.0) };
    inline Figure& setAttractive(float attractive) { DARABONBA_PTR_SET_VALUE(attractive_, attractive) };


    // beard Field Functions 
    bool hasBeard() const { return this->beard_ != nullptr;};
    void deleteBeard() { this->beard_ = nullptr;};
    inline string beard() const { DARABONBA_PTR_GET_DEFAULT(beard_, "") };
    inline Figure& setBeard(string beard) { DARABONBA_PTR_SET_VALUE(beard_, beard) };


    // beardConfidence Field Functions 
    bool hasBeardConfidence() const { return this->beardConfidence_ != nullptr;};
    void deleteBeardConfidence() { this->beardConfidence_ = nullptr;};
    inline float beardConfidence() const { DARABONBA_PTR_GET_DEFAULT(beardConfidence_, 0.0) };
    inline Figure& setBeardConfidence(float beardConfidence) { DARABONBA_PTR_SET_VALUE(beardConfidence_, beardConfidence) };


    // boundary Field Functions 
    bool hasBoundary() const { return this->boundary_ != nullptr;};
    void deleteBoundary() { this->boundary_ = nullptr;};
    inline const Boundary & boundary() const { DARABONBA_PTR_GET_CONST(boundary_, Boundary) };
    inline Boundary boundary() { DARABONBA_PTR_GET(boundary_, Boundary) };
    inline Figure& setBoundary(const Boundary & boundary) { DARABONBA_PTR_SET_VALUE(boundary_, boundary) };
    inline Figure& setBoundary(Boundary && boundary) { DARABONBA_PTR_SET_RVALUE(boundary_, boundary) };


    // emotion Field Functions 
    bool hasEmotion() const { return this->emotion_ != nullptr;};
    void deleteEmotion() { this->emotion_ = nullptr;};
    inline string emotion() const { DARABONBA_PTR_GET_DEFAULT(emotion_, "") };
    inline Figure& setEmotion(string emotion) { DARABONBA_PTR_SET_VALUE(emotion_, emotion) };


    // emotionConfidence Field Functions 
    bool hasEmotionConfidence() const { return this->emotionConfidence_ != nullptr;};
    void deleteEmotionConfidence() { this->emotionConfidence_ = nullptr;};
    inline float emotionConfidence() const { DARABONBA_PTR_GET_DEFAULT(emotionConfidence_, 0.0) };
    inline Figure& setEmotionConfidence(float emotionConfidence) { DARABONBA_PTR_SET_VALUE(emotionConfidence_, emotionConfidence) };


    // faceQuality Field Functions 
    bool hasFaceQuality() const { return this->faceQuality_ != nullptr;};
    void deleteFaceQuality() { this->faceQuality_ = nullptr;};
    inline float faceQuality() const { DARABONBA_PTR_GET_DEFAULT(faceQuality_, 0.0) };
    inline Figure& setFaceQuality(float faceQuality) { DARABONBA_PTR_SET_VALUE(faceQuality_, faceQuality) };


    // figureClusterConfidence Field Functions 
    bool hasFigureClusterConfidence() const { return this->figureClusterConfidence_ != nullptr;};
    void deleteFigureClusterConfidence() { this->figureClusterConfidence_ = nullptr;};
    inline float figureClusterConfidence() const { DARABONBA_PTR_GET_DEFAULT(figureClusterConfidence_, 0.0) };
    inline Figure& setFigureClusterConfidence(float figureClusterConfidence) { DARABONBA_PTR_SET_VALUE(figureClusterConfidence_, figureClusterConfidence) };


    // figureClusterId Field Functions 
    bool hasFigureClusterId() const { return this->figureClusterId_ != nullptr;};
    void deleteFigureClusterId() { this->figureClusterId_ = nullptr;};
    inline string figureClusterId() const { DARABONBA_PTR_GET_DEFAULT(figureClusterId_, "") };
    inline Figure& setFigureClusterId(string figureClusterId) { DARABONBA_PTR_SET_VALUE(figureClusterId_, figureClusterId) };


    // figureConfidence Field Functions 
    bool hasFigureConfidence() const { return this->figureConfidence_ != nullptr;};
    void deleteFigureConfidence() { this->figureConfidence_ = nullptr;};
    inline float figureConfidence() const { DARABONBA_PTR_GET_DEFAULT(figureConfidence_, 0.0) };
    inline Figure& setFigureConfidence(float figureConfidence) { DARABONBA_PTR_SET_VALUE(figureConfidence_, figureConfidence) };


    // figureId Field Functions 
    bool hasFigureId() const { return this->figureId_ != nullptr;};
    void deleteFigureId() { this->figureId_ = nullptr;};
    inline string figureId() const { DARABONBA_PTR_GET_DEFAULT(figureId_, "") };
    inline Figure& setFigureId(string figureId) { DARABONBA_PTR_SET_VALUE(figureId_, figureId) };


    // figureType Field Functions 
    bool hasFigureType() const { return this->figureType_ != nullptr;};
    void deleteFigureType() { this->figureType_ = nullptr;};
    inline string figureType() const { DARABONBA_PTR_GET_DEFAULT(figureType_, "") };
    inline Figure& setFigureType(string figureType) { DARABONBA_PTR_SET_VALUE(figureType_, figureType) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline Figure& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // genderConfidence Field Functions 
    bool hasGenderConfidence() const { return this->genderConfidence_ != nullptr;};
    void deleteGenderConfidence() { this->genderConfidence_ = nullptr;};
    inline float genderConfidence() const { DARABONBA_PTR_GET_DEFAULT(genderConfidence_, 0.0) };
    inline Figure& setGenderConfidence(float genderConfidence) { DARABONBA_PTR_SET_VALUE(genderConfidence_, genderConfidence) };


    // glasses Field Functions 
    bool hasGlasses() const { return this->glasses_ != nullptr;};
    void deleteGlasses() { this->glasses_ = nullptr;};
    inline string glasses() const { DARABONBA_PTR_GET_DEFAULT(glasses_, "") };
    inline Figure& setGlasses(string glasses) { DARABONBA_PTR_SET_VALUE(glasses_, glasses) };


    // glassesConfidence Field Functions 
    bool hasGlassesConfidence() const { return this->glassesConfidence_ != nullptr;};
    void deleteGlassesConfidence() { this->glassesConfidence_ = nullptr;};
    inline float glassesConfidence() const { DARABONBA_PTR_GET_DEFAULT(glassesConfidence_, 0.0) };
    inline Figure& setGlassesConfidence(float glassesConfidence) { DARABONBA_PTR_SET_VALUE(glassesConfidence_, glassesConfidence) };


    // hat Field Functions 
    bool hasHat() const { return this->hat_ != nullptr;};
    void deleteHat() { this->hat_ = nullptr;};
    inline string hat() const { DARABONBA_PTR_GET_DEFAULT(hat_, "") };
    inline Figure& setHat(string hat) { DARABONBA_PTR_SET_VALUE(hat_, hat) };


    // hatConfidence Field Functions 
    bool hasHatConfidence() const { return this->hatConfidence_ != nullptr;};
    void deleteHatConfidence() { this->hatConfidence_ = nullptr;};
    inline float hatConfidence() const { DARABONBA_PTR_GET_DEFAULT(hatConfidence_, 0.0) };
    inline Figure& setHatConfidence(float hatConfidence) { DARABONBA_PTR_SET_VALUE(hatConfidence_, hatConfidence) };


    // headPose Field Functions 
    bool hasHeadPose() const { return this->headPose_ != nullptr;};
    void deleteHeadPose() { this->headPose_ = nullptr;};
    inline const HeadPose & headPose() const { DARABONBA_PTR_GET_CONST(headPose_, HeadPose) };
    inline HeadPose headPose() { DARABONBA_PTR_GET(headPose_, HeadPose) };
    inline Figure& setHeadPose(const HeadPose & headPose) { DARABONBA_PTR_SET_VALUE(headPose_, headPose) };
    inline Figure& setHeadPose(HeadPose && headPose) { DARABONBA_PTR_SET_RVALUE(headPose_, headPose) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string mask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline Figure& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // maskConfidence Field Functions 
    bool hasMaskConfidence() const { return this->maskConfidence_ != nullptr;};
    void deleteMaskConfidence() { this->maskConfidence_ = nullptr;};
    inline float maskConfidence() const { DARABONBA_PTR_GET_DEFAULT(maskConfidence_, 0.0) };
    inline Figure& setMaskConfidence(float maskConfidence) { DARABONBA_PTR_SET_VALUE(maskConfidence_, maskConfidence) };


    // mouth Field Functions 
    bool hasMouth() const { return this->mouth_ != nullptr;};
    void deleteMouth() { this->mouth_ = nullptr;};
    inline string mouth() const { DARABONBA_PTR_GET_DEFAULT(mouth_, "") };
    inline Figure& setMouth(string mouth) { DARABONBA_PTR_SET_VALUE(mouth_, mouth) };


    // mouthConfidence Field Functions 
    bool hasMouthConfidence() const { return this->mouthConfidence_ != nullptr;};
    void deleteMouthConfidence() { this->mouthConfidence_ = nullptr;};
    inline float mouthConfidence() const { DARABONBA_PTR_GET_DEFAULT(mouthConfidence_, 0.0) };
    inline Figure& setMouthConfidence(float mouthConfidence) { DARABONBA_PTR_SET_VALUE(mouthConfidence_, mouthConfidence) };


    // sharpness Field Functions 
    bool hasSharpness() const { return this->sharpness_ != nullptr;};
    void deleteSharpness() { this->sharpness_ = nullptr;};
    inline float sharpness() const { DARABONBA_PTR_GET_DEFAULT(sharpness_, 0.0) };
    inline Figure& setSharpness(float sharpness) { DARABONBA_PTR_SET_VALUE(sharpness_, sharpness) };


  protected:
    std::shared_ptr<int64_t> age_ = nullptr;
    std::shared_ptr<float> ageSD_ = nullptr;
    std::shared_ptr<float> attractive_ = nullptr;
    std::shared_ptr<string> beard_ = nullptr;
    std::shared_ptr<float> beardConfidence_ = nullptr;
    std::shared_ptr<Boundary> boundary_ = nullptr;
    std::shared_ptr<string> emotion_ = nullptr;
    std::shared_ptr<float> emotionConfidence_ = nullptr;
    std::shared_ptr<float> faceQuality_ = nullptr;
    std::shared_ptr<float> figureClusterConfidence_ = nullptr;
    std::shared_ptr<string> figureClusterId_ = nullptr;
    std::shared_ptr<float> figureConfidence_ = nullptr;
    std::shared_ptr<string> figureId_ = nullptr;
    std::shared_ptr<string> figureType_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<float> genderConfidence_ = nullptr;
    std::shared_ptr<string> glasses_ = nullptr;
    std::shared_ptr<float> glassesConfidence_ = nullptr;
    std::shared_ptr<string> hat_ = nullptr;
    std::shared_ptr<float> hatConfidence_ = nullptr;
    std::shared_ptr<HeadPose> headPose_ = nullptr;
    std::shared_ptr<string> mask_ = nullptr;
    std::shared_ptr<float> maskConfidence_ = nullptr;
    std::shared_ptr<string> mouth_ = nullptr;
    std::shared_ptr<float> mouthConfidence_ = nullptr;
    std::shared_ptr<float> sharpness_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
