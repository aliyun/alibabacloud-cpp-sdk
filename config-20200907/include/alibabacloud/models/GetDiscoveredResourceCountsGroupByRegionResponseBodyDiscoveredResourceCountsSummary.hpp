// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISCOVEREDRESOURCECOUNTSGROUPBYREGIONRESPONSEBODYDISCOVEREDRESOURCECOUNTSSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_GETDISCOVEREDRESOURCECOUNTSGROUPBYREGIONRESPONSEBODYDISCOVEREDRESOURCECOUNTSSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
    };
    GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary() = default ;
    GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary(const GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary &) = default ;
    GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary(GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary &&) = default ;
    GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary() = default ;
    GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary& operator=(const GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary &) = default ;
    GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary& operator=(GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->region_ == nullptr && return this->resourceCount_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceCount Field Functions 
    bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
    void deleteResourceCount() { this->resourceCount_ = nullptr;};
    inline int64_t resourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0L) };
    inline GetDiscoveredResourceCountsGroupByRegionResponseBodyDiscoveredResourceCountsSummary& setResourceCount(int64_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


  protected:
    // The dimension by which statistics are collected.
    // 
    // >  In most cases, the `Region` parameter instead of the GroupName parameter is returned.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the region by which statistics are collected.
    std::shared_ptr<string> region_ = nullptr;
    // The total number of resources.
    std::shared_ptr<int64_t> resourceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
