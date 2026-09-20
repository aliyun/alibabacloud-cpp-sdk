// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPTABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPTABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeBackupTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupRecordId, backupRecordId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupRecordId, backupRecordId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeBackupTablesRequest() = default ;
    DescribeBackupTablesRequest(const DescribeBackupTablesRequest &) = default ;
    DescribeBackupTablesRequest(DescribeBackupTablesRequest &&) = default ;
    DescribeBackupTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupTablesRequest() = default ;
    DescribeBackupTablesRequest& operator=(const DescribeBackupTablesRequest &) = default ;
    DescribeBackupTablesRequest& operator=(DescribeBackupTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupRecordId_ == nullptr
        && this->clusterId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // backupRecordId Field Functions 
    bool hasBackupRecordId() const { return this->backupRecordId_ != nullptr;};
    void deleteBackupRecordId() { this->backupRecordId_ = nullptr;};
    inline string getBackupRecordId() const { DARABONBA_PTR_GET_DEFAULT(backupRecordId_, "") };
    inline DescribeBackupTablesRequest& setBackupRecordId(string backupRecordId) { DARABONBA_PTR_SET_VALUE(backupRecordId_, backupRecordId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeBackupTablesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupTablesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupTablesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The backup record ID. You can call the DescribeBackupSummary operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> backupRecordId_ {};
    // The ID of the backup cluster.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
