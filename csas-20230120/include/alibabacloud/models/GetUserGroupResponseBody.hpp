// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERGROUPRESPONSEBODY_HPP_
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
  class GetUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
    };
    GetUserGroupResponseBody() = default ;
    GetUserGroupResponseBody(const GetUserGroupResponseBody &) = default ;
    GetUserGroupResponseBody(GetUserGroupResponseBody &&) = default ;
    GetUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserGroupResponseBody() = default ;
    GetUserGroupResponseBody& operator=(const GetUserGroupResponseBody &) = default ;
    GetUserGroupResponseBody& operator=(GetUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserGroup& obj) { 
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, UserGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      };
      UserGroup() = default ;
      UserGroup(const UserGroup &) = default ;
      UserGroup(UserGroup &&) = default ;
      UserGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserGroup() = default ;
      UserGroup& operator=(const UserGroup &) = default ;
      UserGroup& operator=(UserGroup &&) = default ;
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
      inline const vector<UserGroup::Attributes> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<UserGroup::Attributes>) };
      inline vector<UserGroup::Attributes> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<UserGroup::Attributes>) };
      inline UserGroup& setAttributes(const vector<UserGroup::Attributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline UserGroup& setAttributes(vector<UserGroup::Attributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline UserGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UserGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UserGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // userGroupId Field Functions 
      bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
      void deleteUserGroupId() { this->userGroupId_ = nullptr;};
      inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
      inline UserGroup& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    protected:
      shared_ptr<vector<UserGroup::Attributes>> attributes_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> userGroupId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userGroup_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userGroup Field Functions 
    bool hasUserGroup() const { return this->userGroup_ != nullptr;};
    void deleteUserGroup() { this->userGroup_ = nullptr;};
    inline const GetUserGroupResponseBody::UserGroup & getUserGroup() const { DARABONBA_PTR_GET_CONST(userGroup_, GetUserGroupResponseBody::UserGroup) };
    inline GetUserGroupResponseBody::UserGroup getUserGroup() { DARABONBA_PTR_GET(userGroup_, GetUserGroupResponseBody::UserGroup) };
    inline GetUserGroupResponseBody& setUserGroup(const GetUserGroupResponseBody::UserGroup & userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };
    inline GetUserGroupResponseBody& setUserGroup(GetUserGroupResponseBody::UserGroup && userGroup) { DARABONBA_PTR_SET_RVALUE(userGroup_, userGroup) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetUserGroupResponseBody::UserGroup> userGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
