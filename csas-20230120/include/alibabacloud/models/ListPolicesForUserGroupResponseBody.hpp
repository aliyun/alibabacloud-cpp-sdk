// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICESFORUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICESFORUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPolicesForUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicesForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicesForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
    };
    ListPolicesForUserGroupResponseBody() = default ;
    ListPolicesForUserGroupResponseBody(const ListPolicesForUserGroupResponseBody &) = default ;
    ListPolicesForUserGroupResponseBody(ListPolicesForUserGroupResponseBody &&) = default ;
    ListPolicesForUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicesForUserGroupResponseBody() = default ;
    ListPolicesForUserGroupResponseBody& operator=(const ListPolicesForUserGroupResponseBody &) = default ;
    ListPolicesForUserGroupResponseBody& operator=(ListPolicesForUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserGroups& obj) { 
        DARABONBA_PTR_TO_JSON(Polices, polices_);
        DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, UserGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(Polices, polices_);
        DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
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
      class Polices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Polices& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        };
        friend void from_json(const Darabonba::Json& j, Polices& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        };
        Polices() = default ;
        Polices(const Polices &) = default ;
        Polices(Polices &&) = default ;
        Polices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Polices() = default ;
        Polices& operator=(const Polices &) = default ;
        Polices& operator=(Polices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->policyId_ == nullptr && this->policyType_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Polices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // policyId Field Functions 
        bool hasPolicyId() const { return this->policyId_ != nullptr;};
        void deletePolicyId() { this->policyId_ = nullptr;};
        inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
        inline Polices& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
        inline Polices& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> policyId_ {};
        shared_ptr<string> policyType_ {};
      };

      virtual bool empty() const override { return this->polices_ == nullptr
        && this->userGroupId_ == nullptr; };
      // polices Field Functions 
      bool hasPolices() const { return this->polices_ != nullptr;};
      void deletePolices() { this->polices_ = nullptr;};
      inline const vector<UserGroups::Polices> & getPolices() const { DARABONBA_PTR_GET_CONST(polices_, vector<UserGroups::Polices>) };
      inline vector<UserGroups::Polices> getPolices() { DARABONBA_PTR_GET(polices_, vector<UserGroups::Polices>) };
      inline UserGroups& setPolices(const vector<UserGroups::Polices> & polices) { DARABONBA_PTR_SET_VALUE(polices_, polices) };
      inline UserGroups& setPolices(vector<UserGroups::Polices> && polices) { DARABONBA_PTR_SET_RVALUE(polices_, polices) };


      // userGroupId Field Functions 
      bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
      void deleteUserGroupId() { this->userGroupId_ = nullptr;};
      inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
      inline UserGroups& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    protected:
      shared_ptr<vector<UserGroups::Polices>> polices_ {};
      shared_ptr<string> userGroupId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userGroups_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolicesForUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<ListPolicesForUserGroupResponseBody::UserGroups> & getUserGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<ListPolicesForUserGroupResponseBody::UserGroups>) };
    inline vector<ListPolicesForUserGroupResponseBody::UserGroups> getUserGroups() { DARABONBA_PTR_GET(userGroups_, vector<ListPolicesForUserGroupResponseBody::UserGroups>) };
    inline ListPolicesForUserGroupResponseBody& setUserGroups(const vector<ListPolicesForUserGroupResponseBody::UserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline ListPolicesForUserGroupResponseBody& setUserGroups(vector<ListPolicesForUserGroupResponseBody::UserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListPolicesForUserGroupResponseBody::UserGroups>> userGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
