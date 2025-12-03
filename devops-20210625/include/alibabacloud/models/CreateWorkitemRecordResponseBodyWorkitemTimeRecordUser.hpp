// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKITEMRECORDRESPONSEBODYWORKITEMTIMERECORDUSER_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKITEMRECORDRESPONSEBODYWORKITEMTIMERECORDUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& obj) { 
      DARABONBA_PTR_TO_JSON(account, account_);
      DARABONBA_PTR_TO_JSON(avatar, avatar_);
      DARABONBA_PTR_TO_JSON(dingTalkId, dingTalkId_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(displayNickName, displayNickName_);
      DARABONBA_PTR_TO_JSON(displayRealName, displayRealName_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(isDisabled, isDisabled_);
      DARABONBA_PTR_TO_JSON(mobile, mobile_);
      DARABONBA_PTR_TO_JSON(nameEn, nameEn_);
      DARABONBA_PTR_TO_JSON(nickName, nickName_);
      DARABONBA_PTR_TO_JSON(nickNamePinyin, nickNamePinyin_);
      DARABONBA_PTR_TO_JSON(realName, realName_);
      DARABONBA_PTR_TO_JSON(realNamePinyin, realNamePinyin_);
      DARABONBA_PTR_TO_JSON(stamp, stamp_);
      DARABONBA_PTR_TO_JSON(tbRoleId, tbRoleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& obj) { 
      DARABONBA_PTR_FROM_JSON(account, account_);
      DARABONBA_PTR_FROM_JSON(avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(dingTalkId, dingTalkId_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(displayNickName, displayNickName_);
      DARABONBA_PTR_FROM_JSON(displayRealName, displayRealName_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(isDisabled, isDisabled_);
      DARABONBA_PTR_FROM_JSON(mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(nameEn, nameEn_);
      DARABONBA_PTR_FROM_JSON(nickName, nickName_);
      DARABONBA_PTR_FROM_JSON(nickNamePinyin, nickNamePinyin_);
      DARABONBA_PTR_FROM_JSON(realName, realName_);
      DARABONBA_PTR_FROM_JSON(realNamePinyin, realNamePinyin_);
      DARABONBA_PTR_FROM_JSON(stamp, stamp_);
      DARABONBA_PTR_FROM_JSON(tbRoleId, tbRoleId_);
    };
    CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser() = default ;
    CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser(const CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser &) = default ;
    CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser(CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser &&) = default ;
    CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser() = default ;
    CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& operator=(const CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser &) = default ;
    CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& operator=(CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->avatar_ == nullptr && return this->dingTalkId_ == nullptr && return this->displayName_ == nullptr && return this->displayNickName_ == nullptr && return this->displayRealName_ == nullptr
        && return this->email_ == nullptr && return this->gender_ == nullptr && return this->identifier_ == nullptr && return this->isDisabled_ == nullptr && return this->mobile_ == nullptr
        && return this->nameEn_ == nullptr && return this->nickName_ == nullptr && return this->nickNamePinyin_ == nullptr && return this->realName_ == nullptr && return this->realNamePinyin_ == nullptr
        && return this->stamp_ == nullptr && return this->tbRoleId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // dingTalkId Field Functions 
    bool hasDingTalkId() const { return this->dingTalkId_ != nullptr;};
    void deleteDingTalkId() { this->dingTalkId_ = nullptr;};
    inline string dingTalkId() const { DARABONBA_PTR_GET_DEFAULT(dingTalkId_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setDingTalkId(string dingTalkId) { DARABONBA_PTR_SET_VALUE(dingTalkId_, dingTalkId) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // displayNickName Field Functions 
    bool hasDisplayNickName() const { return this->displayNickName_ != nullptr;};
    void deleteDisplayNickName() { this->displayNickName_ = nullptr;};
    inline string displayNickName() const { DARABONBA_PTR_GET_DEFAULT(displayNickName_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setDisplayNickName(string displayNickName) { DARABONBA_PTR_SET_VALUE(displayNickName_, displayNickName) };


    // displayRealName Field Functions 
    bool hasDisplayRealName() const { return this->displayRealName_ != nullptr;};
    void deleteDisplayRealName() { this->displayRealName_ = nullptr;};
    inline string displayRealName() const { DARABONBA_PTR_GET_DEFAULT(displayRealName_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setDisplayRealName(string displayRealName) { DARABONBA_PTR_SET_VALUE(displayRealName_, displayRealName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // isDisabled Field Functions 
    bool hasIsDisabled() const { return this->isDisabled_ != nullptr;};
    void deleteIsDisabled() { this->isDisabled_ = nullptr;};
    inline bool isDisabled() const { DARABONBA_PTR_GET_DEFAULT(isDisabled_, false) };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setIsDisabled(bool isDisabled) { DARABONBA_PTR_SET_VALUE(isDisabled_, isDisabled) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // nameEn Field Functions 
    bool hasNameEn() const { return this->nameEn_ != nullptr;};
    void deleteNameEn() { this->nameEn_ = nullptr;};
    inline string nameEn() const { DARABONBA_PTR_GET_DEFAULT(nameEn_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setNameEn(string nameEn) { DARABONBA_PTR_SET_VALUE(nameEn_, nameEn) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // nickNamePinyin Field Functions 
    bool hasNickNamePinyin() const { return this->nickNamePinyin_ != nullptr;};
    void deleteNickNamePinyin() { this->nickNamePinyin_ = nullptr;};
    inline string nickNamePinyin() const { DARABONBA_PTR_GET_DEFAULT(nickNamePinyin_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setNickNamePinyin(string nickNamePinyin) { DARABONBA_PTR_SET_VALUE(nickNamePinyin_, nickNamePinyin) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string realName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    // realNamePinyin Field Functions 
    bool hasRealNamePinyin() const { return this->realNamePinyin_ != nullptr;};
    void deleteRealNamePinyin() { this->realNamePinyin_ = nullptr;};
    inline string realNamePinyin() const { DARABONBA_PTR_GET_DEFAULT(realNamePinyin_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setRealNamePinyin(string realNamePinyin) { DARABONBA_PTR_SET_VALUE(realNamePinyin_, realNamePinyin) };


    // stamp Field Functions 
    bool hasStamp() const { return this->stamp_ != nullptr;};
    void deleteStamp() { this->stamp_ = nullptr;};
    inline string stamp() const { DARABONBA_PTR_GET_DEFAULT(stamp_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setStamp(string stamp) { DARABONBA_PTR_SET_VALUE(stamp_, stamp) };


    // tbRoleId Field Functions 
    bool hasTbRoleId() const { return this->tbRoleId_ != nullptr;};
    void deleteTbRoleId() { this->tbRoleId_ = nullptr;};
    inline string tbRoleId() const { DARABONBA_PTR_GET_DEFAULT(tbRoleId_, "") };
    inline CreateWorkitemRecordResponseBodyWorkitemTimeRecordUser& setTbRoleId(string tbRoleId) { DARABONBA_PTR_SET_VALUE(tbRoleId_, tbRoleId) };


  protected:
    std::shared_ptr<string> account_ = nullptr;
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<string> dingTalkId_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> displayNickName_ = nullptr;
    std::shared_ptr<string> displayRealName_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<bool> isDisabled_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<string> nameEn_ = nullptr;
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> nickNamePinyin_ = nullptr;
    std::shared_ptr<string> realName_ = nullptr;
    std::shared_ptr<string> realNamePinyin_ = nullptr;
    std::shared_ptr<string> stamp_ = nullptr;
    std::shared_ptr<string> tbRoleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
