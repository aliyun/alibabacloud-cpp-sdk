// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECENVBRHEALTHCHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLECENVBRHEALTHCHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class EnableCenVbrHealthCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableCenVbrHealthCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_TO_JSON(HealthCheckOnly, healthCheckOnly_);
      DARABONBA_PTR_TO_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
      DARABONBA_PTR_TO_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VbrInstanceId, vbrInstanceId_);
      DARABONBA_PTR_TO_JSON(VbrInstanceOwnerId, vbrInstanceOwnerId_);
      DARABONBA_PTR_TO_JSON(VbrInstanceRegionId, vbrInstanceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableCenVbrHealthCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_FROM_JSON(HealthCheckOnly, healthCheckOnly_);
      DARABONBA_PTR_FROM_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VbrInstanceId, vbrInstanceId_);
      DARABONBA_PTR_FROM_JSON(VbrInstanceOwnerId, vbrInstanceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VbrInstanceRegionId, vbrInstanceRegionId_);
    };
    EnableCenVbrHealthCheckRequest() = default ;
    EnableCenVbrHealthCheckRequest(const EnableCenVbrHealthCheckRequest &) = default ;
    EnableCenVbrHealthCheckRequest(EnableCenVbrHealthCheckRequest &&) = default ;
    EnableCenVbrHealthCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableCenVbrHealthCheckRequest() = default ;
    EnableCenVbrHealthCheckRequest& operator=(const EnableCenVbrHealthCheckRequest &) = default ;
    EnableCenVbrHealthCheckRequest& operator=(EnableCenVbrHealthCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->description_ != nullptr && this->healthCheckInterval_ != nullptr && this->healthCheckOnly_ != nullptr && this->healthCheckSourceIp_ != nullptr && this->healthCheckTargetIp_ != nullptr
        && this->healthyThreshold_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->vbrInstanceId_ != nullptr && this->vbrInstanceOwnerId_ != nullptr && this->vbrInstanceRegionId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline EnableCenVbrHealthCheckRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline EnableCenVbrHealthCheckRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline EnableCenVbrHealthCheckRequest& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckOnly Field Functions 
    bool hasHealthCheckOnly() const { return this->healthCheckOnly_ != nullptr;};
    void deleteHealthCheckOnly() { this->healthCheckOnly_ = nullptr;};
    inline bool healthCheckOnly() const { DARABONBA_PTR_GET_DEFAULT(healthCheckOnly_, false) };
    inline EnableCenVbrHealthCheckRequest& setHealthCheckOnly(bool healthCheckOnly) { DARABONBA_PTR_SET_VALUE(healthCheckOnly_, healthCheckOnly) };


    // healthCheckSourceIp Field Functions 
    bool hasHealthCheckSourceIp() const { return this->healthCheckSourceIp_ != nullptr;};
    void deleteHealthCheckSourceIp() { this->healthCheckSourceIp_ = nullptr;};
    inline string healthCheckSourceIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckSourceIp_, "") };
    inline EnableCenVbrHealthCheckRequest& setHealthCheckSourceIp(string healthCheckSourceIp) { DARABONBA_PTR_SET_VALUE(healthCheckSourceIp_, healthCheckSourceIp) };


    // healthCheckTargetIp Field Functions 
    bool hasHealthCheckTargetIp() const { return this->healthCheckTargetIp_ != nullptr;};
    void deleteHealthCheckTargetIp() { this->healthCheckTargetIp_ = nullptr;};
    inline string healthCheckTargetIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTargetIp_, "") };
    inline EnableCenVbrHealthCheckRequest& setHealthCheckTargetIp(string healthCheckTargetIp) { DARABONBA_PTR_SET_VALUE(healthCheckTargetIp_, healthCheckTargetIp) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline EnableCenVbrHealthCheckRequest& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline EnableCenVbrHealthCheckRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EnableCenVbrHealthCheckRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline EnableCenVbrHealthCheckRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline EnableCenVbrHealthCheckRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vbrInstanceId Field Functions 
    bool hasVbrInstanceId() const { return this->vbrInstanceId_ != nullptr;};
    void deleteVbrInstanceId() { this->vbrInstanceId_ = nullptr;};
    inline string vbrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceId_, "") };
    inline EnableCenVbrHealthCheckRequest& setVbrInstanceId(string vbrInstanceId) { DARABONBA_PTR_SET_VALUE(vbrInstanceId_, vbrInstanceId) };


    // vbrInstanceOwnerId Field Functions 
    bool hasVbrInstanceOwnerId() const { return this->vbrInstanceOwnerId_ != nullptr;};
    void deleteVbrInstanceOwnerId() { this->vbrInstanceOwnerId_ = nullptr;};
    inline int64_t vbrInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceOwnerId_, 0L) };
    inline EnableCenVbrHealthCheckRequest& setVbrInstanceOwnerId(int64_t vbrInstanceOwnerId) { DARABONBA_PTR_SET_VALUE(vbrInstanceOwnerId_, vbrInstanceOwnerId) };


    // vbrInstanceRegionId Field Functions 
    bool hasVbrInstanceRegionId() const { return this->vbrInstanceRegionId_ != nullptr;};
    void deleteVbrInstanceRegionId() { this->vbrInstanceRegionId_ = nullptr;};
    inline string vbrInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceRegionId_, "") };
    inline EnableCenVbrHealthCheckRequest& setVbrInstanceRegionId(string vbrInstanceRegionId) { DARABONBA_PTR_SET_VALUE(vbrInstanceRegionId_, vbrInstanceRegionId) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The description of the health check.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The time interval at which probe packets are sent during a health check. Unit: seconds. Default value: **2**. Valid values: **2 to 3**.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // Specifies whether to enable probing during the health check. Valid values:
    // 
    // *   **true**: yes
    // 
    //         If you enable probing, the system does not switch to another route if the detected route is not reachable. 
    // 
    //           Make sure that a redundant route is available. Otherwise, network disconnections may occur. 
    // 
    // *   **false** (default): no
    // 
    //         Probing is disabled by default. If a redundant route is specified, the system switches to the redundant route if the detected route is not reachable.
    std::shared_ptr<bool> healthCheckOnly_ = nullptr;
    // The source IP address for the health check. You can set the source IP address in the following ways:
    // 
    // *   **Automatic IP Address** (recommended): The system automatically assigns an IP address from the 100.96.0.0/16 CIDR block.
    // *   **Custom IP Address**: You must specify an idle IP address from the 10.0.0.0/8, 192.168.0.0/16, or 172.16.0.0/12 CIDR block. The specified IP address cannot be the IP address of the VBR on the Alibaba Cloud side, the IP address of the VBR on the customer side, or other IP addresses with which the VBR communicates through the CEN instance.
    std::shared_ptr<string> healthCheckSourceIp_ = nullptr;
    // The destination IP address for the health check.
    // 
    // Set the destination IP address to the IP address of the VBR on the customer side.
    // 
    // This parameter is required.
    std::shared_ptr<string> healthCheckTargetIp_ = nullptr;
    // The number of probe packets that are sent during a health check. Unit: packets. Valid values: **3 to 8**. Default value: **8**.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the VBR.
    // 
    // This parameter is required.
    std::shared_ptr<string> vbrInstanceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VBR belongs.
    // 
    // > This parameter is required if the VBR and the CEN instance belong to different Alibaba Cloud accounts.
    std::shared_ptr<int64_t> vbrInstanceOwnerId_ = nullptr;
    // The ID of the region where the VBR is deployed.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> vbrInstanceRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
