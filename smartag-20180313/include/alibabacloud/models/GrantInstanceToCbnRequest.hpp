// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTINSTANCETOCBNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTINSTANCETOCBNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class GrantInstanceToCbnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantInstanceToCbnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CcnInstanceId, ccnInstanceId_);
      DARABONBA_PTR_TO_JSON(CenInstanceId, cenInstanceId_);
      DARABONBA_PTR_TO_JSON(CenUid, cenUid_);
      DARABONBA_PTR_TO_JSON(GrantTrafficService, grantTrafficService_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, GrantInstanceToCbnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CcnInstanceId, ccnInstanceId_);
      DARABONBA_PTR_FROM_JSON(CenInstanceId, cenInstanceId_);
      DARABONBA_PTR_FROM_JSON(CenUid, cenUid_);
      DARABONBA_PTR_FROM_JSON(GrantTrafficService, grantTrafficService_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    GrantInstanceToCbnRequest() = default ;
    GrantInstanceToCbnRequest(const GrantInstanceToCbnRequest &) = default ;
    GrantInstanceToCbnRequest(GrantInstanceToCbnRequest &&) = default ;
    GrantInstanceToCbnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantInstanceToCbnRequest() = default ;
    GrantInstanceToCbnRequest& operator=(const GrantInstanceToCbnRequest &) = default ;
    GrantInstanceToCbnRequest& operator=(GrantInstanceToCbnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ccnInstanceId_ == nullptr
        && this->cenInstanceId_ == nullptr && this->cenUid_ == nullptr && this->grantTrafficService_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // ccnInstanceId Field Functions 
    bool hasCcnInstanceId() const { return this->ccnInstanceId_ != nullptr;};
    void deleteCcnInstanceId() { this->ccnInstanceId_ = nullptr;};
    inline string getCcnInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ccnInstanceId_, "") };
    inline GrantInstanceToCbnRequest& setCcnInstanceId(string ccnInstanceId) { DARABONBA_PTR_SET_VALUE(ccnInstanceId_, ccnInstanceId) };


    // cenInstanceId Field Functions 
    bool hasCenInstanceId() const { return this->cenInstanceId_ != nullptr;};
    void deleteCenInstanceId() { this->cenInstanceId_ = nullptr;};
    inline string getCenInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cenInstanceId_, "") };
    inline GrantInstanceToCbnRequest& setCenInstanceId(string cenInstanceId) { DARABONBA_PTR_SET_VALUE(cenInstanceId_, cenInstanceId) };


    // cenUid Field Functions 
    bool hasCenUid() const { return this->cenUid_ != nullptr;};
    void deleteCenUid() { this->cenUid_ = nullptr;};
    inline int64_t getCenUid() const { DARABONBA_PTR_GET_DEFAULT(cenUid_, 0L) };
    inline GrantInstanceToCbnRequest& setCenUid(int64_t cenUid) { DARABONBA_PTR_SET_VALUE(cenUid_, cenUid) };


    // grantTrafficService Field Functions 
    bool hasGrantTrafficService() const { return this->grantTrafficService_ != nullptr;};
    void deleteGrantTrafficService() { this->grantTrafficService_ = nullptr;};
    inline bool getGrantTrafficService() const { DARABONBA_PTR_GET_DEFAULT(grantTrafficService_, false) };
    inline GrantInstanceToCbnRequest& setGrantTrafficService(bool grantTrafficService) { DARABONBA_PTR_SET_VALUE(grantTrafficService_, grantTrafficService) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline GrantInstanceToCbnRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GrantInstanceToCbnRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GrantInstanceToCbnRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GrantInstanceToCbnRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GrantInstanceToCbnRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the CCN instance.
    // 
    // This parameter is required.
    shared_ptr<string> ccnInstanceId_ {};
    // The ID of the CEN instance.
    // 
    // This parameter is required.
    shared_ptr<string> cenInstanceId_ {};
    // The ID of the Alibaba Cloud account to which the CEN instance belongs.
    // 
    // This parameter is required.
    shared_ptr<int64_t> cenUid_ {};
    // Specifies whether to grant the CEN instance permissions to manage network traffic from the CCN instance. Valid values:
    // 
    // *   **true**: grants permissions.
    // *   **false**: does not grant permissions. This is the default value.
    // 
    // >  If you set the value to true and the SAG instance connected to the CCN instance has the secure rerouting feature enabled, you cannot revoke the permissions.
    shared_ptr<bool> grantTrafficService_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the CCN instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.htmll) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
