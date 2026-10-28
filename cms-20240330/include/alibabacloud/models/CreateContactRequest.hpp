// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTACTREQUEST_HPP_
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
  class CreateContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contactId, contactId_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(imUserIds, imUserIds_);
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contactId, contactId_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(imUserIds, imUserIds_);
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    CreateContactRequest() = default ;
    CreateContactRequest(const CreateContactRequest &) = default ;
    CreateContactRequest(CreateContactRequest &&) = default ;
    CreateContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContactRequest() = default ;
    CreateContactRequest& operator=(const CreateContactRequest &) = default ;
    CreateContactRequest& operator=(CreateContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && this->email_ == nullptr && this->imUserIds_ == nullptr && this->lang_ == nullptr && this->name_ == nullptr && this->phone_ == nullptr
        && this->workspace_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline CreateContactRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateContactRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // imUserIds Field Functions 
    bool hasImUserIds() const { return this->imUserIds_ != nullptr;};
    void deleteImUserIds() { this->imUserIds_ = nullptr;};
    inline const map<string, string> & getImUserIds() const { DARABONBA_PTR_GET_CONST(imUserIds_, map<string, string>) };
    inline map<string, string> getImUserIds() { DARABONBA_PTR_GET(imUserIds_, map<string, string>) };
    inline CreateContactRequest& setImUserIds(const map<string, string> & imUserIds) { DARABONBA_PTR_SET_VALUE(imUserIds_, imUserIds) };
    inline CreateContactRequest& setImUserIds(map<string, string> && imUserIds) { DARABONBA_PTR_SET_RVALUE(imUserIds_, imUserIds) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateContactRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateContactRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline CreateContactRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreateContactRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The ID of the contact.
    shared_ptr<string> contactId_ {};
    // The email address.
    shared_ptr<string> email_ {};
    // The instant messaging (IM) user ID mapping, which supports multi-platform integration. The key is the IM type (such as DING or WEIXIN), and the value is the corresponding user ID.
    shared_ptr<map<string, string>> imUserIds_ {};
    // The language.
    shared_ptr<string> lang_ {};
    // The name of the contact.
    shared_ptr<string> name_ {};
    // The mobile phone number. Currently, only mobile phone numbers in the Chinese mainland are supported.
    shared_ptr<string> phone_ {};
    // The name of the workspace.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
