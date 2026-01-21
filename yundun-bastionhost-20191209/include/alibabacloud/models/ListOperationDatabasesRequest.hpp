// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONDATABASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONDATABASESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListOperationDatabasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationDatabasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAddress, databaseAddress_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_TO_JSON(SourceInstanceState, sourceInstanceState_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationDatabasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAddress, databaseAddress_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceState, sourceInstanceState_);
    };
    ListOperationDatabasesRequest() = default ;
    ListOperationDatabasesRequest(const ListOperationDatabasesRequest &) = default ;
    ListOperationDatabasesRequest(ListOperationDatabasesRequest &&) = default ;
    ListOperationDatabasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationDatabasesRequest() = default ;
    ListOperationDatabasesRequest& operator=(const ListOperationDatabasesRequest &) = default ;
    ListOperationDatabasesRequest& operator=(ListOperationDatabasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseAddress_ == nullptr
        && this->databaseName_ == nullptr && this->databaseType_ == nullptr && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr && this->source_ == nullptr && this->sourceInstanceId_ == nullptr && this->sourceInstanceState_ == nullptr; };
    // databaseAddress Field Functions 
    bool hasDatabaseAddress() const { return this->databaseAddress_ != nullptr;};
    void deleteDatabaseAddress() { this->databaseAddress_ = nullptr;};
    inline string getDatabaseAddress() const { DARABONBA_PTR_GET_DEFAULT(databaseAddress_, "") };
    inline ListOperationDatabasesRequest& setDatabaseAddress(string databaseAddress) { DARABONBA_PTR_SET_VALUE(databaseAddress_, databaseAddress) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListOperationDatabasesRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline ListOperationDatabasesRequest& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListOperationDatabasesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListOperationDatabasesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListOperationDatabasesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOperationDatabasesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListOperationDatabasesRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string getSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline ListOperationDatabasesRequest& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


    // sourceInstanceState Field Functions 
    bool hasSourceInstanceState() const { return this->sourceInstanceState_ != nullptr;};
    void deleteSourceInstanceState() { this->sourceInstanceState_ = nullptr;};
    inline string getSourceInstanceState() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceState_, "") };
    inline ListOperationDatabasesRequest& setSourceInstanceState(string sourceInstanceState) { DARABONBA_PTR_SET_VALUE(sourceInstanceState_, sourceInstanceState) };


  protected:
    // The address of the database.
    shared_ptr<string> databaseAddress_ {};
    // The name of the database instance. The system supports exact search.
    shared_ptr<string> databaseName_ {};
    // The type of the database. Valid values:
    // 
    // *   **MySQL**
    // *   **SQLServer**
    // *   **Oracle**
    // *   **PostgreSQL**
    shared_ptr<string> databaseType_ {};
    // The bastion host ID.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The page number. Default value: **1**.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.\\
    // Maximum value: 100. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    shared_ptr<string> pageSize_ {};
    // The region ID of the bastion host.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The source of the database instance. Valid values:
    // 
    // *   **Local**
    // *   **Rds**
    // *   **PolarDB**
    shared_ptr<string> source_ {};
    // The ID of the ApsaraDB RDS instance. The system supports exact search.
    shared_ptr<string> sourceInstanceId_ {};
    // The instance state.
    // 
    // *   **Normal**
    // *   **RemoteRelease**
    shared_ptr<string> sourceInstanceState_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
