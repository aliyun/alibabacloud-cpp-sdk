// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODY_HPP_
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
  class ListUserGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
    };
    ListUserGroupsResponseBody() = default ;
    ListUserGroupsResponseBody(const ListUserGroupsResponseBody &) = default ;
    ListUserGroupsResponseBody(ListUserGroupsResponseBody &&) = default ;
    ListUserGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsResponseBody() = default ;
    ListUserGroupsResponseBody& operator=(const ListUserGroupsResponseBody &) = default ;
    ListUserGroupsResponseBody& operator=(ListUserGroupsResponseBody &&) = default ;
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
        // The identity provider ID for the user group. This parameter appears only when the user group type is **department**.
        shared_ptr<int32_t> idpId_ {};
        // The relation for the user group. Valid values:
        // 
        // - **Equal**: Equal to.
        // 
        // - **Unequal**: Not equal to.
        shared_ptr<string> relation_ {};
        // The type of the user group. Valid values:
        // 
        // - **username**: Username.
        // 
        // - **department**: Department.
        // 
        // - **email**: Email address.
        // 
        // - **telephone**: Phone number.
        shared_ptr<string> userGroupType_ {};
        // The value of the user group property.
        // 
        // - If the user group type is **username**, this is the username. The value must be 1 to 128 characters in length. It can contain letters, digits, periods (.), underscores (_), and hyphens (-). It supports both uppercase and lowercase letters and Chinese characters.
        // 
        // - If the user group type is **department**, this is the department name. Example: OU=Department 1,OU=SASE DingTalk.
        // 
        // - If the user group type is **email**, this is the email address. Example: username\\@example.com.
        // 
        // - If the user group type is **telephone**, this is the phone number. Example: 13900001234.
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
      // A collection of user group properties. Multiple properties are combined with OR logic.
      shared_ptr<vector<UserGroups::Attributes>> attributes_ {};
      // The time when the user group was created.
      shared_ptr<string> createTime_ {};
      // A description of the user group.
      shared_ptr<string> description_ {};
      // The name of the user group.
      shared_ptr<string> name_ {};
      // The ID of the user group.
      shared_ptr<string> userGroupId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalNum_ == nullptr && this->userGroups_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListUserGroupsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<ListUserGroupsResponseBody::UserGroups> & getUserGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<ListUserGroupsResponseBody::UserGroups>) };
    inline vector<ListUserGroupsResponseBody::UserGroups> getUserGroups() { DARABONBA_PTR_GET(userGroups_, vector<ListUserGroupsResponseBody::UserGroups>) };
    inline ListUserGroupsResponseBody& setUserGroups(const vector<ListUserGroupsResponseBody::UserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline ListUserGroupsResponseBody& setUserGroups(vector<ListUserGroupsResponseBody::UserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of user groups.
    shared_ptr<int32_t> totalNum_ {};
    // A list of user groups.
    shared_ptr<vector<ListUserGroupsResponseBody::UserGroups>> userGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
