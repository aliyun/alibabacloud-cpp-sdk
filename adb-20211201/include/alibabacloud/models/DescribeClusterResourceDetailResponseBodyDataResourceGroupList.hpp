// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCEDETAILRESPONSEBODYDATARESOURCEGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCEDETAILRESPONSEBODYDATARESOURCEGROUPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeClusterResourceDetailResponseBodyDataResourceGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResourceDetailResponseBodyDataResourceGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterSizeResource, clusterSizeResource_);
      DARABONBA_PTR_TO_JSON(EnableSpot, enableSpot_);
      DARABONBA_PTR_TO_JSON(MaxClusterCount, maxClusterCount_);
      DARABONBA_PTR_TO_JSON(MaxComputeResource, maxComputeResource_);
      DARABONBA_PTR_TO_JSON(MinClusterCount, minClusterCount_);
      DARABONBA_PTR_TO_JSON(MinComputeResource, minComputeResource_);
      DARABONBA_PTR_TO_JSON(PoolId, poolId_);
      DARABONBA_PTR_TO_JSON(PoolName, poolName_);
      DARABONBA_PTR_TO_JSON(PoolType, poolType_);
      DARABONBA_PTR_TO_JSON(PoolUsers, poolUsers_);
      DARABONBA_PTR_TO_JSON(RunningClusterCount, runningClusterCount_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResourceDetailResponseBodyDataResourceGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterSizeResource, clusterSizeResource_);
      DARABONBA_PTR_FROM_JSON(EnableSpot, enableSpot_);
      DARABONBA_PTR_FROM_JSON(MaxClusterCount, maxClusterCount_);
      DARABONBA_PTR_FROM_JSON(MaxComputeResource, maxComputeResource_);
      DARABONBA_PTR_FROM_JSON(MinClusterCount, minClusterCount_);
      DARABONBA_PTR_FROM_JSON(MinComputeResource, minComputeResource_);
      DARABONBA_PTR_FROM_JSON(PoolId, poolId_);
      DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
      DARABONBA_PTR_FROM_JSON(PoolType, poolType_);
      DARABONBA_PTR_FROM_JSON(PoolUsers, poolUsers_);
      DARABONBA_PTR_FROM_JSON(RunningClusterCount, runningClusterCount_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeClusterResourceDetailResponseBodyDataResourceGroupList() = default ;
    DescribeClusterResourceDetailResponseBodyDataResourceGroupList(const DescribeClusterResourceDetailResponseBodyDataResourceGroupList &) = default ;
    DescribeClusterResourceDetailResponseBodyDataResourceGroupList(DescribeClusterResourceDetailResponseBodyDataResourceGroupList &&) = default ;
    DescribeClusterResourceDetailResponseBodyDataResourceGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResourceDetailResponseBodyDataResourceGroupList() = default ;
    DescribeClusterResourceDetailResponseBodyDataResourceGroupList& operator=(const DescribeClusterResourceDetailResponseBodyDataResourceGroupList &) = default ;
    DescribeClusterResourceDetailResponseBodyDataResourceGroupList& operator=(DescribeClusterResourceDetailResponseBodyDataResourceGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterMode_ == nullptr
        && return this->clusterSizeResource_ == nullptr && return this->enableSpot_ == nullptr && return this->maxClusterCount_ == nullptr && return this->maxComputeResource_ == nullptr && return this->minClusterCount_ == nullptr
        && return this->minComputeResource_ == nullptr && return this->poolId_ == nullptr && return this->poolName_ == nullptr && return this->poolType_ == nullptr && return this->poolUsers_ == nullptr
        && return this->runningClusterCount_ == nullptr && return this->status_ == nullptr; };
    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string clusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline DescribeClusterResourceDetailResponseBodyDataResourceGroupList& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterSizeResource Field Functions 
    bool hasClusterSizeResource() const { return this->clusterSizeResource_ != nullptr;};
    void deleteClusterSizeResource() { this->clusterSizeResource_ = nullptr;};
    inline string clusterSizeResource() const { DARABONBA_PTR_GET_DEFAULT(clusterSizeResource_, "") };
    inline DescribeClusterResourceDetailResponseBodyDataResourceGroupList& setClusterSizeResource(string clusterSizeResource) { DARABONBA_PTR_SET_VALUE(clusterSizeResource_, clusterSizeResource) };


    // enableSpot Field Functions 
    bool hasEnableSpot() const { return this->enableSpot_ != nullptr;};
    void deleteEnableSpot() { this->enableSpot_ = nullptr;};
    inline bool enableSpot() const { DARABONBA_PTR_GET_DEFAULT(enableSpot_, false) };
    inline DescribeClusterResourceDetailResponseBodyDataResourceGroupList& setEnableSpot(bool enableSpot) { DARABONBA_PTR_SET_VALUE(enableSpot_, enableSpot) };


    // maxClusterCount Field Functions 
    bool hasMaxClusterCount() const { return this->maxClusterCount_ != nullptr;};
    void deleteMaxClusterCount() { this->maxClusterCount_ = nullptr;};
    inline int32_t maxClusterCount() const { DARABONBA_PTR_GET_DEFAULT(maxClusterCount_, 0) };
    inline DescribeClusterResourceDetailResponseBodyDataResourceGroupList& setMaxClusterCount(int32_t maxClusterCount) { DARABONBA_PTR_SET_VALUE(maxClusterCount_, maxClusterCount) };


    // maxComputeResource Field Functions 
    bool hasMaxComputeResource() const { return this->maxComputeResource_ != nullptr;};
    void deleteMaxComputeResource() { this->maxComputeResource_ = nullptr;};
    inline string maxComputeResource() const { DARABONBA_PTR_GET_DEFAULT(maxComputeResource_, "") };
    inline DescribeClusterResourceDetailResponseBodyDataResourceGroupList& setMaxComputeResource(string maxComputeResource) { DARABONBA_PTR_SET_VALUE(maxComputeResource_, maxComputeResource) };


    // minClusterCount Field Functions 
    bool hasMinClusterCount() const { return this->minClusterCount_ != nullptr;};
    void deleteMinClusterCount() { this->minClusterCount_ = nullptr;};
    inline int32_t minClusterCount() const { DARABONBA_PTR_GET_DEFAULT(minClusterCount_, 0) };
    inline DescribeClusterResourceDetailResponseBodyDataResourceGroupList& setMinClusterCount(int32_t minClusterCount) { DARABONBA_PTR_SET_VALUE(minClusterCount_, minClusterCount) };


    // minComputeResource Field Functions 
    bool hasMinComputeResource() const { return this->minComputeResource_ != nullptr;};
    void deleteMinComputeResource() { this->minComputeResource_ = nullptr;};
    inline string minComputeResource() const { DARABONBA_PTR_GET_DEFAULT(minComputeResource_, "") };
    inline DescribeClusterResourceDetailResponseBodyDataResourceGroupList& setMinComputeResource(string minComputeResource) { DARABONBA_PTR_SET_VALUE(minComputeResource_, minComputeResource) };


    // poolId Field Functions 
    bool hasPoolId() const { return this->poolId_ != nullptr;};
    void deletePoolId() { this->poolId_ = nullptr;};
    inline int64_t poolId() const { DARABONBA_PTR_GET_DEFAULT(poolId_, 0L) };
    inline DescribeClusterResourceDetailResponseBodyDataResourceGroupList& setPoolId(int64_t poolId) { DARABONBA_PTR_SET_VALUE(poolId_, poolId) };


    // poolName Field Functions 
    bool hasPoolName() const { return this->poolName_ != nullptr;};
    void deletePoolName() { this->poolName_ = nullptr;};
    inline string poolName() const { DARABONBA_PTR_GET_DEFAULT(poolName_, "") };
    inline DescribeClusterResourceDetailResponseBodyDataResourceGroupList& setPoolName(string poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };


    // poolType Field Functions 
    bool hasPoolType() const { return this->poolType_ != nullptr;};
    void deletePoolType() { this->poolType_ = nullptr;};
    inline string poolType() const { DARABONBA_PTR_GET_DEFAULT(poolType_, "") };
    inline DescribeClusterResourceDetailResponseBodyDataResourceGroupList& setPoolType(string poolType) { DARABONBA_PTR_SET_VALUE(poolType_, poolType) };


    // poolUsers Field Functions 
    bool hasPoolUsers() const { return this->poolUsers_ != nullptr;};
    void deletePoolUsers() { this->poolUsers_ = nullptr;};
    inline string poolUsers() const { DARABONBA_PTR_GET_DEFAULT(poolUsers_, "") };
    inline DescribeClusterResourceDetailResponseBodyDataResourceGroupList& setPoolUsers(string poolUsers) { DARABONBA_PTR_SET_VALUE(poolUsers_, poolUsers) };


    // runningClusterCount Field Functions 
    bool hasRunningClusterCount() const { return this->runningClusterCount_ != nullptr;};
    void deleteRunningClusterCount() { this->runningClusterCount_ = nullptr;};
    inline int32_t runningClusterCount() const { DARABONBA_PTR_GET_DEFAULT(runningClusterCount_, 0) };
    inline DescribeClusterResourceDetailResponseBodyDataResourceGroupList& setRunningClusterCount(int32_t runningClusterCount) { DARABONBA_PTR_SET_VALUE(runningClusterCount_, runningClusterCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeClusterResourceDetailResponseBodyDataResourceGroupList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // A reserved parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterMode_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> clusterSizeResource_ = nullptr;
    // Indicates whether the preemptible instance feature is enabled for the resource group. After the preemptible instance feature is enabled, you are charged for resources at a lower unit price but the resources are probably released. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // The True value is returned only for job resource groups.
    std::shared_ptr<bool> enableSpot_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<int32_t> maxClusterCount_ = nullptr;
    // The maximum amount of reserved computing resources.
    std::shared_ptr<string> maxComputeResource_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<int32_t> minClusterCount_ = nullptr;
    // The minimum amount of reserved computing resources.
    std::shared_ptr<string> minComputeResource_ = nullptr;
    // The resource group ID.
    std::shared_ptr<int64_t> poolId_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> poolName_ = nullptr;
    // The type of the resource group.
    std::shared_ptr<string> poolType_ = nullptr;
    // The user of the resource group.
    std::shared_ptr<string> poolUsers_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<int32_t> runningClusterCount_ = nullptr;
    // The status of the resource group. Valid values:
    // 
    // *   **running**
    // *   **deleting**
    // *   **scaling**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
