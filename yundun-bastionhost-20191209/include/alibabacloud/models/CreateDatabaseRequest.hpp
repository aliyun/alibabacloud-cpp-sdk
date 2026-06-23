// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(DatabasePort, databasePort_);
      DARABONBA_PTR_TO_JSON(DatabasePrivateAddress, databasePrivateAddress_);
      DARABONBA_PTR_TO_JSON(DatabasePublicAddress, databasePublicAddress_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceMemberId, instanceMemberId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_TO_JSON(PolarDBEndpointType, polarDBEndpointType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_TO_JSON(SourceInstanceRegionId, sourceInstanceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(DatabasePort, databasePort_);
      DARABONBA_PTR_FROM_JSON(DatabasePrivateAddress, databasePrivateAddress_);
      DARABONBA_PTR_FROM_JSON(DatabasePublicAddress, databasePublicAddress_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceMemberId, instanceMemberId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(PolarDBEndpointType, polarDBEndpointType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceRegionId, sourceInstanceRegionId_);
    };
    CreateDatabaseRequest() = default ;
    CreateDatabaseRequest(const CreateDatabaseRequest &) = default ;
    CreateDatabaseRequest(CreateDatabaseRequest &&) = default ;
    CreateDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatabaseRequest() = default ;
    CreateDatabaseRequest& operator=(const CreateDatabaseRequest &) = default ;
    CreateDatabaseRequest& operator=(CreateDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeAddressType_ == nullptr
        && this->comment_ == nullptr && this->databaseName_ == nullptr && this->databasePort_ == nullptr && this->databasePrivateAddress_ == nullptr && this->databasePublicAddress_ == nullptr
        && this->databaseType_ == nullptr && this->instanceId_ == nullptr && this->instanceMemberId_ == nullptr && this->networkDomainId_ == nullptr && this->polarDBEndpointType_ == nullptr
        && this->regionId_ == nullptr && this->source_ == nullptr && this->sourceInstanceId_ == nullptr && this->sourceInstanceRegionId_ == nullptr; };
    // activeAddressType Field Functions 
    bool hasActiveAddressType() const { return this->activeAddressType_ != nullptr;};
    void deleteActiveAddressType() { this->activeAddressType_ = nullptr;};
    inline string getActiveAddressType() const { DARABONBA_PTR_GET_DEFAULT(activeAddressType_, "") };
    inline CreateDatabaseRequest& setActiveAddressType(string activeAddressType) { DARABONBA_PTR_SET_VALUE(activeAddressType_, activeAddressType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDatabaseRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline CreateDatabaseRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // databasePort Field Functions 
    bool hasDatabasePort() const { return this->databasePort_ != nullptr;};
    void deleteDatabasePort() { this->databasePort_ = nullptr;};
    inline int32_t getDatabasePort() const { DARABONBA_PTR_GET_DEFAULT(databasePort_, 0) };
    inline CreateDatabaseRequest& setDatabasePort(int32_t databasePort) { DARABONBA_PTR_SET_VALUE(databasePort_, databasePort) };


    // databasePrivateAddress Field Functions 
    bool hasDatabasePrivateAddress() const { return this->databasePrivateAddress_ != nullptr;};
    void deleteDatabasePrivateAddress() { this->databasePrivateAddress_ = nullptr;};
    inline string getDatabasePrivateAddress() const { DARABONBA_PTR_GET_DEFAULT(databasePrivateAddress_, "") };
    inline CreateDatabaseRequest& setDatabasePrivateAddress(string databasePrivateAddress) { DARABONBA_PTR_SET_VALUE(databasePrivateAddress_, databasePrivateAddress) };


    // databasePublicAddress Field Functions 
    bool hasDatabasePublicAddress() const { return this->databasePublicAddress_ != nullptr;};
    void deleteDatabasePublicAddress() { this->databasePublicAddress_ = nullptr;};
    inline string getDatabasePublicAddress() const { DARABONBA_PTR_GET_DEFAULT(databasePublicAddress_, "") };
    inline CreateDatabaseRequest& setDatabasePublicAddress(string databasePublicAddress) { DARABONBA_PTR_SET_VALUE(databasePublicAddress_, databasePublicAddress) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline CreateDatabaseRequest& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDatabaseRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceMemberId Field Functions 
    bool hasInstanceMemberId() const { return this->instanceMemberId_ != nullptr;};
    void deleteInstanceMemberId() { this->instanceMemberId_ = nullptr;};
    inline int64_t getInstanceMemberId() const { DARABONBA_PTR_GET_DEFAULT(instanceMemberId_, 0L) };
    inline CreateDatabaseRequest& setInstanceMemberId(int64_t instanceMemberId) { DARABONBA_PTR_SET_VALUE(instanceMemberId_, instanceMemberId) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string getNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline CreateDatabaseRequest& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // polarDBEndpointType Field Functions 
    bool hasPolarDBEndpointType() const { return this->polarDBEndpointType_ != nullptr;};
    void deletePolarDBEndpointType() { this->polarDBEndpointType_ = nullptr;};
    inline string getPolarDBEndpointType() const { DARABONBA_PTR_GET_DEFAULT(polarDBEndpointType_, "") };
    inline CreateDatabaseRequest& setPolarDBEndpointType(string polarDBEndpointType) { DARABONBA_PTR_SET_VALUE(polarDBEndpointType_, polarDBEndpointType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDatabaseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateDatabaseRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string getSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline CreateDatabaseRequest& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


    // sourceInstanceRegionId Field Functions 
    bool hasSourceInstanceRegionId() const { return this->sourceInstanceRegionId_ != nullptr;};
    void deleteSourceInstanceRegionId() { this->sourceInstanceRegionId_ = nullptr;};
    inline string getSourceInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceRegionId_, "") };
    inline CreateDatabaseRequest& setSourceInstanceRegionId(string sourceInstanceRegionId) { DARABONBA_PTR_SET_VALUE(sourceInstanceRegionId_, sourceInstanceRegionId) };


  protected:
    // The address type of the new database. Valid values:
    // 
    // - Public: a public endpoint
    // 
    // - Private: a private endpoint
    // 
    // This parameter is required.
    shared_ptr<string> activeAddressType_ {};
    // The comments on the new database. The comments can be up to 500 characters in length.
    shared_ptr<string> comment_ {};
    // The name of the new database instance. This parameter is required if you set Source to **Local**.
    shared_ptr<string> databaseName_ {};
    // The port used to connect to the database. This parameter is required if you set Source to **Local**.
    shared_ptr<int32_t> databasePort_ {};
    // The private endpoint of the database. You can use an IPv4 address or a domain name.
    // 
    // > This parameter is required if you set ActiveAddressType to Private.
    shared_ptr<string> databasePrivateAddress_ {};
    // The public endpoint of the database. You can use an IPv4 address or a domain name.
    // 
    // > This parameter is required if you set ActiveAddressType to Public.
    shared_ptr<string> databasePublicAddress_ {};
    // The type of the database. Valid values:
    // 
    // - **MySQL**
    // 
    // - **Oracle**
    // 
    // - **PostgreSQL**
    // 
    // - **SQLServer**
    // 
    // This parameter is required.
    shared_ptr<string> databaseType_ {};
    // The ID of the Bastionhost instance.
    // 
    // > Call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the Alibaba Cloud account to which the new RDS or PolarDB database instance belongs.
    shared_ptr<int64_t> instanceMemberId_ {};
    // The ID of the network domain for the new database.
    // 
    // > Call the [ListNetworkDomains](https://help.aliyun.com/document_detail/2758827.html) operation to obtain this parameter.
    shared_ptr<string> networkDomainId_ {};
    // This parameter is required if you set Source to PolarDB. This parameter specifies the endpoint type of the PolarDB database. Valid values:
    // 
    // - Cluster: a cluster endpoint
    // 
    // - Primary: a primary endpoint
    shared_ptr<string> polarDBEndpointType_ {};
    // The region ID of the Bastionhost instance.
    // 
    // > For a list of region IDs and their corresponding region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The source of the new database. Valid values:
    // 
    // - Local: a local database instance
    // 
    // - Rds: an RDS database instance
    // 
    // - PolarDB: a PolarDB database instance
    // 
    // This parameter is required.
    shared_ptr<string> source_ {};
    // The ID of the database instance.
    // 
    // > This parameter is required if you set **Source** to **Rds** or **PolarDB**.
    shared_ptr<string> sourceInstanceId_ {};
    // The region ID of the database instance.
    // 
    // > This parameter is required if **Source** is set to **Rds** or **PolarDB**.
    shared_ptr<string> sourceInstanceRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
