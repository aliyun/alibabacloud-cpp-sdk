// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(Reverse, reverse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(Reverse, reverse_);
    };
    DescribeApplicationInstancesRequest() = default ;
    DescribeApplicationInstancesRequest(const DescribeApplicationInstancesRequest &) = default ;
    DescribeApplicationInstancesRequest(DescribeApplicationInstancesRequest &&) = default ;
    DescribeApplicationInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationInstancesRequest() = default ;
    DescribeApplicationInstancesRequest& operator=(const DescribeApplicationInstancesRequest &) = default ;
    DescribeApplicationInstancesRequest& operator=(DescribeApplicationInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->currentPage_ == nullptr && this->groupId_ == nullptr && this->instanceId_ == nullptr && this->pageSize_ == nullptr && this->pipelineId_ == nullptr
        && this->reverse_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeApplicationInstancesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeApplicationInstancesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApplicationInstancesRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApplicationInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApplicationInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline DescribeApplicationInstancesRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // reverse Field Functions 
    bool hasReverse() const { return this->reverse_ != nullptr;};
    void deleteReverse() { this->reverse_ = nullptr;};
    inline bool getReverse() const { DARABONBA_PTR_GET_DEFAULT(reverse_, false) };
    inline DescribeApplicationInstancesRequest& setReverse(bool reverse) { DARABONBA_PTR_SET_VALUE(reverse_, reverse) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The number of the page to return.
    shared_ptr<int32_t> currentPage_ {};
    // The ID of the application group. Call the [DescribeApplicationGroups](https://help.aliyun.com/document_detail/126249.html) operation to get the ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The application instance ID.
    shared_ptr<string> instanceId_ {};
    // The number of entries to return on each page. Default value: **10**. The value must be in the range (0, 1000000000).
    shared_ptr<int32_t> pageSize_ {};
    // The batch ID. Call the [DescribeChangeOrder](https://help.aliyun.com/document_detail/126617.html) operation to get the ID.
    shared_ptr<string> pipelineId_ {};
    // Specifies the sort order of the application instances. Instances are sorted first by running status, and then by instance ID. Valid values:
    // 
    // - **true**: The instances are sorted in descending order.
    // 
    // - **false**: The instances are sorted in ascending order.
    // 
    // Instance statuses in ascending order:
    // 
    // 1. **Error**: An error occurred during instance startup.
    // 
    // 2. **CrashLoopBackOff**: The container fails to start and enters a crash-restart loop.
    // 
    // 3. **ErrImagePull**: An error occurred while pulling the container image for the instance.
    // 
    // 4. **ImagePullBackOff**: The system is repeatedly trying and failing to pull the container image.
    // 
    // 5. **Pending**: The instance is waiting to be scheduled.
    // 
    // 6. **Unknown**: An unknown exception occurred.
    // 
    // 7. **Terminating**: The instance is being terminated.
    // 
    // 8. **NotFound**: The instance cannot be found.
    // 
    // 9. **PodInitializing**: The instance is being initialized.
    // 
    // 10. **Init:0/1**: The instance is being initialized.
    // 
    // 11. **Running**: The instance is running.
    shared_ptr<bool> reverse_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
