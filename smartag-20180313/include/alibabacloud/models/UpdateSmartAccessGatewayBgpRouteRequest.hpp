// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESMARTACCESSGATEWAYBGPROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESMARTACCESSGATEWAYBGPROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class UpdateSmartAccessGatewayBgpRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSmartAccessGatewayBgpRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrossAccount, crossAccount_);
      DARABONBA_PTR_TO_JSON(HoldTime, holdTime_);
      DARABONBA_PTR_TO_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_TO_JSON(LocalAs, localAs_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceUid, resourceUid_);
      DARABONBA_PTR_TO_JSON(RouterId, routerId_);
      DARABONBA_PTR_TO_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_TO_JSON(SagSn, sagSn_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSmartAccessGatewayBgpRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossAccount, crossAccount_);
      DARABONBA_PTR_FROM_JSON(HoldTime, holdTime_);
      DARABONBA_PTR_FROM_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_FROM_JSON(LocalAs, localAs_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceUid, resourceUid_);
      DARABONBA_PTR_FROM_JSON(RouterId, routerId_);
      DARABONBA_PTR_FROM_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_FROM_JSON(SagSn, sagSn_);
    };
    UpdateSmartAccessGatewayBgpRouteRequest() = default ;
    UpdateSmartAccessGatewayBgpRouteRequest(const UpdateSmartAccessGatewayBgpRouteRequest &) = default ;
    UpdateSmartAccessGatewayBgpRouteRequest(UpdateSmartAccessGatewayBgpRouteRequest &&) = default ;
    UpdateSmartAccessGatewayBgpRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSmartAccessGatewayBgpRouteRequest() = default ;
    UpdateSmartAccessGatewayBgpRouteRequest& operator=(const UpdateSmartAccessGatewayBgpRouteRequest &) = default ;
    UpdateSmartAccessGatewayBgpRouteRequest& operator=(UpdateSmartAccessGatewayBgpRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crossAccount_ == nullptr
        && this->holdTime_ == nullptr && this->keepAlive_ == nullptr && this->localAs_ == nullptr && this->regionId_ == nullptr && this->resourceUid_ == nullptr
        && this->routerId_ == nullptr && this->sagInsId_ == nullptr && this->sagSn_ == nullptr; };
    // crossAccount Field Functions 
    bool hasCrossAccount() const { return this->crossAccount_ != nullptr;};
    void deleteCrossAccount() { this->crossAccount_ = nullptr;};
    inline bool getCrossAccount() const { DARABONBA_PTR_GET_DEFAULT(crossAccount_, false) };
    inline UpdateSmartAccessGatewayBgpRouteRequest& setCrossAccount(bool crossAccount) { DARABONBA_PTR_SET_VALUE(crossAccount_, crossAccount) };


    // holdTime Field Functions 
    bool hasHoldTime() const { return this->holdTime_ != nullptr;};
    void deleteHoldTime() { this->holdTime_ = nullptr;};
    inline int32_t getHoldTime() const { DARABONBA_PTR_GET_DEFAULT(holdTime_, 0) };
    inline UpdateSmartAccessGatewayBgpRouteRequest& setHoldTime(int32_t holdTime) { DARABONBA_PTR_SET_VALUE(holdTime_, holdTime) };


    // keepAlive Field Functions 
    bool hasKeepAlive() const { return this->keepAlive_ != nullptr;};
    void deleteKeepAlive() { this->keepAlive_ = nullptr;};
    inline int32_t getKeepAlive() const { DARABONBA_PTR_GET_DEFAULT(keepAlive_, 0) };
    inline UpdateSmartAccessGatewayBgpRouteRequest& setKeepAlive(int32_t keepAlive) { DARABONBA_PTR_SET_VALUE(keepAlive_, keepAlive) };


    // localAs Field Functions 
    bool hasLocalAs() const { return this->localAs_ != nullptr;};
    void deleteLocalAs() { this->localAs_ = nullptr;};
    inline int64_t getLocalAs() const { DARABONBA_PTR_GET_DEFAULT(localAs_, 0L) };
    inline UpdateSmartAccessGatewayBgpRouteRequest& setLocalAs(int64_t localAs) { DARABONBA_PTR_SET_VALUE(localAs_, localAs) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateSmartAccessGatewayBgpRouteRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceUid Field Functions 
    bool hasResourceUid() const { return this->resourceUid_ != nullptr;};
    void deleteResourceUid() { this->resourceUid_ = nullptr;};
    inline string getResourceUid() const { DARABONBA_PTR_GET_DEFAULT(resourceUid_, "") };
    inline UpdateSmartAccessGatewayBgpRouteRequest& setResourceUid(string resourceUid) { DARABONBA_PTR_SET_VALUE(resourceUid_, resourceUid) };


    // routerId Field Functions 
    bool hasRouterId() const { return this->routerId_ != nullptr;};
    void deleteRouterId() { this->routerId_ = nullptr;};
    inline string getRouterId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
    inline UpdateSmartAccessGatewayBgpRouteRequest& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


    // sagInsId Field Functions 
    bool hasSagInsId() const { return this->sagInsId_ != nullptr;};
    void deleteSagInsId() { this->sagInsId_ = nullptr;};
    inline string getSagInsId() const { DARABONBA_PTR_GET_DEFAULT(sagInsId_, "") };
    inline UpdateSmartAccessGatewayBgpRouteRequest& setSagInsId(string sagInsId) { DARABONBA_PTR_SET_VALUE(sagInsId_, sagInsId) };


    // sagSn Field Functions 
    bool hasSagSn() const { return this->sagSn_ != nullptr;};
    void deleteSagSn() { this->sagSn_ = nullptr;};
    inline string getSagSn() const { DARABONBA_PTR_GET_DEFAULT(sagSn_, "") };
    inline UpdateSmartAccessGatewayBgpRouteRequest& setSagSn(string sagSn) { DARABONBA_PTR_SET_VALUE(sagSn_, sagSn) };


  protected:
    // Specifies whether to query only the SAG instances that belong to another Alibaba Cloud account. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    shared_ptr<bool> crossAccount_ {};
    // The hold time. Unit: seconds.
    // 
    // Valid values: **3** to **65535**.
    // 
    // > When the SAG device establishes a peering connection with a peer device, the hold time of both devices must be the same. If the SAG device does not receive a keepalive or update message from the peer device within the hold time, the connection between the BGP peers is closed.
    // 
    // This parameter is required.
    shared_ptr<int32_t> holdTime_ {};
    // The time interval at which keep-alive packets are sent. Unit: seconds.
    // 
    // Valid values: **0** to **65535**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> keepAlive_ {};
    // The autonomous system number (ASN) of the SAG device.
    // 
    // Valid values: **1** to **4294967295**.
    // 
    // This parameter is required.
    shared_ptr<int64_t> localAs_ {};
    // The region ID of the SAG instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud account to which the SAG instance belongs.
    shared_ptr<string> resourceUid_ {};
    // The ID of the BGP router.
    // 
    // This parameter is required.
    shared_ptr<string> routerId_ {};
    // The ID of the Smart Access Gateway (SAG) instance.
    // 
    // This parameter is required.
    shared_ptr<string> sagInsId_ {};
    // The serial number of the SAG device.
    // 
    // This parameter is required.
    shared_ptr<string> sagSn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
