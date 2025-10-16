// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORMONITORINGRESPONSEBODYCOORDINATEFLOWMODELS_HPP_
#define ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORMONITORINGRESPONSEBODYCOORDINATEFLOWMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels& obj) { 
      DARABONBA_PTR_TO_JSON(CoId, coId_);
      DARABONBA_PTR_TO_JSON(CoordinateStatus, coordinateStatus_);
      DARABONBA_PTR_TO_JSON(CoordinateTicket, coordinateTicket_);
      DARABONBA_PTR_TO_JSON(InitiatorType, initiatorType_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels& obj) { 
      DARABONBA_PTR_FROM_JSON(CoId, coId_);
      DARABONBA_PTR_FROM_JSON(CoordinateStatus, coordinateStatus_);
      DARABONBA_PTR_FROM_JSON(CoordinateTicket, coordinateTicket_);
      DARABONBA_PTR_FROM_JSON(InitiatorType, initiatorType_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
    };
    ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels() = default ;
    ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels(const ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels &) = default ;
    ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels(ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels &&) = default ;
    ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels() = default ;
    ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels& operator=(const ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels &) = default ;
    ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels& operator=(ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coId_ == nullptr
        && return this->coordinateStatus_ == nullptr && return this->coordinateTicket_ == nullptr && return this->initiatorType_ == nullptr && return this->ownerUserId_ == nullptr && return this->resourceId_ == nullptr
        && return this->resourceName_ == nullptr; };
    // coId Field Functions 
    bool hasCoId() const { return this->coId_ != nullptr;};
    void deleteCoId() { this->coId_ = nullptr;};
    inline string coId() const { DARABONBA_PTR_GET_DEFAULT(coId_, "") };
    inline ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels& setCoId(string coId) { DARABONBA_PTR_SET_VALUE(coId_, coId) };


    // coordinateStatus Field Functions 
    bool hasCoordinateStatus() const { return this->coordinateStatus_ != nullptr;};
    void deleteCoordinateStatus() { this->coordinateStatus_ = nullptr;};
    inline string coordinateStatus() const { DARABONBA_PTR_GET_DEFAULT(coordinateStatus_, "") };
    inline ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels& setCoordinateStatus(string coordinateStatus) { DARABONBA_PTR_SET_VALUE(coordinateStatus_, coordinateStatus) };


    // coordinateTicket Field Functions 
    bool hasCoordinateTicket() const { return this->coordinateTicket_ != nullptr;};
    void deleteCoordinateTicket() { this->coordinateTicket_ = nullptr;};
    inline string coordinateTicket() const { DARABONBA_PTR_GET_DEFAULT(coordinateTicket_, "") };
    inline ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels& setCoordinateTicket(string coordinateTicket) { DARABONBA_PTR_SET_VALUE(coordinateTicket_, coordinateTicket) };


    // initiatorType Field Functions 
    bool hasInitiatorType() const { return this->initiatorType_ != nullptr;};
    void deleteInitiatorType() { this->initiatorType_ = nullptr;};
    inline string initiatorType() const { DARABONBA_PTR_GET_DEFAULT(initiatorType_, "") };
    inline ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels& setInitiatorType(string initiatorType) { DARABONBA_PTR_SET_VALUE(initiatorType_, initiatorType) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


  protected:
    // The ID of the stream collaboration.
    std::shared_ptr<string> coId_ = nullptr;
    // The current status of the collaboration task.
    // 
    // Valid values:
    // 
    // *   COORDINATING: The collaboration task is being executed.
    // 
    // *   TERMINATING: The collaboration task is being terminated.
    // 
    // *   TERMINATED: The collaboration task is terminated.
    // 
    // *   PENDING: The collaboration task is pending to be executed.
    std::shared_ptr<string> coordinateStatus_ = nullptr;
    // The ticket that is used to establish the Adaptive Streaming Protocol (ASP)-based connection.
    std::shared_ptr<string> coordinateTicket_ = nullptr;
    // The type of the initiator.
    // 
    // Valid values:
    // 
    // *   ADMIN_INITIATE_FORCE: The administrator forcibly initiates the collaboration request.
    // 
    // *   ADMIN_INITIATE: The administrator initiates the collaboration request.
    // 
    // *   COORDINATOR_INITIATE_FORCE: The coordinator forcibly initiates the collaboration request.
    std::shared_ptr<string> initiatorType_ = nullptr;
    // The ID of the Alibaba Cloud account of the end user.
    std::shared_ptr<string> ownerUserId_ = nullptr;
    // The ID of the cloud desktop.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The name of the cloud desktop.
    std::shared_ptr<string> resourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
