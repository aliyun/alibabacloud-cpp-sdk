// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCDEPLOYMENTSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCDEPLOYMENTSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCDeploymentSetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCDeploymentSetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentSetIds, deploymentSetIds_);
      DARABONBA_PTR_TO_JSON(DeploymentSetName, deploymentSetName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCDeploymentSetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentSetIds, deploymentSetIds_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetName, deploymentSetName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeRCDeploymentSetsRequest() = default ;
    DescribeRCDeploymentSetsRequest(const DescribeRCDeploymentSetsRequest &) = default ;
    DescribeRCDeploymentSetsRequest(DescribeRCDeploymentSetsRequest &&) = default ;
    DescribeRCDeploymentSetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCDeploymentSetsRequest() = default ;
    DescribeRCDeploymentSetsRequest& operator=(const DescribeRCDeploymentSetsRequest &) = default ;
    DescribeRCDeploymentSetsRequest& operator=(DescribeRCDeploymentSetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentSetIds_ == nullptr
        && return this->deploymentSetName_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->strategy_ == nullptr
        && return this->tag_ == nullptr; };
    // deploymentSetIds Field Functions 
    bool hasDeploymentSetIds() const { return this->deploymentSetIds_ != nullptr;};
    void deleteDeploymentSetIds() { this->deploymentSetIds_ = nullptr;};
    inline string deploymentSetIds() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetIds_, "") };
    inline DescribeRCDeploymentSetsRequest& setDeploymentSetIds(string deploymentSetIds) { DARABONBA_PTR_SET_VALUE(deploymentSetIds_, deploymentSetIds) };


    // deploymentSetName Field Functions 
    bool hasDeploymentSetName() const { return this->deploymentSetName_ != nullptr;};
    void deleteDeploymentSetName() { this->deploymentSetName_ = nullptr;};
    inline string deploymentSetName() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetName_, "") };
    inline DescribeRCDeploymentSetsRequest& setDeploymentSetName(string deploymentSetName) { DARABONBA_PTR_SET_VALUE(deploymentSetName_, deploymentSetName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRCDeploymentSetsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRCDeploymentSetsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCDeploymentSetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline DescribeRCDeploymentSetsRequest& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeRCDeploymentSetsRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The IDs of the deployment sets. The value can be a JSON array that consists of deployment set IDs in the format of `["ds-xxxxxxxxx", "ds-yyyyyyyyy", ... "ds-zzzzzzzzz"]`. You can specify up to 100 deployment set IDs in each request. Separate the deployment set IDs with commas (,).
    std::shared_ptr<string> deploymentSetIds_ = nullptr;
    // The deployment set name. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain digits, letters, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> deploymentSetName_ = nullptr;
    // The page number.
    // 
    // Pages start from page 1.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // Maximum value: 50.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The deployment strategy. Valid values:
    // 
    // *   **Availability**: high availability strategy
    // *   **AvailabilityGroup**: high availability group strategy
    // 
    // Default value: Availability.
    std::shared_ptr<string> strategy_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
