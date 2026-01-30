// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACECROSSCOMPAREINTLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FACECROSSCOMPAREINTLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceCrossCompareIntlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceCrossCompareIntlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, FaceCrossCompareIntlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    FaceCrossCompareIntlResponseBody() = default ;
    FaceCrossCompareIntlResponseBody(const FaceCrossCompareIntlResponseBody &) = default ;
    FaceCrossCompareIntlResponseBody(FaceCrossCompareIntlResponseBody &&) = default ;
    FaceCrossCompareIntlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceCrossCompareIntlResponseBody() = default ;
    FaceCrossCompareIntlResponseBody& operator=(const FaceCrossCompareIntlResponseBody &) = default ;
    FaceCrossCompareIntlResponseBody& operator=(FaceCrossCompareIntlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(FaceComparisonScoreA2B, faceComparisonScoreA2B_);
        DARABONBA_PTR_TO_JSON(FaceComparisonScoreB2C, faceComparisonScoreB2C_);
        DARABONBA_PTR_TO_JSON(FaceComparisonScoreC2A, faceComparisonScoreC2A_);
        DARABONBA_PTR_TO_JSON(FacePassed, facePassed_);
        DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(FaceComparisonScoreA2B, faceComparisonScoreA2B_);
        DARABONBA_PTR_FROM_JSON(FaceComparisonScoreB2C, faceComparisonScoreB2C_);
        DARABONBA_PTR_FROM_JSON(FaceComparisonScoreC2A, faceComparisonScoreC2A_);
        DARABONBA_PTR_FROM_JSON(FacePassed, facePassed_);
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
      virtual bool empty() const override { return this->faceComparisonScoreA2B_ == nullptr
        && this->faceComparisonScoreB2C_ == nullptr && this->faceComparisonScoreC2A_ == nullptr && this->facePassed_ == nullptr && this->transactionId_ == nullptr; };
      // faceComparisonScoreA2B Field Functions 
      bool hasFaceComparisonScoreA2B() const { return this->faceComparisonScoreA2B_ != nullptr;};
      void deleteFaceComparisonScoreA2B() { this->faceComparisonScoreA2B_ = nullptr;};
      inline double getFaceComparisonScoreA2B() const { DARABONBA_PTR_GET_DEFAULT(faceComparisonScoreA2B_, 0.0) };
      inline Result& setFaceComparisonScoreA2B(double faceComparisonScoreA2B) { DARABONBA_PTR_SET_VALUE(faceComparisonScoreA2B_, faceComparisonScoreA2B) };


      // faceComparisonScoreB2C Field Functions 
      bool hasFaceComparisonScoreB2C() const { return this->faceComparisonScoreB2C_ != nullptr;};
      void deleteFaceComparisonScoreB2C() { this->faceComparisonScoreB2C_ = nullptr;};
      inline double getFaceComparisonScoreB2C() const { DARABONBA_PTR_GET_DEFAULT(faceComparisonScoreB2C_, 0.0) };
      inline Result& setFaceComparisonScoreB2C(double faceComparisonScoreB2C) { DARABONBA_PTR_SET_VALUE(faceComparisonScoreB2C_, faceComparisonScoreB2C) };


      // faceComparisonScoreC2A Field Functions 
      bool hasFaceComparisonScoreC2A() const { return this->faceComparisonScoreC2A_ != nullptr;};
      void deleteFaceComparisonScoreC2A() { this->faceComparisonScoreC2A_ = nullptr;};
      inline double getFaceComparisonScoreC2A() const { DARABONBA_PTR_GET_DEFAULT(faceComparisonScoreC2A_, 0.0) };
      inline Result& setFaceComparisonScoreC2A(double faceComparisonScoreC2A) { DARABONBA_PTR_SET_VALUE(faceComparisonScoreC2A_, faceComparisonScoreC2A) };


      // facePassed Field Functions 
      bool hasFacePassed() const { return this->facePassed_ != nullptr;};
      void deleteFacePassed() { this->facePassed_ = nullptr;};
      inline string getFacePassed() const { DARABONBA_PTR_GET_DEFAULT(facePassed_, "") };
      inline Result& setFacePassed(string facePassed) { DARABONBA_PTR_SET_VALUE(facePassed_, facePassed) };


      // transactionId Field Functions 
      bool hasTransactionId() const { return this->transactionId_ != nullptr;};
      void deleteTransactionId() { this->transactionId_ = nullptr;};
      inline string getTransactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
      inline Result& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


    protected:
      // A to B comparison score, range 0～100.
      shared_ptr<double> faceComparisonScoreA2B_ {};
      // B to C comparison score, range 0～100.
      shared_ptr<double> faceComparisonScoreB2C_ {};
      // C to A comparison score, range 0～100.
      shared_ptr<double> faceComparisonScoreC2A_ {};
      // Final verification result, values:
      // - Y: Pass
      // - N: Fail
      shared_ptr<string> facePassed_ {};
      // Unique identifier for the authentication request.
      shared_ptr<string> transactionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FaceCrossCompareIntlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FaceCrossCompareIntlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FaceCrossCompareIntlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const FaceCrossCompareIntlResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, FaceCrossCompareIntlResponseBody::Result) };
    inline FaceCrossCompareIntlResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, FaceCrossCompareIntlResponseBody::Result) };
    inline FaceCrossCompareIntlResponseBody& setResult(const FaceCrossCompareIntlResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline FaceCrossCompareIntlResponseBody& setResult(FaceCrossCompareIntlResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Return code.
    shared_ptr<string> code_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Return result.
    shared_ptr<FaceCrossCompareIntlResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
