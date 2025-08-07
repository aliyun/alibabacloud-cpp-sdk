// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateDBLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBLinkName, DBLinkName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceDBName, sourceDBName_);
      DARABONBA_PTR_TO_JSON(TargetDBAccount, targetDBAccount_);
      DARABONBA_PTR_TO_JSON(TargetDBInstanceName, targetDBInstanceName_);
      DARABONBA_PTR_TO_JSON(TargetDBName, targetDBName_);
      DARABONBA_PTR_TO_JSON(TargetDBPasswd, targetDBPasswd_);
      DARABONBA_PTR_TO_JSON(TargetIp, targetIp_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBLinkName, DBLinkName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceDBName, sourceDBName_);
      DARABONBA_PTR_FROM_JSON(TargetDBAccount, targetDBAccount_);
      DARABONBA_PTR_FROM_JSON(TargetDBInstanceName, targetDBInstanceName_);
      DARABONBA_PTR_FROM_JSON(TargetDBName, targetDBName_);
      DARABONBA_PTR_FROM_JSON(TargetDBPasswd, targetDBPasswd_);
      DARABONBA_PTR_FROM_JSON(TargetIp, targetIp_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateDBLinkRequest() = default ;
    CreateDBLinkRequest(const CreateDBLinkRequest &) = default ;
    CreateDBLinkRequest(CreateDBLinkRequest &&) = default ;
    CreateDBLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBLinkRequest() = default ;
    CreateDBLinkRequest& operator=(const CreateDBLinkRequest &) = default ;
    CreateDBLinkRequest& operator=(CreateDBLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->DBClusterId_ != nullptr && this->DBLinkName_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->sourceDBName_ != nullptr && this->targetDBAccount_ != nullptr
        && this->targetDBInstanceName_ != nullptr && this->targetDBName_ != nullptr && this->targetDBPasswd_ != nullptr && this->targetIp_ != nullptr && this->targetPort_ != nullptr
        && this->vpcId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBLinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateDBLinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBLinkName Field Functions 
    bool hasDBLinkName() const { return this->DBLinkName_ != nullptr;};
    void deleteDBLinkName() { this->DBLinkName_ = nullptr;};
    inline string DBLinkName() const { DARABONBA_PTR_GET_DEFAULT(DBLinkName_, "") };
    inline CreateDBLinkRequest& setDBLinkName(string DBLinkName) { DARABONBA_PTR_SET_VALUE(DBLinkName_, DBLinkName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDBLinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBLinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBLinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBLinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDBLinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBLinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceDBName Field Functions 
    bool hasSourceDBName() const { return this->sourceDBName_ != nullptr;};
    void deleteSourceDBName() { this->sourceDBName_ = nullptr;};
    inline string sourceDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceDBName_, "") };
    inline CreateDBLinkRequest& setSourceDBName(string sourceDBName) { DARABONBA_PTR_SET_VALUE(sourceDBName_, sourceDBName) };


    // targetDBAccount Field Functions 
    bool hasTargetDBAccount() const { return this->targetDBAccount_ != nullptr;};
    void deleteTargetDBAccount() { this->targetDBAccount_ = nullptr;};
    inline string targetDBAccount() const { DARABONBA_PTR_GET_DEFAULT(targetDBAccount_, "") };
    inline CreateDBLinkRequest& setTargetDBAccount(string targetDBAccount) { DARABONBA_PTR_SET_VALUE(targetDBAccount_, targetDBAccount) };


    // targetDBInstanceName Field Functions 
    bool hasTargetDBInstanceName() const { return this->targetDBInstanceName_ != nullptr;};
    void deleteTargetDBInstanceName() { this->targetDBInstanceName_ = nullptr;};
    inline string targetDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(targetDBInstanceName_, "") };
    inline CreateDBLinkRequest& setTargetDBInstanceName(string targetDBInstanceName) { DARABONBA_PTR_SET_VALUE(targetDBInstanceName_, targetDBInstanceName) };


    // targetDBName Field Functions 
    bool hasTargetDBName() const { return this->targetDBName_ != nullptr;};
    void deleteTargetDBName() { this->targetDBName_ = nullptr;};
    inline string targetDBName() const { DARABONBA_PTR_GET_DEFAULT(targetDBName_, "") };
    inline CreateDBLinkRequest& setTargetDBName(string targetDBName) { DARABONBA_PTR_SET_VALUE(targetDBName_, targetDBName) };


    // targetDBPasswd Field Functions 
    bool hasTargetDBPasswd() const { return this->targetDBPasswd_ != nullptr;};
    void deleteTargetDBPasswd() { this->targetDBPasswd_ = nullptr;};
    inline string targetDBPasswd() const { DARABONBA_PTR_GET_DEFAULT(targetDBPasswd_, "") };
    inline CreateDBLinkRequest& setTargetDBPasswd(string targetDBPasswd) { DARABONBA_PTR_SET_VALUE(targetDBPasswd_, targetDBPasswd) };


    // targetIp Field Functions 
    bool hasTargetIp() const { return this->targetIp_ != nullptr;};
    void deleteTargetIp() { this->targetIp_ = nullptr;};
    inline string targetIp() const { DARABONBA_PTR_GET_DEFAULT(targetIp_, "") };
    inline CreateDBLinkRequest& setTargetIp(string targetIp) { DARABONBA_PTR_SET_VALUE(targetIp_, targetIp) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline string targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, "") };
    inline CreateDBLinkRequest& setTargetPort(string targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateDBLinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can only contain ASCII characters and cannot exceed 64 characters in length. The token is case-sensitive.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the source cluster that the database link connects.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/173433.html) operation to query PolarDB clusters.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the database link.
    // 
    // *   The name must contain lowercase letters and can also contain digits and underscores (_).
    // *   The name must start with a letter and end with a letter or digit.
    // *   The name must be 1 to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBLinkName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query information about regions.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The name of the source database.
    // 
    // >  You can call the [DescribeDatabases](https://help.aliyun.com/document_detail/173558.html) operation to query information about databases in a PolarDB cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceDBName_ = nullptr;
    // The account of the destination database.
    // 
    // >  You can call the [DescribeAccounts](https://help.aliyun.com/document_detail/173549.html) operation to query the account of a PolarDB cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetDBAccount_ = nullptr;
    // The ID of the destination cluster that the database link connects.
    // 
    // > *   If the destination cluster is a user-created Oracle database on an ECS instance, set the value to `null`.
    // > *   You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/173433.html) operation to query PolarDB clusters.
    std::shared_ptr<string> targetDBInstanceName_ = nullptr;
    // The name of the destination database.
    // 
    // >  You can call the [DescribeDatabases](https://help.aliyun.com/document_detail/173558.html) operation to query information about databases in a PolarDB cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetDBName_ = nullptr;
    // The account password of the destination database.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetDBPasswd_ = nullptr;
    // The IP address of the user-created Oracle database on an ECS instance.
    std::shared_ptr<string> targetIp_ = nullptr;
    // The port number of the user-created Oracle database on an ECS instance.
    std::shared_ptr<string> targetPort_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    // 
    // >  You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html) operation to query information about VPCs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
