// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESOURCECOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESOURCECOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceGroupResourceCountsRequestResourceTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetResourceGroupResourceCountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupResourceCountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupByKey, groupByKey_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupResourceCountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupByKey, groupByKey_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
    };
    GetResourceGroupResourceCountsRequest() = default ;
    GetResourceGroupResourceCountsRequest(const GetResourceGroupResourceCountsRequest &) = default ;
    GetResourceGroupResourceCountsRequest(GetResourceGroupResourceCountsRequest &&) = default ;
    GetResourceGroupResourceCountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupResourceCountsRequest() = default ;
    GetResourceGroupResourceCountsRequest& operator=(const GetResourceGroupResourceCountsRequest &) = default ;
    GetResourceGroupResourceCountsRequest& operator=(GetResourceGroupResourceCountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupByKey_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->resourceRegionId_ == nullptr && return this->resourceTypes_ == nullptr; };
    // groupByKey Field Functions 
    bool hasGroupByKey() const { return this->groupByKey_ != nullptr;};
    void deleteGroupByKey() { this->groupByKey_ = nullptr;};
    inline string groupByKey() const { DARABONBA_PTR_GET_DEFAULT(groupByKey_, "") };
    inline GetResourceGroupResourceCountsRequest& setGroupByKey(string groupByKey) { DARABONBA_PTR_SET_VALUE(groupByKey_, groupByKey) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetResourceGroupResourceCountsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline GetResourceGroupResourceCountsRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<GetResourceGroupResourceCountsRequestResourceTypes> & resourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<GetResourceGroupResourceCountsRequestResourceTypes>) };
    inline vector<GetResourceGroupResourceCountsRequestResourceTypes> resourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<GetResourceGroupResourceCountsRequestResourceTypes>) };
    inline GetResourceGroupResourceCountsRequest& setResourceTypes(const vector<GetResourceGroupResourceCountsRequestResourceTypes> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline GetResourceGroupResourceCountsRequest& setResourceTypes(vector<GetResourceGroupResourceCountsRequestResourceTypes> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


  protected:
    // The dimension by which resources are queried.
    // 
    // > If you do not specify a dimension, no results are returned.
    // 
    // Valid values:
    // 
    // *   ResourceGroupId
    // *   ResourceType
    std::shared_ptr<string> groupByKey_ = nullptr;
    // The resource group ID.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/2716558.html) operation to obtain the ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The region ID of the resources.
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    // The resource types.
    std::shared_ptr<vector<GetResourceGroupResourceCountsRequestResourceTypes>> resourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
