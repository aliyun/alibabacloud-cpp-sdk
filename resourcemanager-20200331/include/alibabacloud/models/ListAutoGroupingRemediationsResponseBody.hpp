// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOGROUPINGREMEDIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOGROUPINGREMEDIATIONSRESPONSEBODY_HPP_
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
  class ListAutoGroupingRemediationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoGroupingRemediationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Remediations, remediations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoGroupingRemediationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Remediations, remediations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAutoGroupingRemediationsResponseBody() = default ;
    ListAutoGroupingRemediationsResponseBody(const ListAutoGroupingRemediationsResponseBody &) = default ;
    ListAutoGroupingRemediationsResponseBody(ListAutoGroupingRemediationsResponseBody &&) = default ;
    ListAutoGroupingRemediationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoGroupingRemediationsResponseBody() = default ;
    ListAutoGroupingRemediationsResponseBody& operator=(const ListAutoGroupingRemediationsResponseBody &) = default ;
    ListAutoGroupingRemediationsResponseBody& operator=(ListAutoGroupingRemediationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Remediations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Remediations& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RemediationId, remediationId_);
        DARABONBA_PTR_TO_JSON(RemediationTime, remediationTime_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Service, service_);
        DARABONBA_PTR_TO_JSON(TargetResourceGroupInfo, targetResourceGroupInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Remediations& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RemediationId, remediationId_);
        DARABONBA_PTR_FROM_JSON(RemediationTime, remediationTime_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Service, service_);
        DARABONBA_PTR_FROM_JSON(TargetResourceGroupInfo, targetResourceGroupInfo_);
      };
      Remediations() = default ;
      Remediations(const Remediations &) = default ;
      Remediations(Remediations &&) = default ;
      Remediations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Remediations() = default ;
      Remediations& operator=(const Remediations &) = default ;
      Remediations& operator=(Remediations &&) = default ;
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

      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->remediationId_ == nullptr && this->remediationTime_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->service_ == nullptr
        && this->targetResourceGroupInfo_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Remediations& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // remediationId Field Functions 
      bool hasRemediationId() const { return this->remediationId_ != nullptr;};
      void deleteRemediationId() { this->remediationId_ = nullptr;};
      inline string getRemediationId() const { DARABONBA_PTR_GET_DEFAULT(remediationId_, "") };
      inline Remediations& setRemediationId(string remediationId) { DARABONBA_PTR_SET_VALUE(remediationId_, remediationId) };


      // remediationTime Field Functions 
      bool hasRemediationTime() const { return this->remediationTime_ != nullptr;};
      void deleteRemediationTime() { this->remediationTime_ = nullptr;};
      inline string getRemediationTime() const { DARABONBA_PTR_GET_DEFAULT(remediationTime_, "") };
      inline Remediations& setRemediationTime(string remediationTime) { DARABONBA_PTR_SET_VALUE(remediationTime_, remediationTime) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Remediations& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Remediations& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline Remediations& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


      // targetResourceGroupInfo Field Functions 
      bool hasTargetResourceGroupInfo() const { return this->targetResourceGroupInfo_ != nullptr;};
      void deleteTargetResourceGroupInfo() { this->targetResourceGroupInfo_ = nullptr;};
      inline const Remediations::TargetResourceGroupInfo & getTargetResourceGroupInfo() const { DARABONBA_PTR_GET_CONST(targetResourceGroupInfo_, Remediations::TargetResourceGroupInfo) };
      inline Remediations::TargetResourceGroupInfo getTargetResourceGroupInfo() { DARABONBA_PTR_GET(targetResourceGroupInfo_, Remediations::TargetResourceGroupInfo) };
      inline Remediations& setTargetResourceGroupInfo(const Remediations::TargetResourceGroupInfo & targetResourceGroupInfo) { DARABONBA_PTR_SET_VALUE(targetResourceGroupInfo_, targetResourceGroupInfo) };
      inline Remediations& setTargetResourceGroupInfo(Remediations::TargetResourceGroupInfo && targetResourceGroupInfo) { DARABONBA_PTR_SET_RVALUE(targetResourceGroupInfo_, targetResourceGroupInfo) };


    protected:
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The remediation record ID.
      shared_ptr<string> remediationId_ {};
      // The remediation time.
      shared_ptr<string> remediationTime_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
      // The resource type.
      // 
      // You can obtain the resource type from the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> resourceType_ {};
      // The ID of the Alibaba Cloud service.
      // 
      // You can obtain the ID from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> service_ {};
      // The information about the new resource group.
      shared_ptr<Remediations::TargetResourceGroupInfo> targetResourceGroupInfo_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->remediations_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAutoGroupingRemediationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAutoGroupingRemediationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // remediations Field Functions 
    bool hasRemediations() const { return this->remediations_ != nullptr;};
    void deleteRemediations() { this->remediations_ = nullptr;};
    inline const vector<ListAutoGroupingRemediationsResponseBody::Remediations> & getRemediations() const { DARABONBA_PTR_GET_CONST(remediations_, vector<ListAutoGroupingRemediationsResponseBody::Remediations>) };
    inline vector<ListAutoGroupingRemediationsResponseBody::Remediations> getRemediations() { DARABONBA_PTR_GET(remediations_, vector<ListAutoGroupingRemediationsResponseBody::Remediations>) };
    inline ListAutoGroupingRemediationsResponseBody& setRemediations(const vector<ListAutoGroupingRemediationsResponseBody::Remediations> & remediations) { DARABONBA_PTR_SET_VALUE(remediations_, remediations) };
    inline ListAutoGroupingRemediationsResponseBody& setRemediations(vector<ListAutoGroupingRemediationsResponseBody::Remediations> && remediations) { DARABONBA_PTR_SET_RVALUE(remediations_, remediations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAutoGroupingRemediationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of entries per page.
    // 
    // Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The remediation records.
    shared_ptr<vector<ListAutoGroupingRemediationsResponseBody::Remediations>> remediations_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
