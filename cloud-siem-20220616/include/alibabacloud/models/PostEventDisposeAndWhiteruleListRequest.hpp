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
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
    };
    friend void from_json(const Darabonba::Json& j, PostEventDisposeAndWhiteruleListRequest& obj) { 
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
    virtual bool empty() const override { return this->disposeStrategyIds_ == nullptr
        && this->eventDispose_ == nullptr && this->incidentUuid_ == nullptr && this->owner_ == nullptr && this->receiverInfo_ == nullptr && this->regionId_ == nullptr
        && this->remark_ == nullptr && this->responseSource_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr && this->status_ == nullptr
        && this->threatLevel_ == nullptr; };
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


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline string getThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


  protected:
    // A comma-separated list of response strategy IDs.
    shared_ptr<string> disposeStrategyIds_ {};
    // A JSON object that defines the incident response configuration.
    shared_ptr<string> eventDispose_ {};
    // The globally unique UUID of the incident.
    shared_ptr<string> incidentUuid_ {};
    // The UID of the incident owner.
    shared_ptr<string> owner_ {};
    // A JSON object that defines the alert recipient configuration.
    shared_ptr<string> receiverInfo_ {};
    // The region where the Data Management service for threat analysis is deployed. Select a region based on where your assets are located. Valid values:
    // 
    // - cn-hangzhou: Assets in the Chinese mainland or Hong Kong (China)
    // 
    // - ap-southeast-1: Assets outside China
    shared_ptr<string> regionId_ {};
    // A note about the incident.
    shared_ptr<string> remark_ {};
    // The source of the response policy.
    shared_ptr<string> responseSource_ {};
    // The UID of the member whose perspective an administrator switches to.
    shared_ptr<int64_t> roleFor_ {};
    // The view type. Valid values:
    // 
    // - 0: Current Alibaba Cloud account view
    // 
    // - 1: View for all accounts in your enterprise
    shared_ptr<int32_t> roleType_ {};
    // The incident status. Valid values:
    // 
    // - 0: Not handled
    // 
    // - 1: Handling
    // 
    // - 5: Failed
    // 
    // - 10: Handled
    shared_ptr<int32_t> status_ {};
    // The threat level. Valid values:
    // 
    // - serious: Important
    // 
    // - suspicious: Medium
    // 
    // - remind: Low
    shared_ptr<string> threatLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
