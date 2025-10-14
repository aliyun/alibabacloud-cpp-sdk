// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICOACHTASKPAGERESPONSEBODYTASKLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAICOACHTASKPAGERESPONSEBODYTASKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAICoachTaskPageResponseBodyTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICoachTaskPageResponseBodyTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(finishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(studentId, studentId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICoachTaskPageResponseBodyTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(finishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(studentId, studentId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    ListAICoachTaskPageResponseBodyTaskList() = default ;
    ListAICoachTaskPageResponseBodyTaskList(const ListAICoachTaskPageResponseBodyTaskList &) = default ;
    ListAICoachTaskPageResponseBodyTaskList(ListAICoachTaskPageResponseBodyTaskList &&) = default ;
    ListAICoachTaskPageResponseBodyTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICoachTaskPageResponseBodyTaskList() = default ;
    ListAICoachTaskPageResponseBodyTaskList& operator=(const ListAICoachTaskPageResponseBodyTaskList &) = default ;
    ListAICoachTaskPageResponseBodyTaskList& operator=(ListAICoachTaskPageResponseBodyTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finishTime_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->status_ == nullptr && return this->studentId_ == nullptr && return this->taskId_ == nullptr; };
    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline ListAICoachTaskPageResponseBodyTaskList& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListAICoachTaskPageResponseBodyTaskList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAICoachTaskPageResponseBodyTaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // studentId Field Functions 
    bool hasStudentId() const { return this->studentId_ != nullptr;};
    void deleteStudentId() { this->studentId_ = nullptr;};
    inline string studentId() const { DARABONBA_PTR_GET_DEFAULT(studentId_, "") };
    inline ListAICoachTaskPageResponseBodyTaskList& setStudentId(string studentId) { DARABONBA_PTR_SET_VALUE(studentId_, studentId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListAICoachTaskPageResponseBodyTaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> finishTime_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> studentId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
