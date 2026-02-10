// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECYCLETASKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECYCLETASKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCycleTaskListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCycleTaskListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCycleTaskListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeCycleTaskListRequest() = default ;
    DescribeCycleTaskListRequest(const DescribeCycleTaskListRequest &) = default ;
    DescribeCycleTaskListRequest(DescribeCycleTaskListRequest &&) = default ;
    DescribeCycleTaskListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCycleTaskListRequest() = default ;
    DescribeCycleTaskListRequest& operator=(const DescribeCycleTaskListRequest &) = default ;
    DescribeCycleTaskListRequest& operator=(DescribeCycleTaskListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline DescribeCycleTaskListRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCycleTaskListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCycleTaskListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeCycleTaskListRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeCycleTaskListRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The ID of the task configuration.
    // 
    // >  You can call the [CreateCycleTask](~~CreateCycleTask~~) operation to query the IDs of task configurations.
    shared_ptr<string> configId_ {};
    // The number of the page to return.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the task. Valid values:
    // 
    // *   **VIRUS_VUL_SCHEDULE_SCAN**: virus scan task
    // *   **IMAGE_SCAN**: image scan task
    // *   **EMG_VUL_SCHEDULE_SCAN**: urgent vulnerability scan task
    shared_ptr<string> taskName_ {};
    // The type of the task. Valid values:
    // 
    // *   **VIRUS_VUL_SCHEDULE_SCAN**: virus scan task
    // *   **IMAGE_SCAN**: image scan task
    // *   **EMG_VUL_SCHEDULE_SCAN**: urgent vulnerability scan task
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
