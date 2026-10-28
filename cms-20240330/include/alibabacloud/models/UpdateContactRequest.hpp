// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(imUserIds, imUserIds_);
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(imUserIds, imUserIds_);
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
    };
    UpdateContactRequest() = default ;
    UpdateContactRequest(const UpdateContactRequest &) = default ;
    UpdateContactRequest(UpdateContactRequest &&) = default ;
    UpdateContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContactRequest() = default ;
    UpdateContactRequest& operator=(const UpdateContactRequest &) = default ;
    UpdateContactRequest& operator=(UpdateContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && this->imUserIds_ == nullptr && this->lang_ == nullptr && this->name_ == nullptr && this->phone_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline UpdateContactRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // imUserIds Field Functions 
    bool hasImUserIds() const { return this->imUserIds_ != nullptr;};
    void deleteImUserIds() { this->imUserIds_ = nullptr;};
    inline const map<string, string> & getImUserIds() const { DARABONBA_PTR_GET_CONST(imUserIds_, map<string, string>) };
    inline map<string, string> getImUserIds() { DARABONBA_PTR_GET(imUserIds_, map<string, string>) };
    inline UpdateContactRequest& setImUserIds(const map<string, string> & imUserIds) { DARABONBA_PTR_SET_VALUE(imUserIds_, imUserIds) };
    inline UpdateContactRequest& setImUserIds(map<string, string> && imUserIds) { DARABONBA_PTR_SET_RVALUE(imUserIds_, imUserIds) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateContactRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateContactRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline UpdateContactRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


  protected:
    // The email address of the contact.
    shared_ptr<string> email_ {};
    // The IM user ID mappings. Multiple instant messaging tools are supported.
    shared_ptr<map<string, string>> imUserIds_ {};
    // The language.
    shared_ptr<string> lang_ {};
    // The name of the contact.
    shared_ptr<string> name_ {};
    // The mobile phone number of the contact. Only mobile phone numbers in the Chinese mainland are supported.
    shared_ptr<string> phone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
