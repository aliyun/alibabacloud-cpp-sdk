// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLASTONCETASKINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLASTONCETASKINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetLastOnceTaskInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLastOnceTaskInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetLastOnceTaskInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetLastOnceTaskInfoRequest() = default ;
    GetLastOnceTaskInfoRequest(const GetLastOnceTaskInfoRequest &) = default ;
    GetLastOnceTaskInfoRequest(GetLastOnceTaskInfoRequest &&) = default ;
    GetLastOnceTaskInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLastOnceTaskInfoRequest() = default ;
    GetLastOnceTaskInfoRequest& operator=(const GetLastOnceTaskInfoRequest &) = default ;
    GetLastOnceTaskInfoRequest& operator=(GetLastOnceTaskInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->source_ != nullptr
        && this->taskName_ != nullptr && this->taskType_ != nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetLastOnceTaskInfoRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetLastOnceTaskInfoRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetLastOnceTaskInfoRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The source of the task.
    std::shared_ptr<string> source_ = nullptr;
    // The name of the task. Valid values:
    // 
    // *   **CLIENT_PROBLEM_CHECK**: client diagnosis task
    // *   **CLIENT_DEV_OPS**: O\\&M task of Cloud Assistant
    // *   **ASSETS_COLLECTION**: asset collection task
    // 
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
    // The type of the task. Valid values:
    // 
    // *   **CLIENT_PROBLEM_CHECK**: client diagnosis task
    // *   **CLIENT_DEV_OPS**: O\\&M task of Cloud Assistant
    // *   **ASSETS_COLLECTION**: asset collection task
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
