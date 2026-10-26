// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESFORUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESFORUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListDatabasesForUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesForUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAddress, databaseAddress_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesForUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAddress, databaseAddress_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListDatabasesForUserRequest() = default ;
    ListDatabasesForUserRequest(const ListDatabasesForUserRequest &) = default ;
    ListDatabasesForUserRequest(ListDatabasesForUserRequest &&) = default ;
    ListDatabasesForUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesForUserRequest() = default ;
    ListDatabasesForUserRequest& operator=(const ListDatabasesForUserRequest &) = default ;
    ListDatabasesForUserRequest& operator=(ListDatabasesForUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseAddress_ == nullptr
        && this->databaseName_ == nullptr && this->databaseType_ == nullptr && this->instanceId_ == nullptr && this->networkDomainId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr && this->userId_ == nullptr; };
    // databaseAddress Field Functions 
    bool hasDatabaseAddress() const { return this->databaseAddress_ != nullptr;};
    void deleteDatabaseAddress() { this->databaseAddress_ = nullptr;};
    inline string getDatabaseAddress() const { DARABONBA_PTR_GET_DEFAULT(databaseAddress_, "") };
    inline ListDatabasesForUserRequest& setDatabaseAddress(string databaseAddress) { DARABONBA_PTR_SET_VALUE(databaseAddress_, databaseAddress) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListDatabasesForUserRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline ListDatabasesForUserRequest& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDatabasesForUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string getNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline ListDatabasesForUserRequest& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDatabasesForUserRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDatabasesForUserRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDatabasesForUserRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDatabasesForUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListDatabasesForUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The address of the database to query. Only exact match is supported.
    shared_ptr<string> databaseAddress_ {};
    // The name of the database instance to query.
    shared_ptr<string> databaseName_ {};
    // The type of the database to query. Valid values:
    // 
    // - **MySQL**
    // - **Oracle**
    // - **PostgreSQL**
    // - **SQLServer**
    shared_ptr<string> databaseType_ {};
    // The ID of the Bastionhost instance.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the network domain for which you want to query the authorized databases.
    shared_ptr<string> networkDomainId_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<string> pageNumber_ {};
    // The maximum number of entries to return on each page in a paged query.  
    // Maximum value: 100. Default value: 20. If this paging parameter is left empty, 20 entries are returned by default.
    // > Specify a value for this parameter.
    shared_ptr<string> pageSize_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the Bastionhost instance.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user whose authorized databases you want to query.
    // > You can call the [ListUsers](https://help.aliyun.com/document_detail/204522.html) operation to obtain the user ID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
