// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERSRESPONSEBODYUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERSRESPONSEBODYUSERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetUsersResponseBodyUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUsersResponseBodyUserList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetUsersResponseBodyUserList& obj) { 
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
    GetUsersResponseBodyUserList() = default ;
    GetUsersResponseBodyUserList(const GetUsersResponseBodyUserList &) = default ;
    GetUsersResponseBodyUserList(GetUsersResponseBodyUserList &&) = default ;
    GetUsersResponseBodyUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUsersResponseBodyUserList() = default ;
    GetUsersResponseBodyUserList& operator=(const GetUsersResponseBodyUserList &) = default ;
    GetUsersResponseBodyUserList& operator=(GetUsersResponseBodyUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->dingNumber_ != nullptr && this->displayName_ != nullptr && this->displayNameWithoutStatus_ != nullptr && this->enableWhiteIp_ != nullptr && this->feiShuRobot_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->mail_ != nullptr && this->mobilePhone_ != nullptr
        && this->name_ != nullptr && this->nickName_ != nullptr && this->parentId_ != nullptr && this->realName_ != nullptr && this->sourceId_ != nullptr
        && this->sourceType_ != nullptr && this->weChatRobot_ != nullptr && this->whiteIp_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GetUsersResponseBodyUserList& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // dingNumber Field Functions 
    bool hasDingNumber() const { return this->dingNumber_ != nullptr;};
    void deleteDingNumber() { this->dingNumber_ = nullptr;};
    inline string dingNumber() const { DARABONBA_PTR_GET_DEFAULT(dingNumber_, "") };
    inline GetUsersResponseBodyUserList& setDingNumber(string dingNumber) { DARABONBA_PTR_SET_VALUE(dingNumber_, dingNumber) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetUsersResponseBodyUserList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // displayNameWithoutStatus Field Functions 
    bool hasDisplayNameWithoutStatus() const { return this->displayNameWithoutStatus_ != nullptr;};
    void deleteDisplayNameWithoutStatus() { this->displayNameWithoutStatus_ = nullptr;};
    inline string displayNameWithoutStatus() const { DARABONBA_PTR_GET_DEFAULT(displayNameWithoutStatus_, "") };
    inline GetUsersResponseBodyUserList& setDisplayNameWithoutStatus(string displayNameWithoutStatus) { DARABONBA_PTR_SET_VALUE(displayNameWithoutStatus_, displayNameWithoutStatus) };


    // enableWhiteIp Field Functions 
    bool hasEnableWhiteIp() const { return this->enableWhiteIp_ != nullptr;};
    void deleteEnableWhiteIp() { this->enableWhiteIp_ = nullptr;};
    inline string enableWhiteIp() const { DARABONBA_PTR_GET_DEFAULT(enableWhiteIp_, "") };
    inline GetUsersResponseBodyUserList& setEnableWhiteIp(string enableWhiteIp) { DARABONBA_PTR_SET_VALUE(enableWhiteIp_, enableWhiteIp) };


    // feiShuRobot Field Functions 
    bool hasFeiShuRobot() const { return this->feiShuRobot_ != nullptr;};
    void deleteFeiShuRobot() { this->feiShuRobot_ = nullptr;};
    inline string feiShuRobot() const { DARABONBA_PTR_GET_DEFAULT(feiShuRobot_, "") };
    inline GetUsersResponseBodyUserList& setFeiShuRobot(string feiShuRobot) { DARABONBA_PTR_SET_VALUE(feiShuRobot_, feiShuRobot) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetUsersResponseBodyUserList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline GetUsersResponseBodyUserList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetUsersResponseBodyUserList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mail Field Functions 
    bool hasMail() const { return this->mail_ != nullptr;};
    void deleteMail() { this->mail_ = nullptr;};
    inline string mail() const { DARABONBA_PTR_GET_DEFAULT(mail_, "") };
    inline GetUsersResponseBodyUserList& setMail(string mail) { DARABONBA_PTR_SET_VALUE(mail_, mail) };


    // mobilePhone Field Functions 
    bool hasMobilePhone() const { return this->mobilePhone_ != nullptr;};
    void deleteMobilePhone() { this->mobilePhone_ = nullptr;};
    inline string mobilePhone() const { DARABONBA_PTR_GET_DEFAULT(mobilePhone_, "") };
    inline GetUsersResponseBodyUserList& setMobilePhone(string mobilePhone) { DARABONBA_PTR_SET_VALUE(mobilePhone_, mobilePhone) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetUsersResponseBodyUserList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline GetUsersResponseBodyUserList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline GetUsersResponseBodyUserList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string realName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline GetUsersResponseBodyUserList& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline GetUsersResponseBodyUserList& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetUsersResponseBodyUserList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // weChatRobot Field Functions 
    bool hasWeChatRobot() const { return this->weChatRobot_ != nullptr;};
    void deleteWeChatRobot() { this->weChatRobot_ = nullptr;};
    inline string weChatRobot() const { DARABONBA_PTR_GET_DEFAULT(weChatRobot_, "") };
    inline GetUsersResponseBodyUserList& setWeChatRobot(string weChatRobot) { DARABONBA_PTR_SET_VALUE(weChatRobot_, weChatRobot) };


    // whiteIp Field Functions 
    bool hasWhiteIp() const { return this->whiteIp_ != nullptr;};
    void deleteWhiteIp() { this->whiteIp_ = nullptr;};
    inline string whiteIp() const { DARABONBA_PTR_GET_DEFAULT(whiteIp_, "") };
    inline GetUsersResponseBodyUserList& setWhiteIp(string whiteIp) { DARABONBA_PTR_SET_VALUE(whiteIp_, whiteIp) };


  protected:
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<string> dingNumber_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> displayNameWithoutStatus_ = nullptr;
    std::shared_ptr<string> enableWhiteIp_ = nullptr;
    std::shared_ptr<string> feiShuRobot_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> mail_ = nullptr;
    std::shared_ptr<string> mobilePhone_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> parentId_ = nullptr;
    std::shared_ptr<string> realName_ = nullptr;
    std::shared_ptr<string> sourceId_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<string> weChatRobot_ = nullptr;
    std::shared_ptr<string> whiteIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
