// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleList, roleList_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleList, roleList_);
    };
    ListRoleResponseBody() = default ;
    ListRoleResponseBody(const ListRoleResponseBody &) = default ;
    ListRoleResponseBody(ListRoleResponseBody &&) = default ;
    ListRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoleResponseBody() = default ;
    ListRoleResponseBody& operator=(const ListRoleResponseBody &) = default ;
    ListRoleResponseBody& operator=(ListRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RoleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RoleList& obj) { 
        DARABONBA_PTR_TO_JSON(RoleItem, roleItem_);
      };
      friend void from_json(const Darabonba::Json& j, RoleList& obj) { 
        DARABONBA_PTR_FROM_JSON(RoleItem, roleItem_);
      };
      RoleList() = default ;
      RoleList(const RoleList &) = default ;
      RoleList(RoleList &&) = default ;
      RoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RoleList() = default ;
      RoleList& operator=(const RoleList &) = default ;
      RoleList& operator=(RoleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RoleItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoleItem& obj) { 
          DARABONBA_PTR_TO_JSON(ActionList, actionList_);
          DARABONBA_PTR_TO_JSON(Role, role_);
        };
        friend void from_json(const Darabonba::Json& j, RoleItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionList, actionList_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
        };
        RoleItem() = default ;
        RoleItem(const RoleItem &) = default ;
        RoleItem(RoleItem &&) = default ;
        RoleItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoleItem() = default ;
        RoleItem& operator=(const RoleItem &) = default ;
        RoleItem& operator=(RoleItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Role : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Role& obj) { 
            DARABONBA_PTR_TO_JSON(AdminUserId, adminUserId_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          };
          friend void from_json(const Darabonba::Json& j, Role& obj) { 
            DARABONBA_PTR_FROM_JSON(AdminUserId, adminUserId_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          };
          Role() = default ;
          Role(const Role &) = default ;
          Role(Role &&) = default ;
          Role(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Role() = default ;
          Role& operator=(const Role &) = default ;
          Role& operator=(Role &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->adminUserId_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->isDefault_ == nullptr && this->name_ == nullptr && this->updateTime_ == nullptr; };
          // adminUserId Field Functions 
          bool hasAdminUserId() const { return this->adminUserId_ != nullptr;};
          void deleteAdminUserId() { this->adminUserId_ = nullptr;};
          inline string getAdminUserId() const { DARABONBA_PTR_GET_DEFAULT(adminUserId_, "") };
          inline Role& setAdminUserId(string adminUserId) { DARABONBA_PTR_SET_VALUE(adminUserId_, adminUserId) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline Role& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
          inline Role& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // isDefault Field Functions 
          bool hasIsDefault() const { return this->isDefault_ != nullptr;};
          void deleteIsDefault() { this->isDefault_ = nullptr;};
          inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
          inline Role& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Role& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // updateTime Field Functions 
          bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
          void deleteUpdateTime() { this->updateTime_ = nullptr;};
          inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
          inline Role& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        protected:
          shared_ptr<string> adminUserId_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<int32_t> id_ {};
          shared_ptr<bool> isDefault_ {};
          shared_ptr<string> name_ {};
          shared_ptr<int64_t> updateTime_ {};
        };

        class ActionList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ActionList& obj) { 
            DARABONBA_PTR_TO_JSON(Action, action_);
          };
          friend void from_json(const Darabonba::Json& j, ActionList& obj) { 
            DARABONBA_PTR_FROM_JSON(Action, action_);
          };
          ActionList() = default ;
          ActionList(const ActionList &) = default ;
          ActionList(ActionList &&) = default ;
          ActionList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ActionList() = default ;
          ActionList& operator=(const ActionList &) = default ;
          ActionList& operator=(ActionList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Action : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Action& obj) { 
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(GroupId, groupId_);
              DARABONBA_PTR_TO_JSON(Name, name_);
            };
            friend void from_json(const Darabonba::Json& j, Action& obj) { 
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
            };
            Action() = default ;
            Action(const Action &) = default ;
            Action(Action &&) = default ;
            Action(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Action() = default ;
            Action& operator=(const Action &) = default ;
            Action& operator=(Action &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->groupId_ == nullptr && this->name_ == nullptr; };
            // code Field Functions 
            bool hasCode() const { return this->code_ != nullptr;};
            void deleteCode() { this->code_ = nullptr;};
            inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
            inline Action& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline Action& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // groupId Field Functions 
            bool hasGroupId() const { return this->groupId_ != nullptr;};
            void deleteGroupId() { this->groupId_ = nullptr;};
            inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
            inline Action& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Action& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            shared_ptr<string> code_ {};
            shared_ptr<string> description_ {};
            shared_ptr<string> groupId_ {};
            shared_ptr<string> name_ {};
          };

          virtual bool empty() const override { return this->action_ == nullptr; };
          // action Field Functions 
          bool hasAction() const { return this->action_ != nullptr;};
          void deleteAction() { this->action_ = nullptr;};
          inline const vector<ActionList::Action> & getAction() const { DARABONBA_PTR_GET_CONST(action_, vector<ActionList::Action>) };
          inline vector<ActionList::Action> getAction() { DARABONBA_PTR_GET(action_, vector<ActionList::Action>) };
          inline ActionList& setAction(const vector<ActionList::Action> & action) { DARABONBA_PTR_SET_VALUE(action_, action) };
          inline ActionList& setAction(vector<ActionList::Action> && action) { DARABONBA_PTR_SET_RVALUE(action_, action) };


        protected:
          shared_ptr<vector<ActionList::Action>> action_ {};
        };

        virtual bool empty() const override { return this->actionList_ == nullptr
        && this->role_ == nullptr; };
        // actionList Field Functions 
        bool hasActionList() const { return this->actionList_ != nullptr;};
        void deleteActionList() { this->actionList_ = nullptr;};
        inline const RoleItem::ActionList & getActionList() const { DARABONBA_PTR_GET_CONST(actionList_, RoleItem::ActionList) };
        inline RoleItem::ActionList getActionList() { DARABONBA_PTR_GET(actionList_, RoleItem::ActionList) };
        inline RoleItem& setActionList(const RoleItem::ActionList & actionList) { DARABONBA_PTR_SET_VALUE(actionList_, actionList) };
        inline RoleItem& setActionList(RoleItem::ActionList && actionList) { DARABONBA_PTR_SET_RVALUE(actionList_, actionList) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline const RoleItem::Role & getRole() const { DARABONBA_PTR_GET_CONST(role_, RoleItem::Role) };
        inline RoleItem::Role getRole() { DARABONBA_PTR_GET(role_, RoleItem::Role) };
        inline RoleItem& setRole(const RoleItem::Role & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
        inline RoleItem& setRole(RoleItem::Role && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


      protected:
        shared_ptr<RoleItem::ActionList> actionList_ {};
        shared_ptr<RoleItem::Role> role_ {};
      };

      virtual bool empty() const override { return this->roleItem_ == nullptr; };
      // roleItem Field Functions 
      bool hasRoleItem() const { return this->roleItem_ != nullptr;};
      void deleteRoleItem() { this->roleItem_ = nullptr;};
      inline const vector<RoleList::RoleItem> & getRoleItem() const { DARABONBA_PTR_GET_CONST(roleItem_, vector<RoleList::RoleItem>) };
      inline vector<RoleList::RoleItem> getRoleItem() { DARABONBA_PTR_GET(roleItem_, vector<RoleList::RoleItem>) };
      inline RoleList& setRoleItem(const vector<RoleList::RoleItem> & roleItem) { DARABONBA_PTR_SET_VALUE(roleItem_, roleItem) };
      inline RoleList& setRoleItem(vector<RoleList::RoleItem> && roleItem) { DARABONBA_PTR_SET_RVALUE(roleItem_, roleItem) };


    protected:
      shared_ptr<vector<RoleList::RoleItem>> roleItem_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->roleList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListRoleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRoleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleList Field Functions 
    bool hasRoleList() const { return this->roleList_ != nullptr;};
    void deleteRoleList() { this->roleList_ = nullptr;};
    inline const ListRoleResponseBody::RoleList & getRoleList() const { DARABONBA_PTR_GET_CONST(roleList_, ListRoleResponseBody::RoleList) };
    inline ListRoleResponseBody::RoleList getRoleList() { DARABONBA_PTR_GET(roleList_, ListRoleResponseBody::RoleList) };
    inline ListRoleResponseBody& setRoleList(const ListRoleResponseBody::RoleList & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
    inline ListRoleResponseBody& setRoleList(ListRoleResponseBody::RoleList && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<ListRoleResponseBody::RoleList> roleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
