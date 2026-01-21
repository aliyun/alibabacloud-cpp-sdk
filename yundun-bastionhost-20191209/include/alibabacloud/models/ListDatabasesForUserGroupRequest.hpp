// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESFORUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESFORUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListDatabasesForUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesForUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAddress, databaseAddress_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesForUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAddress, databaseAddress_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    ListDatabasesForUserGroupRequest() = default ;
    ListDatabasesForUserGroupRequest(const ListDatabasesForUserGroupRequest &) = default ;
    ListDatabasesForUserGroupRequest(ListDatabasesForUserGroupRequest &&) = default ;
    ListDatabasesForUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesForUserGroupRequest() = default ;
    ListDatabasesForUserGroupRequest& operator=(const ListDatabasesForUserGroupRequest &) = default ;
    ListDatabasesForUserGroupRequest& operator=(ListDatabasesForUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseAddress_ == nullptr
        && this->databaseName_ == nullptr && this->databaseType_ == nullptr && this->instanceId_ == nullptr && this->networkDomainId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->userGroupId_ == nullptr; };
    // databaseAddress Field Functions 
    bool hasDatabaseAddress() const { return this->databaseAddress_ != nullptr;};
    void deleteDatabaseAddress() { this->databaseAddress_ = nullptr;};
    inline string getDatabaseAddress() const { DARABONBA_PTR_GET_DEFAULT(databaseAddress_, "") };
    inline ListDatabasesForUserGroupRequest& setDatabaseAddress(string databaseAddress) { DARABONBA_PTR_SET_VALUE(databaseAddress_, databaseAddress) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListDatabasesForUserGroupRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline ListDatabasesForUserGroupRequest& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDatabasesForUserGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string getNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline ListDatabasesForUserGroupRequest& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDatabasesForUserGroupRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDatabasesForUserGroupRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDatabasesForUserGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListDatabasesForUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The address of the database to query. Only exact match is supported.
    shared_ptr<string> databaseAddress_ {};
    // The name of the database to query.
    shared_ptr<string> databaseName_ {};
    // The engine of the database to query. Valid values:
    // 
    // *   **MySQL**
    // *   **Oracle**
    // *   **PostgreSQL**
    // *   **SQLServer**
    shared_ptr<string> databaseType_ {};
    // The bastion host ID.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> networkDomainId_ {};
    // The page number. Default value: 1.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.\\
    // Valid values: 1 to 100. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // > We recommend that you do not leave this parameter empty.
    shared_ptr<string> pageSize_ {};
    // The region ID of the bastion host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user group to query.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
