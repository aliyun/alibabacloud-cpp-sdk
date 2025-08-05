// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADTASKTYPERESPONSEBODYTASKTYPEARRAY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADTASKTYPERESPONSEBODYTASKTYPEARRAY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeDownloadTaskTypeResponseBodyTaskTypeArray : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadTaskTypeResponseBodyTaskTypeArray& obj) { 
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadTaskTypeResponseBodyTaskTypeArray& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeDownloadTaskTypeResponseBodyTaskTypeArray() = default ;
    DescribeDownloadTaskTypeResponseBodyTaskTypeArray(const DescribeDownloadTaskTypeResponseBodyTaskTypeArray &) = default ;
    DescribeDownloadTaskTypeResponseBodyTaskTypeArray(DescribeDownloadTaskTypeResponseBodyTaskTypeArray &&) = default ;
    DescribeDownloadTaskTypeResponseBodyTaskTypeArray(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDownloadTaskTypeResponseBodyTaskTypeArray() = default ;
    DescribeDownloadTaskTypeResponseBodyTaskTypeArray& operator=(const DescribeDownloadTaskTypeResponseBodyTaskTypeArray &) = default ;
    DescribeDownloadTaskTypeResponseBodyTaskTypeArray& operator=(DescribeDownloadTaskTypeResponseBodyTaskTypeArray &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskName_ != nullptr
        && this->taskType_ != nullptr; };
    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeDownloadTaskTypeResponseBodyTaskTypeArray& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeDownloadTaskTypeResponseBodyTaskTypeArray& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The name of the task type.
    std::shared_ptr<string> taskName_ = nullptr;
    // The type of the task.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
