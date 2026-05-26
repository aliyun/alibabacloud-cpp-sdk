// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLEASSIGNMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROLEASSIGNMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListRoleAssignmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoleAssignmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Assignments, assignments_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoleAssignmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Assignments, assignments_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRoleAssignmentsResponseBody() = default ;
    ListRoleAssignmentsResponseBody(const ListRoleAssignmentsResponseBody &) = default ;
    ListRoleAssignmentsResponseBody(ListRoleAssignmentsResponseBody &&) = default ;
    ListRoleAssignmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoleAssignmentsResponseBody() = default ;
    ListRoleAssignmentsResponseBody& operator=(const ListRoleAssignmentsResponseBody &) = default ;
    ListRoleAssignmentsResponseBody& operator=(ListRoleAssignmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Assignments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Assignments& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
        DARABONBA_PTR_TO_JSON(RoleId, roleId_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        DARABONBA_PTR_TO_JSON(UserPoolId, userPoolId_);
      };
      friend void from_json(const Darabonba::Json& j, Assignments& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
        DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        DARABONBA_PTR_FROM_JSON(UserPoolId, userPoolId_);
      };
      Assignments() = default ;
      Assignments(const Assignments &) = default ;
      Assignments(Assignments &&) = default ;
      Assignments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Assignments() = default ;
      Assignments& operator=(const Assignments &) = default ;
      Assignments& operator=(Assignments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->principalId_ == nullptr && this->principalName_ == nullptr && this->principalType_ == nullptr && this->roleId_ == nullptr && this->roleName_ == nullptr
        && this->userPoolId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Assignments& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // principalId Field Functions 
      bool hasPrincipalId() const { return this->principalId_ != nullptr;};
      void deletePrincipalId() { this->principalId_ = nullptr;};
      inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
      inline Assignments& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


      // principalName Field Functions 
      bool hasPrincipalName() const { return this->principalName_ != nullptr;};
      void deletePrincipalName() { this->principalName_ = nullptr;};
      inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
      inline Assignments& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


      // principalType Field Functions 
      bool hasPrincipalType() const { return this->principalType_ != nullptr;};
      void deletePrincipalType() { this->principalType_ = nullptr;};
      inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
      inline Assignments& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


      // roleId Field Functions 
      bool hasRoleId() const { return this->roleId_ != nullptr;};
      void deleteRoleId() { this->roleId_ = nullptr;};
      inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
      inline Assignments& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline Assignments& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // userPoolId Field Functions 
      bool hasUserPoolId() const { return this->userPoolId_ != nullptr;};
      void deleteUserPoolId() { this->userPoolId_ = nullptr;};
      inline string getUserPoolId() const { DARABONBA_PTR_GET_DEFAULT(userPoolId_, "") };
      inline Assignments& setUserPoolId(string userPoolId) { DARABONBA_PTR_SET_VALUE(userPoolId_, userPoolId) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> principalId_ {};
      shared_ptr<string> principalName_ {};
      shared_ptr<string> principalType_ {};
      shared_ptr<string> roleId_ {};
      shared_ptr<string> roleName_ {};
      shared_ptr<string> userPoolId_ {};
    };

    virtual bool empty() const override { return this->assignments_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // assignments Field Functions 
    bool hasAssignments() const { return this->assignments_ != nullptr;};
    void deleteAssignments() { this->assignments_ = nullptr;};
    inline const vector<ListRoleAssignmentsResponseBody::Assignments> & getAssignments() const { DARABONBA_PTR_GET_CONST(assignments_, vector<ListRoleAssignmentsResponseBody::Assignments>) };
    inline vector<ListRoleAssignmentsResponseBody::Assignments> getAssignments() { DARABONBA_PTR_GET(assignments_, vector<ListRoleAssignmentsResponseBody::Assignments>) };
    inline ListRoleAssignmentsResponseBody& setAssignments(const vector<ListRoleAssignmentsResponseBody::Assignments> & assignments) { DARABONBA_PTR_SET_VALUE(assignments_, assignments) };
    inline ListRoleAssignmentsResponseBody& setAssignments(vector<ListRoleAssignmentsResponseBody::Assignments> && assignments) { DARABONBA_PTR_SET_RVALUE(assignments_, assignments) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRoleAssignmentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRoleAssignmentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRoleAssignmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRoleAssignmentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListRoleAssignmentsResponseBody::Assignments>> assignments_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
