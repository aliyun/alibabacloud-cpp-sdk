// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSFORPRIVATEACCESSPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSFORPRIVATEACCESSPOLICYRESPONSEBODY_HPP_
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
  class ListUserGroupsForPrivateAccessPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsForPrivateAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Polices, polices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsForPrivateAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Polices, polices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUserGroupsForPrivateAccessPolicyResponseBody() = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBody(const ListUserGroupsForPrivateAccessPolicyResponseBody &) = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBody(ListUserGroupsForPrivateAccessPolicyResponseBody &&) = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsForPrivateAccessPolicyResponseBody() = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBody& operator=(const ListUserGroupsForPrivateAccessPolicyResponseBody &) = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBody& operator=(ListUserGroupsForPrivateAccessPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Polices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Polices& obj) { 
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
      };
      friend void from_json(const Darabonba::Json& j, Polices& obj) { 
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
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
      class UserGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserGroups& obj) { 
          DARABONBA_PTR_TO_JSON(Attributes, attributes_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, UserGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
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
        class Attributes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Attributes& obj) { 
            DARABONBA_PTR_TO_JSON(IdpId, idpId_);
            DARABONBA_PTR_TO_JSON(Relation, relation_);
            DARABONBA_PTR_TO_JSON(UserGroupType, userGroupType_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Attributes& obj) { 
            DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
            DARABONBA_PTR_FROM_JSON(Relation, relation_);
            DARABONBA_PTR_FROM_JSON(UserGroupType, userGroupType_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Attributes() = default ;
          Attributes(const Attributes &) = default ;
          Attributes(Attributes &&) = default ;
          Attributes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Attributes() = default ;
          Attributes& operator=(const Attributes &) = default ;
          Attributes& operator=(Attributes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->idpId_ == nullptr
        && this->relation_ == nullptr && this->userGroupType_ == nullptr && this->value_ == nullptr; };
          // idpId Field Functions 
          bool hasIdpId() const { return this->idpId_ != nullptr;};
          void deleteIdpId() { this->idpId_ = nullptr;};
          inline int32_t getIdpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, 0) };
          inline Attributes& setIdpId(int32_t idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


          // relation Field Functions 
          bool hasRelation() const { return this->relation_ != nullptr;};
          void deleteRelation() { this->relation_ = nullptr;};
          inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
          inline Attributes& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


          // userGroupType Field Functions 
          bool hasUserGroupType() const { return this->userGroupType_ != nullptr;};
          void deleteUserGroupType() { this->userGroupType_ = nullptr;};
          inline string getUserGroupType() const { DARABONBA_PTR_GET_DEFAULT(userGroupType_, "") };
          inline Attributes& setUserGroupType(string userGroupType) { DARABONBA_PTR_SET_VALUE(userGroupType_, userGroupType) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Attributes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<int32_t> idpId_ {};
          shared_ptr<string> relation_ {};
          shared_ptr<string> userGroupType_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->attributes_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->userGroupId_ == nullptr; };
        // attributes Field Functions 
        bool hasAttributes() const { return this->attributes_ != nullptr;};
        void deleteAttributes() { this->attributes_ = nullptr;};
        inline const vector<UserGroups::Attributes> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<UserGroups::Attributes>) };
        inline vector<UserGroups::Attributes> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<UserGroups::Attributes>) };
        inline UserGroups& setAttributes(const vector<UserGroups::Attributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
        inline UserGroups& setAttributes(vector<UserGroups::Attributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline UserGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline UserGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline UserGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // userGroupId Field Functions 
        bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
        void deleteUserGroupId() { this->userGroupId_ = nullptr;};
        inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
        inline UserGroups& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


      protected:
        shared_ptr<vector<UserGroups::Attributes>> attributes_ {};
        // 用户组创建时间。
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> userGroupId_ {};
      };

      virtual bool empty() const override { return this->policyId_ == nullptr
        && this->userGroups_ == nullptr; };
      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Polices& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // userGroups Field Functions 
      bool hasUserGroups() const { return this->userGroups_ != nullptr;};
      void deleteUserGroups() { this->userGroups_ = nullptr;};
      inline const vector<Polices::UserGroups> & getUserGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<Polices::UserGroups>) };
      inline vector<Polices::UserGroups> getUserGroups() { DARABONBA_PTR_GET(userGroups_, vector<Polices::UserGroups>) };
      inline Polices& setUserGroups(const vector<Polices::UserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
      inline Polices& setUserGroups(vector<Polices::UserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


    protected:
      shared_ptr<string> policyId_ {};
      shared_ptr<vector<Polices::UserGroups>> userGroups_ {};
    };

    virtual bool empty() const override { return this->polices_ == nullptr
        && this->requestId_ == nullptr; };
    // polices Field Functions 
    bool hasPolices() const { return this->polices_ != nullptr;};
    void deletePolices() { this->polices_ = nullptr;};
    inline const vector<ListUserGroupsForPrivateAccessPolicyResponseBody::Polices> & getPolices() const { DARABONBA_PTR_GET_CONST(polices_, vector<ListUserGroupsForPrivateAccessPolicyResponseBody::Polices>) };
    inline vector<ListUserGroupsForPrivateAccessPolicyResponseBody::Polices> getPolices() { DARABONBA_PTR_GET(polices_, vector<ListUserGroupsForPrivateAccessPolicyResponseBody::Polices>) };
    inline ListUserGroupsForPrivateAccessPolicyResponseBody& setPolices(const vector<ListUserGroupsForPrivateAccessPolicyResponseBody::Polices> & polices) { DARABONBA_PTR_SET_VALUE(polices_, polices) };
    inline ListUserGroupsForPrivateAccessPolicyResponseBody& setPolices(vector<ListUserGroupsForPrivateAccessPolicyResponseBody::Polices> && polices) { DARABONBA_PTR_SET_RVALUE(polices_, polices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserGroupsForPrivateAccessPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListUserGroupsForPrivateAccessPolicyResponseBody::Polices>> polices_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
