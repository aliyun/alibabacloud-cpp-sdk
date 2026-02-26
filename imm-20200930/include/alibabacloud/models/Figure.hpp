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
        && this->ageSD_ == nullptr && this->attractive_ == nullptr && this->beard_ == nullptr && this->beardConfidence_ == nullptr && this->boundary_ == nullptr
        && this->emotion_ == nullptr && this->emotionConfidence_ == nullptr && this->faceQuality_ == nullptr && this->figureClusterConfidence_ == nullptr && this->figureClusterId_ == nullptr
        && this->figureConfidence_ == nullptr && this->figureId_ == nullptr && this->figureType_ == nullptr && this->gender_ == nullptr && this->genderConfidence_ == nullptr
        && this->glasses_ == nullptr && this->glassesConfidence_ == nullptr && this->hat_ == nullptr && this->hatConfidence_ == nullptr && this->headPose_ == nullptr
        && this->mask_ == nullptr && this->maskConfidence_ == nullptr && this->mouth_ == nullptr && this->mouthConfidence_ == nullptr && this->sharpness_ == nullptr; };
    // age Field Functions 
    bool hasAge() const { return this->age_ != nullptr;};
    void deleteAge() { this->age_ = nullptr;};
    inline int64_t getAge() const { DARABONBA_PTR_GET_DEFAULT(age_, 0L) };
    inline Figure& setAge(int64_t age) { DARABONBA_PTR_SET_VALUE(age_, age) };


    // ageSD Field Functions 
    bool hasAgeSD() const { return this->ageSD_ != nullptr;};
    void deleteAgeSD() { this->ageSD_ = nullptr;};
    inline float getAgeSD() const { DARABONBA_PTR_GET_DEFAULT(ageSD_, 0.0) };
    inline Figure& setAgeSD(float ageSD) { DARABONBA_PTR_SET_VALUE(ageSD_, ageSD) };


    // attractive Field Functions 
    bool hasAttractive() const { return this->attractive_ != nullptr;};
    void deleteAttractive() { this->attractive_ = nullptr;};
    inline float getAttractive() const { DARABONBA_PTR_GET_DEFAULT(attractive_, 0.0) };
    inline Figure& setAttractive(float attractive) { DARABONBA_PTR_SET_VALUE(attractive_, attractive) };


    // beard Field Functions 
    bool hasBeard() const { return this->beard_ != nullptr;};
    void deleteBeard() { this->beard_ = nullptr;};
    inline string getBeard() const { DARABONBA_PTR_GET_DEFAULT(beard_, "") };
    inline Figure& setBeard(string beard) { DARABONBA_PTR_SET_VALUE(beard_, beard) };


    // beardConfidence Field Functions 
    bool hasBeardConfidence() const { return this->beardConfidence_ != nullptr;};
    void deleteBeardConfidence() { this->beardConfidence_ = nullptr;};
    inline float getBeardConfidence() const { DARABONBA_PTR_GET_DEFAULT(beardConfidence_, 0.0) };
    inline Figure& setBeardConfidence(float beardConfidence) { DARABONBA_PTR_SET_VALUE(beardConfidence_, beardConfidence) };


    // boundary Field Functions 
    bool hasBoundary() const { return this->boundary_ != nullptr;};
    void deleteBoundary() { this->boundary_ = nullptr;};
    inline const Boundary & getBoundary() const { DARABONBA_PTR_GET_CONST(boundary_, Boundary) };
    inline Boundary getBoundary() { DARABONBA_PTR_GET(boundary_, Boundary) };
    inline Figure& setBoundary(const Boundary & boundary) { DARABONBA_PTR_SET_VALUE(boundary_, boundary) };
    inline Figure& setBoundary(Boundary && boundary) { DARABONBA_PTR_SET_RVALUE(boundary_, boundary) };


    // emotion Field Functions 
    bool hasEmotion() const { return this->emotion_ != nullptr;};
    void deleteEmotion() { this->emotion_ = nullptr;};
    inline string getEmotion() const { DARABONBA_PTR_GET_DEFAULT(emotion_, "") };
    inline Figure& setEmotion(string emotion) { DARABONBA_PTR_SET_VALUE(emotion_, emotion) };


    // emotionConfidence Field Functions 
    bool hasEmotionConfidence() const { return this->emotionConfidence_ != nullptr;};
    void deleteEmotionConfidence() { this->emotionConfidence_ = nullptr;};
    inline float getEmotionConfidence() const { DARABONBA_PTR_GET_DEFAULT(emotionConfidence_, 0.0) };
    inline Figure& setEmotionConfidence(float emotionConfidence) { DARABONBA_PTR_SET_VALUE(emotionConfidence_, emotionConfidence) };


    // faceQuality Field Functions 
    bool hasFaceQuality() const { return this->faceQuality_ != nullptr;};
    void deleteFaceQuality() { this->faceQuality_ = nullptr;};
    inline float getFaceQuality() const { DARABONBA_PTR_GET_DEFAULT(faceQuality_, 0.0) };
    inline Figure& setFaceQuality(float faceQuality) { DARABONBA_PTR_SET_VALUE(faceQuality_, faceQuality) };


    // figureClusterConfidence Field Functions 
    bool hasFigureClusterConfidence() const { return this->figureClusterConfidence_ != nullptr;};
    void deleteFigureClusterConfidence() { this->figureClusterConfidence_ = nullptr;};
    inline float getFigureClusterConfidence() const { DARABONBA_PTR_GET_DEFAULT(figureClusterConfidence_, 0.0) };
    inline Figure& setFigureClusterConfidence(float figureClusterConfidence) { DARABONBA_PTR_SET_VALUE(figureClusterConfidence_, figureClusterConfidence) };


    // figureClusterId Field Functions 
    bool hasFigureClusterId() const { return this->figureClusterId_ != nullptr;};
    void deleteFigureClusterId() { this->figureClusterId_ = nullptr;};
    inline string getFigureClusterId() const { DARABONBA_PTR_GET_DEFAULT(figureClusterId_, "") };
    inline Figure& setFigureClusterId(string figureClusterId) { DARABONBA_PTR_SET_VALUE(figureClusterId_, figureClusterId) };


    // figureConfidence Field Functions 
    bool hasFigureConfidence() const { return this->figureConfidence_ != nullptr;};
    void deleteFigureConfidence() { this->figureConfidence_ = nullptr;};
    inline float getFigureConfidence() const { DARABONBA_PTR_GET_DEFAULT(figureConfidence_, 0.0) };
    inline Figure& setFigureConfidence(float figureConfidence) { DARABONBA_PTR_SET_VALUE(figureConfidence_, figureConfidence) };


    // figureId Field Functions 
    bool hasFigureId() const { return this->figureId_ != nullptr;};
    void deleteFigureId() { this->figureId_ = nullptr;};
    inline string getFigureId() const { DARABONBA_PTR_GET_DEFAULT(figureId_, "") };
    inline Figure& setFigureId(string figureId) { DARABONBA_PTR_SET_VALUE(figureId_, figureId) };


    // figureType Field Functions 
    bool hasFigureType() const { return this->figureType_ != nullptr;};
    void deleteFigureType() { this->figureType_ = nullptr;};
    inline string getFigureType() const { DARABONBA_PTR_GET_DEFAULT(figureType_, "") };
    inline Figure& setFigureType(string figureType) { DARABONBA_PTR_SET_VALUE(figureType_, figureType) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline Figure& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // genderConfidence Field Functions 
    bool hasGenderConfidence() const { return this->genderConfidence_ != nullptr;};
    void deleteGenderConfidence() { this->genderConfidence_ = nullptr;};
    inline float getGenderConfidence() const { DARABONBA_PTR_GET_DEFAULT(genderConfidence_, 0.0) };
    inline Figure& setGenderConfidence(float genderConfidence) { DARABONBA_PTR_SET_VALUE(genderConfidence_, genderConfidence) };


    // glasses Field Functions 
    bool hasGlasses() const { return this->glasses_ != nullptr;};
    void deleteGlasses() { this->glasses_ = nullptr;};
    inline string getGlasses() const { DARABONBA_PTR_GET_DEFAULT(glasses_, "") };
    inline Figure& setGlasses(string glasses) { DARABONBA_PTR_SET_VALUE(glasses_, glasses) };


    // glassesConfidence Field Functions 
    bool hasGlassesConfidence() const { return this->glassesConfidence_ != nullptr;};
    void deleteGlassesConfidence() { this->glassesConfidence_ = nullptr;};
    inline float getGlassesConfidence() const { DARABONBA_PTR_GET_DEFAULT(glassesConfidence_, 0.0) };
    inline Figure& setGlassesConfidence(float glassesConfidence) { DARABONBA_PTR_SET_VALUE(glassesConfidence_, glassesConfidence) };


    // hat Field Functions 
    bool hasHat() const { return this->hat_ != nullptr;};
    void deleteHat() { this->hat_ = nullptr;};
    inline string getHat() const { DARABONBA_PTR_GET_DEFAULT(hat_, "") };
    inline Figure& setHat(string hat) { DARABONBA_PTR_SET_VALUE(hat_, hat) };


    // hatConfidence Field Functions 
    bool hasHatConfidence() const { return this->hatConfidence_ != nullptr;};
    void deleteHatConfidence() { this->hatConfidence_ = nullptr;};
    inline float getHatConfidence() const { DARABONBA_PTR_GET_DEFAULT(hatConfidence_, 0.0) };
    inline Figure& setHatConfidence(float hatConfidence) { DARABONBA_PTR_SET_VALUE(hatConfidence_, hatConfidence) };


    // headPose Field Functions 
    bool hasHeadPose() const { return this->headPose_ != nullptr;};
    void deleteHeadPose() { this->headPose_ = nullptr;};
    inline const HeadPose & getHeadPose() const { DARABONBA_PTR_GET_CONST(headPose_, HeadPose) };
    inline HeadPose getHeadPose() { DARABONBA_PTR_GET(headPose_, HeadPose) };
    inline Figure& setHeadPose(const HeadPose & headPose) { DARABONBA_PTR_SET_VALUE(headPose_, headPose) };
    inline Figure& setHeadPose(HeadPose && headPose) { DARABONBA_PTR_SET_RVALUE(headPose_, headPose) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline Figure& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // maskConfidence Field Functions 
    bool hasMaskConfidence() const { return this->maskConfidence_ != nullptr;};
    void deleteMaskConfidence() { this->maskConfidence_ = nullptr;};
    inline float getMaskConfidence() const { DARABONBA_PTR_GET_DEFAULT(maskConfidence_, 0.0) };
    inline Figure& setMaskConfidence(float maskConfidence) { DARABONBA_PTR_SET_VALUE(maskConfidence_, maskConfidence) };


    // mouth Field Functions 
    bool hasMouth() const { return this->mouth_ != nullptr;};
    void deleteMouth() { this->mouth_ = nullptr;};
    inline string getMouth() const { DARABONBA_PTR_GET_DEFAULT(mouth_, "") };
    inline Figure& setMouth(string mouth) { DARABONBA_PTR_SET_VALUE(mouth_, mouth) };


    // mouthConfidence Field Functions 
    bool hasMouthConfidence() const { return this->mouthConfidence_ != nullptr;};
    void deleteMouthConfidence() { this->mouthConfidence_ = nullptr;};
    inline float getMouthConfidence() const { DARABONBA_PTR_GET_DEFAULT(mouthConfidence_, 0.0) };
    inline Figure& setMouthConfidence(float mouthConfidence) { DARABONBA_PTR_SET_VALUE(mouthConfidence_, mouthConfidence) };


    // sharpness Field Functions 
    bool hasSharpness() const { return this->sharpness_ != nullptr;};
    void deleteSharpness() { this->sharpness_ = nullptr;};
    inline float getSharpness() const { DARABONBA_PTR_GET_DEFAULT(sharpness_, 0.0) };
    inline Figure& setSharpness(float sharpness) { DARABONBA_PTR_SET_VALUE(sharpness_, sharpness) };


  protected:
    // The age.
    shared_ptr<int64_t> age_ {};
    // The standard deviation of the age.
    shared_ptr<float> ageSD_ {};
    // The face attractiveness. A high score indicates strong attractiveness. Valid values: 0 to 1.
    shared_ptr<float> attractive_ {};
    // Specifies whether the figure has a beard. Valid values:
    // 
    // *   beard
    // *   none
    shared_ptr<string> beard_ {};
    // The confidence level of detecting whether the figure has a beard. Valid values: 0 to 1. The value 0 indicates the lowest confidence level. The value 1 indicates the highest confidence level.
    shared_ptr<float> beardConfidence_ {};
    // The face boundary information.
    shared_ptr<Boundary> boundary_ {};
    // The emotion. Valid values:
    // 
    // *   happiness
    // *   none
    shared_ptr<string> emotion_ {};
    // The confidence level of the emotion. Valid values: 0 to 1. The value 0 indicates the lowest confidence level. The value 1 indicates the highest confidence level.
    shared_ptr<float> emotionConfidence_ {};
    // The face quality.
    shared_ptr<float> faceQuality_ {};
    // The confidence level of the face clustering task. Valid values: 0 to 1. The value 0 indicates the lowest confidence level. The value 1 indicates the highest confidence level.
    shared_ptr<float> figureClusterConfidence_ {};
    // The ID of the face clustering task. The following IDs of special face clustering tasks are reserved:
    // 
    // *   figure-cluster-id-independent: the ID of a face clustering task in which faces do not belong to any face group. After images are added to a dataset, the faces may be categorized into different face groups when you perform face clustering.
    // *   figure-cluster-id-unavailable: the ID of a face clustering task in which face clustering is not performed after images are added to a dataset.
    shared_ptr<string> figureClusterId_ {};
    // The confidence level of the figure. Valid values: 0 to 1. The value 0 indicates the lowest confidence level. The value 1 indicates the highest confidence level.
    shared_ptr<float> figureConfidence_ {};
    // The figure ID.
    shared_ptr<string> figureId_ {};
    // The figure type.
    // 
    // Set this parameter to face.
    shared_ptr<string> figureType_ {};
    // The gender. Valid values:
    // 
    // *   female
    // *   male
    shared_ptr<string> gender_ {};
    // The confidence level of the gender. Valid values: 0 to 1. The value 0 indicates the lowest confidence level. The value 1 indicates the highest confidence level.
    shared_ptr<float> genderConfidence_ {};
    // Specifies whether the figure wears glasses. Valid values:
    // 
    // *   glasses
    // *   sunglasses
    // *   none
    shared_ptr<string> glasses_ {};
    // The confidence level of detecting whether the figure wears glasses. Valid values: 0 to 1. The value 0 indicates the lowest confidence level. The value 1 indicates the highest confidence level.
    shared_ptr<float> glassesConfidence_ {};
    // Specifies whether the figure wears a hat. Valid values:
    // 
    // *   hat
    // *   none
    shared_ptr<string> hat_ {};
    // The confidence level of detecting whether the figure wears a hat.
    shared_ptr<float> hatConfidence_ {};
    // The head orientation.
    shared_ptr<HeadPose> headPose_ {};
    // Specifies whether the figure wears a mask. Valid values:
    // 
    // *   mask
    // *   none
    shared_ptr<string> mask_ {};
    // The confidence level of detecting whether the figure wears a mask. Valid values: 0 to 1. The value 0 indicates the lowest confidence level. The value 1 indicates the highest confidence level.
    shared_ptr<float> maskConfidence_ {};
    // Specifies whether the mouth is open. Valid values:
    // 
    // *   open
    // *   close
    shared_ptr<string> mouth_ {};
    // The confidence level of detecting whether the mouth is open. Valid values: 0 to 1. The value 0 indicates the lowest confidence level. The value 1 indicates the highest confidence level.
    shared_ptr<float> mouthConfidence_ {};
    // The clarity.
    shared_ptr<float> sharpness_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
