// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBCLUSTERENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBCLUSTERENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateDBClusterEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBClusterEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoAddNewNodes, autoAddNewNodes_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBEndpointDescription, DBEndpointDescription_);
      DARABONBA_PTR_TO_JSON(EndpointConfig, endpointConfig_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(PolarSccTimeoutAction, polarSccTimeoutAction_);
      DARABONBA_PTR_TO_JSON(PolarSccWaitTimeout, polarSccWaitTimeout_);
      DARABONBA_PTR_TO_JSON(ReadWriteMode, readWriteMode_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SccMode, sccMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBClusterEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoAddNewNodes, autoAddNewNodes_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBEndpointDescription, DBEndpointDescription_);
      DARABONBA_PTR_FROM_JSON(EndpointConfig, endpointConfig_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(PolarSccTimeoutAction, polarSccTimeoutAction_);
      DARABONBA_PTR_FROM_JSON(PolarSccWaitTimeout, polarSccWaitTimeout_);
      DARABONBA_PTR_FROM_JSON(ReadWriteMode, readWriteMode_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SccMode, sccMode_);
    };
    CreateDBClusterEndpointRequest() = default ;
    CreateDBClusterEndpointRequest(const CreateDBClusterEndpointRequest &) = default ;
    CreateDBClusterEndpointRequest(CreateDBClusterEndpointRequest &&) = default ;
    CreateDBClusterEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBClusterEndpointRequest() = default ;
    CreateDBClusterEndpointRequest& operator=(const CreateDBClusterEndpointRequest &) = default ;
    CreateDBClusterEndpointRequest& operator=(CreateDBClusterEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoAddNewNodes_ == nullptr
        && this->clientToken_ == nullptr && this->DBClusterId_ == nullptr && this->DBEndpointDescription_ == nullptr && this->endpointConfig_ == nullptr && this->endpointType_ == nullptr
        && this->nodes_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->polarFsInstanceId_ == nullptr && this->polarSccTimeoutAction_ == nullptr
        && this->polarSccWaitTimeout_ == nullptr && this->readWriteMode_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sccMode_ == nullptr; };
    // autoAddNewNodes Field Functions 
    bool hasAutoAddNewNodes() const { return this->autoAddNewNodes_ != nullptr;};
    void deleteAutoAddNewNodes() { this->autoAddNewNodes_ = nullptr;};
    inline string getAutoAddNewNodes() const { DARABONBA_PTR_GET_DEFAULT(autoAddNewNodes_, "") };
    inline CreateDBClusterEndpointRequest& setAutoAddNewNodes(string autoAddNewNodes) { DARABONBA_PTR_SET_VALUE(autoAddNewNodes_, autoAddNewNodes) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBClusterEndpointRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateDBClusterEndpointRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBEndpointDescription Field Functions 
    bool hasDBEndpointDescription() const { return this->DBEndpointDescription_ != nullptr;};
    void deleteDBEndpointDescription() { this->DBEndpointDescription_ = nullptr;};
    inline string getDBEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointDescription_, "") };
    inline CreateDBClusterEndpointRequest& setDBEndpointDescription(string DBEndpointDescription) { DARABONBA_PTR_SET_VALUE(DBEndpointDescription_, DBEndpointDescription) };


    // endpointConfig Field Functions 
    bool hasEndpointConfig() const { return this->endpointConfig_ != nullptr;};
    void deleteEndpointConfig() { this->endpointConfig_ = nullptr;};
    inline string getEndpointConfig() const { DARABONBA_PTR_GET_DEFAULT(endpointConfig_, "") };
    inline CreateDBClusterEndpointRequest& setEndpointConfig(string endpointConfig) { DARABONBA_PTR_SET_VALUE(endpointConfig_, endpointConfig) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline CreateDBClusterEndpointRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline string getNodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
    inline CreateDBClusterEndpointRequest& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDBClusterEndpointRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBClusterEndpointRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline CreateDBClusterEndpointRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // polarSccTimeoutAction Field Functions 
    bool hasPolarSccTimeoutAction() const { return this->polarSccTimeoutAction_ != nullptr;};
    void deletePolarSccTimeoutAction() { this->polarSccTimeoutAction_ = nullptr;};
    inline string getPolarSccTimeoutAction() const { DARABONBA_PTR_GET_DEFAULT(polarSccTimeoutAction_, "") };
    inline CreateDBClusterEndpointRequest& setPolarSccTimeoutAction(string polarSccTimeoutAction) { DARABONBA_PTR_SET_VALUE(polarSccTimeoutAction_, polarSccTimeoutAction) };


    // polarSccWaitTimeout Field Functions 
    bool hasPolarSccWaitTimeout() const { return this->polarSccWaitTimeout_ != nullptr;};
    void deletePolarSccWaitTimeout() { this->polarSccWaitTimeout_ = nullptr;};
    inline string getPolarSccWaitTimeout() const { DARABONBA_PTR_GET_DEFAULT(polarSccWaitTimeout_, "") };
    inline CreateDBClusterEndpointRequest& setPolarSccWaitTimeout(string polarSccWaitTimeout) { DARABONBA_PTR_SET_VALUE(polarSccWaitTimeout_, polarSccWaitTimeout) };


    // readWriteMode Field Functions 
    bool hasReadWriteMode() const { return this->readWriteMode_ != nullptr;};
    void deleteReadWriteMode() { this->readWriteMode_ = nullptr;};
    inline string getReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(readWriteMode_, "") };
    inline CreateDBClusterEndpointRequest& setReadWriteMode(string readWriteMode) { DARABONBA_PTR_SET_VALUE(readWriteMode_, readWriteMode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDBClusterEndpointRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBClusterEndpointRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sccMode Field Functions 
    bool hasSccMode() const { return this->sccMode_ != nullptr;};
    void deleteSccMode() { this->sccMode_ = nullptr;};
    inline string getSccMode() const { DARABONBA_PTR_GET_DEFAULT(sccMode_, "") };
    inline CreateDBClusterEndpointRequest& setSccMode(string sccMode) { DARABONBA_PTR_SET_VALUE(sccMode_, sccMode) };


  protected:
    // Specifies whether to enable automatic association of newly added nodes with the cluster endpoint. Valid values:
    // 
    // *   **Enable**
    // *   **Disable** (default)
    shared_ptr<string> autoAddNewNodes_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. The token is case-sensitive.
    shared_ptr<string> clientToken_ {};
    // The ID of cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The name of the custom cluster endpoint.
    shared_ptr<string> DBEndpointDescription_ {};
    // The advanced configurations of the cluster endpoint. You must specify the configurations in the JSON format. You can specify the configurations of the following attributes: consistency level, transaction splitting, connection pool, and offload reads from the primary node.
    // 
    // *   Specify the consistency level in the format of `{"ConsistLevel":"Consistency level"}`. Default value: 1. Valid values:
    // 
    //     *   **0**: eventual consistency.
    //     *   **1**: session consistency.
    //     *   **2**: global consistency.
    // 
    // *   Specify the transaction splitting feature in the format of `{"DistributedTransaction":"Transaction splitting"}`. Valid values:
    // 
    //     *   **on**: enables the transaction splitting feature. By default, the feature is enabled.
    //     *   **off**: disables the transaction splitting feature.
    // 
    // *   Specify the offload reads from the primary node feature in the format of `{"MasterAcceptReads":"Offload reads from the primary node"}`. Default value: off. Valid values:
    // 
    //     *   **on**: The primary node accepts read requests.
    //     *   **off**: The primary node does not accept read requests.
    // 
    // *   Specify the connection pool in the format of `{"ConnectionPersist":"Connection pool"}`. Default value: off. Valid values:
    // 
    //     *   **off**: disables the connection pool.
    //     *   **Session**: enables the session-level connection pool.
    //     *   **Transaction**: enables the transaction-level connection pool.
    // 
    // >- You can specify the transaction splitting, connection pool, and offload reads from the primary node features for a PolarDB for MySQL cluster only if ReadWriteMode is set to ReadWrite for the cluster endpoint.
    // >- Only PolarDB for MySQL supports global consistency.
    // >- If the **ReadWriteMode** parameter is set to **ReadOnly**, the consistency level must be **0**.
    // >- You can use one record to specify the consistency level, transaction splitting, connection pool, and offload reads from the primary node features, such as `{"ConsistLevel":"1","DistributedTransaction":"on","ConnectionPersist":"Session","MasterAcceptReads":"on"}`.
    // >- The transaction splitting settings are restricted by the consistency level settings. For example, if you set the consistency level to **0**, transaction splitting cannot be enabled. If you set the consistency level to **1** or **2**, transaction splitting can be enabled.
    shared_ptr<string> endpointConfig_ {};
    // The type of the cluster endpoint. Set the value to **Custom**.
    // 
    // This parameter is required.
    shared_ptr<string> endpointType_ {};
    // The reader nodes that you want to associate with the endpoint. If you want to specify multiple reader nodes, separate the reader nodes with commas (,). If you do not specify this parameter, all nodes are used.
    // 
    // >- You need to specify the node IDs for a PolarDB for MySQL cluster.
    // >- You need to specify the role name of each node for a PolarDB for PostgreSQL cluster or a PolarDB for PostgreSQL (Compatible with Oracle) cluster. Example: `Writer, Reader1, Reader2`.
    // >- If you set **ReadWriteMode** to **ReadOnly**, you can associate only one node with the endpoint. If the only node becomes faulty, the cluster endpoint may be unavailable for up to 1 hour. We recommend that you associate more than one node with the cluster endpoint in production environments. We recommend that you associate at least two nodes with the cluster endpoint to improve service availability.
    // >- If you set **ReadWriteMode** to **ReadWrite**, you need to associate at least two nodes with the cluster endpoint.
    // >- PolarDB for MySQL does not impose a limit on the types of the two nodes. If the nodes are read-only nodes, write requests are forwarded to the primary node. 
    // >- PolarDB for PostgreSQL and PolarDB for PostgreSQL (compatible with Oracle) require a primary node.
    shared_ptr<string> nodes_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> polarFsInstanceId_ {};
    // Global consistency timeout strategy. The value range is as follows:
    // - **0**: Send the request to the primary node
    // - **2**: Timeout degradation, when a global consistency read times out, the query operation will automatically degrade to an inconsistent read, and the client will not receive an error message
    shared_ptr<string> polarSccTimeoutAction_ {};
    // Global consistency timeout
    shared_ptr<string> polarSccWaitTimeout_ {};
    // The read/write mode. Valid values:
    // 
    // *   **ReadWrite**: receives and forwards read and write requests. Automatic read/write splitting is enabled.
    // *   **ReadOnly**: The account has the read-only permissions on the database.
    // 
    // Default value: **ReadOnly**.
    shared_ptr<string> readWriteMode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable the global consistency (high-performance mode) feature for the nodes. Valid values:
    // 
    // *   **ON**
    // *   **OFF**
    shared_ptr<string> sccMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
