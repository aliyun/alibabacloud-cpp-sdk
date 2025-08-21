// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDUSERLISTTOAUTHLOGINWITHPHONENUMBERRESPONSEBODYRESULTUSERLISTTOAUTHLOGIN_HPP_
#define ALIBABACLOUD_MODELS_FINDUSERLISTTOAUTHLOGINWITHPHONENUMBERRESPONSEBODYRESULTUSERLISTTOAUTHLOGIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin& obj) { 
      DARABONBA_PTR_TO_JSON(Avatar, avatar_);
      DARABONBA_PTR_TO_JSON(EncryptedUserIdentifier, encryptedUserIdentifier_);
      DARABONBA_PTR_TO_JSON(FindingType, findingType_);
      DARABONBA_PTR_TO_JSON(Nickname, nickname_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin& obj) { 
      DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(EncryptedUserIdentifier, encryptedUserIdentifier_);
      DARABONBA_PTR_FROM_JSON(FindingType, findingType_);
      DARABONBA_PTR_FROM_JSON(Nickname, nickname_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin() = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin(const FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin &) = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin(FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin &&) = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin() = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin& operator=(const FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin &) = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin& operator=(FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avatar_ != nullptr
        && this->encryptedUserIdentifier_ != nullptr && this->findingType_ != nullptr && this->nickname_ != nullptr && this->userType_ != nullptr; };
    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // encryptedUserIdentifier Field Functions 
    bool hasEncryptedUserIdentifier() const { return this->encryptedUserIdentifier_ != nullptr;};
    void deleteEncryptedUserIdentifier() { this->encryptedUserIdentifier_ = nullptr;};
    inline string encryptedUserIdentifier() const { DARABONBA_PTR_GET_DEFAULT(encryptedUserIdentifier_, "") };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin& setEncryptedUserIdentifier(string encryptedUserIdentifier) { DARABONBA_PTR_SET_VALUE(encryptedUserIdentifier_, encryptedUserIdentifier) };


    // findingType Field Functions 
    bool hasFindingType() const { return this->findingType_ != nullptr;};
    void deleteFindingType() { this->findingType_ = nullptr;};
    inline string findingType() const { DARABONBA_PTR_GET_DEFAULT(findingType_, "") };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin& setFindingType(string findingType) { DARABONBA_PTR_SET_VALUE(findingType_, findingType) };


    // nickname Field Functions 
    bool hasNickname() const { return this->nickname_ != nullptr;};
    void deleteNickname() { this->nickname_ = nullptr;};
    inline string nickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBodyResultUserListToAuthLogin& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<string> encryptedUserIdentifier_ = nullptr;
    std::shared_ptr<string> findingType_ = nullptr;
    std::shared_ptr<string> nickname_ = nullptr;
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
