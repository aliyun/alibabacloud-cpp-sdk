// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGDEPLOYMENTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGDEPLOYMENTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSDGDeploymentStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGDeploymentStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentStatus, deploymentStatus_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGDeploymentStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentStatus, deploymentStatus_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSDGDeploymentStatusResponseBody() = default ;
    DescribeSDGDeploymentStatusResponseBody(const DescribeSDGDeploymentStatusResponseBody &) = default ;
    DescribeSDGDeploymentStatusResponseBody(DescribeSDGDeploymentStatusResponseBody &&) = default ;
    DescribeSDGDeploymentStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGDeploymentStatusResponseBody() = default ;
    DescribeSDGDeploymentStatusResponseBody& operator=(const DescribeSDGDeploymentStatusResponseBody &) = default ;
    DescribeSDGDeploymentStatusResponseBody& operator=(DescribeSDGDeploymentStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeploymentStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeploymentStatus& obj) { 
        DARABONBA_PTR_TO_JSON(BlockRwSplitSize, blockRwSplitSize_);
        DARABONBA_PTR_TO_JSON(CacheSize, cacheSize_);
        DARABONBA_PTR_TO_JSON(DiskAccessProtocol, diskAccessProtocol_);
        DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MountType, mountType_);
        DARABONBA_PTR_TO_JSON(Phase, phase_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, DeploymentStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(BlockRwSplitSize, blockRwSplitSize_);
        DARABONBA_PTR_FROM_JSON(CacheSize, cacheSize_);
        DARABONBA_PTR_FROM_JSON(DiskAccessProtocol, diskAccessProtocol_);
        DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MountType, mountType_);
        DARABONBA_PTR_FROM_JSON(Phase, phase_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      DeploymentStatus() = default ;
      DeploymentStatus(const DeploymentStatus &) = default ;
      DeploymentStatus(DeploymentStatus &&) = default ;
      DeploymentStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeploymentStatus() = default ;
      DeploymentStatus& operator=(const DeploymentStatus &) = default ;
      DeploymentStatus& operator=(DeploymentStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->blockRwSplitSize_ == nullptr
        && this->cacheSize_ == nullptr && this->diskAccessProtocol_ == nullptr && this->diskType_ == nullptr && this->instanceId_ == nullptr && this->mountType_ == nullptr
        && this->phase_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // blockRwSplitSize Field Functions 
      bool hasBlockRwSplitSize() const { return this->blockRwSplitSize_ != nullptr;};
      void deleteBlockRwSplitSize() { this->blockRwSplitSize_ = nullptr;};
      inline int32_t getBlockRwSplitSize() const { DARABONBA_PTR_GET_DEFAULT(blockRwSplitSize_, 0) };
      inline DeploymentStatus& setBlockRwSplitSize(int32_t blockRwSplitSize) { DARABONBA_PTR_SET_VALUE(blockRwSplitSize_, blockRwSplitSize) };


      // cacheSize Field Functions 
      bool hasCacheSize() const { return this->cacheSize_ != nullptr;};
      void deleteCacheSize() { this->cacheSize_ = nullptr;};
      inline int32_t getCacheSize() const { DARABONBA_PTR_GET_DEFAULT(cacheSize_, 0) };
      inline DeploymentStatus& setCacheSize(int32_t cacheSize) { DARABONBA_PTR_SET_VALUE(cacheSize_, cacheSize) };


      // diskAccessProtocol Field Functions 
      bool hasDiskAccessProtocol() const { return this->diskAccessProtocol_ != nullptr;};
      void deleteDiskAccessProtocol() { this->diskAccessProtocol_ = nullptr;};
      inline string getDiskAccessProtocol() const { DARABONBA_PTR_GET_DEFAULT(diskAccessProtocol_, "") };
      inline DeploymentStatus& setDiskAccessProtocol(string diskAccessProtocol) { DARABONBA_PTR_SET_VALUE(diskAccessProtocol_, diskAccessProtocol) };


      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline DeploymentStatus& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DeploymentStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // mountType Field Functions 
      bool hasMountType() const { return this->mountType_ != nullptr;};
      void deleteMountType() { this->mountType_ = nullptr;};
      inline string getMountType() const { DARABONBA_PTR_GET_DEFAULT(mountType_, "") };
      inline DeploymentStatus& setMountType(string mountType) { DARABONBA_PTR_SET_VALUE(mountType_, mountType) };


      // phase Field Functions 
      bool hasPhase() const { return this->phase_ != nullptr;};
      void deletePhase() { this->phase_ = nullptr;};
      inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
      inline DeploymentStatus& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DeploymentStatus& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DeploymentStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline DeploymentStatus& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<int32_t> blockRwSplitSize_ {};
      shared_ptr<int32_t> cacheSize_ {};
      shared_ptr<string> diskAccessProtocol_ {};
      shared_ptr<string> diskType_ {};
      // The ID of the AIC instance.
      shared_ptr<string> instanceId_ {};
      // The deployment type.
      // 
      // Valid values:
      // 
      // *   overlay: read/write splitting.
      // *   common: common deployment.
      shared_ptr<string> mountType_ {};
      // The deployment phase of the SDG.
      shared_ptr<string> phase_ {};
      // The ID of the edge node.
      shared_ptr<string> regionId_ {};
      // The deployment status of the SDG.
      // 
      // Valid values:
      // 
      // *   sdg_deploying
      // *   success
      // *   failed
      shared_ptr<string> status_ {};
      // The time when the status was last updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->deploymentStatus_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // deploymentStatus Field Functions 
    bool hasDeploymentStatus() const { return this->deploymentStatus_ != nullptr;};
    void deleteDeploymentStatus() { this->deploymentStatus_ = nullptr;};
    inline const vector<DescribeSDGDeploymentStatusResponseBody::DeploymentStatus> & getDeploymentStatus() const { DARABONBA_PTR_GET_CONST(deploymentStatus_, vector<DescribeSDGDeploymentStatusResponseBody::DeploymentStatus>) };
    inline vector<DescribeSDGDeploymentStatusResponseBody::DeploymentStatus> getDeploymentStatus() { DARABONBA_PTR_GET(deploymentStatus_, vector<DescribeSDGDeploymentStatusResponseBody::DeploymentStatus>) };
    inline DescribeSDGDeploymentStatusResponseBody& setDeploymentStatus(const vector<DescribeSDGDeploymentStatusResponseBody::DeploymentStatus> & deploymentStatus) { DARABONBA_PTR_SET_VALUE(deploymentStatus_, deploymentStatus) };
    inline DescribeSDGDeploymentStatusResponseBody& setDeploymentStatus(vector<DescribeSDGDeploymentStatusResponseBody::DeploymentStatus> && deploymentStatus) { DARABONBA_PTR_SET_RVALUE(deploymentStatus_, deploymentStatus) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeSDGDeploymentStatusResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeSDGDeploymentStatusResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSDGDeploymentStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSDGDeploymentStatusResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of SDG deployment information.
    shared_ptr<vector<DescribeSDGDeploymentStatusResponseBody::DeploymentStatus>> deploymentStatus_ {};
    // The page number. Pages start from page 1. Default value: 1
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries to return on each page. Default value: **10**.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of queried deployment records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
