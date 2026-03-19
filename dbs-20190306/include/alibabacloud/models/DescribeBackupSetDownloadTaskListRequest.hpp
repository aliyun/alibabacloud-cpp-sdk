// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETDOWNLOADTASKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETDOWNLOADTASKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeBackupSetDownloadTaskListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSetDownloadTaskListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadTaskId, backupSetDownloadTaskId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSetDownloadTaskListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadTaskId, backupSetDownloadTaskId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeBackupSetDownloadTaskListRequest() = default ;
    DescribeBackupSetDownloadTaskListRequest(const DescribeBackupSetDownloadTaskListRequest &) = default ;
    DescribeBackupSetDownloadTaskListRequest(DescribeBackupSetDownloadTaskListRequest &&) = default ;
    DescribeBackupSetDownloadTaskListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSetDownloadTaskListRequest() = default ;
    DescribeBackupSetDownloadTaskListRequest& operator=(const DescribeBackupSetDownloadTaskListRequest &) = default ;
    DescribeBackupSetDownloadTaskListRequest& operator=(DescribeBackupSetDownloadTaskListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && this->backupSetDownloadTaskId_ == nullptr && this->clientToken_ == nullptr && this->ownerId_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DescribeBackupSetDownloadTaskListRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupSetDownloadTaskId Field Functions 
    bool hasBackupSetDownloadTaskId() const { return this->backupSetDownloadTaskId_ != nullptr;};
    void deleteBackupSetDownloadTaskId() { this->backupSetDownloadTaskId_ = nullptr;};
    inline string getBackupSetDownloadTaskId() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadTaskId_, "") };
    inline DescribeBackupSetDownloadTaskListRequest& setBackupSetDownloadTaskId(string backupSetDownloadTaskId) { DARABONBA_PTR_SET_VALUE(backupSetDownloadTaskId_, backupSetDownloadTaskId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeBackupSetDownloadTaskListRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeBackupSetDownloadTaskListRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeBackupSetDownloadTaskListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupSetDownloadTaskListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the backup plan. Call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the value of this parameter.
    // 
    // > You must specify either **BackupPlanId** or **BackupSetDownloadTaskId**.
    shared_ptr<string> backupPlanId_ {};
    // The ID of the backup set download task.
    // 
    // - For a full backup, call the [CreateFullBackupSetDownload](https://help.aliyun.com/document_detail/2869842.html) operation to obtain the value of this parameter.
    // 
    // - For an incremental backup, call the [CreateIncrementBackupSetDownload](https://help.aliyun.com/document_detail/2869843.html) operation to obtain the value of this parameter.
    shared_ptr<string> backupSetDownloadTaskId_ {};
    // A client token that is used to ensure the idempotence of the request. This prevents duplicate requests.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> ownerId_ {};
    // The page number. The value must be a non-negative integer that does not exceed the maximum value of the integer type. The default value is 0.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries to return on each page. Valid values: 30, 50, and 100.
    // 
    // > The default value is 30.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
