// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class ListProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProjectsResponseBody() = default ;
    ListProjectsResponseBody(const ListProjectsResponseBody &) = default ;
    ListProjectsResponseBody(ListProjectsResponseBody &&) = default ;
    ListProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBody() = default ;
    ListProjectsResponseBody& operator=(const ListProjectsResponseBody &) = default ;
    ListProjectsResponseBody& operator=(ListProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(Project, project_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(Project, project_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Project : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Project& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Project& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        Project() = default ;
        Project(const Project &) = default ;
        Project(Project &&) = default ;
        Project(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Project() = default ;
        Project& operator=(const Project &) = default ;
        Project& operator=(Project &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->createTime_ == nullptr && this->creator_ == nullptr && this->projectName_ == nullptr && this->updateTime_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline Project& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Project& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Project& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline Project& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Project& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> comment_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->project_ == nullptr; };
      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline const vector<List::Project> & getProject() const { DARABONBA_PTR_GET_CONST(project_, vector<List::Project>) };
      inline vector<List::Project> getProject() { DARABONBA_PTR_GET(project_, vector<List::Project>) };
      inline List& setProject(const vector<List::Project> & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
      inline List& setProject(vector<List::Project> && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    protected:
      shared_ptr<vector<List::Project>> project_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const ListProjectsResponseBody::List & getList() const { DARABONBA_PTR_GET_CONST(list_, ListProjectsResponseBody::List) };
    inline ListProjectsResponseBody::List getList() { DARABONBA_PTR_GET(list_, ListProjectsResponseBody::List) };
    inline ListProjectsResponseBody& setList(const ListProjectsResponseBody::List & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListProjectsResponseBody& setList(ListProjectsResponseBody::List && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProjectsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProjectsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListProjectsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProjectsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListProjectsResponseBody::List> list_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
