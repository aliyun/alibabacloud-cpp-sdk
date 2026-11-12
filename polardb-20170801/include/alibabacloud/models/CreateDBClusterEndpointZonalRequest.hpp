// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBCLUSTERENDPOINTZONALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBCLUSTERENDPOINTZONALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateDBClusterEndpointZonalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBClusterEndpointZonalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoAddNewNodes, autoAddNewNodes_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBEndpointDescription, DBEndpointDescription_);
      DARABONBA_PTR_TO_JSON(EndpointConfig, endpointConfig_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PolarSccTimeoutAction, polarSccTimeoutAction_);
      DARABONBA_PTR_TO_JSON(PolarSccWaitTimeout, polarSccWaitTimeout_);
      DARABONBA_PTR_TO_JSON(ReadWriteMode, readWriteMode_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SccMode, sccMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBClusterEndpointZonalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoAddNewNodes, autoAddNewNodes_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBEndpointDescription, DBEndpointDescription_);
      DARABONBA_PTR_FROM_JSON(EndpointConfig, endpointConfig_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PolarSccTimeoutAction, polarSccTimeoutAction_);
      DARABONBA_PTR_FROM_JSON(PolarSccWaitTimeout, polarSccWaitTimeout_);
      DARABONBA_PTR_FROM_JSON(ReadWriteMode, readWriteMode_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SccMode, sccMode_);
    };
    CreateDBClusterEndpointZonalRequest() = default ;
    CreateDBClusterEndpointZonalRequest(const CreateDBClusterEndpointZonalRequest &) = default ;
    CreateDBClusterEndpointZonalRequest(CreateDBClusterEndpointZonalRequest &&) = default ;
    CreateDBClusterEndpointZonalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBClusterEndpointZonalRequest() = default ;
    CreateDBClusterEndpointZonalRequest& operator=(const CreateDBClusterEndpointZonalRequest &) = default ;
    CreateDBClusterEndpointZonalRequest& operator=(CreateDBClusterEndpointZonalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoAddNewNodes_ == nullptr
        && this->clientToken_ == nullptr && this->DBClusterId_ == nullptr && this->DBEndpointDescription_ == nullptr && this->endpointConfig_ == nullptr && this->endpointType_ == nullptr
        && this->nodes_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->polarSccTimeoutAction_ == nullptr && this->polarSccWaitTimeout_ == nullptr
        && this->readWriteMode_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sccMode_ == nullptr; };
    // autoAddNewNodes Field Functions 
    bool hasAutoAddNewNodes() const { return this->autoAddNewNodes_ != nullptr;};
    void deleteAutoAddNewNodes() { this->autoAddNewNodes_ = nullptr;};
    inline string getAutoAddNewNodes() const { DARABONBA_PTR_GET_DEFAULT(autoAddNewNodes_, "") };
    inline CreateDBClusterEndpointZonalRequest& setAutoAddNewNodes(string autoAddNewNodes) { DARABONBA_PTR_SET_VALUE(autoAddNewNodes_, autoAddNewNodes) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBClusterEndpointZonalRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateDBClusterEndpointZonalRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBEndpointDescription Field Functions 
    bool hasDBEndpointDescription() const { return this->DBEndpointDescription_ != nullptr;};
    void deleteDBEndpointDescription() { this->DBEndpointDescription_ = nullptr;};
    inline string getDBEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointDescription_, "") };
    inline CreateDBClusterEndpointZonalRequest& setDBEndpointDescription(string DBEndpointDescription) { DARABONBA_PTR_SET_VALUE(DBEndpointDescription_, DBEndpointDescription) };


    // endpointConfig Field Functions 
    bool hasEndpointConfig() const { return this->endpointConfig_ != nullptr;};
    void deleteEndpointConfig() { this->endpointConfig_ = nullptr;};
    inline string getEndpointConfig() const { DARABONBA_PTR_GET_DEFAULT(endpointConfig_, "") };
    inline CreateDBClusterEndpointZonalRequest& setEndpointConfig(string endpointConfig) { DARABONBA_PTR_SET_VALUE(endpointConfig_, endpointConfig) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline CreateDBClusterEndpointZonalRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline string getNodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
    inline CreateDBClusterEndpointZonalRequest& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDBClusterEndpointZonalRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBClusterEndpointZonalRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // polarSccTimeoutAction Field Functions 
    bool hasPolarSccTimeoutAction() const { return this->polarSccTimeoutAction_ != nullptr;};
    void deletePolarSccTimeoutAction() { this->polarSccTimeoutAction_ = nullptr;};
    inline string getPolarSccTimeoutAction() const { DARABONBA_PTR_GET_DEFAULT(polarSccTimeoutAction_, "") };
    inline CreateDBClusterEndpointZonalRequest& setPolarSccTimeoutAction(string polarSccTimeoutAction) { DARABONBA_PTR_SET_VALUE(polarSccTimeoutAction_, polarSccTimeoutAction) };


    // polarSccWaitTimeout Field Functions 
    bool hasPolarSccWaitTimeout() const { return this->polarSccWaitTimeout_ != nullptr;};
    void deletePolarSccWaitTimeout() { this->polarSccWaitTimeout_ = nullptr;};
    inline string getPolarSccWaitTimeout() const { DARABONBA_PTR_GET_DEFAULT(polarSccWaitTimeout_, "") };
    inline CreateDBClusterEndpointZonalRequest& setPolarSccWaitTimeout(string polarSccWaitTimeout) { DARABONBA_PTR_SET_VALUE(polarSccWaitTimeout_, polarSccWaitTimeout) };


    // readWriteMode Field Functions 
    bool hasReadWriteMode() const { return this->readWriteMode_ != nullptr;};
    void deleteReadWriteMode() { this->readWriteMode_ = nullptr;};
    inline string getReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(readWriteMode_, "") };
    inline CreateDBClusterEndpointZonalRequest& setReadWriteMode(string readWriteMode) { DARABONBA_PTR_SET_VALUE(readWriteMode_, readWriteMode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDBClusterEndpointZonalRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBClusterEndpointZonalRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sccMode Field Functions 
    bool hasSccMode() const { return this->sccMode_ != nullptr;};
    void deleteSccMode() { this->sccMode_ = nullptr;};
    inline string getSccMode() const { DARABONBA_PTR_GET_DEFAULT(sccMode_, "") };
    inline CreateDBClusterEndpointZonalRequest& setSccMode(string sccMode) { DARABONBA_PTR_SET_VALUE(sccMode_, sccMode) };


  protected:
    // Specifies whether to automatically add new nodes to the endpoint. Valid values:
    // 
    // - Enable: New nodes are automatically added to the endpoint.
    // - Disable: New nodes are not automatically added to the endpoint. This is the default value.
    shared_ptr<string> autoAddNewNodes_ {};
    // The client token that is used to ensure the idempotence of the request and prevent duplicate submissions. You can generate the value of this parameter on the client side. The value must be unique across different requests and is case-sensitive. The value can contain up to 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The ID of the PolarDB on ENS cluster. You can call the DescribeDBClustersZonal operation to obtain the ID. Standard PolarDB cluster IDs are not supported. Usage notes: This operation applies only to PolarDB on ENS clusters. It outlines the concepts of edge clouds, activation methods, and how to obtain the edge cluster ID, noting that the CreateDBClusterZonal operation is unavailable and clusters must be created through alternative methods.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The name of the custom cluster endpoint.
    shared_ptr<string> DBEndpointDescription_ {};
    // The advanced configurations of the cluster endpoint. The value is a JSON string. Currently, settings for the consistency level, transaction splitting, offload reads from primary node, and connection pool are supported.
    // * Configure the load balancing policy. Format: {"LoadBalancePolicy":"load balancing policy"}. Valid values:
    //    * **0**: load balancing based on the number of connections. This is the default value.
    //    * **1**: load balancing based on the number of active requests.
    // * Configure the consistency level. Format: `{"ConsistLevel":"consistency level"}`. Valid values:
    //     * **0**: eventual consistency.
    //     * **1**: session consistency. This is the default value.
    //     * **2**: global consistency.
    // * Configure transaction splitting. Format: `{"DistributedTransaction":"transaction splitting"}`. Valid values:
    //     * **on**: enables transaction splitting. This is the default value.
    //     * **off**: disables transaction splitting.
    // * Configure whether the primary node accepts read requests. Format: `{"MasterAcceptReads":"offload reads from primary node"}`. Valid values:
    //     * **on**: The primary node accepts read requests.
    //     * **off**: The primary node does not accept read requests. This is the default value.
    // * Configure the connection pool. Format: `{"ConnectionPersist":"connection pool"}`. Valid values:
    //     * **off**: disables the connection pool. This is the default value.
    //     * **Session**: enables the session-level connection pool.
    //     * **Transaction**: enables the transaction-level connection pool.
    // * Configure parallel query. Format: {"MaxParallelDegree":"parallel query"}. Valid values:
    //     * A specific number of concurrent queries. Example: "MaxParallelDegree":"2".
    //     * **off**: disables parallel query. This is the default value.
    // * Configure automatic request distribution among row store and column store nodes. Format: {"EnableHtapImci":"automatic request distribution among row store and column store nodes"}. Valid values:
    //     * **on**: enables automatic request distribution among row store and column store nodes.
    //     * **off**: disables automatic request distribution among row store and column store nodes. This is the default value.
    // * Configure whether to enable overload protection. Format: {"EnableOverloadThrottle":"overload protection"}. Valid values:
    //    * **on**: enables overload protection.
    //    * **off**: disables overload protection. This is the default value.
    // 
    // > * Transaction splitting, whether the primary node accepts read requests, the connection pool, and overload protection can be configured only when the read/write mode of the PolarDB for MySQL cluster endpoint is set to **read and write (automatic read/write splitting)**.
    // >* When the read/write mode of the PolarDB for MySQL cluster endpoint is set to **read-only**, both **load balancing based on the number of connections** and **load balancing based on the number of active requests** are supported. Cluster endpoints in the **read and write (automatic read/write splitting) mode** only support the **load balancing based on the number of active requests** policy.
    // >* Automatic request distribution among row store and column store nodes can be configured when the read/write mode of the PolarDB for MySQL cluster endpoint is set to **read and write (automatic read/write splitting)**, or when the read/write mode is set to **read-only** and the load balancing policy is set to **load balancing based on the number of active requests**.
    // >* Only PolarDB for MySQL supports setting the consistency level to global consistency.
    // >* If the ReadWriteMode parameter is set to **ReadOnly**, the consistency level can only be set to **0**.
    // >* You can configure the consistency level, transaction splitting, whether the primary node accepts read requests, and the connection pool at the same time. Example: `{"ConsistLevel":"1","DistributedTransaction":"on","ConnectionPersist":"Session","MasterAcceptReads":"on"}`.
    // >* The configuration of transaction splitting is constrained by the consistency level. For example, if the consistency level is set to **0**, transaction splitting cannot be enabled. If the consistency level is set to **1** or **2**, transaction splitting can be enabled.
    shared_ptr<string> endpointConfig_ {};
    // The type of the custom cluster endpoint. Set the value to **Custom**.
    // 
    // This parameter is required.
    shared_ptr<string> endpointType_ {};
    // The read-only nodes to add to the endpoint. Separate multiple node IDs with commas (,). By default, all nodes are added.
    shared_ptr<string> nodes_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The timeout policy for global consistency. Valid values:
    // 
    // - 0: sends the request to the primary node.
    // 
    // - 2: degrades the request upon timeout. If a global consistency read times out, the query is automatically downgraded to regular requests, and the client does not receive an error message.
    shared_ptr<string> polarSccTimeoutAction_ {};
    // The timeout period for global consistency.
    shared_ptr<string> polarSccWaitTimeout_ {};
    // The read/write mode. Valid values:
    // 
    // - ReadWrite: read and write (automatic read/write splitting).
    // - ReadOnly: read-only. This is the default value.
    shared_ptr<string> readWriteMode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable the global consistency (high-performance mode) feature for the node. Valid values:
    // 
    // - ON: enables the feature.
    // 
    // - OFF: disables the feature.
    shared_ptr<string> sccMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
