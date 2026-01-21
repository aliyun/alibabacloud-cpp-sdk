// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMONITORGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMONITORGROUPRESPONSEBODY_HPP_
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
  class DeleteMonitorGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMonitorGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMonitorGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteMonitorGroupResponseBody() = default ;
    DeleteMonitorGroupResponseBody(const DeleteMonitorGroupResponseBody &) = default ;
    DeleteMonitorGroupResponseBody(DeleteMonitorGroupResponseBody &&) = default ;
    DeleteMonitorGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMonitorGroupResponseBody() = default ;
    DeleteMonitorGroupResponseBody& operator=(const DeleteMonitorGroupResponseBody &) = default ;
    DeleteMonitorGroupResponseBody& operator=(DeleteMonitorGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Group : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Group& obj) { 
        DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      };
      friend void from_json(const Darabonba::Json& j, Group& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      };
      Group() = default ;
      Group(const Group &) = default ;
      Group(Group &&) = default ;
      Group(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Group() = default ;
      Group& operator=(const Group &) = default ;
      Group& operator=(Group &&) = default ;
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
        class ContactGroup : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ContactGroup& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, ContactGroup& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
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
          virtual bool empty() const override { return this->name_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ContactGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The name of the alert group.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->contactGroup_ == nullptr; };
        // contactGroup Field Functions 
        bool hasContactGroup() const { return this->contactGroup_ != nullptr;};
        void deleteContactGroup() { this->contactGroup_ = nullptr;};
        inline const vector<ContactGroups::ContactGroup> & getContactGroup() const { DARABONBA_PTR_GET_CONST(contactGroup_, vector<ContactGroups::ContactGroup>) };
        inline vector<ContactGroups::ContactGroup> getContactGroup() { DARABONBA_PTR_GET(contactGroup_, vector<ContactGroups::ContactGroup>) };
        inline ContactGroups& setContactGroup(const vector<ContactGroups::ContactGroup> & contactGroup) { DARABONBA_PTR_SET_VALUE(contactGroup_, contactGroup) };
        inline ContactGroups& setContactGroup(vector<ContactGroups::ContactGroup> && contactGroup) { DARABONBA_PTR_SET_RVALUE(contactGroup_, contactGroup) };


      protected:
        shared_ptr<vector<ContactGroups::ContactGroup>> contactGroup_ {};
      };

      virtual bool empty() const override { return this->contactGroups_ == nullptr
        && this->groupName_ == nullptr; };
      // contactGroups Field Functions 
      bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
      void deleteContactGroups() { this->contactGroups_ = nullptr;};
      inline const Group::ContactGroups & getContactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, Group::ContactGroups) };
      inline Group::ContactGroups getContactGroups() { DARABONBA_PTR_GET(contactGroups_, Group::ContactGroups) };
      inline Group& setContactGroups(const Group::ContactGroups & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
      inline Group& setContactGroups(Group::ContactGroups && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Group& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    protected:
      // The alert groups that receive alert notifications for the application group.
      shared_ptr<Group::ContactGroups> contactGroups_ {};
      // The name of the application group.
      shared_ptr<string> groupName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->group_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DeleteMonitorGroupResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const DeleteMonitorGroupResponseBody::Group & getGroup() const { DARABONBA_PTR_GET_CONST(group_, DeleteMonitorGroupResponseBody::Group) };
    inline DeleteMonitorGroupResponseBody::Group getGroup() { DARABONBA_PTR_GET(group_, DeleteMonitorGroupResponseBody::Group) };
    inline DeleteMonitorGroupResponseBody& setGroup(const DeleteMonitorGroupResponseBody::Group & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline DeleteMonitorGroupResponseBody& setGroup(DeleteMonitorGroupResponseBody::Group && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteMonitorGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMonitorGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteMonitorGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the call was successful.
    shared_ptr<int32_t> code_ {};
    // The deleted application group.
    shared_ptr<DeleteMonitorGroupResponseBody::Group> group_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. The value true indicates a success. The value false indicates a failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
