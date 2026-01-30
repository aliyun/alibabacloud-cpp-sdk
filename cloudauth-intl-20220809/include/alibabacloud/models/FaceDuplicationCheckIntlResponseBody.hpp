// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEDUPLICATIONCHECKINTLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FACEDUPLICATIONCHECKINTLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceDuplicationCheckIntlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceDuplicationCheckIntlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, FaceDuplicationCheckIntlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    FaceDuplicationCheckIntlResponseBody() = default ;
    FaceDuplicationCheckIntlResponseBody(const FaceDuplicationCheckIntlResponseBody &) = default ;
    FaceDuplicationCheckIntlResponseBody(FaceDuplicationCheckIntlResponseBody &&) = default ;
    FaceDuplicationCheckIntlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceDuplicationCheckIntlResponseBody() = default ;
    FaceDuplicationCheckIntlResponseBody& operator=(const FaceDuplicationCheckIntlResponseBody &) = default ;
    FaceDuplicationCheckIntlResponseBody& operator=(FaceDuplicationCheckIntlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duplicateFace_ == nullptr
        && this->faceAge_ == nullptr && this->faceAttack_ == nullptr && this->faceAttackScore_ == nullptr && this->faceComparisonScore_ == nullptr && this->faceGender_ == nullptr
        && this->facePassed_ == nullptr && this->faceRegistrationId_ == nullptr && this->faceRegistrationResult_ == nullptr && this->subCode_ == nullptr && this->transactionId_ == nullptr; };
      // duplicateFace Field Functions 
      bool hasDuplicateFace() const { return this->duplicateFace_ != nullptr;};
      void deleteDuplicateFace() { this->duplicateFace_ = nullptr;};
      inline string getDuplicateFace() const { DARABONBA_PTR_GET_DEFAULT(duplicateFace_, "") };
      inline Result& setDuplicateFace(string duplicateFace) { DARABONBA_PTR_SET_VALUE(duplicateFace_, duplicateFace) };


      // faceAge Field Functions 
      bool hasFaceAge() const { return this->faceAge_ != nullptr;};
      void deleteFaceAge() { this->faceAge_ = nullptr;};
      inline string getFaceAge() const { DARABONBA_PTR_GET_DEFAULT(faceAge_, "") };
      inline Result& setFaceAge(string faceAge) { DARABONBA_PTR_SET_VALUE(faceAge_, faceAge) };


      // faceAttack Field Functions 
      bool hasFaceAttack() const { return this->faceAttack_ != nullptr;};
      void deleteFaceAttack() { this->faceAttack_ = nullptr;};
      inline string getFaceAttack() const { DARABONBA_PTR_GET_DEFAULT(faceAttack_, "") };
      inline Result& setFaceAttack(string faceAttack) { DARABONBA_PTR_SET_VALUE(faceAttack_, faceAttack) };


      // faceAttackScore Field Functions 
      bool hasFaceAttackScore() const { return this->faceAttackScore_ != nullptr;};
      void deleteFaceAttackScore() { this->faceAttackScore_ = nullptr;};
      inline string getFaceAttackScore() const { DARABONBA_PTR_GET_DEFAULT(faceAttackScore_, "") };
      inline Result& setFaceAttackScore(string faceAttackScore) { DARABONBA_PTR_SET_VALUE(faceAttackScore_, faceAttackScore) };


      // faceComparisonScore Field Functions 
      bool hasFaceComparisonScore() const { return this->faceComparisonScore_ != nullptr;};
      void deleteFaceComparisonScore() { this->faceComparisonScore_ = nullptr;};
      inline string getFaceComparisonScore() const { DARABONBA_PTR_GET_DEFAULT(faceComparisonScore_, "") };
      inline Result& setFaceComparisonScore(string faceComparisonScore) { DARABONBA_PTR_SET_VALUE(faceComparisonScore_, faceComparisonScore) };


      // faceGender Field Functions 
      bool hasFaceGender() const { return this->faceGender_ != nullptr;};
      void deleteFaceGender() { this->faceGender_ = nullptr;};
      inline string getFaceGender() const { DARABONBA_PTR_GET_DEFAULT(faceGender_, "") };
      inline Result& setFaceGender(string faceGender) { DARABONBA_PTR_SET_VALUE(faceGender_, faceGender) };


      // facePassed Field Functions 
      bool hasFacePassed() const { return this->facePassed_ != nullptr;};
      void deleteFacePassed() { this->facePassed_ = nullptr;};
      inline string getFacePassed() const { DARABONBA_PTR_GET_DEFAULT(facePassed_, "") };
      inline Result& setFacePassed(string facePassed) { DARABONBA_PTR_SET_VALUE(facePassed_, facePassed) };


      // faceRegistrationId Field Functions 
      bool hasFaceRegistrationId() const { return this->faceRegistrationId_ != nullptr;};
      void deleteFaceRegistrationId() { this->faceRegistrationId_ = nullptr;};
      inline string getFaceRegistrationId() const { DARABONBA_PTR_GET_DEFAULT(faceRegistrationId_, "") };
      inline Result& setFaceRegistrationId(string faceRegistrationId) { DARABONBA_PTR_SET_VALUE(faceRegistrationId_, faceRegistrationId) };


      // faceRegistrationResult Field Functions 
      bool hasFaceRegistrationResult() const { return this->faceRegistrationResult_ != nullptr;};
      void deleteFaceRegistrationResult() { this->faceRegistrationResult_ = nullptr;};
      inline int32_t getFaceRegistrationResult() const { DARABONBA_PTR_GET_DEFAULT(faceRegistrationResult_, 0) };
      inline Result& setFaceRegistrationResult(int32_t faceRegistrationResult) { DARABONBA_PTR_SET_VALUE(faceRegistrationResult_, faceRegistrationResult) };


      // subCode Field Functions 
      bool hasSubCode() const { return this->subCode_ != nullptr;};
      void deleteSubCode() { this->subCode_ = nullptr;};
      inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
      inline Result& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


      // transactionId Field Functions 
      bool hasTransactionId() const { return this->transactionId_ != nullptr;};
      void deleteTransactionId() { this->transactionId_ = nullptr;};
      inline string getTransactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
      inline Result& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


    protected:
      // Returns the face library face ID and UserID when a duplicate face is detected.
      shared_ptr<string> duplicateFace_ {};
      // The estimated age of the face, which may not be returned if the prediction fails.
      shared_ptr<string> faceAge_ {};
      // Indicates whether the captured face involves a liveness attack, Y for an attack, N for no attack.
      // Returned when silent liveness detection is enabled.
      shared_ptr<string> faceAttack_ {};
      // The probability of a liveness attack detected by silent liveness detection. The value range is 0 to 100.
      // Returned when silent liveness detection is enabled.
      shared_ptr<string> faceAttackScore_ {};
      // When the verification mode is 1 or 2, returns the 1:1 verification comparison score
      // Comparison score range 0～100.
      shared_ptr<string> faceComparisonScore_ {};
      // The predicted gender of the face in the image, which may not be returned if the prediction fails.
      // - M: Male
      // - F: Female
      shared_ptr<string> faceGender_ {};
      // Final authentication result, values:
      // - Y: Passed
      // - N: Not passed
      shared_ptr<string> facePassed_ {};
      // Returns the corresponding FACEID only when the customer sets auto-registration and the face registration is successful.
      shared_ptr<string> faceRegistrationId_ {};
      // Face registration result 
      // - 0- Failed 
      // - 1- Succeeded
      shared_ptr<int32_t> faceRegistrationResult_ {};
      // Description of the authentication result. For more information, see ResultObject.SubCode error code description.
      shared_ptr<string> subCode_ {};
      // Unique identifier of the authentication request.
      shared_ptr<string> transactionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FaceDuplicationCheckIntlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FaceDuplicationCheckIntlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FaceDuplicationCheckIntlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const FaceDuplicationCheckIntlResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, FaceDuplicationCheckIntlResponseBody::Result) };
    inline FaceDuplicationCheckIntlResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, FaceDuplicationCheckIntlResponseBody::Result) };
    inline FaceDuplicationCheckIntlResponseBody& setResult(const FaceDuplicationCheckIntlResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline FaceDuplicationCheckIntlResponseBody& setResult(FaceDuplicationCheckIntlResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Return code.
    shared_ptr<string> code_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Return result.
    shared_ptr<FaceDuplicationCheckIntlResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
