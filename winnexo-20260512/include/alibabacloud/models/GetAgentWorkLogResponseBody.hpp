// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTWORKLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTWORKLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetAgentWorkLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentWorkLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(logs, logs_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentWorkLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(logs, logs_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    GetAgentWorkLogResponseBody() = default ;
    GetAgentWorkLogResponseBody(const GetAgentWorkLogResponseBody &) = default ;
    GetAgentWorkLogResponseBody(GetAgentWorkLogResponseBody &&) = default ;
    GetAgentWorkLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentWorkLogResponseBody() = default ;
    GetAgentWorkLogResponseBody& operator=(const GetAgentWorkLogResponseBody &) = default ;
    GetAgentWorkLogResponseBody& operator=(GetAgentWorkLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Logs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Logs& obj) { 
        DARABONBA_PTR_TO_JSON(action, action_);
        DARABONBA_PTR_TO_JSON(detail, detail_);
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Logs& obj) { 
        DARABONBA_PTR_FROM_JSON(action, action_);
        DARABONBA_PTR_FROM_JSON(detail, detail_);
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      };
      Logs() = default ;
      Logs(const Logs &) = default ;
      Logs(Logs &&) = default ;
      Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Logs() = default ;
      Logs& operator=(const Logs &) = default ;
      Logs& operator=(Logs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->detail_ == nullptr && this->duration_ == nullptr && this->nodeId_ == nullptr && this->timestamp_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Logs& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Logs& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Logs& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Logs& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline Logs& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The record type. Valid values: THINK, REPLY, TOOL_CALL, SKILL_CALL, and ARTIFACT.
      shared_ptr<string> action_ {};
      // The saved raw record content. Tool invocations and artifact metadata are represented as JSON strings.
      shared_ptr<string> detail_ {};
      // The duration of this operation record, in milliseconds. The value is 0 for artifact records.
      shared_ptr<int64_t> duration_ {};
      // The key of the node to which the record belongs. This is not the session ID.
      shared_ptr<string> nodeId_ {};
      // The time when the event was recorded, in ISO 8601 format. If the source record has no time, an empty string is returned.
      shared_ptr<string> timestamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->logs_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAgentWorkLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<GetAgentWorkLogResponseBody::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<GetAgentWorkLogResponseBody::Logs>) };
    inline vector<GetAgentWorkLogResponseBody::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<GetAgentWorkLogResponseBody::Logs>) };
    inline GetAgentWorkLogResponseBody& setLogs(const vector<GetAgentWorkLogResponseBody::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline GetAgentWorkLogResponseBody& setLogs(vector<GetAgentWorkLogResponseBody::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAgentWorkLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline GetAgentWorkLogResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetAgentWorkLogResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentWorkLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetAgentWorkLogResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The agent operation records in reverse chronological order. If no records are saved, an empty list is returned.
    shared_ptr<vector<GetAgentWorkLogResponseBody::Logs>> logs_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The current page number, starting from 1.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page. Valid values: 1 to 100.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of filtered operation log entries.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
