// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGTODOTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGTODOTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryOrgTodoTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrgTodoTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(todoCards, todoCards_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrgTodoTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(todoCards, todoCards_);
    };
    QueryOrgTodoTasksResponseBody() = default ;
    QueryOrgTodoTasksResponseBody(const QueryOrgTodoTasksResponseBody &) = default ;
    QueryOrgTodoTasksResponseBody(QueryOrgTodoTasksResponseBody &&) = default ;
    QueryOrgTodoTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrgTodoTasksResponseBody() = default ;
    QueryOrgTodoTasksResponseBody& operator=(const QueryOrgTodoTasksResponseBody &) = default ;
    QueryOrgTodoTasksResponseBody& operator=(QueryOrgTodoTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TodoCards : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TodoCards& obj) { 
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
      friend void from_json(const Darabonba::Json& j, TodoCards& obj) { 
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
      TodoCards() = default ;
      TodoCards(const TodoCards &) = default ;
      TodoCards(TodoCards &&) = default ;
      TodoCards(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TodoCards() = default ;
      TodoCards& operator=(const TodoCards &) = default ;
      TodoCards& operator=(TodoCards &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DetailUrl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DetailUrl& obj) { 
          DARABONBA_PTR_TO_JSON(appUrl, appUrl_);
          DARABONBA_PTR_TO_JSON(pcUrl, pcUrl_);
        };
        friend void from_json(const Darabonba::Json& j, DetailUrl& obj) { 
          DARABONBA_PTR_FROM_JSON(appUrl, appUrl_);
          DARABONBA_PTR_FROM_JSON(pcUrl, pcUrl_);
        };
        DetailUrl() = default ;
        DetailUrl(const DetailUrl &) = default ;
        DetailUrl(DetailUrl &&) = default ;
        DetailUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DetailUrl() = default ;
        DetailUrl& operator=(const DetailUrl &) = default ;
        DetailUrl& operator=(DetailUrl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appUrl_ == nullptr
        && this->pcUrl_ == nullptr; };
        // appUrl Field Functions 
        bool hasAppUrl() const { return this->appUrl_ != nullptr;};
        void deleteAppUrl() { this->appUrl_ = nullptr;};
        inline string getAppUrl() const { DARABONBA_PTR_GET_DEFAULT(appUrl_, "") };
        inline DetailUrl& setAppUrl(string appUrl) { DARABONBA_PTR_SET_VALUE(appUrl_, appUrl) };


        // pcUrl Field Functions 
        bool hasPcUrl() const { return this->pcUrl_ != nullptr;};
        void deletePcUrl() { this->pcUrl_ = nullptr;};
        inline string getPcUrl() const { DARABONBA_PTR_GET_DEFAULT(pcUrl_, "") };
        inline DetailUrl& setPcUrl(string pcUrl) { DARABONBA_PTR_SET_VALUE(pcUrl_, pcUrl) };


      protected:
        shared_ptr<string> appUrl_ {};
        shared_ptr<string> pcUrl_ {};
      };

      virtual bool empty() const override { return this->bizTag_ == nullptr
        && this->createdTime_ == nullptr && this->creatorId_ == nullptr && this->detailUrl_ == nullptr && this->dueTime_ == nullptr && this->isDone_ == nullptr
        && this->modifiedTime_ == nullptr && this->priority_ == nullptr && this->sourceId_ == nullptr && this->subject_ == nullptr && this->taskId_ == nullptr; };
      // bizTag Field Functions 
      bool hasBizTag() const { return this->bizTag_ != nullptr;};
      void deleteBizTag() { this->bizTag_ = nullptr;};
      inline string getBizTag() const { DARABONBA_PTR_GET_DEFAULT(bizTag_, "") };
      inline TodoCards& setBizTag(string bizTag) { DARABONBA_PTR_SET_VALUE(bizTag_, bizTag) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline TodoCards& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline TodoCards& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // detailUrl Field Functions 
      bool hasDetailUrl() const { return this->detailUrl_ != nullptr;};
      void deleteDetailUrl() { this->detailUrl_ = nullptr;};
      inline const TodoCards::DetailUrl & getDetailUrl() const { DARABONBA_PTR_GET_CONST(detailUrl_, TodoCards::DetailUrl) };
      inline TodoCards::DetailUrl getDetailUrl() { DARABONBA_PTR_GET(detailUrl_, TodoCards::DetailUrl) };
      inline TodoCards& setDetailUrl(const TodoCards::DetailUrl & detailUrl) { DARABONBA_PTR_SET_VALUE(detailUrl_, detailUrl) };
      inline TodoCards& setDetailUrl(TodoCards::DetailUrl && detailUrl) { DARABONBA_PTR_SET_RVALUE(detailUrl_, detailUrl) };


      // dueTime Field Functions 
      bool hasDueTime() const { return this->dueTime_ != nullptr;};
      void deleteDueTime() { this->dueTime_ = nullptr;};
      inline int64_t getDueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
      inline TodoCards& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


      // isDone Field Functions 
      bool hasIsDone() const { return this->isDone_ != nullptr;};
      void deleteIsDone() { this->isDone_ = nullptr;};
      inline bool getIsDone() const { DARABONBA_PTR_GET_DEFAULT(isDone_, false) };
      inline TodoCards& setIsDone(bool isDone) { DARABONBA_PTR_SET_VALUE(isDone_, isDone) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
      inline TodoCards& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline TodoCards& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline TodoCards& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // subject Field Functions 
      bool hasSubject() const { return this->subject_ != nullptr;};
      void deleteSubject() { this->subject_ = nullptr;};
      inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
      inline TodoCards& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TodoCards& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> bizTag_ {};
      shared_ptr<int64_t> createdTime_ {};
      shared_ptr<string> creatorId_ {};
      shared_ptr<TodoCards::DetailUrl> detailUrl_ {};
      shared_ptr<int64_t> dueTime_ {};
      shared_ptr<bool> isDone_ {};
      shared_ptr<int64_t> modifiedTime_ {};
      shared_ptr<int32_t> priority_ {};
      shared_ptr<string> sourceId_ {};
      shared_ptr<string> subject_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->todoCards_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryOrgTodoTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryOrgTodoTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // todoCards Field Functions 
    bool hasTodoCards() const { return this->todoCards_ != nullptr;};
    void deleteTodoCards() { this->todoCards_ = nullptr;};
    inline const vector<QueryOrgTodoTasksResponseBody::TodoCards> & getTodoCards() const { DARABONBA_PTR_GET_CONST(todoCards_, vector<QueryOrgTodoTasksResponseBody::TodoCards>) };
    inline vector<QueryOrgTodoTasksResponseBody::TodoCards> getTodoCards() { DARABONBA_PTR_GET(todoCards_, vector<QueryOrgTodoTasksResponseBody::TodoCards>) };
    inline QueryOrgTodoTasksResponseBody& setTodoCards(const vector<QueryOrgTodoTasksResponseBody::TodoCards> & todoCards) { DARABONBA_PTR_SET_VALUE(todoCards_, todoCards) };
    inline QueryOrgTodoTasksResponseBody& setTodoCards(vector<QueryOrgTodoTasksResponseBody::TodoCards> && todoCards) { DARABONBA_PTR_SET_RVALUE(todoCards_, todoCards) };


  protected:
    shared_ptr<string> nextToken_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<QueryOrgTodoTasksResponseBody::TodoCards>> todoCards_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
