// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTACTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTACTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class CreateContacterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContacterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContacterAddress, contacterAddress_);
      DARABONBA_PTR_TO_JSON(ContacterDingding, contacterDingding_);
      DARABONBA_PTR_TO_JSON(ContacterEmail, contacterEmail_);
      DARABONBA_PTR_TO_JSON(ContacterMobile, contacterMobile_);
      DARABONBA_PTR_TO_JSON(ContacterName, contacterName_);
      DARABONBA_PTR_TO_JSON(ContacterPosition, contacterPosition_);
      DARABONBA_PTR_TO_JSON(ContacterStaffNo, contacterStaffNo_);
      DARABONBA_PTR_TO_JSON(ContacterType, contacterType_);
      DARABONBA_PTR_TO_JSON(ContacterWangwang, contacterWangwang_);
      DARABONBA_PTR_TO_JSON(EmailConfirmed, emailConfirmed_);
      DARABONBA_PTR_TO_JSON(MobileConfirmed, mobileConfirmed_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContacterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContacterAddress, contacterAddress_);
      DARABONBA_PTR_FROM_JSON(ContacterDingding, contacterDingding_);
      DARABONBA_PTR_FROM_JSON(ContacterEmail, contacterEmail_);
      DARABONBA_PTR_FROM_JSON(ContacterMobile, contacterMobile_);
      DARABONBA_PTR_FROM_JSON(ContacterName, contacterName_);
      DARABONBA_PTR_FROM_JSON(ContacterPosition, contacterPosition_);
      DARABONBA_PTR_FROM_JSON(ContacterStaffNo, contacterStaffNo_);
      DARABONBA_PTR_FROM_JSON(ContacterType, contacterType_);
      DARABONBA_PTR_FROM_JSON(ContacterWangwang, contacterWangwang_);
      DARABONBA_PTR_FROM_JSON(EmailConfirmed, emailConfirmed_);
      DARABONBA_PTR_FROM_JSON(MobileConfirmed, mobileConfirmed_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateContacterRequest() = default ;
    CreateContacterRequest(const CreateContacterRequest &) = default ;
    CreateContacterRequest(CreateContacterRequest &&) = default ;
    CreateContacterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContacterRequest() = default ;
    CreateContacterRequest& operator=(const CreateContacterRequest &) = default ;
    CreateContacterRequest& operator=(CreateContacterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contacterAddress_ == nullptr
        && this->contacterDingding_ == nullptr && this->contacterEmail_ == nullptr && this->contacterMobile_ == nullptr && this->contacterName_ == nullptr && this->contacterPosition_ == nullptr
        && this->contacterStaffNo_ == nullptr && this->contacterType_ == nullptr && this->contacterWangwang_ == nullptr && this->emailConfirmed_ == nullptr && this->mobileConfirmed_ == nullptr
        && this->userId_ == nullptr; };
    // contacterAddress Field Functions 
    bool hasContacterAddress() const { return this->contacterAddress_ != nullptr;};
    void deleteContacterAddress() { this->contacterAddress_ = nullptr;};
    inline string getContacterAddress() const { DARABONBA_PTR_GET_DEFAULT(contacterAddress_, "") };
    inline CreateContacterRequest& setContacterAddress(string contacterAddress) { DARABONBA_PTR_SET_VALUE(contacterAddress_, contacterAddress) };


    // contacterDingding Field Functions 
    bool hasContacterDingding() const { return this->contacterDingding_ != nullptr;};
    void deleteContacterDingding() { this->contacterDingding_ = nullptr;};
    inline string getContacterDingding() const { DARABONBA_PTR_GET_DEFAULT(contacterDingding_, "") };
    inline CreateContacterRequest& setContacterDingding(string contacterDingding) { DARABONBA_PTR_SET_VALUE(contacterDingding_, contacterDingding) };


    // contacterEmail Field Functions 
    bool hasContacterEmail() const { return this->contacterEmail_ != nullptr;};
    void deleteContacterEmail() { this->contacterEmail_ = nullptr;};
    inline string getContacterEmail() const { DARABONBA_PTR_GET_DEFAULT(contacterEmail_, "") };
    inline CreateContacterRequest& setContacterEmail(string contacterEmail) { DARABONBA_PTR_SET_VALUE(contacterEmail_, contacterEmail) };


    // contacterMobile Field Functions 
    bool hasContacterMobile() const { return this->contacterMobile_ != nullptr;};
    void deleteContacterMobile() { this->contacterMobile_ = nullptr;};
    inline string getContacterMobile() const { DARABONBA_PTR_GET_DEFAULT(contacterMobile_, "") };
    inline CreateContacterRequest& setContacterMobile(string contacterMobile) { DARABONBA_PTR_SET_VALUE(contacterMobile_, contacterMobile) };


    // contacterName Field Functions 
    bool hasContacterName() const { return this->contacterName_ != nullptr;};
    void deleteContacterName() { this->contacterName_ = nullptr;};
    inline string getContacterName() const { DARABONBA_PTR_GET_DEFAULT(contacterName_, "") };
    inline CreateContacterRequest& setContacterName(string contacterName) { DARABONBA_PTR_SET_VALUE(contacterName_, contacterName) };


    // contacterPosition Field Functions 
    bool hasContacterPosition() const { return this->contacterPosition_ != nullptr;};
    void deleteContacterPosition() { this->contacterPosition_ = nullptr;};
    inline string getContacterPosition() const { DARABONBA_PTR_GET_DEFAULT(contacterPosition_, "") };
    inline CreateContacterRequest& setContacterPosition(string contacterPosition) { DARABONBA_PTR_SET_VALUE(contacterPosition_, contacterPosition) };


    // contacterStaffNo Field Functions 
    bool hasContacterStaffNo() const { return this->contacterStaffNo_ != nullptr;};
    void deleteContacterStaffNo() { this->contacterStaffNo_ = nullptr;};
    inline string getContacterStaffNo() const { DARABONBA_PTR_GET_DEFAULT(contacterStaffNo_, "") };
    inline CreateContacterRequest& setContacterStaffNo(string contacterStaffNo) { DARABONBA_PTR_SET_VALUE(contacterStaffNo_, contacterStaffNo) };


    // contacterType Field Functions 
    bool hasContacterType() const { return this->contacterType_ != nullptr;};
    void deleteContacterType() { this->contacterType_ = nullptr;};
    inline string getContacterType() const { DARABONBA_PTR_GET_DEFAULT(contacterType_, "") };
    inline CreateContacterRequest& setContacterType(string contacterType) { DARABONBA_PTR_SET_VALUE(contacterType_, contacterType) };


    // contacterWangwang Field Functions 
    bool hasContacterWangwang() const { return this->contacterWangwang_ != nullptr;};
    void deleteContacterWangwang() { this->contacterWangwang_ = nullptr;};
    inline string getContacterWangwang() const { DARABONBA_PTR_GET_DEFAULT(contacterWangwang_, "") };
    inline CreateContacterRequest& setContacterWangwang(string contacterWangwang) { DARABONBA_PTR_SET_VALUE(contacterWangwang_, contacterWangwang) };


    // emailConfirmed Field Functions 
    bool hasEmailConfirmed() const { return this->emailConfirmed_ != nullptr;};
    void deleteEmailConfirmed() { this->emailConfirmed_ = nullptr;};
    inline bool getEmailConfirmed() const { DARABONBA_PTR_GET_DEFAULT(emailConfirmed_, false) };
    inline CreateContacterRequest& setEmailConfirmed(bool emailConfirmed) { DARABONBA_PTR_SET_VALUE(emailConfirmed_, emailConfirmed) };


    // mobileConfirmed Field Functions 
    bool hasMobileConfirmed() const { return this->mobileConfirmed_ != nullptr;};
    void deleteMobileConfirmed() { this->mobileConfirmed_ = nullptr;};
    inline bool getMobileConfirmed() const { DARABONBA_PTR_GET_DEFAULT(mobileConfirmed_, false) };
    inline CreateContacterRequest& setMobileConfirmed(bool mobileConfirmed) { DARABONBA_PTR_SET_VALUE(mobileConfirmed_, mobileConfirmed) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline CreateContacterRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> contacterAddress_ {};
    shared_ptr<string> contacterDingding_ {};
    shared_ptr<string> contacterEmail_ {};
    shared_ptr<string> contacterMobile_ {};
    // This parameter is required.
    shared_ptr<string> contacterName_ {};
    shared_ptr<string> contacterPosition_ {};
    shared_ptr<string> contacterStaffNo_ {};
    shared_ptr<string> contacterType_ {};
    shared_ptr<string> contacterWangwang_ {};
    shared_ptr<bool> emailConfirmed_ {};
    shared_ptr<bool> mobileConfirmed_ {};
    // This parameter is required.
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
