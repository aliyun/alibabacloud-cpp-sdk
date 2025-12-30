// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPMEMBERSRESPONSEBODY_HPP_
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
  class ListUserGroupMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListUserGroupMembersResponseBody() = default ;
    ListUserGroupMembersResponseBody(const ListUserGroupMembersResponseBody &) = default ;
    ListUserGroupMembersResponseBody(ListUserGroupMembersResponseBody &&) = default ;
    ListUserGroupMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupMembersResponseBody() = default ;
    ListUserGroupMembersResponseBody& operator=(const ListUserGroupMembersResponseBody &) = default ;
    ListUserGroupMembersResponseBody& operator=(ListUserGroupMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(MemberList, memberList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class MemberList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MemberList& obj) { 
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
          DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
          DARABONBA_PTR_TO_JSON(UserRole, userRole_);
        };
        friend void from_json(const Darabonba::Json& j, MemberList& obj) { 
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
          DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
          DARABONBA_PTR_FROM_JSON(UserRole, userRole_);
        };
        MemberList() = default ;
        MemberList(const MemberList &) = default ;
        MemberList(MemberList &&) = default ;
        MemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MemberList() = default ;
        MemberList& operator=(const MemberList &) = default ;
        MemberList& operator=(MemberList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UserInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
            DARABONBA_PTR_TO_JSON(AccountName, accountName_);
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(Id, id_);
          };
          friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
          };
          UserInfo() = default ;
          UserInfo(const UserInfo &) = default ;
          UserInfo(UserInfo &&) = default ;
          UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UserInfo() = default ;
          UserInfo& operator=(const UserInfo &) = default ;
          UserInfo& operator=(UserInfo &&) = default ;
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
          inline UserInfo& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline UserInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline UserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        protected:
          shared_ptr<string> accountName_ {};
          shared_ptr<string> displayName_ {};
          shared_ptr<string> id_ {};
        };

        class Creator : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Creator& obj) { 
            DARABONBA_PTR_TO_JSON(AccountName, accountName_);
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(Id, id_);
          };
          friend void from_json(const Darabonba::Json& j, Creator& obj) { 
            DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
          };
          Creator() = default ;
          Creator(const Creator &) = default ;
          Creator(Creator &&) = default ;
          Creator(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Creator() = default ;
          Creator& operator=(const Creator &) = default ;
          Creator& operator=(Creator &&) = default ;
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
          inline Creator& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline Creator& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Creator& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        protected:
          shared_ptr<string> accountName_ {};
          shared_ptr<string> displayName_ {};
          shared_ptr<string> id_ {};
        };

        virtual bool empty() const override { return this->creator_ == nullptr
        && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->userGroupId_ == nullptr && this->userInfo_ == nullptr && this->userRole_ == nullptr; };
        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline const MemberList::Creator & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, MemberList::Creator) };
        inline MemberList::Creator getCreator() { DARABONBA_PTR_GET(creator_, MemberList::Creator) };
        inline MemberList& setCreator(const MemberList::Creator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
        inline MemberList& setCreator(MemberList::Creator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline MemberList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline MemberList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // userGroupId Field Functions 
        bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
        void deleteUserGroupId() { this->userGroupId_ = nullptr;};
        inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
        inline MemberList& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


        // userInfo Field Functions 
        bool hasUserInfo() const { return this->userInfo_ != nullptr;};
        void deleteUserInfo() { this->userInfo_ = nullptr;};
        inline const MemberList::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, MemberList::UserInfo) };
        inline MemberList::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, MemberList::UserInfo) };
        inline MemberList& setUserInfo(const MemberList::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
        inline MemberList& setUserInfo(MemberList::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


        // userRole Field Functions 
        bool hasUserRole() const { return this->userRole_ != nullptr;};
        void deleteUserRole() { this->userRole_ = nullptr;};
        inline string getUserRole() const { DARABONBA_PTR_GET_DEFAULT(userRole_, "") };
        inline MemberList& setUserRole(string userRole) { DARABONBA_PTR_SET_VALUE(userRole_, userRole) };


      protected:
        shared_ptr<MemberList::Creator> creator_ {};
        shared_ptr<int64_t> gmtCreate_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> userGroupId_ {};
        shared_ptr<MemberList::UserInfo> userInfo_ {};
        shared_ptr<string> userRole_ {};
      };

      virtual bool empty() const override { return this->memberList_ == nullptr
        && this->totalCount_ == nullptr; };
      // memberList Field Functions 
      bool hasMemberList() const { return this->memberList_ != nullptr;};
      void deleteMemberList() { this->memberList_ = nullptr;};
      inline const vector<PageResult::MemberList> & getMemberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<PageResult::MemberList>) };
      inline vector<PageResult::MemberList> getMemberList() { DARABONBA_PTR_GET(memberList_, vector<PageResult::MemberList>) };
      inline PageResult& setMemberList(const vector<PageResult::MemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
      inline PageResult& setMemberList(vector<PageResult::MemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::MemberList>> memberList_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListUserGroupMembersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListUserGroupMembersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListUserGroupMembersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListUserGroupMembersResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListUserGroupMembersResponseBody::PageResult) };
    inline ListUserGroupMembersResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListUserGroupMembersResponseBody::PageResult) };
    inline ListUserGroupMembersResponseBody& setPageResult(const ListUserGroupMembersResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListUserGroupMembersResponseBody& setPageResult(ListUserGroupMembersResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserGroupMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListUserGroupMembersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListUserGroupMembersResponseBody::PageResult> pageResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
