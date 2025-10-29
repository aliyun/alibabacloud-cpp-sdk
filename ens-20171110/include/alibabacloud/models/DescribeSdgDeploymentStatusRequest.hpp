// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGDEPLOYMENTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGDEPLOYMENTSTATUSREQUEST_HPP_
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
  class DescribeSDGDeploymentStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGDeploymentStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentType, deploymentType_);
      DARABONBA_PTR_TO_JSON(DiskIds, diskIds_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGDeploymentStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentType, deploymentType_);
      DARABONBA_PTR_FROM_JSON(DiskIds, diskIds_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSDGDeploymentStatusRequest() = default ;
    DescribeSDGDeploymentStatusRequest(const DescribeSDGDeploymentStatusRequest &) = default ;
    DescribeSDGDeploymentStatusRequest(DescribeSDGDeploymentStatusRequest &&) = default ;
    DescribeSDGDeploymentStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGDeploymentStatusRequest() = default ;
    DescribeSDGDeploymentStatusRequest& operator=(const DescribeSDGDeploymentStatusRequest &) = default ;
    DescribeSDGDeploymentStatusRequest& operator=(DescribeSDGDeploymentStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentType_ == nullptr
        && return this->diskIds_ == nullptr && return this->instanceIds_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionIds_ == nullptr
        && return this->SDGId_ == nullptr && return this->status_ == nullptr; };
    // deploymentType Field Functions 
    bool hasDeploymentType() const { return this->deploymentType_ != nullptr;};
    void deleteDeploymentType() { this->deploymentType_ = nullptr;};
    inline string deploymentType() const { DARABONBA_PTR_GET_DEFAULT(deploymentType_, "") };
    inline DescribeSDGDeploymentStatusRequest& setDeploymentType(string deploymentType) { DARABONBA_PTR_SET_VALUE(deploymentType_, deploymentType) };


    // diskIds Field Functions 
    bool hasDiskIds() const { return this->diskIds_ != nullptr;};
    void deleteDiskIds() { this->diskIds_ = nullptr;};
    inline const vector<string> & diskIds() const { DARABONBA_PTR_GET_CONST(diskIds_, vector<string>) };
    inline vector<string> diskIds() { DARABONBA_PTR_GET(diskIds_, vector<string>) };
    inline DescribeSDGDeploymentStatusRequest& setDiskIds(const vector<string> & diskIds) { DARABONBA_PTR_SET_VALUE(diskIds_, diskIds) };
    inline DescribeSDGDeploymentStatusRequest& setDiskIds(vector<string> && diskIds) { DARABONBA_PTR_SET_RVALUE(diskIds_, diskIds) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeSDGDeploymentStatusRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeSDGDeploymentStatusRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSDGDeploymentStatusRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSDGDeploymentStatusRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & regionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> regionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline DescribeSDGDeploymentStatusRequest& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline DescribeSDGDeploymentStatusRequest& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string SDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline DescribeSDGDeploymentStatusRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSDGDeploymentStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The deployment type.
    std::shared_ptr<string> deploymentType_ = nullptr;
    std::shared_ptr<vector<string>> diskIds_ = nullptr;
    // IDs of Android in Container (AIC) instances.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The number of the page to return. Pages start from page **1**. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The IDs of the nodes.
    std::shared_ptr<vector<string>> regionIds_ = nullptr;
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
