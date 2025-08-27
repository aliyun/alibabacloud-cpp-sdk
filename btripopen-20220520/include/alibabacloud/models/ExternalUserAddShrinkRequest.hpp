// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTERNALUSERADDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXTERNALUSERADDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ExternalUserAddShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExternalUserAddShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(cert_request_list, certRequestListShrink_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(external_user_id, externalUserId_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(real_name, realName_);
      DARABONBA_PTR_TO_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_TO_JSON(user_type, userType_);
    };
    friend void from_json(const Darabonba::Json& j, ExternalUserAddShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(cert_request_list, certRequestListShrink_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(external_user_id, externalUserId_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(real_name, realName_);
      DARABONBA_PTR_FROM_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_FROM_JSON(user_type, userType_);
    };
    ExternalUserAddShrinkRequest() = default ;
    ExternalUserAddShrinkRequest(const ExternalUserAddShrinkRequest &) = default ;
    ExternalUserAddShrinkRequest(ExternalUserAddShrinkRequest &&) = default ;
    ExternalUserAddShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExternalUserAddShrinkRequest() = default ;
    ExternalUserAddShrinkRequest& operator=(const ExternalUserAddShrinkRequest &) = default ;
    ExternalUserAddShrinkRequest& operator=(ExternalUserAddShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->birthday_ != nullptr
        && this->certRequestListShrink_ != nullptr && this->email_ != nullptr && this->externalUserId_ != nullptr && this->phone_ != nullptr && this->realName_ != nullptr
        && this->realNameEn_ != nullptr && this->userType_ != nullptr; };
    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string birthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline ExternalUserAddShrinkRequest& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // certRequestListShrink Field Functions 
    bool hasCertRequestListShrink() const { return this->certRequestListShrink_ != nullptr;};
    void deleteCertRequestListShrink() { this->certRequestListShrink_ = nullptr;};
    inline string certRequestListShrink() const { DARABONBA_PTR_GET_DEFAULT(certRequestListShrink_, "") };
    inline ExternalUserAddShrinkRequest& setCertRequestListShrink(string certRequestListShrink) { DARABONBA_PTR_SET_VALUE(certRequestListShrink_, certRequestListShrink) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ExternalUserAddShrinkRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string externalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline ExternalUserAddShrinkRequest& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline ExternalUserAddShrinkRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string realName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline ExternalUserAddShrinkRequest& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    // realNameEn Field Functions 
    bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
    void deleteRealNameEn() { this->realNameEn_ = nullptr;};
    inline string realNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
    inline ExternalUserAddShrinkRequest& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline ExternalUserAddShrinkRequest& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    std::shared_ptr<string> birthday_ = nullptr;
    std::shared_ptr<string> certRequestListShrink_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> externalUserId_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> realName_ = nullptr;
    std::shared_ptr<string> realNameEn_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
