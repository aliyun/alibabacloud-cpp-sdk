// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(members, members_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(members, members_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListMembersResponseBody() = default ;
    ListMembersResponseBody(const ListMembersResponseBody &) = default ;
    ListMembersResponseBody(ListMembersResponseBody &&) = default ;
    ListMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMembersResponseBody() = default ;
    ListMembersResponseBody& operator=(const ListMembersResponseBody &) = default ;
    ListMembersResponseBody& operator=(ListMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Members : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Members& obj) { 
        DARABONBA_PTR_TO_JSON(actions, actions_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(memberArn, memberArn_);
        DARABONBA_PTR_TO_JSON(roles, roles_);
        DARABONBA_PTR_TO_JSON(userName, userName_);
        DARABONBA_PTR_TO_JSON(userType, userType_);
        DARABONBA_PTR_TO_JSON(visible, visible_);
      };
      friend void from_json(const Darabonba::Json& j, Members& obj) { 
        DARABONBA_PTR_FROM_JSON(actions, actions_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(memberArn, memberArn_);
        DARABONBA_PTR_FROM_JSON(roles, roles_);
        DARABONBA_PTR_FROM_JSON(userName, userName_);
        DARABONBA_PTR_FROM_JSON(userType, userType_);
        DARABONBA_PTR_FROM_JSON(visible, visible_);
      };
      Members() = default ;
      Members(const Members &) = default ;
      Members(Members &&) = default ;
      Members(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Members() = default ;
      Members& operator=(const Members &) = default ;
      Members& operator=(Members &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Roles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Roles& obj) { 
          DARABONBA_PTR_TO_JSON(actions, actions_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(roleArn, roleArn_);
          DARABONBA_PTR_TO_JSON(roleName, roleName_);
        };
        friend void from_json(const Darabonba::Json& j, Roles& obj) { 
          DARABONBA_PTR_FROM_JSON(actions, actions_);
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(roleArn, roleArn_);
          DARABONBA_PTR_FROM_JSON(roleName, roleName_);
        };
        Roles() = default ;
        Roles(const Roles &) = default ;
        Roles(Roles &&) = default ;
        Roles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Roles() = default ;
        Roles& operator=(const Roles &) = default ;
        Roles& operator=(Roles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Actions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Actions& obj) { 
            DARABONBA_PTR_TO_JSON(actionArn, actionArn_);
            DARABONBA_PTR_TO_JSON(actionName, actionName_);
            DARABONBA_PTR_TO_JSON(dependencies, dependencies_);
            DARABONBA_PTR_TO_JSON(description, description_);
            DARABONBA_PTR_TO_JSON(displayName, displayName_);
          };
          friend void from_json(const Darabonba::Json& j, Actions& obj) { 
            DARABONBA_PTR_FROM_JSON(actionArn, actionArn_);
            DARABONBA_PTR_FROM_JSON(actionName, actionName_);
            DARABONBA_PTR_FROM_JSON(dependencies, dependencies_);
            DARABONBA_PTR_FROM_JSON(description, description_);
            DARABONBA_PTR_FROM_JSON(displayName, displayName_);
          };
          Actions() = default ;
          Actions(const Actions &) = default ;
          Actions(Actions &&) = default ;
          Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Actions() = default ;
          Actions& operator=(const Actions &) = default ;
          Actions& operator=(Actions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->actionArn_ == nullptr
        && this->actionName_ == nullptr && this->dependencies_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr; };
          // actionArn Field Functions 
          bool hasActionArn() const { return this->actionArn_ != nullptr;};
          void deleteActionArn() { this->actionArn_ = nullptr;};
          inline string getActionArn() const { DARABONBA_PTR_GET_DEFAULT(actionArn_, "") };
          inline Actions& setActionArn(string actionArn) { DARABONBA_PTR_SET_VALUE(actionArn_, actionArn) };


          // actionName Field Functions 
          bool hasActionName() const { return this->actionName_ != nullptr;};
          void deleteActionName() { this->actionName_ = nullptr;};
          inline string getActionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
          inline Actions& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


          // dependencies Field Functions 
          bool hasDependencies() const { return this->dependencies_ != nullptr;};
          void deleteDependencies() { this->dependencies_ = nullptr;};
          inline const vector<string> & getDependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<string>) };
          inline vector<string> getDependencies() { DARABONBA_PTR_GET(dependencies_, vector<string>) };
          inline Actions& setDependencies(const vector<string> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
          inline Actions& setDependencies(vector<string> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Actions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline Actions& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        protected:
          // 行为 arn。
          shared_ptr<string> actionArn_ {};
          // 权限名称。
          shared_ptr<string> actionName_ {};
          // action 依赖列表。
          shared_ptr<vector<string>> dependencies_ {};
          // action 描述。
          shared_ptr<string> description_ {};
          // 权限展示名称。
          shared_ptr<string> displayName_ {};
        };

        virtual bool empty() const override { return this->actions_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->roleArn_ == nullptr && this->roleName_ == nullptr; };
        // actions Field Functions 
        bool hasActions() const { return this->actions_ != nullptr;};
        void deleteActions() { this->actions_ = nullptr;};
        inline const vector<Roles::Actions> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<Roles::Actions>) };
        inline vector<Roles::Actions> getActions() { DARABONBA_PTR_GET(actions_, vector<Roles::Actions>) };
        inline Roles& setActions(const vector<Roles::Actions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
        inline Roles& setActions(vector<Roles::Actions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Roles& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Roles& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // roleArn Field Functions 
        bool hasRoleArn() const { return this->roleArn_ != nullptr;};
        void deleteRoleArn() { this->roleArn_ = nullptr;};
        inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
        inline Roles& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline Roles& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      protected:
        // 权限列表。
        shared_ptr<vector<Roles::Actions>> actions_ {};
        // 创建时间。
        shared_ptr<int64_t> createTime_ {};
        // 描述。
        shared_ptr<string> description_ {};
        // 角色 arn。
        shared_ptr<string> roleArn_ {};
        // 角色名称。
        shared_ptr<string> roleName_ {};
      };

      class Actions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Actions& obj) { 
          DARABONBA_PTR_TO_JSON(actionArn, actionArn_);
          DARABONBA_PTR_TO_JSON(actionName, actionName_);
          DARABONBA_PTR_TO_JSON(dependencies, dependencies_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(displayName, displayName_);
        };
        friend void from_json(const Darabonba::Json& j, Actions& obj) { 
          DARABONBA_PTR_FROM_JSON(actionArn, actionArn_);
          DARABONBA_PTR_FROM_JSON(actionName, actionName_);
          DARABONBA_PTR_FROM_JSON(dependencies, dependencies_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        };
        Actions() = default ;
        Actions(const Actions &) = default ;
        Actions(Actions &&) = default ;
        Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Actions() = default ;
        Actions& operator=(const Actions &) = default ;
        Actions& operator=(Actions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actionArn_ == nullptr
        && this->actionName_ == nullptr && this->dependencies_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr; };
        // actionArn Field Functions 
        bool hasActionArn() const { return this->actionArn_ != nullptr;};
        void deleteActionArn() { this->actionArn_ = nullptr;};
        inline string getActionArn() const { DARABONBA_PTR_GET_DEFAULT(actionArn_, "") };
        inline Actions& setActionArn(string actionArn) { DARABONBA_PTR_SET_VALUE(actionArn_, actionArn) };


        // actionName Field Functions 
        bool hasActionName() const { return this->actionName_ != nullptr;};
        void deleteActionName() { this->actionName_ = nullptr;};
        inline string getActionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
        inline Actions& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


        // dependencies Field Functions 
        bool hasDependencies() const { return this->dependencies_ != nullptr;};
        void deleteDependencies() { this->dependencies_ = nullptr;};
        inline const vector<string> & getDependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<string>) };
        inline vector<string> getDependencies() { DARABONBA_PTR_GET(dependencies_, vector<string>) };
        inline Actions& setDependencies(const vector<string> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
        inline Actions& setDependencies(vector<string> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Actions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Actions& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      protected:
        // 行为 arn。
        shared_ptr<string> actionArn_ {};
        // 权限名称。
        shared_ptr<string> actionName_ {};
        // action 依赖列表。
        shared_ptr<vector<string>> dependencies_ {};
        // action 描述。
        shared_ptr<string> description_ {};
        // 权限展示名称。
        shared_ptr<string> displayName_ {};
      };

      virtual bool empty() const override { return this->actions_ == nullptr
        && this->createTime_ == nullptr && this->displayName_ == nullptr && this->memberArn_ == nullptr && this->roles_ == nullptr && this->userName_ == nullptr
        && this->userType_ == nullptr && this->visible_ == nullptr; };
      // actions Field Functions 
      bool hasActions() const { return this->actions_ != nullptr;};
      void deleteActions() { this->actions_ = nullptr;};
      inline const vector<Members::Actions> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<Members::Actions>) };
      inline vector<Members::Actions> getActions() { DARABONBA_PTR_GET(actions_, vector<Members::Actions>) };
      inline Members& setActions(const vector<Members::Actions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
      inline Members& setActions(vector<Members::Actions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Members& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Members& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // memberArn Field Functions 
      bool hasMemberArn() const { return this->memberArn_ != nullptr;};
      void deleteMemberArn() { this->memberArn_ = nullptr;};
      inline string getMemberArn() const { DARABONBA_PTR_GET_DEFAULT(memberArn_, "") };
      inline Members& setMemberArn(string memberArn) { DARABONBA_PTR_SET_VALUE(memberArn_, memberArn) };


      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline const vector<Members::Roles> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<Members::Roles>) };
      inline vector<Members::Roles> getRoles() { DARABONBA_PTR_GET(roles_, vector<Members::Roles>) };
      inline Members& setRoles(const vector<Members::Roles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
      inline Members& setRoles(vector<Members::Roles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Members& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
      inline Members& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      // visible Field Functions 
      bool hasVisible() const { return this->visible_ != nullptr;};
      void deleteVisible() { this->visible_ = nullptr;};
      inline bool getVisible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
      inline Members& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


    protected:
      // 针对此用户允许的操作列表。
      shared_ptr<vector<Members::Actions>> actions_ {};
      shared_ptr<string> createTime_ {};
      // 用户展示名称。
      shared_ptr<string> displayName_ {};
      // 用户 arn。
      shared_ptr<string> memberArn_ {};
      // 用户角色列表。
      shared_ptr<vector<Members::Roles>> roles_ {};
      // 用户名称。
      shared_ptr<string> userName_ {};
      // 用户类型。
      shared_ptr<string> userType_ {};
      shared_ptr<bool> visible_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->members_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMembersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<ListMembersResponseBody::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<ListMembersResponseBody::Members>) };
    inline vector<ListMembersResponseBody::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<ListMembersResponseBody::Members>) };
    inline ListMembersResponseBody& setMembers(const vector<ListMembersResponseBody::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline ListMembersResponseBody& setMembers(vector<ListMembersResponseBody::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMembersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMembersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // 一次获取的最大记录数。
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<vector<ListMembersResponseBody::Members>> members_ {};
    // 下一页TOKEN。
    shared_ptr<string> nextToken_ {};
    // 请求ID。
    shared_ptr<string> requestId_ {};
    // 记录总数。
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
