// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEDBCLUSTERVERSIONZONALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEDBCLUSTERVERSIONZONALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpgradeDBClusterVersionZonalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeDBClusterVersionZonalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FromTimeService, fromTimeService_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_TO_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TargetDBRevisionVersionCode, targetDBRevisionVersionCode_);
      DARABONBA_PTR_TO_JSON(TargetProxyRevisionVersionCode, targetProxyRevisionVersionCode_);
      DARABONBA_PTR_TO_JSON(UpgradeLabel, upgradeLabel_);
      DARABONBA_PTR_TO_JSON(UpgradePolicy, upgradePolicy_);
      DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeDBClusterVersionZonalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FromTimeService, fromTimeService_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_FROM_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TargetDBRevisionVersionCode, targetDBRevisionVersionCode_);
      DARABONBA_PTR_FROM_JSON(TargetProxyRevisionVersionCode, targetProxyRevisionVersionCode_);
      DARABONBA_PTR_FROM_JSON(UpgradeLabel, upgradeLabel_);
      DARABONBA_PTR_FROM_JSON(UpgradePolicy, upgradePolicy_);
      DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
    };
    UpgradeDBClusterVersionZonalRequest() = default ;
    UpgradeDBClusterVersionZonalRequest(const UpgradeDBClusterVersionZonalRequest &) = default ;
    UpgradeDBClusterVersionZonalRequest(UpgradeDBClusterVersionZonalRequest &&) = default ;
    UpgradeDBClusterVersionZonalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeDBClusterVersionZonalRequest() = default ;
    UpgradeDBClusterVersionZonalRequest& operator=(const UpgradeDBClusterVersionZonalRequest &) = default ;
    UpgradeDBClusterVersionZonalRequest& operator=(UpgradeDBClusterVersionZonalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->fromTimeService_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->plannedEndTime_ == nullptr
        && return this->plannedStartTime_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->targetDBRevisionVersionCode_ == nullptr && return this->targetProxyRevisionVersionCode_ == nullptr
        && return this->upgradeLabel_ == nullptr && return this->upgradePolicy_ == nullptr && return this->upgradeType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fromTimeService Field Functions 
    bool hasFromTimeService() const { return this->fromTimeService_ != nullptr;};
    void deleteFromTimeService() { this->fromTimeService_ = nullptr;};
    inline bool fromTimeService() const { DARABONBA_PTR_GET_DEFAULT(fromTimeService_, false) };
    inline UpgradeDBClusterVersionZonalRequest& setFromTimeService(bool fromTimeService) { DARABONBA_PTR_SET_VALUE(fromTimeService_, fromTimeService) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpgradeDBClusterVersionZonalRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string plannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string plannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpgradeDBClusterVersionZonalRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // targetDBRevisionVersionCode Field Functions 
    bool hasTargetDBRevisionVersionCode() const { return this->targetDBRevisionVersionCode_ != nullptr;};
    void deleteTargetDBRevisionVersionCode() { this->targetDBRevisionVersionCode_ = nullptr;};
    inline string targetDBRevisionVersionCode() const { DARABONBA_PTR_GET_DEFAULT(targetDBRevisionVersionCode_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setTargetDBRevisionVersionCode(string targetDBRevisionVersionCode) { DARABONBA_PTR_SET_VALUE(targetDBRevisionVersionCode_, targetDBRevisionVersionCode) };


    // targetProxyRevisionVersionCode Field Functions 
    bool hasTargetProxyRevisionVersionCode() const { return this->targetProxyRevisionVersionCode_ != nullptr;};
    void deleteTargetProxyRevisionVersionCode() { this->targetProxyRevisionVersionCode_ = nullptr;};
    inline string targetProxyRevisionVersionCode() const { DARABONBA_PTR_GET_DEFAULT(targetProxyRevisionVersionCode_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setTargetProxyRevisionVersionCode(string targetProxyRevisionVersionCode) { DARABONBA_PTR_SET_VALUE(targetProxyRevisionVersionCode_, targetProxyRevisionVersionCode) };


    // upgradeLabel Field Functions 
    bool hasUpgradeLabel() const { return this->upgradeLabel_ != nullptr;};
    void deleteUpgradeLabel() { this->upgradeLabel_ = nullptr;};
    inline string upgradeLabel() const { DARABONBA_PTR_GET_DEFAULT(upgradeLabel_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setUpgradeLabel(string upgradeLabel) { DARABONBA_PTR_SET_VALUE(upgradeLabel_, upgradeLabel) };


    // upgradePolicy Field Functions 
    bool hasUpgradePolicy() const { return this->upgradePolicy_ != nullptr;};
    void deleteUpgradePolicy() { this->upgradePolicy_ = nullptr;};
    inline string upgradePolicy() const { DARABONBA_PTR_GET_DEFAULT(upgradePolicy_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setUpgradePolicy(string upgradePolicy) { DARABONBA_PTR_SET_VALUE(upgradePolicy_, upgradePolicy) };


    // upgradeType Field Functions 
    bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
    void deleteUpgradeType() { this->upgradeType_ = nullptr;};
    inline string upgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setUpgradeType(string upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<bool> fromTimeService_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> plannedEndTime_ = nullptr;
    std::shared_ptr<string> plannedStartTime_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> targetDBRevisionVersionCode_ = nullptr;
    std::shared_ptr<string> targetProxyRevisionVersionCode_ = nullptr;
    std::shared_ptr<string> upgradeLabel_ = nullptr;
    std::shared_ptr<string> upgradePolicy_ = nullptr;
    std::shared_ptr<string> upgradeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
