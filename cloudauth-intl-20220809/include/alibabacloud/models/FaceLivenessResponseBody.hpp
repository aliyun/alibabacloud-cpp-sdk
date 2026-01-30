// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACELIVENESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FACELIVENESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceLivenessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceLivenessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, FaceLivenessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    FaceLivenessResponseBody() = default ;
    FaceLivenessResponseBody(const FaceLivenessResponseBody &) = default ;
    FaceLivenessResponseBody(FaceLivenessResponseBody &&) = default ;
    FaceLivenessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceLivenessResponseBody() = default ;
    FaceLivenessResponseBody& operator=(const FaceLivenessResponseBody &) = default ;
    FaceLivenessResponseBody& operator=(FaceLivenessResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(OcclusionResult, occlusionResult_);
        };
        friend void from_json(const Darabonba::Json& j, ExtFaceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(FaceAge, faceAge_);
          DARABONBA_PTR_FROM_JSON(FaceAttack, faceAttack_);
          DARABONBA_PTR_FROM_JSON(FaceGender, faceGender_);
          DARABONBA_PTR_FROM_JSON(FaceQualityScore, faceQualityScore_);
          DARABONBA_PTR_FROM_JSON(OcclusionResult, occlusionResult_);
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
        && this->faceAttack_ == nullptr && this->faceGender_ == nullptr && this->faceQualityScore_ == nullptr && this->occlusionResult_ == nullptr; };
        // faceAge Field Functions 
        bool hasFaceAge() const { return this->faceAge_ != nullptr;};
        void deleteFaceAge() { this->faceAge_ = nullptr;};
        inline int32_t getFaceAge() const { DARABONBA_PTR_GET_DEFAULT(faceAge_, 0) };
        inline ExtFaceInfo& setFaceAge(int32_t faceAge) { DARABONBA_PTR_SET_VALUE(faceAge_, faceAge) };


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


        // occlusionResult Field Functions 
        bool hasOcclusionResult() const { return this->occlusionResult_ != nullptr;};
        void deleteOcclusionResult() { this->occlusionResult_ = nullptr;};
        inline string getOcclusionResult() const { DARABONBA_PTR_GET_DEFAULT(occlusionResult_, "") };
        inline ExtFaceInfo& setOcclusionResult(string occlusionResult) { DARABONBA_PTR_SET_VALUE(occlusionResult_, occlusionResult) };


      protected:
        // The predicted age of the person in the image. The prediction may fail, resulting in an empty value.
        shared_ptr<int32_t> faceAge_ {};
        // Indicates whether a presentation attack was detected on the captured face. Y means an attack was detected. N means no attack was detected.
        shared_ptr<string> faceAttack_ {};
        // The predicted gender of the person in the image. The prediction may fail, resulting in an empty value.
        // 
        // - **M**: Male
        // 
        // - **F**: Female
        shared_ptr<string> faceGender_ {};
        // Optional. The quality score of the live face. The value ranges from 0 to 100.
        shared_ptr<double> faceQualityScore_ {};
        // Optional. Indicates whether the face is occluded. Y means the face is occluded. N means the face is not occluded.
        shared_ptr<string> occlusionResult_ {};
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
      // The results of the passive liveness detection. The value is in the JSON format. For more information, see [ExtFaceInfo](https://www.alibabacloud.com/help/en/ekyc/latest/cadqvlft48igbpdc?spm=a2c63.p38356.0.i54#5ff42f7274agz).
      shared_ptr<Result::ExtFaceInfo> extFaceInfo_ {};
      // The authentication result. Valid values:
      // 
      // - Y: The authentication is passed.
      // 
      // - N: The authentication is not passed.
      shared_ptr<string> passed_ {};
      // The code that corresponds to the verification result. For more information, see [ResultObject.SubCode error codes](https://www.alibabacloud.com/help/en/ekyc/latest/cadqvlft48igbpdc?spm=a2c63.p38356.0.i54#5ff3e16174tl2).
      shared_ptr<string> subCode_ {};
      // The transaction ID.
      shared_ptr<string> transactionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FaceLivenessResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FaceLivenessResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FaceLivenessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const FaceLivenessResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, FaceLivenessResponseBody::Result) };
    inline FaceLivenessResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, FaceLivenessResponseBody::Result) };
    inline FaceLivenessResponseBody& setResult(const FaceLivenessResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline FaceLivenessResponseBody& setResult(FaceLivenessResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // [The response code.](https://www.alibabacloud.com/help/en/ekyc/latest/cadqvlft48igbpdc?spm=a2c63.p38356.0.i54#3d0ed52f967g6)
    shared_ptr<string> code_ {};
    // A detailed description of the response code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Result object
    shared_ptr<FaceLivenessResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
