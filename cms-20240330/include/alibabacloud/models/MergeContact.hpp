// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGECONTACT_HPP_
#define ALIBABACLOUD_MODELS_MERGECONTACT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class MergeContact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeContact& obj) { 
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(emailVerify, emailVerify_);
      DARABONBA_ANY_TO_JSON(extend, extend_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(phoneCode, phoneCode_);
      DARABONBA_PTR_TO_JSON(phoneVerify, phoneVerify_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, MergeContact& obj) { 
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(emailVerify, emailVerify_);
      DARABONBA_ANY_FROM_JSON(extend, extend_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(phoneCode, phoneCode_);
      DARABONBA_PTR_FROM_JSON(phoneVerify, phoneVerify_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    MergeContact() = default ;
    MergeContact(const MergeContact &) = default ;
    MergeContact(MergeContact &&) = default ;
    MergeContact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeContact() = default ;
    MergeContact& operator=(const MergeContact &) = default ;
    MergeContact& operator=(MergeContact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && return this->emailVerify_ == nullptr && return this->extend_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->identifier_ == nullptr
        && return this->lang_ == nullptr && return this->name_ == nullptr && return this->phone_ == nullptr && return this->phoneCode_ == nullptr && return this->phoneVerify_ == nullptr
        && return this->source_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline MergeContact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailVerify Field Functions 
    bool hasEmailVerify() const { return this->emailVerify_ != nullptr;};
    void deleteEmailVerify() { this->emailVerify_ = nullptr;};
    inline bool emailVerify() const { DARABONBA_PTR_GET_DEFAULT(emailVerify_, false) };
    inline MergeContact& setEmailVerify(bool emailVerify) { DARABONBA_PTR_SET_VALUE(emailVerify_, emailVerify) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline     const Darabonba::Json & extend() const { DARABONBA_GET(extend_) };
    Darabonba::Json & extend() { DARABONBA_GET(extend_) };
    inline MergeContact& setExtend(const Darabonba::Json & extend) { DARABONBA_SET_VALUE(extend_, extend) };
    inline MergeContact& setExtend(Darabonba::Json & extend) { DARABONBA_SET_RVALUE(extend_, extend) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline MergeContact& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline MergeContact& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline MergeContact& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline MergeContact& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MergeContact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline MergeContact& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // phoneCode Field Functions 
    bool hasPhoneCode() const { return this->phoneCode_ != nullptr;};
    void deletePhoneCode() { this->phoneCode_ = nullptr;};
    inline string phoneCode() const { DARABONBA_PTR_GET_DEFAULT(phoneCode_, "") };
    inline MergeContact& setPhoneCode(string phoneCode) { DARABONBA_PTR_SET_VALUE(phoneCode_, phoneCode) };


    // phoneVerify Field Functions 
    bool hasPhoneVerify() const { return this->phoneVerify_ != nullptr;};
    void deletePhoneVerify() { this->phoneVerify_ = nullptr;};
    inline bool phoneVerify() const { DARABONBA_PTR_GET_DEFAULT(phoneVerify_, false) };
    inline MergeContact& setPhoneVerify(bool phoneVerify) { DARABONBA_PTR_SET_VALUE(phoneVerify_, phoneVerify) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline MergeContact& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<bool> emailVerify_ = nullptr;
    Darabonba::Json extend_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> phoneCode_ = nullptr;
    std::shared_ptr<bool> phoneVerify_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
