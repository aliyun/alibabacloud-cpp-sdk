// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCREENSHOTRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_CREATESCREENSHOTRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateScreenshotResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScreenshotResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_TO_JSON(ScreenshotId, screenshotId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScreenshotResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_FROM_JSON(ScreenshotId, screenshotId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateScreenshotResponseBodyTasks() = default ;
    CreateScreenshotResponseBodyTasks(const CreateScreenshotResponseBodyTasks &) = default ;
    CreateScreenshotResponseBodyTasks(CreateScreenshotResponseBodyTasks &&) = default ;
    CreateScreenshotResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScreenshotResponseBodyTasks() = default ;
    CreateScreenshotResponseBodyTasks& operator=(const CreateScreenshotResponseBodyTasks &) = default ;
    CreateScreenshotResponseBodyTasks& operator=(CreateScreenshotResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceId_ == nullptr
        && return this->screenshotId_ == nullptr && return this->taskId_ == nullptr; };
    // androidInstanceId Field Functions 
    bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
    void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
    inline string androidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
    inline CreateScreenshotResponseBodyTasks& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


    // screenshotId Field Functions 
    bool hasScreenshotId() const { return this->screenshotId_ != nullptr;};
    void deleteScreenshotId() { this->screenshotId_ = nullptr;};
    inline string screenshotId() const { DARABONBA_PTR_GET_DEFAULT(screenshotId_, "") };
    inline CreateScreenshotResponseBodyTasks& setScreenshotId(string screenshotId) { DARABONBA_PTR_SET_VALUE(screenshotId_, screenshotId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateScreenshotResponseBodyTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the cloud phone instance.
    std::shared_ptr<string> androidInstanceId_ = nullptr;
    std::shared_ptr<string> screenshotId_ = nullptr;
    // The ID of the task. You can use the task ID with the DescribeTasks operation to get the download link for the screenshot.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
