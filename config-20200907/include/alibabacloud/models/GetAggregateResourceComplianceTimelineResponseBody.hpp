// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCETIMELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCETIMELINERESPONSEBODY_HPP_
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
  class GetAggregateResourceComplianceTimelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceTimelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceComplianceTimeline, resourceComplianceTimeline_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceTimelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceComplianceTimeline, resourceComplianceTimeline_);
    };
    GetAggregateResourceComplianceTimelineResponseBody() = default ;
    GetAggregateResourceComplianceTimelineResponseBody(const GetAggregateResourceComplianceTimelineResponseBody &) = default ;
    GetAggregateResourceComplianceTimelineResponseBody(GetAggregateResourceComplianceTimelineResponseBody &&) = default ;
    GetAggregateResourceComplianceTimelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceTimelineResponseBody() = default ;
    GetAggregateResourceComplianceTimelineResponseBody& operator=(const GetAggregateResourceComplianceTimelineResponseBody &) = default ;
    GetAggregateResourceComplianceTimelineResponseBody& operator=(GetAggregateResourceComplianceTimelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceComplianceTimeline : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceComplianceTimeline& obj) { 
        DARABONBA_PTR_TO_JSON(ComplianceList, complianceList_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceComplianceTimeline& obj) { 
        DARABONBA_PTR_FROM_JSON(ComplianceList, complianceList_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      };
      ResourceComplianceTimeline() = default ;
      ResourceComplianceTimeline(const ResourceComplianceTimeline &) = default ;
      ResourceComplianceTimeline(ResourceComplianceTimeline &&) = default ;
      ResourceComplianceTimeline(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceComplianceTimeline() = default ;
      ResourceComplianceTimeline& operator=(const ResourceComplianceTimeline &) = default ;
      ResourceComplianceTimeline& operator=(ResourceComplianceTimeline &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ComplianceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComplianceList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(AvailabilityZone, availabilityZone_);
          DARABONBA_PTR_TO_JSON(CaptureTime, captureTime_);
          DARABONBA_PTR_TO_JSON(Configuration, configuration_);
          DARABONBA_PTR_TO_JSON(ConfigurationDiff, configurationDiff_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(ResourceCreateTime, resourceCreateTime_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, ComplianceList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(AvailabilityZone, availabilityZone_);
          DARABONBA_PTR_FROM_JSON(CaptureTime, captureTime_);
          DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
          DARABONBA_PTR_FROM_JSON(ConfigurationDiff, configurationDiff_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(ResourceCreateTime, resourceCreateTime_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        ComplianceList() = default ;
        ComplianceList(const ComplianceList &) = default ;
        ComplianceList(ComplianceList &&) = default ;
        ComplianceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComplianceList() = default ;
        ComplianceList& operator=(const ComplianceList &) = default ;
        ComplianceList& operator=(ComplianceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->availabilityZone_ == nullptr && this->captureTime_ == nullptr && this->configuration_ == nullptr && this->configurationDiff_ == nullptr && this->region_ == nullptr
        && this->resourceCreateTime_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceStatus_ == nullptr && this->resourceType_ == nullptr
        && this->tags_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
        inline ComplianceList& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // availabilityZone Field Functions 
        bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
        void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
        inline string getAvailabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
        inline ComplianceList& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


        // captureTime Field Functions 
        bool hasCaptureTime() const { return this->captureTime_ != nullptr;};
        void deleteCaptureTime() { this->captureTime_ = nullptr;};
        inline int64_t getCaptureTime() const { DARABONBA_PTR_GET_DEFAULT(captureTime_, 0L) };
        inline ComplianceList& setCaptureTime(int64_t captureTime) { DARABONBA_PTR_SET_VALUE(captureTime_, captureTime) };


        // configuration Field Functions 
        bool hasConfiguration() const { return this->configuration_ != nullptr;};
        void deleteConfiguration() { this->configuration_ = nullptr;};
        inline string getConfiguration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
        inline ComplianceList& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


        // configurationDiff Field Functions 
        bool hasConfigurationDiff() const { return this->configurationDiff_ != nullptr;};
        void deleteConfigurationDiff() { this->configurationDiff_ = nullptr;};
        inline string getConfigurationDiff() const { DARABONBA_PTR_GET_DEFAULT(configurationDiff_, "") };
        inline ComplianceList& setConfigurationDiff(string configurationDiff) { DARABONBA_PTR_SET_VALUE(configurationDiff_, configurationDiff) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline ComplianceList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // resourceCreateTime Field Functions 
        bool hasResourceCreateTime() const { return this->resourceCreateTime_ != nullptr;};
        void deleteResourceCreateTime() { this->resourceCreateTime_ = nullptr;};
        inline int64_t getResourceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceCreateTime_, 0L) };
        inline ComplianceList& setResourceCreateTime(int64_t resourceCreateTime) { DARABONBA_PTR_SET_VALUE(resourceCreateTime_, resourceCreateTime) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline ComplianceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline ComplianceList& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // resourceStatus Field Functions 
        bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
        void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
        inline string getResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
        inline ComplianceList& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline ComplianceList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline ComplianceList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      protected:
        // The ID of the Alibaba Cloud account to which the resource belongs.
        shared_ptr<string> accountId_ {};
        // The ID of the zone in which the resource resides.
        shared_ptr<string> availabilityZone_ {};
        // The timestamp when the compliance evaluation was recorded. Unit: milliseconds.
        shared_ptr<int64_t> captureTime_ {};
        // The information about the rules that evaluated the resource and the compliance evaluation result.
        shared_ptr<string> configuration_ {};
        // The details of the resource change that triggered the compliance evaluation.
        shared_ptr<string> configurationDiff_ {};
        // The ID of the region in which the resource resides.
        shared_ptr<string> region_ {};
        // The timestamp when the resource was created. Unit: milliseconds.
        shared_ptr<int64_t> resourceCreateTime_ {};
        // The ID of the resource.
        shared_ptr<string> resourceId_ {};
        // The name of the resource.
        shared_ptr<string> resourceName_ {};
        // The status of the resource. The parameter value varies based on the resource type and may be left empty. Examples:
        // 
        // *   If the ResourceType parameter is set to ACS::ECS::Instance, the resource is an Elastic Compute Service (ECS) instance that has a specific state. In this case, the valid values of this parameter are Running and Stopped.
        // *   If the ResourceType parameter is set to ACS::OSS::Bucket, the resource is an OSS bucket that does not have a specific state. In this case, this parameter is left empty.
        shared_ptr<string> resourceStatus_ {};
        // The type of the resource.
        shared_ptr<string> resourceType_ {};
        // The tags of the resource.
        shared_ptr<string> tags_ {};
      };

      virtual bool empty() const override { return this->complianceList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
      // complianceList Field Functions 
      bool hasComplianceList() const { return this->complianceList_ != nullptr;};
      void deleteComplianceList() { this->complianceList_ = nullptr;};
      inline const vector<ResourceComplianceTimeline::ComplianceList> & getComplianceList() const { DARABONBA_PTR_GET_CONST(complianceList_, vector<ResourceComplianceTimeline::ComplianceList>) };
      inline vector<ResourceComplianceTimeline::ComplianceList> getComplianceList() { DARABONBA_PTR_GET(complianceList_, vector<ResourceComplianceTimeline::ComplianceList>) };
      inline ResourceComplianceTimeline& setComplianceList(const vector<ResourceComplianceTimeline::ComplianceList> & complianceList) { DARABONBA_PTR_SET_VALUE(complianceList_, complianceList) };
      inline ResourceComplianceTimeline& setComplianceList(vector<ResourceComplianceTimeline::ComplianceList> && complianceList) { DARABONBA_PTR_SET_RVALUE(complianceList_, complianceList) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline ResourceComplianceTimeline& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline ResourceComplianceTimeline& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      // The status of the resource. The parameter value varies based on the resource type and may be left empty. Examples:
      // 
      // *   If the value of the ResourceType parameter is ACS::ECS::Instance, the resource is an Elastic Compute Service (ECS) instance that has a specific state. In this case, the valid values of this parameter are Running and Stopped.
      // *   If the value of the ResourceType parameter is ACS::OSS::Bucket, the resource is an Object Storage Service (OSS) bucket that is not in a specific state. In this case, this parameter is empty.
      shared_ptr<vector<ResourceComplianceTimeline::ComplianceList>> complianceList_ {};
      // The maximum number of entries returned for a single request.
      shared_ptr<int32_t> maxResults_ {};
      // A pagination token. It can be used in the next request to retrieve a new page of results.
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceComplianceTimeline_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateResourceComplianceTimelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceComplianceTimeline Field Functions 
    bool hasResourceComplianceTimeline() const { return this->resourceComplianceTimeline_ != nullptr;};
    void deleteResourceComplianceTimeline() { this->resourceComplianceTimeline_ = nullptr;};
    inline const GetAggregateResourceComplianceTimelineResponseBody::ResourceComplianceTimeline & getResourceComplianceTimeline() const { DARABONBA_PTR_GET_CONST(resourceComplianceTimeline_, GetAggregateResourceComplianceTimelineResponseBody::ResourceComplianceTimeline) };
    inline GetAggregateResourceComplianceTimelineResponseBody::ResourceComplianceTimeline getResourceComplianceTimeline() { DARABONBA_PTR_GET(resourceComplianceTimeline_, GetAggregateResourceComplianceTimelineResponseBody::ResourceComplianceTimeline) };
    inline GetAggregateResourceComplianceTimelineResponseBody& setResourceComplianceTimeline(const GetAggregateResourceComplianceTimelineResponseBody::ResourceComplianceTimeline & resourceComplianceTimeline) { DARABONBA_PTR_SET_VALUE(resourceComplianceTimeline_, resourceComplianceTimeline) };
    inline GetAggregateResourceComplianceTimelineResponseBody& setResourceComplianceTimeline(GetAggregateResourceComplianceTimelineResponseBody::ResourceComplianceTimeline && resourceComplianceTimeline) { DARABONBA_PTR_SET_RVALUE(resourceComplianceTimeline_, resourceComplianceTimeline) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the compliance timeline.
    shared_ptr<GetAggregateResourceComplianceTimelineResponseBody::ResourceComplianceTimeline> resourceComplianceTimeline_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
