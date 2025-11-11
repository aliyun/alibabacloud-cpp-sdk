// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENEIMPORTTASKSRESPONSEBODYDATASTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENEIMPORTTASKSRESPONSEBODYDATASTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListInterveneImportTasksResponseBodyDataStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterveneImportTasksResponseBodyDataStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterveneImportTasksResponseBodyDataStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    ListInterveneImportTasksResponseBodyDataStatusList() = default ;
    ListInterveneImportTasksResponseBodyDataStatusList(const ListInterveneImportTasksResponseBodyDataStatusList &) = default ;
    ListInterveneImportTasksResponseBodyDataStatusList(ListInterveneImportTasksResponseBodyDataStatusList &&) = default ;
    ListInterveneImportTasksResponseBodyDataStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterveneImportTasksResponseBodyDataStatusList() = default ;
    ListInterveneImportTasksResponseBodyDataStatusList& operator=(const ListInterveneImportTasksResponseBodyDataStatusList &) = default ;
    ListInterveneImportTasksResponseBodyDataStatusList& operator=(ListInterveneImportTasksResponseBodyDataStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->msg_ == nullptr
        && return this->percentage_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->taskName_ == nullptr; };
    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ListInterveneImportTasksResponseBodyDataStatusList& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline ListInterveneImportTasksResponseBodyDataStatusList& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListInterveneImportTasksResponseBodyDataStatusList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListInterveneImportTasksResponseBodyDataStatusList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListInterveneImportTasksResponseBodyDataStatusList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


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
