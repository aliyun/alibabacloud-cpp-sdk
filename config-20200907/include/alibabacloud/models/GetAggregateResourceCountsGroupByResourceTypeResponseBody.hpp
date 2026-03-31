// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOUNTSGROUPBYRESOURCETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOUNTSGROUPBYRESOURCETYPERESPONSEBODY_HPP_
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
  class GetAggregateResourceCountsGroupByResourceTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceCountsGroupByResourceTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiscoveredResourceCountsSummary, discoveredResourceCountsSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceCountsGroupByResourceTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscoveredResourceCountsSummary, discoveredResourceCountsSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateResourceCountsGroupByResourceTypeResponseBody() = default ;
    GetAggregateResourceCountsGroupByResourceTypeResponseBody(const GetAggregateResourceCountsGroupByResourceTypeResponseBody &) = default ;
    GetAggregateResourceCountsGroupByResourceTypeResponseBody(GetAggregateResourceCountsGroupByResourceTypeResponseBody &&) = default ;
    GetAggregateResourceCountsGroupByResourceTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceCountsGroupByResourceTypeResponseBody() = default ;
    GetAggregateResourceCountsGroupByResourceTypeResponseBody& operator=(const GetAggregateResourceCountsGroupByResourceTypeResponseBody &) = default ;
    GetAggregateResourceCountsGroupByResourceTypeResponseBody& operator=(GetAggregateResourceCountsGroupByResourceTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DiscoveredResourceCountsSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiscoveredResourceCountsSummary& obj) { 
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, DiscoveredResourceCountsSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      DiscoveredResourceCountsSummary() = default ;
      DiscoveredResourceCountsSummary(const DiscoveredResourceCountsSummary &) = default ;
      DiscoveredResourceCountsSummary(DiscoveredResourceCountsSummary &&) = default ;
      DiscoveredResourceCountsSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiscoveredResourceCountsSummary() = default ;
      DiscoveredResourceCountsSummary& operator=(const DiscoveredResourceCountsSummary &) = default ;
      DiscoveredResourceCountsSummary& operator=(DiscoveredResourceCountsSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupName_ == nullptr
        && this->resourceCount_ == nullptr && this->resourceType_ == nullptr; };
      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline DiscoveredResourceCountsSummary& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // resourceCount Field Functions 
      bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
      void deleteResourceCount() { this->resourceCount_ = nullptr;};
      inline int64_t getResourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0L) };
      inline DiscoveredResourceCountsSummary& setResourceCount(int64_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline DiscoveredResourceCountsSummary& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // This parameter is expired. The resource type by which statistics are collected.
      shared_ptr<string> groupName_ {};
      // The total number of resources in the region.
      shared_ptr<int64_t> resourceCount_ {};
      // The resource type by which statistics are collected.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->discoveredResourceCountsSummary_ == nullptr
        && this->requestId_ == nullptr; };
    // discoveredResourceCountsSummary Field Functions 
    bool hasDiscoveredResourceCountsSummary() const { return this->discoveredResourceCountsSummary_ != nullptr;};
    void deleteDiscoveredResourceCountsSummary() { this->discoveredResourceCountsSummary_ = nullptr;};
    inline const vector<GetAggregateResourceCountsGroupByResourceTypeResponseBody::DiscoveredResourceCountsSummary> & getDiscoveredResourceCountsSummary() const { DARABONBA_PTR_GET_CONST(discoveredResourceCountsSummary_, vector<GetAggregateResourceCountsGroupByResourceTypeResponseBody::DiscoveredResourceCountsSummary>) };
    inline vector<GetAggregateResourceCountsGroupByResourceTypeResponseBody::DiscoveredResourceCountsSummary> getDiscoveredResourceCountsSummary() { DARABONBA_PTR_GET(discoveredResourceCountsSummary_, vector<GetAggregateResourceCountsGroupByResourceTypeResponseBody::DiscoveredResourceCountsSummary>) };
    inline GetAggregateResourceCountsGroupByResourceTypeResponseBody& setDiscoveredResourceCountsSummary(const vector<GetAggregateResourceCountsGroupByResourceTypeResponseBody::DiscoveredResourceCountsSummary> & discoveredResourceCountsSummary) { DARABONBA_PTR_SET_VALUE(discoveredResourceCountsSummary_, discoveredResourceCountsSummary) };
    inline GetAggregateResourceCountsGroupByResourceTypeResponseBody& setDiscoveredResourceCountsSummary(vector<GetAggregateResourceCountsGroupByResourceTypeResponseBody::DiscoveredResourceCountsSummary> && discoveredResourceCountsSummary) { DARABONBA_PTR_SET_RVALUE(discoveredResourceCountsSummary_, discoveredResourceCountsSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateResourceCountsGroupByResourceTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The resource type by which the statistics are collected.
    shared_ptr<vector<GetAggregateResourceCountsGroupByResourceTypeResponseBody::DiscoveredResourceCountsSummary>> discoveredResourceCountsSummary_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
