// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTHREADSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTHREADSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListThreadsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListThreadsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
      DARABONBA_PTR_TO_JSON(threads, threads_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListThreadsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
      DARABONBA_PTR_FROM_JSON(threads, threads_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListThreadsResponseBody() = default ;
    ListThreadsResponseBody(const ListThreadsResponseBody &) = default ;
    ListThreadsResponseBody(ListThreadsResponseBody &&) = default ;
    ListThreadsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListThreadsResponseBody() = default ;
    ListThreadsResponseBody& operator=(const ListThreadsResponseBody &) = default ;
    ListThreadsResponseBody& operator=(ListThreadsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Threads : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Threads& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(threadId, threadId_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(variables, variables_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Threads& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(threadId, threadId_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(variables, variables_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      Threads() = default ;
      Threads(const Threads &) = default ;
      Threads(Threads &&) = default ;
      Threads(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Threads() = default ;
      Threads& operator=(const Threads &) = default ;
      Threads& operator=(Threads &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Variables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Variables& obj) { 
          DARABONBA_PTR_TO_JSON(project, project_);
          DARABONBA_PTR_TO_JSON(workspace, workspace_);
        };
        friend void from_json(const Darabonba::Json& j, Variables& obj) { 
          DARABONBA_PTR_FROM_JSON(project, project_);
          DARABONBA_PTR_FROM_JSON(workspace, workspace_);
        };
        Variables() = default ;
        Variables(const Variables &) = default ;
        Variables(Variables &&) = default ;
        Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Variables() = default ;
        Variables& operator=(const Variables &) = default ;
        Variables& operator=(Variables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->project_ == nullptr
        && this->workspace_ == nullptr; };
        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline Variables& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // workspace Field Functions 
        bool hasWorkspace() const { return this->workspace_ != nullptr;};
        void deleteWorkspace() { this->workspace_ = nullptr;};
        inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
        inline Variables& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


      protected:
        // SLS project。
        shared_ptr<string> project_ {};
        shared_ptr<string> workspace_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->digitalEmployeeName_ == nullptr && this->status_ == nullptr && this->threadId_ == nullptr && this->title_ == nullptr && this->updateTime_ == nullptr
        && this->variables_ == nullptr && this->version_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Threads& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // digitalEmployeeName Field Functions 
      bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
      void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
      inline string getDigitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
      inline Threads& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Threads& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // threadId Field Functions 
      bool hasThreadId() const { return this->threadId_ != nullptr;};
      void deleteThreadId() { this->threadId_ = nullptr;};
      inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
      inline Threads& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Threads& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Threads& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // variables Field Functions 
      bool hasVariables() const { return this->variables_ != nullptr;};
      void deleteVariables() { this->variables_ = nullptr;};
      inline const Threads::Variables & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, Threads::Variables) };
      inline Threads::Variables getVariables() { DARABONBA_PTR_GET(variables_, Threads::Variables) };
      inline Threads& setVariables(const Threads::Variables & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
      inline Threads& setVariables(Threads::Variables && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Threads& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> digitalEmployeeName_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> threadId_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<Threads::Variables> variables_ {};
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->threadId_ == nullptr && this->threads_ == nullptr && this->total_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListThreadsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListThreadsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListThreadsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline ListThreadsResponseBody& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // threads Field Functions 
    bool hasThreads() const { return this->threads_ != nullptr;};
    void deleteThreads() { this->threads_ = nullptr;};
    inline const vector<ListThreadsResponseBody::Threads> & getThreads() const { DARABONBA_PTR_GET_CONST(threads_, vector<ListThreadsResponseBody::Threads>) };
    inline vector<ListThreadsResponseBody::Threads> getThreads() { DARABONBA_PTR_GET(threads_, vector<ListThreadsResponseBody::Threads>) };
    inline ListThreadsResponseBody& setThreads(const vector<ListThreadsResponseBody::Threads> & threads) { DARABONBA_PTR_SET_VALUE(threads_, threads) };
    inline ListThreadsResponseBody& setThreads(vector<ListThreadsResponseBody::Threads> && threads) { DARABONBA_PTR_SET_RVALUE(threads_, threads) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListThreadsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<int64_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> threadId_ {};
    shared_ptr<vector<ListThreadsResponseBody::Threads>> threads_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
