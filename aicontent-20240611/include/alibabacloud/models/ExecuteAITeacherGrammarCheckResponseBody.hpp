// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEAITEACHERGRAMMARCHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEAITEACHERGRAMMARCHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ExecuteAITeacherGrammarCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAITeacherGrammarCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAITeacherGrammarCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ExecuteAITeacherGrammarCheckResponseBody() = default ;
    ExecuteAITeacherGrammarCheckResponseBody(const ExecuteAITeacherGrammarCheckResponseBody &) = default ;
    ExecuteAITeacherGrammarCheckResponseBody(ExecuteAITeacherGrammarCheckResponseBody &&) = default ;
    ExecuteAITeacherGrammarCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAITeacherGrammarCheckResponseBody() = default ;
    ExecuteAITeacherGrammarCheckResponseBody& operator=(const ExecuteAITeacherGrammarCheckResponseBody &) = default ;
    ExecuteAITeacherGrammarCheckResponseBody& operator=(ExecuteAITeacherGrammarCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(analysis, analysis_);
        DARABONBA_PTR_TO_JSON(correction, correction_);
        DARABONBA_PTR_TO_JSON(correctionStatus, correctionStatus_);
        DARABONBA_PTR_TO_JSON(errorReason, errorReason_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(analysis, analysis_);
        DARABONBA_PTR_FROM_JSON(correction, correction_);
        DARABONBA_PTR_FROM_JSON(correctionStatus, correctionStatus_);
        DARABONBA_PTR_FROM_JSON(errorReason, errorReason_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->analysis_ == nullptr
        && this->correction_ == nullptr && this->correctionStatus_ == nullptr && this->errorReason_ == nullptr; };
      // analysis Field Functions 
      bool hasAnalysis() const { return this->analysis_ != nullptr;};
      void deleteAnalysis() { this->analysis_ = nullptr;};
      inline string getAnalysis() const { DARABONBA_PTR_GET_DEFAULT(analysis_, "") };
      inline Data& setAnalysis(string analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };


      // correction Field Functions 
      bool hasCorrection() const { return this->correction_ != nullptr;};
      void deleteCorrection() { this->correction_ = nullptr;};
      inline string getCorrection() const { DARABONBA_PTR_GET_DEFAULT(correction_, "") };
      inline Data& setCorrection(string correction) { DARABONBA_PTR_SET_VALUE(correction_, correction) };


      // correctionStatus Field Functions 
      bool hasCorrectionStatus() const { return this->correctionStatus_ != nullptr;};
      void deleteCorrectionStatus() { this->correctionStatus_ = nullptr;};
      inline string getCorrectionStatus() const { DARABONBA_PTR_GET_DEFAULT(correctionStatus_, "") };
      inline Data& setCorrectionStatus(string correctionStatus) { DARABONBA_PTR_SET_VALUE(correctionStatus_, correctionStatus) };


      // errorReason Field Functions 
      bool hasErrorReason() const { return this->errorReason_ != nullptr;};
      void deleteErrorReason() { this->errorReason_ = nullptr;};
      inline string getErrorReason() const { DARABONBA_PTR_GET_DEFAULT(errorReason_, "") };
      inline Data& setErrorReason(string errorReason) { DARABONBA_PTR_SET_VALUE(errorReason_, errorReason) };


    protected:
      shared_ptr<string> analysis_ {};
      shared_ptr<string> correction_ {};
      shared_ptr<string> correctionStatus_ {};
      shared_ptr<string> errorReason_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExecuteAITeacherGrammarCheckResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ExecuteAITeacherGrammarCheckResponseBody::Data) };
    inline ExecuteAITeacherGrammarCheckResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ExecuteAITeacherGrammarCheckResponseBody::Data) };
    inline ExecuteAITeacherGrammarCheckResponseBody& setData(const ExecuteAITeacherGrammarCheckResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExecuteAITeacherGrammarCheckResponseBody& setData(ExecuteAITeacherGrammarCheckResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ExecuteAITeacherGrammarCheckResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ExecuteAITeacherGrammarCheckResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ExecuteAITeacherGrammarCheckResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteAITeacherGrammarCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExecuteAITeacherGrammarCheckResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ExecuteAITeacherGrammarCheckResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
