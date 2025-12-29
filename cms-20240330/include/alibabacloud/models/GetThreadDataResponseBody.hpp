// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTHREADDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTHREADDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetThreadDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetThreadDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
    };
    friend void from_json(const Darabonba::Json& j, GetThreadDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
    };
    GetThreadDataResponseBody() = default ;
    GetThreadDataResponseBody(const GetThreadDataResponseBody &) = default ;
    GetThreadDataResponseBody(GetThreadDataResponseBody &&) = default ;
    GetThreadDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetThreadDataResponseBody() = default ;
    GetThreadDataResponseBody& operator=(const GetThreadDataResponseBody &) = default ;
    GetThreadDataResponseBody& operator=(GetThreadDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(callerUid, callerUid_);
        DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(messageId, messageId_);
        DARABONBA_PTR_TO_JSON(ownerUid, ownerUid_);
        DARABONBA_PTR_TO_JSON(parentMessageId, parentMessageId_);
        DARABONBA_PTR_TO_JSON(region, region_);
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(runId, runId_);
        DARABONBA_PTR_TO_JSON(threadId, threadId_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(traceId, traceId_);
        DARABONBA_PTR_TO_JSON(variables, variables_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(callerUid, callerUid_);
        DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(messageId, messageId_);
        DARABONBA_PTR_FROM_JSON(ownerUid, ownerUid_);
        DARABONBA_PTR_FROM_JSON(parentMessageId, parentMessageId_);
        DARABONBA_PTR_FROM_JSON(region, region_);
        DARABONBA_PTR_FROM_JSON(role, role_);
        DARABONBA_PTR_FROM_JSON(runId, runId_);
        DARABONBA_PTR_FROM_JSON(threadId, threadId_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(traceId, traceId_);
        DARABONBA_PTR_FROM_JSON(variables, variables_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callerUid_ == nullptr
        && this->digitalEmployeeName_ == nullptr && this->items_ == nullptr && this->messageId_ == nullptr && this->ownerUid_ == nullptr && this->parentMessageId_ == nullptr
        && this->region_ == nullptr && this->role_ == nullptr && this->runId_ == nullptr && this->threadId_ == nullptr && this->timestamp_ == nullptr
        && this->traceId_ == nullptr && this->variables_ == nullptr; };
      // callerUid Field Functions 
      bool hasCallerUid() const { return this->callerUid_ != nullptr;};
      void deleteCallerUid() { this->callerUid_ = nullptr;};
      inline string getCallerUid() const { DARABONBA_PTR_GET_DEFAULT(callerUid_, "") };
      inline Messages& setCallerUid(string callerUid) { DARABONBA_PTR_SET_VALUE(callerUid_, callerUid) };


      // digitalEmployeeName Field Functions 
      bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
      void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
      inline string getDigitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
      inline Messages& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Darabonba::Json> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getItems() { DARABONBA_PTR_GET(items_, vector<Darabonba::Json>) };
      inline Messages& setItems(const vector<Darabonba::Json> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Messages& setItems(vector<Darabonba::Json> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Messages& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // ownerUid Field Functions 
      bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
      void deleteOwnerUid() { this->ownerUid_ = nullptr;};
      inline string getOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, "") };
      inline Messages& setOwnerUid(string ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


      // parentMessageId Field Functions 
      bool hasParentMessageId() const { return this->parentMessageId_ != nullptr;};
      void deleteParentMessageId() { this->parentMessageId_ = nullptr;};
      inline string getParentMessageId() const { DARABONBA_PTR_GET_DEFAULT(parentMessageId_, "") };
      inline Messages& setParentMessageId(string parentMessageId) { DARABONBA_PTR_SET_VALUE(parentMessageId_, parentMessageId) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Messages& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // runId Field Functions 
      bool hasRunId() const { return this->runId_ != nullptr;};
      void deleteRunId() { this->runId_ = nullptr;};
      inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
      inline Messages& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


      // threadId Field Functions 
      bool hasThreadId() const { return this->threadId_ != nullptr;};
      void deleteThreadId() { this->threadId_ = nullptr;};
      inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
      inline Messages& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline Messages& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline Messages& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


      // variables Field Functions 
      bool hasVariables() const { return this->variables_ != nullptr;};
      void deleteVariables() { this->variables_ = nullptr;};
      inline const map<string, string> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, map<string, string>) };
      inline map<string, string> getVariables() { DARABONBA_PTR_GET(variables_, map<string, string>) };
      inline Messages& setVariables(const map<string, string> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
      inline Messages& setVariables(map<string, string> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    protected:
      shared_ptr<string> callerUid_ {};
      shared_ptr<string> digitalEmployeeName_ {};
      shared_ptr<vector<Darabonba::Json>> items_ {};
      shared_ptr<string> messageId_ {};
      shared_ptr<string> ownerUid_ {};
      shared_ptr<string> parentMessageId_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> role_ {};
      shared_ptr<string> runId_ {};
      shared_ptr<string> threadId_ {};
      shared_ptr<string> timestamp_ {};
      shared_ptr<string> traceId_ {};
      shared_ptr<map<string, string>> variables_ {};
    };

    virtual bool empty() const override { return this->digitalEmployeeName_ == nullptr
        && this->maxResults_ == nullptr && this->messages_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->threadId_ == nullptr; };
    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline string getDigitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
    inline GetThreadDataResponseBody& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline GetThreadDataResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<GetThreadDataResponseBody::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<GetThreadDataResponseBody::Messages>) };
    inline vector<GetThreadDataResponseBody::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<GetThreadDataResponseBody::Messages>) };
    inline GetThreadDataResponseBody& setMessages(const vector<GetThreadDataResponseBody::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline GetThreadDataResponseBody& setMessages(vector<GetThreadDataResponseBody::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetThreadDataResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetThreadDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline GetThreadDataResponseBody& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


  protected:
    shared_ptr<string> digitalEmployeeName_ {};
    shared_ptr<int64_t> maxResults_ {};
    shared_ptr<vector<GetThreadDataResponseBody::Messages>> messages_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> threadId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
