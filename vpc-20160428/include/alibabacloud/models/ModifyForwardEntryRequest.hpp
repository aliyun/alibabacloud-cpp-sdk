// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFORWARDENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFORWARDENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyForwardEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyForwardEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_TO_JSON(ForwardEntryId, forwardEntryId_);
      DARABONBA_PTR_TO_JSON(ForwardEntryName, forwardEntryName_);
      DARABONBA_PTR_TO_JSON(ForwardTableId, forwardTableId_);
      DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PortBreak, portBreak_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyForwardEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_FROM_JSON(ForwardEntryId, forwardEntryId_);
      DARABONBA_PTR_FROM_JSON(ForwardEntryName, forwardEntryName_);
      DARABONBA_PTR_FROM_JSON(ForwardTableId, forwardTableId_);
      DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PortBreak, portBreak_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyForwardEntryRequest() = default ;
    ModifyForwardEntryRequest(const ModifyForwardEntryRequest &) = default ;
    ModifyForwardEntryRequest(ModifyForwardEntryRequest &&) = default ;
    ModifyForwardEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyForwardEntryRequest() = default ;
    ModifyForwardEntryRequest& operator=(const ModifyForwardEntryRequest &) = default ;
    ModifyForwardEntryRequest& operator=(ModifyForwardEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->externalIp_ == nullptr && this->externalPort_ == nullptr && this->forwardEntryId_ == nullptr && this->forwardEntryName_ == nullptr
        && this->forwardTableId_ == nullptr && this->internalIp_ == nullptr && this->internalPort_ == nullptr && this->ipProtocol_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->portBreak_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyForwardEntryRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyForwardEntryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // externalIp Field Functions 
    bool hasExternalIp() const { return this->externalIp_ != nullptr;};
    void deleteExternalIp() { this->externalIp_ = nullptr;};
    inline string getExternalIp() const { DARABONBA_PTR_GET_DEFAULT(externalIp_, "") };
    inline ModifyForwardEntryRequest& setExternalIp(string externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };


    // externalPort Field Functions 
    bool hasExternalPort() const { return this->externalPort_ != nullptr;};
    void deleteExternalPort() { this->externalPort_ = nullptr;};
    inline string getExternalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
    inline ModifyForwardEntryRequest& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


    // forwardEntryId Field Functions 
    bool hasForwardEntryId() const { return this->forwardEntryId_ != nullptr;};
    void deleteForwardEntryId() { this->forwardEntryId_ = nullptr;};
    inline string getForwardEntryId() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryId_, "") };
    inline ModifyForwardEntryRequest& setForwardEntryId(string forwardEntryId) { DARABONBA_PTR_SET_VALUE(forwardEntryId_, forwardEntryId) };


    // forwardEntryName Field Functions 
    bool hasForwardEntryName() const { return this->forwardEntryName_ != nullptr;};
    void deleteForwardEntryName() { this->forwardEntryName_ = nullptr;};
    inline string getForwardEntryName() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryName_, "") };
    inline ModifyForwardEntryRequest& setForwardEntryName(string forwardEntryName) { DARABONBA_PTR_SET_VALUE(forwardEntryName_, forwardEntryName) };


    // forwardTableId Field Functions 
    bool hasForwardTableId() const { return this->forwardTableId_ != nullptr;};
    void deleteForwardTableId() { this->forwardTableId_ = nullptr;};
    inline string getForwardTableId() const { DARABONBA_PTR_GET_DEFAULT(forwardTableId_, "") };
    inline ModifyForwardEntryRequest& setForwardTableId(string forwardTableId) { DARABONBA_PTR_SET_VALUE(forwardTableId_, forwardTableId) };


    // internalIp Field Functions 
    bool hasInternalIp() const { return this->internalIp_ != nullptr;};
    void deleteInternalIp() { this->internalIp_ = nullptr;};
    inline string getInternalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
    inline ModifyForwardEntryRequest& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


    // internalPort Field Functions 
    bool hasInternalPort() const { return this->internalPort_ != nullptr;};
    void deleteInternalPort() { this->internalPort_ = nullptr;};
    inline string getInternalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
    inline ModifyForwardEntryRequest& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline ModifyForwardEntryRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyForwardEntryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyForwardEntryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // portBreak Field Functions 
    bool hasPortBreak() const { return this->portBreak_ != nullptr;};
    void deletePortBreak() { this->portBreak_ = nullptr;};
    inline bool getPortBreak() const { DARABONBA_PTR_GET_DEFAULT(portBreak_, false) };
    inline ModifyForwardEntryRequest& setPortBreak(bool portBreak) { DARABONBA_PTR_SET_VALUE(portBreak_, portBreak) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyForwardEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyForwardEntryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyForwardEntryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // - true: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // 
    // - false (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // *   When you modify DNAT entries of Internet NAT gateways, this parameter specifies the elastic IP addresses (EIPs) that are used to access the Internet.
    // *   When you modify DNAT entries of Virtual Private Cloud (VPC) NAT gateways, this parameter specifies the NAT IP addresses that are accessed by external networks.
    shared_ptr<string> externalIp_ {};
    // *   The external port that is used to forward traffic when you modify DNAT entries of Internet NAT gateways.
    // 
    //     *   Valid values: **1** to **65535**.
    //     *   If you want to modify the port range, separate port numbers with a forward slash (/), such as `10/20`.
    //     *   If you need to modify **ExternalPort** and **InternalPort** at the same time, and **ExternalPort** specifies a port range, make sure that **InternalPort** also specifies a port range, and both ranges specify the same number of ports. For example, you can set **ExternalPort** to `10/20` and **InternalPort** to `80/90`.
    // 
    // *   The port that is accessed by external networks when you modify DNAT entries of VPC NAT gateways. Valid values: **1** to **65535**.
    shared_ptr<string> externalPort_ {};
    // The ID of the DNAT entry.
    // 
    // This parameter is required.
    shared_ptr<string> forwardEntryId_ {};
    // The new name of the DNAT entry.
    // 
    // The name must be 2 to 128 characters in length. It must start with a letter but cannot start with `http://` or `https://`.
    shared_ptr<string> forwardEntryName_ {};
    // The ID of the DNAT table to which the DNAT entry belongs.
    // 
    // This parameter is required.
    shared_ptr<string> forwardTableId_ {};
    // *   The private IP address of the ECS instance that uses DNAT entries to communicate with the Internet when you modify DNAT entries of Internet NAT gateways.
    // *   The private IP address that uses DNAT entries to communicate when you modify DNAT entries of VPC NAT gateways.
    shared_ptr<string> internalIp_ {};
    // *   The internal port or port range that is used to forward traffic when you modify DNAT entries of Internet NAT gateways. Valid values: **1** to **65535**.
    // *   The port of the destination ECS instance to be mapped when you modify DNAT entries of VPC NAT gateways. Valid values: **1** to **65535**.
    shared_ptr<string> internalPort_ {};
    // The protocol. Valid values:
    // 
    // *   **TCP**
    // *   **UDP**
    // *   **Any**
    shared_ptr<string> ipProtocol_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether to remove limits on the port range. Valid values:
    // 
    // *   **true**
    // *   **false** If an SNAT entry and a DNAT entry use the same public IP address, and you want to specify a port number greater than `1024`, set `PortBreak` to `true`.
    shared_ptr<bool> portBreak_ {};
    // The region ID of the NAT gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
