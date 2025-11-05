// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERUSAGEDATAEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERUSAGEDATAEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DeleteUserUsageDataExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserUsageDataExportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserUsageDataExportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DeleteUserUsageDataExportTaskRequest() = default ;
    DeleteUserUsageDataExportTaskRequest(const DeleteUserUsageDataExportTaskRequest &) = default ;
    DeleteUserUsageDataExportTaskRequest(DeleteUserUsageDataExportTaskRequest &&) = default ;
    DeleteUserUsageDataExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserUsageDataExportTaskRequest() = default ;
    DeleteUserUsageDataExportTaskRequest& operator=(const DeleteUserUsageDataExportTaskRequest &) = default ;
    DeleteUserUsageDataExportTaskRequest& operator=(DeleteUserUsageDataExportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DeleteUserUsageDataExportTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the task to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
