// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMERMODULEOUTPUTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMERMODULEOUTPUTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class DescribeCustomerModuleOutputInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomerModuleOutputInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomerModuleOutputInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCustomerModuleOutputInfoResponseBody() = default ;
    DescribeCustomerModuleOutputInfoResponseBody(const DescribeCustomerModuleOutputInfoResponseBody &) = default ;
    DescribeCustomerModuleOutputInfoResponseBody(DescribeCustomerModuleOutputInfoResponseBody &&) = default ;
    DescribeCustomerModuleOutputInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomerModuleOutputInfoResponseBody() = default ;
    DescribeCustomerModuleOutputInfoResponseBody& operator=(const DescribeCustomerModuleOutputInfoResponseBody &) = default ;
    DescribeCustomerModuleOutputInfoResponseBody& operator=(DescribeCustomerModuleOutputInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(FinalScoreFormat, finalScoreFormat_);
        DARABONBA_PTR_TO_JSON(ProcessExpression, processExpression_);
        DARABONBA_PTR_TO_JSON(TestFile, testFile_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(FinalScoreFormat, finalScoreFormat_);
        DARABONBA_PTR_FROM_JSON(ProcessExpression, processExpression_);
        DARABONBA_PTR_FROM_JSON(TestFile, testFile_);
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
      virtual bool empty() const override { return this->finalScoreFormat_ == nullptr
        && this->processExpression_ == nullptr && this->testFile_ == nullptr; };
      // finalScoreFormat Field Functions 
      bool hasFinalScoreFormat() const { return this->finalScoreFormat_ != nullptr;};
      void deleteFinalScoreFormat() { this->finalScoreFormat_ = nullptr;};
      inline string getFinalScoreFormat() const { DARABONBA_PTR_GET_DEFAULT(finalScoreFormat_, "") };
      inline ResultObject& setFinalScoreFormat(string finalScoreFormat) { DARABONBA_PTR_SET_VALUE(finalScoreFormat_, finalScoreFormat) };


      // processExpression Field Functions 
      bool hasProcessExpression() const { return this->processExpression_ != nullptr;};
      void deleteProcessExpression() { this->processExpression_ = nullptr;};
      inline string getProcessExpression() const { DARABONBA_PTR_GET_DEFAULT(processExpression_, "") };
      inline ResultObject& setProcessExpression(string processExpression) { DARABONBA_PTR_SET_VALUE(processExpression_, processExpression) };


      // testFile Field Functions 
      bool hasTestFile() const { return this->testFile_ != nullptr;};
      void deleteTestFile() { this->testFile_ = nullptr;};
      inline string getTestFile() const { DARABONBA_PTR_GET_DEFAULT(testFile_, "") };
      inline ResultObject& setTestFile(string testFile) { DARABONBA_PTR_SET_VALUE(testFile_, testFile) };


    protected:
      // Number of decimal places for the output.
      shared_ptr<string> finalScoreFormat_ {};
      // Score processing logic.
      shared_ptr<string> processExpression_ {};
      // Test file.
      shared_ptr<string> testFile_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeCustomerModuleOutputInfoResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline DescribeCustomerModuleOutputInfoResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCustomerModuleOutputInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomerModuleOutputInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeCustomerModuleOutputInfoResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeCustomerModuleOutputInfoResponseBody::ResultObject) };
    inline DescribeCustomerModuleOutputInfoResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeCustomerModuleOutputInfoResponseBody::ResultObject) };
    inline DescribeCustomerModuleOutputInfoResponseBody& setResultObject(const DescribeCustomerModuleOutputInfoResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeCustomerModuleOutputInfoResponseBody& setResultObject(DescribeCustomerModuleOutputInfoResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCustomerModuleOutputInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status code. A return value of 200 indicates success.
    shared_ptr<int64_t> code_ {};
    // HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Returned result.
    shared_ptr<DescribeCustomerModuleOutputInfoResponseBody::ResultObject> resultObject_ {};
    // Indicates whether the request was successful, with possible values as follows:
    // - true, indicating the request was successful
    // - false, indicating the request failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
