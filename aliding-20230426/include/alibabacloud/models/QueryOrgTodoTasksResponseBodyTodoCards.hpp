// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGTODOTASKSRESPONSEBODYTODOCARDS_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGTODOTASKSRESPONSEBODYTODOCARDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryOrgTodoTasksResponseBodyTodoCardsDetailUrl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryOrgTodoTasksResponseBodyTodoCards : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrgTodoTasksResponseBodyTodoCards& obj) { 
      DARABONBA_PTR_TO_JSON(bizTag, bizTag_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(detailUrl, detailUrl_);
      DARABONBA_PTR_TO_JSON(dueTime, dueTime_);
      DARABONBA_PTR_TO_JSON(isDone, isDone_);
      DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrgTodoTasksResponseBodyTodoCards& obj) { 
      DARABONBA_PTR_FROM_JSON(bizTag, bizTag_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(detailUrl, detailUrl_);
      DARABONBA_PTR_FROM_JSON(dueTime, dueTime_);
      DARABONBA_PTR_FROM_JSON(isDone, isDone_);
      DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    QueryOrgTodoTasksResponseBodyTodoCards() = default ;
    QueryOrgTodoTasksResponseBodyTodoCards(const QueryOrgTodoTasksResponseBodyTodoCards &) = default ;
    QueryOrgTodoTasksResponseBodyTodoCards(QueryOrgTodoTasksResponseBodyTodoCards &&) = default ;
    QueryOrgTodoTasksResponseBodyTodoCards(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrgTodoTasksResponseBodyTodoCards() = default ;
    QueryOrgTodoTasksResponseBodyTodoCards& operator=(const QueryOrgTodoTasksResponseBodyTodoCards &) = default ;
    QueryOrgTodoTasksResponseBodyTodoCards& operator=(QueryOrgTodoTasksResponseBodyTodoCards &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizTag_ != nullptr
        && this->createdTime_ != nullptr && this->creatorId_ != nullptr && this->detailUrl_ != nullptr && this->dueTime_ != nullptr && this->isDone_ != nullptr
        && this->modifiedTime_ != nullptr && this->priority_ != nullptr && this->sourceId_ != nullptr && this->subject_ != nullptr && this->taskId_ != nullptr; };
    // bizTag Field Functions 
    bool hasBizTag() const { return this->bizTag_ != nullptr;};
    void deleteBizTag() { this->bizTag_ = nullptr;};
    inline string bizTag() const { DARABONBA_PTR_GET_DEFAULT(bizTag_, "") };
    inline QueryOrgTodoTasksResponseBodyTodoCards& setBizTag(string bizTag) { DARABONBA_PTR_SET_VALUE(bizTag_, bizTag) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline QueryOrgTodoTasksResponseBodyTodoCards& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline QueryOrgTodoTasksResponseBodyTodoCards& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // detailUrl Field Functions 
    bool hasDetailUrl() const { return this->detailUrl_ != nullptr;};
    void deleteDetailUrl() { this->detailUrl_ = nullptr;};
    inline const Models::QueryOrgTodoTasksResponseBodyTodoCardsDetailUrl & detailUrl() const { DARABONBA_PTR_GET_CONST(detailUrl_, Models::QueryOrgTodoTasksResponseBodyTodoCardsDetailUrl) };
    inline Models::QueryOrgTodoTasksResponseBodyTodoCardsDetailUrl detailUrl() { DARABONBA_PTR_GET(detailUrl_, Models::QueryOrgTodoTasksResponseBodyTodoCardsDetailUrl) };
    inline QueryOrgTodoTasksResponseBodyTodoCards& setDetailUrl(const Models::QueryOrgTodoTasksResponseBodyTodoCardsDetailUrl & detailUrl) { DARABONBA_PTR_SET_VALUE(detailUrl_, detailUrl) };
    inline QueryOrgTodoTasksResponseBodyTodoCards& setDetailUrl(Models::QueryOrgTodoTasksResponseBodyTodoCardsDetailUrl && detailUrl) { DARABONBA_PTR_SET_RVALUE(detailUrl_, detailUrl) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline int64_t dueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
    inline QueryOrgTodoTasksResponseBodyTodoCards& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // isDone Field Functions 
    bool hasIsDone() const { return this->isDone_ != nullptr;};
    void deleteIsDone() { this->isDone_ = nullptr;};
    inline bool isDone() const { DARABONBA_PTR_GET_DEFAULT(isDone_, false) };
    inline QueryOrgTodoTasksResponseBodyTodoCards& setIsDone(bool isDone) { DARABONBA_PTR_SET_VALUE(isDone_, isDone) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline QueryOrgTodoTasksResponseBodyTodoCards& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline QueryOrgTodoTasksResponseBodyTodoCards& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline QueryOrgTodoTasksResponseBodyTodoCards& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline QueryOrgTodoTasksResponseBodyTodoCards& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryOrgTodoTasksResponseBodyTodoCards& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> bizTag_ = nullptr;
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<Models::QueryOrgTodoTasksResponseBodyTodoCardsDetailUrl> detailUrl_ = nullptr;
    std::shared_ptr<int64_t> dueTime_ = nullptr;
    std::shared_ptr<bool> isDone_ = nullptr;
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> sourceId_ = nullptr;
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
