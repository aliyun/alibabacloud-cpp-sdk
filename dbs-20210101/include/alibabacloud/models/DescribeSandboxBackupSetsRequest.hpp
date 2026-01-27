// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESANDBOXBACKUPSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESANDBOXBACKUPSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class DescribeSandboxBackupSetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSandboxBackupSetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSandboxBackupSetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeSandboxBackupSetsRequest() = default ;
    DescribeSandboxBackupSetsRequest(const DescribeSandboxBackupSetsRequest &) = default ;
    DescribeSandboxBackupSetsRequest(DescribeSandboxBackupSetsRequest &&) = default ;
    DescribeSandboxBackupSetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSandboxBackupSetsRequest() = default ;
    DescribeSandboxBackupSetsRequest& operator=(const DescribeSandboxBackupSetsRequest &) = default ;
    DescribeSandboxBackupSetsRequest& operator=(DescribeSandboxBackupSetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && this->backupSetId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DescribeSandboxBackupSetsRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline DescribeSandboxBackupSetsRequest& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeSandboxBackupSetsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeSandboxBackupSetsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the backup schedule. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/437215.html) operation to query the ID of the backup schedule.
    // 
    // > If your instance is an ApsaraDB RDS for MySQL instance, you can [configure automatic access to a data source](https://help.aliyun.com/document_detail/193091.html) to automatically add the instance to DBS and obtain the ID of the backup schedule.
    // 
    // This parameter is required.
    shared_ptr<string> backupPlanId_ {};
    // The ID of the backup set. If this parameter is specified, only the snapshot of the specified backup set is returned. If this parameter is not specified, all the snapshots of the backup schedule are returned.
    shared_ptr<string> backupSetId_ {};
    // The number of the page to return. Pages start from page 1. Default value: 1.
    shared_ptr<string> pageNumber_ {};
    // The number of entries to return on each page. Valid values:
    // 
    // *   30: This is the default value.
    // *   50\\.
    // *   100\\.
    shared_ptr<string> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
