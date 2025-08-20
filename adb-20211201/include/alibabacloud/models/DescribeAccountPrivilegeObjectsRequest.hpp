// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTPRIVILEGEOBJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTPRIVILEGEOBJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAccountPrivilegeObjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountPrivilegeObjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(ColumnPrivilegeObject, columnPrivilegeObject_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatabasePrivilegeObject, databasePrivilegeObject_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TablePrivilegeObject, tablePrivilegeObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountPrivilegeObjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(ColumnPrivilegeObject, columnPrivilegeObject_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatabasePrivilegeObject, databasePrivilegeObject_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TablePrivilegeObject, tablePrivilegeObject_);
    };
    DescribeAccountPrivilegeObjectsRequest() = default ;
    DescribeAccountPrivilegeObjectsRequest(const DescribeAccountPrivilegeObjectsRequest &) = default ;
    DescribeAccountPrivilegeObjectsRequest(DescribeAccountPrivilegeObjectsRequest &&) = default ;
    DescribeAccountPrivilegeObjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountPrivilegeObjectsRequest() = default ;
    DescribeAccountPrivilegeObjectsRequest& operator=(const DescribeAccountPrivilegeObjectsRequest &) = default ;
    DescribeAccountPrivilegeObjectsRequest& operator=(DescribeAccountPrivilegeObjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->columnPrivilegeObject_ != nullptr && this->DBClusterId_ != nullptr && this->databasePrivilegeObject_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->privilegeType_ != nullptr && this->regionId_ != nullptr && this->tablePrivilegeObject_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountPrivilegeObjectsRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // columnPrivilegeObject Field Functions 
    bool hasColumnPrivilegeObject() const { return this->columnPrivilegeObject_ != nullptr;};
    void deleteColumnPrivilegeObject() { this->columnPrivilegeObject_ = nullptr;};
    inline string columnPrivilegeObject() const { DARABONBA_PTR_GET_DEFAULT(columnPrivilegeObject_, "") };
    inline DescribeAccountPrivilegeObjectsRequest& setColumnPrivilegeObject(string columnPrivilegeObject) { DARABONBA_PTR_SET_VALUE(columnPrivilegeObject_, columnPrivilegeObject) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAccountPrivilegeObjectsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // databasePrivilegeObject Field Functions 
    bool hasDatabasePrivilegeObject() const { return this->databasePrivilegeObject_ != nullptr;};
    void deleteDatabasePrivilegeObject() { this->databasePrivilegeObject_ = nullptr;};
    inline string databasePrivilegeObject() const { DARABONBA_PTR_GET_DEFAULT(databasePrivilegeObject_, "") };
    inline DescribeAccountPrivilegeObjectsRequest& setDatabasePrivilegeObject(string databasePrivilegeObject) { DARABONBA_PTR_SET_VALUE(databasePrivilegeObject_, databasePrivilegeObject) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeAccountPrivilegeObjectsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAccountPrivilegeObjectsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // privilegeType Field Functions 
    bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
    void deletePrivilegeType() { this->privilegeType_ = nullptr;};
    inline string privilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
    inline DescribeAccountPrivilegeObjectsRequest& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAccountPrivilegeObjectsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tablePrivilegeObject Field Functions 
    bool hasTablePrivilegeObject() const { return this->tablePrivilegeObject_ != nullptr;};
    void deleteTablePrivilegeObject() { this->tablePrivilegeObject_ = nullptr;};
    inline string tablePrivilegeObject() const { DARABONBA_PTR_GET_DEFAULT(tablePrivilegeObject_, "") };
    inline DescribeAccountPrivilegeObjectsRequest& setTablePrivilegeObject(string tablePrivilegeObject) { DARABONBA_PTR_SET_VALUE(tablePrivilegeObject_, tablePrivilegeObject) };


  protected:
    // The name of the database account.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // The column name that is used to filter columns.
    std::shared_ptr<string> columnPrivilegeObject_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The database name that is used to filter databases.
    std::shared_ptr<string> databasePrivilegeObject_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 20.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The permission level. Valid values: Database, Table, and Column. Global is not supported.
    std::shared_ptr<string> privilegeType_ = nullptr;
    // The region ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The table name that is used to filter tables.
    std::shared_ptr<string> tablePrivilegeObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
