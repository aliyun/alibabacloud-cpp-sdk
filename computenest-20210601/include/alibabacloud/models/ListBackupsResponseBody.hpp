// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPSRESPONSEBODY_HPP_
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
  class ListBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Backups, backups_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Backups, backups_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBackupsResponseBody() = default ;
    ListBackupsResponseBody(const ListBackupsResponseBody &) = default ;
    ListBackupsResponseBody(ListBackupsResponseBody &&) = default ;
    ListBackupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupsResponseBody() = default ;
    ListBackupsResponseBody& operator=(const ListBackupsResponseBody &) = default ;
    ListBackupsResponseBody& operator=(ListBackupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Backups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Backups& obj) { 
        DARABONBA_PTR_TO_JSON(BackupId, backupId_);
        DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
        DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusDetail, statusDetail_);
      };
      friend void from_json(const Darabonba::Json& j, Backups& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
        DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
        DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusDetail, statusDetail_);
      };
      Backups() = default ;
      Backups(const Backups &) = default ;
      Backups(Backups &&) = default ;
      Backups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Backups() = default ;
      Backups& operator=(const Backups &) = default ;
      Backups& operator=(Backups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupId_ == nullptr
        && this->backupMode_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->endTime_ == nullptr && this->modifiedTime_ == nullptr
        && this->retentionDays_ == nullptr && this->serviceInstanceId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->statusDetail_ == nullptr; };
      // backupId Field Functions 
      bool hasBackupId() const { return this->backupId_ != nullptr;};
      void deleteBackupId() { this->backupId_ = nullptr;};
      inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
      inline Backups& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


      // backupMode Field Functions 
      bool hasBackupMode() const { return this->backupMode_ != nullptr;};
      void deleteBackupMode() { this->backupMode_ = nullptr;};
      inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
      inline Backups& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Backups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Backups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Backups& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Backups& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // retentionDays Field Functions 
      bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
      void deleteRetentionDays() { this->retentionDays_ = nullptr;};
      inline int32_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
      inline Backups& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


      // serviceInstanceId Field Functions 
      bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
      void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
      inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
      inline Backups& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Backups& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Backups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDetail Field Functions 
      bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
      void deleteStatusDetail() { this->statusDetail_ = nullptr;};
      inline string getStatusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
      inline Backups& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


    protected:
      // The backup ID.
      shared_ptr<string> backupId_ {};
      // The backup mode. Valid values:
      // 
      // *   **Manual**: manual backup
      shared_ptr<string> backupMode_ {};
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The description of the backup task.
      shared_ptr<string> description_ {};
      // The end time of the backup task.
      shared_ptr<string> endTime_ {};
      // The update time.
      shared_ptr<string> modifiedTime_ {};
      // Retention Days. Resources will be cleared upon expiration. Defaults to no expiration if left blank.
      shared_ptr<int32_t> retentionDays_ {};
      // The ID of the service instance.
      shared_ptr<string> serviceInstanceId_ {};
      // The start time of the backup task.
      shared_ptr<string> startTime_ {};
      // The status of the backup task. Valid values:
      // 
      // *   Creating
      // *   Created
      // *   CreateFailed
      // *   Deleting
      // *   Deleted
      // *   DeleteFailed
      shared_ptr<string> status_ {};
      // The description of the service instance deployment information.
      shared_ptr<string> statusDetail_ {};
    };

    virtual bool empty() const override { return this->backups_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // backups Field Functions 
    bool hasBackups() const { return this->backups_ != nullptr;};
    void deleteBackups() { this->backups_ = nullptr;};
    inline const vector<ListBackupsResponseBody::Backups> & getBackups() const { DARABONBA_PTR_GET_CONST(backups_, vector<ListBackupsResponseBody::Backups>) };
    inline vector<ListBackupsResponseBody::Backups> getBackups() { DARABONBA_PTR_GET(backups_, vector<ListBackupsResponseBody::Backups>) };
    inline ListBackupsResponseBody& setBackups(const vector<ListBackupsResponseBody::Backups> & backups) { DARABONBA_PTR_SET_VALUE(backups_, backups) };
    inline ListBackupsResponseBody& setBackups(vector<ListBackupsResponseBody::Backups> && backups) { DARABONBA_PTR_SET_RVALUE(backups_, backups) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListBackupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBackupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBackupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the backup.
    shared_ptr<vector<ListBackupsResponseBody::Backups>> backups_ {};
    // The maximum number of records returned in this request.
    shared_ptr<int32_t> maxResults_ {};
    // Indicates the read position returned by the current call. An empty value means all data has been read.
    // 
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Total data count under the current request conditions (optional; not returned by default).
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
