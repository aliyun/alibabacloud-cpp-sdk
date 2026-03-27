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
        && this->emailVerify_ == nullptr && this->extend_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->identifier_ == nullptr
        && this->lang_ == nullptr && this->name_ == nullptr && this->phone_ == nullptr && this->phoneCode_ == nullptr && this->phoneVerify_ == nullptr
        && this->source_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline MergeContact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailVerify Field Functions 
    bool hasEmailVerify() const { return this->emailVerify_ != nullptr;};
    void deleteEmailVerify() { this->emailVerify_ = nullptr;};
    inline bool getEmailVerify() const { DARABONBA_PTR_GET_DEFAULT(emailVerify_, false) };
    inline MergeContact& setEmailVerify(bool emailVerify) { DARABONBA_PTR_SET_VALUE(emailVerify_, emailVerify) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline     const Darabonba::Json & getExtend() const { DARABONBA_GET(extend_) };
    Darabonba::Json & getExtend() { DARABONBA_GET(extend_) };
    inline MergeContact& setExtend(const Darabonba::Json & extend) { DARABONBA_SET_VALUE(extend_, extend) };
    inline MergeContact& setExtend(Darabonba::Json && extend) { DARABONBA_SET_RVALUE(extend_, extend) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline MergeContact& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline MergeContact& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline MergeContact& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline MergeContact& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MergeContact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline MergeContact& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // phoneCode Field Functions 
    bool hasPhoneCode() const { return this->phoneCode_ != nullptr;};
    void deletePhoneCode() { this->phoneCode_ = nullptr;};
    inline string getPhoneCode() const { DARABONBA_PTR_GET_DEFAULT(phoneCode_, "") };
    inline MergeContact& setPhoneCode(string phoneCode) { DARABONBA_PTR_SET_VALUE(phoneCode_, phoneCode) };


    // phoneVerify Field Functions 
    bool hasPhoneVerify() const { return this->phoneVerify_ != nullptr;};
    void deletePhoneVerify() { this->phoneVerify_ = nullptr;};
    inline bool getPhoneVerify() const { DARABONBA_PTR_GET_DEFAULT(phoneVerify_, false) };
    inline MergeContact& setPhoneVerify(bool phoneVerify) { DARABONBA_PTR_SET_VALUE(phoneVerify_, phoneVerify) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline MergeContact& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    shared_ptr<string> email_ {};
    shared_ptr<bool> emailVerify_ {};
    Darabonba::Json extend_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> identifier_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<string> phoneCode_ {};
    shared_ptr<bool> phoneVerify_ {};
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
