// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSRESOURCEGROUPSRESPONSEBODYDATARESOURCEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSRESOURCEGROUPSRESPONSEBODYDATARESOURCEGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsResourceGroupsResponseBodyDataResourceGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsResourceGroupsResponseBodyDataResourceGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Available, available_);
      DARABONBA_PTR_TO_JSON(CuOptions, cuOptions_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(LeftComputeResource, leftComputeResource_);
      DARABONBA_PTR_TO_JSON(MaxComputeResource, maxComputeResource_);
      DARABONBA_PTR_TO_JSON(MinComputeResource, minComputeResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsResourceGroupsResponseBodyDataResourceGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Available, available_);
      DARABONBA_PTR_FROM_JSON(CuOptions, cuOptions_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(LeftComputeResource, leftComputeResource_);
      DARABONBA_PTR_FROM_JSON(MaxComputeResource, maxComputeResource_);
      DARABONBA_PTR_FROM_JSON(MinComputeResource, minComputeResource_);
    };
    DescribeApsResourceGroupsResponseBodyDataResourceGroups() = default ;
    DescribeApsResourceGroupsResponseBodyDataResourceGroups(const DescribeApsResourceGroupsResponseBodyDataResourceGroups &) = default ;
    DescribeApsResourceGroupsResponseBodyDataResourceGroups(DescribeApsResourceGroupsResponseBodyDataResourceGroups &&) = default ;
    DescribeApsResourceGroupsResponseBodyDataResourceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsResourceGroupsResponseBodyDataResourceGroups() = default ;
    DescribeApsResourceGroupsResponseBodyDataResourceGroups& operator=(const DescribeApsResourceGroupsResponseBodyDataResourceGroups &) = default ;
    DescribeApsResourceGroupsResponseBodyDataResourceGroups& operator=(DescribeApsResourceGroupsResponseBodyDataResourceGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->available_ == nullptr
        && return this->cuOptions_ == nullptr && return this->groupName_ == nullptr && return this->groupType_ == nullptr && return this->leftComputeResource_ == nullptr && return this->maxComputeResource_ == nullptr
        && return this->minComputeResource_ == nullptr; };
    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline bool available() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
    inline DescribeApsResourceGroupsResponseBodyDataResourceGroups& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // cuOptions Field Functions 
    bool hasCuOptions() const { return this->cuOptions_ != nullptr;};
    void deleteCuOptions() { this->cuOptions_ = nullptr;};
    inline const vector<int64_t> & cuOptions() const { DARABONBA_PTR_GET_CONST(cuOptions_, vector<int64_t>) };
    inline vector<int64_t> cuOptions() { DARABONBA_PTR_GET(cuOptions_, vector<int64_t>) };
    inline DescribeApsResourceGroupsResponseBodyDataResourceGroups& setCuOptions(const vector<int64_t> & cuOptions) { DARABONBA_PTR_SET_VALUE(cuOptions_, cuOptions) };
    inline DescribeApsResourceGroupsResponseBodyDataResourceGroups& setCuOptions(vector<int64_t> && cuOptions) { DARABONBA_PTR_SET_RVALUE(cuOptions_, cuOptions) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApsResourceGroupsResponseBodyDataResourceGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeApsResourceGroupsResponseBodyDataResourceGroups& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // leftComputeResource Field Functions 
    bool hasLeftComputeResource() const { return this->leftComputeResource_ != nullptr;};
    void deleteLeftComputeResource() { this->leftComputeResource_ = nullptr;};
    inline int32_t leftComputeResource() const { DARABONBA_PTR_GET_DEFAULT(leftComputeResource_, 0) };
    inline DescribeApsResourceGroupsResponseBodyDataResourceGroups& setLeftComputeResource(int32_t leftComputeResource) { DARABONBA_PTR_SET_VALUE(leftComputeResource_, leftComputeResource) };


    // maxComputeResource Field Functions 
    bool hasMaxComputeResource() const { return this->maxComputeResource_ != nullptr;};
    void deleteMaxComputeResource() { this->maxComputeResource_ = nullptr;};
    inline int32_t maxComputeResource() const { DARABONBA_PTR_GET_DEFAULT(maxComputeResource_, 0) };
    inline DescribeApsResourceGroupsResponseBodyDataResourceGroups& setMaxComputeResource(int32_t maxComputeResource) { DARABONBA_PTR_SET_VALUE(maxComputeResource_, maxComputeResource) };


    // minComputeResource Field Functions 
    bool hasMinComputeResource() const { return this->minComputeResource_ != nullptr;};
    void deleteMinComputeResource() { this->minComputeResource_ = nullptr;};
    inline int32_t minComputeResource() const { DARABONBA_PTR_GET_DEFAULT(minComputeResource_, 0) };
    inline DescribeApsResourceGroupsResponseBodyDataResourceGroups& setMinComputeResource(int32_t minComputeResource) { DARABONBA_PTR_SET_VALUE(minComputeResource_, minComputeResource) };


  protected:
    // Indicates whether the resource group is available. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> available_ = nullptr;
    std::shared_ptr<vector<int64_t>> cuOptions_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The type of the resource group. Valid values:
    // 
    // *   **Interactive**
    // *   **Job**
    // 
    // >  For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/428610.html).
    std::shared_ptr<string> groupType_ = nullptr;
    // The amount of remaining computing resources. Unit: ACUs.
    std::shared_ptr<int32_t> leftComputeResource_ = nullptr;
    // The maximum amount of reserved computing resources. Unit: ACUs.
    // 
    // *   If the value of GroupType is **Interactive**, the amount of reserved computing resources that are not allocated in the cluster is returned in increments of 16 ACUs.
    // *   If the value of GroupType is **Job**, the amount of reserved computing resources that are not allocated in the cluster is returned in increments of 8 ACUs.
    std::shared_ptr<int32_t> maxComputeResource_ = nullptr;
    // The minimum amount of reserved computing resources. Unit: ACUs.
    // 
    // *   If the value of GroupType is **Interactive**, 16 is returned.
    // *   If the value of GroupType is **Job**, 0 is returned.
    std::shared_ptr<int32_t> minComputeResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
