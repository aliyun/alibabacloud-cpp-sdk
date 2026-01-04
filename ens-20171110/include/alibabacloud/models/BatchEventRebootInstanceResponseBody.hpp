// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVENTREBOOTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVENTREBOOTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class BatchEventRebootInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEventRebootInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEventRebootInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    BatchEventRebootInstanceResponseBody() = default ;
    BatchEventRebootInstanceResponseBody(const BatchEventRebootInstanceResponseBody &) = default ;
    BatchEventRebootInstanceResponseBody(BatchEventRebootInstanceResponseBody &&) = default ;
    BatchEventRebootInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEventRebootInstanceResponseBody() = default ;
    BatchEventRebootInstanceResponseBody& operator=(const BatchEventRebootInstanceResponseBody &) = default ;
    BatchEventRebootInstanceResponseBody& operator=(BatchEventRebootInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->eventId_ == nullptr && this->message_ == nullptr && this->resourceId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
      inline Results& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Results& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Results& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Results& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    protected:
      // The status code.
      shared_ptr<int32_t> code_ {};
      // The ID of the system event.
      shared_ptr<string> eventId_ {};
      // The message of the operation. If the value of the Code parameter is 200, the value of this parameter is successful.
      shared_ptr<string> message_ {};
      // The resource IDs.
      shared_ptr<string> resourceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchEventRebootInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<BatchEventRebootInstanceResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<BatchEventRebootInstanceResponseBody::Results>) };
    inline vector<BatchEventRebootInstanceResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<BatchEventRebootInstanceResponseBody::Results>) };
    inline BatchEventRebootInstanceResponseBody& setResults(const vector<BatchEventRebootInstanceResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchEventRebootInstanceResponseBody& setResults(vector<BatchEventRebootInstanceResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The result.
    shared_ptr<vector<BatchEventRebootInstanceResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
