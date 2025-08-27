// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTERNALUSERUPDATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXTERNALUSERUPDATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ExternalUserUpdateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExternalUserUpdateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(cert_request_list, certRequestListShrink_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(real_name, realName_);
      DARABONBA_PTR_TO_JSON(real_name_en, realNameEn_);
    };
    friend void from_json(const Darabonba::Json& j, ExternalUserUpdateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(cert_request_list, certRequestListShrink_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(real_name, realName_);
      DARABONBA_PTR_FROM_JSON(real_name_en, realNameEn_);
    };
    ExternalUserUpdateShrinkRequest() = default ;
    ExternalUserUpdateShrinkRequest(const ExternalUserUpdateShrinkRequest &) = default ;
    ExternalUserUpdateShrinkRequest(ExternalUserUpdateShrinkRequest &&) = default ;
    ExternalUserUpdateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExternalUserUpdateShrinkRequest() = default ;
    ExternalUserUpdateShrinkRequest& operator=(const ExternalUserUpdateShrinkRequest &) = default ;
    ExternalUserUpdateShrinkRequest& operator=(ExternalUserUpdateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->birthday_ != nullptr
        && this->certRequestListShrink_ != nullptr && this->email_ != nullptr && this->phone_ != nullptr && this->realName_ != nullptr && this->realNameEn_ != nullptr; };
    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string birthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline ExternalUserUpdateShrinkRequest& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // certRequestListShrink Field Functions 
    bool hasCertRequestListShrink() const { return this->certRequestListShrink_ != nullptr;};
    void deleteCertRequestListShrink() { this->certRequestListShrink_ = nullptr;};
    inline string certRequestListShrink() const { DARABONBA_PTR_GET_DEFAULT(certRequestListShrink_, "") };
    inline ExternalUserUpdateShrinkRequest& setCertRequestListShrink(string certRequestListShrink) { DARABONBA_PTR_SET_VALUE(certRequestListShrink_, certRequestListShrink) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ExternalUserUpdateShrinkRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline ExternalUserUpdateShrinkRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string realName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline ExternalUserUpdateShrinkRequest& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    // realNameEn Field Functions 
    bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
    void deleteRealNameEn() { this->realNameEn_ = nullptr;};
    inline string realNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
    inline ExternalUserUpdateShrinkRequest& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


  protected:
    std::shared_ptr<string> birthday_ = nullptr;
    std::shared_ptr<string> certRequestListShrink_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> realName_ = nullptr;
    std::shared_ptr<string> realNameEn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
