// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTACTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTACTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListContactsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContactsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(contacts, contacts_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListContactsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListContactsResponseBody() = default ;
    ListContactsResponseBody(const ListContactsResponseBody &) = default ;
    ListContactsResponseBody(ListContactsResponseBody &&) = default ;
    ListContactsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContactsResponseBody() = default ;
    ListContactsResponseBody& operator=(const ListContactsResponseBody &) = default ;
    ListContactsResponseBody& operator=(ListContactsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Contacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contacts& obj) { 
        DARABONBA_PTR_TO_JSON(contactId, contactId_);
        DARABONBA_PTR_TO_JSON(email, email_);
        DARABONBA_PTR_TO_JSON(emailVerify, emailVerify_);
        DARABONBA_PTR_TO_JSON(groupList, groupList_);
        DARABONBA_PTR_TO_JSON(imUserIds, imUserIds_);
        DARABONBA_PTR_TO_JSON(lang, lang_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(phone, phone_);
        DARABONBA_PTR_TO_JSON(phoneVerify, phoneVerify_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Contacts& obj) { 
        DARABONBA_PTR_FROM_JSON(contactId, contactId_);
        DARABONBA_PTR_FROM_JSON(email, email_);
        DARABONBA_PTR_FROM_JSON(emailVerify, emailVerify_);
        DARABONBA_PTR_FROM_JSON(groupList, groupList_);
        DARABONBA_PTR_FROM_JSON(imUserIds, imUserIds_);
        DARABONBA_PTR_FROM_JSON(lang, lang_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(phone, phone_);
        DARABONBA_PTR_FROM_JSON(phoneVerify, phoneVerify_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      Contacts() = default ;
      Contacts(const Contacts &) = default ;
      Contacts(Contacts &&) = default ;
      Contacts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Contacts() = default ;
      Contacts& operator=(const Contacts &) = default ;
      Contacts& operator=(Contacts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contactId_ == nullptr
        && this->email_ == nullptr && this->emailVerify_ == nullptr && this->groupList_ == nullptr && this->imUserIds_ == nullptr && this->lang_ == nullptr
        && this->name_ == nullptr && this->phone_ == nullptr && this->phoneVerify_ == nullptr && this->updateTime_ == nullptr && this->workspace_ == nullptr; };
      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
      inline Contacts& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Contacts& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // emailVerify Field Functions 
      bool hasEmailVerify() const { return this->emailVerify_ != nullptr;};
      void deleteEmailVerify() { this->emailVerify_ = nullptr;};
      inline bool getEmailVerify() const { DARABONBA_PTR_GET_DEFAULT(emailVerify_, false) };
      inline Contacts& setEmailVerify(bool emailVerify) { DARABONBA_PTR_SET_VALUE(emailVerify_, emailVerify) };


      // groupList Field Functions 
      bool hasGroupList() const { return this->groupList_ != nullptr;};
      void deleteGroupList() { this->groupList_ = nullptr;};
      inline const vector<string> & getGroupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<string>) };
      inline vector<string> getGroupList() { DARABONBA_PTR_GET(groupList_, vector<string>) };
      inline Contacts& setGroupList(const vector<string> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
      inline Contacts& setGroupList(vector<string> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


      // imUserIds Field Functions 
      bool hasImUserIds() const { return this->imUserIds_ != nullptr;};
      void deleteImUserIds() { this->imUserIds_ = nullptr;};
      inline const map<string, string> & getImUserIds() const { DARABONBA_PTR_GET_CONST(imUserIds_, map<string, string>) };
      inline map<string, string> getImUserIds() { DARABONBA_PTR_GET(imUserIds_, map<string, string>) };
      inline Contacts& setImUserIds(const map<string, string> & imUserIds) { DARABONBA_PTR_SET_VALUE(imUserIds_, imUserIds) };
      inline Contacts& setImUserIds(map<string, string> && imUserIds) { DARABONBA_PTR_SET_RVALUE(imUserIds_, imUserIds) };


      // lang Field Functions 
      bool hasLang() const { return this->lang_ != nullptr;};
      void deleteLang() { this->lang_ = nullptr;};
      inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
      inline Contacts& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Contacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Contacts& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // phoneVerify Field Functions 
      bool hasPhoneVerify() const { return this->phoneVerify_ != nullptr;};
      void deletePhoneVerify() { this->phoneVerify_ = nullptr;};
      inline bool getPhoneVerify() const { DARABONBA_PTR_GET_DEFAULT(phoneVerify_, false) };
      inline Contacts& setPhoneVerify(bool phoneVerify) { DARABONBA_PTR_SET_VALUE(phoneVerify_, phoneVerify) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Contacts& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Contacts& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      shared_ptr<string> contactId_ {};
      shared_ptr<string> email_ {};
      shared_ptr<bool> emailVerify_ {};
      shared_ptr<vector<string>> groupList_ {};
      shared_ptr<map<string, string>> imUserIds_ {};
      shared_ptr<string> lang_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> phone_ {};
      shared_ptr<bool> phoneVerify_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->contacts_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<ListContactsResponseBody::Contacts> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<ListContactsResponseBody::Contacts>) };
    inline vector<ListContactsResponseBody::Contacts> getContacts() { DARABONBA_PTR_GET(contacts_, vector<ListContactsResponseBody::Contacts>) };
    inline ListContactsResponseBody& setContacts(const vector<ListContactsResponseBody::Contacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline ListContactsResponseBody& setContacts(vector<ListContactsResponseBody::Contacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListContactsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListContactsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContactsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListContactsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ListContactsResponseBody::Contacts>> contacts_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
