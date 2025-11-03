// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEEIPADDRESSBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEEIPADDRESSBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AssociateEipAddressBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateEipAddressBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindedInstanceId, bindedInstanceId_);
      DARABONBA_PTR_TO_JSON(BindedInstanceType, bindedInstanceType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateEipAddressBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindedInstanceId, bindedInstanceId_);
      DARABONBA_PTR_FROM_JSON(BindedInstanceType, bindedInstanceType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    AssociateEipAddressBatchRequest() = default ;
    AssociateEipAddressBatchRequest(const AssociateEipAddressBatchRequest &) = default ;
    AssociateEipAddressBatchRequest(AssociateEipAddressBatchRequest &&) = default ;
    AssociateEipAddressBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateEipAddressBatchRequest() = default ;
    AssociateEipAddressBatchRequest& operator=(const AssociateEipAddressBatchRequest &) = default ;
    AssociateEipAddressBatchRequest& operator=(AssociateEipAddressBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindedInstanceId_ == nullptr
        && return this->bindedInstanceType_ == nullptr && return this->clientToken_ == nullptr && return this->instanceIds_ == nullptr && return this->mode_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // bindedInstanceId Field Functions 
    bool hasBindedInstanceId() const { return this->bindedInstanceId_ != nullptr;};
    void deleteBindedInstanceId() { this->bindedInstanceId_ = nullptr;};
    inline string bindedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(bindedInstanceId_, "") };
    inline AssociateEipAddressBatchRequest& setBindedInstanceId(string bindedInstanceId) { DARABONBA_PTR_SET_VALUE(bindedInstanceId_, bindedInstanceId) };


    // bindedInstanceType Field Functions 
    bool hasBindedInstanceType() const { return this->bindedInstanceType_ != nullptr;};
    void deleteBindedInstanceType() { this->bindedInstanceType_ = nullptr;};
    inline string bindedInstanceType() const { DARABONBA_PTR_GET_DEFAULT(bindedInstanceType_, "") };
    inline AssociateEipAddressBatchRequest& setBindedInstanceType(string bindedInstanceType) { DARABONBA_PTR_SET_VALUE(bindedInstanceType_, bindedInstanceType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AssociateEipAddressBatchRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline AssociateEipAddressBatchRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline AssociateEipAddressBatchRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline AssociateEipAddressBatchRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AssociateEipAddressBatchRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssociateEipAddressBatchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AssociateEipAddressBatchRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AssociateEipAddressBatchRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the instance with which you want to associate the EIPs.
    // 
    // The instance can be a NAT gateway or a secondary ENI.
    // 
    // This parameter is required.
    std::shared_ptr<string> bindedInstanceId_ = nullptr;
    // The type of the instance with which you want to associate the EIPs. Valid values:
    // 
    // *   **Nat**: NAT gateway
    // *   **NetworkInterface**: secondary ENI
    // 
    // This parameter is required.
    std::shared_ptr<string> bindedInstanceType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate a token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The EIPs to be associated with the instance.
    // 
    // You must enter at least one EIP. You can enter up to 50 EIPs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The association mode. Set the value to **MULTI_BINDED**, which specifies the Multi-EIP-to-ENI mode.
    // 
    // This parameter is required only when **BindedInstanceType** is set to **NetworkInterface**.
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region to which the EIPs belong. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
