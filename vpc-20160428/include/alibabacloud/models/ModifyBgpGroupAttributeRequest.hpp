// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBGPGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBGPGROUPATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyBgpGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBgpGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(BgpGroupId, bgpGroupId_);
      DARABONBA_PTR_TO_JSON(ClearAuthKey, clearAuthKey_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IsFakeAsn, isFakeAsn_);
      DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteQuota, routeQuota_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBgpGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(BgpGroupId, bgpGroupId_);
      DARABONBA_PTR_FROM_JSON(ClearAuthKey, clearAuthKey_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IsFakeAsn, isFakeAsn_);
      DARABONBA_PTR_FROM_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteQuota, routeQuota_);
    };
    ModifyBgpGroupAttributeRequest() = default ;
    ModifyBgpGroupAttributeRequest(const ModifyBgpGroupAttributeRequest &) = default ;
    ModifyBgpGroupAttributeRequest(ModifyBgpGroupAttributeRequest &&) = default ;
    ModifyBgpGroupAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBgpGroupAttributeRequest() = default ;
    ModifyBgpGroupAttributeRequest& operator=(const ModifyBgpGroupAttributeRequest &) = default ;
    ModifyBgpGroupAttributeRequest& operator=(ModifyBgpGroupAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authKey_ != nullptr
        && this->bgpGroupId_ != nullptr && this->clearAuthKey_ != nullptr && this->clientToken_ != nullptr && this->description_ != nullptr && this->isFakeAsn_ != nullptr
        && this->localAsn_ != nullptr && this->name_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->peerAsn_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->routeQuota_ != nullptr; };
    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline ModifyBgpGroupAttributeRequest& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // bgpGroupId Field Functions 
    bool hasBgpGroupId() const { return this->bgpGroupId_ != nullptr;};
    void deleteBgpGroupId() { this->bgpGroupId_ = nullptr;};
    inline string bgpGroupId() const { DARABONBA_PTR_GET_DEFAULT(bgpGroupId_, "") };
    inline ModifyBgpGroupAttributeRequest& setBgpGroupId(string bgpGroupId) { DARABONBA_PTR_SET_VALUE(bgpGroupId_, bgpGroupId) };


    // clearAuthKey Field Functions 
    bool hasClearAuthKey() const { return this->clearAuthKey_ != nullptr;};
    void deleteClearAuthKey() { this->clearAuthKey_ = nullptr;};
    inline bool clearAuthKey() const { DARABONBA_PTR_GET_DEFAULT(clearAuthKey_, false) };
    inline ModifyBgpGroupAttributeRequest& setClearAuthKey(bool clearAuthKey) { DARABONBA_PTR_SET_VALUE(clearAuthKey_, clearAuthKey) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyBgpGroupAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyBgpGroupAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isFakeAsn Field Functions 
    bool hasIsFakeAsn() const { return this->isFakeAsn_ != nullptr;};
    void deleteIsFakeAsn() { this->isFakeAsn_ = nullptr;};
    inline bool isFakeAsn() const { DARABONBA_PTR_GET_DEFAULT(isFakeAsn_, false) };
    inline ModifyBgpGroupAttributeRequest& setIsFakeAsn(bool isFakeAsn) { DARABONBA_PTR_SET_VALUE(isFakeAsn_, isFakeAsn) };


    // localAsn Field Functions 
    bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
    void deleteLocalAsn() { this->localAsn_ = nullptr;};
    inline int64_t localAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, 0L) };
    inline ModifyBgpGroupAttributeRequest& setLocalAsn(int64_t localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyBgpGroupAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyBgpGroupAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyBgpGroupAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peerAsn Field Functions 
    bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
    void deletePeerAsn() { this->peerAsn_ = nullptr;};
    inline int64_t peerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, 0L) };
    inline ModifyBgpGroupAttributeRequest& setPeerAsn(int64_t peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyBgpGroupAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyBgpGroupAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyBgpGroupAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeQuota Field Functions 
    bool hasRouteQuota() const { return this->routeQuota_ != nullptr;};
    void deleteRouteQuota() { this->routeQuota_ = nullptr;};
    inline int32_t routeQuota() const { DARABONBA_PTR_GET_DEFAULT(routeQuota_, 0) };
    inline ModifyBgpGroupAttributeRequest& setRouteQuota(int32_t routeQuota) { DARABONBA_PTR_SET_VALUE(routeQuota_, routeQuota) };


  protected:
    // The authentication key of the BGP group.
    std::shared_ptr<string> authKey_ = nullptr;
    // The BGP group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> bgpGroupId_ = nullptr;
    // Specifies whether to clear the secret key. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> clearAuthKey_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The BGP group description.
    // 
    // The description must be 2 to 256 characters in length. It must start with a letter and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to use a fake AS number. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    // 
    // > A router that runs BGP typically belongs to only one AS. If you need to replace an AS with a new one, but you cannot immediately modify BGP configurations due to business requirements, you can specify a fake AS number to establish a connection with the local end. This ensures service continuity in scenarios such as AS migration or AS merging.
    std::shared_ptr<bool> isFakeAsn_ = nullptr;
    // The custom autonomous system number (ASN) of the BGP on the Alibaba Cloud side. Valid values:
    // 
    // *   **45104**
    // *   **64512~65534**
    // *   **4200000000~4294967294**
    // 
    // >  **65025** is reserved by Alibaba Cloud. Alibaba Cloud uses **45104** as the **local ASN** by default. Custom **local ASNs** may cause loops in multi-line scenarios. Proceed with caution.
    std::shared_ptr<int64_t> localAsn_ = nullptr;
    // The BGP group name.
    // 
    // The name must be 2 to 128 characters in length, and can contain digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ASN of the gateway device in the data center.
    std::shared_ptr<int64_t> peerAsn_ = nullptr;
    // The region ID of the BGP group.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The maximum number of routes supported by a BGP peer. Default value: **110**.
    std::shared_ptr<int32_t> routeQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
