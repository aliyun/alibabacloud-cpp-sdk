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
        DARABONBA_PTR_TO_JSON(ExtFaceInfo, extFaceInfo_);
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
        DARABONBA_PTR_FROM_JSON(ExtFaceInfo, extFaceInfo_);
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
      class ExtFaceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtFaceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(FaceAttributeInfo, faceAttributeInfo_);
          DARABONBA_PTR_TO_JSON(FaceQualityScore, faceQualityScore_);
          DARABONBA_PTR_TO_JSON(IlluminationScore, illuminationScore_);
          DARABONBA_PTR_TO_JSON(KaOcclusionScore, kaOcclusionScore_);
          DARABONBA_PTR_TO_JSON(OcclusionScore, occlusionScore_);
          DARABONBA_PTR_TO_JSON(SharpnessScore, sharpnessScore_);
          DARABONBA_PTR_TO_JSON(TargetFaceQualityScore, targetFaceQualityScore_);
          DARABONBA_PTR_TO_JSON(TargetIlluminationScore, targetIlluminationScore_);
          DARABONBA_PTR_TO_JSON(TargetKaOcclusionScore, targetKaOcclusionScore_);
          DARABONBA_PTR_TO_JSON(TargetOcclusionScore, targetOcclusionScore_);
          DARABONBA_PTR_TO_JSON(TargetSharpnessScore, targetSharpnessScore_);
        };
        friend void from_json(const Darabonba::Json& j, ExtFaceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(FaceAttributeInfo, faceAttributeInfo_);
          DARABONBA_PTR_FROM_JSON(FaceQualityScore, faceQualityScore_);
          DARABONBA_PTR_FROM_JSON(IlluminationScore, illuminationScore_);
          DARABONBA_PTR_FROM_JSON(KaOcclusionScore, kaOcclusionScore_);
          DARABONBA_PTR_FROM_JSON(OcclusionScore, occlusionScore_);
          DARABONBA_PTR_FROM_JSON(SharpnessScore, sharpnessScore_);
          DARABONBA_PTR_FROM_JSON(TargetFaceQualityScore, targetFaceQualityScore_);
          DARABONBA_PTR_FROM_JSON(TargetIlluminationScore, targetIlluminationScore_);
          DARABONBA_PTR_FROM_JSON(TargetKaOcclusionScore, targetKaOcclusionScore_);
          DARABONBA_PTR_FROM_JSON(TargetOcclusionScore, targetOcclusionScore_);
          DARABONBA_PTR_FROM_JSON(TargetSharpnessScore, targetSharpnessScore_);
        };
        ExtFaceInfo() = default ;
        ExtFaceInfo(const ExtFaceInfo &) = default ;
        ExtFaceInfo(ExtFaceInfo &&) = default ;
        ExtFaceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtFaceInfo() = default ;
        ExtFaceInfo& operator=(const ExtFaceInfo &) = default ;
        ExtFaceInfo& operator=(ExtFaceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->faceAttributeInfo_ == nullptr
        && this->faceQualityScore_ == nullptr && this->illuminationScore_ == nullptr && this->kaOcclusionScore_ == nullptr && this->occlusionScore_ == nullptr && this->sharpnessScore_ == nullptr
        && this->targetFaceQualityScore_ == nullptr && this->targetIlluminationScore_ == nullptr && this->targetKaOcclusionScore_ == nullptr && this->targetOcclusionScore_ == nullptr && this->targetSharpnessScore_ == nullptr; };
        // faceAttributeInfo Field Functions 
        bool hasFaceAttributeInfo() const { return this->faceAttributeInfo_ != nullptr;};
        void deleteFaceAttributeInfo() { this->faceAttributeInfo_ = nullptr;};
        inline string getFaceAttributeInfo() const { DARABONBA_PTR_GET_DEFAULT(faceAttributeInfo_, "") };
        inline ExtFaceInfo& setFaceAttributeInfo(string faceAttributeInfo) { DARABONBA_PTR_SET_VALUE(faceAttributeInfo_, faceAttributeInfo) };


        // faceQualityScore Field Functions 
        bool hasFaceQualityScore() const { return this->faceQualityScore_ != nullptr;};
        void deleteFaceQualityScore() { this->faceQualityScore_ = nullptr;};
        inline double getFaceQualityScore() const { DARABONBA_PTR_GET_DEFAULT(faceQualityScore_, 0.0) };
        inline ExtFaceInfo& setFaceQualityScore(double faceQualityScore) { DARABONBA_PTR_SET_VALUE(faceQualityScore_, faceQualityScore) };


        // illuminationScore Field Functions 
        bool hasIlluminationScore() const { return this->illuminationScore_ != nullptr;};
        void deleteIlluminationScore() { this->illuminationScore_ = nullptr;};
        inline double getIlluminationScore() const { DARABONBA_PTR_GET_DEFAULT(illuminationScore_, 0.0) };
        inline ExtFaceInfo& setIlluminationScore(double illuminationScore) { DARABONBA_PTR_SET_VALUE(illuminationScore_, illuminationScore) };


        // kaOcclusionScore Field Functions 
        bool hasKaOcclusionScore() const { return this->kaOcclusionScore_ != nullptr;};
        void deleteKaOcclusionScore() { this->kaOcclusionScore_ = nullptr;};
        inline double getKaOcclusionScore() const { DARABONBA_PTR_GET_DEFAULT(kaOcclusionScore_, 0.0) };
        inline ExtFaceInfo& setKaOcclusionScore(double kaOcclusionScore) { DARABONBA_PTR_SET_VALUE(kaOcclusionScore_, kaOcclusionScore) };


        // occlusionScore Field Functions 
        bool hasOcclusionScore() const { return this->occlusionScore_ != nullptr;};
        void deleteOcclusionScore() { this->occlusionScore_ = nullptr;};
        inline double getOcclusionScore() const { DARABONBA_PTR_GET_DEFAULT(occlusionScore_, 0.0) };
        inline ExtFaceInfo& setOcclusionScore(double occlusionScore) { DARABONBA_PTR_SET_VALUE(occlusionScore_, occlusionScore) };


        // sharpnessScore Field Functions 
        bool hasSharpnessScore() const { return this->sharpnessScore_ != nullptr;};
        void deleteSharpnessScore() { this->sharpnessScore_ = nullptr;};
        inline double getSharpnessScore() const { DARABONBA_PTR_GET_DEFAULT(sharpnessScore_, 0.0) };
        inline ExtFaceInfo& setSharpnessScore(double sharpnessScore) { DARABONBA_PTR_SET_VALUE(sharpnessScore_, sharpnessScore) };


        // targetFaceQualityScore Field Functions 
        bool hasTargetFaceQualityScore() const { return this->targetFaceQualityScore_ != nullptr;};
        void deleteTargetFaceQualityScore() { this->targetFaceQualityScore_ = nullptr;};
        inline double getTargetFaceQualityScore() const { DARABONBA_PTR_GET_DEFAULT(targetFaceQualityScore_, 0.0) };
        inline ExtFaceInfo& setTargetFaceQualityScore(double targetFaceQualityScore) { DARABONBA_PTR_SET_VALUE(targetFaceQualityScore_, targetFaceQualityScore) };


        // targetIlluminationScore Field Functions 
        bool hasTargetIlluminationScore() const { return this->targetIlluminationScore_ != nullptr;};
        void deleteTargetIlluminationScore() { this->targetIlluminationScore_ = nullptr;};
        inline double getTargetIlluminationScore() const { DARABONBA_PTR_GET_DEFAULT(targetIlluminationScore_, 0.0) };
        inline ExtFaceInfo& setTargetIlluminationScore(double targetIlluminationScore) { DARABONBA_PTR_SET_VALUE(targetIlluminationScore_, targetIlluminationScore) };


        // targetKaOcclusionScore Field Functions 
        bool hasTargetKaOcclusionScore() const { return this->targetKaOcclusionScore_ != nullptr;};
        void deleteTargetKaOcclusionScore() { this->targetKaOcclusionScore_ = nullptr;};
        inline double getTargetKaOcclusionScore() const { DARABONBA_PTR_GET_DEFAULT(targetKaOcclusionScore_, 0.0) };
        inline ExtFaceInfo& setTargetKaOcclusionScore(double targetKaOcclusionScore) { DARABONBA_PTR_SET_VALUE(targetKaOcclusionScore_, targetKaOcclusionScore) };


        // targetOcclusionScore Field Functions 
        bool hasTargetOcclusionScore() const { return this->targetOcclusionScore_ != nullptr;};
        void deleteTargetOcclusionScore() { this->targetOcclusionScore_ = nullptr;};
        inline double getTargetOcclusionScore() const { DARABONBA_PTR_GET_DEFAULT(targetOcclusionScore_, 0.0) };
        inline ExtFaceInfo& setTargetOcclusionScore(double targetOcclusionScore) { DARABONBA_PTR_SET_VALUE(targetOcclusionScore_, targetOcclusionScore) };


        // targetSharpnessScore Field Functions 
        bool hasTargetSharpnessScore() const { return this->targetSharpnessScore_ != nullptr;};
        void deleteTargetSharpnessScore() { this->targetSharpnessScore_ = nullptr;};
        inline double getTargetSharpnessScore() const { DARABONBA_PTR_GET_DEFAULT(targetSharpnessScore_, 0.0) };
        inline ExtFaceInfo& setTargetSharpnessScore(double targetSharpnessScore) { DARABONBA_PTR_SET_VALUE(targetSharpnessScore_, targetSharpnessScore) };


      protected:
        shared_ptr<string> faceAttributeInfo_ {};
        // The overall quality score.
        shared_ptr<double> faceQualityScore_ {};
        // The illumination score.
        shared_ptr<double> illuminationScore_ {};
        // The key area occlusion score.
        shared_ptr<double> kaOcclusionScore_ {};
        // The occlusion score.
        shared_ptr<double> occlusionScore_ {};
        // The sharpness score.
        shared_ptr<double> sharpnessScore_ {};
        shared_ptr<double> targetFaceQualityScore_ {};
        shared_ptr<double> targetIlluminationScore_ {};
        shared_ptr<double> targetKaOcclusionScore_ {};
        shared_ptr<double> targetOcclusionScore_ {};
        shared_ptr<double> targetSharpnessScore_ {};
      };

      virtual bool empty() const override { return this->duplicateFace_ == nullptr
        && this->extFaceInfo_ == nullptr && this->faceAge_ == nullptr && this->faceAttack_ == nullptr && this->faceAttackScore_ == nullptr && this->faceComparisonScore_ == nullptr
        && this->faceGender_ == nullptr && this->facePassed_ == nullptr && this->faceRegistrationId_ == nullptr && this->faceRegistrationResult_ == nullptr && this->subCode_ == nullptr
        && this->transactionId_ == nullptr; };
      // duplicateFace Field Functions 
      bool hasDuplicateFace() const { return this->duplicateFace_ != nullptr;};
      void deleteDuplicateFace() { this->duplicateFace_ = nullptr;};
      inline string getDuplicateFace() const { DARABONBA_PTR_GET_DEFAULT(duplicateFace_, "") };
      inline Result& setDuplicateFace(string duplicateFace) { DARABONBA_PTR_SET_VALUE(duplicateFace_, duplicateFace) };


      // extFaceInfo Field Functions 
      bool hasExtFaceInfo() const { return this->extFaceInfo_ != nullptr;};
      void deleteExtFaceInfo() { this->extFaceInfo_ = nullptr;};
      inline const Result::ExtFaceInfo & getExtFaceInfo() const { DARABONBA_PTR_GET_CONST(extFaceInfo_, Result::ExtFaceInfo) };
      inline Result::ExtFaceInfo getExtFaceInfo() { DARABONBA_PTR_GET(extFaceInfo_, Result::ExtFaceInfo) };
      inline Result& setExtFaceInfo(const Result::ExtFaceInfo & extFaceInfo) { DARABONBA_PTR_SET_VALUE(extFaceInfo_, extFaceInfo) };
      inline Result& setExtFaceInfo(Result::ExtFaceInfo && extFaceInfo) { DARABONBA_PTR_SET_RVALUE(extFaceInfo_, extFaceInfo) };


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
      // The face ID and UserID retrieved from the face library when a duplicate face is detected.
      shared_ptr<string> duplicateFace_ {};
      // The related result information.
      shared_ptr<Result::ExtFaceInfo> extFaceInfo_ {};
      // The estimated age of the face. The prediction may fail and no value is returned in some cases.
      shared_ptr<string> faceAge_ {};
      // Indicates whether the captured face involves a liveness attack. Valid values: Y (attack detected) and N (no attack detected). This field is returned when passive liveness detection is enabled.
      shared_ptr<string> faceAttack_ {};
      // The probability of a passive liveness detection attack. The value ranges from 0 to 100. This field is returned when passive liveness detection is enabled.
      shared_ptr<string> faceAttackScore_ {};
      // The 1:1 face comparison score returned when the verification mode is 1 or 2. The value ranges from 0 to 100.
      shared_ptr<string> faceComparisonScore_ {};
      // The predicted gender of the face image. The prediction may fail and no value is returned in some cases. Valid values:
      // - M: Male.
      // - F: Female.
      shared_ptr<string> faceGender_ {};
      // The final verification result. Valid values:
      // - Y: Passed.
      // - N: Not passed.
      shared_ptr<string> facePassed_ {};
      // The FACEID returned only when the customer has enabled automatic registration and the face is registered.
      shared_ptr<string> faceRegistrationId_ {};
      // The face registration result. Valid values: 
      // - 0: Failed. 
      // - 1: Succeeded.
      shared_ptr<int32_t> faceRegistrationResult_ {};
      // The verification result description. For more information, refer to the ResultObject.SubCode error code description.
      shared_ptr<string> subCode_ {};
      // The unique identifier of the verification request.
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
    // The response code.
    shared_ptr<string> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<FaceDuplicationCheckIntlResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
