// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_TASKINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Task.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class TaskInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskInstance& obj) { 
      DARABONBA_PTR_TO_JSON(bizId, bizId_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(fenixRunId, fenixRunId_);
      DARABONBA_PTR_TO_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(taskBizId, taskBizId_);
      DARABONBA_PTR_TO_JSON(taskInfo, taskInfo_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(workspaceBizId, workspaceBizId_);
    };
    friend void from_json(const Darabonba::Json& j, TaskInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(bizId, bizId_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(fenixRunId, fenixRunId_);
      DARABONBA_PTR_FROM_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(taskBizId, taskBizId_);
      DARABONBA_PTR_FROM_JSON(taskInfo, taskInfo_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(workspaceBizId, workspaceBizId_);
    };
    TaskInstance() = default ;
    TaskInstance(const TaskInstance &) = default ;
    TaskInstance(TaskInstance &&) = default ;
    TaskInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskInstance() = default ;
    TaskInstance& operator=(const TaskInstance &) = default ;
    TaskInstance& operator=(TaskInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->creator_ != nullptr && this->fenixRunId_ != nullptr && this->gmtCreated_ != nullptr && this->taskBizId_ != nullptr && this->taskInfo_ != nullptr
        && this->taskStatus_ != nullptr && this->workspaceBizId_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline TaskInstance& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline int64_t creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
    inline TaskInstance& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // fenixRunId Field Functions 
    bool hasFenixRunId() const { return this->fenixRunId_ != nullptr;};
    void deleteFenixRunId() { this->fenixRunId_ = nullptr;};
    inline string fenixRunId() const { DARABONBA_PTR_GET_DEFAULT(fenixRunId_, "") };
    inline TaskInstance& setFenixRunId(string fenixRunId) { DARABONBA_PTR_SET_VALUE(fenixRunId_, fenixRunId) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline TaskInstance& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // taskBizId Field Functions 
    bool hasTaskBizId() const { return this->taskBizId_ != nullptr;};
    void deleteTaskBizId() { this->taskBizId_ = nullptr;};
    inline string taskBizId() const { DARABONBA_PTR_GET_DEFAULT(taskBizId_, "") };
    inline TaskInstance& setTaskBizId(string taskBizId) { DARABONBA_PTR_SET_VALUE(taskBizId_, taskBizId) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const Task & taskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, Task) };
    inline Task taskInfo() { DARABONBA_PTR_GET(taskInfo_, Task) };
    inline TaskInstance& setTaskInfo(const Task & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline TaskInstance& setTaskInfo(Task && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline TaskInstance& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // workspaceBizId Field Functions 
    bool hasWorkspaceBizId() const { return this->workspaceBizId_ != nullptr;};
    void deleteWorkspaceBizId() { this->workspaceBizId_ = nullptr;};
    inline string workspaceBizId() const { DARABONBA_PTR_GET_DEFAULT(workspaceBizId_, "") };
    inline TaskInstance& setWorkspaceBizId(string workspaceBizId) { DARABONBA_PTR_SET_VALUE(workspaceBizId_, workspaceBizId) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<int64_t> creator_ = nullptr;
    std::shared_ptr<string> fenixRunId_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> taskBizId_ = nullptr;
    std::shared_ptr<Task> taskInfo_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
    std::shared_ptr<string> workspaceBizId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
