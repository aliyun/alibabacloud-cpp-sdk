// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSFORPROJECTAUTHORIZATIONPRINCIPALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSFORPROJECTAUTHORIZATIONPRINCIPALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListProjectsForProjectAuthorizationPrincipalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsForProjectAuthorizationPrincipalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Projects, projects_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsForProjectAuthorizationPrincipalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Projects, projects_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProjectsForProjectAuthorizationPrincipalResponseBody() = default ;
    ListProjectsForProjectAuthorizationPrincipalResponseBody(const ListProjectsForProjectAuthorizationPrincipalResponseBody &) = default ;
    ListProjectsForProjectAuthorizationPrincipalResponseBody(ListProjectsForProjectAuthorizationPrincipalResponseBody &&) = default ;
    ListProjectsForProjectAuthorizationPrincipalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsForProjectAuthorizationPrincipalResponseBody() = default ;
    ListProjectsForProjectAuthorizationPrincipalResponseBody& operator=(const ListProjectsForProjectAuthorizationPrincipalResponseBody &) = default ;
    ListProjectsForProjectAuthorizationPrincipalResponseBody& operator=(ListProjectsForProjectAuthorizationPrincipalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Projects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Projects& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, Projects& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->isDefault_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Projects& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Projects& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Projects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Projects& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // The description of the project.
      shared_ptr<string> description_ {};
      // Specifies whether the project is the default project. Valid values:
      // - **true**: Yes.
      // 
      // - **false**: No.
      shared_ptr<bool> isDefault_ {};
      // The name of the project.
      shared_ptr<string> name_ {};
      // The ID of the project.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->projects_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProjectsForProjectAuthorizationPrincipalResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProjectsForProjectAuthorizationPrincipalResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projects Field Functions 
    bool hasProjects() const { return this->projects_ != nullptr;};
    void deleteProjects() { this->projects_ = nullptr;};
    inline const vector<ListProjectsForProjectAuthorizationPrincipalResponseBody::Projects> & getProjects() const { DARABONBA_PTR_GET_CONST(projects_, vector<ListProjectsForProjectAuthorizationPrincipalResponseBody::Projects>) };
    inline vector<ListProjectsForProjectAuthorizationPrincipalResponseBody::Projects> getProjects() { DARABONBA_PTR_GET(projects_, vector<ListProjectsForProjectAuthorizationPrincipalResponseBody::Projects>) };
    inline ListProjectsForProjectAuthorizationPrincipalResponseBody& setProjects(const vector<ListProjectsForProjectAuthorizationPrincipalResponseBody::Projects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
    inline ListProjectsForProjectAuthorizationPrincipalResponseBody& setProjects(vector<ListProjectsForProjectAuthorizationPrincipalResponseBody::Projects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectsForProjectAuthorizationPrincipalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProjectsForProjectAuthorizationPrincipalResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned per page. If a valid MaxResults request parameter is passed, the specified value is returned. Otherwise, the default value is returned.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next request, used for paging. You can specify this token in the NextToken request parameter for the next paged query. If this field is empty in the response, no more data is available.
    shared_ptr<string> nextToken_ {};
    // The list of projects.
    shared_ptr<vector<ListProjectsForProjectAuthorizationPrincipalResponseBody::Projects>> projects_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of queried projects.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
