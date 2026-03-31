// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISCOVEREDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDISCOVEREDRESOURCESRESPONSEBODY_HPP_
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
  class ListDiscoveredResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiscoveredResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiscoveredResourceProfiles, discoveredResourceProfiles_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiscoveredResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscoveredResourceProfiles, discoveredResourceProfiles_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDiscoveredResourcesResponseBody() = default ;
    ListDiscoveredResourcesResponseBody(const ListDiscoveredResourcesResponseBody &) = default ;
    ListDiscoveredResourcesResponseBody(ListDiscoveredResourcesResponseBody &&) = default ;
    ListDiscoveredResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiscoveredResourcesResponseBody() = default ;
    ListDiscoveredResourcesResponseBody& operator=(const ListDiscoveredResourcesResponseBody &) = default ;
    ListDiscoveredResourcesResponseBody& operator=(ListDiscoveredResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DiscoveredResourceProfiles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiscoveredResourceProfiles& obj) { 
        DARABONBA_PTR_TO_JSON(DiscoveredResourceProfileList, discoveredResourceProfileList_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, DiscoveredResourceProfiles& obj) { 
        DARABONBA_PTR_FROM_JSON(DiscoveredResourceProfileList, discoveredResourceProfileList_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      DiscoveredResourceProfiles() = default ;
      DiscoveredResourceProfiles(const DiscoveredResourceProfiles &) = default ;
      DiscoveredResourceProfiles(DiscoveredResourceProfiles &&) = default ;
      DiscoveredResourceProfiles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiscoveredResourceProfiles() = default ;
      DiscoveredResourceProfiles& operator=(const DiscoveredResourceProfiles &) = default ;
      DiscoveredResourceProfiles& operator=(DiscoveredResourceProfiles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DiscoveredResourceProfileList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DiscoveredResourceProfileList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(AvailabilityZone, availabilityZone_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(ResourceCreationTime, resourceCreationTime_);
          DARABONBA_PTR_TO_JSON(ResourceDeleted, resourceDeleted_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, DiscoveredResourceProfileList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(AvailabilityZone, availabilityZone_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(ResourceCreationTime, resourceCreationTime_);
          DARABONBA_PTR_FROM_JSON(ResourceDeleted, resourceDeleted_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        DiscoveredResourceProfileList() = default ;
        DiscoveredResourceProfileList(const DiscoveredResourceProfileList &) = default ;
        DiscoveredResourceProfileList(DiscoveredResourceProfileList &&) = default ;
        DiscoveredResourceProfileList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DiscoveredResourceProfileList() = default ;
        DiscoveredResourceProfileList& operator=(const DiscoveredResourceProfileList &) = default ;
        DiscoveredResourceProfileList& operator=(DiscoveredResourceProfileList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->availabilityZone_ == nullptr && this->region_ == nullptr && this->resourceCreationTime_ == nullptr && this->resourceDeleted_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceStatus_ == nullptr && this->resourceType_ == nullptr && this->tags_ == nullptr
        && this->updateTime_ == nullptr && this->vSwitchId_ == nullptr && this->version_ == nullptr && this->vpcId_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
        inline DiscoveredResourceProfileList& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // availabilityZone Field Functions 
        bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
        void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
        inline string getAvailabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
        inline DiscoveredResourceProfileList& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline DiscoveredResourceProfileList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // resourceCreationTime Field Functions 
        bool hasResourceCreationTime() const { return this->resourceCreationTime_ != nullptr;};
        void deleteResourceCreationTime() { this->resourceCreationTime_ = nullptr;};
        inline int64_t getResourceCreationTime() const { DARABONBA_PTR_GET_DEFAULT(resourceCreationTime_, 0L) };
        inline DiscoveredResourceProfileList& setResourceCreationTime(int64_t resourceCreationTime) { DARABONBA_PTR_SET_VALUE(resourceCreationTime_, resourceCreationTime) };


        // resourceDeleted Field Functions 
        bool hasResourceDeleted() const { return this->resourceDeleted_ != nullptr;};
        void deleteResourceDeleted() { this->resourceDeleted_ = nullptr;};
        inline int32_t getResourceDeleted() const { DARABONBA_PTR_GET_DEFAULT(resourceDeleted_, 0) };
        inline DiscoveredResourceProfileList& setResourceDeleted(int32_t resourceDeleted) { DARABONBA_PTR_SET_VALUE(resourceDeleted_, resourceDeleted) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline DiscoveredResourceProfileList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline DiscoveredResourceProfileList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline DiscoveredResourceProfileList& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // resourceStatus Field Functions 
        bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
        void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
        inline string getResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
        inline DiscoveredResourceProfileList& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline DiscoveredResourceProfileList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline DiscoveredResourceProfileList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline DiscoveredResourceProfileList& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DiscoveredResourceProfileList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
        inline DiscoveredResourceProfileList& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline DiscoveredResourceProfileList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The ID of the Alibaba Cloud account to which the resource belongs.
        shared_ptr<int64_t> accountId_ {};
        // The zone ID.
        shared_ptr<string> availabilityZone_ {};
        // The region ID.
        shared_ptr<string> region_ {};
        // The timestamp when the resource was created. Unit: milliseconds.
        shared_ptr<int64_t> resourceCreationTime_ {};
        // The status of the resource. Valid values:
        // 
        // *   0: The resource is deleted.
        // *   1: The resource is retained.
        shared_ptr<int32_t> resourceDeleted_ {};
        // This parameter is required.
        shared_ptr<string> resourceGroupId_ {};
        // The resource ID.
        shared_ptr<string> resourceId_ {};
        // The resource name.
        shared_ptr<string> resourceName_ {};
        // The status of the resource. The value of this parameter varies based on the resource type and may be empty. Examples:
        // 
        // *   If the ResourceType parameter is set to ACS::ECS::Instance, the resource is an Elastic Compute Service (ECS) instance that has a specific state. In this case, the valid values of this parameter are Running and Stopped.
        // *   If the ResourceType parameter is ACS::OSS::Bucket, the resource is an Object Storage Service (OSS) bucket that is not in a specific state. In this case, this parameter is left empty.
        shared_ptr<string> resourceStatus_ {};
        // The type of the resource.
        shared_ptr<string> resourceType_ {};
        // The tags of the resource.
        shared_ptr<string> tags_ {};
        // The time when the resource was last updated. The value must be a timestamp in milliseconds.
        shared_ptr<int64_t> updateTime_ {};
        // This parameter is required.
        shared_ptr<string> vSwitchId_ {};
        // The version of the resource change.
        shared_ptr<int64_t> version_ {};
        // This parameter is required.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->discoveredResourceProfileList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // discoveredResourceProfileList Field Functions 
      bool hasDiscoveredResourceProfileList() const { return this->discoveredResourceProfileList_ != nullptr;};
      void deleteDiscoveredResourceProfileList() { this->discoveredResourceProfileList_ = nullptr;};
      inline const vector<DiscoveredResourceProfiles::DiscoveredResourceProfileList> & getDiscoveredResourceProfileList() const { DARABONBA_PTR_GET_CONST(discoveredResourceProfileList_, vector<DiscoveredResourceProfiles::DiscoveredResourceProfileList>) };
      inline vector<DiscoveredResourceProfiles::DiscoveredResourceProfileList> getDiscoveredResourceProfileList() { DARABONBA_PTR_GET(discoveredResourceProfileList_, vector<DiscoveredResourceProfiles::DiscoveredResourceProfileList>) };
      inline DiscoveredResourceProfiles& setDiscoveredResourceProfileList(const vector<DiscoveredResourceProfiles::DiscoveredResourceProfileList> & discoveredResourceProfileList) { DARABONBA_PTR_SET_VALUE(discoveredResourceProfileList_, discoveredResourceProfileList) };
      inline DiscoveredResourceProfiles& setDiscoveredResourceProfileList(vector<DiscoveredResourceProfiles::DiscoveredResourceProfileList> && discoveredResourceProfileList) { DARABONBA_PTR_SET_RVALUE(discoveredResourceProfileList_, discoveredResourceProfileList) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline DiscoveredResourceProfiles& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline DiscoveredResourceProfiles& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline DiscoveredResourceProfiles& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The details of the resources.
      shared_ptr<vector<DiscoveredResourceProfiles::DiscoveredResourceProfileList>> discoveredResourceProfileList_ {};
      // The maximum number of entries returned on each page.
      shared_ptr<int32_t> maxResults_ {};
      // A pagination token. It can be used in the next request to retrieve a new page of results.
      shared_ptr<string> nextToken_ {};
      // The total number of resources.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->discoveredResourceProfiles_ == nullptr
        && this->requestId_ == nullptr; };
    // discoveredResourceProfiles Field Functions 
    bool hasDiscoveredResourceProfiles() const { return this->discoveredResourceProfiles_ != nullptr;};
    void deleteDiscoveredResourceProfiles() { this->discoveredResourceProfiles_ = nullptr;};
    inline const ListDiscoveredResourcesResponseBody::DiscoveredResourceProfiles & getDiscoveredResourceProfiles() const { DARABONBA_PTR_GET_CONST(discoveredResourceProfiles_, ListDiscoveredResourcesResponseBody::DiscoveredResourceProfiles) };
    inline ListDiscoveredResourcesResponseBody::DiscoveredResourceProfiles getDiscoveredResourceProfiles() { DARABONBA_PTR_GET(discoveredResourceProfiles_, ListDiscoveredResourcesResponseBody::DiscoveredResourceProfiles) };
    inline ListDiscoveredResourcesResponseBody& setDiscoveredResourceProfiles(const ListDiscoveredResourcesResponseBody::DiscoveredResourceProfiles & discoveredResourceProfiles) { DARABONBA_PTR_SET_VALUE(discoveredResourceProfiles_, discoveredResourceProfiles) };
    inline ListDiscoveredResourcesResponseBody& setDiscoveredResourceProfiles(ListDiscoveredResourcesResponseBody::DiscoveredResourceProfiles && discoveredResourceProfiles) { DARABONBA_PTR_SET_RVALUE(discoveredResourceProfiles_, discoveredResourceProfiles) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDiscoveredResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the resources.
    shared_ptr<ListDiscoveredResourcesResponseBody::DiscoveredResourceProfiles> discoveredResourceProfiles_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
