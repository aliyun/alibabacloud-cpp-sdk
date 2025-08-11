// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHDBINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHDBINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class AttachDBInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachDBInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachMode, attachMode_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_TO_JSON(ForceAttach, forceAttach_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AttachDBInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachMode, attachMode_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_FROM_JSON(ForceAttach, forceAttach_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AttachDBInstancesRequest() = default ;
    AttachDBInstancesRequest(const AttachDBInstancesRequest &) = default ;
    AttachDBInstancesRequest(AttachDBInstancesRequest &&) = default ;
    AttachDBInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachDBInstancesRequest() = default ;
    AttachDBInstancesRequest& operator=(const AttachDBInstancesRequest &) = default ;
    AttachDBInstancesRequest& operator=(AttachDBInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachMode_ != nullptr
        && this->clientToken_ != nullptr && this->DBInstances_ != nullptr && this->forceAttach_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->scalingGroupId_ != nullptr && this->type_ != nullptr; };
    // attachMode Field Functions 
    bool hasAttachMode() const { return this->attachMode_ != nullptr;};
    void deleteAttachMode() { this->attachMode_ = nullptr;};
    inline string attachMode() const { DARABONBA_PTR_GET_DEFAULT(attachMode_, "") };
    inline AttachDBInstancesRequest& setAttachMode(string attachMode) { DARABONBA_PTR_SET_VALUE(attachMode_, attachMode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AttachDBInstancesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstances Field Functions 
    bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
    void deleteDBInstances() { this->DBInstances_ = nullptr;};
    inline const vector<string> & DBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, vector<string>) };
    inline vector<string> DBInstances() { DARABONBA_PTR_GET(DBInstances_, vector<string>) };
    inline AttachDBInstancesRequest& setDBInstances(const vector<string> & DBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, DBInstances) };
    inline AttachDBInstancesRequest& setDBInstances(vector<string> && DBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, DBInstances) };


    // forceAttach Field Functions 
    bool hasForceAttach() const { return this->forceAttach_ != nullptr;};
    void deleteForceAttach() { this->forceAttach_ = nullptr;};
    inline bool forceAttach() const { DARABONBA_PTR_GET_DEFAULT(forceAttach_, false) };
    inline AttachDBInstancesRequest& setForceAttach(bool forceAttach) { DARABONBA_PTR_SET_VALUE(forceAttach_, forceAttach) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AttachDBInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachDBInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AttachDBInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline AttachDBInstancesRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AttachDBInstancesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The mode in which you want to attach the database to the scaling group. Valid values:
    // 
    // *   SecurityIp: adds the private IP addresses of scaled out ECS instances to the IP address whitelist of the database. Take note that you can choose this mode only when the database that you want to attach is an ApsaraDB RDS instance.
    // *   SecurityGroup: adds the security group of the scaling configuration based on which ECS instances are created in the scaling group to the security group whitelist of the database for registration.
    // 
    // Default value: SecurityIp.
    std::shared_ptr<string> attachMode_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that the value is unique among different requests.
    // 
    // The token can only contain ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure the idempotence of a request](https://help.aliyun.com/document_detail/25965.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The IDs of the ApsaraDB RDS instances that you want to attach to the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> DBInstances_ = nullptr;
    // Specifies whether to add the private IP addresses of all ECS instances in the scaling group to the IP address whitelist of the ApsaraDB RDS instance that you want to attach to the scaling group. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> forceAttach_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The type of the database that you want to attach to the scaling group. Valid values:
    // 
    // *   RDS
    // *   Redis
    // *   MongoDB
    // 
    // Default value: RDS.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
