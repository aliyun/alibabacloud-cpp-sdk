// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTPRIVILEGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTPRIVILEGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAccountPrivilegesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountPrivilegesRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeAccountPrivilegesRequest& obj) { 
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
    DescribeAccountPrivilegesRequest() = default ;
    DescribeAccountPrivilegesRequest(const DescribeAccountPrivilegesRequest &) = default ;
    DescribeAccountPrivilegesRequest(DescribeAccountPrivilegesRequest &&) = default ;
    DescribeAccountPrivilegesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountPrivilegesRequest() = default ;
    DescribeAccountPrivilegesRequest& operator=(const DescribeAccountPrivilegesRequest &) = default ;
    DescribeAccountPrivilegesRequest& operator=(DescribeAccountPrivilegesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && return this->columnPrivilegeObject_ == nullptr && return this->DBClusterId_ == nullptr && return this->databasePrivilegeObject_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->privilegeType_ == nullptr && return this->regionId_ == nullptr && return this->tablePrivilegeObject_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountPrivilegesRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // columnPrivilegeObject Field Functions 
    bool hasColumnPrivilegeObject() const { return this->columnPrivilegeObject_ != nullptr;};
    void deleteColumnPrivilegeObject() { this->columnPrivilegeObject_ = nullptr;};
    inline string columnPrivilegeObject() const { DARABONBA_PTR_GET_DEFAULT(columnPrivilegeObject_, "") };
    inline DescribeAccountPrivilegesRequest& setColumnPrivilegeObject(string columnPrivilegeObject) { DARABONBA_PTR_SET_VALUE(columnPrivilegeObject_, columnPrivilegeObject) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAccountPrivilegesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // databasePrivilegeObject Field Functions 
    bool hasDatabasePrivilegeObject() const { return this->databasePrivilegeObject_ != nullptr;};
    void deleteDatabasePrivilegeObject() { this->databasePrivilegeObject_ = nullptr;};
    inline string databasePrivilegeObject() const { DARABONBA_PTR_GET_DEFAULT(databasePrivilegeObject_, "") };
    inline DescribeAccountPrivilegesRequest& setDatabasePrivilegeObject(string databasePrivilegeObject) { DARABONBA_PTR_SET_VALUE(databasePrivilegeObject_, databasePrivilegeObject) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeAccountPrivilegesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAccountPrivilegesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // privilegeType Field Functions 
    bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
    void deletePrivilegeType() { this->privilegeType_ = nullptr;};
    inline string privilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
    inline DescribeAccountPrivilegesRequest& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAccountPrivilegesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tablePrivilegeObject Field Functions 
    bool hasTablePrivilegeObject() const { return this->tablePrivilegeObject_ != nullptr;};
    void deleteTablePrivilegeObject() { this->tablePrivilegeObject_ = nullptr;};
    inline string tablePrivilegeObject() const { DARABONBA_PTR_GET_DEFAULT(tablePrivilegeObject_, "") };
    inline DescribeAccountPrivilegesRequest& setTablePrivilegeObject(string tablePrivilegeObject) { DARABONBA_PTR_SET_VALUE(tablePrivilegeObject_, tablePrivilegeObject) };


  protected:
    // The name of the database account.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // The columns that you want to query. You can use this parameter to query the permissions of the database account on specific columns. This parameter is available only if the PrivilegeType parameter is set to Column.
    std::shared_ptr<string> columnPrivilegeObject_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The databases that you want to query. You can use this parameter to query the permissions of the database account on specific databases. This parameter is available only if the PrivilegeType parameter is set to Database, Table, or Column.
    std::shared_ptr<string> databasePrivilegeObject_ = nullptr;
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: 20.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The permission level that you want to query. You can call the `DescribeEnabledPrivileges` operation to query the permission level of the database account.
    std::shared_ptr<string> privilegeType_ = nullptr;
    // The region ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The tables that you want to query. You can use this parameter to query the permissions of the database account on specific tables. This parameter can be used together with the DatabasePrivilegeObject parameter. This parameter is available only if the PrivilegeType parameter is set to Table or Column.
    std::shared_ptr<string> tablePrivilegeObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
