// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODY_HPP_
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
  class ListProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Projects, projects_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Projects, projects_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    class Projects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Projects& obj) { 
        DARABONBA_PTR_TO_JSON(AppCount, appCount_);
        DARABONBA_PTR_TO_JSON(DatabaseCount, databaseCount_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DomainServerCount, domainServerCount_);
        DARABONBA_PTR_TO_JSON(HostCount, hostCount_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(MemberIds, memberIds_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, Projects& obj) { 
        DARABONBA_PTR_FROM_JSON(AppCount, appCount_);
        DARABONBA_PTR_FROM_JSON(DatabaseCount, databaseCount_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DomainServerCount, domainServerCount_);
        DARABONBA_PTR_FROM_JSON(HostCount, hostCount_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(MemberIds, memberIds_);
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
      virtual bool empty() const override { return this->appCount_ == nullptr
        && this->databaseCount_ == nullptr && this->description_ == nullptr && this->domainServerCount_ == nullptr && this->hostCount_ == nullptr && this->isDefault_ == nullptr
        && this->memberIds_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr; };
      // appCount Field Functions 
      bool hasAppCount() const { return this->appCount_ != nullptr;};
      void deleteAppCount() { this->appCount_ = nullptr;};
      inline int64_t getAppCount() const { DARABONBA_PTR_GET_DEFAULT(appCount_, 0L) };
      inline Projects& setAppCount(int64_t appCount) { DARABONBA_PTR_SET_VALUE(appCount_, appCount) };


      // databaseCount Field Functions 
      bool hasDatabaseCount() const { return this->databaseCount_ != nullptr;};
      void deleteDatabaseCount() { this->databaseCount_ = nullptr;};
      inline int64_t getDatabaseCount() const { DARABONBA_PTR_GET_DEFAULT(databaseCount_, 0L) };
      inline Projects& setDatabaseCount(int64_t databaseCount) { DARABONBA_PTR_SET_VALUE(databaseCount_, databaseCount) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Projects& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domainServerCount Field Functions 
      bool hasDomainServerCount() const { return this->domainServerCount_ != nullptr;};
      void deleteDomainServerCount() { this->domainServerCount_ = nullptr;};
      inline int64_t getDomainServerCount() const { DARABONBA_PTR_GET_DEFAULT(domainServerCount_, 0L) };
      inline Projects& setDomainServerCount(int64_t domainServerCount) { DARABONBA_PTR_SET_VALUE(domainServerCount_, domainServerCount) };


      // hostCount Field Functions 
      bool hasHostCount() const { return this->hostCount_ != nullptr;};
      void deleteHostCount() { this->hostCount_ = nullptr;};
      inline int64_t getHostCount() const { DARABONBA_PTR_GET_DEFAULT(hostCount_, 0L) };
      inline Projects& setHostCount(int64_t hostCount) { DARABONBA_PTR_SET_VALUE(hostCount_, hostCount) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Projects& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // memberIds Field Functions 
      bool hasMemberIds() const { return this->memberIds_ != nullptr;};
      void deleteMemberIds() { this->memberIds_ = nullptr;};
      inline const vector<string> & getMemberIds() const { DARABONBA_PTR_GET_CONST(memberIds_, vector<string>) };
      inline vector<string> getMemberIds() { DARABONBA_PTR_GET(memberIds_, vector<string>) };
      inline Projects& setMemberIds(const vector<string> & memberIds) { DARABONBA_PTR_SET_VALUE(memberIds_, memberIds) };
      inline Projects& setMemberIds(vector<string> && memberIds) { DARABONBA_PTR_SET_RVALUE(memberIds_, memberIds) };


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
      // The total number of applications in the project.
      shared_ptr<int64_t> appCount_ {};
      // The total number of database instances in the project.
      shared_ptr<int64_t> databaseCount_ {};
      // The description of the project.
      shared_ptr<string> description_ {};
      // The total number of domain servers in the project.
      shared_ptr<int64_t> domainServerCount_ {};
      // The total number of hosts in the project.
      shared_ptr<int64_t> hostCount_ {};
      // Indicates whether the project is the default project. Valid values:
      // 
      // - **true**: Yes.
      // 
      // - **false**: No.
      shared_ptr<bool> isDefault_ {};
      // The list of UIDs of the member accounts associated with the project.
      shared_ptr<vector<string>> memberIds_ {};
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
    inline ListProjectsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProjectsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projects Field Functions 
    bool hasProjects() const { return this->projects_ != nullptr;};
    void deleteProjects() { this->projects_ = nullptr;};
    inline const vector<ListProjectsResponseBody::Projects> & getProjects() const { DARABONBA_PTR_GET_CONST(projects_, vector<ListProjectsResponseBody::Projects>) };
    inline vector<ListProjectsResponseBody::Projects> getProjects() { DARABONBA_PTR_GET(projects_, vector<ListProjectsResponseBody::Projects>) };
    inline ListProjectsResponseBody& setProjects(const vector<ListProjectsResponseBody::Projects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
    inline ListProjectsResponseBody& setProjects(vector<ListProjectsResponseBody::Projects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProjectsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // If a valid MaxResults parameter is specified in the request parameters, the specified value is returned. Otherwise, the default value is returned.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The list of projects.
    shared_ptr<vector<ListProjectsResponseBody::Projects>> projects_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // The total number of projects queried.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
