// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSAGEDETAILDATAEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSAGEDETAILDATAEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DeleteUsageDetailDataExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUsageDetailDataExportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUsageDetailDataExportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DeleteUsageDetailDataExportTaskRequest() = default ;
    DeleteUsageDetailDataExportTaskRequest(const DeleteUsageDetailDataExportTaskRequest &) = default ;
    DeleteUsageDetailDataExportTaskRequest(DeleteUsageDetailDataExportTaskRequest &&) = default ;
    DeleteUsageDetailDataExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUsageDetailDataExportTaskRequest() = default ;
    DeleteUsageDetailDataExportTaskRequest& operator=(const DeleteUsageDetailDataExportTaskRequest &) = default ;
    DeleteUsageDetailDataExportTaskRequest& operator=(DeleteUsageDetailDataExportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DeleteUsageDetailDataExportTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the task. You can call the [DescribeUserUsageDataExportTask](https://help.aliyun.com/document_detail/91062.html) operation to query tasks.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
