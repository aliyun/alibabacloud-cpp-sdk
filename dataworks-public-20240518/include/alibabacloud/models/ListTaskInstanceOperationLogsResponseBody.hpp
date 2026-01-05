// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKINSTANCEOPERATIONLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKINSTANCEOPERATIONLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListTaskInstanceOperationLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskInstanceOperationLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskInstanceOperationLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTaskInstanceOperationLogsResponseBody() = default ;
    ListTaskInstanceOperationLogsResponseBody(const ListTaskInstanceOperationLogsResponseBody &) = default ;
    ListTaskInstanceOperationLogsResponseBody(ListTaskInstanceOperationLogsResponseBody &&) = default ;
    ListTaskInstanceOperationLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskInstanceOperationLogsResponseBody() = default ;
    ListTaskInstanceOperationLogsResponseBody& operator=(const ListTaskInstanceOperationLogsResponseBody &) = default ;
    ListTaskInstanceOperationLogsResponseBody& operator=(ListTaskInstanceOperationLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(OperationLogs, operationLogs_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(OperationLogs, operationLogs_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OperationLogs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OperationLogs& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(OperationContent, operationContent_);
          DARABONBA_PTR_TO_JSON(OperationSeq, operationSeq_);
          DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
          DARABONBA_PTR_TO_JSON(User, user_);
        };
        friend void from_json(const Darabonba::Json& j, OperationLogs& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(OperationContent, operationContent_);
          DARABONBA_PTR_FROM_JSON(OperationSeq, operationSeq_);
          DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
          DARABONBA_PTR_FROM_JSON(User, user_);
        };
        OperationLogs() = default ;
        OperationLogs(const OperationLogs &) = default ;
        OperationLogs(OperationLogs &&) = default ;
        OperationLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OperationLogs() = default ;
        OperationLogs& operator=(const OperationLogs &) = default ;
        OperationLogs& operator=(OperationLogs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->operationContent_ == nullptr && this->operationSeq_ == nullptr && this->taskInstanceId_ == nullptr && this->user_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline OperationLogs& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // operationContent Field Functions 
        bool hasOperationContent() const { return this->operationContent_ != nullptr;};
        void deleteOperationContent() { this->operationContent_ = nullptr;};
        inline string getOperationContent() const { DARABONBA_PTR_GET_DEFAULT(operationContent_, "") };
        inline OperationLogs& setOperationContent(string operationContent) { DARABONBA_PTR_SET_VALUE(operationContent_, operationContent) };


        // operationSeq Field Functions 
        bool hasOperationSeq() const { return this->operationSeq_ != nullptr;};
        void deleteOperationSeq() { this->operationSeq_ = nullptr;};
        inline int64_t getOperationSeq() const { DARABONBA_PTR_GET_DEFAULT(operationSeq_, 0L) };
        inline OperationLogs& setOperationSeq(int64_t operationSeq) { DARABONBA_PTR_SET_VALUE(operationSeq_, operationSeq) };


        // taskInstanceId Field Functions 
        bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
        void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
        inline int64_t getTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, 0L) };
        inline OperationLogs& setTaskInstanceId(int64_t taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


        // user Field Functions 
        bool hasUser() const { return this->user_ != nullptr;};
        void deleteUser() { this->user_ = nullptr;};
        inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
        inline OperationLogs& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      protected:
        // The time when the operation log was generated.
        shared_ptr<int64_t> createTime_ {};
        // The operation content.
        shared_ptr<string> operationContent_ {};
        // The serial number of the operation.
        shared_ptr<int64_t> operationSeq_ {};
        // The ID of the instance on which the operation was performed.
        shared_ptr<int64_t> taskInstanceId_ {};
        // The account ID of the operator.
        shared_ptr<string> user_ {};
      };

      virtual bool empty() const override { return this->operationLogs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // operationLogs Field Functions 
      bool hasOperationLogs() const { return this->operationLogs_ != nullptr;};
      void deleteOperationLogs() { this->operationLogs_ = nullptr;};
      inline const vector<PagingInfo::OperationLogs> & getOperationLogs() const { DARABONBA_PTR_GET_CONST(operationLogs_, vector<PagingInfo::OperationLogs>) };
      inline vector<PagingInfo::OperationLogs> getOperationLogs() { DARABONBA_PTR_GET(operationLogs_, vector<PagingInfo::OperationLogs>) };
      inline PagingInfo& setOperationLogs(const vector<PagingInfo::OperationLogs> & operationLogs) { DARABONBA_PTR_SET_VALUE(operationLogs_, operationLogs) };
      inline PagingInfo& setOperationLogs(vector<PagingInfo::OperationLogs> && operationLogs) { DARABONBA_PTR_SET_RVALUE(operationLogs_, operationLogs) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The operation logs.
      shared_ptr<vector<PagingInfo::OperationLogs>> operationLogs_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListTaskInstanceOperationLogsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListTaskInstanceOperationLogsResponseBody::PagingInfo) };
    inline ListTaskInstanceOperationLogsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListTaskInstanceOperationLogsResponseBody::PagingInfo) };
    inline ListTaskInstanceOperationLogsResponseBody& setPagingInfo(const ListTaskInstanceOperationLogsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListTaskInstanceOperationLogsResponseBody& setPagingInfo(ListTaskInstanceOperationLogsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskInstanceOperationLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListTaskInstanceOperationLogsResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
