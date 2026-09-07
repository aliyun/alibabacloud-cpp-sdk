// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYENDUSERHISTORYUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYENDUSERHISTORYUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class QueryEndUserHistoryUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEndUserHistoryUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserUsageInfoList, userUsageInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEndUserHistoryUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserUsageInfoList, userUsageInfoList_);
    };
    QueryEndUserHistoryUsageResponseBody() = default ;
    QueryEndUserHistoryUsageResponseBody(const QueryEndUserHistoryUsageResponseBody &) = default ;
    QueryEndUserHistoryUsageResponseBody(QueryEndUserHistoryUsageResponseBody &&) = default ;
    QueryEndUserHistoryUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEndUserHistoryUsageResponseBody() = default ;
    QueryEndUserHistoryUsageResponseBody& operator=(const QueryEndUserHistoryUsageResponseBody &) = default ;
    QueryEndUserHistoryUsageResponseBody& operator=(QueryEndUserHistoryUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserUsageInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserUsageInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DesktopUsageList, desktopUsageList_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(EndUserName, endUserName_);
        DARABONBA_PTR_TO_JSON(OrgPathList, orgPathList_);
        DARABONBA_PTR_TO_JSON(UserGroupList, userGroupList_);
      };
      friend void from_json(const Darabonba::Json& j, UserUsageInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DesktopUsageList, desktopUsageList_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(EndUserName, endUserName_);
        DARABONBA_PTR_FROM_JSON(OrgPathList, orgPathList_);
        DARABONBA_PTR_FROM_JSON(UserGroupList, userGroupList_);
      };
      UserUsageInfoList() = default ;
      UserUsageInfoList(const UserUsageInfoList &) = default ;
      UserUsageInfoList(UserUsageInfoList &&) = default ;
      UserUsageInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserUsageInfoList() = default ;
      UserUsageInfoList& operator=(const UserUsageInfoList &) = default ;
      UserUsageInfoList& operator=(UserUsageInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserGroupList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserGroupList& obj) { 
          DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
          DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, UserGroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
          DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
        };
        UserGroupList() = default ;
        UserGroupList(const UserGroupList &) = default ;
        UserGroupList(UserGroupList &&) = default ;
        UserGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserGroupList() = default ;
        UserGroupList& operator=(const UserGroupList &) = default ;
        UserGroupList& operator=(UserGroupList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userGroupId_ == nullptr
        && this->userGroupName_ == nullptr; };
        // userGroupId Field Functions 
        bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
        void deleteUserGroupId() { this->userGroupId_ = nullptr;};
        inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
        inline UserGroupList& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


        // userGroupName Field Functions 
        bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
        void deleteUserGroupName() { this->userGroupName_ = nullptr;};
        inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
        inline UserGroupList& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


      protected:
        // The user group ID.
        shared_ptr<string> userGroupId_ {};
        // The user group name.
        shared_ptr<string> userGroupName_ {};
      };

      class DesktopUsageList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DesktopUsageList& obj) { 
          DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
          DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
        };
        friend void from_json(const Darabonba::Json& j, DesktopUsageList& obj) { 
          DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
          DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
        };
        DesktopUsageList() = default ;
        DesktopUsageList(const DesktopUsageList &) = default ;
        DesktopUsageList(DesktopUsageList &&) = default ;
        DesktopUsageList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DesktopUsageList() = default ;
        DesktopUsageList& operator=(const DesktopUsageList &) = default ;
        DesktopUsageList& operator=(DesktopUsageList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->desktopName_ == nullptr && this->duration_ == nullptr; };
        // desktopId Field Functions 
        bool hasDesktopId() const { return this->desktopId_ != nullptr;};
        void deleteDesktopId() { this->desktopId_ = nullptr;};
        inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
        inline DesktopUsageList& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


        // desktopName Field Functions 
        bool hasDesktopName() const { return this->desktopName_ != nullptr;};
        void deleteDesktopName() { this->desktopName_ = nullptr;};
        inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
        inline DesktopUsageList& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline DesktopUsageList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      protected:
        // The desktop ID.
        shared_ptr<string> desktopId_ {};
        // The desktop name.
        shared_ptr<string> desktopName_ {};
        // The usage duration of the user on the desktop, in seconds.
        shared_ptr<int64_t> duration_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->desktopUsageList_ == nullptr && this->displayName_ == nullptr && this->duration_ == nullptr && this->endUserId_ == nullptr && this->endUserName_ == nullptr
        && this->orgPathList_ == nullptr && this->userGroupList_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UserUsageInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // desktopUsageList Field Functions 
      bool hasDesktopUsageList() const { return this->desktopUsageList_ != nullptr;};
      void deleteDesktopUsageList() { this->desktopUsageList_ = nullptr;};
      inline const vector<UserUsageInfoList::DesktopUsageList> & getDesktopUsageList() const { DARABONBA_PTR_GET_CONST(desktopUsageList_, vector<UserUsageInfoList::DesktopUsageList>) };
      inline vector<UserUsageInfoList::DesktopUsageList> getDesktopUsageList() { DARABONBA_PTR_GET(desktopUsageList_, vector<UserUsageInfoList::DesktopUsageList>) };
      inline UserUsageInfoList& setDesktopUsageList(const vector<UserUsageInfoList::DesktopUsageList> & desktopUsageList) { DARABONBA_PTR_SET_VALUE(desktopUsageList_, desktopUsageList) };
      inline UserUsageInfoList& setDesktopUsageList(vector<UserUsageInfoList::DesktopUsageList> && desktopUsageList) { DARABONBA_PTR_SET_RVALUE(desktopUsageList_, desktopUsageList) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline UserUsageInfoList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline UserUsageInfoList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline UserUsageInfoList& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // endUserName Field Functions 
      bool hasEndUserName() const { return this->endUserName_ != nullptr;};
      void deleteEndUserName() { this->endUserName_ = nullptr;};
      inline string getEndUserName() const { DARABONBA_PTR_GET_DEFAULT(endUserName_, "") };
      inline UserUsageInfoList& setEndUserName(string endUserName) { DARABONBA_PTR_SET_VALUE(endUserName_, endUserName) };


      // orgPathList Field Functions 
      bool hasOrgPathList() const { return this->orgPathList_ != nullptr;};
      void deleteOrgPathList() { this->orgPathList_ = nullptr;};
      inline const vector<string> & getOrgPathList() const { DARABONBA_PTR_GET_CONST(orgPathList_, vector<string>) };
      inline vector<string> getOrgPathList() { DARABONBA_PTR_GET(orgPathList_, vector<string>) };
      inline UserUsageInfoList& setOrgPathList(const vector<string> & orgPathList) { DARABONBA_PTR_SET_VALUE(orgPathList_, orgPathList) };
      inline UserUsageInfoList& setOrgPathList(vector<string> && orgPathList) { DARABONBA_PTR_SET_RVALUE(orgPathList_, orgPathList) };


      // userGroupList Field Functions 
      bool hasUserGroupList() const { return this->userGroupList_ != nullptr;};
      void deleteUserGroupList() { this->userGroupList_ = nullptr;};
      inline const vector<UserUsageInfoList::UserGroupList> & getUserGroupList() const { DARABONBA_PTR_GET_CONST(userGroupList_, vector<UserUsageInfoList::UserGroupList>) };
      inline vector<UserUsageInfoList::UserGroupList> getUserGroupList() { DARABONBA_PTR_GET(userGroupList_, vector<UserUsageInfoList::UserGroupList>) };
      inline UserUsageInfoList& setUserGroupList(const vector<UserUsageInfoList::UserGroupList> & userGroupList) { DARABONBA_PTR_SET_VALUE(userGroupList_, userGroupList) };
      inline UserUsageInfoList& setUserGroupList(vector<UserUsageInfoList::UserGroupList> && userGroupList) { DARABONBA_PTR_SET_RVALUE(userGroupList_, userGroupList) };


    protected:
      // The remarks of the user. This parameter has a value only for convenience account users.
      shared_ptr<string> description_ {};
      // The list of usage duration details for each desktop.
      shared_ptr<vector<UserUsageInfoList::DesktopUsageList>> desktopUsageList_ {};
      // The display name of the user. For convenience account users, this is the actual nickname. For AD users, this is the display name.
      shared_ptr<string> displayName_ {};
      // The total usage duration, in seconds.
      shared_ptr<int64_t> duration_ {};
      // The end user ID.
      shared_ptr<string> endUserId_ {};
      // The username. For convenience account users, this is the nickname. For AD users, this is the UserPrincipalName.
      shared_ptr<string> endUserName_ {};
      // The list of organization paths. For convenience account users, this contains multiple organization paths. For AD users, this is the organizational unit (OU) path.
      shared_ptr<vector<string>> orgPathList_ {};
      // The list of user groups. This parameter has a value only for convenience account users.
      shared_ptr<vector<UserUsageInfoList::UserGroupList>> userGroupList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->userUsageInfoList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEndUserHistoryUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryEndUserHistoryUsageResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userUsageInfoList Field Functions 
    bool hasUserUsageInfoList() const { return this->userUsageInfoList_ != nullptr;};
    void deleteUserUsageInfoList() { this->userUsageInfoList_ = nullptr;};
    inline const vector<QueryEndUserHistoryUsageResponseBody::UserUsageInfoList> & getUserUsageInfoList() const { DARABONBA_PTR_GET_CONST(userUsageInfoList_, vector<QueryEndUserHistoryUsageResponseBody::UserUsageInfoList>) };
    inline vector<QueryEndUserHistoryUsageResponseBody::UserUsageInfoList> getUserUsageInfoList() { DARABONBA_PTR_GET(userUsageInfoList_, vector<QueryEndUserHistoryUsageResponseBody::UserUsageInfoList>) };
    inline QueryEndUserHistoryUsageResponseBody& setUserUsageInfoList(const vector<QueryEndUserHistoryUsageResponseBody::UserUsageInfoList> & userUsageInfoList) { DARABONBA_PTR_SET_VALUE(userUsageInfoList_, userUsageInfoList) };
    inline QueryEndUserHistoryUsageResponseBody& setUserUsageInfoList(vector<QueryEndUserHistoryUsageResponseBody::UserUsageInfoList> && userUsageInfoList) { DARABONBA_PTR_SET_RVALUE(userUsageInfoList_, userUsageInfoList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of users that meet the query conditions.
    shared_ptr<int64_t> totalCount_ {};
    // The list of user usage duration entries on the current page.
    shared_ptr<vector<QueryEndUserHistoryUsageResponseBody::UserUsageInfoList>> userUsageInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
