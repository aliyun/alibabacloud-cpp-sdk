// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMLOGSRESPONSEBODY_HPP_
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
  class DescribeGtmLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeGtmLogsResponseBody() = default ;
    DescribeGtmLogsResponseBody(const DescribeGtmLogsResponseBody &) = default ;
    DescribeGtmLogsResponseBody(DescribeGtmLogsResponseBody &&) = default ;
    DescribeGtmLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmLogsResponseBody() = default ;
    DescribeGtmLogsResponseBody& operator=(const DescribeGtmLogsResponseBody &) = default ;
    DescribeGtmLogsResponseBody& operator=(DescribeGtmLogsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(EntityId, entityId_);
          DARABONBA_PTR_TO_JSON(EntityName, entityName_);
          DARABONBA_PTR_TO_JSON(EntityType, entityType_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(OperAction, operAction_);
          DARABONBA_PTR_TO_JSON(OperIp, operIp_);
          DARABONBA_PTR_TO_JSON(OperTime, operTime_);
          DARABONBA_PTR_TO_JSON(OperTimestamp, operTimestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Log& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
          DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
          DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(OperAction, operAction_);
          DARABONBA_PTR_FROM_JSON(OperIp, operIp_);
          DARABONBA_PTR_FROM_JSON(OperTime, operTime_);
          DARABONBA_PTR_FROM_JSON(OperTimestamp, operTimestamp_);
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
        virtual bool empty() const override { return this->content_ == nullptr
        && this->entityId_ == nullptr && this->entityName_ == nullptr && this->entityType_ == nullptr && this->id_ == nullptr && this->operAction_ == nullptr
        && this->operIp_ == nullptr && this->operTime_ == nullptr && this->operTimestamp_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Log& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline Log& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // entityName Field Functions 
        bool hasEntityName() const { return this->entityName_ != nullptr;};
        void deleteEntityName() { this->entityName_ = nullptr;};
        inline string getEntityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
        inline Log& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline Log& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Log& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // operAction Field Functions 
        bool hasOperAction() const { return this->operAction_ != nullptr;};
        void deleteOperAction() { this->operAction_ = nullptr;};
        inline string getOperAction() const { DARABONBA_PTR_GET_DEFAULT(operAction_, "") };
        inline Log& setOperAction(string operAction) { DARABONBA_PTR_SET_VALUE(operAction_, operAction) };


        // operIp Field Functions 
        bool hasOperIp() const { return this->operIp_ != nullptr;};
        void deleteOperIp() { this->operIp_ = nullptr;};
        inline string getOperIp() const { DARABONBA_PTR_GET_DEFAULT(operIp_, "") };
        inline Log& setOperIp(string operIp) { DARABONBA_PTR_SET_VALUE(operIp_, operIp) };


        // operTime Field Functions 
        bool hasOperTime() const { return this->operTime_ != nullptr;};
        void deleteOperTime() { this->operTime_ = nullptr;};
        inline string getOperTime() const { DARABONBA_PTR_GET_DEFAULT(operTime_, "") };
        inline Log& setOperTime(string operTime) { DARABONBA_PTR_SET_VALUE(operTime_, operTime) };


        // operTimestamp Field Functions 
        bool hasOperTimestamp() const { return this->operTimestamp_ != nullptr;};
        void deleteOperTimestamp() { this->operTimestamp_ = nullptr;};
        inline int64_t getOperTimestamp() const { DARABONBA_PTR_GET_DEFAULT(operTimestamp_, 0L) };
        inline Log& setOperTimestamp(int64_t operTimestamp) { DARABONBA_PTR_SET_VALUE(operTimestamp_, operTimestamp) };


      protected:
        // The formatted message content.
        shared_ptr<string> content_ {};
        // The ID of the object that was operated on.
        shared_ptr<string> entityId_ {};
        // The name of the object that was operated on.
        shared_ptr<string> entityName_ {};
        // The type of the object that was operated on.
        shared_ptr<string> entityType_ {};
        // The ID of the log record.
        shared_ptr<int64_t> id_ {};
        // The operation performed.
        shared_ptr<string> operAction_ {};
        // The IP address subject to the operation.
        shared_ptr<string> operIp_ {};
        // The time when the operation was performed.
        shared_ptr<string> operTime_ {};
        // A timestamp that indicates the time when the operation was performed.
        shared_ptr<int64_t> operTimestamp_ {};
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
    inline const DescribeGtmLogsResponseBody::Logs & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, DescribeGtmLogsResponseBody::Logs) };
    inline DescribeGtmLogsResponseBody::Logs getLogs() { DARABONBA_PTR_GET(logs_, DescribeGtmLogsResponseBody::Logs) };
    inline DescribeGtmLogsResponseBody& setLogs(const DescribeGtmLogsResponseBody::Logs & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribeGtmLogsResponseBody& setLogs(DescribeGtmLogsResponseBody::Logs && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGtmLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGtmLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeGtmLogsResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeGtmLogsResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The list of logs returned.
    shared_ptr<DescribeGtmLogsResponseBody::Logs> logs_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned on all pages.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
