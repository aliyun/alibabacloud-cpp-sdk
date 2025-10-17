// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FAILOVERDBCLUSTERZONALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FAILOVERDBCLUSTERZONALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class FailoverDBClusterZonalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FailoverDBClusterZonalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RollBackForDisaster, rollBackForDisaster_);
      DARABONBA_PTR_TO_JSON(TargetDBNodeId, targetDBNodeId_);
      DARABONBA_PTR_TO_JSON(TargetZoneType, targetZoneType_);
    };
    friend void from_json(const Darabonba::Json& j, FailoverDBClusterZonalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RollBackForDisaster, rollBackForDisaster_);
      DARABONBA_PTR_FROM_JSON(TargetDBNodeId, targetDBNodeId_);
      DARABONBA_PTR_FROM_JSON(TargetZoneType, targetZoneType_);
    };
    FailoverDBClusterZonalRequest() = default ;
    FailoverDBClusterZonalRequest(const FailoverDBClusterZonalRequest &) = default ;
    FailoverDBClusterZonalRequest(FailoverDBClusterZonalRequest &&) = default ;
    FailoverDBClusterZonalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FailoverDBClusterZonalRequest() = default ;
    FailoverDBClusterZonalRequest& operator=(const FailoverDBClusterZonalRequest &) = default ;
    FailoverDBClusterZonalRequest& operator=(FailoverDBClusterZonalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->rollBackForDisaster_ == nullptr && return this->targetDBNodeId_ == nullptr && return this->targetZoneType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline FailoverDBClusterZonalRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline FailoverDBClusterZonalRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline FailoverDBClusterZonalRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline FailoverDBClusterZonalRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline FailoverDBClusterZonalRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline FailoverDBClusterZonalRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // rollBackForDisaster Field Functions 
    bool hasRollBackForDisaster() const { return this->rollBackForDisaster_ != nullptr;};
    void deleteRollBackForDisaster() { this->rollBackForDisaster_ = nullptr;};
    inline bool rollBackForDisaster() const { DARABONBA_PTR_GET_DEFAULT(rollBackForDisaster_, false) };
    inline FailoverDBClusterZonalRequest& setRollBackForDisaster(bool rollBackForDisaster) { DARABONBA_PTR_SET_VALUE(rollBackForDisaster_, rollBackForDisaster) };


    // targetDBNodeId Field Functions 
    bool hasTargetDBNodeId() const { return this->targetDBNodeId_ != nullptr;};
    void deleteTargetDBNodeId() { this->targetDBNodeId_ = nullptr;};
    inline string targetDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(targetDBNodeId_, "") };
    inline FailoverDBClusterZonalRequest& setTargetDBNodeId(string targetDBNodeId) { DARABONBA_PTR_SET_VALUE(targetDBNodeId_, targetDBNodeId) };


    // targetZoneType Field Functions 
    bool hasTargetZoneType() const { return this->targetZoneType_ != nullptr;};
    void deleteTargetZoneType() { this->targetZoneType_ = nullptr;};
    inline string targetZoneType() const { DARABONBA_PTR_GET_DEFAULT(targetZoneType_, "") };
    inline FailoverDBClusterZonalRequest& setTargetZoneType(string targetZoneType) { DARABONBA_PTR_SET_VALUE(targetZoneType_, targetZoneType) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<bool> rollBackForDisaster_ = nullptr;
    std::shared_ptr<string> targetDBNodeId_ = nullptr;
    std::shared_ptr<string> targetZoneType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
