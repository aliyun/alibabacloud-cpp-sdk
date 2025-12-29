// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTITYSTOREDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETENTITYSTOREDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetEntityStoreDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEntityStoreDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(responseStatus, responseStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetEntityStoreDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(responseStatus, responseStatus_);
    };
    GetEntityStoreDataResponseBody() = default ;
    GetEntityStoreDataResponseBody(const GetEntityStoreDataResponseBody &) = default ;
    GetEntityStoreDataResponseBody(GetEntityStoreDataResponseBody &&) = default ;
    GetEntityStoreDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEntityStoreDataResponseBody() = default ;
    GetEntityStoreDataResponseBody& operator=(const GetEntityStoreDataResponseBody &) = default ;
    GetEntityStoreDataResponseBody& operator=(GetEntityStoreDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResponseStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResponseStatus& obj) { 
        DARABONBA_PTR_TO_JSON(executionStates, executionStates_);
        DARABONBA_PTR_TO_JSON(level, level_);
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(retryPolicy, retryPolicy_);
        DARABONBA_PTR_TO_JSON(statusItem, statusItem_);
      };
      friend void from_json(const Darabonba::Json& j, ResponseStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(executionStates, executionStates_);
        DARABONBA_PTR_FROM_JSON(level, level_);
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(retryPolicy, retryPolicy_);
        DARABONBA_PTR_FROM_JSON(statusItem, statusItem_);
      };
      ResponseStatus() = default ;
      ResponseStatus(const ResponseStatus &) = default ;
      ResponseStatus(ResponseStatus &&) = default ;
      ResponseStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResponseStatus() = default ;
      ResponseStatus& operator=(const ResponseStatus &) = default ;
      ResponseStatus& operator=(ResponseStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StatusItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StatusItem& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(level, level_);
          DARABONBA_PTR_TO_JSON(message, message_);
          DARABONBA_PTR_TO_JSON(suggestion, suggestion_);
        };
        friend void from_json(const Darabonba::Json& j, StatusItem& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(level, level_);
          DARABONBA_PTR_FROM_JSON(message, message_);
          DARABONBA_PTR_FROM_JSON(suggestion, suggestion_);
        };
        StatusItem() = default ;
        StatusItem(const StatusItem &) = default ;
        StatusItem(StatusItem &&) = default ;
        StatusItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StatusItem() = default ;
        StatusItem& operator=(const StatusItem &) = default ;
        StatusItem& operator=(StatusItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->level_ == nullptr && this->message_ == nullptr && this->suggestion_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline StatusItem& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline StatusItem& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline StatusItem& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline StatusItem& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      protected:
        // Status code
        shared_ptr<string> code_ {};
        // Status level
        shared_ptr<string> level_ {};
        // Calculation execution information
        shared_ptr<string> message_ {};
        // Suggestions when an error occurs during execution
        shared_ptr<string> suggestion_ {};
      };

      virtual bool empty() const override { return this->executionStates_ == nullptr
        && this->level_ == nullptr && this->result_ == nullptr && this->retryPolicy_ == nullptr && this->statusItem_ == nullptr; };
      // executionStates Field Functions 
      bool hasExecutionStates() const { return this->executionStates_ != nullptr;};
      void deleteExecutionStates() { this->executionStates_ = nullptr;};
      inline string getExecutionStates() const { DARABONBA_PTR_GET_DEFAULT(executionStates_, "") };
      inline ResponseStatus& setExecutionStates(string executionStates) { DARABONBA_PTR_SET_VALUE(executionStates_, executionStates) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline ResponseStatus& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline ResponseStatus& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // retryPolicy Field Functions 
      bool hasRetryPolicy() const { return this->retryPolicy_ != nullptr;};
      void deleteRetryPolicy() { this->retryPolicy_ = nullptr;};
      inline string getRetryPolicy() const { DARABONBA_PTR_GET_DEFAULT(retryPolicy_, "") };
      inline ResponseStatus& setRetryPolicy(string retryPolicy) { DARABONBA_PTR_SET_VALUE(retryPolicy_, retryPolicy) };


      // statusItem Field Functions 
      bool hasStatusItem() const { return this->statusItem_ != nullptr;};
      void deleteStatusItem() { this->statusItem_ = nullptr;};
      inline const vector<ResponseStatus::StatusItem> & getStatusItem() const { DARABONBA_PTR_GET_CONST(statusItem_, vector<ResponseStatus::StatusItem>) };
      inline vector<ResponseStatus::StatusItem> getStatusItem() { DARABONBA_PTR_GET(statusItem_, vector<ResponseStatus::StatusItem>) };
      inline ResponseStatus& setStatusItem(const vector<ResponseStatus::StatusItem> & statusItem) { DARABONBA_PTR_SET_VALUE(statusItem_, statusItem) };
      inline ResponseStatus& setStatusItem(vector<ResponseStatus::StatusItem> && statusItem) { DARABONBA_PTR_SET_RVALUE(statusItem_, statusItem) };


    protected:
      // Information during the execution process
      shared_ptr<string> executionStates_ {};
      // Status level
      shared_ptr<string> level_ {};
      // Execution result
      shared_ptr<string> result_ {};
      // Retry policy
      shared_ptr<string> retryPolicy_ {};
      // Detailed status information list
      shared_ptr<vector<ResponseStatus::StatusItem>> statusItem_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->header_ == nullptr && this->requestId_ == nullptr && this->responseStatus_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<vector<string>> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<vector<string>>) };
    inline vector<vector<string>> getData() { DARABONBA_PTR_GET(data_, vector<vector<string>>) };
    inline GetEntityStoreDataResponseBody& setData(const vector<vector<string>> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetEntityStoreDataResponseBody& setData(vector<vector<string>> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const vector<string> & getHeader() const { DARABONBA_PTR_GET_CONST(header_, vector<string>) };
    inline vector<string> getHeader() { DARABONBA_PTR_GET(header_, vector<string>) };
    inline GetEntityStoreDataResponseBody& setHeader(const vector<string> & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline GetEntityStoreDataResponseBody& setHeader(vector<string> && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEntityStoreDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responseStatus Field Functions 
    bool hasResponseStatus() const { return this->responseStatus_ != nullptr;};
    void deleteResponseStatus() { this->responseStatus_ = nullptr;};
    inline const GetEntityStoreDataResponseBody::ResponseStatus & getResponseStatus() const { DARABONBA_PTR_GET_CONST(responseStatus_, GetEntityStoreDataResponseBody::ResponseStatus) };
    inline GetEntityStoreDataResponseBody::ResponseStatus getResponseStatus() { DARABONBA_PTR_GET(responseStatus_, GetEntityStoreDataResponseBody::ResponseStatus) };
    inline GetEntityStoreDataResponseBody& setResponseStatus(const GetEntityStoreDataResponseBody::ResponseStatus & responseStatus) { DARABONBA_PTR_SET_VALUE(responseStatus_, responseStatus) };
    inline GetEntityStoreDataResponseBody& setResponseStatus(GetEntityStoreDataResponseBody::ResponseStatus && responseStatus) { DARABONBA_PTR_SET_RVALUE(responseStatus_, responseStatus) };


  protected:
    // Total list of returned data
    shared_ptr<vector<vector<string>>> data_ {};
    // List of request headers
    shared_ptr<vector<string>> header_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Result status
    shared_ptr<GetEntityStoreDataResponseBody::ResponseStatus> responseStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
