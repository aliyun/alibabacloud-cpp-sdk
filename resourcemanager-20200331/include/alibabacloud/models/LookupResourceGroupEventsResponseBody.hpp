// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPRESOURCEGROUPEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPRESOURCEGROUPEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class LookupResourceGroupEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupResourceGroupEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LookupResourceGroupEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    LookupResourceGroupEventsResponseBody() = default ;
    LookupResourceGroupEventsResponseBody(const LookupResourceGroupEventsResponseBody &) = default ;
    LookupResourceGroupEventsResponseBody(LookupResourceGroupEventsResponseBody &&) = default ;
    LookupResourceGroupEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupResourceGroupEventsResponseBody() = default ;
    LookupResourceGroupEventsResponseBody& operator=(const LookupResourceGroupEventsResponseBody &) = default ;
    LookupResourceGroupEventsResponseBody& operator=(LookupResourceGroupEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Events : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Events& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
        DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Service, service_);
        DARABONBA_PTR_TO_JSON(SourceResourceGroupInfo, sourceResourceGroupInfo_);
        DARABONBA_PTR_TO_JSON(TargetResourceGroupInfo, targetResourceGroupInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Events& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
        DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Service, service_);
        DARABONBA_PTR_FROM_JSON(SourceResourceGroupInfo, sourceResourceGroupInfo_);
        DARABONBA_PTR_FROM_JSON(TargetResourceGroupInfo, targetResourceGroupInfo_);
      };
      Events() = default ;
      Events(const Events &) = default ;
      Events(Events &&) = default ;
      Events(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Events() = default ;
      Events& operator=(const Events &) = default ;
      Events& operator=(Events &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TargetResourceGroupInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TargetResourceGroupInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, TargetResourceGroupInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        };
        TargetResourceGroupInfo() = default ;
        TargetResourceGroupInfo(const TargetResourceGroupInfo &) = default ;
        TargetResourceGroupInfo(TargetResourceGroupInfo &&) = default ;
        TargetResourceGroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TargetResourceGroupInfo() = default ;
        TargetResourceGroupInfo& operator=(const TargetResourceGroupInfo &) = default ;
        TargetResourceGroupInfo& operator=(TargetResourceGroupInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceGroupDisplayName_ == nullptr
        && this->resourceGroupId_ == nullptr; };
        // resourceGroupDisplayName Field Functions 
        bool hasResourceGroupDisplayName() const { return this->resourceGroupDisplayName_ != nullptr;};
        void deleteResourceGroupDisplayName() { this->resourceGroupDisplayName_ = nullptr;};
        inline string getResourceGroupDisplayName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupDisplayName_, "") };
        inline TargetResourceGroupInfo& setResourceGroupDisplayName(string resourceGroupDisplayName) { DARABONBA_PTR_SET_VALUE(resourceGroupDisplayName_, resourceGroupDisplayName) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline TargetResourceGroupInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      protected:
        // The resource group name.
        shared_ptr<string> resourceGroupDisplayName_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
      };

      class SourceResourceGroupInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceResourceGroupInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, SourceResourceGroupInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        };
        SourceResourceGroupInfo() = default ;
        SourceResourceGroupInfo(const SourceResourceGroupInfo &) = default ;
        SourceResourceGroupInfo(SourceResourceGroupInfo &&) = default ;
        SourceResourceGroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceResourceGroupInfo() = default ;
        SourceResourceGroupInfo& operator=(const SourceResourceGroupInfo &) = default ;
        SourceResourceGroupInfo& operator=(SourceResourceGroupInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceGroupDisplayName_ == nullptr
        && this->resourceGroupId_ == nullptr; };
        // resourceGroupDisplayName Field Functions 
        bool hasResourceGroupDisplayName() const { return this->resourceGroupDisplayName_ != nullptr;};
        void deleteResourceGroupDisplayName() { this->resourceGroupDisplayName_ = nullptr;};
        inline string getResourceGroupDisplayName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupDisplayName_, "") };
        inline SourceResourceGroupInfo& setResourceGroupDisplayName(string resourceGroupDisplayName) { DARABONBA_PTR_SET_VALUE(resourceGroupDisplayName_, resourceGroupDisplayName) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline SourceResourceGroupInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      protected:
        // The resource group name.
        shared_ptr<string> resourceGroupDisplayName_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
      };

      virtual bool empty() const override { return this->changeType_ == nullptr
        && this->eventTime_ == nullptr && this->regionId_ == nullptr && this->resourceGroupDisplayName_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->service_ == nullptr && this->sourceResourceGroupInfo_ == nullptr && this->targetResourceGroupInfo_ == nullptr; };
      // changeType Field Functions 
      bool hasChangeType() const { return this->changeType_ != nullptr;};
      void deleteChangeType() { this->changeType_ = nullptr;};
      inline string getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
      inline Events& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


      // eventTime Field Functions 
      bool hasEventTime() const { return this->eventTime_ != nullptr;};
      void deleteEventTime() { this->eventTime_ = nullptr;};
      inline string getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
      inline Events& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Events& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupDisplayName Field Functions 
      bool hasResourceGroupDisplayName() const { return this->resourceGroupDisplayName_ != nullptr;};
      void deleteResourceGroupDisplayName() { this->resourceGroupDisplayName_ = nullptr;};
      inline string getResourceGroupDisplayName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupDisplayName_, "") };
      inline Events& setResourceGroupDisplayName(string resourceGroupDisplayName) { DARABONBA_PTR_SET_VALUE(resourceGroupDisplayName_, resourceGroupDisplayName) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Events& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Events& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Events& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline Events& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


      // sourceResourceGroupInfo Field Functions 
      bool hasSourceResourceGroupInfo() const { return this->sourceResourceGroupInfo_ != nullptr;};
      void deleteSourceResourceGroupInfo() { this->sourceResourceGroupInfo_ = nullptr;};
      inline const Events::SourceResourceGroupInfo & getSourceResourceGroupInfo() const { DARABONBA_PTR_GET_CONST(sourceResourceGroupInfo_, Events::SourceResourceGroupInfo) };
      inline Events::SourceResourceGroupInfo getSourceResourceGroupInfo() { DARABONBA_PTR_GET(sourceResourceGroupInfo_, Events::SourceResourceGroupInfo) };
      inline Events& setSourceResourceGroupInfo(const Events::SourceResourceGroupInfo & sourceResourceGroupInfo) { DARABONBA_PTR_SET_VALUE(sourceResourceGroupInfo_, sourceResourceGroupInfo) };
      inline Events& setSourceResourceGroupInfo(Events::SourceResourceGroupInfo && sourceResourceGroupInfo) { DARABONBA_PTR_SET_RVALUE(sourceResourceGroupInfo_, sourceResourceGroupInfo) };


      // targetResourceGroupInfo Field Functions 
      bool hasTargetResourceGroupInfo() const { return this->targetResourceGroupInfo_ != nullptr;};
      void deleteTargetResourceGroupInfo() { this->targetResourceGroupInfo_ = nullptr;};
      inline const Events::TargetResourceGroupInfo & getTargetResourceGroupInfo() const { DARABONBA_PTR_GET_CONST(targetResourceGroupInfo_, Events::TargetResourceGroupInfo) };
      inline Events::TargetResourceGroupInfo getTargetResourceGroupInfo() { DARABONBA_PTR_GET(targetResourceGroupInfo_, Events::TargetResourceGroupInfo) };
      inline Events& setTargetResourceGroupInfo(const Events::TargetResourceGroupInfo & targetResourceGroupInfo) { DARABONBA_PTR_SET_VALUE(targetResourceGroupInfo_, targetResourceGroupInfo) };
      inline Events& setTargetResourceGroupInfo(Events::TargetResourceGroupInfo && targetResourceGroupInfo) { DARABONBA_PTR_SET_RVALUE(targetResourceGroupInfo_, targetResourceGroupInfo) };


    protected:
      // The type of the resource change event.
      shared_ptr<string> changeType_ {};
      // The time when the event was triggered.
      shared_ptr<string> eventTime_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The resource group name.
      shared_ptr<string> resourceGroupDisplayName_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
      // The resource type.
      // 
      // You can obtain the resource type from the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> resourceType_ {};
      // The service code.
      // 
      // You can obtain the code from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> service_ {};
      // The source resource group.
      shared_ptr<Events::SourceResourceGroupInfo> sourceResourceGroupInfo_ {};
      // The destination resource group.
      shared_ptr<Events::TargetResourceGroupInfo> targetResourceGroupInfo_ {};
    };

    virtual bool empty() const override { return this->events_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<LookupResourceGroupEventsResponseBody::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<LookupResourceGroupEventsResponseBody::Events>) };
    inline vector<LookupResourceGroupEventsResponseBody::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<LookupResourceGroupEventsResponseBody::Events>) };
    inline LookupResourceGroupEventsResponseBody& setEvents(const vector<LookupResourceGroupEventsResponseBody::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline LookupResourceGroupEventsResponseBody& setEvents(vector<LookupResourceGroupEventsResponseBody::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline LookupResourceGroupEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LookupResourceGroupEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried events.
    shared_ptr<vector<LookupResourceGroupEventsResponseBody::Events>> events_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
