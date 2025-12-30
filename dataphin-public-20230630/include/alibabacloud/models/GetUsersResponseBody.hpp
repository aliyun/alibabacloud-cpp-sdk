// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERSRESPONSEBODY_HPP_
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
  class GetUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, GetUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    GetUsersResponseBody() = default ;
    GetUsersResponseBody(const GetUsersResponseBody &) = default ;
    GetUsersResponseBody(GetUsersResponseBody &&) = default ;
    GetUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUsersResponseBody() = default ;
    GetUsersResponseBody& operator=(const GetUsersResponseBody &) = default ;
    GetUsersResponseBody& operator=(GetUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserList& obj) { 
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(DingNumber, dingNumber_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(DisplayNameWithoutStatus, displayNameWithoutStatus_);
        DARABONBA_PTR_TO_JSON(EnableWhiteIp, enableWhiteIp_);
        DARABONBA_PTR_TO_JSON(FeiShuRobot, feiShuRobot_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
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
        DARABONBA_PTR_FROM_JSON(DingNumber, dingNumber_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(DisplayNameWithoutStatus, displayNameWithoutStatus_);
        DARABONBA_PTR_FROM_JSON(EnableWhiteIp, enableWhiteIp_);
        DARABONBA_PTR_FROM_JSON(FeiShuRobot, feiShuRobot_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
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
      virtual bool empty() const override { return this->accountName_ == nullptr
        && this->dingNumber_ == nullptr && this->displayName_ == nullptr && this->displayNameWithoutStatus_ == nullptr && this->enableWhiteIp_ == nullptr && this->feiShuRobot_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->mail_ == nullptr && this->mobilePhone_ == nullptr
        && this->name_ == nullptr && this->nickName_ == nullptr && this->parentId_ == nullptr && this->realName_ == nullptr && this->sourceId_ == nullptr
        && this->sourceType_ == nullptr && this->weChatRobot_ == nullptr && this->whiteIp_ == nullptr; };
      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline UserList& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


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
      inline string getEnableWhiteIp() const { DARABONBA_PTR_GET_DEFAULT(enableWhiteIp_, "") };
      inline UserList& setEnableWhiteIp(string enableWhiteIp) { DARABONBA_PTR_SET_VALUE(enableWhiteIp_, enableWhiteIp) };


      // feiShuRobot Field Functions 
      bool hasFeiShuRobot() const { return this->feiShuRobot_ != nullptr;};
      void deleteFeiShuRobot() { this->feiShuRobot_ = nullptr;};
      inline string getFeiShuRobot() const { DARABONBA_PTR_GET_DEFAULT(feiShuRobot_, "") };
      inline UserList& setFeiShuRobot(string feiShuRobot) { DARABONBA_PTR_SET_VALUE(feiShuRobot_, feiShuRobot) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline UserList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline UserList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


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
      shared_ptr<string> accountName_ {};
      shared_ptr<string> dingNumber_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<string> displayNameWithoutStatus_ {};
      shared_ptr<string> enableWhiteIp_ {};
      shared_ptr<string> feiShuRobot_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> mail_ {};
      shared_ptr<string> mobilePhone_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> nickName_ {};
      shared_ptr<string> parentId_ {};
      shared_ptr<string> realName_ {};
      shared_ptr<string> sourceId_ {};
      shared_ptr<string> sourceType_ {};
      shared_ptr<string> weChatRobot_ {};
      shared_ptr<string> whiteIp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->userList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUsersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetUsersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUsersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUsersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<GetUsersResponseBody::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<GetUsersResponseBody::UserList>) };
    inline vector<GetUsersResponseBody::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<GetUsersResponseBody::UserList>) };
    inline GetUsersResponseBody& setUserList(const vector<GetUsersResponseBody::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline GetUsersResponseBody& setUserList(vector<GetUsersResponseBody::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<vector<GetUsersResponseBody::UserList>> userList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
