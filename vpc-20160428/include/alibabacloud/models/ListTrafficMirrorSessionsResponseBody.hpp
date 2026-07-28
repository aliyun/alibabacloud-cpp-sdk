// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORSESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListTrafficMirrorSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficMirrorSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessions, trafficMirrorSessions_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficMirrorSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessions, trafficMirrorSessions_);
    };
    ListTrafficMirrorSessionsResponseBody() = default ;
    ListTrafficMirrorSessionsResponseBody(const ListTrafficMirrorSessionsResponseBody &) = default ;
    ListTrafficMirrorSessionsResponseBody(ListTrafficMirrorSessionsResponseBody &&) = default ;
    ListTrafficMirrorSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficMirrorSessionsResponseBody() = default ;
    ListTrafficMirrorSessionsResponseBody& operator=(const ListTrafficMirrorSessionsResponseBody &) = default ;
    ListTrafficMirrorSessionsResponseBody& operator=(ListTrafficMirrorSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficMirrorSessions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficMirrorSessions& obj) { 
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
      friend void from_json(const Darabonba::Json& j, TrafficMirrorSessions& obj) { 
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
      TrafficMirrorSessions() = default ;
      TrafficMirrorSessions(const TrafficMirrorSessions &) = default ;
      TrafficMirrorSessions(TrafficMirrorSessions &&) = default ;
      TrafficMirrorSessions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficMirrorSessions() = default ;
      TrafficMirrorSessions& operator=(const TrafficMirrorSessions &) = default ;
      TrafficMirrorSessions& operator=(TrafficMirrorSessions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->enabled_ == nullptr && this->packetLength_ == nullptr && this->priority_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr
        && this->trafficMirrorFilterId_ == nullptr && this->trafficMirrorSessionBusinessStatus_ == nullptr && this->trafficMirrorSessionDescription_ == nullptr && this->trafficMirrorSessionId_ == nullptr && this->trafficMirrorSessionName_ == nullptr
        && this->trafficMirrorSessionStatus_ == nullptr && this->trafficMirrorSourceIds_ == nullptr && this->trafficMirrorTargetId_ == nullptr && this->trafficMirrorTargetType_ == nullptr && this->virtualNetworkId_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline TrafficMirrorSessions& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline TrafficMirrorSessions& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // packetLength Field Functions 
      bool hasPacketLength() const { return this->packetLength_ != nullptr;};
      void deletePacketLength() { this->packetLength_ = nullptr;};
      inline int32_t getPacketLength() const { DARABONBA_PTR_GET_DEFAULT(packetLength_, 0) };
      inline TrafficMirrorSessions& setPacketLength(int32_t packetLength) { DARABONBA_PTR_SET_VALUE(packetLength_, packetLength) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline TrafficMirrorSessions& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline TrafficMirrorSessions& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<TrafficMirrorSessions::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TrafficMirrorSessions::Tags>) };
      inline vector<TrafficMirrorSessions::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<TrafficMirrorSessions::Tags>) };
      inline TrafficMirrorSessions& setTags(const vector<TrafficMirrorSessions::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline TrafficMirrorSessions& setTags(vector<TrafficMirrorSessions::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // trafficMirrorFilterId Field Functions 
      bool hasTrafficMirrorFilterId() const { return this->trafficMirrorFilterId_ != nullptr;};
      void deleteTrafficMirrorFilterId() { this->trafficMirrorFilterId_ = nullptr;};
      inline string getTrafficMirrorFilterId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterId_, "") };
      inline TrafficMirrorSessions& setTrafficMirrorFilterId(string trafficMirrorFilterId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterId_, trafficMirrorFilterId) };


      // trafficMirrorSessionBusinessStatus Field Functions 
      bool hasTrafficMirrorSessionBusinessStatus() const { return this->trafficMirrorSessionBusinessStatus_ != nullptr;};
      void deleteTrafficMirrorSessionBusinessStatus() { this->trafficMirrorSessionBusinessStatus_ = nullptr;};
      inline string getTrafficMirrorSessionBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionBusinessStatus_, "") };
      inline TrafficMirrorSessions& setTrafficMirrorSessionBusinessStatus(string trafficMirrorSessionBusinessStatus) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionBusinessStatus_, trafficMirrorSessionBusinessStatus) };


      // trafficMirrorSessionDescription Field Functions 
      bool hasTrafficMirrorSessionDescription() const { return this->trafficMirrorSessionDescription_ != nullptr;};
      void deleteTrafficMirrorSessionDescription() { this->trafficMirrorSessionDescription_ = nullptr;};
      inline string getTrafficMirrorSessionDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionDescription_, "") };
      inline TrafficMirrorSessions& setTrafficMirrorSessionDescription(string trafficMirrorSessionDescription) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionDescription_, trafficMirrorSessionDescription) };


      // trafficMirrorSessionId Field Functions 
      bool hasTrafficMirrorSessionId() const { return this->trafficMirrorSessionId_ != nullptr;};
      void deleteTrafficMirrorSessionId() { this->trafficMirrorSessionId_ = nullptr;};
      inline string getTrafficMirrorSessionId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionId_, "") };
      inline TrafficMirrorSessions& setTrafficMirrorSessionId(string trafficMirrorSessionId) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionId_, trafficMirrorSessionId) };


      // trafficMirrorSessionName Field Functions 
      bool hasTrafficMirrorSessionName() const { return this->trafficMirrorSessionName_ != nullptr;};
      void deleteTrafficMirrorSessionName() { this->trafficMirrorSessionName_ = nullptr;};
      inline string getTrafficMirrorSessionName() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionName_, "") };
      inline TrafficMirrorSessions& setTrafficMirrorSessionName(string trafficMirrorSessionName) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionName_, trafficMirrorSessionName) };


      // trafficMirrorSessionStatus Field Functions 
      bool hasTrafficMirrorSessionStatus() const { return this->trafficMirrorSessionStatus_ != nullptr;};
      void deleteTrafficMirrorSessionStatus() { this->trafficMirrorSessionStatus_ = nullptr;};
      inline string getTrafficMirrorSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionStatus_, "") };
      inline TrafficMirrorSessions& setTrafficMirrorSessionStatus(string trafficMirrorSessionStatus) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionStatus_, trafficMirrorSessionStatus) };


      // trafficMirrorSourceIds Field Functions 
      bool hasTrafficMirrorSourceIds() const { return this->trafficMirrorSourceIds_ != nullptr;};
      void deleteTrafficMirrorSourceIds() { this->trafficMirrorSourceIds_ = nullptr;};
      inline const vector<string> & getTrafficMirrorSourceIds() const { DARABONBA_PTR_GET_CONST(trafficMirrorSourceIds_, vector<string>) };
      inline vector<string> getTrafficMirrorSourceIds() { DARABONBA_PTR_GET(trafficMirrorSourceIds_, vector<string>) };
      inline TrafficMirrorSessions& setTrafficMirrorSourceIds(const vector<string> & trafficMirrorSourceIds) { DARABONBA_PTR_SET_VALUE(trafficMirrorSourceIds_, trafficMirrorSourceIds) };
      inline TrafficMirrorSessions& setTrafficMirrorSourceIds(vector<string> && trafficMirrorSourceIds) { DARABONBA_PTR_SET_RVALUE(trafficMirrorSourceIds_, trafficMirrorSourceIds) };


      // trafficMirrorTargetId Field Functions 
      bool hasTrafficMirrorTargetId() const { return this->trafficMirrorTargetId_ != nullptr;};
      void deleteTrafficMirrorTargetId() { this->trafficMirrorTargetId_ = nullptr;};
      inline string getTrafficMirrorTargetId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorTargetId_, "") };
      inline TrafficMirrorSessions& setTrafficMirrorTargetId(string trafficMirrorTargetId) { DARABONBA_PTR_SET_VALUE(trafficMirrorTargetId_, trafficMirrorTargetId) };


      // trafficMirrorTargetType Field Functions 
      bool hasTrafficMirrorTargetType() const { return this->trafficMirrorTargetType_ != nullptr;};
      void deleteTrafficMirrorTargetType() { this->trafficMirrorTargetType_ = nullptr;};
      inline string getTrafficMirrorTargetType() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorTargetType_, "") };
      inline TrafficMirrorSessions& setTrafficMirrorTargetType(string trafficMirrorTargetType) { DARABONBA_PTR_SET_VALUE(trafficMirrorTargetType_, trafficMirrorTargetType) };


      // virtualNetworkId Field Functions 
      bool hasVirtualNetworkId() const { return this->virtualNetworkId_ != nullptr;};
      void deleteVirtualNetworkId() { this->virtualNetworkId_ = nullptr;};
      inline int32_t getVirtualNetworkId() const { DARABONBA_PTR_GET_DEFAULT(virtualNetworkId_, 0) };
      inline TrafficMirrorSessions& setVirtualNetworkId(int32_t virtualNetworkId) { DARABONBA_PTR_SET_VALUE(virtualNetworkId_, virtualNetworkId) };


    protected:
      // The time when the traffic mirror session was created.
      shared_ptr<string> creationTime_ {};
      // Indicates whether the traffic mirror session is enabled. Valid values:
      // 
      // - **false** (default): The traffic mirror session is not enabled.
      // 
      // - **true**: The traffic mirror session is enabled.
      shared_ptr<bool> enabled_ {};
      // The length of the original packet to be mirrored (excluding the VXLAN packet length). Default value: **1500**. Valid values: **64** to **8500**. Unit: bytes.
      // - This parameter affects the packet length received by the traffic mirror destination. For more information, see the mirrored packet length and MTU limits in [Traffic mirroring overview](https://help.aliyun.com/document_detail/207513.html).
      // 
      // - This parameter is available only in specific regions. For more information, see the mirrored packet length parameter description in [Create and manage traffic mirrors](https://help.aliyun.com/document_detail/207514.html).
      shared_ptr<int32_t> packetLength_ {};
      // The priority of the traffic mirror session.
      // 
      // A smaller value indicates a higher priority.
      shared_ptr<int32_t> priority_ {};
      // The ID of the resource group to which the traffic mirroring session belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The tags.
      shared_ptr<vector<TrafficMirrorSessions::Tags>> tags_ {};
      // The instance ID of the traffic mirror filter.
      shared_ptr<string> trafficMirrorFilterId_ {};
      // The business status of the traffic mirror session. Valid values:
      // 
      // - **Normal**: Normal.
      // 
      // - **FinancialLocked**: financial lock.
      shared_ptr<string> trafficMirrorSessionBusinessStatus_ {};
      // The description of the traffic mirror session.
      shared_ptr<string> trafficMirrorSessionDescription_ {};
      // The instance ID of the traffic mirror session.
      shared_ptr<string> trafficMirrorSessionId_ {};
      // The name of the traffic mirror session.
      shared_ptr<string> trafficMirrorSessionName_ {};
      // The status of the traffic mirror session. Valid values:
      // 
      // - **Creating**: being created.
      // - **Created**: created.
      // - **Modifying**: being modified.
      // - **Deleting**: being deleted.
      shared_ptr<string> trafficMirrorSessionStatus_ {};
      // The instance IDs of the traffic mirror sources.
      shared_ptr<vector<string>> trafficMirrorSourceIds_ {};
      // The instance ID of the traffic mirror destination.
      shared_ptr<string> trafficMirrorTargetId_ {};
      // The traffic mirror destination type. Valid values:
      // 
      // - **NetworkInterface**: network interface controller (NIC).
      // 
      // - **SLB**: internal-facing SLB instance.
      shared_ptr<string> trafficMirrorTargetType_ {};
      // The VNI used to distinguish different mirrored data.
      shared_ptr<int32_t> virtualNetworkId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->trafficMirrorSessions_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTrafficMirrorSessionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrafficMirrorSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListTrafficMirrorSessionsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trafficMirrorSessions Field Functions 
    bool hasTrafficMirrorSessions() const { return this->trafficMirrorSessions_ != nullptr;};
    void deleteTrafficMirrorSessions() { this->trafficMirrorSessions_ = nullptr;};
    inline const vector<ListTrafficMirrorSessionsResponseBody::TrafficMirrorSessions> & getTrafficMirrorSessions() const { DARABONBA_PTR_GET_CONST(trafficMirrorSessions_, vector<ListTrafficMirrorSessionsResponseBody::TrafficMirrorSessions>) };
    inline vector<ListTrafficMirrorSessionsResponseBody::TrafficMirrorSessions> getTrafficMirrorSessions() { DARABONBA_PTR_GET(trafficMirrorSessions_, vector<ListTrafficMirrorSessionsResponseBody::TrafficMirrorSessions>) };
    inline ListTrafficMirrorSessionsResponseBody& setTrafficMirrorSessions(const vector<ListTrafficMirrorSessionsResponseBody::TrafficMirrorSessions> & trafficMirrorSessions) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessions_, trafficMirrorSessions) };
    inline ListTrafficMirrorSessionsResponseBody& setTrafficMirrorSessions(vector<ListTrafficMirrorSessionsResponseBody::TrafficMirrorSessions> && trafficMirrorSessions) { DARABONBA_PTR_SET_RVALUE(trafficMirrorSessions_, trafficMirrorSessions) };


  protected:
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // - If **NextToken** is empty, no next query exists.
    // - If **NextToken** has a value, the value is the token for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
    // The details of traffic mirror sessions.
    shared_ptr<vector<ListTrafficMirrorSessionsResponseBody::TrafficMirrorSessions>> trafficMirrorSessions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
