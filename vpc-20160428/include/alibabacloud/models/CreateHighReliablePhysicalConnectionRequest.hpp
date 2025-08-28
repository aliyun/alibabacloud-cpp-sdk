// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateHighReliablePhysicalConnectionRequestApList.hpp>
#include <alibabacloud/models/CreateHighReliablePhysicalConnectionRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateHighReliablePhysicalConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHighReliablePhysicalConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ApList, apList_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeviceAdvancedCapacity, deviceAdvancedCapacity_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HighReliableType, highReliableType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PortType, portType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHighReliablePhysicalConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ApList, apList_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeviceAdvancedCapacity, deviceAdvancedCapacity_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HighReliableType, highReliableType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PortType, portType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateHighReliablePhysicalConnectionRequest() = default ;
    CreateHighReliablePhysicalConnectionRequest(const CreateHighReliablePhysicalConnectionRequest &) = default ;
    CreateHighReliablePhysicalConnectionRequest(CreateHighReliablePhysicalConnectionRequest &&) = default ;
    CreateHighReliablePhysicalConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHighReliablePhysicalConnectionRequest() = default ;
    CreateHighReliablePhysicalConnectionRequest& operator=(const CreateHighReliablePhysicalConnectionRequest &) = default ;
    CreateHighReliablePhysicalConnectionRequest& operator=(CreateHighReliablePhysicalConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->apList_ != nullptr && this->clientToken_ != nullptr && this->deviceAdvancedCapacity_ != nullptr && this->dryRun_ != nullptr && this->highReliableType_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->portType_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tag_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateHighReliablePhysicalConnectionRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // apList Field Functions 
    bool hasApList() const { return this->apList_ != nullptr;};
    void deleteApList() { this->apList_ = nullptr;};
    inline const vector<CreateHighReliablePhysicalConnectionRequestApList> & apList() const { DARABONBA_PTR_GET_CONST(apList_, vector<CreateHighReliablePhysicalConnectionRequestApList>) };
    inline vector<CreateHighReliablePhysicalConnectionRequestApList> apList() { DARABONBA_PTR_GET(apList_, vector<CreateHighReliablePhysicalConnectionRequestApList>) };
    inline CreateHighReliablePhysicalConnectionRequest& setApList(const vector<CreateHighReliablePhysicalConnectionRequestApList> & apList) { DARABONBA_PTR_SET_VALUE(apList_, apList) };
    inline CreateHighReliablePhysicalConnectionRequest& setApList(vector<CreateHighReliablePhysicalConnectionRequestApList> && apList) { DARABONBA_PTR_SET_RVALUE(apList_, apList) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateHighReliablePhysicalConnectionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deviceAdvancedCapacity Field Functions 
    bool hasDeviceAdvancedCapacity() const { return this->deviceAdvancedCapacity_ != nullptr;};
    void deleteDeviceAdvancedCapacity() { this->deviceAdvancedCapacity_ = nullptr;};
    inline const vector<string> & deviceAdvancedCapacity() const { DARABONBA_PTR_GET_CONST(deviceAdvancedCapacity_, vector<string>) };
    inline vector<string> deviceAdvancedCapacity() { DARABONBA_PTR_GET(deviceAdvancedCapacity_, vector<string>) };
    inline CreateHighReliablePhysicalConnectionRequest& setDeviceAdvancedCapacity(const vector<string> & deviceAdvancedCapacity) { DARABONBA_PTR_SET_VALUE(deviceAdvancedCapacity_, deviceAdvancedCapacity) };
    inline CreateHighReliablePhysicalConnectionRequest& setDeviceAdvancedCapacity(vector<string> && deviceAdvancedCapacity) { DARABONBA_PTR_SET_RVALUE(deviceAdvancedCapacity_, deviceAdvancedCapacity) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline CreateHighReliablePhysicalConnectionRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // highReliableType Field Functions 
    bool hasHighReliableType() const { return this->highReliableType_ != nullptr;};
    void deleteHighReliableType() { this->highReliableType_ = nullptr;};
    inline string highReliableType() const { DARABONBA_PTR_GET_DEFAULT(highReliableType_, "") };
    inline CreateHighReliablePhysicalConnectionRequest& setHighReliableType(string highReliableType) { DARABONBA_PTR_SET_VALUE(highReliableType_, highReliableType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateHighReliablePhysicalConnectionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateHighReliablePhysicalConnectionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // portType Field Functions 
    bool hasPortType() const { return this->portType_ != nullptr;};
    void deletePortType() { this->portType_ = nullptr;};
    inline string portType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
    inline CreateHighReliablePhysicalConnectionRequest& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateHighReliablePhysicalConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateHighReliablePhysicalConnectionRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateHighReliablePhysicalConnectionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateHighReliablePhysicalConnectionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateHighReliablePhysicalConnectionRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateHighReliablePhysicalConnectionRequestTag>) };
    inline vector<CreateHighReliablePhysicalConnectionRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateHighReliablePhysicalConnectionRequestTag>) };
    inline CreateHighReliablePhysicalConnectionRequest& setTag(const vector<CreateHighReliablePhysicalConnectionRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateHighReliablePhysicalConnectionRequest& setTag(vector<CreateHighReliablePhysicalConnectionRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The language to display the results. Valid values:
    // 
    // *   **zh-CN** (default): Chinese
    // *   **en-US**: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The access points.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateHighReliablePhysicalConnectionRequestApList>> apList_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The advanced features of the device.
    std::shared_ptr<vector<string>> deviceAdvancedCapacity_ = nullptr;
    // Specifies whether to perform a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<string> dryRun_ = nullptr;
    // The high availability mode. Valid values:
    // 
    // - **MultiApMultiDevice** : This mode supports two access points and two devices, and provides the maximum disaster recovery capability.
    // - **MultiApSingleDevice** : This mode supports two access points and one device, and provides robust disaster recovery capability.
    // - **SingleApMultiDevice** : This mode supports one access point and two devices, and is recommended for non-critical business test and development.
    // - **SingleApMultiConnection** : This mode supports one access point, one device, and multiple physical ports. Only users in the whitelist can use this mode. To use this mode, contact your account manager.
    // 
    // This parameter is required.
    std::shared_ptr<string> highReliableType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The port type. Valid values:
    // 
    // *   **100Base-T**: 100 Mbit/s copper Ethernet port
    // *   **1000Base-T**: 1,000 Mbit/s copper Ethernet port
    // *   **1000Base-LX**: 1,000 Mbit/s single-mode optical port (10 km)
    // *   **10GBase-T**: 10,000 Mbit/s copper Ethernet port
    // *   **10GBase-LR**: 10,000 Mbit/s single-mode optical port (10 km)
    // *   **40GBase-LR**: 40,000 Mbit/s single-mode optical port
    // *   **100GBase-LR**: 100,000 Mbit/s single-mode optical port
    // 
    // >  To use ports 40GBase-LR and 100GBase-LR, you must first contact your account manager.
    // 
    // This parameter is required.
    std::shared_ptr<string> portType_ = nullptr;
    // The region ID of the Express Connect circuit.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateHighReliablePhysicalConnectionRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
