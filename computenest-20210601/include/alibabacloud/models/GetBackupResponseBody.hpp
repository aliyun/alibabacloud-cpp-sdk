// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBACKUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBACKUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetBackupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBackupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDetail, statusDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetBackupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDetail, statusDetail_);
    };
    GetBackupResponseBody() = default ;
    GetBackupResponseBody(const GetBackupResponseBody &) = default ;
    GetBackupResponseBody(GetBackupResponseBody &&) = default ;
    GetBackupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBackupResponseBody() = default ;
    GetBackupResponseBody& operator=(const GetBackupResponseBody &) = default ;
    GetBackupResponseBody& operator=(GetBackupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupId_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->endTime_ != nullptr && this->modifiedTime_ != nullptr && this->requestId_ != nullptr
        && this->serviceInstanceId_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->statusDetail_ != nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline GetBackupResponseBody& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetBackupResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetBackupResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetBackupResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetBackupResponseBody& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBackupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline GetBackupResponseBody& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetBackupResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetBackupResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDetail Field Functions 
    bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
    void deleteStatusDetail() { this->statusDetail_ = nullptr;};
    inline string statusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
    inline GetBackupResponseBody& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


  protected:
    // The backup ID.
    std::shared_ptr<string> backupId_ = nullptr;
    // The creation time of the backup task.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the backup task.
    std::shared_ptr<string> description_ = nullptr;
    // The end time of the backup task.
    std::shared_ptr<string> endTime_ = nullptr;
    // The update time of the backup task.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The start time of the backup task.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the backup task.
    // 
    // *   Creating
    // *   Created
    // *   CreateFailed
    // *   Deleting
    // *   Deleted
    // *   DeleteFailed
    std::shared_ptr<string> status_ = nullptr;
    // The description of the deployment instance status.
    std::shared_ptr<string> statusDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
