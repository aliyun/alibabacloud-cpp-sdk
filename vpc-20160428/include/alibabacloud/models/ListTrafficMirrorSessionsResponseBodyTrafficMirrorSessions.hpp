// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORSESSIONSRESPONSEBODYTRAFFICMIRRORSESSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORSESSIONSRESPONSEBODYTRAFFICMIRRORSESSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessionsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(PacketLength, packetLength_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessionBusinessStatus, trafficMirrorSessionBusinessStatus_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessionDescription, trafficMirrorSessionDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessionId, trafficMirrorSessionId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessionName, trafficMirrorSessionName_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessionStatus, trafficMirrorSessionStatus_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSourceIds, trafficMirrorSourceIds_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorTargetId, trafficMirrorTargetId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorTargetType, trafficMirrorTargetType_);
      DARABONBA_PTR_TO_JSON(VirtualNetworkId, virtualNetworkId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(PacketLength, packetLength_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessionBusinessStatus, trafficMirrorSessionBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessionDescription, trafficMirrorSessionDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessionId, trafficMirrorSessionId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessionName, trafficMirrorSessionName_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessionStatus, trafficMirrorSessionStatus_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSourceIds, trafficMirrorSourceIds_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorTargetId, trafficMirrorTargetId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorTargetType, trafficMirrorTargetType_);
      DARABONBA_PTR_FROM_JSON(VirtualNetworkId, virtualNetworkId_);
    };
    ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions() = default ;
    ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions(const ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions &) = default ;
    ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions(ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions &&) = default ;
    ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions() = default ;
    ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& operator=(const ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions &) = default ;
    ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& operator=(ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->enabled_ == nullptr && return this->packetLength_ == nullptr && return this->priority_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr
        && return this->trafficMirrorFilterId_ == nullptr && return this->trafficMirrorSessionBusinessStatus_ == nullptr && return this->trafficMirrorSessionDescription_ == nullptr && return this->trafficMirrorSessionId_ == nullptr && return this->trafficMirrorSessionName_ == nullptr
        && return this->trafficMirrorSessionStatus_ == nullptr && return this->trafficMirrorSourceIds_ == nullptr && return this->trafficMirrorTargetId_ == nullptr && return this->trafficMirrorTargetType_ == nullptr && return this->virtualNetworkId_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // packetLength Field Functions 
    bool hasPacketLength() const { return this->packetLength_ != nullptr;};
    void deletePacketLength() { this->packetLength_ = nullptr;};
    inline int32_t packetLength() const { DARABONBA_PTR_GET_DEFAULT(packetLength_, 0) };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setPacketLength(int32_t packetLength) { DARABONBA_PTR_SET_VALUE(packetLength_, packetLength) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessionsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessionsTags>) };
    inline vector<Models::ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessionsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessionsTags>) };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setTags(const vector<Models::ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessionsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setTags(vector<Models::ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessionsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // trafficMirrorFilterId Field Functions 
    bool hasTrafficMirrorFilterId() const { return this->trafficMirrorFilterId_ != nullptr;};
    void deleteTrafficMirrorFilterId() { this->trafficMirrorFilterId_ = nullptr;};
    inline string trafficMirrorFilterId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterId_, "") };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setTrafficMirrorFilterId(string trafficMirrorFilterId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterId_, trafficMirrorFilterId) };


    // trafficMirrorSessionBusinessStatus Field Functions 
    bool hasTrafficMirrorSessionBusinessStatus() const { return this->trafficMirrorSessionBusinessStatus_ != nullptr;};
    void deleteTrafficMirrorSessionBusinessStatus() { this->trafficMirrorSessionBusinessStatus_ = nullptr;};
    inline string trafficMirrorSessionBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionBusinessStatus_, "") };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setTrafficMirrorSessionBusinessStatus(string trafficMirrorSessionBusinessStatus) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionBusinessStatus_, trafficMirrorSessionBusinessStatus) };


    // trafficMirrorSessionDescription Field Functions 
    bool hasTrafficMirrorSessionDescription() const { return this->trafficMirrorSessionDescription_ != nullptr;};
    void deleteTrafficMirrorSessionDescription() { this->trafficMirrorSessionDescription_ = nullptr;};
    inline string trafficMirrorSessionDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionDescription_, "") };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setTrafficMirrorSessionDescription(string trafficMirrorSessionDescription) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionDescription_, trafficMirrorSessionDescription) };


    // trafficMirrorSessionId Field Functions 
    bool hasTrafficMirrorSessionId() const { return this->trafficMirrorSessionId_ != nullptr;};
    void deleteTrafficMirrorSessionId() { this->trafficMirrorSessionId_ = nullptr;};
    inline string trafficMirrorSessionId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionId_, "") };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setTrafficMirrorSessionId(string trafficMirrorSessionId) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionId_, trafficMirrorSessionId) };


    // trafficMirrorSessionName Field Functions 
    bool hasTrafficMirrorSessionName() const { return this->trafficMirrorSessionName_ != nullptr;};
    void deleteTrafficMirrorSessionName() { this->trafficMirrorSessionName_ = nullptr;};
    inline string trafficMirrorSessionName() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionName_, "") };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setTrafficMirrorSessionName(string trafficMirrorSessionName) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionName_, trafficMirrorSessionName) };


    // trafficMirrorSessionStatus Field Functions 
    bool hasTrafficMirrorSessionStatus() const { return this->trafficMirrorSessionStatus_ != nullptr;};
    void deleteTrafficMirrorSessionStatus() { this->trafficMirrorSessionStatus_ = nullptr;};
    inline string trafficMirrorSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionStatus_, "") };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setTrafficMirrorSessionStatus(string trafficMirrorSessionStatus) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionStatus_, trafficMirrorSessionStatus) };


    // trafficMirrorSourceIds Field Functions 
    bool hasTrafficMirrorSourceIds() const { return this->trafficMirrorSourceIds_ != nullptr;};
    void deleteTrafficMirrorSourceIds() { this->trafficMirrorSourceIds_ = nullptr;};
    inline const vector<string> & trafficMirrorSourceIds() const { DARABONBA_PTR_GET_CONST(trafficMirrorSourceIds_, vector<string>) };
    inline vector<string> trafficMirrorSourceIds() { DARABONBA_PTR_GET(trafficMirrorSourceIds_, vector<string>) };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setTrafficMirrorSourceIds(const vector<string> & trafficMirrorSourceIds) { DARABONBA_PTR_SET_VALUE(trafficMirrorSourceIds_, trafficMirrorSourceIds) };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setTrafficMirrorSourceIds(vector<string> && trafficMirrorSourceIds) { DARABONBA_PTR_SET_RVALUE(trafficMirrorSourceIds_, trafficMirrorSourceIds) };


    // trafficMirrorTargetId Field Functions 
    bool hasTrafficMirrorTargetId() const { return this->trafficMirrorTargetId_ != nullptr;};
    void deleteTrafficMirrorTargetId() { this->trafficMirrorTargetId_ = nullptr;};
    inline string trafficMirrorTargetId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorTargetId_, "") };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setTrafficMirrorTargetId(string trafficMirrorTargetId) { DARABONBA_PTR_SET_VALUE(trafficMirrorTargetId_, trafficMirrorTargetId) };


    // trafficMirrorTargetType Field Functions 
    bool hasTrafficMirrorTargetType() const { return this->trafficMirrorTargetType_ != nullptr;};
    void deleteTrafficMirrorTargetType() { this->trafficMirrorTargetType_ = nullptr;};
    inline string trafficMirrorTargetType() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorTargetType_, "") };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setTrafficMirrorTargetType(string trafficMirrorTargetType) { DARABONBA_PTR_SET_VALUE(trafficMirrorTargetType_, trafficMirrorTargetType) };


    // virtualNetworkId Field Functions 
    bool hasVirtualNetworkId() const { return this->virtualNetworkId_ != nullptr;};
    void deleteVirtualNetworkId() { this->virtualNetworkId_ = nullptr;};
    inline int32_t virtualNetworkId() const { DARABONBA_PTR_GET_DEFAULT(virtualNetworkId_, 0) };
    inline ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessions& setVirtualNetworkId(int32_t virtualNetworkId) { DARABONBA_PTR_SET_VALUE(virtualNetworkId_, virtualNetworkId) };


  protected:
    // The time when the session is created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether the traffic mirror session was enabled.
    // 
    // *   **false** 
    // *   **true**
    std::shared_ptr<bool> enabled_ = nullptr;
    // The maximum transmission unit.
    std::shared_ptr<int32_t> packetLength_ = nullptr;
    // The priority of the traffic mirror session.
    // 
    // A smaller value indicates a higher priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the resource group to which the traffic mirror session belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<Models::ListTrafficMirrorSessionsResponseBodyTrafficMirrorSessionsTags>> tags_ = nullptr;
    // The ID of the filter.
    std::shared_ptr<string> trafficMirrorFilterId_ = nullptr;
    // The status of the traffic mirror session.
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    std::shared_ptr<string> trafficMirrorSessionBusinessStatus_ = nullptr;
    // The description of the traffic mirror session.
    std::shared_ptr<string> trafficMirrorSessionDescription_ = nullptr;
    // The ID of the traffic mirror session.
    std::shared_ptr<string> trafficMirrorSessionId_ = nullptr;
    // The name of the traffic mirror session.
    std::shared_ptr<string> trafficMirrorSessionName_ = nullptr;
    // The status of the traffic mirror session. Valid values:
    // 
    // *   **Creating**
    // *   **Created**
    // *   **Modifying**
    // *   **Deleting**
    std::shared_ptr<string> trafficMirrorSessionStatus_ = nullptr;
    // The ID of the traffic mirror source.
    std::shared_ptr<vector<string>> trafficMirrorSourceIds_ = nullptr;
    // The ID of the traffic mirror destination.
    std::shared_ptr<string> trafficMirrorTargetId_ = nullptr;
    // The type of the traffic mirror destination. Valid values:
    // 
    // *   **NetworkInterface**: an elastic network interface (ENI)
    // *   **SLB**: an internal-facing Server Load Balancer (SLB) instance
    std::shared_ptr<string> trafficMirrorTargetType_ = nullptr;
    // You can specify VNIs to distinguish different mirrored traffic.
    std::shared_ptr<int32_t> virtualNetworkId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
