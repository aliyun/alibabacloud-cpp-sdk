// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGDEPLOYMENTSTATUSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGDEPLOYMENTSTATUSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSDGDeploymentStatusShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGDeploymentStatusShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentType, deploymentType_);
      DARABONBA_PTR_TO_JSON(DiskIds, diskIdsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIdsShrink_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGDeploymentStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentType, deploymentType_);
      DARABONBA_PTR_FROM_JSON(DiskIds, diskIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSDGDeploymentStatusShrinkRequest() = default ;
    DescribeSDGDeploymentStatusShrinkRequest(const DescribeSDGDeploymentStatusShrinkRequest &) = default ;
    DescribeSDGDeploymentStatusShrinkRequest(DescribeSDGDeploymentStatusShrinkRequest &&) = default ;
    DescribeSDGDeploymentStatusShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGDeploymentStatusShrinkRequest() = default ;
    DescribeSDGDeploymentStatusShrinkRequest& operator=(const DescribeSDGDeploymentStatusShrinkRequest &) = default ;
    DescribeSDGDeploymentStatusShrinkRequest& operator=(DescribeSDGDeploymentStatusShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentType_ == nullptr
        && this->diskIdsShrink_ == nullptr && this->instanceIdsShrink_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionIdsShrink_ == nullptr
        && this->SDGId_ == nullptr && this->status_ == nullptr; };
    // deploymentType Field Functions 
    bool hasDeploymentType() const { return this->deploymentType_ != nullptr;};
    void deleteDeploymentType() { this->deploymentType_ = nullptr;};
    inline string getDeploymentType() const { DARABONBA_PTR_GET_DEFAULT(deploymentType_, "") };
    inline DescribeSDGDeploymentStatusShrinkRequest& setDeploymentType(string deploymentType) { DARABONBA_PTR_SET_VALUE(deploymentType_, deploymentType) };


    // diskIdsShrink Field Functions 
    bool hasDiskIdsShrink() const { return this->diskIdsShrink_ != nullptr;};
    void deleteDiskIdsShrink() { this->diskIdsShrink_ = nullptr;};
    inline string getDiskIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(diskIdsShrink_, "") };
    inline DescribeSDGDeploymentStatusShrinkRequest& setDiskIdsShrink(string diskIdsShrink) { DARABONBA_PTR_SET_VALUE(diskIdsShrink_, diskIdsShrink) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline DescribeSDGDeploymentStatusShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSDGDeploymentStatusShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSDGDeploymentStatusShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionIdsShrink Field Functions 
    bool hasRegionIdsShrink() const { return this->regionIdsShrink_ != nullptr;};
    void deleteRegionIdsShrink() { this->regionIdsShrink_ = nullptr;};
    inline string getRegionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(regionIdsShrink_, "") };
    inline DescribeSDGDeploymentStatusShrinkRequest& setRegionIdsShrink(string regionIdsShrink) { DARABONBA_PTR_SET_VALUE(regionIdsShrink_, regionIdsShrink) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string getSDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline DescribeSDGDeploymentStatusShrinkRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSDGDeploymentStatusShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The deployment type.
    shared_ptr<string> deploymentType_ {};
    shared_ptr<string> diskIdsShrink_ {};
    // IDs of Android in Container (AIC) instances.
    shared_ptr<string> instanceIdsShrink_ {};
    // The number of the page to return. Pages start from page **1**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The IDs of the nodes.
    shared_ptr<string> regionIdsShrink_ {};
    // The ID of the SDG.
    // 
    // This parameter is required.
    shared_ptr<string> SDGId_ {};
    // The deployment status of the SDG.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
