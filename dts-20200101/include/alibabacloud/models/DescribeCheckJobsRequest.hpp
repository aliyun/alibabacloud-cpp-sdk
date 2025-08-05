// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeCheckJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckJobId, checkJobId_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckJobId, checkJobId_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeCheckJobsRequest() = default ;
    DescribeCheckJobsRequest(const DescribeCheckJobsRequest &) = default ;
    DescribeCheckJobsRequest(DescribeCheckJobsRequest &&) = default ;
    DescribeCheckJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckJobsRequest() = default ;
    DescribeCheckJobsRequest& operator=(const DescribeCheckJobsRequest &) = default ;
    DescribeCheckJobsRequest& operator=(DescribeCheckJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkJobId_ != nullptr
        && this->checkType_ != nullptr && this->instanceId_ != nullptr && this->jobName_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->resourceGroupId_ != nullptr; };
    // checkJobId Field Functions 
    bool hasCheckJobId() const { return this->checkJobId_ != nullptr;};
    void deleteCheckJobId() { this->checkJobId_ = nullptr;};
    inline string checkJobId() const { DARABONBA_PTR_GET_DEFAULT(checkJobId_, "") };
    inline DescribeCheckJobsRequest& setCheckJobId(string checkJobId) { DARABONBA_PTR_SET_VALUE(checkJobId_, checkJobId) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline DescribeCheckJobsRequest& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCheckJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline DescribeCheckJobsRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCheckJobsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCheckJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCheckJobsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // Check the task job ID.
    std::shared_ptr<string> checkJobId_ = nullptr;
    // The type of the check
    // >>1 full quantity, 2 incremental, 3 all
    std::shared_ptr<int32_t> checkType_ = nullptr;
    // Data migration instance ID, which can be queried by calling the **describemigrationjobs** API.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the data migration or synchronization job.
    std::shared_ptr<string> jobName_ = nullptr;
    // The number of the page to return. The value must be an integer that is greater than **0**. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
