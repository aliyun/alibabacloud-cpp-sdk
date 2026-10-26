// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONDATABASEACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONDATABASEACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListOperationDatabaseAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationDatabaseAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccountName, databaseAccountName_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OperationProjectId, operationProjectId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationDatabaseAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccountName, databaseAccountName_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OperationProjectId, operationProjectId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListOperationDatabaseAccountsRequest() = default ;
    ListOperationDatabaseAccountsRequest(const ListOperationDatabaseAccountsRequest &) = default ;
    ListOperationDatabaseAccountsRequest(ListOperationDatabaseAccountsRequest &&) = default ;
    ListOperationDatabaseAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationDatabaseAccountsRequest() = default ;
    ListOperationDatabaseAccountsRequest& operator=(const ListOperationDatabaseAccountsRequest &) = default ;
    ListOperationDatabaseAccountsRequest& operator=(ListOperationDatabaseAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseAccountName_ == nullptr
        && this->databaseId_ == nullptr && this->instanceId_ == nullptr && this->operationProjectId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr; };
    // databaseAccountName Field Functions 
    bool hasDatabaseAccountName() const { return this->databaseAccountName_ != nullptr;};
    void deleteDatabaseAccountName() { this->databaseAccountName_ = nullptr;};
    inline string getDatabaseAccountName() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountName_, "") };
    inline ListOperationDatabaseAccountsRequest& setDatabaseAccountName(string databaseAccountName) { DARABONBA_PTR_SET_VALUE(databaseAccountName_, databaseAccountName) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline ListOperationDatabaseAccountsRequest& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListOperationDatabaseAccountsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // operationProjectId Field Functions 
    bool hasOperationProjectId() const { return this->operationProjectId_ != nullptr;};
    void deleteOperationProjectId() { this->operationProjectId_ = nullptr;};
    inline string getOperationProjectId() const { DARABONBA_PTR_GET_DEFAULT(operationProjectId_, "") };
    inline ListOperationDatabaseAccountsRequest& setOperationProjectId(string operationProjectId) { DARABONBA_PTR_SET_VALUE(operationProjectId_, operationProjectId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListOperationDatabaseAccountsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListOperationDatabaseAccountsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOperationDatabaseAccountsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the database account. Exact match.
    shared_ptr<string> databaseAccountName_ {};
    // The database instance ID.
    // > You can invoke the [ListOperationDatabases](https://help.aliyun.com/document_detail/2758856.html) operation to obtain this parameter.
    shared_ptr<string> databaseId_ {};
    // The ID of the Bastionhost instance.
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The project ID.
    shared_ptr<string> operationProjectId_ {};
    // The page number of the current page for a paged query. Default value: **1**.
    shared_ptr<string> pageNumber_ {};
    // The maximum number of entries to return on each page for a paged query.
    // <br>The maximum value of the PageSize parameter is 100. The default number of entries returned per page is 20. If the PageSize parameter is left empty, 20 entries are returned by default.
    // 
    // > Do not leave the PageSize parameter empty.
    shared_ptr<string> pageSize_ {};
    // The region ID of the Bastionhost instance.
    // > For the mappings between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
