// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListUserGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
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
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(UserGroupList, userGroupList_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(UserGroupList, userGroupList_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserGroupList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserGroupList& obj) { 
          DARABONBA_PTR_TO_JSON(Active, active_);
          DARABONBA_PTR_TO_JSON(AdminList, adminList_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(MyRole, myRole_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, UserGroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(Active, active_);
          DARABONBA_PTR_FROM_JSON(AdminList, adminList_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(MyRole, myRole_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
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
        class AdminList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AdminList& obj) { 
            DARABONBA_PTR_TO_JSON(AccountName, accountName_);
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(Id, id_);
          };
          friend void from_json(const Darabonba::Json& j, AdminList& obj) { 
            DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
          };
          AdminList() = default ;
          AdminList(const AdminList &) = default ;
          AdminList(AdminList &&) = default ;
          AdminList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AdminList() = default ;
          AdminList& operator=(const AdminList &) = default ;
          AdminList& operator=(AdminList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accountName_ == nullptr
        && this->displayName_ == nullptr && this->id_ == nullptr; };
          // accountName Field Functions 
          bool hasAccountName() const { return this->accountName_ != nullptr;};
          void deleteAccountName() { this->accountName_ = nullptr;};
          inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
          inline AdminList& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline AdminList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline AdminList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        protected:
          shared_ptr<string> accountName_ {};
          shared_ptr<string> displayName_ {};
          shared_ptr<string> id_ {};
        };

        virtual bool empty() const override { return this->active_ == nullptr
        && this->adminList_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->myRole_ == nullptr && this->name_ == nullptr; };
        // active Field Functions 
        bool hasActive() const { return this->active_ != nullptr;};
        void deleteActive() { this->active_ = nullptr;};
        inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
        inline UserGroupList& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


        // adminList Field Functions 
        bool hasAdminList() const { return this->adminList_ != nullptr;};
        void deleteAdminList() { this->adminList_ = nullptr;};
        inline const vector<UserGroupList::AdminList> & getAdminList() const { DARABONBA_PTR_GET_CONST(adminList_, vector<UserGroupList::AdminList>) };
        inline vector<UserGroupList::AdminList> getAdminList() { DARABONBA_PTR_GET(adminList_, vector<UserGroupList::AdminList>) };
        inline UserGroupList& setAdminList(const vector<UserGroupList::AdminList> & adminList) { DARABONBA_PTR_SET_VALUE(adminList_, adminList) };
        inline UserGroupList& setAdminList(vector<UserGroupList::AdminList> && adminList) { DARABONBA_PTR_SET_RVALUE(adminList_, adminList) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline UserGroupList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline UserGroupList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // myRole Field Functions 
        bool hasMyRole() const { return this->myRole_ != nullptr;};
        void deleteMyRole() { this->myRole_ = nullptr;};
        inline string getMyRole() const { DARABONBA_PTR_GET_DEFAULT(myRole_, "") };
        inline UserGroupList& setMyRole(string myRole) { DARABONBA_PTR_SET_VALUE(myRole_, myRole) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline UserGroupList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<bool> active_ {};
        shared_ptr<vector<UserGroupList::AdminList>> adminList_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> myRole_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->totalCount_ == nullptr
        && this->userGroupList_ == nullptr; };
      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // userGroupList Field Functions 
      bool hasUserGroupList() const { return this->userGroupList_ != nullptr;};
      void deleteUserGroupList() { this->userGroupList_ = nullptr;};
      inline const vector<PageResult::UserGroupList> & getUserGroupList() const { DARABONBA_PTR_GET_CONST(userGroupList_, vector<PageResult::UserGroupList>) };
      inline vector<PageResult::UserGroupList> getUserGroupList() { DARABONBA_PTR_GET(userGroupList_, vector<PageResult::UserGroupList>) };
      inline PageResult& setUserGroupList(const vector<PageResult::UserGroupList> & userGroupList) { DARABONBA_PTR_SET_VALUE(userGroupList_, userGroupList) };
      inline PageResult& setUserGroupList(vector<PageResult::UserGroupList> && userGroupList) { DARABONBA_PTR_SET_RVALUE(userGroupList_, userGroupList) };


    protected:
      shared_ptr<int32_t> totalCount_ {};
      shared_ptr<vector<PageResult::UserGroupList>> userGroupList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListUserGroupsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListUserGroupsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListUserGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListUserGroupsResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListUserGroupsResponseBody::PageResult) };
    inline ListUserGroupsResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListUserGroupsResponseBody::PageResult) };
    inline ListUserGroupsResponseBody& setPageResult(const ListUserGroupsResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListUserGroupsResponseBody& setPageResult(ListUserGroupsResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListUserGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListUserGroupsResponseBody::PageResult> pageResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
