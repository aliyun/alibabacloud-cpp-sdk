// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULCHECKTASKSTATUSDETAILRESPONSEBODYTASKSTATUSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULCHECKTASKSTATUSDETAILRESPONSEBODYTASKSTATUSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatusList, taskStatusList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatusList, taskStatusList_);
    };
    DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses() = default ;
    DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses(const DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses &) = default ;
    DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses(DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses &&) = default ;
    DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses() = default ;
    DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses& operator=(const DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses &) = default ;
    DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses& operator=(DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr
        && this->taskStatusList_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatusList Field Functions 
    bool hasTaskStatusList() const { return this->taskStatusList_ != nullptr;};
    void deleteTaskStatusList() { this->taskStatusList_ = nullptr;};
    inline const vector<Models::DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList> & taskStatusList() const { DARABONBA_PTR_GET_CONST(taskStatusList_, vector<Models::DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList>) };
    inline vector<Models::DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList> taskStatusList() { DARABONBA_PTR_GET(taskStatusList_, vector<Models::DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList>) };
    inline DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses& setTaskStatusList(const vector<Models::DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList> & taskStatusList) { DARABONBA_PTR_SET_VALUE(taskStatusList_, taskStatusList) };
    inline DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses& setTaskStatusList(vector<Models::DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList> && taskStatusList) { DARABONBA_PTR_SET_RVALUE(taskStatusList_, taskStatusList) };


  protected:
    // The ID of the main task.
    std::shared_ptr<string> taskId_ = nullptr;
    // An array that consists of status information about the vulnerability scan subtask.
    std::shared_ptr<vector<Models::DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList>> taskStatusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
