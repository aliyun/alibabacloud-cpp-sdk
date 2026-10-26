// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTAUTHORIZATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTAUTHORIZATIONSRESPONSEBODY_HPP_
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
  class ListProjectAuthorizationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectAuthorizationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProjectAuthorizations, projectAuthorizations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectAuthorizationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProjectAuthorizations, projectAuthorizations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProjectAuthorizationsResponseBody() = default ;
    ListProjectAuthorizationsResponseBody(const ListProjectAuthorizationsResponseBody &) = default ;
    ListProjectAuthorizationsResponseBody(ListProjectAuthorizationsResponseBody &&) = default ;
    ListProjectAuthorizationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectAuthorizationsResponseBody() = default ;
    ListProjectAuthorizationsResponseBody& operator=(const ListProjectAuthorizationsResponseBody &) = default ;
    ListProjectAuthorizationsResponseBody& operator=(ListProjectAuthorizationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectAuthorizations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectAuthorizations& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationId, authorizationId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectAuthorizations& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationId, authorizationId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      };
      ProjectAuthorizations() = default ;
      ProjectAuthorizations(const ProjectAuthorizations &) = default ;
      ProjectAuthorizations(ProjectAuthorizations &&) = default ;
      ProjectAuthorizations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectAuthorizations() = default ;
      ProjectAuthorizations& operator=(const ProjectAuthorizations &) = default ;
      ProjectAuthorizations& operator=(ProjectAuthorizations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorizationId_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->scopeType_ == nullptr; };
      // authorizationId Field Functions 
      bool hasAuthorizationId() const { return this->authorizationId_ != nullptr;};
      void deleteAuthorizationId() { this->authorizationId_ = nullptr;};
      inline int64_t getAuthorizationId() const { DARABONBA_PTR_GET_DEFAULT(authorizationId_, 0L) };
      inline ProjectAuthorizations& setAuthorizationId(int64_t authorizationId) { DARABONBA_PTR_SET_VALUE(authorizationId_, authorizationId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProjectAuthorizations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ProjectAuthorizations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // scopeType Field Functions 
      bool hasScopeType() const { return this->scopeType_ != nullptr;};
      void deleteScopeType() { this->scopeType_ = nullptr;};
      inline int32_t getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, 0) };
      inline ProjectAuthorizations& setScopeType(int32_t scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    protected:
      // The project authorization ID.
      shared_ptr<int64_t> authorizationId_ {};
      // The remarks of the project authorization.
      shared_ptr<string> description_ {};
      // The project authorization name.
      shared_ptr<string> name_ {};
      // The scope of manageable assets associated with the authorization. Valid values:
      // 
      // - **1**: All projects.
      // 
      // - **2**: Specified projects.
      shared_ptr<int32_t> scopeType_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->projectAuthorizations_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProjectAuthorizationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProjectAuthorizationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectAuthorizations Field Functions 
    bool hasProjectAuthorizations() const { return this->projectAuthorizations_ != nullptr;};
    void deleteProjectAuthorizations() { this->projectAuthorizations_ = nullptr;};
    inline const vector<ListProjectAuthorizationsResponseBody::ProjectAuthorizations> & getProjectAuthorizations() const { DARABONBA_PTR_GET_CONST(projectAuthorizations_, vector<ListProjectAuthorizationsResponseBody::ProjectAuthorizations>) };
    inline vector<ListProjectAuthorizationsResponseBody::ProjectAuthorizations> getProjectAuthorizations() { DARABONBA_PTR_GET(projectAuthorizations_, vector<ListProjectAuthorizationsResponseBody::ProjectAuthorizations>) };
    inline ListProjectAuthorizationsResponseBody& setProjectAuthorizations(const vector<ListProjectAuthorizationsResponseBody::ProjectAuthorizations> & projectAuthorizations) { DARABONBA_PTR_SET_VALUE(projectAuthorizations_, projectAuthorizations) };
    inline ListProjectAuthorizationsResponseBody& setProjectAuthorizations(vector<ListProjectAuthorizationsResponseBody::ProjectAuthorizations> && projectAuthorizations) { DARABONBA_PTR_SET_RVALUE(projectAuthorizations_, projectAuthorizations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectAuthorizationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProjectAuthorizationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The value passed in the MaxResults request parameter if a valid MaxResults parameter was specified. Otherwise, the default value is returned.
    shared_ptr<int32_t> maxResults_ {};
    // The token required for the next query when using cursor-based pagination.
    // > Leave this parameter empty for the first query. For subsequent requests, set this parameter to the value of NextToken returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The list of project authorizations.
    shared_ptr<vector<ListProjectAuthorizationsResponseBody::ProjectAuthorizations>> projectAuthorizations_ {};
    // The unique request ID generated by Alibaba Cloud for this request.
    shared_ptr<string> requestId_ {};
    // The total number of project authorizations returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
