// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESDGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESDGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceSDGStatusResponseBodyDeploymentStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceSDGStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSDGStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentStatus, deploymentStatus_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSDGStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentStatus, deploymentStatus_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceSDGStatusResponseBody() = default ;
    DescribeInstanceSDGStatusResponseBody(const DescribeInstanceSDGStatusResponseBody &) = default ;
    DescribeInstanceSDGStatusResponseBody(DescribeInstanceSDGStatusResponseBody &&) = default ;
    DescribeInstanceSDGStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSDGStatusResponseBody() = default ;
    DescribeInstanceSDGStatusResponseBody& operator=(const DescribeInstanceSDGStatusResponseBody &) = default ;
    DescribeInstanceSDGStatusResponseBody& operator=(DescribeInstanceSDGStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deploymentStatus_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // deploymentStatus Field Functions 
    bool hasDeploymentStatus() const { return this->deploymentStatus_ != nullptr;};
    void deleteDeploymentStatus() { this->deploymentStatus_ = nullptr;};
    inline const vector<DescribeInstanceSDGStatusResponseBodyDeploymentStatus> & deploymentStatus() const { DARABONBA_PTR_GET_CONST(deploymentStatus_, vector<DescribeInstanceSDGStatusResponseBodyDeploymentStatus>) };
    inline vector<DescribeInstanceSDGStatusResponseBodyDeploymentStatus> deploymentStatus() { DARABONBA_PTR_GET(deploymentStatus_, vector<DescribeInstanceSDGStatusResponseBodyDeploymentStatus>) };
    inline DescribeInstanceSDGStatusResponseBody& setDeploymentStatus(const vector<DescribeInstanceSDGStatusResponseBodyDeploymentStatus> & deploymentStatus) { DARABONBA_PTR_SET_VALUE(deploymentStatus_, deploymentStatus) };
    inline DescribeInstanceSDGStatusResponseBody& setDeploymentStatus(vector<DescribeInstanceSDGStatusResponseBodyDeploymentStatus> && deploymentStatus) { DARABONBA_PTR_SET_RVALUE(deploymentStatus_, deploymentStatus) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeInstanceSDGStatusResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeInstanceSDGStatusResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceSDGStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeInstanceSDGStatusResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The deployment information of the SDGs.
    std::shared_ptr<vector<DescribeInstanceSDGStatusResponseBodyDeploymentStatus>> deploymentStatus_ = nullptr;
    // The number of the page to return. Pages start from page 1. Default value: 1
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: **10**.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of queried deployment records.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
