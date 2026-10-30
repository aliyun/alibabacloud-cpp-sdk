// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVPCPEERCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVPCPEERCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{
namespace Models
{
  class DeleteVpcPeerConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVpcPeerConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVpcPeerConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteVpcPeerConnectionRequest() = default ;
    DeleteVpcPeerConnectionRequest(const DeleteVpcPeerConnectionRequest &) = default ;
    DeleteVpcPeerConnectionRequest(DeleteVpcPeerConnectionRequest &&) = default ;
    DeleteVpcPeerConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVpcPeerConnectionRequest() = default ;
    DeleteVpcPeerConnectionRequest& operator=(const DeleteVpcPeerConnectionRequest &) = default ;
    DeleteVpcPeerConnectionRequest& operator=(DeleteVpcPeerConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->force_ == nullptr && this->instanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteVpcPeerConnectionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteVpcPeerConnectionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteVpcPeerConnectionRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteVpcPeerConnectionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that the value is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run on the request. Valid values:
    // - **true**: performs only a dry run and does not delete the VPC peering connection. The system checks whether required parameters are specified, the request format is valid, and service limits are met. If the request fails the dry run, an error is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // - **false** (default): performs a dry run and sends the request. If the request passes the dry run, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to force delete the VPC peering connection. Valid values:
    // 
    // - **false** (default): Does not force delete the VPC peering connection. Before you delete the connection, you must delete the route entry that points to the VPC peering connection from the routing table.
    // 
    // - **true**: The system will force delete the VPC peering connection. The system deletes the route entry that points to the VPC peering connection from the VPC routing table.
    shared_ptr<bool> force_ {};
    // The instance ID of the VPC peering connection that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
