// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREVIEWRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREVIEWRULERESPONSEBODY_HPP_
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
  class GetReviewRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReviewRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReviewRule, reviewRule_);
    };
    friend void from_json(const Darabonba::Json& j, GetReviewRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReviewRule, reviewRule_);
    };
    GetReviewRuleResponseBody() = default ;
    GetReviewRuleResponseBody(const GetReviewRuleResponseBody &) = default ;
    GetReviewRuleResponseBody(GetReviewRuleResponseBody &&) = default ;
    GetReviewRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReviewRuleResponseBody() = default ;
    GetReviewRuleResponseBody& operator=(const GetReviewRuleResponseBody &) = default ;
    GetReviewRuleResponseBody& operator=(GetReviewRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReviewRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReviewRule& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Principals, principals_);
        DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_TO_JSON(Projects, projects_);
        DARABONBA_PTR_TO_JSON(ReviewRuleId, reviewRuleId_);
        DARABONBA_PTR_TO_JSON(ReviewRuleName, reviewRuleName_);
        DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      };
      friend void from_json(const Darabonba::Json& j, ReviewRule& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Principals, principals_);
        DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_FROM_JSON(Projects, projects_);
        DARABONBA_PTR_FROM_JSON(ReviewRuleId, reviewRuleId_);
        DARABONBA_PTR_FROM_JSON(ReviewRuleName, reviewRuleName_);
        DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      };
      ReviewRule() = default ;
      ReviewRule(const ReviewRule &) = default ;
      ReviewRule(ReviewRule &&) = default ;
      ReviewRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReviewRule() = default ;
      ReviewRule& operator=(const ReviewRule &) = default ;
      ReviewRule& operator=(ReviewRule &&) = default ;
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
        // The project description.
        shared_ptr<string> description_ {};
        // Specifies whether the project is the default project. Valid values:
        // - **true**: Yes.
        // 
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
        // If the value of PrincipalType is RamUser, the returned value is the RAM user ID of the associated auditor. If the value of PrincipalType is RamRole, the returned value is the ARN of the RAM role of the associated auditor.
        shared_ptr<string> principalId_ {};
        // The display name of the RAM user or RAM role of the associated auditor.
        shared_ptr<string> principalName_ {};
        // The auditor type. Valid values:
        // 
        // - **RamUser**: Resource Access Management (RAM) user.
        // 
        // - **RamRole**: RAM role.
        shared_ptr<string> principalType_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->principals_ == nullptr && this->projectIds_ == nullptr && this->projects_ == nullptr && this->reviewRuleId_ == nullptr && this->reviewRuleName_ == nullptr
        && this->scopeType_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ReviewRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // principals Field Functions 
      bool hasPrincipals() const { return this->principals_ != nullptr;};
      void deletePrincipals() { this->principals_ = nullptr;};
      inline const vector<ReviewRule::Principals> & getPrincipals() const { DARABONBA_PTR_GET_CONST(principals_, vector<ReviewRule::Principals>) };
      inline vector<ReviewRule::Principals> getPrincipals() { DARABONBA_PTR_GET(principals_, vector<ReviewRule::Principals>) };
      inline ReviewRule& setPrincipals(const vector<ReviewRule::Principals> & principals) { DARABONBA_PTR_SET_VALUE(principals_, principals) };
      inline ReviewRule& setPrincipals(vector<ReviewRule::Principals> && principals) { DARABONBA_PTR_SET_RVALUE(principals_, principals) };


      // projectIds Field Functions 
      bool hasProjectIds() const { return this->projectIds_ != nullptr;};
      void deleteProjectIds() { this->projectIds_ = nullptr;};
      inline const vector<int64_t> & getProjectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<int64_t>) };
      inline vector<int64_t> getProjectIds() { DARABONBA_PTR_GET(projectIds_, vector<int64_t>) };
      inline ReviewRule& setProjectIds(const vector<int64_t> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
      inline ReviewRule& setProjectIds(vector<int64_t> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


      // projects Field Functions 
      bool hasProjects() const { return this->projects_ != nullptr;};
      void deleteProjects() { this->projects_ = nullptr;};
      inline const vector<ReviewRule::Projects> & getProjects() const { DARABONBA_PTR_GET_CONST(projects_, vector<ReviewRule::Projects>) };
      inline vector<ReviewRule::Projects> getProjects() { DARABONBA_PTR_GET(projects_, vector<ReviewRule::Projects>) };
      inline ReviewRule& setProjects(const vector<ReviewRule::Projects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
      inline ReviewRule& setProjects(vector<ReviewRule::Projects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


      // reviewRuleId Field Functions 
      bool hasReviewRuleId() const { return this->reviewRuleId_ != nullptr;};
      void deleteReviewRuleId() { this->reviewRuleId_ = nullptr;};
      inline string getReviewRuleId() const { DARABONBA_PTR_GET_DEFAULT(reviewRuleId_, "") };
      inline ReviewRule& setReviewRuleId(string reviewRuleId) { DARABONBA_PTR_SET_VALUE(reviewRuleId_, reviewRuleId) };


      // reviewRuleName Field Functions 
      bool hasReviewRuleName() const { return this->reviewRuleName_ != nullptr;};
      void deleteReviewRuleName() { this->reviewRuleName_ = nullptr;};
      inline string getReviewRuleName() const { DARABONBA_PTR_GET_DEFAULT(reviewRuleName_, "") };
      inline ReviewRule& setReviewRuleName(string reviewRuleName) { DARABONBA_PTR_SET_VALUE(reviewRuleName_, reviewRuleName) };


      // scopeType Field Functions 
      bool hasScopeType() const { return this->scopeType_ != nullptr;};
      void deleteScopeType() { this->scopeType_ = nullptr;};
      inline int32_t getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, 0) };
      inline ReviewRule& setScopeType(int32_t scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    protected:
      // The description of the audit policy.
      shared_ptr<string> description_ {};
      // The auditor information associated with the audit policy.
      shared_ptr<vector<ReviewRule::Principals>> principals_ {};
      // The array of project IDs specified as auditable in the audit policy. This parameter is valid only when the value of ScopeType is 2.
      shared_ptr<vector<int64_t>> projectIds_ {};
      // The auditable project information.
      shared_ptr<vector<ReviewRule::Projects>> projects_ {};
      // The audit policy ID.
      shared_ptr<string> reviewRuleId_ {};
      // The name of the audit policy.
      shared_ptr<string> reviewRuleName_ {};
      // The type of the auditable asset scope rule specified in the audit policy. Valid values:
      // 
      // - **1**: All projects.
      // 
      // - **2**: Specified projects.
      shared_ptr<int32_t> scopeType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->reviewRule_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetReviewRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reviewRule Field Functions 
    bool hasReviewRule() const { return this->reviewRule_ != nullptr;};
    void deleteReviewRule() { this->reviewRule_ = nullptr;};
    inline const GetReviewRuleResponseBody::ReviewRule & getReviewRule() const { DARABONBA_PTR_GET_CONST(reviewRule_, GetReviewRuleResponseBody::ReviewRule) };
    inline GetReviewRuleResponseBody::ReviewRule getReviewRule() { DARABONBA_PTR_GET(reviewRule_, GetReviewRuleResponseBody::ReviewRule) };
    inline GetReviewRuleResponseBody& setReviewRule(const GetReviewRuleResponseBody::ReviewRule & reviewRule) { DARABONBA_PTR_SET_VALUE(reviewRule_, reviewRule) };
    inline GetReviewRuleResponseBody& setReviewRule(GetReviewRuleResponseBody::ReviewRule && reviewRule) { DARABONBA_PTR_SET_RVALUE(reviewRule_, reviewRule) };


  protected:
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // The audit policy information.
    shared_ptr<GetReviewRuleResponseBody::ReviewRule> reviewRule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
