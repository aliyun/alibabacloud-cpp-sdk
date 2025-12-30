// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANGELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANGELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeChangeLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChangeLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeLogs, changeLogs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChangeLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeLogs, changeLogs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeChangeLogsResponseBody() = default ;
    DescribeChangeLogsResponseBody(const DescribeChangeLogsResponseBody &) = default ;
    DescribeChangeLogsResponseBody(DescribeChangeLogsResponseBody &&) = default ;
    DescribeChangeLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChangeLogsResponseBody() = default ;
    DescribeChangeLogsResponseBody& operator=(const DescribeChangeLogsResponseBody &) = default ;
    DescribeChangeLogsResponseBody& operator=(DescribeChangeLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChangeLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChangeLogs& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeLog, changeLog_);
      };
      friend void from_json(const Darabonba::Json& j, ChangeLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeLog, changeLog_);
      };
      ChangeLogs() = default ;
      ChangeLogs(const ChangeLogs &) = default ;
      ChangeLogs(ChangeLogs &&) = default ;
      ChangeLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChangeLogs() = default ;
      ChangeLogs& operator=(const ChangeLogs &) = default ;
      ChangeLogs& operator=(ChangeLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ChangeLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangeLog& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(CreatorSubType, creatorSubType_);
          DARABONBA_PTR_TO_JSON(CreatorType, creatorType_);
          DARABONBA_PTR_TO_JSON(CreatorUserId, creatorUserId_);
          DARABONBA_PTR_TO_JSON(EntityId, entityId_);
          DARABONBA_PTR_TO_JSON(EntityName, entityName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(OperAction, operAction_);
          DARABONBA_PTR_TO_JSON(OperIp, operIp_);
          DARABONBA_PTR_TO_JSON(OperObject, operObject_);
          DARABONBA_PTR_TO_JSON(OperTime, operTime_);
          DARABONBA_PTR_TO_JSON(OperTimestamp, operTimestamp_);
        };
        friend void from_json(const Darabonba::Json& j, ChangeLog& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(CreatorSubType, creatorSubType_);
          DARABONBA_PTR_FROM_JSON(CreatorType, creatorType_);
          DARABONBA_PTR_FROM_JSON(CreatorUserId, creatorUserId_);
          DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
          DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(OperAction, operAction_);
          DARABONBA_PTR_FROM_JSON(OperIp, operIp_);
          DARABONBA_PTR_FROM_JSON(OperObject, operObject_);
          DARABONBA_PTR_FROM_JSON(OperTime, operTime_);
          DARABONBA_PTR_FROM_JSON(OperTimestamp, operTimestamp_);
        };
        ChangeLog() = default ;
        ChangeLog(const ChangeLog &) = default ;
        ChangeLog(ChangeLog &&) = default ;
        ChangeLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangeLog() = default ;
        ChangeLog& operator=(const ChangeLog &) = default ;
        ChangeLog& operator=(ChangeLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->creatorId_ == nullptr && this->creatorSubType_ == nullptr && this->creatorType_ == nullptr && this->creatorUserId_ == nullptr && this->entityId_ == nullptr
        && this->entityName_ == nullptr && this->id_ == nullptr && this->operAction_ == nullptr && this->operIp_ == nullptr && this->operObject_ == nullptr
        && this->operTime_ == nullptr && this->operTimestamp_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline ChangeLog& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline ChangeLog& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // creatorSubType Field Functions 
        bool hasCreatorSubType() const { return this->creatorSubType_ != nullptr;};
        void deleteCreatorSubType() { this->creatorSubType_ = nullptr;};
        inline string getCreatorSubType() const { DARABONBA_PTR_GET_DEFAULT(creatorSubType_, "") };
        inline ChangeLog& setCreatorSubType(string creatorSubType) { DARABONBA_PTR_SET_VALUE(creatorSubType_, creatorSubType) };


        // creatorType Field Functions 
        bool hasCreatorType() const { return this->creatorType_ != nullptr;};
        void deleteCreatorType() { this->creatorType_ = nullptr;};
        inline string getCreatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
        inline ChangeLog& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


        // creatorUserId Field Functions 
        bool hasCreatorUserId() const { return this->creatorUserId_ != nullptr;};
        void deleteCreatorUserId() { this->creatorUserId_ = nullptr;};
        inline string getCreatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, "") };
        inline ChangeLog& setCreatorUserId(string creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline ChangeLog& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // entityName Field Functions 
        bool hasEntityName() const { return this->entityName_ != nullptr;};
        void deleteEntityName() { this->entityName_ = nullptr;};
        inline string getEntityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
        inline ChangeLog& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ChangeLog& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // operAction Field Functions 
        bool hasOperAction() const { return this->operAction_ != nullptr;};
        void deleteOperAction() { this->operAction_ = nullptr;};
        inline string getOperAction() const { DARABONBA_PTR_GET_DEFAULT(operAction_, "") };
        inline ChangeLog& setOperAction(string operAction) { DARABONBA_PTR_SET_VALUE(operAction_, operAction) };


        // operIp Field Functions 
        bool hasOperIp() const { return this->operIp_ != nullptr;};
        void deleteOperIp() { this->operIp_ = nullptr;};
        inline string getOperIp() const { DARABONBA_PTR_GET_DEFAULT(operIp_, "") };
        inline ChangeLog& setOperIp(string operIp) { DARABONBA_PTR_SET_VALUE(operIp_, operIp) };


        // operObject Field Functions 
        bool hasOperObject() const { return this->operObject_ != nullptr;};
        void deleteOperObject() { this->operObject_ = nullptr;};
        inline string getOperObject() const { DARABONBA_PTR_GET_DEFAULT(operObject_, "") };
        inline ChangeLog& setOperObject(string operObject) { DARABONBA_PTR_SET_VALUE(operObject_, operObject) };


        // operTime Field Functions 
        bool hasOperTime() const { return this->operTime_ != nullptr;};
        void deleteOperTime() { this->operTime_ = nullptr;};
        inline string getOperTime() const { DARABONBA_PTR_GET_DEFAULT(operTime_, "") };
        inline ChangeLog& setOperTime(string operTime) { DARABONBA_PTR_SET_VALUE(operTime_, operTime) };


        // operTimestamp Field Functions 
        bool hasOperTimestamp() const { return this->operTimestamp_ != nullptr;};
        void deleteOperTimestamp() { this->operTimestamp_ = nullptr;};
        inline int64_t getOperTimestamp() const { DARABONBA_PTR_GET_DEFAULT(operTimestamp_, 0L) };
        inline ChangeLog& setOperTimestamp(int64_t operTimestamp) { DARABONBA_PTR_SET_VALUE(operTimestamp_, operTimestamp) };


      protected:
        // The operation content.
        shared_ptr<string> content_ {};
        // The operator ID.
        shared_ptr<string> creatorId_ {};
        // The subtype of the operator. Valid values:
        // 
        // *   CUSTOMER: Alibaba Cloud account
        // *   SUB: RAM user
        // *   STS: assumed role that obtains the Security Token Service (STS) token of a RAM role
        // *   OTHER: other types
        shared_ptr<string> creatorSubType_ {};
        // The operator type. No value or **USER** is returned for this parameter.
        shared_ptr<string> creatorType_ {};
        // The operator ID.
        shared_ptr<string> creatorUserId_ {};
        // The unique ID of the zone, user-defined line, forwarding rule, outbound endpoint, or inbound endpoint.
        shared_ptr<string> entityId_ {};
        // The name of the object on which the operation was performed, such as the domain name, user-defined line, cache retention domain name, forwarding rule, outbound endpoint, or inbound endpoint.
        shared_ptr<string> entityName_ {};
        // The ID of the operation log.
        shared_ptr<int64_t> id_ {};
        // The specific operation performed on the object, such as adding, deleting, modifying, or associating the object.
        shared_ptr<string> operAction_ {};
        // The public IP address of the operator terminal. If the IP address of the operator terminal is a private IP address, the value of this parameter is the public IP address to which the private IP address is mapped after network address translation (NAT).
        shared_ptr<string> operIp_ {};
        // The type of the object on which the operation was performed. Valid values:
        // 
        // *   **PV_ZONE**: the built-in authoritative zone
        // *   **PV_RECORD**: the DNS record
        // *   **RESOLVER_RULE**: the forwarding rule
        // *   **CUSTOM_LINE**: the user-defined line
        // *   **RESOLVER_ENDPOINT**: the outbound endpoint
        // *   **INBOUND_ENDPOINT**: the inbound endpoint
        // *   **CACHE_RESERVE_DOMAIN**: the cache retention domain name
        shared_ptr<string> operObject_ {};
        // The time when the operation is performed. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> operTime_ {};
        // The time when the operation was performed. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> operTimestamp_ {};
      };

      virtual bool empty() const override { return this->changeLog_ == nullptr; };
      // changeLog Field Functions 
      bool hasChangeLog() const { return this->changeLog_ != nullptr;};
      void deleteChangeLog() { this->changeLog_ = nullptr;};
      inline const vector<ChangeLogs::ChangeLog> & getChangeLog() const { DARABONBA_PTR_GET_CONST(changeLog_, vector<ChangeLogs::ChangeLog>) };
      inline vector<ChangeLogs::ChangeLog> getChangeLog() { DARABONBA_PTR_GET(changeLog_, vector<ChangeLogs::ChangeLog>) };
      inline ChangeLogs& setChangeLog(const vector<ChangeLogs::ChangeLog> & changeLog) { DARABONBA_PTR_SET_VALUE(changeLog_, changeLog) };
      inline ChangeLogs& setChangeLog(vector<ChangeLogs::ChangeLog> && changeLog) { DARABONBA_PTR_SET_RVALUE(changeLog_, changeLog) };


    protected:
      shared_ptr<vector<ChangeLogs::ChangeLog>> changeLog_ {};
    };

    virtual bool empty() const override { return this->changeLogs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // changeLogs Field Functions 
    bool hasChangeLogs() const { return this->changeLogs_ != nullptr;};
    void deleteChangeLogs() { this->changeLogs_ = nullptr;};
    inline const DescribeChangeLogsResponseBody::ChangeLogs & getChangeLogs() const { DARABONBA_PTR_GET_CONST(changeLogs_, DescribeChangeLogsResponseBody::ChangeLogs) };
    inline DescribeChangeLogsResponseBody::ChangeLogs getChangeLogs() { DARABONBA_PTR_GET(changeLogs_, DescribeChangeLogsResponseBody::ChangeLogs) };
    inline DescribeChangeLogsResponseBody& setChangeLogs(const DescribeChangeLogsResponseBody::ChangeLogs & changeLogs) { DARABONBA_PTR_SET_VALUE(changeLogs_, changeLogs) };
    inline DescribeChangeLogsResponseBody& setChangeLogs(DescribeChangeLogsResponseBody::ChangeLogs && changeLogs) { DARABONBA_PTR_SET_RVALUE(changeLogs_, changeLogs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeChangeLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeChangeLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChangeLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeChangeLogsResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeChangeLogsResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The operation logs.
    shared_ptr<DescribeChangeLogsResponseBody::ChangeLogs> changeLogs_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
