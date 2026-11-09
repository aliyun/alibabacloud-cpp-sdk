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
        DARABONBA_PTR_TO_JSON(harnessVersion, harnessVersion_);
        DARABONBA_PTR_TO_JSON(lastActiveAt, lastActiveAt_);
        DARABONBA_PTR_TO_JSON(lastHeartbeatAt, lastHeartbeatAt_);
        DARABONBA_PTR_TO_JSON(lastRebuildOperationId, lastRebuildOperationId_);
        DARABONBA_PTR_TO_JSON(maxConcurrentSessions, maxConcurrentSessions_);
        DARABONBA_PTR_TO_JSON(phase, phase_);
        DARABONBA_PTR_TO_JSON(sandboxId, sandboxId_);
        DARABONBA_PTR_TO_JSON(updateAvailable, updateAvailable_);
        DARABONBA_PTR_TO_JSON(updateFailed, updateFailed_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(activeSessionCount, activeSessionCount_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(harnessVersion, harnessVersion_);
        DARABONBA_PTR_FROM_JSON(lastActiveAt, lastActiveAt_);
        DARABONBA_PTR_FROM_JSON(lastHeartbeatAt, lastHeartbeatAt_);
        DARABONBA_PTR_FROM_JSON(lastRebuildOperationId, lastRebuildOperationId_);
        DARABONBA_PTR_FROM_JSON(maxConcurrentSessions, maxConcurrentSessions_);
        DARABONBA_PTR_FROM_JSON(phase, phase_);
        DARABONBA_PTR_FROM_JSON(sandboxId, sandboxId_);
        DARABONBA_PTR_FROM_JSON(updateAvailable, updateAvailable_);
        DARABONBA_PTR_FROM_JSON(updateFailed, updateFailed_);
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
        && this->createdAt_ == nullptr && this->harnessVersion_ == nullptr && this->lastActiveAt_ == nullptr && this->lastHeartbeatAt_ == nullptr && this->lastRebuildOperationId_ == nullptr
        && this->maxConcurrentSessions_ == nullptr && this->phase_ == nullptr && this->sandboxId_ == nullptr && this->updateAvailable_ == nullptr && this->updateFailed_ == nullptr; };
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


      // harnessVersion Field Functions 
      bool hasHarnessVersion() const { return this->harnessVersion_ != nullptr;};
      void deleteHarnessVersion() { this->harnessVersion_ = nullptr;};
      inline string getHarnessVersion() const { DARABONBA_PTR_GET_DEFAULT(harnessVersion_, "") };
      inline Items& setHarnessVersion(string harnessVersion) { DARABONBA_PTR_SET_VALUE(harnessVersion_, harnessVersion) };


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


      // lastRebuildOperationId Field Functions 
      bool hasLastRebuildOperationId() const { return this->lastRebuildOperationId_ != nullptr;};
      void deleteLastRebuildOperationId() { this->lastRebuildOperationId_ = nullptr;};
      inline string getLastRebuildOperationId() const { DARABONBA_PTR_GET_DEFAULT(lastRebuildOperationId_, "") };
      inline Items& setLastRebuildOperationId(string lastRebuildOperationId) { DARABONBA_PTR_SET_VALUE(lastRebuildOperationId_, lastRebuildOperationId) };


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


      // updateAvailable Field Functions 
      bool hasUpdateAvailable() const { return this->updateAvailable_ != nullptr;};
      void deleteUpdateAvailable() { this->updateAvailable_ = nullptr;};
      inline bool getUpdateAvailable() const { DARABONBA_PTR_GET_DEFAULT(updateAvailable_, false) };
      inline Items& setUpdateAvailable(bool updateAvailable) { DARABONBA_PTR_SET_VALUE(updateAvailable_, updateAvailable) };


      // updateFailed Field Functions 
      bool hasUpdateFailed() const { return this->updateFailed_ != nullptr;};
      void deleteUpdateFailed() { this->updateFailed_ = nullptr;};
      inline bool getUpdateFailed() const { DARABONBA_PTR_GET_DEFAULT(updateFailed_, false) };
      inline Items& setUpdateFailed(bool updateFailed) { DARABONBA_PTR_SET_VALUE(updateFailed_, updateFailed) };


    protected:
      // The number of active sessions in the sandbox.
      shared_ptr<int32_t> activeSessionCount_ {};
      // The time when the sandbox was created, in RFC 3339 UTC format.
      shared_ptr<string> createdAt_ {};
      // The tag of the actual observed image of the currently returned instance. This parameter is empty if the tag cannot be parsed.
      shared_ptr<string> harnessVersion_ {};
      // The time of the last activity of the sandbox, in RFC 3339 UTC format.
      shared_ptr<string> lastActiveAt_ {};
      // The time of the last heartbeat of the sandbox, in RFC 3339 UTC format.
      shared_ptr<string> lastHeartbeatAt_ {};
      // Used to continue calling GetSandboxRebuildOperation to query the overall result after a page refresh. This parameter is empty if there is no historical rebuild. Do not use the ID of a subsequently created task instead.
      shared_ptr<string> lastRebuildOperationId_ {};
      // The maximum number of concurrent sessions allowed for the sandbox, which is obtained from the effective auto-scaling configuration at runtime. This parameter is empty if auto-scaling is disabled or the configuration is unavailable.
      shared_ptr<int32_t> maxConcurrentSessions_ {};
      // The current running phase of the sandbox.
      shared_ptr<string> phase_ {};
      // The sandbox ID, which can be queried by calling ListSandboxes.
      shared_ptr<string> sandboxId_ {};
      // The server compares the actual image tag of the instance with the pool target image tag. The value is true if the tags are different during the RUNNING, HIBERNATED, or FAILED phase. The value is false if the tags are the same or during other known phases. This parameter is empty if the tag or phase cannot be confirmed, and it cannot be treated as false. The version sequence is not determined by the tag size.
      shared_ptr<bool> updateAvailable_ {};
      // A value of true indicates that the most recent rebuild corresponding to the current instance generation failed as a whole. A value of false indicates that there is no historical rebuild or the rebuild succeeded as a whole. This parameter is empty if the rebuild is in progress, canceled, replaced, the generation does not match, or the result cannot be confirmed.
      shared_ptr<bool> updateFailed_ {};
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
    // The business status code. The value is SUCCESS if the request is successful.
    shared_ptr<string> code_ {};
    // The HTTP status code. The value is 200 if the request is successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of sandboxes that meet the filter conditions.
    shared_ptr<vector<ListSandboxesResponseBody::Items>> items_ {};
    // The maximum number of records per page for this query.
    shared_ptr<int32_t> maxResults_ {};
    // The response message. The value is success if the request is successful.
    shared_ptr<string> message_ {};
    // The pagination token for the next page. An empty value indicates that no more results are available.
    shared_ptr<string> nextToken_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. A value of true indicates success, and a value of false indicates failure.
    shared_ptr<bool> success_ {};
    // The total number of records that meet the query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
