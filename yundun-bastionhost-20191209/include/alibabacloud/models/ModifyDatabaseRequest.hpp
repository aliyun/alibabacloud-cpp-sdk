// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(DatabasePort, databasePort_);
      DARABONBA_PTR_TO_JSON(DatabasePrivateAddress, databasePrivateAddress_);
      DARABONBA_PTR_TO_JSON(DatabasePublicAddress, databasePublicAddress_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(DatabasePort, databasePort_);
      DARABONBA_PTR_FROM_JSON(DatabasePrivateAddress, databasePrivateAddress_);
      DARABONBA_PTR_FROM_JSON(DatabasePublicAddress, databasePublicAddress_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
    };
    ModifyDatabaseRequest() = default ;
    ModifyDatabaseRequest(const ModifyDatabaseRequest &) = default ;
    ModifyDatabaseRequest(ModifyDatabaseRequest &&) = default ;
    ModifyDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDatabaseRequest() = default ;
    ModifyDatabaseRequest& operator=(const ModifyDatabaseRequest &) = default ;
    ModifyDatabaseRequest& operator=(ModifyDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeAddressType_ == nullptr
        && this->comment_ == nullptr && this->databaseId_ == nullptr && this->databaseName_ == nullptr && this->databasePort_ == nullptr && this->databasePrivateAddress_ == nullptr
        && this->databasePublicAddress_ == nullptr && this->instanceId_ == nullptr && this->networkDomainId_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr
        && this->sourceInstanceId_ == nullptr; };
    // activeAddressType Field Functions 
    bool hasActiveAddressType() const { return this->activeAddressType_ != nullptr;};
    void deleteActiveAddressType() { this->activeAddressType_ = nullptr;};
    inline string getActiveAddressType() const { DARABONBA_PTR_GET_DEFAULT(activeAddressType_, "") };
    inline ModifyDatabaseRequest& setActiveAddressType(string activeAddressType) { DARABONBA_PTR_SET_VALUE(activeAddressType_, activeAddressType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ModifyDatabaseRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline ModifyDatabaseRequest& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ModifyDatabaseRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // databasePort Field Functions 
    bool hasDatabasePort() const { return this->databasePort_ != nullptr;};
    void deleteDatabasePort() { this->databasePort_ = nullptr;};
    inline string getDatabasePort() const { DARABONBA_PTR_GET_DEFAULT(databasePort_, "") };
    inline ModifyDatabaseRequest& setDatabasePort(string databasePort) { DARABONBA_PTR_SET_VALUE(databasePort_, databasePort) };


    // databasePrivateAddress Field Functions 
    bool hasDatabasePrivateAddress() const { return this->databasePrivateAddress_ != nullptr;};
    void deleteDatabasePrivateAddress() { this->databasePrivateAddress_ = nullptr;};
    inline string getDatabasePrivateAddress() const { DARABONBA_PTR_GET_DEFAULT(databasePrivateAddress_, "") };
    inline ModifyDatabaseRequest& setDatabasePrivateAddress(string databasePrivateAddress) { DARABONBA_PTR_SET_VALUE(databasePrivateAddress_, databasePrivateAddress) };


    // databasePublicAddress Field Functions 
    bool hasDatabasePublicAddress() const { return this->databasePublicAddress_ != nullptr;};
    void deleteDatabasePublicAddress() { this->databasePublicAddress_ = nullptr;};
    inline string getDatabasePublicAddress() const { DARABONBA_PTR_GET_DEFAULT(databasePublicAddress_, "") };
    inline ModifyDatabaseRequest& setDatabasePublicAddress(string databasePublicAddress) { DARABONBA_PTR_SET_VALUE(databasePublicAddress_, databasePublicAddress) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDatabaseRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string getNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline ModifyDatabaseRequest& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ModifyDatabaseRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDatabaseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string getSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline ModifyDatabaseRequest& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


  protected:
    // The address type of the database after the modification. Valid values:
    // - **Public**: public network address
    // - **Private**: private network address
    shared_ptr<string> activeAddressType_ {};
    // The description of the database after the modification.
    shared_ptr<string> comment_ {};
    // The ID of the database to be modified.
    // 
    // This parameter is required.
    shared_ptr<string> databaseId_ {};
    // The name of the database instance after the modification.
    shared_ptr<string> databaseName_ {};
    // The port of the database after the modification.
    shared_ptr<string> databasePort_ {};
    // The private network address of the database after the modification. IPv4 addresses and domain name formats are supported.
    shared_ptr<string> databasePrivateAddress_ {};
    // The public address of the database after the modification. Both IPv4 addresses and domain names are supported.
    shared_ptr<string> databasePublicAddress_ {};
    // The ID of the Bastionhost instance to which the database to be modified belongs.
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the network domain to which the database belongs after the modification.
    // > You can call the [ListNetworkDomains ](https://help.aliyun.com/document_detail/2758827.html) operation to obtain this parameter.
    shared_ptr<string> networkDomainId_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the Bastionhost instance to which the database to be modified belongs.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The instance ID of the database to be modified.  
    // > This parameter is required if **Source** is set to **Rds** or **PolarDB**.
    shared_ptr<string> sourceInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
