// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTODOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTODOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListTodosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTodosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListTodosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListTodosResponseBody() = default ;
    ListTodosResponseBody(const ListTodosResponseBody &) = default ;
    ListTodosResponseBody(ListTodosResponseBody &&) = default ;
    ListTodosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTodosResponseBody() = default ;
    ListTodosResponseBody& operator=(const ListTodosResponseBody &) = default ;
    ListTodosResponseBody& operator=(ListTodosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(assigneeCount, assigneeCount_);
        DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
        DARABONBA_PTR_TO_JSON(completedByUserId, completedByUserId_);
        DARABONBA_PTR_TO_JSON(completedByUserName, completedByUserName_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(isRead, isRead_);
        DARABONBA_PTR_TO_JSON(messageId, messageId_);
        DARABONBA_PTR_TO_JSON(myAssigneeStatus, myAssigneeStatus_);
        DARABONBA_PTR_TO_JSON(myDisplayState, myDisplayState_);
        DARABONBA_PTR_TO_JSON(priority, priority_);
        DARABONBA_PTR_TO_JSON(questionCount, questionCount_);
        DARABONBA_PTR_TO_JSON(questionSummaries, questionSummaries_);
        DARABONBA_ANY_TO_JSON(sourceContext, sourceContext_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(todoId, todoId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(assigneeCount, assigneeCount_);
        DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
        DARABONBA_PTR_FROM_JSON(completedByUserId, completedByUserId_);
        DARABONBA_PTR_FROM_JSON(completedByUserName, completedByUserName_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(isRead, isRead_);
        DARABONBA_PTR_FROM_JSON(messageId, messageId_);
        DARABONBA_PTR_FROM_JSON(myAssigneeStatus, myAssigneeStatus_);
        DARABONBA_PTR_FROM_JSON(myDisplayState, myDisplayState_);
        DARABONBA_PTR_FROM_JSON(priority, priority_);
        DARABONBA_PTR_FROM_JSON(questionCount, questionCount_);
        DARABONBA_PTR_FROM_JSON(questionSummaries, questionSummaries_);
        DARABONBA_ANY_FROM_JSON(sourceContext, sourceContext_);
        DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(todoId, todoId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assigneeCount_ == nullptr
        && this->completedAt_ == nullptr && this->completedByUserId_ == nullptr && this->completedByUserName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->isRead_ == nullptr && this->messageId_ == nullptr && this->myAssigneeStatus_ == nullptr && this->myDisplayState_ == nullptr && this->priority_ == nullptr
        && this->questionCount_ == nullptr && this->questionSummaries_ == nullptr && this->sourceContext_ == nullptr && this->sourceType_ == nullptr && this->status_ == nullptr
        && this->title_ == nullptr && this->todoId_ == nullptr; };
      // assigneeCount Field Functions 
      bool hasAssigneeCount() const { return this->assigneeCount_ != nullptr;};
      void deleteAssigneeCount() { this->assigneeCount_ = nullptr;};
      inline int64_t getAssigneeCount() const { DARABONBA_PTR_GET_DEFAULT(assigneeCount_, 0L) };
      inline Items& setAssigneeCount(int64_t assigneeCount) { DARABONBA_PTR_SET_VALUE(assigneeCount_, assigneeCount) };


      // completedAt Field Functions 
      bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
      void deleteCompletedAt() { this->completedAt_ = nullptr;};
      inline string getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, "") };
      inline Items& setCompletedAt(string completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


      // completedByUserId Field Functions 
      bool hasCompletedByUserId() const { return this->completedByUserId_ != nullptr;};
      void deleteCompletedByUserId() { this->completedByUserId_ = nullptr;};
      inline string getCompletedByUserId() const { DARABONBA_PTR_GET_DEFAULT(completedByUserId_, "") };
      inline Items& setCompletedByUserId(string completedByUserId) { DARABONBA_PTR_SET_VALUE(completedByUserId_, completedByUserId) };


      // completedByUserName Field Functions 
      bool hasCompletedByUserName() const { return this->completedByUserName_ != nullptr;};
      void deleteCompletedByUserName() { this->completedByUserName_ = nullptr;};
      inline string getCompletedByUserName() const { DARABONBA_PTR_GET_DEFAULT(completedByUserName_, "") };
      inline Items& setCompletedByUserName(string completedByUserName) { DARABONBA_PTR_SET_VALUE(completedByUserName_, completedByUserName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // isRead Field Functions 
      bool hasIsRead() const { return this->isRead_ != nullptr;};
      void deleteIsRead() { this->isRead_ = nullptr;};
      inline bool getIsRead() const { DARABONBA_PTR_GET_DEFAULT(isRead_, false) };
      inline Items& setIsRead(bool isRead) { DARABONBA_PTR_SET_VALUE(isRead_, isRead) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Items& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // myAssigneeStatus Field Functions 
      bool hasMyAssigneeStatus() const { return this->myAssigneeStatus_ != nullptr;};
      void deleteMyAssigneeStatus() { this->myAssigneeStatus_ = nullptr;};
      inline string getMyAssigneeStatus() const { DARABONBA_PTR_GET_DEFAULT(myAssigneeStatus_, "") };
      inline Items& setMyAssigneeStatus(string myAssigneeStatus) { DARABONBA_PTR_SET_VALUE(myAssigneeStatus_, myAssigneeStatus) };


      // myDisplayState Field Functions 
      bool hasMyDisplayState() const { return this->myDisplayState_ != nullptr;};
      void deleteMyDisplayState() { this->myDisplayState_ = nullptr;};
      inline string getMyDisplayState() const { DARABONBA_PTR_GET_DEFAULT(myDisplayState_, "") };
      inline Items& setMyDisplayState(string myDisplayState) { DARABONBA_PTR_SET_VALUE(myDisplayState_, myDisplayState) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline Items& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // questionCount Field Functions 
      bool hasQuestionCount() const { return this->questionCount_ != nullptr;};
      void deleteQuestionCount() { this->questionCount_ = nullptr;};
      inline int64_t getQuestionCount() const { DARABONBA_PTR_GET_DEFAULT(questionCount_, 0L) };
      inline Items& setQuestionCount(int64_t questionCount) { DARABONBA_PTR_SET_VALUE(questionCount_, questionCount) };


      // questionSummaries Field Functions 
      bool hasQuestionSummaries() const { return this->questionSummaries_ != nullptr;};
      void deleteQuestionSummaries() { this->questionSummaries_ = nullptr;};
      inline const vector<string> & getQuestionSummaries() const { DARABONBA_PTR_GET_CONST(questionSummaries_, vector<string>) };
      inline vector<string> getQuestionSummaries() { DARABONBA_PTR_GET(questionSummaries_, vector<string>) };
      inline Items& setQuestionSummaries(const vector<string> & questionSummaries) { DARABONBA_PTR_SET_VALUE(questionSummaries_, questionSummaries) };
      inline Items& setQuestionSummaries(vector<string> && questionSummaries) { DARABONBA_PTR_SET_RVALUE(questionSummaries_, questionSummaries) };


      // sourceContext Field Functions 
      bool hasSourceContext() const { return this->sourceContext_ != nullptr;};
      void deleteSourceContext() { this->sourceContext_ = nullptr;};
      inline       const Darabonba::Json & getSourceContext() const { DARABONBA_GET(sourceContext_) };
      Darabonba::Json & getSourceContext() { DARABONBA_GET(sourceContext_) };
      inline Items& setSourceContext(const Darabonba::Json & sourceContext) { DARABONBA_SET_VALUE(sourceContext_, sourceContext) };
      inline Items& setSourceContext(Darabonba::Json && sourceContext) { DARABONBA_SET_RVALUE(sourceContext_, sourceContext) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Items& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Items& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // todoId Field Functions 
      bool hasTodoId() const { return this->todoId_ != nullptr;};
      void deleteTodoId() { this->todoId_ = nullptr;};
      inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
      inline Items& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


    protected:
      // 处理人数量
      shared_ptr<int64_t> assigneeCount_ {};
      // 完成时间（北京时间 YYYY-MM-DD HH:mm:ss）
      shared_ptr<string> completedAt_ {};
      // 完成人用户ID；未完成为空
      shared_ptr<string> completedByUserId_ {};
      // 完成人姓名；未完成为空
      shared_ptr<string> completedByUserName_ {};
      // 创建时间（北京时间 YYYY-MM-DD HH:mm:ss）
      shared_ptr<string> gmtCreate_ {};
      // 最后修改时间（北京时间 YYYY-MM-DD HH:mm:ss）
      shared_ptr<string> gmtModified_ {};
      // 调用者是否已读
      shared_ptr<bool> isRead_ {};
      // 发出该待办的 assistant 消息ID；无会话来源为空
      shared_ptr<string> messageId_ {};
      // 调用者的处理人行状态
      shared_ptr<string> myAssigneeStatus_ {};
      // 调用者的列表展示状态
      shared_ptr<string> myDisplayState_ {};
      // 优先级
      shared_ptr<string> priority_ {};
      // 问题数量
      shared_ptr<int64_t> questionCount_ {};
      // 问题摘要列表
      shared_ptr<vector<string>> questionSummaries_ {};
      // 来源上下文（创建时原样透传）
      Darabonba::Json sourceContext_ {};
      // 待办来源类型
      shared_ptr<string> sourceType_ {};
      // 待办主状态
      shared_ptr<string> status_ {};
      // 待办标题
      shared_ptr<string> title_ {};
      // 待办ID
      shared_ptr<string> todoId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hasMore_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTodosResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListTodosResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListTodosResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListTodosResponseBody::Items>) };
    inline vector<ListTodosResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListTodosResponseBody::Items>) };
    inline ListTodosResponseBody& setItems(const vector<ListTodosResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListTodosResponseBody& setItems(vector<ListTodosResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListTodosResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTodosResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTodosResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListTodosResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListTodosResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTodosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListTodosResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // 业务状态码；成功为200
    shared_ptr<string> code_ {};
    // 是否还有更多数据
    shared_ptr<bool> hasMore_ {};
    // 当前页待办列表
    shared_ptr<vector<ListTodosResponseBody::Items>> items_ {};
    // 本次生效的单页最大返回数量
    shared_ptr<int64_t> maxResults_ {};
    // 错误描述
    shared_ptr<string> message_ {};
    // 下一页翻页令牌；无更多数据时为空字符串
    shared_ptr<string> nextToken_ {};
    // 当前页码
    shared_ptr<int64_t> page_ {};
    // 生效单页条数
    shared_ptr<int64_t> pageSize_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
    // 筛选条件下可见总数
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
