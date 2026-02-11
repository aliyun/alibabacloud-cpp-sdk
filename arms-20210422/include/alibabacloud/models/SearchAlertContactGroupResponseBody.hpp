// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTCONTACTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTCONTACTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class SearchAlertContactGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertContactGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertContactGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SearchAlertContactGroupResponseBody() = default ;
    SearchAlertContactGroupResponseBody(const SearchAlertContactGroupResponseBody &) = default ;
    SearchAlertContactGroupResponseBody(SearchAlertContactGroupResponseBody &&) = default ;
    SearchAlertContactGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertContactGroupResponseBody() = default ;
    SearchAlertContactGroupResponseBody& operator=(const SearchAlertContactGroupResponseBody &) = default ;
    SearchAlertContactGroupResponseBody& operator=(SearchAlertContactGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContactGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactGroups& obj) { 
        DARABONBA_PTR_TO_JSON(ContactGroupId, contactGroupId_);
        DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
        DARABONBA_PTR_TO_JSON(Contacts, contacts_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ContactGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactGroupId, contactGroupId_);
        DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
        DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      ContactGroups() = default ;
      ContactGroups(const ContactGroups &) = default ;
      ContactGroups(ContactGroups &&) = default ;
      ContactGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContactGroups() = default ;
      ContactGroups& operator=(const ContactGroups &) = default ;
      ContactGroups& operator=(ContactGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Contacts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Contacts& obj) { 
          DARABONBA_PTR_TO_JSON(ContactId, contactId_);
          DARABONBA_PTR_TO_JSON(ContactName, contactName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DingRobot, dingRobot_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(Phone, phone_);
          DARABONBA_PTR_TO_JSON(SystemNoc, systemNoc_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Contacts& obj) { 
          DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
          DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DingRobot, dingRobot_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(Phone, phone_);
          DARABONBA_PTR_FROM_JSON(SystemNoc, systemNoc_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
        && this->contactName_ == nullptr && this->createTime_ == nullptr && this->dingRobot_ == nullptr && this->email_ == nullptr && this->phone_ == nullptr
        && this->systemNoc_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
        // contactId Field Functions 
        bool hasContactId() const { return this->contactId_ != nullptr;};
        void deleteContactId() { this->contactId_ = nullptr;};
        inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
        inline Contacts& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


        // contactName Field Functions 
        bool hasContactName() const { return this->contactName_ != nullptr;};
        void deleteContactName() { this->contactName_ = nullptr;};
        inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
        inline Contacts& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Contacts& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dingRobot Field Functions 
        bool hasDingRobot() const { return this->dingRobot_ != nullptr;};
        void deleteDingRobot() { this->dingRobot_ = nullptr;};
        inline string getDingRobot() const { DARABONBA_PTR_GET_DEFAULT(dingRobot_, "") };
        inline Contacts& setDingRobot(string dingRobot) { DARABONBA_PTR_SET_VALUE(dingRobot_, dingRobot) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline Contacts& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline Contacts& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // systemNoc Field Functions 
        bool hasSystemNoc() const { return this->systemNoc_ != nullptr;};
        void deleteSystemNoc() { this->systemNoc_ = nullptr;};
        inline bool getSystemNoc() const { DARABONBA_PTR_GET_DEFAULT(systemNoc_, false) };
        inline Contacts& setSystemNoc(bool systemNoc) { DARABONBA_PTR_SET_VALUE(systemNoc_, systemNoc) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Contacts& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Contacts& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<int64_t> contactId_ {};
        shared_ptr<string> contactName_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> dingRobot_ {};
        shared_ptr<string> email_ {};
        shared_ptr<string> phone_ {};
        shared_ptr<bool> systemNoc_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->contactGroupId_ == nullptr
        && this->contactGroupName_ == nullptr && this->contacts_ == nullptr && this->createTime_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
      // contactGroupId Field Functions 
      bool hasContactGroupId() const { return this->contactGroupId_ != nullptr;};
      void deleteContactGroupId() { this->contactGroupId_ = nullptr;};
      inline int64_t getContactGroupId() const { DARABONBA_PTR_GET_DEFAULT(contactGroupId_, 0L) };
      inline ContactGroups& setContactGroupId(int64_t contactGroupId) { DARABONBA_PTR_SET_VALUE(contactGroupId_, contactGroupId) };


      // contactGroupName Field Functions 
      bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
      void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
      inline string getContactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
      inline ContactGroups& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


      // contacts Field Functions 
      bool hasContacts() const { return this->contacts_ != nullptr;};
      void deleteContacts() { this->contacts_ = nullptr;};
      inline const vector<ContactGroups::Contacts> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<ContactGroups::Contacts>) };
      inline vector<ContactGroups::Contacts> getContacts() { DARABONBA_PTR_GET(contacts_, vector<ContactGroups::Contacts>) };
      inline ContactGroups& setContacts(const vector<ContactGroups::Contacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
      inline ContactGroups& setContacts(vector<ContactGroups::Contacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ContactGroups& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ContactGroups& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ContactGroups& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int64_t> contactGroupId_ {};
      shared_ptr<string> contactGroupName_ {};
      shared_ptr<vector<ContactGroups::Contacts>> contacts_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<int64_t> updateTime_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->contactGroups_ == nullptr
        && this->requestId_ == nullptr; };
    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const vector<SearchAlertContactGroupResponseBody::ContactGroups> & getContactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, vector<SearchAlertContactGroupResponseBody::ContactGroups>) };
    inline vector<SearchAlertContactGroupResponseBody::ContactGroups> getContactGroups() { DARABONBA_PTR_GET(contactGroups_, vector<SearchAlertContactGroupResponseBody::ContactGroups>) };
    inline SearchAlertContactGroupResponseBody& setContactGroups(const vector<SearchAlertContactGroupResponseBody::ContactGroups> & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline SearchAlertContactGroupResponseBody& setContactGroups(vector<SearchAlertContactGroupResponseBody::ContactGroups> && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchAlertContactGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<SearchAlertContactGroupResponseBody::ContactGroups>> contactGroups_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
