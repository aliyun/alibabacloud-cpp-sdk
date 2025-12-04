// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERROUTEMAPRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETERROUTEMAPRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetErRouteMapResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErRouteMapResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(ErRouteMapId, erRouteMapId_);
      DARABONBA_PTR_TO_JSON(ErRouteMapName, erRouteMapName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ReceptionInstanceId, receptionInstanceId_);
      DARABONBA_PTR_TO_JSON(ReceptionInstanceName, receptionInstanceName_);
      DARABONBA_PTR_TO_JSON(ReceptionInstanceOwner, receptionInstanceOwner_);
      DARABONBA_PTR_TO_JSON(ReceptionInstanceType, receptionInstanceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouteMapNum, routeMapNum_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TransmissionInstanceId, transmissionInstanceId_);
      DARABONBA_PTR_TO_JSON(TransmissionInstanceName, transmissionInstanceName_);
      DARABONBA_PTR_TO_JSON(TransmissionInstanceOwner, transmissionInstanceOwner_);
      DARABONBA_PTR_TO_JSON(TransmissionInstanceType, transmissionInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetErRouteMapResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(ErRouteMapId, erRouteMapId_);
      DARABONBA_PTR_FROM_JSON(ErRouteMapName, erRouteMapName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ReceptionInstanceId, receptionInstanceId_);
      DARABONBA_PTR_FROM_JSON(ReceptionInstanceName, receptionInstanceName_);
      DARABONBA_PTR_FROM_JSON(ReceptionInstanceOwner, receptionInstanceOwner_);
      DARABONBA_PTR_FROM_JSON(ReceptionInstanceType, receptionInstanceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteMapNum, routeMapNum_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TransmissionInstanceId, transmissionInstanceId_);
      DARABONBA_PTR_FROM_JSON(TransmissionInstanceName, transmissionInstanceName_);
      DARABONBA_PTR_FROM_JSON(TransmissionInstanceOwner, transmissionInstanceOwner_);
      DARABONBA_PTR_FROM_JSON(TransmissionInstanceType, transmissionInstanceType_);
    };
    GetErRouteMapResponseBodyContent() = default ;
    GetErRouteMapResponseBodyContent(const GetErRouteMapResponseBodyContent &) = default ;
    GetErRouteMapResponseBodyContent(GetErRouteMapResponseBodyContent &&) = default ;
    GetErRouteMapResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErRouteMapResponseBodyContent() = default ;
    GetErRouteMapResponseBodyContent& operator=(const GetErRouteMapResponseBodyContent &) = default ;
    GetErRouteMapResponseBodyContent& operator=(GetErRouteMapResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->description_ == nullptr && return this->destinationCidrBlock_ == nullptr && return this->erId_ == nullptr && return this->erRouteMapId_ == nullptr && return this->erRouteMapName_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->message_ == nullptr && return this->receptionInstanceId_ == nullptr && return this->receptionInstanceName_ == nullptr
        && return this->receptionInstanceOwner_ == nullptr && return this->receptionInstanceType_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->routeMapNum_ == nullptr
        && return this->status_ == nullptr && return this->tenantId_ == nullptr && return this->transmissionInstanceId_ == nullptr && return this->transmissionInstanceName_ == nullptr && return this->transmissionInstanceOwner_ == nullptr
        && return this->transmissionInstanceType_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetErRouteMapResponseBodyContent& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetErRouteMapResponseBodyContent& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline GetErRouteMapResponseBodyContent& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline GetErRouteMapResponseBodyContent& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // erRouteMapId Field Functions 
    bool hasErRouteMapId() const { return this->erRouteMapId_ != nullptr;};
    void deleteErRouteMapId() { this->erRouteMapId_ = nullptr;};
    inline string erRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(erRouteMapId_, "") };
    inline GetErRouteMapResponseBodyContent& setErRouteMapId(string erRouteMapId) { DARABONBA_PTR_SET_VALUE(erRouteMapId_, erRouteMapId) };


    // erRouteMapName Field Functions 
    bool hasErRouteMapName() const { return this->erRouteMapName_ != nullptr;};
    void deleteErRouteMapName() { this->erRouteMapName_ = nullptr;};
    inline string erRouteMapName() const { DARABONBA_PTR_GET_DEFAULT(erRouteMapName_, "") };
    inline GetErRouteMapResponseBodyContent& setErRouteMapName(string erRouteMapName) { DARABONBA_PTR_SET_VALUE(erRouteMapName_, erRouteMapName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetErRouteMapResponseBodyContent& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetErRouteMapResponseBodyContent& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetErRouteMapResponseBodyContent& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // receptionInstanceId Field Functions 
    bool hasReceptionInstanceId() const { return this->receptionInstanceId_ != nullptr;};
    void deleteReceptionInstanceId() { this->receptionInstanceId_ = nullptr;};
    inline string receptionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceId_, "") };
    inline GetErRouteMapResponseBodyContent& setReceptionInstanceId(string receptionInstanceId) { DARABONBA_PTR_SET_VALUE(receptionInstanceId_, receptionInstanceId) };


    // receptionInstanceName Field Functions 
    bool hasReceptionInstanceName() const { return this->receptionInstanceName_ != nullptr;};
    void deleteReceptionInstanceName() { this->receptionInstanceName_ = nullptr;};
    inline string receptionInstanceName() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceName_, "") };
    inline GetErRouteMapResponseBodyContent& setReceptionInstanceName(string receptionInstanceName) { DARABONBA_PTR_SET_VALUE(receptionInstanceName_, receptionInstanceName) };


    // receptionInstanceOwner Field Functions 
    bool hasReceptionInstanceOwner() const { return this->receptionInstanceOwner_ != nullptr;};
    void deleteReceptionInstanceOwner() { this->receptionInstanceOwner_ = nullptr;};
    inline string receptionInstanceOwner() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceOwner_, "") };
    inline GetErRouteMapResponseBodyContent& setReceptionInstanceOwner(string receptionInstanceOwner) { DARABONBA_PTR_SET_VALUE(receptionInstanceOwner_, receptionInstanceOwner) };


    // receptionInstanceType Field Functions 
    bool hasReceptionInstanceType() const { return this->receptionInstanceType_ != nullptr;};
    void deleteReceptionInstanceType() { this->receptionInstanceType_ = nullptr;};
    inline string receptionInstanceType() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceType_, "") };
    inline GetErRouteMapResponseBodyContent& setReceptionInstanceType(string receptionInstanceType) { DARABONBA_PTR_SET_VALUE(receptionInstanceType_, receptionInstanceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetErRouteMapResponseBodyContent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetErRouteMapResponseBodyContent& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routeMapNum Field Functions 
    bool hasRouteMapNum() const { return this->routeMapNum_ != nullptr;};
    void deleteRouteMapNum() { this->routeMapNum_ = nullptr;};
    inline int32_t routeMapNum() const { DARABONBA_PTR_GET_DEFAULT(routeMapNum_, 0) };
    inline GetErRouteMapResponseBodyContent& setRouteMapNum(int32_t routeMapNum) { DARABONBA_PTR_SET_VALUE(routeMapNum_, routeMapNum) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetErRouteMapResponseBodyContent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetErRouteMapResponseBodyContent& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // transmissionInstanceId Field Functions 
    bool hasTransmissionInstanceId() const { return this->transmissionInstanceId_ != nullptr;};
    void deleteTransmissionInstanceId() { this->transmissionInstanceId_ = nullptr;};
    inline string transmissionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceId_, "") };
    inline GetErRouteMapResponseBodyContent& setTransmissionInstanceId(string transmissionInstanceId) { DARABONBA_PTR_SET_VALUE(transmissionInstanceId_, transmissionInstanceId) };


    // transmissionInstanceName Field Functions 
    bool hasTransmissionInstanceName() const { return this->transmissionInstanceName_ != nullptr;};
    void deleteTransmissionInstanceName() { this->transmissionInstanceName_ = nullptr;};
    inline string transmissionInstanceName() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceName_, "") };
    inline GetErRouteMapResponseBodyContent& setTransmissionInstanceName(string transmissionInstanceName) { DARABONBA_PTR_SET_VALUE(transmissionInstanceName_, transmissionInstanceName) };


    // transmissionInstanceOwner Field Functions 
    bool hasTransmissionInstanceOwner() const { return this->transmissionInstanceOwner_ != nullptr;};
    void deleteTransmissionInstanceOwner() { this->transmissionInstanceOwner_ = nullptr;};
    inline string transmissionInstanceOwner() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceOwner_, "") };
    inline GetErRouteMapResponseBodyContent& setTransmissionInstanceOwner(string transmissionInstanceOwner) { DARABONBA_PTR_SET_VALUE(transmissionInstanceOwner_, transmissionInstanceOwner) };


    // transmissionInstanceType Field Functions 
    bool hasTransmissionInstanceType() const { return this->transmissionInstanceType_ != nullptr;};
    void deleteTransmissionInstanceType() { this->transmissionInstanceType_ = nullptr;};
    inline string transmissionInstanceType() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceType_, "") };
    inline GetErRouteMapResponseBodyContent& setTransmissionInstanceType(string transmissionInstanceType) { DARABONBA_PTR_SET_VALUE(transmissionInstanceType_, transmissionInstanceType) };


  protected:
    // Policy behavior; optional values:
    // 
    // *   **permit**: Allow
    // *   **deny**: Rejected
    std::shared_ptr<string> action_ = nullptr;
    // Policy description
    std::shared_ptr<string> description_ = nullptr;
    // Destination CIDR block
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // Lingjun HUB ID
    std::shared_ptr<string> erId_ = nullptr;
    // Lingjun HUB routing policy ID
    std::shared_ptr<string> erRouteMapId_ = nullptr;
    // Lingjun HUB routing policy Name
    std::shared_ptr<string> erRouteMapName_ = nullptr;
    // The time when the data address was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the agent was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // Receive Instance ID
    std::shared_ptr<string> receptionInstanceId_ = nullptr;
    // Receive Instance Name
    std::shared_ptr<string> receptionInstanceName_ = nullptr;
    // The tenant to which the receiving instance belongs
    std::shared_ptr<string> receptionInstanceOwner_ = nullptr;
    // The type of the received instance. Optional values:
    // 
    // *   **VPD**: Lingjun network segment.
    // *   **VCC**: Lingjun Connection.
    std::shared_ptr<string> receptionInstanceType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group instance ID
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the policy.
    // 
    // A smaller sequence number indicates a lower priority. When a route is matched, a policy with a higher priority is preferentially matched.
    // 
    // **Valid values: 1001 to 2000**
    std::shared_ptr<int32_t> routeMapNum_ = nullptr;
    // The status of the cache reserve instance. Valid values:
    // 
    // *   **Available**
    // *   **Not Available**: Unavailable
    // *   **Executing**: Executing
    // *   **Deleting**: The node is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<string> tenantId_ = nullptr;
    // Release Instance ID
    std::shared_ptr<string> transmissionInstanceId_ = nullptr;
    // Release Instance Name
    std::shared_ptr<string> transmissionInstanceName_ = nullptr;
    // The tenant to which the published instance belongs
    std::shared_ptr<string> transmissionInstanceOwner_ = nullptr;
    // Publish instance type; optional values:
    // 
    // *   **VPD**: Lingjun network segment.
    // *   **VCC**: Lingjun Connection.
    std::shared_ptr<string> transmissionInstanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
