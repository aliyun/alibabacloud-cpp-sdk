// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
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
  class ListUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListUsersResponseBody() = default ;
    ListUsersResponseBody(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody(ListUsersResponseBody &&) = default ;
    ListUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBody() = default ;
    ListUsersResponseBody& operator=(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody& operator=(ListUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(UserList, userList_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(UserList, userList_);
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
      class UserList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(Deleted, deleted_);
          DARABONBA_PTR_TO_JSON(DeptList, deptList_);
          DARABONBA_PTR_TO_JSON(DingNumber, dingNumber_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(DisplayNameWithoutStatus, displayNameWithoutStatus_);
          DARABONBA_PTR_TO_JSON(EnableWhiteIp, enableWhiteIp_);
          DARABONBA_PTR_TO_JSON(FeiShuRobot, feiShuRobot_);
          DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
          DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Mail, mail_);
          DARABONBA_PTR_TO_JSON(MobilePhone, mobilePhone_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NickName, nickName_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(RealName, realName_);
          DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(WeChatRobot, weChatRobot_);
          DARABONBA_PTR_TO_JSON(WhiteIp, whiteIp_);
        };
        friend void from_json(const Darabonba::Json& j, UserList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
          DARABONBA_PTR_FROM_JSON(DeptList, deptList_);
          DARABONBA_PTR_FROM_JSON(DingNumber, dingNumber_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(DisplayNameWithoutStatus, displayNameWithoutStatus_);
          DARABONBA_PTR_FROM_JSON(EnableWhiteIp, enableWhiteIp_);
          DARABONBA_PTR_FROM_JSON(FeiShuRobot, feiShuRobot_);
          DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
          DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Mail, mail_);
          DARABONBA_PTR_FROM_JSON(MobilePhone, mobilePhone_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NickName, nickName_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(RealName, realName_);
          DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(WeChatRobot, weChatRobot_);
          DARABONBA_PTR_FROM_JSON(WhiteIp, whiteIp_);
        };
        UserList() = default ;
        UserList(const UserList &) = default ;
        UserList(UserList &&) = default ;
        UserList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserList() = default ;
        UserList& operator=(const UserList &) = default ;
        UserList& operator=(UserList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DeptList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DeptList& obj) { 
            DARABONBA_PTR_TO_JSON(Children, children_);
            DARABONBA_PTR_TO_JSON(FullName, fullName_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ParentId, parentId_);
            DARABONBA_PTR_TO_JSON(Parents, parents_);
          };
          friend void from_json(const Darabonba::Json& j, DeptList& obj) { 
            DARABONBA_PTR_FROM_JSON(Children, children_);
            DARABONBA_PTR_FROM_JSON(FullName, fullName_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
            DARABONBA_PTR_FROM_JSON(Parents, parents_);
          };
          DeptList() = default ;
          DeptList(const DeptList &) = default ;
          DeptList(DeptList &&) = default ;
          DeptList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DeptList() = default ;
          DeptList& operator=(const DeptList &) = default ;
          DeptList& operator=(DeptList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->children_ == nullptr
        && this->fullName_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->parentId_ == nullptr && this->parents_ == nullptr; };
          // children Field Functions 
          bool hasChildren() const { return this->children_ != nullptr;};
          void deleteChildren() { this->children_ = nullptr;};
          inline const vector<Darabonba::Json> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getChildren() { DARABONBA_PTR_GET(children_, vector<Darabonba::Json>) };
          inline DeptList& setChildren(const vector<Darabonba::Json> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
          inline DeptList& setChildren(vector<Darabonba::Json> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


          // fullName Field Functions 
          bool hasFullName() const { return this->fullName_ != nullptr;};
          void deleteFullName() { this->fullName_ = nullptr;};
          inline string getFullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
          inline DeptList& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline DeptList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DeptList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // parentId Field Functions 
          bool hasParentId() const { return this->parentId_ != nullptr;};
          void deleteParentId() { this->parentId_ = nullptr;};
          inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
          inline DeptList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


          // parents Field Functions 
          bool hasParents() const { return this->parents_ != nullptr;};
          void deleteParents() { this->parents_ = nullptr;};
          inline const vector<Darabonba::Json> & getParents() const { DARABONBA_PTR_GET_CONST(parents_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getParents() { DARABONBA_PTR_GET(parents_, vector<Darabonba::Json>) };
          inline DeptList& setParents(const vector<Darabonba::Json> & parents) { DARABONBA_PTR_SET_VALUE(parents_, parents) };
          inline DeptList& setParents(vector<Darabonba::Json> && parents) { DARABONBA_PTR_SET_RVALUE(parents_, parents) };


        protected:
          // The sub-department list.
          shared_ptr<vector<Darabonba::Json>> children_ {};
          // The full path of the department.
          shared_ptr<string> fullName_ {};
          // The department ID.
          shared_ptr<string> id_ {};
          // The department name.
          shared_ptr<string> name_ {};
          // The parent department ID.
          shared_ptr<string> parentId_ {};
          // The parent department list.
          shared_ptr<vector<Darabonba::Json>> parents_ {};
        };

        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->deleted_ == nullptr && this->deptList_ == nullptr && this->dingNumber_ == nullptr && this->displayName_ == nullptr && this->displayNameWithoutStatus_ == nullptr
        && this->enableWhiteIp_ == nullptr && this->feiShuRobot_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->id_ == nullptr
        && this->mail_ == nullptr && this->mobilePhone_ == nullptr && this->name_ == nullptr && this->nickName_ == nullptr && this->parentId_ == nullptr
        && this->realName_ == nullptr && this->sourceId_ == nullptr && this->sourceType_ == nullptr && this->weChatRobot_ == nullptr && this->whiteIp_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline UserList& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // deleted Field Functions 
        bool hasDeleted() const { return this->deleted_ != nullptr;};
        void deleteDeleted() { this->deleted_ = nullptr;};
        inline bool getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
        inline UserList& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


        // deptList Field Functions 
        bool hasDeptList() const { return this->deptList_ != nullptr;};
        void deleteDeptList() { this->deptList_ = nullptr;};
        inline const vector<UserList::DeptList> & getDeptList() const { DARABONBA_PTR_GET_CONST(deptList_, vector<UserList::DeptList>) };
        inline vector<UserList::DeptList> getDeptList() { DARABONBA_PTR_GET(deptList_, vector<UserList::DeptList>) };
        inline UserList& setDeptList(const vector<UserList::DeptList> & deptList) { DARABONBA_PTR_SET_VALUE(deptList_, deptList) };
        inline UserList& setDeptList(vector<UserList::DeptList> && deptList) { DARABONBA_PTR_SET_RVALUE(deptList_, deptList) };


        // dingNumber Field Functions 
        bool hasDingNumber() const { return this->dingNumber_ != nullptr;};
        void deleteDingNumber() { this->dingNumber_ = nullptr;};
        inline string getDingNumber() const { DARABONBA_PTR_GET_DEFAULT(dingNumber_, "") };
        inline UserList& setDingNumber(string dingNumber) { DARABONBA_PTR_SET_VALUE(dingNumber_, dingNumber) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline UserList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // displayNameWithoutStatus Field Functions 
        bool hasDisplayNameWithoutStatus() const { return this->displayNameWithoutStatus_ != nullptr;};
        void deleteDisplayNameWithoutStatus() { this->displayNameWithoutStatus_ = nullptr;};
        inline string getDisplayNameWithoutStatus() const { DARABONBA_PTR_GET_DEFAULT(displayNameWithoutStatus_, "") };
        inline UserList& setDisplayNameWithoutStatus(string displayNameWithoutStatus) { DARABONBA_PTR_SET_VALUE(displayNameWithoutStatus_, displayNameWithoutStatus) };


        // enableWhiteIp Field Functions 
        bool hasEnableWhiteIp() const { return this->enableWhiteIp_ != nullptr;};
        void deleteEnableWhiteIp() { this->enableWhiteIp_ = nullptr;};
        inline bool getEnableWhiteIp() const { DARABONBA_PTR_GET_DEFAULT(enableWhiteIp_, false) };
        inline UserList& setEnableWhiteIp(bool enableWhiteIp) { DARABONBA_PTR_SET_VALUE(enableWhiteIp_, enableWhiteIp) };


        // feiShuRobot Field Functions 
        bool hasFeiShuRobot() const { return this->feiShuRobot_ != nullptr;};
        void deleteFeiShuRobot() { this->feiShuRobot_ = nullptr;};
        inline string getFeiShuRobot() const { DARABONBA_PTR_GET_DEFAULT(feiShuRobot_, "") };
        inline UserList& setFeiShuRobot(string feiShuRobot) { DARABONBA_PTR_SET_VALUE(feiShuRobot_, feiShuRobot) };


        // gmtCreateTime Field Functions 
        bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
        void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
        inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
        inline UserList& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


        // gmtModifiedTime Field Functions 
        bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
        void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
        inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
        inline UserList& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline UserList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // mail Field Functions 
        bool hasMail() const { return this->mail_ != nullptr;};
        void deleteMail() { this->mail_ = nullptr;};
        inline string getMail() const { DARABONBA_PTR_GET_DEFAULT(mail_, "") };
        inline UserList& setMail(string mail) { DARABONBA_PTR_SET_VALUE(mail_, mail) };


        // mobilePhone Field Functions 
        bool hasMobilePhone() const { return this->mobilePhone_ != nullptr;};
        void deleteMobilePhone() { this->mobilePhone_ = nullptr;};
        inline string getMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(mobilePhone_, "") };
        inline UserList& setMobilePhone(string mobilePhone) { DARABONBA_PTR_SET_VALUE(mobilePhone_, mobilePhone) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline UserList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline UserList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
        inline UserList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // realName Field Functions 
        bool hasRealName() const { return this->realName_ != nullptr;};
        void deleteRealName() { this->realName_ = nullptr;};
        inline string getRealName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
        inline UserList& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
        inline UserList& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline UserList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // weChatRobot Field Functions 
        bool hasWeChatRobot() const { return this->weChatRobot_ != nullptr;};
        void deleteWeChatRobot() { this->weChatRobot_ = nullptr;};
        inline string getWeChatRobot() const { DARABONBA_PTR_GET_DEFAULT(weChatRobot_, "") };
        inline UserList& setWeChatRobot(string weChatRobot) { DARABONBA_PTR_SET_VALUE(weChatRobot_, weChatRobot) };


        // whiteIp Field Functions 
        bool hasWhiteIp() const { return this->whiteIp_ != nullptr;};
        void deleteWhiteIp() { this->whiteIp_ = nullptr;};
        inline string getWhiteIp() const { DARABONBA_PTR_GET_DEFAULT(whiteIp_, "") };
        inline UserList& setWhiteIp(string whiteIp) { DARABONBA_PTR_SET_VALUE(whiteIp_, whiteIp) };


      protected:
        // The logon name of the original account.
        shared_ptr<string> accountName_ {};
        // Indicates whether the user is deleted.
        shared_ptr<bool> deleted_ {};
        // The department list.
        shared_ptr<vector<UserList::DeptList>> deptList_ {};
        // The DingTalk number.
        shared_ptr<string> dingNumber_ {};
        // The display name of the original account.
        shared_ptr<string> displayName_ {};
        // The display name of the original account without the status suffix.
        shared_ptr<string> displayNameWithoutStatus_ {};
        // Indicates whether the IP whitelist is enabled.
        shared_ptr<bool> enableWhiteIp_ {};
        // The Lark bot.
        shared_ptr<string> feiShuRobot_ {};
        // The creation time.
        shared_ptr<string> gmtCreateTime_ {};
        // The update time.
        shared_ptr<string> gmtModifiedTime_ {};
        // The user ID.
        shared_ptr<string> id_ {};
        // The email address.
        shared_ptr<string> mail_ {};
        // The mobile phone number.
        shared_ptr<string> mobilePhone_ {};
        // The user name.
        shared_ptr<string> name_ {};
        // The nickname of the original account.
        shared_ptr<string> nickName_ {};
        // The user ID of the tenant owner.
        shared_ptr<string> parentId_ {};
        // The real name of the original account.
        shared_ptr<string> realName_ {};
        // The original account ID.
        shared_ptr<string> sourceId_ {};
        // The original account type.
        shared_ptr<string> sourceType_ {};
        // The WeCom bot.
        shared_ptr<string> weChatRobot_ {};
        // The IP address whitelist.
        shared_ptr<string> whiteIp_ {};
      };

      virtual bool empty() const override { return this->totalCount_ == nullptr
        && this->userList_ == nullptr; };
      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // userList Field Functions 
      bool hasUserList() const { return this->userList_ != nullptr;};
      void deleteUserList() { this->userList_ = nullptr;};
      inline const vector<PageResult::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<PageResult::UserList>) };
      inline vector<PageResult::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<PageResult::UserList>) };
      inline PageResult& setUserList(const vector<PageResult::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
      inline PageResult& setUserList(vector<PageResult::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


    protected:
      // The total number of records.
      shared_ptr<int32_t> totalCount_ {};
      // The user list.
      shared_ptr<vector<PageResult::UserList>> userList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListUsersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListUsersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListUsersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListUsersResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListUsersResponseBody::PageResult) };
    inline ListUsersResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListUsersResponseBody::PageResult) };
    inline ListUsersResponseBody& setPageResult(const ListUsersResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListUsersResponseBody& setPageResult(ListUsersResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListUsersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request error code. OK indicates that the request is successful.
    shared_ptr<string> code_ {};
    // The HTTP status code of the backend response.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request error message.
    shared_ptr<string> message_ {};
    // The paged query result.
    shared_ptr<ListUsersResponseBody::PageResult> pageResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
