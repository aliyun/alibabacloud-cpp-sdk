// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNFINISHEDONCETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUNFINISHEDONCETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUnfinishedOnceTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUnfinishedOnceTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, ListUnfinishedOnceTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    ListUnfinishedOnceTaskRequest() = default ;
    ListUnfinishedOnceTaskRequest(const ListUnfinishedOnceTaskRequest &) = default ;
    ListUnfinishedOnceTaskRequest(ListUnfinishedOnceTaskRequest &&) = default ;
    ListUnfinishedOnceTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUnfinishedOnceTaskRequest() = default ;
    ListUnfinishedOnceTaskRequest& operator=(const ListUnfinishedOnceTaskRequest &) = default ;
    ListUnfinishedOnceTaskRequest& operator=(ListUnfinishedOnceTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->target_ != nullptr
        && this->taskType_ != nullptr; };
    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ListUnfinishedOnceTaskRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListUnfinishedOnceTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The value of the object on which the task runs. If you set TaskType to IMAGE_SCAN, set this parameter to the UUID of the image that you want to scan. If you set TaskType to ASSETS_COLLECTION, set this parameter to the UUID of the server whose information you want to collect.
    std::shared_ptr<string> target_ = nullptr;
    // The type of the task. Valid values:
    // 
    // *   **ASSETS_COLLECTION**: asset information collection task
    // *   **IMAGE_SCAN**: image scan task
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
