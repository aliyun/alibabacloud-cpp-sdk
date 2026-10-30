// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REJECTVPCPEERCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REJECTVPCPEERCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{
namespace Models
{
  class RejectVpcPeerConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RejectVpcPeerConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    friend void from_json(const Darabonba::Json& j, RejectVpcPeerConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    RejectVpcPeerConnectionRequest() = default ;
    RejectVpcPeerConnectionRequest(const RejectVpcPeerConnectionRequest &) = default ;
    RejectVpcPeerConnectionRequest(RejectVpcPeerConnectionRequest &&) = default ;
    RejectVpcPeerConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RejectVpcPeerConnectionRequest() = default ;
    RejectVpcPeerConnectionRequest& operator=(const RejectVpcPeerConnectionRequest &) = default ;
    RejectVpcPeerConnectionRequest& operator=(RejectVpcPeerConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->instanceId_ == nullptr && this->resourceOwnerAccount_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RejectVpcPeerConnectionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RejectVpcPeerConnectionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RejectVpcPeerConnectionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RejectVpcPeerConnectionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the value from your client. Make sure that the value is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run on the request. Valid values:
    // - **true**: performs a dry run and does not reject the connection request. The system checks whether required parameters are specified, the request format is valid, and service limits are met. If the request fails the dry run, an error is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // - **false** (default): sends the actual request. If the request passes the dry run, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the VPC peering connection instance denied by the acceptor.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
