// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMONLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMONLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListCommonLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommonLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommonLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    ListCommonLogsResponseBody() = default ;
    ListCommonLogsResponseBody(const ListCommonLogsResponseBody &) = default ;
    ListCommonLogsResponseBody(ListCommonLogsResponseBody &&) = default ;
    ListCommonLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommonLogsResponseBody() = default ;
    ListCommonLogsResponseBody& operator=(const ListCommonLogsResponseBody &) = default ;
    ListCommonLogsResponseBody& operator=(ListCommonLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Logs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Logs& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(LogType, logType_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(OperatorUid, operatorUid_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, Logs& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(LogType, logType_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(OperatorUid, operatorUid_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
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
        && this->clusterId_ == nullptr && this->logType_ == nullptr && this->message_ == nullptr && this->operatorUid_ == nullptr && this->requestId_ == nullptr
        && this->status_ == nullptr && this->target_ == nullptr && this->time_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Logs& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Logs& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // logType Field Functions 
      bool hasLogType() const { return this->logType_ != nullptr;};
      void deleteLogType() { this->logType_ = nullptr;};
      inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
      inline Logs& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Logs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // operatorUid Field Functions 
      bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
      void deleteOperatorUid() { this->operatorUid_ = nullptr;};
      inline string getOperatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, "") };
      inline Logs& setOperatorUid(string operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Logs& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Logs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline Logs& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline Logs& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The name of the action corresponding to the log.
      shared_ptr<string> action_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The log type.
      shared_ptr<string> logType_ {};
      // The message of the log.
      shared_ptr<string> message_ {};
      // The account ID of the operator.
      shared_ptr<string> operatorUid_ {};
      // The request ID associated with the action that generated the log.
      shared_ptr<string> requestId_ {};
      // The action state in the log. Valid values:
      // 
      // *   InProgress: The action is being performed.
      // *   Finished: The action is completed.
      // *   Failed: The action failed.
      shared_ptr<string> status_ {};
      // The involved resource.
      shared_ptr<string> target_ {};
      // The time when the log was generated.
      shared_ptr<string> time_ {};
    };

    virtual bool empty() const override { return this->logs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->uid_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<ListCommonLogsResponseBody::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<ListCommonLogsResponseBody::Logs>) };
    inline vector<ListCommonLogsResponseBody::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<ListCommonLogsResponseBody::Logs>) };
    inline ListCommonLogsResponseBody& setLogs(const vector<ListCommonLogsResponseBody::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline ListCommonLogsResponseBody& setLogs(vector<ListCommonLogsResponseBody::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCommonLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCommonLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCommonLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCommonLogsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListCommonLogsResponseBody& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The brief information of operation logs.
    shared_ptr<vector<ListCommonLogsResponseBody::Logs>> logs_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
    // The ID of the Alibaba Cloud account.
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
