// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceDiagnosisSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceDiagnosisSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RolePreferd, rolePreferd_);
      DARABONBA_PTR_TO_JSON(StartStatus, startStatus_);
      DARABONBA_PTR_TO_JSON(SyncMode, syncMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceDiagnosisSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RolePreferd, rolePreferd_);
      DARABONBA_PTR_FROM_JSON(StartStatus, startStatus_);
      DARABONBA_PTR_FROM_JSON(SyncMode, syncMode_);
    };
    DescribeDBInstanceDiagnosisSummaryRequest() = default ;
    DescribeDBInstanceDiagnosisSummaryRequest(const DescribeDBInstanceDiagnosisSummaryRequest &) = default ;
    DescribeDBInstanceDiagnosisSummaryRequest(DescribeDBInstanceDiagnosisSummaryRequest &&) = default ;
    DescribeDBInstanceDiagnosisSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceDiagnosisSummaryRequest() = default ;
    DescribeDBInstanceDiagnosisSummaryRequest& operator=(const DescribeDBInstanceDiagnosisSummaryRequest &) = default ;
    DescribeDBInstanceDiagnosisSummaryRequest& operator=(DescribeDBInstanceDiagnosisSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->rolePreferd_ == nullptr && return this->startStatus_ == nullptr && return this->syncMode_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceDiagnosisSummaryRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstanceDiagnosisSummaryRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBInstanceDiagnosisSummaryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rolePreferd Field Functions 
    bool hasRolePreferd() const { return this->rolePreferd_ != nullptr;};
    void deleteRolePreferd() { this->rolePreferd_ = nullptr;};
    inline string rolePreferd() const { DARABONBA_PTR_GET_DEFAULT(rolePreferd_, "") };
    inline DescribeDBInstanceDiagnosisSummaryRequest& setRolePreferd(string rolePreferd) { DARABONBA_PTR_SET_VALUE(rolePreferd_, rolePreferd) };


    // startStatus Field Functions 
    bool hasStartStatus() const { return this->startStatus_ != nullptr;};
    void deleteStartStatus() { this->startStatus_ = nullptr;};
    inline string startStatus() const { DARABONBA_PTR_GET_DEFAULT(startStatus_, "") };
    inline DescribeDBInstanceDiagnosisSummaryRequest& setStartStatus(string startStatus) { DARABONBA_PTR_SET_VALUE(startStatus_, startStatus) };


    // syncMode Field Functions 
    bool hasSyncMode() const { return this->syncMode_ != nullptr;};
    void deleteSyncMode() { this->syncMode_ = nullptr;};
    inline string syncMode() const { DARABONBA_PTR_GET_DEFAULT(syncMode_, "") };
    inline DescribeDBInstanceDiagnosisSummaryRequest& setSyncMode(string syncMode) { DARABONBA_PTR_SET_VALUE(syncMode_, syncMode) };


  protected:
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query details about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The page number. Pages start from page 1. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   **20**
    // *   **50**
    // *   **100**
    // 
    // Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The role state of the node. It specifies whether a primary/secondary switchover occurs. Valid values:
    // 
    // *   **normal**: The node role is normal. No primary/secondary switchover occurs.
    // *   **reverse**: The node role is reversed. A primary/secondary switchover occurs.
    std::shared_ptr<string> rolePreferd_ = nullptr;
    // The running state of the node. Valid values:
    // 
    // *   **UP**: The node is running.
    // *   **DOWN**: The node is faulty.
    // 
    // If you do not specify this parameter, the information about nodes in all running states is returned.
    std::shared_ptr<string> startStatus_ = nullptr;
    // The data synchronization state of the node. Valid values:
    // 
    // *   **synced**: The node data is synchronized.
    // *   **notSyncing**: The node data is not synchronized.
    // 
    // If you do not specify this parameter, the information about nodes in all synchronization states is returned.
    std::shared_ptr<string> syncMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
