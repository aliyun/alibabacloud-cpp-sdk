// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDeploymentSetsResponseBodyDeploymentSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDeploymentSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeploymentSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentSets, deploymentSets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeploymentSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentSets, deploymentSets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDeploymentSetsResponseBody() = default ;
    DescribeDeploymentSetsResponseBody(const DescribeDeploymentSetsResponseBody &) = default ;
    DescribeDeploymentSetsResponseBody(DescribeDeploymentSetsResponseBody &&) = default ;
    DescribeDeploymentSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeploymentSetsResponseBody() = default ;
    DescribeDeploymentSetsResponseBody& operator=(const DescribeDeploymentSetsResponseBody &) = default ;
    DescribeDeploymentSetsResponseBody& operator=(DescribeDeploymentSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentSets_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // deploymentSets Field Functions 
    bool hasDeploymentSets() const { return this->deploymentSets_ != nullptr;};
    void deleteDeploymentSets() { this->deploymentSets_ = nullptr;};
    inline const DescribeDeploymentSetsResponseBodyDeploymentSets & deploymentSets() const { DARABONBA_PTR_GET_CONST(deploymentSets_, DescribeDeploymentSetsResponseBodyDeploymentSets) };
    inline DescribeDeploymentSetsResponseBodyDeploymentSets deploymentSets() { DARABONBA_PTR_GET(deploymentSets_, DescribeDeploymentSetsResponseBodyDeploymentSets) };
    inline DescribeDeploymentSetsResponseBody& setDeploymentSets(const DescribeDeploymentSetsResponseBodyDeploymentSets & deploymentSets) { DARABONBA_PTR_SET_VALUE(deploymentSets_, deploymentSets) };
    inline DescribeDeploymentSetsResponseBody& setDeploymentSets(DescribeDeploymentSetsResponseBodyDeploymentSets && deploymentSets) { DARABONBA_PTR_SET_RVALUE(deploymentSets_, deploymentSets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDeploymentSetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDeploymentSetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDeploymentSetsResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeploymentSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDeploymentSetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the deployment sets.
    std::shared_ptr<DescribeDeploymentSetsResponseBodyDeploymentSets> deploymentSets_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of queried deployment sets.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
