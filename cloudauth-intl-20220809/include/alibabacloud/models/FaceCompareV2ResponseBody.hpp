// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACECOMPAREV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FACECOMPAREV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceCompareV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceCompareV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, FaceCompareV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    FaceCompareV2ResponseBody() = default ;
    FaceCompareV2ResponseBody(const FaceCompareV2ResponseBody &) = default ;
    FaceCompareV2ResponseBody(FaceCompareV2ResponseBody &&) = default ;
    FaceCompareV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceCompareV2ResponseBody() = default ;
    FaceCompareV2ResponseBody& operator=(const FaceCompareV2ResponseBody &) = default ;
    FaceCompareV2ResponseBody& operator=(FaceCompareV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(FaceComparisonScore, faceComparisonScore_);
        DARABONBA_PTR_TO_JSON(Passed, passed_);
        DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(FaceComparisonScore, faceComparisonScore_);
        DARABONBA_PTR_FROM_JSON(Passed, passed_);
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
      virtual bool empty() const override { return this->faceComparisonScore_ == nullptr
        && this->passed_ == nullptr && this->transactionId_ == nullptr; };
      // faceComparisonScore Field Functions 
      bool hasFaceComparisonScore() const { return this->faceComparisonScore_ != nullptr;};
      void deleteFaceComparisonScore() { this->faceComparisonScore_ = nullptr;};
      inline double getFaceComparisonScore() const { DARABONBA_PTR_GET_DEFAULT(faceComparisonScore_, 0.0) };
      inline Result& setFaceComparisonScore(double faceComparisonScore) { DARABONBA_PTR_SET_VALUE(faceComparisonScore_, faceComparisonScore) };


      // passed Field Functions 
      bool hasPassed() const { return this->passed_ != nullptr;};
      void deletePassed() { this->passed_ = nullptr;};
      inline string getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
      inline Result& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


      // transactionId Field Functions 
      bool hasTransactionId() const { return this->transactionId_ != nullptr;};
      void deleteTransactionId() { this->transactionId_ = nullptr;};
      inline string getTransactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
      inline Result& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


    protected:
      shared_ptr<double> faceComparisonScore_ {};
      shared_ptr<string> passed_ {};
      shared_ptr<string> transactionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FaceCompareV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FaceCompareV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FaceCompareV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const FaceCompareV2ResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, FaceCompareV2ResponseBody::Result) };
    inline FaceCompareV2ResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, FaceCompareV2ResponseBody::Result) };
    inline FaceCompareV2ResponseBody& setResult(const FaceCompareV2ResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline FaceCompareV2ResponseBody& setResult(FaceCompareV2ResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<FaceCompareV2ResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
