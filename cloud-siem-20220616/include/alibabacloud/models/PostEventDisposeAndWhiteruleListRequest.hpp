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
      DARABONBA_PTR_TO_JSON(EventDispose, eventDispose_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(ReceiverInfo, receiverInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
    };
    friend void from_json(const Darabonba::Json& j, PostEventDisposeAndWhiteruleListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventDispose, eventDispose_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(ReceiverInfo, receiverInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
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
    virtual bool empty() const override { this->eventDispose_ != nullptr
        && this->incidentUuid_ != nullptr && this->receiverInfo_ != nullptr && this->regionId_ != nullptr && this->remark_ != nullptr && this->roleFor_ != nullptr
        && this->roleType_ != nullptr && this->status_ != nullptr && this->threatLevel_ != nullptr; };
    // eventDispose Field Functions 
    bool hasEventDispose() const { return this->eventDispose_ != nullptr;};
    void deleteEventDispose() { this->eventDispose_ = nullptr;};
    inline string eventDispose() const { DARABONBA_PTR_GET_DEFAULT(eventDispose_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setEventDispose(string eventDispose) { DARABONBA_PTR_SET_VALUE(eventDispose_, eventDispose) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // receiverInfo Field Functions 
    bool hasReceiverInfo() const { return this->receiverInfo_ != nullptr;};
    void deleteReceiverInfo() { this->receiverInfo_ = nullptr;};
    inline string receiverInfo() const { DARABONBA_PTR_GET_DEFAULT(receiverInfo_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setReceiverInfo(string receiverInfo) { DARABONBA_PTR_SET_VALUE(receiverInfo_, receiverInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline PostEventDisposeAndWhiteruleListRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline PostEventDisposeAndWhiteruleListRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline PostEventDisposeAndWhiteruleListRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline string threatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
    inline PostEventDisposeAndWhiteruleListRequest& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


  protected:
    // The configuration of event handling. The value is a JSON object.
    std::shared_ptr<string> eventDispose_ = nullptr;
    // The UUID of the event.
    std::shared_ptr<string> incidentUuid_ = nullptr;
    // The configuration of the alert recipient. The value is a JSON object.
    std::shared_ptr<string> receiverInfo_ = nullptr;
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
    // The remarks of the event.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the account that you switch from the management account.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    std::shared_ptr<int32_t> roleType_ = nullptr;
    // The status of the event. Valid values:
    // 
    // *   0: unhandled
    // *   1: handing
    // *   5: handling failed
    // *   10: handled
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> threatLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
