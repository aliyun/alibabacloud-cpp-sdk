// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERVENEIMPORTTASKINFORESPONSEBODYDATASTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETINTERVENEIMPORTTASKINFORESPONSEBODYDATASTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetInterveneImportTaskInfoResponseBodyDataStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterveneImportTaskInfoResponseBodyDataStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterveneImportTaskInfoResponseBodyDataStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    GetInterveneImportTaskInfoResponseBodyDataStatus() = default ;
    GetInterveneImportTaskInfoResponseBodyDataStatus(const GetInterveneImportTaskInfoResponseBodyDataStatus &) = default ;
    GetInterveneImportTaskInfoResponseBodyDataStatus(GetInterveneImportTaskInfoResponseBodyDataStatus &&) = default ;
    GetInterveneImportTaskInfoResponseBodyDataStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterveneImportTaskInfoResponseBodyDataStatus() = default ;
    GetInterveneImportTaskInfoResponseBodyDataStatus& operator=(const GetInterveneImportTaskInfoResponseBodyDataStatus &) = default ;
    GetInterveneImportTaskInfoResponseBodyDataStatus& operator=(GetInterveneImportTaskInfoResponseBodyDataStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->msg_ != nullptr
        && this->percentage_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr && this->taskName_ != nullptr; };
    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetInterveneImportTaskInfoResponseBodyDataStatus& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline GetInterveneImportTaskInfoResponseBodyDataStatus& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetInterveneImportTaskInfoResponseBodyDataStatus& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetInterveneImportTaskInfoResponseBodyDataStatus& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetInterveneImportTaskInfoResponseBodyDataStatus& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<int32_t> percentage_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
