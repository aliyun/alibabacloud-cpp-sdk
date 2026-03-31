// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOUNTSGROUPBYREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOUNTSGROUPBYREGIONRESPONSEBODY_HPP_
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
  class GetAggregateResourceCountsGroupByRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceCountsGroupByRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiscoveredResourceCountsSummary, discoveredResourceCountsSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceCountsGroupByRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscoveredResourceCountsSummary, discoveredResourceCountsSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateResourceCountsGroupByRegionResponseBody() = default ;
    GetAggregateResourceCountsGroupByRegionResponseBody(const GetAggregateResourceCountsGroupByRegionResponseBody &) = default ;
    GetAggregateResourceCountsGroupByRegionResponseBody(GetAggregateResourceCountsGroupByRegionResponseBody &&) = default ;
    GetAggregateResourceCountsGroupByRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceCountsGroupByRegionResponseBody() = default ;
    GetAggregateResourceCountsGroupByRegionResponseBody& operator=(const GetAggregateResourceCountsGroupByRegionResponseBody &) = default ;
    GetAggregateResourceCountsGroupByRegionResponseBody& operator=(GetAggregateResourceCountsGroupByRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DiscoveredResourceCountsSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiscoveredResourceCountsSummary& obj) { 
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
      };
      friend void from_json(const Darabonba::Json& j, DiscoveredResourceCountsSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
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
        && this->region_ == nullptr && this->resourceCount_ == nullptr; };
      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline DiscoveredResourceCountsSummary& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline DiscoveredResourceCountsSummary& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // resourceCount Field Functions 
      bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
      void deleteResourceCount() { this->resourceCount_ = nullptr;};
      inline int64_t getResourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0L) };
      inline DiscoveredResourceCountsSummary& setResourceCount(int64_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


    protected:
      // The dimension by which statistics are collected.
      // 
      // >  In most cases, the `Region` parameter is returned instead of the GroupName parameter.
      shared_ptr<string> groupName_ {};
      // The ID of the region by which statistics are collected.
      shared_ptr<string> region_ {};
      // The total number of resources in the region.
      shared_ptr<int64_t> resourceCount_ {};
    };

    virtual bool empty() const override { return this->discoveredResourceCountsSummary_ == nullptr
        && this->requestId_ == nullptr; };
    // discoveredResourceCountsSummary Field Functions 
    bool hasDiscoveredResourceCountsSummary() const { return this->discoveredResourceCountsSummary_ != nullptr;};
    void deleteDiscoveredResourceCountsSummary() { this->discoveredResourceCountsSummary_ = nullptr;};
    inline const vector<GetAggregateResourceCountsGroupByRegionResponseBody::DiscoveredResourceCountsSummary> & getDiscoveredResourceCountsSummary() const { DARABONBA_PTR_GET_CONST(discoveredResourceCountsSummary_, vector<GetAggregateResourceCountsGroupByRegionResponseBody::DiscoveredResourceCountsSummary>) };
    inline vector<GetAggregateResourceCountsGroupByRegionResponseBody::DiscoveredResourceCountsSummary> getDiscoveredResourceCountsSummary() { DARABONBA_PTR_GET(discoveredResourceCountsSummary_, vector<GetAggregateResourceCountsGroupByRegionResponseBody::DiscoveredResourceCountsSummary>) };
    inline GetAggregateResourceCountsGroupByRegionResponseBody& setDiscoveredResourceCountsSummary(const vector<GetAggregateResourceCountsGroupByRegionResponseBody::DiscoveredResourceCountsSummary> & discoveredResourceCountsSummary) { DARABONBA_PTR_SET_VALUE(discoveredResourceCountsSummary_, discoveredResourceCountsSummary) };
    inline GetAggregateResourceCountsGroupByRegionResponseBody& setDiscoveredResourceCountsSummary(vector<GetAggregateResourceCountsGroupByRegionResponseBody::DiscoveredResourceCountsSummary> && discoveredResourceCountsSummary) { DARABONBA_PTR_SET_RVALUE(discoveredResourceCountsSummary_, discoveredResourceCountsSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateResourceCountsGroupByRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the region by which statistics are collected.
    shared_ptr<vector<GetAggregateResourceCountsGroupByRegionResponseBody::DiscoveredResourceCountsSummary>> discoveredResourceCountsSummary_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
