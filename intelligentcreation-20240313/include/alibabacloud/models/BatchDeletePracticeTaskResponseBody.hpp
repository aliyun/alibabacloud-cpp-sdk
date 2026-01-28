// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEPRACTICETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEPRACTICETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchDeletePracticeTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeletePracticeTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(results, results_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeletePracticeTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(results, results_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    BatchDeletePracticeTaskResponseBody() = default ;
    BatchDeletePracticeTaskResponseBody(const BatchDeletePracticeTaskResponseBody &) = default ;
    BatchDeletePracticeTaskResponseBody(BatchDeletePracticeTaskResponseBody &&) = default ;
    BatchDeletePracticeTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeletePracticeTaskResponseBody() = default ;
    BatchDeletePracticeTaskResponseBody& operator=(const BatchDeletePracticeTaskResponseBody &) = default ;
    BatchDeletePracticeTaskResponseBody& operator=(BatchDeletePracticeTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->taskId_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Results& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Results& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> message_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline BatchDeletePracticeTaskResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline BatchDeletePracticeTaskResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchDeletePracticeTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<BatchDeletePracticeTaskResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<BatchDeletePracticeTaskResponseBody::Results>) };
    inline vector<BatchDeletePracticeTaskResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<BatchDeletePracticeTaskResponseBody::Results>) };
    inline BatchDeletePracticeTaskResponseBody& setResults(const vector<BatchDeletePracticeTaskResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchDeletePracticeTaskResponseBody& setResults(vector<BatchDeletePracticeTaskResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchDeletePracticeTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<BatchDeletePracticeTaskResponseBody::Results>> results_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
