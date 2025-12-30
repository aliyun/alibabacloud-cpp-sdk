// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMALERTLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMALERTLOGSRESPONSEBODY_HPP_
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
  class ListCloudGtmAlertLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAlertLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAlertLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    ListCloudGtmAlertLogsResponseBody() = default ;
    ListCloudGtmAlertLogsResponseBody(const ListCloudGtmAlertLogsResponseBody &) = default ;
    ListCloudGtmAlertLogsResponseBody(ListCloudGtmAlertLogsResponseBody &&) = default ;
    ListCloudGtmAlertLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAlertLogsResponseBody() = default ;
    ListCloudGtmAlertLogsResponseBody& operator=(const ListCloudGtmAlertLogsResponseBody &) = default ;
    ListCloudGtmAlertLogsResponseBody& operator=(ListCloudGtmAlertLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Logs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Logs& obj) { 
        DARABONBA_PTR_TO_JSON(Log, log_);
      };
      friend void from_json(const Darabonba::Json& j, Logs& obj) { 
        DARABONBA_PTR_FROM_JSON(Log, log_);
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
      class Log : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Log& obj) { 
          DARABONBA_PTR_TO_JSON(ActionType, actionType_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(EntityType, entityType_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Log& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        Log() = default ;
        Log(const Log &) = default ;
        Log(Log &&) = default ;
        Log(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Log() = default ;
        Log& operator=(const Log &) = default ;
        Log& operator=(Log &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actionType_ == nullptr
        && this->content_ == nullptr && this->entityType_ == nullptr && this->timestamp_ == nullptr; };
        // actionType Field Functions 
        bool hasActionType() const { return this->actionType_ != nullptr;};
        void deleteActionType() { this->actionType_ = nullptr;};
        inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
        inline Log& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Log& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline Log& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline Log& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // Alert type:
        // - ALERT
        // - RESUME
        shared_ptr<string> actionType_ {};
        // The alert content.
        shared_ptr<string> content_ {};
        // Alarm object types:
        // - GTM_ADDRESS: Address
        // - GTM_ADDRESS_POOL: Address Pool
        // - GTM_INSTANCE: Instance
        // - GTM_MONITOR_TEMPLATE: Health Check Template
        shared_ptr<string> entityType_ {};
        // Alert log time (timestamp).
        shared_ptr<int64_t> timestamp_ {};
      };

      virtual bool empty() const override { return this->log_ == nullptr; };
      // log Field Functions 
      bool hasLog() const { return this->log_ != nullptr;};
      void deleteLog() { this->log_ = nullptr;};
      inline const vector<Logs::Log> & getLog() const { DARABONBA_PTR_GET_CONST(log_, vector<Logs::Log>) };
      inline vector<Logs::Log> getLog() { DARABONBA_PTR_GET(log_, vector<Logs::Log>) };
      inline Logs& setLog(const vector<Logs::Log> & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
      inline Logs& setLog(vector<Logs::Log> && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


    protected:
      shared_ptr<vector<Logs::Log>> log_ {};
    };

    virtual bool empty() const override { return this->logs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const ListCloudGtmAlertLogsResponseBody::Logs & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, ListCloudGtmAlertLogsResponseBody::Logs) };
    inline ListCloudGtmAlertLogsResponseBody::Logs getLogs() { DARABONBA_PTR_GET(logs_, ListCloudGtmAlertLogsResponseBody::Logs) };
    inline ListCloudGtmAlertLogsResponseBody& setLogs(const ListCloudGtmAlertLogsResponseBody::Logs & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline ListCloudGtmAlertLogsResponseBody& setLogs(ListCloudGtmAlertLogsResponseBody::Logs && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCloudGtmAlertLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCloudGtmAlertLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudGtmAlertLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline ListCloudGtmAlertLogsResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline ListCloudGtmAlertLogsResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The alert logs.
    shared_ptr<ListCloudGtmAlertLogsResponseBody::Logs> logs_ {};
    // Current page number, starting from 1, default is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of rows per page when paginating queries, with a maximum value of 100 and a default of 20.
    shared_ptr<int32_t> pageSize_ {};
    // Unique request identification code.
    shared_ptr<string> requestId_ {};
    // Total number of alarm log entries.
    shared_ptr<int32_t> totalItems_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
