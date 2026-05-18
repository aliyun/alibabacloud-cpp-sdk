// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACELIVENESSV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FACELIVENESSV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceLivenessV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceLivenessV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, FaceLivenessV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    FaceLivenessV2ResponseBody() = default ;
    FaceLivenessV2ResponseBody(const FaceLivenessV2ResponseBody &) = default ;
    FaceLivenessV2ResponseBody(FaceLivenessV2ResponseBody &&) = default ;
    FaceLivenessV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceLivenessV2ResponseBody() = default ;
    FaceLivenessV2ResponseBody& operator=(const FaceLivenessV2ResponseBody &) = default ;
    FaceLivenessV2ResponseBody& operator=(FaceLivenessV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ExtFaceInfo, extFaceInfo_);
        DARABONBA_PTR_TO_JSON(Passed, passed_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
        DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ExtFaceInfo, extFaceInfo_);
        DARABONBA_PTR_FROM_JSON(Passed, passed_);
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
          DARABONBA_PTR_TO_JSON(FaceAge, faceAge_);
          DARABONBA_PTR_TO_JSON(FaceAttack, faceAttack_);
          DARABONBA_PTR_TO_JSON(FaceGender, faceGender_);
          DARABONBA_PTR_TO_JSON(FaceQualityScore, faceQualityScore_);
          DARABONBA_PTR_TO_JSON(IlluminationScore, illuminationScore_);
          DARABONBA_PTR_TO_JSON(KaOcclusionScore, kaOcclusionScore_);
          DARABONBA_PTR_TO_JSON(OcclusionResult, occlusionResult_);
          DARABONBA_PTR_TO_JSON(OcclusionScore, occlusionScore_);
          DARABONBA_PTR_TO_JSON(SharpnessScore, sharpnessScore_);
        };
        friend void from_json(const Darabonba::Json& j, ExtFaceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(FaceAge, faceAge_);
          DARABONBA_PTR_FROM_JSON(FaceAttack, faceAttack_);
          DARABONBA_PTR_FROM_JSON(FaceGender, faceGender_);
          DARABONBA_PTR_FROM_JSON(FaceQualityScore, faceQualityScore_);
          DARABONBA_PTR_FROM_JSON(IlluminationScore, illuminationScore_);
          DARABONBA_PTR_FROM_JSON(KaOcclusionScore, kaOcclusionScore_);
          DARABONBA_PTR_FROM_JSON(OcclusionResult, occlusionResult_);
          DARABONBA_PTR_FROM_JSON(OcclusionScore, occlusionScore_);
          DARABONBA_PTR_FROM_JSON(SharpnessScore, sharpnessScore_);
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
        virtual bool empty() const override { return this->faceAge_ == nullptr
        && this->faceAttack_ == nullptr && this->faceGender_ == nullptr && this->faceQualityScore_ == nullptr && this->illuminationScore_ == nullptr && this->kaOcclusionScore_ == nullptr
        && this->occlusionResult_ == nullptr && this->occlusionScore_ == nullptr && this->sharpnessScore_ == nullptr; };
        // faceAge Field Functions 
        bool hasFaceAge() const { return this->faceAge_ != nullptr;};
        void deleteFaceAge() { this->faceAge_ = nullptr;};
        inline int64_t getFaceAge() const { DARABONBA_PTR_GET_DEFAULT(faceAge_, 0L) };
        inline ExtFaceInfo& setFaceAge(int64_t faceAge) { DARABONBA_PTR_SET_VALUE(faceAge_, faceAge) };


        // faceAttack Field Functions 
        bool hasFaceAttack() const { return this->faceAttack_ != nullptr;};
        void deleteFaceAttack() { this->faceAttack_ = nullptr;};
        inline string getFaceAttack() const { DARABONBA_PTR_GET_DEFAULT(faceAttack_, "") };
        inline ExtFaceInfo& setFaceAttack(string faceAttack) { DARABONBA_PTR_SET_VALUE(faceAttack_, faceAttack) };


        // faceGender Field Functions 
        bool hasFaceGender() const { return this->faceGender_ != nullptr;};
        void deleteFaceGender() { this->faceGender_ = nullptr;};
        inline string getFaceGender() const { DARABONBA_PTR_GET_DEFAULT(faceGender_, "") };
        inline ExtFaceInfo& setFaceGender(string faceGender) { DARABONBA_PTR_SET_VALUE(faceGender_, faceGender) };


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


        // occlusionResult Field Functions 
        bool hasOcclusionResult() const { return this->occlusionResult_ != nullptr;};
        void deleteOcclusionResult() { this->occlusionResult_ = nullptr;};
        inline string getOcclusionResult() const { DARABONBA_PTR_GET_DEFAULT(occlusionResult_, "") };
        inline ExtFaceInfo& setOcclusionResult(string occlusionResult) { DARABONBA_PTR_SET_VALUE(occlusionResult_, occlusionResult) };


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


      protected:
        shared_ptr<int64_t> faceAge_ {};
        shared_ptr<string> faceAttack_ {};
        shared_ptr<string> faceGender_ {};
        shared_ptr<double> faceQualityScore_ {};
        shared_ptr<double> illuminationScore_ {};
        shared_ptr<double> kaOcclusionScore_ {};
        shared_ptr<string> occlusionResult_ {};
        shared_ptr<double> occlusionScore_ {};
        shared_ptr<double> sharpnessScore_ {};
      };

      virtual bool empty() const override { return this->extFaceInfo_ == nullptr
        && this->passed_ == nullptr && this->subCode_ == nullptr && this->transactionId_ == nullptr; };
      // extFaceInfo Field Functions 
      bool hasExtFaceInfo() const { return this->extFaceInfo_ != nullptr;};
      void deleteExtFaceInfo() { this->extFaceInfo_ = nullptr;};
      inline const Result::ExtFaceInfo & getExtFaceInfo() const { DARABONBA_PTR_GET_CONST(extFaceInfo_, Result::ExtFaceInfo) };
      inline Result::ExtFaceInfo getExtFaceInfo() { DARABONBA_PTR_GET(extFaceInfo_, Result::ExtFaceInfo) };
      inline Result& setExtFaceInfo(const Result::ExtFaceInfo & extFaceInfo) { DARABONBA_PTR_SET_VALUE(extFaceInfo_, extFaceInfo) };
      inline Result& setExtFaceInfo(Result::ExtFaceInfo && extFaceInfo) { DARABONBA_PTR_SET_RVALUE(extFaceInfo_, extFaceInfo) };


      // passed Field Functions 
      bool hasPassed() const { return this->passed_ != nullptr;};
      void deletePassed() { this->passed_ = nullptr;};
      inline string getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
      inline Result& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


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
      shared_ptr<Result::ExtFaceInfo> extFaceInfo_ {};
      shared_ptr<string> passed_ {};
      shared_ptr<string> subCode_ {};
      shared_ptr<string> transactionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FaceLivenessV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FaceLivenessV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FaceLivenessV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const FaceLivenessV2ResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, FaceLivenessV2ResponseBody::Result) };
    inline FaceLivenessV2ResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, FaceLivenessV2ResponseBody::Result) };
    inline FaceLivenessV2ResponseBody& setResult(const FaceLivenessV2ResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline FaceLivenessV2ResponseBody& setResult(FaceLivenessV2ResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<FaceLivenessV2ResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
