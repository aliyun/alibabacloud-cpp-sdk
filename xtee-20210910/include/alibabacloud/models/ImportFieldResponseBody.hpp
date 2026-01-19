// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTFIELDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTFIELDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ImportFieldResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportFieldResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ImportFieldResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ImportFieldResponseBody() = default ;
    ImportFieldResponseBody(const ImportFieldResponseBody &) = default ;
    ImportFieldResponseBody(ImportFieldResponseBody &&) = default ;
    ImportFieldResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportFieldResponseBody() = default ;
    ImportFieldResponseBody& operator=(const ImportFieldResponseBody &) = default ;
    ImportFieldResponseBody& operator=(ImportFieldResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(FailFieldNames, failFieldNames_);
        DARABONBA_PTR_TO_JSON(SuccessNum, successNum_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(FailFieldNames, failFieldNames_);
        DARABONBA_PTR_FROM_JSON(SuccessNum, successNum_);
        DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
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
      virtual bool empty() const override { return this->failFieldNames_ == nullptr
        && this->successNum_ == nullptr && this->totalNum_ == nullptr; };
      // failFieldNames Field Functions 
      bool hasFailFieldNames() const { return this->failFieldNames_ != nullptr;};
      void deleteFailFieldNames() { this->failFieldNames_ = nullptr;};
      inline string getFailFieldNames() const { DARABONBA_PTR_GET_DEFAULT(failFieldNames_, "") };
      inline ResultObject& setFailFieldNames(string failFieldNames) { DARABONBA_PTR_SET_VALUE(failFieldNames_, failFieldNames) };


      // successNum Field Functions 
      bool hasSuccessNum() const { return this->successNum_ != nullptr;};
      void deleteSuccessNum() { this->successNum_ = nullptr;};
      inline int32_t getSuccessNum() const { DARABONBA_PTR_GET_DEFAULT(successNum_, 0) };
      inline ResultObject& setSuccessNum(int32_t successNum) { DARABONBA_PTR_SET_VALUE(successNum_, successNum) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
      inline ResultObject& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    protected:
      // Names of fields that failed to upload
      shared_ptr<string> failFieldNames_ {};
      // Number of successful executions.
      shared_ptr<int32_t> successNum_ {};
      // Total number of records.
      shared_ptr<int32_t> totalNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ImportFieldResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline ImportFieldResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ImportFieldResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportFieldResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const ImportFieldResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, ImportFieldResponseBody::ResultObject) };
    inline ImportFieldResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, ImportFieldResponseBody::ResultObject) };
    inline ImportFieldResponseBody& setResultObject(const ImportFieldResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline ImportFieldResponseBody& setResultObject(ImportFieldResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ImportFieldResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // API status code.
    shared_ptr<string> code_ {};
    // HTTP status code
    shared_ptr<string> httpStatusCode_ {};
    // Error message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned result
    shared_ptr<ImportFieldResponseBody::ResultObject> resultObject_ {};
    // Indicator of whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
