// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSFORAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSFORAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListGroupsForApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsForApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsForApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListGroupsForApplicationResponseBody() = default ;
    ListGroupsForApplicationResponseBody(const ListGroupsForApplicationResponseBody &) = default ;
    ListGroupsForApplicationResponseBody(ListGroupsForApplicationResponseBody &&) = default ;
    ListGroupsForApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsForApplicationResponseBody() = default ;
    ListGroupsForApplicationResponseBody& operator=(const ListGroupsForApplicationResponseBody &) = default ;
    ListGroupsForApplicationResponseBody& operator=(ListGroupsForApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationRoles, applicationRoles_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationRoles, applicationRoles_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApplicationRoles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplicationRoles& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicationRoleId, applicationRoleId_);
        };
        friend void from_json(const Darabonba::Json& j, ApplicationRoles& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicationRoleId, applicationRoleId_);
        };
        ApplicationRoles() = default ;
        ApplicationRoles(const ApplicationRoles &) = default ;
        ApplicationRoles(ApplicationRoles &&) = default ;
        ApplicationRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplicationRoles() = default ;
        ApplicationRoles& operator=(const ApplicationRoles &) = default ;
        ApplicationRoles& operator=(ApplicationRoles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applicationRoleId_ == nullptr; };
        // applicationRoleId Field Functions 
        bool hasApplicationRoleId() const { return this->applicationRoleId_ != nullptr;};
        void deleteApplicationRoleId() { this->applicationRoleId_ = nullptr;};
        inline string getApplicationRoleId() const { DARABONBA_PTR_GET_DEFAULT(applicationRoleId_, "") };
        inline ApplicationRoles& setApplicationRoleId(string applicationRoleId) { DARABONBA_PTR_SET_VALUE(applicationRoleId_, applicationRoleId) };


      protected:
        // 应用角色标识。
        shared_ptr<string> applicationRoleId_ {};
      };

      virtual bool empty() const override { return this->applicationRoles_ == nullptr
        && this->groupId_ == nullptr; };
      // applicationRoles Field Functions 
      bool hasApplicationRoles() const { return this->applicationRoles_ != nullptr;};
      void deleteApplicationRoles() { this->applicationRoles_ = nullptr;};
      inline const vector<Groups::ApplicationRoles> & getApplicationRoles() const { DARABONBA_PTR_GET_CONST(applicationRoles_, vector<Groups::ApplicationRoles>) };
      inline vector<Groups::ApplicationRoles> getApplicationRoles() { DARABONBA_PTR_GET(applicationRoles_, vector<Groups::ApplicationRoles>) };
      inline Groups& setApplicationRoles(const vector<Groups::ApplicationRoles> & applicationRoles) { DARABONBA_PTR_SET_VALUE(applicationRoles_, applicationRoles) };
      inline Groups& setApplicationRoles(vector<Groups::ApplicationRoles> && applicationRoles) { DARABONBA_PTR_SET_RVALUE(applicationRoles_, applicationRoles) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Groups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    protected:
      // 应用角色列表。
      shared_ptr<vector<Groups::ApplicationRoles>> applicationRoles_ {};
      // The group ID.
      shared_ptr<string> groupId_ {};
    };

    virtual bool empty() const override { return this->groups_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<ListGroupsForApplicationResponseBody::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<ListGroupsForApplicationResponseBody::Groups>) };
    inline vector<ListGroupsForApplicationResponseBody::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<ListGroupsForApplicationResponseBody::Groups>) };
    inline ListGroupsForApplicationResponseBody& setGroups(const vector<ListGroupsForApplicationResponseBody::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline ListGroupsForApplicationResponseBody& setGroups(vector<ListGroupsForApplicationResponseBody::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGroupsForApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListGroupsForApplicationResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The group IDs.
    shared_ptr<vector<ListGroupsForApplicationResponseBody::Groups>> groups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
