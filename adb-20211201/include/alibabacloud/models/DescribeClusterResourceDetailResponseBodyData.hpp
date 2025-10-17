// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterResourceDetailResponseBodyDataResourceGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeClusterResourceDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResourceDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FreeComputeResource, freeComputeResource_);
      DARABONBA_PTR_TO_JSON(ResourceGroupList, resourceGroupList_);
      DARABONBA_PTR_TO_JSON(StorageResource, storageResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResourceDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FreeComputeResource, freeComputeResource_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupList, resourceGroupList_);
      DARABONBA_PTR_FROM_JSON(StorageResource, storageResource_);
    };
    DescribeClusterResourceDetailResponseBodyData() = default ;
    DescribeClusterResourceDetailResponseBodyData(const DescribeClusterResourceDetailResponseBodyData &) = default ;
    DescribeClusterResourceDetailResponseBodyData(DescribeClusterResourceDetailResponseBodyData &&) = default ;
    DescribeClusterResourceDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResourceDetailResponseBodyData() = default ;
    DescribeClusterResourceDetailResponseBodyData& operator=(const DescribeClusterResourceDetailResponseBodyData &) = default ;
    DescribeClusterResourceDetailResponseBodyData& operator=(DescribeClusterResourceDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeResource_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->freeComputeResource_ == nullptr && return this->resourceGroupList_ == nullptr && return this->storageResource_ == nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline string computeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, "") };
    inline DescribeClusterResourceDetailResponseBodyData& setComputeResource(string computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeClusterResourceDetailResponseBodyData& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // freeComputeResource Field Functions 
    bool hasFreeComputeResource() const { return this->freeComputeResource_ != nullptr;};
    void deleteFreeComputeResource() { this->freeComputeResource_ = nullptr;};
    inline string freeComputeResource() const { DARABONBA_PTR_GET_DEFAULT(freeComputeResource_, "") };
    inline DescribeClusterResourceDetailResponseBodyData& setFreeComputeResource(string freeComputeResource) { DARABONBA_PTR_SET_VALUE(freeComputeResource_, freeComputeResource) };


    // resourceGroupList Field Functions 
    bool hasResourceGroupList() const { return this->resourceGroupList_ != nullptr;};
    void deleteResourceGroupList() { this->resourceGroupList_ = nullptr;};
    inline const vector<Models::DescribeClusterResourceDetailResponseBodyDataResourceGroupList> & resourceGroupList() const { DARABONBA_PTR_GET_CONST(resourceGroupList_, vector<Models::DescribeClusterResourceDetailResponseBodyDataResourceGroupList>) };
    inline vector<Models::DescribeClusterResourceDetailResponseBodyDataResourceGroupList> resourceGroupList() { DARABONBA_PTR_GET(resourceGroupList_, vector<Models::DescribeClusterResourceDetailResponseBodyDataResourceGroupList>) };
    inline DescribeClusterResourceDetailResponseBodyData& setResourceGroupList(const vector<Models::DescribeClusterResourceDetailResponseBodyDataResourceGroupList> & resourceGroupList) { DARABONBA_PTR_SET_VALUE(resourceGroupList_, resourceGroupList) };
    inline DescribeClusterResourceDetailResponseBodyData& setResourceGroupList(vector<Models::DescribeClusterResourceDetailResponseBodyDataResourceGroupList> && resourceGroupList) { DARABONBA_PTR_SET_RVALUE(resourceGroupList_, resourceGroupList) };


    // storageResource Field Functions 
    bool hasStorageResource() const { return this->storageResource_ != nullptr;};
    void deleteStorageResource() { this->storageResource_ = nullptr;};
    inline string storageResource() const { DARABONBA_PTR_GET_DEFAULT(storageResource_, "") };
    inline DescribeClusterResourceDetailResponseBodyData& setStorageResource(string storageResource) { DARABONBA_PTR_SET_VALUE(storageResource_, storageResource) };


  protected:
    // The amount of reserved computing resources. Unit: AnalyticDB compute units (ACUs). Valid values: 0 to 4096. The value must be in increments of 16 ACUs. Each ACU is equivalent to 1 core and 4 GB memory.
    std::shared_ptr<string> computeResource_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The amount of idle reserved computing resources. Unit: ACUs. Valid values: 0 to 4096. The value must be in increments of 16 ACUs. Each ACU is equivalent to 1 core and 4 GB memory.
    std::shared_ptr<string> freeComputeResource_ = nullptr;
    // The resource groups.
    std::shared_ptr<vector<Models::DescribeClusterResourceDetailResponseBodyDataResourceGroupList>> resourceGroupList_ = nullptr;
    // The amount of reserved storage resources. Unit: ACUs. Valid values: 0 to 2064. The value must be in increments of 24 ACUs. Each ACU is equivalent to 1 core and 4 GB memory.
    std::shared_ptr<string> storageResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
