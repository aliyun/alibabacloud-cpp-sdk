// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTAUTHORIZATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTAUTHORIZATIONRESPONSEBODY_HPP_
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
  class GetProjectAuthorizationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectAuthorizationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectAuthorization, projectAuthorization_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectAuthorizationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectAuthorization, projectAuthorization_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProjectAuthorizationResponseBody() = default ;
    GetProjectAuthorizationResponseBody(const GetProjectAuthorizationResponseBody &) = default ;
    GetProjectAuthorizationResponseBody(GetProjectAuthorizationResponseBody &&) = default ;
    GetProjectAuthorizationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectAuthorizationResponseBody() = default ;
    GetProjectAuthorizationResponseBody& operator=(const GetProjectAuthorizationResponseBody &) = default ;
    GetProjectAuthorizationResponseBody& operator=(GetProjectAuthorizationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectAuthorization : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectAuthorization& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationId, authorizationId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Principals, principals_);
        DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_TO_JSON(Projects, projects_);
        DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectAuthorization& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationId, authorizationId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Principals, principals_);
        DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_FROM_JSON(Projects, projects_);
        DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      };
      ProjectAuthorization() = default ;
      ProjectAuthorization(const ProjectAuthorization &) = default ;
      ProjectAuthorization(ProjectAuthorization &&) = default ;
      ProjectAuthorization(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectAuthorization() = default ;
      ProjectAuthorization& operator=(const ProjectAuthorization &) = default ;
      ProjectAuthorization& operator=(ProjectAuthorization &&) = default ;
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
        // Indicates whether the project is the default project. Valid values:
        // 
        // - **true**: Yes.
        // - **false**: No.
        shared_ptr<bool> isDefault_ {};
        // The project name.
        shared_ptr<string> name_ {};
        // The project ID.
        shared_ptr<int64_t> projectId_ {};
      };

      class Principals : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Principals& obj) { 
          DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
          DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
          DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
        };
        friend void from_json(const Darabonba::Json& j, Principals& obj) { 
          DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
          DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
          DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
        };
        Principals() = default ;
        Principals(const Principals &) = default ;
        Principals(Principals &&) = default ;
        Principals(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Principals() = default ;
        Principals& operator=(const Principals &) = default ;
        Principals& operator=(Principals &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->principalId_ == nullptr
        && this->principalName_ == nullptr && this->principalType_ == nullptr; };
        // principalId Field Functions 
        bool hasPrincipalId() const { return this->principalId_ != nullptr;};
        void deletePrincipalId() { this->principalId_ = nullptr;};
        inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
        inline Principals& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


        // principalName Field Functions 
        bool hasPrincipalName() const { return this->principalName_ != nullptr;};
        void deletePrincipalName() { this->principalName_ = nullptr;};
        inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
        inline Principals& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


        // principalType Field Functions 
        bool hasPrincipalType() const { return this->principalType_ != nullptr;};
        void deletePrincipalType() { this->principalType_ = nullptr;};
        inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
        inline Principals& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


      protected:
        // The ID of the RAM user specified as the project administrator when PrincipalType is RamUser. The ARN of the RAM role specified as the project administrator when PrincipalType is RamRole.
        shared_ptr<string> principalId_ {};
        // The display name of the RAM user or RAM role of the project administrator.
        shared_ptr<string> principalName_ {};
        // The type of the project administrator. Valid values:
        // 
        // - **RamUser**: Resource Access Management (RAM) user.
        // 
        // - **RamRole**: RAM role.
        shared_ptr<string> principalType_ {};
      };

      virtual bool empty() const override { return this->authorizationId_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->principals_ == nullptr && this->projectIds_ == nullptr && this->projects_ == nullptr
        && this->scopeType_ == nullptr; };
      // authorizationId Field Functions 
      bool hasAuthorizationId() const { return this->authorizationId_ != nullptr;};
      void deleteAuthorizationId() { this->authorizationId_ = nullptr;};
      inline int64_t getAuthorizationId() const { DARABONBA_PTR_GET_DEFAULT(authorizationId_, 0L) };
      inline ProjectAuthorization& setAuthorizationId(int64_t authorizationId) { DARABONBA_PTR_SET_VALUE(authorizationId_, authorizationId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProjectAuthorization& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ProjectAuthorization& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // principals Field Functions 
      bool hasPrincipals() const { return this->principals_ != nullptr;};
      void deletePrincipals() { this->principals_ = nullptr;};
      inline const vector<ProjectAuthorization::Principals> & getPrincipals() const { DARABONBA_PTR_GET_CONST(principals_, vector<ProjectAuthorization::Principals>) };
      inline vector<ProjectAuthorization::Principals> getPrincipals() { DARABONBA_PTR_GET(principals_, vector<ProjectAuthorization::Principals>) };
      inline ProjectAuthorization& setPrincipals(const vector<ProjectAuthorization::Principals> & principals) { DARABONBA_PTR_SET_VALUE(principals_, principals) };
      inline ProjectAuthorization& setPrincipals(vector<ProjectAuthorization::Principals> && principals) { DARABONBA_PTR_SET_RVALUE(principals_, principals) };


      // projectIds Field Functions 
      bool hasProjectIds() const { return this->projectIds_ != nullptr;};
      void deleteProjectIds() { this->projectIds_ = nullptr;};
      inline const vector<int64_t> & getProjectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<int64_t>) };
      inline vector<int64_t> getProjectIds() { DARABONBA_PTR_GET(projectIds_, vector<int64_t>) };
      inline ProjectAuthorization& setProjectIds(const vector<int64_t> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
      inline ProjectAuthorization& setProjectIds(vector<int64_t> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


      // projects Field Functions 
      bool hasProjects() const { return this->projects_ != nullptr;};
      void deleteProjects() { this->projects_ = nullptr;};
      inline const vector<ProjectAuthorization::Projects> & getProjects() const { DARABONBA_PTR_GET_CONST(projects_, vector<ProjectAuthorization::Projects>) };
      inline vector<ProjectAuthorization::Projects> getProjects() { DARABONBA_PTR_GET(projects_, vector<ProjectAuthorization::Projects>) };
      inline ProjectAuthorization& setProjects(const vector<ProjectAuthorization::Projects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
      inline ProjectAuthorization& setProjects(vector<ProjectAuthorization::Projects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


      // scopeType Field Functions 
      bool hasScopeType() const { return this->scopeType_ != nullptr;};
      void deleteScopeType() { this->scopeType_ = nullptr;};
      inline int32_t getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, 0) };
      inline ProjectAuthorization& setScopeType(int32_t scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    protected:
      // The project authorization ID.
      shared_ptr<int64_t> authorizationId_ {};
      // The description of the project authorization.
      shared_ptr<string> description_ {};
      // The project authorization name.
      shared_ptr<string> name_ {};
      // The information about the project administrators specified in the project authorization.
      shared_ptr<vector<ProjectAuthorization::Principals>> principals_ {};
      // The list of project IDs associated with the project authorization.
      shared_ptr<vector<int64_t>> projectIds_ {};
      // The information about the projects associated with the project authorization.
      shared_ptr<vector<ProjectAuthorization::Projects>> projects_ {};
      // The scope of manageable assets associated with the authorization. Valid values:
      // 
      // - **1**: All projects.
      // 
      // - **2**: Specified projects.
      shared_ptr<int32_t> scopeType_ {};
    };

    virtual bool empty() const override { return this->projectAuthorization_ == nullptr
        && this->requestId_ == nullptr; };
    // projectAuthorization Field Functions 
    bool hasProjectAuthorization() const { return this->projectAuthorization_ != nullptr;};
    void deleteProjectAuthorization() { this->projectAuthorization_ = nullptr;};
    inline const GetProjectAuthorizationResponseBody::ProjectAuthorization & getProjectAuthorization() const { DARABONBA_PTR_GET_CONST(projectAuthorization_, GetProjectAuthorizationResponseBody::ProjectAuthorization) };
    inline GetProjectAuthorizationResponseBody::ProjectAuthorization getProjectAuthorization() { DARABONBA_PTR_GET(projectAuthorization_, GetProjectAuthorizationResponseBody::ProjectAuthorization) };
    inline GetProjectAuthorizationResponseBody& setProjectAuthorization(const GetProjectAuthorizationResponseBody::ProjectAuthorization & projectAuthorization) { DARABONBA_PTR_SET_VALUE(projectAuthorization_, projectAuthorization) };
    inline GetProjectAuthorizationResponseBody& setProjectAuthorization(GetProjectAuthorizationResponseBody::ProjectAuthorization && projectAuthorization) { DARABONBA_PTR_SET_RVALUE(projectAuthorization_, projectAuthorization) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectAuthorizationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the project authorization.
    shared_ptr<GetProjectAuthorizationResponseBody::ProjectAuthorization> projectAuthorization_ {};
    // The request ID generated by Alibaba Cloud for this request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
