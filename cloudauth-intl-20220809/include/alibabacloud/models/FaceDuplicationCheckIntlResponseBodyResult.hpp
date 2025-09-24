// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEDUPLICATIONCHECKINTLRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_FACEDUPLICATIONCHECKINTLRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceDuplicationCheckIntlResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceDuplicationCheckIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(DuplicateFace, duplicateFace_);
      DARABONBA_PTR_TO_JSON(FaceAge, faceAge_);
      DARABONBA_PTR_TO_JSON(FaceAttack, faceAttack_);
      DARABONBA_PTR_TO_JSON(FaceAttackScore, faceAttackScore_);
      DARABONBA_PTR_TO_JSON(FaceComparisonScore, faceComparisonScore_);
      DARABONBA_PTR_TO_JSON(FaceGender, faceGender_);
      DARABONBA_PTR_TO_JSON(FacePassed, facePassed_);
      DARABONBA_PTR_TO_JSON(FaceRegistrationId, faceRegistrationId_);
      DARABONBA_PTR_TO_JSON(FaceRegistrationResult, faceRegistrationResult_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, FaceDuplicationCheckIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DuplicateFace, duplicateFace_);
      DARABONBA_PTR_FROM_JSON(FaceAge, faceAge_);
      DARABONBA_PTR_FROM_JSON(FaceAttack, faceAttack_);
      DARABONBA_PTR_FROM_JSON(FaceAttackScore, faceAttackScore_);
      DARABONBA_PTR_FROM_JSON(FaceComparisonScore, faceComparisonScore_);
      DARABONBA_PTR_FROM_JSON(FaceGender, faceGender_);
      DARABONBA_PTR_FROM_JSON(FacePassed, facePassed_);
      DARABONBA_PTR_FROM_JSON(FaceRegistrationId, faceRegistrationId_);
      DARABONBA_PTR_FROM_JSON(FaceRegistrationResult, faceRegistrationResult_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    FaceDuplicationCheckIntlResponseBodyResult() = default ;
    FaceDuplicationCheckIntlResponseBodyResult(const FaceDuplicationCheckIntlResponseBodyResult &) = default ;
    FaceDuplicationCheckIntlResponseBodyResult(FaceDuplicationCheckIntlResponseBodyResult &&) = default ;
    FaceDuplicationCheckIntlResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceDuplicationCheckIntlResponseBodyResult() = default ;
    FaceDuplicationCheckIntlResponseBodyResult& operator=(const FaceDuplicationCheckIntlResponseBodyResult &) = default ;
    FaceDuplicationCheckIntlResponseBodyResult& operator=(FaceDuplicationCheckIntlResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duplicateFace_ != nullptr
        && this->faceAge_ != nullptr && this->faceAttack_ != nullptr && this->faceAttackScore_ != nullptr && this->faceComparisonScore_ != nullptr && this->faceGender_ != nullptr
        && this->facePassed_ != nullptr && this->faceRegistrationId_ != nullptr && this->faceRegistrationResult_ != nullptr && this->subCode_ != nullptr && this->transactionId_ != nullptr; };
    // duplicateFace Field Functions 
    bool hasDuplicateFace() const { return this->duplicateFace_ != nullptr;};
    void deleteDuplicateFace() { this->duplicateFace_ = nullptr;};
    inline string duplicateFace() const { DARABONBA_PTR_GET_DEFAULT(duplicateFace_, "") };
    inline FaceDuplicationCheckIntlResponseBodyResult& setDuplicateFace(string duplicateFace) { DARABONBA_PTR_SET_VALUE(duplicateFace_, duplicateFace) };


    // faceAge Field Functions 
    bool hasFaceAge() const { return this->faceAge_ != nullptr;};
    void deleteFaceAge() { this->faceAge_ = nullptr;};
    inline string faceAge() const { DARABONBA_PTR_GET_DEFAULT(faceAge_, "") };
    inline FaceDuplicationCheckIntlResponseBodyResult& setFaceAge(string faceAge) { DARABONBA_PTR_SET_VALUE(faceAge_, faceAge) };


    // faceAttack Field Functions 
    bool hasFaceAttack() const { return this->faceAttack_ != nullptr;};
    void deleteFaceAttack() { this->faceAttack_ = nullptr;};
    inline string faceAttack() const { DARABONBA_PTR_GET_DEFAULT(faceAttack_, "") };
    inline FaceDuplicationCheckIntlResponseBodyResult& setFaceAttack(string faceAttack) { DARABONBA_PTR_SET_VALUE(faceAttack_, faceAttack) };


    // faceAttackScore Field Functions 
    bool hasFaceAttackScore() const { return this->faceAttackScore_ != nullptr;};
    void deleteFaceAttackScore() { this->faceAttackScore_ = nullptr;};
    inline string faceAttackScore() const { DARABONBA_PTR_GET_DEFAULT(faceAttackScore_, "") };
    inline FaceDuplicationCheckIntlResponseBodyResult& setFaceAttackScore(string faceAttackScore) { DARABONBA_PTR_SET_VALUE(faceAttackScore_, faceAttackScore) };


    // faceComparisonScore Field Functions 
    bool hasFaceComparisonScore() const { return this->faceComparisonScore_ != nullptr;};
    void deleteFaceComparisonScore() { this->faceComparisonScore_ = nullptr;};
    inline string faceComparisonScore() const { DARABONBA_PTR_GET_DEFAULT(faceComparisonScore_, "") };
    inline FaceDuplicationCheckIntlResponseBodyResult& setFaceComparisonScore(string faceComparisonScore) { DARABONBA_PTR_SET_VALUE(faceComparisonScore_, faceComparisonScore) };


    // faceGender Field Functions 
    bool hasFaceGender() const { return this->faceGender_ != nullptr;};
    void deleteFaceGender() { this->faceGender_ = nullptr;};
    inline string faceGender() const { DARABONBA_PTR_GET_DEFAULT(faceGender_, "") };
    inline FaceDuplicationCheckIntlResponseBodyResult& setFaceGender(string faceGender) { DARABONBA_PTR_SET_VALUE(faceGender_, faceGender) };


    // facePassed Field Functions 
    bool hasFacePassed() const { return this->facePassed_ != nullptr;};
    void deleteFacePassed() { this->facePassed_ = nullptr;};
    inline string facePassed() const { DARABONBA_PTR_GET_DEFAULT(facePassed_, "") };
    inline FaceDuplicationCheckIntlResponseBodyResult& setFacePassed(string facePassed) { DARABONBA_PTR_SET_VALUE(facePassed_, facePassed) };


    // faceRegistrationId Field Functions 
    bool hasFaceRegistrationId() const { return this->faceRegistrationId_ != nullptr;};
    void deleteFaceRegistrationId() { this->faceRegistrationId_ = nullptr;};
    inline string faceRegistrationId() const { DARABONBA_PTR_GET_DEFAULT(faceRegistrationId_, "") };
    inline FaceDuplicationCheckIntlResponseBodyResult& setFaceRegistrationId(string faceRegistrationId) { DARABONBA_PTR_SET_VALUE(faceRegistrationId_, faceRegistrationId) };


    // faceRegistrationResult Field Functions 
    bool hasFaceRegistrationResult() const { return this->faceRegistrationResult_ != nullptr;};
    void deleteFaceRegistrationResult() { this->faceRegistrationResult_ = nullptr;};
    inline int32_t faceRegistrationResult() const { DARABONBA_PTR_GET_DEFAULT(faceRegistrationResult_, 0) };
    inline FaceDuplicationCheckIntlResponseBodyResult& setFaceRegistrationResult(int32_t faceRegistrationResult) { DARABONBA_PTR_SET_VALUE(faceRegistrationResult_, faceRegistrationResult) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline FaceDuplicationCheckIntlResponseBodyResult& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline FaceDuplicationCheckIntlResponseBodyResult& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // Returns the face library face ID and UserID when a duplicate face is detected.
    std::shared_ptr<string> duplicateFace_ = nullptr;
    // The estimated age of the face, which may not be returned if the prediction fails.
    std::shared_ptr<string> faceAge_ = nullptr;
    // Indicates whether the captured face involves a liveness attack, Y for an attack, N for no attack.
    // Returned when silent liveness detection is enabled.
    std::shared_ptr<string> faceAttack_ = nullptr;
    // The probability of a liveness attack detected by silent liveness detection. The value range is 0 to 100.
    // Returned when silent liveness detection is enabled.
    std::shared_ptr<string> faceAttackScore_ = nullptr;
    // When the verification mode is 1 or 2, returns the 1:1 verification comparison score
    // Comparison score range 0～100.
    std::shared_ptr<string> faceComparisonScore_ = nullptr;
    // The predicted gender of the face in the image, which may not be returned if the prediction fails.
    // - M: Male
    // - F: Female
    std::shared_ptr<string> faceGender_ = nullptr;
    // Final authentication result, values:
    // - Y: Passed
    // - N: Not passed
    std::shared_ptr<string> facePassed_ = nullptr;
    // Returns the corresponding FACEID only when the customer sets auto-registration and the face registration is successful.
    std::shared_ptr<string> faceRegistrationId_ = nullptr;
    // Face registration result 
    // - 0- Failed 
    // - 1- Succeeded
    std::shared_ptr<int32_t> faceRegistrationResult_ = nullptr;
    // Description of the authentication result. For more information, see ResultObject.SubCode error code description.
    std::shared_ptr<string> subCode_ = nullptr;
    // Unique identifier of the authentication request.
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
