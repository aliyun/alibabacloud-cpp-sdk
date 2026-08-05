// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONRESTRICTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONRESTRICTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ListFunctionRestrictionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionRestrictionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(latency, latency_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionRestrictionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(latency, latency_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListFunctionRestrictionsResponseBody() = default ;
    ListFunctionRestrictionsResponseBody(const ListFunctionRestrictionsResponseBody &) = default ;
    ListFunctionRestrictionsResponseBody(ListFunctionRestrictionsResponseBody &&) = default ;
    ListFunctionRestrictionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionRestrictionsResponseBody() = default ;
    ListFunctionRestrictionsResponseBody& operator=(const ListFunctionRestrictionsResponseBody &) = default ;
    ListFunctionRestrictionsResponseBody& operator=(ListFunctionRestrictionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_ANY_TO_JSON(meta, meta_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_ANY_FROM_JSON(meta, meta_);
        DARABONBA_PTR_FROM_JSON(name, name_);
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
      virtual bool empty() const override { return this->meta_ == nullptr
        && this->name_ == nullptr; };
      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline       const Darabonba::Json & getMeta() const { DARABONBA_GET(meta_) };
      Darabonba::Json & getMeta() { DARABONBA_GET(meta_) };
      inline Result& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
      inline Result& setMeta(Darabonba::Json && meta) { DARABONBA_SET_RVALUE(meta_, meta) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The metadata.
      Darabonba::Json meta_ {};
      // The rule name.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpCode_ == nullptr && this->latency_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr
        && this->status_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListFunctionRestrictionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int64_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0L) };
    inline ListFunctionRestrictionsResponseBody& setHttpCode(int64_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // latency Field Functions 
    bool hasLatency() const { return this->latency_ != nullptr;};
    void deleteLatency() { this->latency_ = nullptr;};
    inline double getLatency() const { DARABONBA_PTR_GET_DEFAULT(latency_, 0.0) };
    inline ListFunctionRestrictionsResponseBody& setLatency(double latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListFunctionRestrictionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFunctionRestrictionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListFunctionRestrictionsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListFunctionRestrictionsResponseBody::Result>) };
    inline vector<ListFunctionRestrictionsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListFunctionRestrictionsResponseBody::Result>) };
    inline ListFunctionRestrictionsResponseBody& setResult(const vector<ListFunctionRestrictionsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListFunctionRestrictionsResponseBody& setResult(vector<ListFunctionRestrictionsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFunctionRestrictionsResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListFunctionRestrictionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpCode_ {};
    // The execution duration.
    shared_ptr<double> latency_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<vector<ListFunctionRestrictionsResponseBody::Result>> result_ {};
    // The request status.
    shared_ptr<string> status_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
