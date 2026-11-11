// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTORETASKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTORETASKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeRestoreTaskListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreTaskListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RestoreTaskId, restoreTaskId_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreTaskListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RestoreTaskId, restoreTaskId_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
    };
    DescribeRestoreTaskListRequest() = default ;
    DescribeRestoreTaskListRequest(const DescribeRestoreTaskListRequest &) = default ;
    DescribeRestoreTaskListRequest(DescribeRestoreTaskListRequest &&) = default ;
    DescribeRestoreTaskListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreTaskListRequest() = default ;
    DescribeRestoreTaskListRequest& operator=(const DescribeRestoreTaskListRequest &) = default ;
    DescribeRestoreTaskListRequest& operator=(DescribeRestoreTaskListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && this->clientToken_ == nullptr && this->endTimestamp_ == nullptr && this->ownerId_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->restoreTaskId_ == nullptr && this->startTimestamp_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DescribeRestoreTaskListRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeRestoreTaskListRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline int64_t getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
    inline DescribeRestoreTaskListRequest& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeRestoreTaskListRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeRestoreTaskListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRestoreTaskListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // restoreTaskId Field Functions 
    bool hasRestoreTaskId() const { return this->restoreTaskId_ != nullptr;};
    void deleteRestoreTaskId() { this->restoreTaskId_ = nullptr;};
    inline string getRestoreTaskId() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskId_, "") };
    inline DescribeRestoreTaskListRequest& setRestoreTaskId(string restoreTaskId) { DARABONBA_PTR_SET_VALUE(restoreTaskId_, restoreTaskId) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline int64_t getStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
    inline DescribeRestoreTaskListRequest& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


  protected:
    // The ID of the backup plan.
    // 
    // > You must specify either this parameter or `RestoreTaskId`.
    shared_ptr<string> backupPlanId_ {};
    // A client-generated token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    shared_ptr<string> clientToken_ {};
    // The end of the time range to query restore tasks. Specify the time in the UNIX timestamp format. The timestamp is a millisecond-level timestamp.
    shared_ptr<int64_t> endTimestamp_ {};
    shared_ptr<string> ownerId_ {};
    // The page number. The value must be an integer that is greater than or equal to 0. Default value: 0.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries to return on each page. Valid values: 1 to 100.
    // 
    // > The default value is 30.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the restore task. You can specify multiple IDs, separated by commas. You can call the [CreateRestoreTask](https://help.aliyun.com/document_detail/2869836.html) operation to obtain the restore task ID.
    // 
    // > You must specify either this parameter or `BackupPlanId`. Specifying both parameters returns an error.
    shared_ptr<string> restoreTaskId_ {};
    // The beginning of the time range to query restore tasks. Specify the time in the UNIX timestamp format. The timestamp is a millisecond-level timestamp.
    shared_ptr<int64_t> startTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
