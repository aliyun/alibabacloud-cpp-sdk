// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOUNTSGROUPBYRESOURCETYPERESPONSEBODYDISCOVEREDRESOURCECOUNTSSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOUNTSGROUPBYRESOURCETYPERESPONSEBODYDISCOVEREDRESOURCECOUNTSSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary() = default ;
    GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary(const GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary &) = default ;
    GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary(GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary &&) = default ;
    GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary() = default ;
    GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary& operator=(const GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary &) = default ;
    GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary& operator=(GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->resourceCount_ == nullptr && return this->resourceType_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // resourceCount Field Functions 
    bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
    void deleteResourceCount() { this->resourceCount_ = nullptr;};
    inline int64_t resourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0L) };
    inline GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary& setResourceCount(int64_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetAggregateResourceCountsGroupByResourceTypeResponseBodyDiscoveredResourceCountsSummary& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // This parameter is expired. The resource type by which statistics are collected.
    std::shared_ptr<string> groupName_ = nullptr;
    // The total number of resources in the region.
    std::shared_ptr<int64_t> resourceCount_ = nullptr;
    // The resource type by which statistics are collected.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
