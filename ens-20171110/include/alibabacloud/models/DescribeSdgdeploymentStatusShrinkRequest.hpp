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
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIdsShrink_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGDeploymentStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentType, deploymentType_);
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
    virtual bool empty() const override { this->deploymentType_ != nullptr
        && this->instanceIdsShrink_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionIdsShrink_ != nullptr && this->SDGId_ != nullptr
        && this->status_ != nullptr; };
    // deploymentType Field Functions 
    bool hasDeploymentType() const { return this->deploymentType_ != nullptr;};
    void deleteDeploymentType() { this->deploymentType_ = nullptr;};
    inline string deploymentType() const { DARABONBA_PTR_GET_DEFAULT(deploymentType_, "") };
    inline DescribeSDGDeploymentStatusShrinkRequest& setDeploymentType(string deploymentType) { DARABONBA_PTR_SET_VALUE(deploymentType_, deploymentType) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline DescribeSDGDeploymentStatusShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSDGDeploymentStatusShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSDGDeploymentStatusShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionIdsShrink Field Functions 
    bool hasRegionIdsShrink() const { return this->regionIdsShrink_ != nullptr;};
    void deleteRegionIdsShrink() { this->regionIdsShrink_ = nullptr;};
    inline string regionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(regionIdsShrink_, "") };
    inline DescribeSDGDeploymentStatusShrinkRequest& setRegionIdsShrink(string regionIdsShrink) { DARABONBA_PTR_SET_VALUE(regionIdsShrink_, regionIdsShrink) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string SDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline DescribeSDGDeploymentStatusShrinkRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSDGDeploymentStatusShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The deployment type.
    std::shared_ptr<string> deploymentType_ = nullptr;
    // IDs of Android in Container (AIC) instances.
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
    // The number of the page to return. Pages start from page **1**. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The IDs of the nodes.
    std::shared_ptr<string> regionIdsShrink_ = nullptr;
    // The ID of the SDG.
    // 
    // This parameter is required.
    std::shared_ptr<string> SDGId_ = nullptr;
    // The deployment status of the SDG.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
