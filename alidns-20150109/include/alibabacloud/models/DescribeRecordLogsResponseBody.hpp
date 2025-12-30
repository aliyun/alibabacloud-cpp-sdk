// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecordLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecordLogs, recordLogs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecordLogs, recordLogs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRecordLogsResponseBody() = default ;
    DescribeRecordLogsResponseBody(const DescribeRecordLogsResponseBody &) = default ;
    DescribeRecordLogsResponseBody(DescribeRecordLogsResponseBody &&) = default ;
    DescribeRecordLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordLogsResponseBody() = default ;
    DescribeRecordLogsResponseBody& operator=(const DescribeRecordLogsResponseBody &) = default ;
    DescribeRecordLogsResponseBody& operator=(DescribeRecordLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordLogs& obj) { 
        DARABONBA_PTR_TO_JSON(RecordLog, recordLog_);
      };
      friend void from_json(const Darabonba::Json& j, RecordLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(RecordLog, recordLog_);
      };
      RecordLogs() = default ;
      RecordLogs(const RecordLogs &) = default ;
      RecordLogs(RecordLogs &&) = default ;
      RecordLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordLogs() = default ;
      RecordLogs& operator=(const RecordLogs &) = default ;
      RecordLogs& operator=(RecordLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecordLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordLog& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(ActionTime, actionTime_);
          DARABONBA_PTR_TO_JSON(ActionTimestamp, actionTimestamp_);
          DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, RecordLog& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(ActionTime, actionTime_);
          DARABONBA_PTR_FROM_JSON(ActionTimestamp, actionTimestamp_);
          DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        RecordLog() = default ;
        RecordLog(const RecordLog &) = default ;
        RecordLog(RecordLog &&) = default ;
        RecordLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordLog() = default ;
        RecordLog& operator=(const RecordLog &) = default ;
        RecordLog& operator=(RecordLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->actionTime_ == nullptr && this->actionTimestamp_ == nullptr && this->clientIp_ == nullptr && this->message_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline RecordLog& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // actionTime Field Functions 
        bool hasActionTime() const { return this->actionTime_ != nullptr;};
        void deleteActionTime() { this->actionTime_ = nullptr;};
        inline string getActionTime() const { DARABONBA_PTR_GET_DEFAULT(actionTime_, "") };
        inline RecordLog& setActionTime(string actionTime) { DARABONBA_PTR_SET_VALUE(actionTime_, actionTime) };


        // actionTimestamp Field Functions 
        bool hasActionTimestamp() const { return this->actionTimestamp_ != nullptr;};
        void deleteActionTimestamp() { this->actionTimestamp_ = nullptr;};
        inline int64_t getActionTimestamp() const { DARABONBA_PTR_GET_DEFAULT(actionTimestamp_, 0L) };
        inline RecordLog& setActionTimestamp(int64_t actionTimestamp) { DARABONBA_PTR_SET_VALUE(actionTimestamp_, actionTimestamp) };


        // clientIp Field Functions 
        bool hasClientIp() const { return this->clientIp_ != nullptr;};
        void deleteClientIp() { this->clientIp_ = nullptr;};
        inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
        inline RecordLog& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline RecordLog& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The operation that you performed.
        shared_ptr<string> action_ {};
        // The time when you performed the operation.
        shared_ptr<string> actionTime_ {};
        // The time when you performed the operation. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> actionTimestamp_ {};
        // The IP address of the operator.
        shared_ptr<string> clientIp_ {};
        // The operation message.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->recordLog_ == nullptr; };
      // recordLog Field Functions 
      bool hasRecordLog() const { return this->recordLog_ != nullptr;};
      void deleteRecordLog() { this->recordLog_ = nullptr;};
      inline const vector<RecordLogs::RecordLog> & getRecordLog() const { DARABONBA_PTR_GET_CONST(recordLog_, vector<RecordLogs::RecordLog>) };
      inline vector<RecordLogs::RecordLog> getRecordLog() { DARABONBA_PTR_GET(recordLog_, vector<RecordLogs::RecordLog>) };
      inline RecordLogs& setRecordLog(const vector<RecordLogs::RecordLog> & recordLog) { DARABONBA_PTR_SET_VALUE(recordLog_, recordLog) };
      inline RecordLogs& setRecordLog(vector<RecordLogs::RecordLog> && recordLog) { DARABONBA_PTR_SET_RVALUE(recordLog_, recordLog) };


    protected:
      shared_ptr<vector<RecordLogs::RecordLog>> recordLog_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->recordLogs_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeRecordLogsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeRecordLogsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recordLogs Field Functions 
    bool hasRecordLogs() const { return this->recordLogs_ != nullptr;};
    void deleteRecordLogs() { this->recordLogs_ = nullptr;};
    inline const DescribeRecordLogsResponseBody::RecordLogs & getRecordLogs() const { DARABONBA_PTR_GET_CONST(recordLogs_, DescribeRecordLogsResponseBody::RecordLogs) };
    inline DescribeRecordLogsResponseBody::RecordLogs getRecordLogs() { DARABONBA_PTR_GET(recordLogs_, DescribeRecordLogsResponseBody::RecordLogs) };
    inline DescribeRecordLogsResponseBody& setRecordLogs(const DescribeRecordLogsResponseBody::RecordLogs & recordLogs) { DARABONBA_PTR_SET_VALUE(recordLogs_, recordLogs) };
    inline DescribeRecordLogsResponseBody& setRecordLogs(DescribeRecordLogsResponseBody::RecordLogs && recordLogs) { DARABONBA_PTR_SET_RVALUE(recordLogs_, recordLogs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecordLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeRecordLogsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The operation logs.
    shared_ptr<DescribeRecordLogsResponseBody::RecordLogs> recordLogs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
