// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESOURCECOUNTSRESPONSEBODYRESOURCECOUNTS_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESOURCECOUNTSRESPONSEBODYRESOURCECOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetResourceGroupResourceCountsResponseBodyResourceCounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupResourceCountsResponseBodyResourceCounts& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(GroupByKey, groupByKey_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupResourceCountsResponseBodyResourceCounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(GroupByKey, groupByKey_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    GetResourceGroupResourceCountsResponseBodyResourceCounts() = default ;
    GetResourceGroupResourceCountsResponseBodyResourceCounts(const GetResourceGroupResourceCountsResponseBodyResourceCounts &) = default ;
    GetResourceGroupResourceCountsResponseBodyResourceCounts(GetResourceGroupResourceCountsResponseBodyResourceCounts &&) = default ;
    GetResourceGroupResourceCountsResponseBodyResourceCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupResourceCountsResponseBodyResourceCounts() = default ;
    GetResourceGroupResourceCountsResponseBodyResourceCounts& operator=(const GetResourceGroupResourceCountsResponseBodyResourceCounts &) = default ;
    GetResourceGroupResourceCountsResponseBodyResourceCounts& operator=(GetResourceGroupResourceCountsResponseBodyResourceCounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->groupByKey_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetResourceGroupResourceCountsResponseBodyResourceCounts& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // groupByKey Field Functions 
    bool hasGroupByKey() const { return this->groupByKey_ != nullptr;};
    void deleteGroupByKey() { this->groupByKey_ = nullptr;};
    inline string groupByKey() const { DARABONBA_PTR_GET_DEFAULT(groupByKey_, "") };
    inline GetResourceGroupResourceCountsResponseBodyResourceCounts& setGroupByKey(string groupByKey) { DARABONBA_PTR_SET_VALUE(groupByKey_, groupByKey) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetResourceGroupResourceCountsResponseBodyResourceCounts& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The number of the resources.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The dimension by which resources are queried.
    std::shared_ptr<string> groupByKey_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
