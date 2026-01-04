// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVENTREDEPLOYINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVENTREDEPLOYINSTANCERESPONSEBODY_HPP_
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
  class BatchEventRedeployInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEventRedeployInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEventRedeployInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    BatchEventRedeployInstanceResponseBody() = default ;
    BatchEventRedeployInstanceResponseBody(const BatchEventRedeployInstanceResponseBody &) = default ;
    BatchEventRedeployInstanceResponseBody(BatchEventRedeployInstanceResponseBody &&) = default ;
    BatchEventRedeployInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEventRedeployInstanceResponseBody() = default ;
    BatchEventRedeployInstanceResponseBody& operator=(const BatchEventRedeployInstanceResponseBody &) = default ;
    BatchEventRedeployInstanceResponseBody& operator=(BatchEventRedeployInstanceResponseBody &&) = default ;
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
      // Status code.
      shared_ptr<int32_t> code_ {};
      // System event ID.
      shared_ptr<string> eventId_ {};
      // Operational message, when code=200, the message is \\"successful\\".
      shared_ptr<string> message_ {};
      // Resource ID.
      shared_ptr<string> resourceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchEventRedeployInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<BatchEventRedeployInstanceResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<BatchEventRedeployInstanceResponseBody::Results>) };
    inline vector<BatchEventRedeployInstanceResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<BatchEventRedeployInstanceResponseBody::Results>) };
    inline BatchEventRedeployInstanceResponseBody& setResults(const vector<BatchEventRedeployInstanceResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchEventRedeployInstanceResponseBody& setResults(vector<BatchEventRedeployInstanceResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // List of results.
    shared_ptr<vector<BatchEventRedeployInstanceResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
