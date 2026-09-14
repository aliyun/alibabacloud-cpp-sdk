// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POSTEVENTDISPOSEANDWHITERULELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_POSTEVENTDISPOSEANDWHITERULELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class PostEventDisposeAndWhiteruleListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PostEventDisposeAndWhiteruleListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DisposeStrategyIds, disposeStrategyIds_);
      DARABONBA_PTR_TO_JSON(EventDispose, eventDispose_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ReceiverInfo, receiverInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResponseSource, responseSource_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SyncAlertStatus, syncAlertStatus_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
    };
    friend void from_json(const Darabonba::Json& j, PostEventDisposeAndWhiteruleListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DisposeStrategyIds, disposeStrategyIds_);
      DARABONBA_PTR_FROM_JSON(EventDispose, eventDispose_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ReceiverInfo, receiverInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResponseSource, responseSource_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SyncAlertStatus, syncAlertStatus_);
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
    };
    PostEventDisposeAndWhiteruleListRequest() = default ;
    PostEventDisposeAndWhiteruleListRequest(const PostEventDisposeAndWhiteruleListRequest &) = default ;
    PostEventDisposeAndWhiteruleListRequest(PostEventDisposeAndWhiteruleListRequest &&) = default ;
    PostEventDisposeAndWhiteruleListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PostEventDisposeAndWhiteruleListRequest() = default ;
    PostEventDisposeAndWhiteruleListRequest& operator=(const PostEventDisposeAndWhiteruleListRequest &) = default ;
    PostEventDisposeAndWhiteruleListRequest& operator=(PostEventDisposeAndWhiteruleListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->disposeStrategyIds_ == nullptr && this->eventDispose_ == nullptr && this->incidentUuid_ == nullptr && this->owner_ == nullptr && this->receiverInfo_ == nullptr
        && this->regionId_ == nullptr && this->remark_ == nullptr && this->responseSource_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr
        && this->status_ == nullptr && this->syncAlertStatus_ == nullptr && this->threatLevel_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // disposeStrategyIds Field Functions 
    bool hasDisposeStrategyIds() const { return this->disposeStrategyIds_ != nullptr;};
    void deleteDisposeStrategyIds() { this->disposeStrategyIds_ = nullptr;};
    inline string getDisposeStrategyIds() const { DARABONBA_PTR_GET_DEFAULT(disposeStrategyIds_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setDisposeStrategyIds(string disposeStrategyIds) { DARABONBA_PTR_SET_VALUE(disposeStrategyIds_, disposeStrategyIds) };


    // eventDispose Field Functions 
    bool hasEventDispose() const { return this->eventDispose_ != nullptr;};
    void deleteEventDispose() { this->eventDispose_ = nullptr;};
    inline string getEventDispose() const { DARABONBA_PTR_GET_DEFAULT(eventDispose_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setEventDispose(string eventDispose) { DARABONBA_PTR_SET_VALUE(eventDispose_, eventDispose) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // receiverInfo Field Functions 
    bool hasReceiverInfo() const { return this->receiverInfo_ != nullptr;};
    void deleteReceiverInfo() { this->receiverInfo_ = nullptr;};
    inline string getReceiverInfo() const { DARABONBA_PTR_GET_DEFAULT(receiverInfo_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setReceiverInfo(string receiverInfo) { DARABONBA_PTR_SET_VALUE(receiverInfo_, receiverInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // responseSource Field Functions 
    bool hasResponseSource() const { return this->responseSource_ != nullptr;};
    void deleteResponseSource() { this->responseSource_ = nullptr;};
    inline string getResponseSource() const { DARABONBA_PTR_GET_DEFAULT(responseSource_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setResponseSource(string responseSource) { DARABONBA_PTR_SET_VALUE(responseSource_, responseSource) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline PostEventDisposeAndWhiteruleListRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline PostEventDisposeAndWhiteruleListRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline PostEventDisposeAndWhiteruleListRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // syncAlertStatus Field Functions 
    bool hasSyncAlertStatus() const { return this->syncAlertStatus_ != nullptr;};
    void deleteSyncAlertStatus() { this->syncAlertStatus_ = nullptr;};
    inline bool getSyncAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(syncAlertStatus_, false) };
    inline PostEventDisposeAndWhiteruleListRequest& setSyncAlertStatus(bool syncAlertStatus) { DARABONBA_PTR_SET_VALUE(syncAlertStatus_, syncAlertStatus) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline string getThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


  protected:
    // The idempotency token.
    shared_ptr<string> clientToken_ {};
    // The list of handling policy IDs.
    shared_ptr<string> disposeStrategyIds_ {};
    // The incident handling configuration as a JSON object.
    shared_ptr<string> eventDispose_ {};
    // The globally unique UUID of the incident.
    shared_ptr<string> incidentUuid_ {};
    // The account UID of the incident owner.
    shared_ptr<string> owner_ {};
    // The alert recipient configuration as a JSON object.
    shared_ptr<string> receiverInfo_ {};
    // The region where the threat analysis data management center resides. Specify the management center based on the region of your assets. Valid values:
    // - cn-hangzhou: Your assets reside in regions in the Chinese mainland or China (Hong Kong).
    // - ap-southeast-1: Your assets reside in regions outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The remarks for the incident.
    shared_ptr<string> remark_ {};
    // The source of the handling policy.
    shared_ptr<string> responseSource_ {};
    // The ID of the user for whom the administrator switches to a member view.
    shared_ptr<int64_t> roleFor_ {};
    // The view type. Valid values:
    // 
    // - 0: the China account view.
    // - 1: the view of all accounts in the enterprise.
    shared_ptr<int32_t> roleType_ {};
    // The incident status. Valid values:
    // 
    // - 0: unhandled  
    // - 1: handling 
    // - 5: handling failed 
    // - 10: handled
    shared_ptr<int32_t> status_ {};
    // Specifies whether to restore associated handled alerts to unhandled status when reopening the incident.
    shared_ptr<bool> syncAlertStatus_ {};
    // The threat level. Valid values:
    // - serious: high
    // - suspicious: medium
    // - remind: low
    shared_ptr<string> threatLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
