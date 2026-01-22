// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGPROJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Projects, projects_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Projects, projects_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRenderingProjectsResponseBody() = default ;
    ListRenderingProjectsResponseBody(const ListRenderingProjectsResponseBody &) = default ;
    ListRenderingProjectsResponseBody(ListRenderingProjectsResponseBody &&) = default ;
    ListRenderingProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingProjectsResponseBody() = default ;
    ListRenderingProjectsResponseBody& operator=(const ListRenderingProjectsResponseBody &) = default ;
    ListRenderingProjectsResponseBody& operator=(ListRenderingProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Projects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Projects& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(SessionAttribs, sessionAttribs_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Projects& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(SessionAttribs, sessionAttribs_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Projects() = default ;
      Projects(const Projects &) = default ;
      Projects(Projects &&) = default ;
      Projects(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Projects() = default ;
      Projects& operator=(const Projects &) = default ;
      Projects& operator=(Projects &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SessionAttribs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SessionAttribs& obj) { 
          DARABONBA_PTR_TO_JSON(StartMode, startMode_);
        };
        friend void from_json(const Darabonba::Json& j, SessionAttribs& obj) { 
          DARABONBA_PTR_FROM_JSON(StartMode, startMode_);
        };
        SessionAttribs() = default ;
        SessionAttribs(const SessionAttribs &) = default ;
        SessionAttribs(SessionAttribs &&) = default ;
        SessionAttribs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SessionAttribs() = default ;
        SessionAttribs& operator=(const SessionAttribs &) = default ;
        SessionAttribs& operator=(SessionAttribs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->startMode_ == nullptr; };
        // startMode Field Functions 
        bool hasStartMode() const { return this->startMode_ != nullptr;};
        void deleteStartMode() { this->startMode_ = nullptr;};
        inline string getStartMode() const { DARABONBA_PTR_GET_DEFAULT(startMode_, "") };
        inline SessionAttribs& setStartMode(string startMode) { DARABONBA_PTR_SET_VALUE(startMode_, startMode) };


      protected:
        shared_ptr<string> startMode_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->sessionAttribs_ == nullptr && this->updateTime_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Projects& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Projects& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline Projects& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Projects& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // sessionAttribs Field Functions 
      bool hasSessionAttribs() const { return this->sessionAttribs_ != nullptr;};
      void deleteSessionAttribs() { this->sessionAttribs_ = nullptr;};
      inline const Projects::SessionAttribs & getSessionAttribs() const { DARABONBA_PTR_GET_CONST(sessionAttribs_, Projects::SessionAttribs) };
      inline Projects::SessionAttribs getSessionAttribs() { DARABONBA_PTR_GET(sessionAttribs_, Projects::SessionAttribs) };
      inline Projects& setSessionAttribs(const Projects::SessionAttribs & sessionAttribs) { DARABONBA_PTR_SET_VALUE(sessionAttribs_, sessionAttribs) };
      inline Projects& setSessionAttribs(Projects::SessionAttribs && sessionAttribs) { DARABONBA_PTR_SET_RVALUE(sessionAttribs_, sessionAttribs) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Projects& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> projectId_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<Projects::SessionAttribs> sessionAttribs_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->projects_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // projects Field Functions 
    bool hasProjects() const { return this->projects_ != nullptr;};
    void deleteProjects() { this->projects_ = nullptr;};
    inline const vector<ListRenderingProjectsResponseBody::Projects> & getProjects() const { DARABONBA_PTR_GET_CONST(projects_, vector<ListRenderingProjectsResponseBody::Projects>) };
    inline vector<ListRenderingProjectsResponseBody::Projects> getProjects() { DARABONBA_PTR_GET(projects_, vector<ListRenderingProjectsResponseBody::Projects>) };
    inline ListRenderingProjectsResponseBody& setProjects(const vector<ListRenderingProjectsResponseBody::Projects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
    inline ListRenderingProjectsResponseBody& setProjects(vector<ListRenderingProjectsResponseBody::Projects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRenderingProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRenderingProjectsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListRenderingProjectsResponseBody::Projects>> projects_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
