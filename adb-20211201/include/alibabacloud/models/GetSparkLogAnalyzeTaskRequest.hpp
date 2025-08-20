// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKLOGANALYZETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKLOGANALYZETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkLogAnalyzeTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkLogAnalyzeTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkLogAnalyzeTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetSparkLogAnalyzeTaskRequest() = default ;
    GetSparkLogAnalyzeTaskRequest(const GetSparkLogAnalyzeTaskRequest &) = default ;
    GetSparkLogAnalyzeTaskRequest(GetSparkLogAnalyzeTaskRequest &&) = default ;
    GetSparkLogAnalyzeTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkLogAnalyzeTaskRequest() = default ;
    GetSparkLogAnalyzeTaskRequest& operator=(const GetSparkLogAnalyzeTaskRequest &) = default ;
    GetSparkLogAnalyzeTaskRequest& operator=(GetSparkLogAnalyzeTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetSparkLogAnalyzeTaskRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the Spark log analysis task. You can call the ListSparkLogAnalyzeTasks operation to query the IDs of all Spark log analysis tasks that are submitted in the current cluster.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
