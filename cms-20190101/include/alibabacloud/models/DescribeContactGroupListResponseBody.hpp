// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeContactGroupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactGroupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ContactGroupList, contactGroupList_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactGroupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ContactGroupList, contactGroupList_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeContactGroupListResponseBody() = default ;
    DescribeContactGroupListResponseBody(const DescribeContactGroupListResponseBody &) = default ;
    DescribeContactGroupListResponseBody(DescribeContactGroupListResponseBody &&) = default ;
    DescribeContactGroupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactGroupListResponseBody() = default ;
    DescribeContactGroupListResponseBody& operator=(const DescribeContactGroupListResponseBody &) = default ;
    DescribeContactGroupListResponseBody& operator=(DescribeContactGroupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContactGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactGroups& obj) { 
        DARABONBA_PTR_TO_JSON(ContactGroup, contactGroup_);
      };
      friend void from_json(const Darabonba::Json& j, ContactGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactGroup, contactGroup_);
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
      virtual bool empty() const override { return this->contactGroup_ == nullptr; };
      // contactGroup Field Functions 
      bool hasContactGroup() const { return this->contactGroup_ != nullptr;};
      void deleteContactGroup() { this->contactGroup_ = nullptr;};
      inline const vector<string> & getContactGroup() const { DARABONBA_PTR_GET_CONST(contactGroup_, vector<string>) };
      inline vector<string> getContactGroup() { DARABONBA_PTR_GET(contactGroup_, vector<string>) };
      inline ContactGroups& setContactGroup(const vector<string> & contactGroup) { DARABONBA_PTR_SET_VALUE(contactGroup_, contactGroup) };
      inline ContactGroups& setContactGroup(vector<string> && contactGroup) { DARABONBA_PTR_SET_RVALUE(contactGroup_, contactGroup) };


    protected:
      shared_ptr<vector<string>> contactGroup_ {};
    };

    class ContactGroupList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactGroupList& obj) { 
        DARABONBA_PTR_TO_JSON(ContactGroup, contactGroup_);
      };
      friend void from_json(const Darabonba::Json& j, ContactGroupList& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactGroup, contactGroup_);
      };
      ContactGroupList() = default ;
      ContactGroupList(const ContactGroupList &) = default ;
      ContactGroupList(ContactGroupList &&) = default ;
      ContactGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContactGroupList() = default ;
      ContactGroupList& operator=(const ContactGroupList &) = default ;
      ContactGroupList& operator=(ContactGroupList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ContactGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContactGroup& obj) { 
          DARABONBA_PTR_TO_JSON(Contacts, contacts_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Describe, describe_);
          DARABONBA_PTR_TO_JSON(EnableSubscribed, enableSubscribed_);
          DARABONBA_PTR_TO_JSON(EnabledWeeklyReport, enabledWeeklyReport_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, ContactGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Describe, describe_);
          DARABONBA_PTR_FROM_JSON(EnableSubscribed, enableSubscribed_);
          DARABONBA_PTR_FROM_JSON(EnabledWeeklyReport, enabledWeeklyReport_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        ContactGroup() = default ;
        ContactGroup(const ContactGroup &) = default ;
        ContactGroup(ContactGroup &&) = default ;
        ContactGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContactGroup() = default ;
        ContactGroup& operator=(const ContactGroup &) = default ;
        ContactGroup& operator=(ContactGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Contacts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Contacts& obj) { 
            DARABONBA_PTR_TO_JSON(Contact, contact_);
          };
          friend void from_json(const Darabonba::Json& j, Contacts& obj) { 
            DARABONBA_PTR_FROM_JSON(Contact, contact_);
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
          virtual bool empty() const override { return this->contact_ == nullptr; };
          // contact Field Functions 
          bool hasContact() const { return this->contact_ != nullptr;};
          void deleteContact() { this->contact_ = nullptr;};
          inline const vector<string> & getContact() const { DARABONBA_PTR_GET_CONST(contact_, vector<string>) };
          inline vector<string> getContact() { DARABONBA_PTR_GET(contact_, vector<string>) };
          inline Contacts& setContact(const vector<string> & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
          inline Contacts& setContact(vector<string> && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


        protected:
          shared_ptr<vector<string>> contact_ {};
        };

        virtual bool empty() const override { return this->contacts_ == nullptr
        && this->createTime_ == nullptr && this->describe_ == nullptr && this->enableSubscribed_ == nullptr && this->enabledWeeklyReport_ == nullptr && this->name_ == nullptr
        && this->updateTime_ == nullptr; };
        // contacts Field Functions 
        bool hasContacts() const { return this->contacts_ != nullptr;};
        void deleteContacts() { this->contacts_ = nullptr;};
        inline const ContactGroup::Contacts & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, ContactGroup::Contacts) };
        inline ContactGroup::Contacts getContacts() { DARABONBA_PTR_GET(contacts_, ContactGroup::Contacts) };
        inline ContactGroup& setContacts(const ContactGroup::Contacts & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
        inline ContactGroup& setContacts(ContactGroup::Contacts && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline ContactGroup& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // describe Field Functions 
        bool hasDescribe() const { return this->describe_ != nullptr;};
        void deleteDescribe() { this->describe_ = nullptr;};
        inline string getDescribe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
        inline ContactGroup& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


        // enableSubscribed Field Functions 
        bool hasEnableSubscribed() const { return this->enableSubscribed_ != nullptr;};
        void deleteEnableSubscribed() { this->enableSubscribed_ = nullptr;};
        inline bool getEnableSubscribed() const { DARABONBA_PTR_GET_DEFAULT(enableSubscribed_, false) };
        inline ContactGroup& setEnableSubscribed(bool enableSubscribed) { DARABONBA_PTR_SET_VALUE(enableSubscribed_, enableSubscribed) };


        // enabledWeeklyReport Field Functions 
        bool hasEnabledWeeklyReport() const { return this->enabledWeeklyReport_ != nullptr;};
        void deleteEnabledWeeklyReport() { this->enabledWeeklyReport_ = nullptr;};
        inline bool getEnabledWeeklyReport() const { DARABONBA_PTR_GET_DEFAULT(enabledWeeklyReport_, false) };
        inline ContactGroup& setEnabledWeeklyReport(bool enabledWeeklyReport) { DARABONBA_PTR_SET_VALUE(enabledWeeklyReport_, enabledWeeklyReport) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ContactGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline ContactGroup& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // List of contacts.
        shared_ptr<ContactGroup::Contacts> contacts_ {};
        // Creation time.
        shared_ptr<int64_t> createTime_ {};
        // Description information of the alarm contact group.
        shared_ptr<string> describe_ {};
        // Indicates whether the weekly report subscription function is enabled. Values:
        // 
        // - true: Yes.
        // 
        // - false: No.
        shared_ptr<bool> enableSubscribed_ {};
        // Indicates whether the weekly report function is enabled.
        shared_ptr<bool> enabledWeeklyReport_ {};
        // Name.
        shared_ptr<string> name_ {};
        // Update time.
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->contactGroup_ == nullptr; };
      // contactGroup Field Functions 
      bool hasContactGroup() const { return this->contactGroup_ != nullptr;};
      void deleteContactGroup() { this->contactGroup_ = nullptr;};
      inline const vector<ContactGroupList::ContactGroup> & getContactGroup() const { DARABONBA_PTR_GET_CONST(contactGroup_, vector<ContactGroupList::ContactGroup>) };
      inline vector<ContactGroupList::ContactGroup> getContactGroup() { DARABONBA_PTR_GET(contactGroup_, vector<ContactGroupList::ContactGroup>) };
      inline ContactGroupList& setContactGroup(const vector<ContactGroupList::ContactGroup> & contactGroup) { DARABONBA_PTR_SET_VALUE(contactGroup_, contactGroup) };
      inline ContactGroupList& setContactGroup(vector<ContactGroupList::ContactGroup> && contactGroup) { DARABONBA_PTR_SET_RVALUE(contactGroup_, contactGroup) };


    protected:
      shared_ptr<vector<ContactGroupList::ContactGroup>> contactGroup_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->contactGroupList_ == nullptr && this->contactGroups_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeContactGroupListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // contactGroupList Field Functions 
    bool hasContactGroupList() const { return this->contactGroupList_ != nullptr;};
    void deleteContactGroupList() { this->contactGroupList_ = nullptr;};
    inline const DescribeContactGroupListResponseBody::ContactGroupList & getContactGroupList() const { DARABONBA_PTR_GET_CONST(contactGroupList_, DescribeContactGroupListResponseBody::ContactGroupList) };
    inline DescribeContactGroupListResponseBody::ContactGroupList getContactGroupList() { DARABONBA_PTR_GET(contactGroupList_, DescribeContactGroupListResponseBody::ContactGroupList) };
    inline DescribeContactGroupListResponseBody& setContactGroupList(const DescribeContactGroupListResponseBody::ContactGroupList & contactGroupList) { DARABONBA_PTR_SET_VALUE(contactGroupList_, contactGroupList) };
    inline DescribeContactGroupListResponseBody& setContactGroupList(DescribeContactGroupListResponseBody::ContactGroupList && contactGroupList) { DARABONBA_PTR_SET_RVALUE(contactGroupList_, contactGroupList) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const DescribeContactGroupListResponseBody::ContactGroups & getContactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, DescribeContactGroupListResponseBody::ContactGroups) };
    inline DescribeContactGroupListResponseBody::ContactGroups getContactGroups() { DARABONBA_PTR_GET(contactGroups_, DescribeContactGroupListResponseBody::ContactGroups) };
    inline DescribeContactGroupListResponseBody& setContactGroups(const DescribeContactGroupListResponseBody::ContactGroups & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline DescribeContactGroupListResponseBody& setContactGroups(DescribeContactGroupListResponseBody::ContactGroups && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeContactGroupListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContactGroupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeContactGroupListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeContactGroupListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Status code. Note that 200 indicates success.
    shared_ptr<string> code_ {};
    // List of alarm contact groups.
    shared_ptr<DescribeContactGroupListResponseBody::ContactGroupList> contactGroupList_ {};
    // List of alarm contact groups.
    shared_ptr<DescribeContactGroupListResponseBody::ContactGroups> contactGroups_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation was successful. Values:
    // 
    // - true: Success.
    // 
    // - false: Failure.
    shared_ptr<bool> success_ {};
    // Total number of records.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
