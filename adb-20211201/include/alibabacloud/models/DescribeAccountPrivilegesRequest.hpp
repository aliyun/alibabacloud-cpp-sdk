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
        && this->columnPrivilegeObject_ == nullptr && this->DBClusterId_ == nullptr && this->databasePrivilegeObject_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->privilegeType_ == nullptr && this->regionId_ == nullptr && this->tablePrivilegeObject_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountPrivilegesRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // columnPrivilegeObject Field Functions 
    bool hasColumnPrivilegeObject() const { return this->columnPrivilegeObject_ != nullptr;};
    void deleteColumnPrivilegeObject() { this->columnPrivilegeObject_ = nullptr;};
    inline string getColumnPrivilegeObject() const { DARABONBA_PTR_GET_DEFAULT(columnPrivilegeObject_, "") };
    inline DescribeAccountPrivilegesRequest& setColumnPrivilegeObject(string columnPrivilegeObject) { DARABONBA_PTR_SET_VALUE(columnPrivilegeObject_, columnPrivilegeObject) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAccountPrivilegesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // databasePrivilegeObject Field Functions 
    bool hasDatabasePrivilegeObject() const { return this->databasePrivilegeObject_ != nullptr;};
    void deleteDatabasePrivilegeObject() { this->databasePrivilegeObject_ = nullptr;};
    inline string getDatabasePrivilegeObject() const { DARABONBA_PTR_GET_DEFAULT(databasePrivilegeObject_, "") };
    inline DescribeAccountPrivilegesRequest& setDatabasePrivilegeObject(string databasePrivilegeObject) { DARABONBA_PTR_SET_VALUE(databasePrivilegeObject_, databasePrivilegeObject) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeAccountPrivilegesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAccountPrivilegesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // privilegeType Field Functions 
    bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
    void deletePrivilegeType() { this->privilegeType_ = nullptr;};
    inline string getPrivilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
    inline DescribeAccountPrivilegesRequest& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAccountPrivilegesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tablePrivilegeObject Field Functions 
    bool hasTablePrivilegeObject() const { return this->tablePrivilegeObject_ != nullptr;};
    void deleteTablePrivilegeObject() { this->tablePrivilegeObject_ = nullptr;};
    inline string getTablePrivilegeObject() const { DARABONBA_PTR_GET_DEFAULT(tablePrivilegeObject_, "") };
    inline DescribeAccountPrivilegesRequest& setTablePrivilegeObject(string tablePrivilegeObject) { DARABONBA_PTR_SET_VALUE(tablePrivilegeObject_, tablePrivilegeObject) };


  protected:
    // The name of the database account whose privileges you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // Filters the results by column name. This parameter is used only when `PrivilegeType` is set to `Column`.
    shared_ptr<string> columnPrivilegeObject_ {};
    // <props="china">The ID of the Enterprise Edition, Basic Edition, or Lakehouse Edition cluster.
    // <props="intl">The ID of the Lakehouse Edition cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Filters the results by database name. This parameter is used only when `PrivilegeType` is set to `Database`, `Table`, or `Column`.
    shared_ptr<string> databasePrivilegeObject_ {};
    // The page number. Pages start at 1. Default value: 1.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<string> pageSize_ {};
    // The privilege level to query. To obtain the valid values for this parameter, call the `DescribeEnabledPrivileges` operation.
    shared_ptr<string> privilegeType_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Filters the results by table name. You can use this parameter with `DatabasePrivilegeObject` to refine the search. This parameter is used only when `PrivilegeType` is set to `Table` or `Column`.
    shared_ptr<string> tablePrivilegeObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
