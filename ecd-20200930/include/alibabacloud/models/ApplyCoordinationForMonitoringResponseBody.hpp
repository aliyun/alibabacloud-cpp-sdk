// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORMONITORINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORMONITORINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ApplyCoordinationForMonitoringResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyCoordinationForMonitoringResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CoordinateFlowModels, coordinateFlowModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyCoordinationForMonitoringResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CoordinateFlowModels, coordinateFlowModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ApplyCoordinationForMonitoringResponseBody() = default ;
    ApplyCoordinationForMonitoringResponseBody(const ApplyCoordinationForMonitoringResponseBody &) = default ;
    ApplyCoordinationForMonitoringResponseBody(ApplyCoordinationForMonitoringResponseBody &&) = default ;
    ApplyCoordinationForMonitoringResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyCoordinationForMonitoringResponseBody() = default ;
    ApplyCoordinationForMonitoringResponseBody& operator=(const ApplyCoordinationForMonitoringResponseBody &) = default ;
    ApplyCoordinationForMonitoringResponseBody& operator=(ApplyCoordinationForMonitoringResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CoordinateFlowModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CoordinateFlowModels& obj) { 
        DARABONBA_PTR_TO_JSON(CoId, coId_);
        DARABONBA_PTR_TO_JSON(CoordinateStatus, coordinateStatus_);
        DARABONBA_PTR_TO_JSON(CoordinateTicket, coordinateTicket_);
        DARABONBA_PTR_TO_JSON(InitiatorType, initiatorType_);
        DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      };
      friend void from_json(const Darabonba::Json& j, CoordinateFlowModels& obj) { 
        DARABONBA_PTR_FROM_JSON(CoId, coId_);
        DARABONBA_PTR_FROM_JSON(CoordinateStatus, coordinateStatus_);
        DARABONBA_PTR_FROM_JSON(CoordinateTicket, coordinateTicket_);
        DARABONBA_PTR_FROM_JSON(InitiatorType, initiatorType_);
        DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      };
      CoordinateFlowModels() = default ;
      CoordinateFlowModels(const CoordinateFlowModels &) = default ;
      CoordinateFlowModels(CoordinateFlowModels &&) = default ;
      CoordinateFlowModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CoordinateFlowModels() = default ;
      CoordinateFlowModels& operator=(const CoordinateFlowModels &) = default ;
      CoordinateFlowModels& operator=(CoordinateFlowModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->coId_ == nullptr
        && this->coordinateStatus_ == nullptr && this->coordinateTicket_ == nullptr && this->initiatorType_ == nullptr && this->ownerUserId_ == nullptr && this->resourceId_ == nullptr
        && this->resourceName_ == nullptr; };
      // coId Field Functions 
      bool hasCoId() const { return this->coId_ != nullptr;};
      void deleteCoId() { this->coId_ = nullptr;};
      inline string getCoId() const { DARABONBA_PTR_GET_DEFAULT(coId_, "") };
      inline CoordinateFlowModels& setCoId(string coId) { DARABONBA_PTR_SET_VALUE(coId_, coId) };


      // coordinateStatus Field Functions 
      bool hasCoordinateStatus() const { return this->coordinateStatus_ != nullptr;};
      void deleteCoordinateStatus() { this->coordinateStatus_ = nullptr;};
      inline string getCoordinateStatus() const { DARABONBA_PTR_GET_DEFAULT(coordinateStatus_, "") };
      inline CoordinateFlowModels& setCoordinateStatus(string coordinateStatus) { DARABONBA_PTR_SET_VALUE(coordinateStatus_, coordinateStatus) };


      // coordinateTicket Field Functions 
      bool hasCoordinateTicket() const { return this->coordinateTicket_ != nullptr;};
      void deleteCoordinateTicket() { this->coordinateTicket_ = nullptr;};
      inline string getCoordinateTicket() const { DARABONBA_PTR_GET_DEFAULT(coordinateTicket_, "") };
      inline CoordinateFlowModels& setCoordinateTicket(string coordinateTicket) { DARABONBA_PTR_SET_VALUE(coordinateTicket_, coordinateTicket) };


      // initiatorType Field Functions 
      bool hasInitiatorType() const { return this->initiatorType_ != nullptr;};
      void deleteInitiatorType() { this->initiatorType_ = nullptr;};
      inline string getInitiatorType() const { DARABONBA_PTR_GET_DEFAULT(initiatorType_, "") };
      inline CoordinateFlowModels& setInitiatorType(string initiatorType) { DARABONBA_PTR_SET_VALUE(initiatorType_, initiatorType) };


      // ownerUserId Field Functions 
      bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
      void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
      inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
      inline CoordinateFlowModels& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline CoordinateFlowModels& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline CoordinateFlowModels& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    protected:
      // The ID of the stream collaboration.
      shared_ptr<string> coId_ {};
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
      shared_ptr<string> coordinateStatus_ {};
      // The ticket that is used to establish the Adaptive Streaming Protocol (ASP)-based connection.
      shared_ptr<string> coordinateTicket_ {};
      // The type of the initiator.
      // 
      // Valid values:
      // 
      // *   ADMIN_INITIATE_FORCE: The administrator forcibly initiates the collaboration request.
      // 
      // *   ADMIN_INITIATE: The administrator initiates the collaboration request.
      // 
      // *   COORDINATOR_INITIATE_FORCE: The coordinator forcibly initiates the collaboration request.
      shared_ptr<string> initiatorType_ {};
      // The ID of the Alibaba Cloud account of the end user.
      shared_ptr<string> ownerUserId_ {};
      // The ID of the cloud desktop.
      shared_ptr<string> resourceId_ {};
      // The name of the cloud desktop.
      shared_ptr<string> resourceName_ {};
    };

    virtual bool empty() const override { return this->coordinateFlowModels_ == nullptr
        && this->requestId_ == nullptr; };
    // coordinateFlowModels Field Functions 
    bool hasCoordinateFlowModels() const { return this->coordinateFlowModels_ != nullptr;};
    void deleteCoordinateFlowModels() { this->coordinateFlowModels_ = nullptr;};
    inline const vector<ApplyCoordinationForMonitoringResponseBody::CoordinateFlowModels> & getCoordinateFlowModels() const { DARABONBA_PTR_GET_CONST(coordinateFlowModels_, vector<ApplyCoordinationForMonitoringResponseBody::CoordinateFlowModels>) };
    inline vector<ApplyCoordinationForMonitoringResponseBody::CoordinateFlowModels> getCoordinateFlowModels() { DARABONBA_PTR_GET(coordinateFlowModels_, vector<ApplyCoordinationForMonitoringResponseBody::CoordinateFlowModels>) };
    inline ApplyCoordinationForMonitoringResponseBody& setCoordinateFlowModels(const vector<ApplyCoordinationForMonitoringResponseBody::CoordinateFlowModels> & coordinateFlowModels) { DARABONBA_PTR_SET_VALUE(coordinateFlowModels_, coordinateFlowModels) };
    inline ApplyCoordinationForMonitoringResponseBody& setCoordinateFlowModels(vector<ApplyCoordinationForMonitoringResponseBody::CoordinateFlowModels> && coordinateFlowModels) { DARABONBA_PTR_SET_RVALUE(coordinateFlowModels_, coordinateFlowModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApplyCoordinationForMonitoringResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of stream collaboration models.
    shared_ptr<vector<ApplyCoordinationForMonitoringResponseBody::CoordinateFlowModels>> coordinateFlowModels_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
