// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOFFLINETASKERRORLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOFFLINETASKERRORLOGSRESPONSEBODY_HPP_
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
  class ListOfflineTaskErrorLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOfflineTaskErrorLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOfflineTaskErrorLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListOfflineTaskErrorLogsResponseBody() = default ;
    ListOfflineTaskErrorLogsResponseBody(const ListOfflineTaskErrorLogsResponseBody &) = default ;
    ListOfflineTaskErrorLogsResponseBody(ListOfflineTaskErrorLogsResponseBody &&) = default ;
    ListOfflineTaskErrorLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOfflineTaskErrorLogsResponseBody() = default ;
    ListOfflineTaskErrorLogsResponseBody& operator=(const ListOfflineTaskErrorLogsResponseBody &) = default ;
    ListOfflineTaskErrorLogsResponseBody& operator=(ListOfflineTaskErrorLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(request, request_);
        DARABONBA_PTR_TO_JSON(response, response_);
        DARABONBA_PTR_TO_JSON(retry, retry_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(request, request_);
        DARABONBA_PTR_FROM_JSON(response, response_);
        DARABONBA_PTR_FROM_JSON(retry, retry_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
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
      virtual bool empty() const override { return this->request_ == nullptr
        && this->response_ == nullptr && this->retry_ == nullptr && this->timestamp_ == nullptr; };
      // request Field Functions 
      bool hasRequest() const { return this->request_ != nullptr;};
      void deleteRequest() { this->request_ = nullptr;};
      inline string getRequest() const { DARABONBA_PTR_GET_DEFAULT(request_, "") };
      inline Result& setRequest(string request) { DARABONBA_PTR_SET_VALUE(request_, request) };


      // response Field Functions 
      bool hasResponse() const { return this->response_ != nullptr;};
      void deleteResponse() { this->response_ = nullptr;};
      inline string getResponse() const { DARABONBA_PTR_GET_DEFAULT(response_, "") };
      inline Result& setResponse(string response) { DARABONBA_PTR_SET_VALUE(response_, response) };


      // retry Field Functions 
      bool hasRetry() const { return this->retry_ != nullptr;};
      void deleteRetry() { this->retry_ = nullptr;};
      inline string getRetry() const { DARABONBA_PTR_GET_DEFAULT(retry_, "") };
      inline Result& setRetry(string retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline Result& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // **The log request body.**
      shared_ptr<string> request_ {};
      // **The log response.**
      shared_ptr<string> response_ {};
      // **The number of retries.**
      shared_ptr<string> retry_ {};
      // **The timestamp.**
      shared_ptr<string> timestamp_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOfflineTaskErrorLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListOfflineTaskErrorLogsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListOfflineTaskErrorLogsResponseBody::Result>) };
    inline vector<ListOfflineTaskErrorLogsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListOfflineTaskErrorLogsResponseBody::Result>) };
    inline ListOfflineTaskErrorLogsResponseBody& setResult(const vector<ListOfflineTaskErrorLogsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListOfflineTaskErrorLogsResponseBody& setResult(vector<ListOfflineTaskErrorLogsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOfflineTaskErrorLogsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The collection of log request bodies, log responses, retry counts, and timestamps.
    shared_ptr<vector<ListOfflineTaskErrorLogsResponseBody::Result>> result_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
