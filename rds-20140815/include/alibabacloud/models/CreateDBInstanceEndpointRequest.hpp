// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateDBInstanceEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(DBInstanceEndpointDescription, DBInstanceEndpointDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceEndpointType, DBInstanceEndpointType_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(NodeItems, nodeItems_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(DBInstanceEndpointDescription, DBInstanceEndpointDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceEndpointType, DBInstanceEndpointType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(NodeItems, nodeItems_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateDBInstanceEndpointRequest() = default ;
    CreateDBInstanceEndpointRequest(const CreateDBInstanceEndpointRequest &) = default ;
    CreateDBInstanceEndpointRequest(CreateDBInstanceEndpointRequest &&) = default ;
    CreateDBInstanceEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceEndpointRequest() = default ;
    CreateDBInstanceEndpointRequest& operator=(const CreateDBInstanceEndpointRequest &) = default ;
    CreateDBInstanceEndpointRequest& operator=(CreateDBInstanceEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeItems& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, NodeItems& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
      };
      NodeItems() = default ;
      NodeItems(const NodeItems &) = default ;
      NodeItems(NodeItems &&) = default ;
      NodeItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeItems() = default ;
      NodeItems& operator=(const NodeItems &) = default ;
      NodeItems& operator=(NodeItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->nodeId_ == nullptr && this->weight_ == nullptr; };
      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline NodeItems& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline NodeItems& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
      inline NodeItems& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // This parameter is required.
      shared_ptr<string> DBInstanceId_ {};
      // This parameter is required.
      shared_ptr<string> nodeId_ {};
      shared_ptr<int64_t> weight_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->connectionStringPrefix_ == nullptr && this->DBInstanceEndpointDescription_ == nullptr && this->DBInstanceEndpointType_ == nullptr && this->DBInstanceId_ == nullptr && this->nodeItems_ == nullptr
        && this->port_ == nullptr && this->privateIpAddress_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerId_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBInstanceEndpointRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string getConnectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline CreateDBInstanceEndpointRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // DBInstanceEndpointDescription Field Functions 
    bool hasDBInstanceEndpointDescription() const { return this->DBInstanceEndpointDescription_ != nullptr;};
    void deleteDBInstanceEndpointDescription() { this->DBInstanceEndpointDescription_ = nullptr;};
    inline string getDBInstanceEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceEndpointDescription_, "") };
    inline CreateDBInstanceEndpointRequest& setDBInstanceEndpointDescription(string DBInstanceEndpointDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpointDescription_, DBInstanceEndpointDescription) };


    // DBInstanceEndpointType Field Functions 
    bool hasDBInstanceEndpointType() const { return this->DBInstanceEndpointType_ != nullptr;};
    void deleteDBInstanceEndpointType() { this->DBInstanceEndpointType_ = nullptr;};
    inline string getDBInstanceEndpointType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceEndpointType_, "") };
    inline CreateDBInstanceEndpointRequest& setDBInstanceEndpointType(string DBInstanceEndpointType) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpointType_, DBInstanceEndpointType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDBInstanceEndpointRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // nodeItems Field Functions 
    bool hasNodeItems() const { return this->nodeItems_ != nullptr;};
    void deleteNodeItems() { this->nodeItems_ = nullptr;};
    inline const vector<CreateDBInstanceEndpointRequest::NodeItems> & getNodeItems() const { DARABONBA_PTR_GET_CONST(nodeItems_, vector<CreateDBInstanceEndpointRequest::NodeItems>) };
    inline vector<CreateDBInstanceEndpointRequest::NodeItems> getNodeItems() { DARABONBA_PTR_GET(nodeItems_, vector<CreateDBInstanceEndpointRequest::NodeItems>) };
    inline CreateDBInstanceEndpointRequest& setNodeItems(const vector<CreateDBInstanceEndpointRequest::NodeItems> & nodeItems) { DARABONBA_PTR_SET_VALUE(nodeItems_, nodeItems) };
    inline CreateDBInstanceEndpointRequest& setNodeItems(vector<CreateDBInstanceEndpointRequest::NodeItems> && nodeItems) { DARABONBA_PTR_SET_RVALUE(nodeItems_, nodeItems) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateDBInstanceEndpointRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateDBInstanceEndpointRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBInstanceEndpointRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBInstanceEndpointRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBInstanceEndpointRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateDBInstanceEndpointRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> connectionStringPrefix_ {};
    shared_ptr<string> DBInstanceEndpointDescription_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceEndpointType_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // This parameter is required.
    shared_ptr<vector<CreateDBInstanceEndpointRequest::NodeItems>> nodeItems_ {};
    // This parameter is required.
    shared_ptr<string> port_ {};
    shared_ptr<string> privateIpAddress_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
