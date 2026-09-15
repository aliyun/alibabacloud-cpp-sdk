// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSANDBOXESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSANDBOXESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListSandboxesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSandboxesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSandboxesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListSandboxesResponseBody() = default ;
    ListSandboxesResponseBody(const ListSandboxesResponseBody &) = default ;
    ListSandboxesResponseBody(ListSandboxesResponseBody &&) = default ;
    ListSandboxesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSandboxesResponseBody() = default ;
    ListSandboxesResponseBody& operator=(const ListSandboxesResponseBody &) = default ;
    ListSandboxesResponseBody& operator=(ListSandboxesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(activeSessionCount, activeSessionCount_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(lastActiveAt, lastActiveAt_);
        DARABONBA_PTR_TO_JSON(lastHeartbeatAt, lastHeartbeatAt_);
        DARABONBA_PTR_TO_JSON(maxConcurrentSessions, maxConcurrentSessions_);
        DARABONBA_PTR_TO_JSON(phase, phase_);
        DARABONBA_PTR_TO_JSON(sandboxId, sandboxId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(activeSessionCount, activeSessionCount_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(lastActiveAt, lastActiveAt_);
        DARABONBA_PTR_FROM_JSON(lastHeartbeatAt, lastHeartbeatAt_);
        DARABONBA_PTR_FROM_JSON(maxConcurrentSessions, maxConcurrentSessions_);
        DARABONBA_PTR_FROM_JSON(phase, phase_);
        DARABONBA_PTR_FROM_JSON(sandboxId, sandboxId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeSessionCount_ == nullptr
        && this->createdAt_ == nullptr && this->lastActiveAt_ == nullptr && this->lastHeartbeatAt_ == nullptr && this->maxConcurrentSessions_ == nullptr && this->phase_ == nullptr
        && this->sandboxId_ == nullptr; };
      // activeSessionCount Field Functions 
      bool hasActiveSessionCount() const { return this->activeSessionCount_ != nullptr;};
      void deleteActiveSessionCount() { this->activeSessionCount_ = nullptr;};
      inline int32_t getActiveSessionCount() const { DARABONBA_PTR_GET_DEFAULT(activeSessionCount_, 0) };
      inline Items& setActiveSessionCount(int32_t activeSessionCount) { DARABONBA_PTR_SET_VALUE(activeSessionCount_, activeSessionCount) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // lastActiveAt Field Functions 
      bool hasLastActiveAt() const { return this->lastActiveAt_ != nullptr;};
      void deleteLastActiveAt() { this->lastActiveAt_ = nullptr;};
      inline string getLastActiveAt() const { DARABONBA_PTR_GET_DEFAULT(lastActiveAt_, "") };
      inline Items& setLastActiveAt(string lastActiveAt) { DARABONBA_PTR_SET_VALUE(lastActiveAt_, lastActiveAt) };


      // lastHeartbeatAt Field Functions 
      bool hasLastHeartbeatAt() const { return this->lastHeartbeatAt_ != nullptr;};
      void deleteLastHeartbeatAt() { this->lastHeartbeatAt_ = nullptr;};
      inline string getLastHeartbeatAt() const { DARABONBA_PTR_GET_DEFAULT(lastHeartbeatAt_, "") };
      inline Items& setLastHeartbeatAt(string lastHeartbeatAt) { DARABONBA_PTR_SET_VALUE(lastHeartbeatAt_, lastHeartbeatAt) };


      // maxConcurrentSessions Field Functions 
      bool hasMaxConcurrentSessions() const { return this->maxConcurrentSessions_ != nullptr;};
      void deleteMaxConcurrentSessions() { this->maxConcurrentSessions_ = nullptr;};
      inline int32_t getMaxConcurrentSessions() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrentSessions_, 0) };
      inline Items& setMaxConcurrentSessions(int32_t maxConcurrentSessions) { DARABONBA_PTR_SET_VALUE(maxConcurrentSessions_, maxConcurrentSessions) };


      // phase Field Functions 
      bool hasPhase() const { return this->phase_ != nullptr;};
      void deletePhase() { this->phase_ = nullptr;};
      inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
      inline Items& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


      // sandboxId Field Functions 
      bool hasSandboxId() const { return this->sandboxId_ != nullptr;};
      void deleteSandboxId() { this->sandboxId_ = nullptr;};
      inline string getSandboxId() const { DARABONBA_PTR_GET_DEFAULT(sandboxId_, "") };
      inline Items& setSandboxId(string sandboxId) { DARABONBA_PTR_SET_VALUE(sandboxId_, sandboxId) };


    protected:
      shared_ptr<int32_t> activeSessionCount_ {};
      shared_ptr<string> createdAt_ {};
      shared_ptr<string> lastActiveAt_ {};
      shared_ptr<string> lastHeartbeatAt_ {};
      shared_ptr<int32_t> maxConcurrentSessions_ {};
      shared_ptr<string> phase_ {};
      shared_ptr<string> sandboxId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSandboxesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSandboxesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListSandboxesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListSandboxesResponseBody::Items>) };
    inline vector<ListSandboxesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListSandboxesResponseBody::Items>) };
    inline ListSandboxesResponseBody& setItems(const vector<ListSandboxesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListSandboxesResponseBody& setItems(vector<ListSandboxesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSandboxesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSandboxesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSandboxesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSandboxesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSandboxesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSandboxesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<vector<ListSandboxesResponseBody::Items>> items_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
