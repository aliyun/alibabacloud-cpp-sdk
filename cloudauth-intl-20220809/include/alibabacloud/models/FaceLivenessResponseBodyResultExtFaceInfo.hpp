// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACELIVENESSRESPONSEBODYRESULTEXTFACEINFO_HPP_
#define ALIBABACLOUD_MODELS_FACELIVENESSRESPONSEBODYRESULTEXTFACEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceLivenessResponseBodyResultExtFaceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceLivenessResponseBodyResultExtFaceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(FaceAge, faceAge_);
      DARABONBA_PTR_TO_JSON(FaceAttack, faceAttack_);
      DARABONBA_PTR_TO_JSON(FaceGender, faceGender_);
      DARABONBA_PTR_TO_JSON(FaceQualityScore, faceQualityScore_);
      DARABONBA_PTR_TO_JSON(OcclusionResult, occlusionResult_);
    };
    friend void from_json(const Darabonba::Json& j, FaceLivenessResponseBodyResultExtFaceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceAge, faceAge_);
      DARABONBA_PTR_FROM_JSON(FaceAttack, faceAttack_);
      DARABONBA_PTR_FROM_JSON(FaceGender, faceGender_);
      DARABONBA_PTR_FROM_JSON(FaceQualityScore, faceQualityScore_);
      DARABONBA_PTR_FROM_JSON(OcclusionResult, occlusionResult_);
    };
    FaceLivenessResponseBodyResultExtFaceInfo() = default ;
    FaceLivenessResponseBodyResultExtFaceInfo(const FaceLivenessResponseBodyResultExtFaceInfo &) = default ;
    FaceLivenessResponseBodyResultExtFaceInfo(FaceLivenessResponseBodyResultExtFaceInfo &&) = default ;
    FaceLivenessResponseBodyResultExtFaceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceLivenessResponseBodyResultExtFaceInfo() = default ;
    FaceLivenessResponseBodyResultExtFaceInfo& operator=(const FaceLivenessResponseBodyResultExtFaceInfo &) = default ;
    FaceLivenessResponseBodyResultExtFaceInfo& operator=(FaceLivenessResponseBodyResultExtFaceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->faceAge_ != nullptr
        && this->faceAttack_ != nullptr && this->faceGender_ != nullptr && this->faceQualityScore_ != nullptr && this->occlusionResult_ != nullptr; };
    // faceAge Field Functions 
    bool hasFaceAge() const { return this->faceAge_ != nullptr;};
    void deleteFaceAge() { this->faceAge_ = nullptr;};
    inline int32_t faceAge() const { DARABONBA_PTR_GET_DEFAULT(faceAge_, 0) };
    inline FaceLivenessResponseBodyResultExtFaceInfo& setFaceAge(int32_t faceAge) { DARABONBA_PTR_SET_VALUE(faceAge_, faceAge) };


    // faceAttack Field Functions 
    bool hasFaceAttack() const { return this->faceAttack_ != nullptr;};
    void deleteFaceAttack() { this->faceAttack_ = nullptr;};
    inline string faceAttack() const { DARABONBA_PTR_GET_DEFAULT(faceAttack_, "") };
    inline FaceLivenessResponseBodyResultExtFaceInfo& setFaceAttack(string faceAttack) { DARABONBA_PTR_SET_VALUE(faceAttack_, faceAttack) };


    // faceGender Field Functions 
    bool hasFaceGender() const { return this->faceGender_ != nullptr;};
    void deleteFaceGender() { this->faceGender_ = nullptr;};
    inline string faceGender() const { DARABONBA_PTR_GET_DEFAULT(faceGender_, "") };
    inline FaceLivenessResponseBodyResultExtFaceInfo& setFaceGender(string faceGender) { DARABONBA_PTR_SET_VALUE(faceGender_, faceGender) };


    // faceQualityScore Field Functions 
    bool hasFaceQualityScore() const { return this->faceQualityScore_ != nullptr;};
    void deleteFaceQualityScore() { this->faceQualityScore_ = nullptr;};
    inline double faceQualityScore() const { DARABONBA_PTR_GET_DEFAULT(faceQualityScore_, 0.0) };
    inline FaceLivenessResponseBodyResultExtFaceInfo& setFaceQualityScore(double faceQualityScore) { DARABONBA_PTR_SET_VALUE(faceQualityScore_, faceQualityScore) };


    // occlusionResult Field Functions 
    bool hasOcclusionResult() const { return this->occlusionResult_ != nullptr;};
    void deleteOcclusionResult() { this->occlusionResult_ = nullptr;};
    inline string occlusionResult() const { DARABONBA_PTR_GET_DEFAULT(occlusionResult_, "") };
    inline FaceLivenessResponseBodyResultExtFaceInfo& setOcclusionResult(string occlusionResult) { DARABONBA_PTR_SET_VALUE(occlusionResult_, occlusionResult) };


  protected:
    // The predicted age of the person in the image. The prediction may fail, resulting in an empty value.
    std::shared_ptr<int32_t> faceAge_ = nullptr;
    // Indicates whether a presentation attack was detected on the captured face. Y means an attack was detected. N means no attack was detected.
    std::shared_ptr<string> faceAttack_ = nullptr;
    // The predicted gender of the person in the image. The prediction may fail, resulting in an empty value.
    // 
    // - **M**: Male
    // 
    // - **F**: Female
    std::shared_ptr<string> faceGender_ = nullptr;
    // Optional. The quality score of the live face. The value ranges from 0 to 100.
    std::shared_ptr<double> faceQualityScore_ = nullptr;
    // Optional. Indicates whether the face is occluded. Y means the face is occluded. N means the face is not occluded.
    std::shared_ptr<string> occlusionResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
