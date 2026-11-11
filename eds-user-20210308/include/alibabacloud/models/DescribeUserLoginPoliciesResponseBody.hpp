// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERLOGINPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERLOGINPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeUserLoginPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserLoginPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserLoginPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserLoginPoliciesResponseBody() = default ;
    DescribeUserLoginPoliciesResponseBody(const DescribeUserLoginPoliciesResponseBody &) = default ;
    DescribeUserLoginPoliciesResponseBody(DescribeUserLoginPoliciesResponseBody &&) = default ;
    DescribeUserLoginPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserLoginPoliciesResponseBody() = default ;
    DescribeUserLoginPoliciesResponseBody& operator=(const DescribeUserLoginPoliciesResponseBody &) = default ;
    DescribeUserLoginPoliciesResponseBody& operator=(DescribeUserLoginPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
      };
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
      };
      Policies() = default ;
      Policies(const Policies &) = default ;
      Policies(Policies &&) = default ;
      Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policies() = default ;
      Policies& operator=(const Policies &) = default ;
      Policies& operator=(Policies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserGroups& obj) { 
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        };
        friend void from_json(const Darabonba::Json& j, UserGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        };
        UserGroups() = default ;
        UserGroups(const UserGroups &) = default ;
        UserGroups(UserGroups &&) = default ;
        UserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserGroups() = default ;
        UserGroups& operator=(const UserGroups &) = default ;
        UserGroups& operator=(UserGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupName_ == nullptr; };
        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline UserGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline UserGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      protected:
        // The user group ID.
        shared_ptr<string> groupId_ {};
        // The user group name.
        shared_ptr<string> groupName_ {};
      };

      virtual bool empty() const override { return this->name_ == nullptr
        && this->policyId_ == nullptr && this->userGroups_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Policies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Policies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // userGroups Field Functions 
      bool hasUserGroups() const { return this->userGroups_ != nullptr;};
      void deleteUserGroups() { this->userGroups_ = nullptr;};
      inline const vector<Policies::UserGroups> & getUserGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<Policies::UserGroups>) };
      inline vector<Policies::UserGroups> getUserGroups() { DARABONBA_PTR_GET(userGroups_, vector<Policies::UserGroups>) };
      inline Policies& setUserGroups(const vector<Policies::UserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
      inline Policies& setUserGroups(vector<Policies::UserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


    protected:
      // The policy name.
      shared_ptr<string> name_ {};
      // The policy ID.
      shared_ptr<string> policyId_ {};
      // The associated user group information.
      shared_ptr<vector<Policies::UserGroups>> userGroups_ {};
    };

    virtual bool empty() const override { return this->policies_ == nullptr
        && this->requestId_ == nullptr; };
    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<DescribeUserLoginPoliciesResponseBody::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<DescribeUserLoginPoliciesResponseBody::Policies>) };
    inline vector<DescribeUserLoginPoliciesResponseBody::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<DescribeUserLoginPoliciesResponseBody::Policies>) };
    inline DescribeUserLoginPoliciesResponseBody& setPolicies(const vector<DescribeUserLoginPoliciesResponseBody::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline DescribeUserLoginPoliciesResponseBody& setPolicies(vector<DescribeUserLoginPoliciesResponseBody::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserLoginPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of policies.
    shared_ptr<vector<DescribeUserLoginPoliciesResponseBody::Policies>> policies_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
