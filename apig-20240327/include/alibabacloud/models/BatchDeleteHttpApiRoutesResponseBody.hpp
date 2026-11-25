// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEHTTPAPIROUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEHTTPAPIROUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataResultsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class BatchDeleteHttpApiRoutesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteHttpApiRoutesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteHttpApiRoutesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    BatchDeleteHttpApiRoutesResponseBody() = default ;
    BatchDeleteHttpApiRoutesResponseBody(const BatchDeleteHttpApiRoutesResponseBody &) = default ;
    BatchDeleteHttpApiRoutesResponseBody(BatchDeleteHttpApiRoutesResponseBody &&) = default ;
    BatchDeleteHttpApiRoutesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteHttpApiRoutesResponseBody() = default ;
    BatchDeleteHttpApiRoutesResponseBody& operator=(const BatchDeleteHttpApiRoutesResponseBody &) = default ;
    BatchDeleteHttpApiRoutesResponseBody& operator=(BatchDeleteHttpApiRoutesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(failedCount, failedCount_);
        DARABONBA_PTR_TO_JSON(results, results_);
        DARABONBA_PTR_TO_JSON(successCount, successCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(failedCount, failedCount_);
        DARABONBA_PTR_FROM_JSON(results, results_);
        DARABONBA_PTR_FROM_JSON(successCount, successCount_);
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
      virtual bool empty() const override { return this->failedCount_ == nullptr
        && this->results_ == nullptr && this->successCount_ == nullptr; };
      // failedCount Field Functions 
      bool hasFailedCount() const { return this->failedCount_ != nullptr;};
      void deleteFailedCount() { this->failedCount_ = nullptr;};
      inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
      inline Data& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const map<string, DataResultsValue> & getResults() const { DARABONBA_PTR_GET_CONST(results_, map<string, DataResultsValue>) };
      inline map<string, DataResultsValue> getResults() { DARABONBA_PTR_GET(results_, map<string, DataResultsValue>) };
      inline Data& setResults(const map<string, DataResultsValue> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(map<string, DataResultsValue> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline Data& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    protected:
      shared_ptr<int32_t> failedCount_ {};
      shared_ptr<map<string, DataResultsValue>> results_ {};
      shared_ptr<int32_t> successCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchDeleteHttpApiRoutesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BatchDeleteHttpApiRoutesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BatchDeleteHttpApiRoutesResponseBody::Data) };
    inline BatchDeleteHttpApiRoutesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BatchDeleteHttpApiRoutesResponseBody::Data) };
    inline BatchDeleteHttpApiRoutesResponseBody& setData(const BatchDeleteHttpApiRoutesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchDeleteHttpApiRoutesResponseBody& setData(BatchDeleteHttpApiRoutesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchDeleteHttpApiRoutesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchDeleteHttpApiRoutesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<BatchDeleteHttpApiRoutesResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
