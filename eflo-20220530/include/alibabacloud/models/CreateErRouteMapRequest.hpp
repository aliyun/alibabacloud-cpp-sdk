// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEERROUTEMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEERROUTEMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateErRouteMapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateErRouteMapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(ReceptionInstanceId, receptionInstanceId_);
      DARABONBA_PTR_TO_JSON(ReceptionInstanceOwner, receptionInstanceOwner_);
      DARABONBA_PTR_TO_JSON(ReceptionInstanceType, receptionInstanceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RouteMapAction, routeMapAction_);
      DARABONBA_PTR_TO_JSON(RouteMapNum, routeMapNum_);
      DARABONBA_PTR_TO_JSON(TransmissionInstanceId, transmissionInstanceId_);
      DARABONBA_PTR_TO_JSON(TransmissionInstanceOwner, transmissionInstanceOwner_);
      DARABONBA_PTR_TO_JSON(TransmissionInstanceType, transmissionInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateErRouteMapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(ReceptionInstanceId, receptionInstanceId_);
      DARABONBA_PTR_FROM_JSON(ReceptionInstanceOwner, receptionInstanceOwner_);
      DARABONBA_PTR_FROM_JSON(ReceptionInstanceType, receptionInstanceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RouteMapAction, routeMapAction_);
      DARABONBA_PTR_FROM_JSON(RouteMapNum, routeMapNum_);
      DARABONBA_PTR_FROM_JSON(TransmissionInstanceId, transmissionInstanceId_);
      DARABONBA_PTR_FROM_JSON(TransmissionInstanceOwner, transmissionInstanceOwner_);
      DARABONBA_PTR_FROM_JSON(TransmissionInstanceType, transmissionInstanceType_);
    };
    CreateErRouteMapRequest() = default ;
    CreateErRouteMapRequest(const CreateErRouteMapRequest &) = default ;
    CreateErRouteMapRequest(CreateErRouteMapRequest &&) = default ;
    CreateErRouteMapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateErRouteMapRequest() = default ;
    CreateErRouteMapRequest& operator=(const CreateErRouteMapRequest &) = default ;
    CreateErRouteMapRequest& operator=(CreateErRouteMapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->destinationCidrBlock_ == nullptr && return this->erId_ == nullptr && return this->receptionInstanceId_ == nullptr && return this->receptionInstanceOwner_ == nullptr && return this->receptionInstanceType_ == nullptr
        && return this->regionId_ == nullptr && return this->routeMapAction_ == nullptr && return this->routeMapNum_ == nullptr && return this->transmissionInstanceId_ == nullptr && return this->transmissionInstanceOwner_ == nullptr
        && return this->transmissionInstanceType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateErRouteMapRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline CreateErRouteMapRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline CreateErRouteMapRequest& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // receptionInstanceId Field Functions 
    bool hasReceptionInstanceId() const { return this->receptionInstanceId_ != nullptr;};
    void deleteReceptionInstanceId() { this->receptionInstanceId_ = nullptr;};
    inline string receptionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceId_, "") };
    inline CreateErRouteMapRequest& setReceptionInstanceId(string receptionInstanceId) { DARABONBA_PTR_SET_VALUE(receptionInstanceId_, receptionInstanceId) };


    // receptionInstanceOwner Field Functions 
    bool hasReceptionInstanceOwner() const { return this->receptionInstanceOwner_ != nullptr;};
    void deleteReceptionInstanceOwner() { this->receptionInstanceOwner_ = nullptr;};
    inline string receptionInstanceOwner() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceOwner_, "") };
    inline CreateErRouteMapRequest& setReceptionInstanceOwner(string receptionInstanceOwner) { DARABONBA_PTR_SET_VALUE(receptionInstanceOwner_, receptionInstanceOwner) };


    // receptionInstanceType Field Functions 
    bool hasReceptionInstanceType() const { return this->receptionInstanceType_ != nullptr;};
    void deleteReceptionInstanceType() { this->receptionInstanceType_ = nullptr;};
    inline string receptionInstanceType() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceType_, "") };
    inline CreateErRouteMapRequest& setReceptionInstanceType(string receptionInstanceType) { DARABONBA_PTR_SET_VALUE(receptionInstanceType_, receptionInstanceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateErRouteMapRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // routeMapAction Field Functions 
    bool hasRouteMapAction() const { return this->routeMapAction_ != nullptr;};
    void deleteRouteMapAction() { this->routeMapAction_ = nullptr;};
    inline string routeMapAction() const { DARABONBA_PTR_GET_DEFAULT(routeMapAction_, "") };
    inline CreateErRouteMapRequest& setRouteMapAction(string routeMapAction) { DARABONBA_PTR_SET_VALUE(routeMapAction_, routeMapAction) };


    // routeMapNum Field Functions 
    bool hasRouteMapNum() const { return this->routeMapNum_ != nullptr;};
    void deleteRouteMapNum() { this->routeMapNum_ = nullptr;};
    inline int32_t routeMapNum() const { DARABONBA_PTR_GET_DEFAULT(routeMapNum_, 0) };
    inline CreateErRouteMapRequest& setRouteMapNum(int32_t routeMapNum) { DARABONBA_PTR_SET_VALUE(routeMapNum_, routeMapNum) };


    // transmissionInstanceId Field Functions 
    bool hasTransmissionInstanceId() const { return this->transmissionInstanceId_ != nullptr;};
    void deleteTransmissionInstanceId() { this->transmissionInstanceId_ = nullptr;};
    inline string transmissionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceId_, "") };
    inline CreateErRouteMapRequest& setTransmissionInstanceId(string transmissionInstanceId) { DARABONBA_PTR_SET_VALUE(transmissionInstanceId_, transmissionInstanceId) };


    // transmissionInstanceOwner Field Functions 
    bool hasTransmissionInstanceOwner() const { return this->transmissionInstanceOwner_ != nullptr;};
    void deleteTransmissionInstanceOwner() { this->transmissionInstanceOwner_ = nullptr;};
    inline string transmissionInstanceOwner() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceOwner_, "") };
    inline CreateErRouteMapRequest& setTransmissionInstanceOwner(string transmissionInstanceOwner) { DARABONBA_PTR_SET_VALUE(transmissionInstanceOwner_, transmissionInstanceOwner) };


    // transmissionInstanceType Field Functions 
    bool hasTransmissionInstanceType() const { return this->transmissionInstanceType_ != nullptr;};
    void deleteTransmissionInstanceType() { this->transmissionInstanceType_ = nullptr;};
    inline string transmissionInstanceType() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceType_, "") };
    inline CreateErRouteMapRequest& setTransmissionInstanceType(string transmissionInstanceType) { DARABONBA_PTR_SET_VALUE(transmissionInstanceType_, transmissionInstanceType) };


  protected:
    // Policy description
    std::shared_ptr<string> description_ = nullptr;
    // Destination CIDR Block
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // Lingjun HUB ID
    // 
    // This parameter is required.
    std::shared_ptr<string> erId_ = nullptr;
    // The ID of the destination instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> receptionInstanceId_ = nullptr;
    // The tenant to which the route receiving instance belongs.
    std::shared_ptr<string> receptionInstanceOwner_ = nullptr;
    // The type of the destination instance. Valid values:
    // 
    // *   **VPD**: Lingjun network segment.
    // *   **VCC**: Lingjun Connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> receptionInstanceType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Policy behavior; optional values:
    // 
    // *   **permit**: Allow
    // *   **deny**: Rejected
    // 
    // This parameter is required.
    std::shared_ptr<string> routeMapAction_ = nullptr;
    // The ID of the policy.
    // 
    // A smaller sequence number indicates a lower priority. When a route is matched, a policy with a higher priority is preferentially matched.
    // 
    // **Valid values: 1001 to 2000**
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> routeMapNum_ = nullptr;
    // The ID of the source instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> transmissionInstanceId_ = nullptr;
    // The tenant to which the route publish instance belongs
    std::shared_ptr<string> transmissionInstanceOwner_ = nullptr;
    // The type of the source instance. Valid values:
    // 
    // *   **VPD**: Lingjun network segment.
    // *   **VCC**: Lingjun Connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> transmissionInstanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
