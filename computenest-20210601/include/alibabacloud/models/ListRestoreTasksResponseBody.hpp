// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESTORETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESTORETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListRestoreTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRestoreTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoreTasks, restoreTasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRestoreTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoreTasks, restoreTasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRestoreTasksResponseBody() = default ;
    ListRestoreTasksResponseBody(const ListRestoreTasksResponseBody &) = default ;
    ListRestoreTasksResponseBody(ListRestoreTasksResponseBody &&) = default ;
    ListRestoreTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRestoreTasksResponseBody() = default ;
    ListRestoreTasksResponseBody& operator=(const ListRestoreTasksResponseBody &) = default ;
    ListRestoreTasksResponseBody& operator=(ListRestoreTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RestoreTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RestoreTasks& obj) { 
        DARABONBA_PTR_TO_JSON(BackupId, backupId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(RestoreTaskId, restoreTaskId_);
        DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusDetail, statusDetail_);
      };
      friend void from_json(const Darabonba::Json& j, RestoreTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(RestoreTaskId, restoreTaskId_);
        DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusDetail, statusDetail_);
      };
      RestoreTasks() = default ;
      RestoreTasks(const RestoreTasks &) = default ;
      RestoreTasks(RestoreTasks &&) = default ;
      RestoreTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RestoreTasks() = default ;
      RestoreTasks& operator=(const RestoreTasks &) = default ;
      RestoreTasks& operator=(RestoreTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupId_ == nullptr
        && this->createTime_ == nullptr && this->endTime_ == nullptr && this->modifiedTime_ == nullptr && this->restoreTaskId_ == nullptr && this->serviceInstanceId_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->statusDetail_ == nullptr; };
      // backupId Field Functions 
      bool hasBackupId() const { return this->backupId_ != nullptr;};
      void deleteBackupId() { this->backupId_ = nullptr;};
      inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
      inline RestoreTasks& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline RestoreTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline RestoreTasks& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline RestoreTasks& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // restoreTaskId Field Functions 
      bool hasRestoreTaskId() const { return this->restoreTaskId_ != nullptr;};
      void deleteRestoreTaskId() { this->restoreTaskId_ = nullptr;};
      inline string getRestoreTaskId() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskId_, "") };
      inline RestoreTasks& setRestoreTaskId(string restoreTaskId) { DARABONBA_PTR_SET_VALUE(restoreTaskId_, restoreTaskId) };


      // serviceInstanceId Field Functions 
      bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
      void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
      inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
      inline RestoreTasks& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline RestoreTasks& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RestoreTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDetail Field Functions 
      bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
      void deleteStatusDetail() { this->statusDetail_ = nullptr;};
      inline string getStatusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
      inline RestoreTasks& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


    protected:
      // The backup ID.
      shared_ptr<string> backupId_ {};
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The expiration time of the service instance.
      shared_ptr<string> endTime_ {};
      // The update time.
      shared_ptr<string> modifiedTime_ {};
      // The ID of the restore task.
      shared_ptr<string> restoreTaskId_ {};
      // The ID of the service instance.
      shared_ptr<string> serviceInstanceId_ {};
      // The time when the update started.
      shared_ptr<string> startTime_ {};
      // The status of the service instance. Valid values:
      // 
      // *   Restoring
      // *   Restored
      // *   RestoreFailed
      shared_ptr<string> status_ {};
      // The description of the service instance deployment information.
      shared_ptr<string> statusDetail_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->restoreTasks_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRestoreTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRestoreTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRestoreTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoreTasks Field Functions 
    bool hasRestoreTasks() const { return this->restoreTasks_ != nullptr;};
    void deleteRestoreTasks() { this->restoreTasks_ = nullptr;};
    inline const vector<ListRestoreTasksResponseBody::RestoreTasks> & getRestoreTasks() const { DARABONBA_PTR_GET_CONST(restoreTasks_, vector<ListRestoreTasksResponseBody::RestoreTasks>) };
    inline vector<ListRestoreTasksResponseBody::RestoreTasks> getRestoreTasks() { DARABONBA_PTR_GET(restoreTasks_, vector<ListRestoreTasksResponseBody::RestoreTasks>) };
    inline ListRestoreTasksResponseBody& setRestoreTasks(const vector<ListRestoreTasksResponseBody::RestoreTasks> & restoreTasks) { DARABONBA_PTR_SET_VALUE(restoreTasks_, restoreTasks) };
    inline ListRestoreTasksResponseBody& setRestoreTasks(vector<ListRestoreTasksResponseBody::RestoreTasks> && restoreTasks) { DARABONBA_PTR_SET_RVALUE(restoreTasks_, restoreTasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRestoreTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of records returned in this request.
    shared_ptr<int32_t> maxResults_ {};
    // Indicates the read position returned by the current call. An empty value means all data has been read.
    // 
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The list of restore tasks.
    shared_ptr<vector<ListRestoreTasksResponseBody::RestoreTasks>> restoreTasks_ {};
    // Total data count under the current request conditions (optional; not returned by default).
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
