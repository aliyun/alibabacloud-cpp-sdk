// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TESTMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class TestModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TestModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TestModelResponseBody() = default ;
    TestModelResponseBody(const TestModelResponseBody &) = default ;
    TestModelResponseBody(TestModelResponseBody &&) = default ;
    TestModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestModelResponseBody() = default ;
    TestModelResponseBody& operator=(const TestModelResponseBody &) = default ;
    TestModelResponseBody& operator=(TestModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(ConsistencyCount, consistencyCount_);
        DARABONBA_PTR_TO_JSON(ConsistencyRate, consistencyRate_);
        DARABONBA_PTR_TO_JSON(TestResult, testResult_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsistencyCount, consistencyCount_);
        DARABONBA_PTR_FROM_JSON(ConsistencyRate, consistencyRate_);
        DARABONBA_PTR_FROM_JSON(TestResult, testResult_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TestResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TestResult& obj) { 
          DARABONBA_PTR_TO_JSON(ActualResult, actualResult_);
          DARABONBA_PTR_TO_JSON(Consistency, consistency_);
          DARABONBA_PTR_TO_JSON(TestResult, testResult_);
          DARABONBA_PTR_TO_JSON(TrainResult, trainResult_);
        };
        friend void from_json(const Darabonba::Json& j, TestResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ActualResult, actualResult_);
          DARABONBA_PTR_FROM_JSON(Consistency, consistency_);
          DARABONBA_PTR_FROM_JSON(TestResult, testResult_);
          DARABONBA_PTR_FROM_JSON(TrainResult, trainResult_);
        };
        TestResult() = default ;
        TestResult(const TestResult &) = default ;
        TestResult(TestResult &&) = default ;
        TestResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TestResult() = default ;
        TestResult& operator=(const TestResult &) = default ;
        TestResult& operator=(TestResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actualResult_ == nullptr
        && this->consistency_ == nullptr && this->testResult_ == nullptr && this->trainResult_ == nullptr; };
        // actualResult Field Functions 
        bool hasActualResult() const { return this->actualResult_ != nullptr;};
        void deleteActualResult() { this->actualResult_ = nullptr;};
        inline string getActualResult() const { DARABONBA_PTR_GET_DEFAULT(actualResult_, "") };
        inline TestResult& setActualResult(string actualResult) { DARABONBA_PTR_SET_VALUE(actualResult_, actualResult) };


        // consistency Field Functions 
        bool hasConsistency() const { return this->consistency_ != nullptr;};
        void deleteConsistency() { this->consistency_ = nullptr;};
        inline bool getConsistency() const { DARABONBA_PTR_GET_DEFAULT(consistency_, false) };
        inline TestResult& setConsistency(bool consistency) { DARABONBA_PTR_SET_VALUE(consistency_, consistency) };


        // testResult Field Functions 
        bool hasTestResult() const { return this->testResult_ != nullptr;};
        void deleteTestResult() { this->testResult_ = nullptr;};
        inline string getTestResult() const { DARABONBA_PTR_GET_DEFAULT(testResult_, "") };
        inline TestResult& setTestResult(string testResult) { DARABONBA_PTR_SET_VALUE(testResult_, testResult) };


        // trainResult Field Functions 
        bool hasTrainResult() const { return this->trainResult_ != nullptr;};
        void deleteTrainResult() { this->trainResult_ = nullptr;};
        inline string getTrainResult() const { DARABONBA_PTR_GET_DEFAULT(trainResult_, "") };
        inline TestResult& setTrainResult(string trainResult) { DARABONBA_PTR_SET_VALUE(trainResult_, trainResult) };


      protected:
        shared_ptr<string> actualResult_ {};
        shared_ptr<bool> consistency_ {};
        shared_ptr<string> testResult_ {};
        shared_ptr<string> trainResult_ {};
      };

      virtual bool empty() const override { return this->consistencyCount_ == nullptr
        && this->consistencyRate_ == nullptr && this->testResult_ == nullptr && this->total_ == nullptr; };
      // consistencyCount Field Functions 
      bool hasConsistencyCount() const { return this->consistencyCount_ != nullptr;};
      void deleteConsistencyCount() { this->consistencyCount_ = nullptr;};
      inline int64_t getConsistencyCount() const { DARABONBA_PTR_GET_DEFAULT(consistencyCount_, 0L) };
      inline ResultObject& setConsistencyCount(int64_t consistencyCount) { DARABONBA_PTR_SET_VALUE(consistencyCount_, consistencyCount) };


      // consistencyRate Field Functions 
      bool hasConsistencyRate() const { return this->consistencyRate_ != nullptr;};
      void deleteConsistencyRate() { this->consistencyRate_ = nullptr;};
      inline double getConsistencyRate() const { DARABONBA_PTR_GET_DEFAULT(consistencyRate_, 0.0) };
      inline ResultObject& setConsistencyRate(double consistencyRate) { DARABONBA_PTR_SET_VALUE(consistencyRate_, consistencyRate) };


      // testResult Field Functions 
      bool hasTestResult() const { return this->testResult_ != nullptr;};
      void deleteTestResult() { this->testResult_ = nullptr;};
      inline const vector<ResultObject::TestResult> & getTestResult() const { DARABONBA_PTR_GET_CONST(testResult_, vector<ResultObject::TestResult>) };
      inline vector<ResultObject::TestResult> getTestResult() { DARABONBA_PTR_GET(testResult_, vector<ResultObject::TestResult>) };
      inline ResultObject& setTestResult(const vector<ResultObject::TestResult> & testResult) { DARABONBA_PTR_SET_VALUE(testResult_, testResult) };
      inline ResultObject& setTestResult(vector<ResultObject::TestResult> && testResult) { DARABONBA_PTR_SET_RVALUE(testResult_, testResult) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline ResultObject& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int64_t> consistencyCount_ {};
      shared_ptr<double> consistencyRate_ {};
      shared_ptr<vector<ResultObject::TestResult>> testResult_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline TestModelResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline TestModelResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TestModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const TestModelResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, TestModelResponseBody::ResultObject) };
    inline TestModelResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, TestModelResponseBody::ResultObject) };
    inline TestModelResponseBody& setResultObject(const TestModelResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline TestModelResponseBody& setResultObject(TestModelResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TestModelResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<int64_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<TestModelResponseBody::ResultObject> resultObject_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
