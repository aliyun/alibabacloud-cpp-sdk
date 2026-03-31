// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECONFIGURATIONTIMELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECONFIGURATIONTIMELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceConfigurationTimelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceConfigurationTimelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceConfigurationTimeline, resourceConfigurationTimeline_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceConfigurationTimelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceConfigurationTimeline, resourceConfigurationTimeline_);
    };
    GetAggregateResourceConfigurationTimelineResponseBody() = default ;
    GetAggregateResourceConfigurationTimelineResponseBody(const GetAggregateResourceConfigurationTimelineResponseBody &) = default ;
    GetAggregateResourceConfigurationTimelineResponseBody(GetAggregateResourceConfigurationTimelineResponseBody &&) = default ;
    GetAggregateResourceConfigurationTimelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceConfigurationTimelineResponseBody() = default ;
    GetAggregateResourceConfigurationTimelineResponseBody& operator=(const GetAggregateResourceConfigurationTimelineResponseBody &) = default ;
    GetAggregateResourceConfigurationTimelineResponseBody& operator=(GetAggregateResourceConfigurationTimelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceConfigurationTimeline : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceConfigurationTimeline& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigurationList, configurationList_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceConfigurationTimeline& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigurationList, configurationList_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      };
      ResourceConfigurationTimeline() = default ;
      ResourceConfigurationTimeline(const ResourceConfigurationTimeline &) = default ;
      ResourceConfigurationTimeline(ResourceConfigurationTimeline &&) = default ;
      ResourceConfigurationTimeline(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceConfigurationTimeline() = default ;
      ResourceConfigurationTimeline& operator=(const ResourceConfigurationTimeline &) = default ;
      ResourceConfigurationTimeline& operator=(ResourceConfigurationTimeline &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConfigurationList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigurationList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(AvailabilityZone, availabilityZone_);
          DARABONBA_PTR_TO_JSON(CaptureTime, captureTime_);
          DARABONBA_PTR_TO_JSON(ConfigurationDiff, configurationDiff_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(ResourceCreateTime, resourceCreateTime_);
          DARABONBA_PTR_TO_JSON(ResourceEventType, resourceEventType_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigurationList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(AvailabilityZone, availabilityZone_);
          DARABONBA_PTR_FROM_JSON(CaptureTime, captureTime_);
          DARABONBA_PTR_FROM_JSON(ConfigurationDiff, configurationDiff_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(ResourceCreateTime, resourceCreateTime_);
          DARABONBA_PTR_FROM_JSON(ResourceEventType, resourceEventType_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        ConfigurationList() = default ;
        ConfigurationList(const ConfigurationList &) = default ;
        ConfigurationList(ConfigurationList &&) = default ;
        ConfigurationList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigurationList() = default ;
        ConfigurationList& operator=(const ConfigurationList &) = default ;
        ConfigurationList& operator=(ConfigurationList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->availabilityZone_ == nullptr && this->captureTime_ == nullptr && this->configurationDiff_ == nullptr && this->region_ == nullptr && this->resourceCreateTime_ == nullptr
        && this->resourceEventType_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr && this->tags_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
        inline ConfigurationList& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // availabilityZone Field Functions 
        bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
        void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
        inline string getAvailabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
        inline ConfigurationList& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


        // captureTime Field Functions 
        bool hasCaptureTime() const { return this->captureTime_ != nullptr;};
        void deleteCaptureTime() { this->captureTime_ = nullptr;};
        inline string getCaptureTime() const { DARABONBA_PTR_GET_DEFAULT(captureTime_, "") };
        inline ConfigurationList& setCaptureTime(string captureTime) { DARABONBA_PTR_SET_VALUE(captureTime_, captureTime) };


        // configurationDiff Field Functions 
        bool hasConfigurationDiff() const { return this->configurationDiff_ != nullptr;};
        void deleteConfigurationDiff() { this->configurationDiff_ = nullptr;};
        inline string getConfigurationDiff() const { DARABONBA_PTR_GET_DEFAULT(configurationDiff_, "") };
        inline ConfigurationList& setConfigurationDiff(string configurationDiff) { DARABONBA_PTR_SET_VALUE(configurationDiff_, configurationDiff) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline ConfigurationList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // resourceCreateTime Field Functions 
        bool hasResourceCreateTime() const { return this->resourceCreateTime_ != nullptr;};
        void deleteResourceCreateTime() { this->resourceCreateTime_ = nullptr;};
        inline string getResourceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceCreateTime_, "") };
        inline ConfigurationList& setResourceCreateTime(string resourceCreateTime) { DARABONBA_PTR_SET_VALUE(resourceCreateTime_, resourceCreateTime) };


        // resourceEventType Field Functions 
        bool hasResourceEventType() const { return this->resourceEventType_ != nullptr;};
        void deleteResourceEventType() { this->resourceEventType_ = nullptr;};
        inline string getResourceEventType() const { DARABONBA_PTR_GET_DEFAULT(resourceEventType_, "") };
        inline ConfigurationList& setResourceEventType(string resourceEventType) { DARABONBA_PTR_SET_VALUE(resourceEventType_, resourceEventType) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline ConfigurationList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline ConfigurationList& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline ConfigurationList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline ConfigurationList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      protected:
        // The ID of the Alibaba Cloud account to which the resource belongs.
        shared_ptr<int64_t> accountId_ {};
        // The ID of the zone in which the resource resides.
        shared_ptr<string> availabilityZone_ {};
        // The timestamp when the resource change snapshot was recorded. Unit: milliseconds.
        shared_ptr<string> captureTime_ {};
        // The details of the resource change that triggered the compliance evaluation.
        shared_ptr<string> configurationDiff_ {};
        // The ID of the region in which the resource resides.
        shared_ptr<string> region_ {};
        // The timestamp when the resource was created. Unit: milliseconds.
        shared_ptr<string> resourceCreateTime_ {};
        // The type of the resource change event involved. Valid values:
        // 
        // *   DISCOVERED: A resource is created.
        // *   DISCOVERED_REVISED: A resource is created by periodic remediation tasks.
        // *   MODIFY: A resource is modified.
        // *   MODIFY_REVISED: A resource is modified by periodic remediation tasks.
        // *   REMOVE: A resource is deleted.
        // 
        // > 
        // *   To ensure the integrity of resources, periodic remediation tasks are run to check data and generate events that indicate the creation of new resources. Such events are infrequent.
        // *   The time when a resource change event is generated by a periodic remediation task is considered as the detection time of Cloud Config. The detection time is later than the time when the resource is modified.
        shared_ptr<string> resourceEventType_ {};
        // The ID of the resource.
        shared_ptr<string> resourceId_ {};
        // The name of the resource.
        shared_ptr<string> resourceName_ {};
        // The type of the resource.
        shared_ptr<string> resourceType_ {};
        // The tags of the resource.
        shared_ptr<string> tags_ {};
      };

      virtual bool empty() const override { return this->configurationList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
      // configurationList Field Functions 
      bool hasConfigurationList() const { return this->configurationList_ != nullptr;};
      void deleteConfigurationList() { this->configurationList_ = nullptr;};
      inline const vector<ResourceConfigurationTimeline::ConfigurationList> & getConfigurationList() const { DARABONBA_PTR_GET_CONST(configurationList_, vector<ResourceConfigurationTimeline::ConfigurationList>) };
      inline vector<ResourceConfigurationTimeline::ConfigurationList> getConfigurationList() { DARABONBA_PTR_GET(configurationList_, vector<ResourceConfigurationTimeline::ConfigurationList>) };
      inline ResourceConfigurationTimeline& setConfigurationList(const vector<ResourceConfigurationTimeline::ConfigurationList> & configurationList) { DARABONBA_PTR_SET_VALUE(configurationList_, configurationList) };
      inline ResourceConfigurationTimeline& setConfigurationList(vector<ResourceConfigurationTimeline::ConfigurationList> && configurationList) { DARABONBA_PTR_SET_RVALUE(configurationList_, configurationList) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline ResourceConfigurationTimeline& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline ResourceConfigurationTimeline& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      // The resource name.
      shared_ptr<vector<ResourceConfigurationTimeline::ConfigurationList>> configurationList_ {};
      // The maximum number of entries returned for a single request.
      shared_ptr<int32_t> maxResults_ {};
      // The token that is used to initiate the next request.
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceConfigurationTimeline_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateResourceConfigurationTimelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceConfigurationTimeline Field Functions 
    bool hasResourceConfigurationTimeline() const { return this->resourceConfigurationTimeline_ != nullptr;};
    void deleteResourceConfigurationTimeline() { this->resourceConfigurationTimeline_ = nullptr;};
    inline const GetAggregateResourceConfigurationTimelineResponseBody::ResourceConfigurationTimeline & getResourceConfigurationTimeline() const { DARABONBA_PTR_GET_CONST(resourceConfigurationTimeline_, GetAggregateResourceConfigurationTimelineResponseBody::ResourceConfigurationTimeline) };
    inline GetAggregateResourceConfigurationTimelineResponseBody::ResourceConfigurationTimeline getResourceConfigurationTimeline() { DARABONBA_PTR_GET(resourceConfigurationTimeline_, GetAggregateResourceConfigurationTimelineResponseBody::ResourceConfigurationTimeline) };
    inline GetAggregateResourceConfigurationTimelineResponseBody& setResourceConfigurationTimeline(const GetAggregateResourceConfigurationTimelineResponseBody::ResourceConfigurationTimeline & resourceConfigurationTimeline) { DARABONBA_PTR_SET_VALUE(resourceConfigurationTimeline_, resourceConfigurationTimeline) };
    inline GetAggregateResourceConfigurationTimelineResponseBody& setResourceConfigurationTimeline(GetAggregateResourceConfigurationTimelineResponseBody::ResourceConfigurationTimeline && resourceConfigurationTimeline) { DARABONBA_PTR_SET_RVALUE(resourceConfigurationTimeline_, resourceConfigurationTimeline) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The configuration timeline of the resource.
    shared_ptr<GetAggregateResourceConfigurationTimelineResponseBody::ResourceConfigurationTimeline> resourceConfigurationTimeline_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
