// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATEMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATEMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class DisassociateMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DisassociateMembersResponseBody() = default ;
    DisassociateMembersResponseBody(const DisassociateMembersResponseBody &) = default ;
    DisassociateMembersResponseBody(DisassociateMembersResponseBody &&) = default ;
    DisassociateMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateMembersResponseBody() = default ;
    DisassociateMembersResponseBody& operator=(const DisassociateMembersResponseBody &) = default ;
    DisassociateMembersResponseBody& operator=(DisassociateMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Members : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Members& obj) { 
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(MemberId, memberId_);
        DARABONBA_PTR_TO_JSON(ModifyDate, modifyDate_);
      };
      friend void from_json(const Darabonba::Json& j, Members& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
        DARABONBA_PTR_FROM_JSON(ModifyDate, modifyDate_);
      };
      Members() = default ;
      Members(const Members &) = default ;
      Members(Members &&) = default ;
      Members(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Members() = default ;
      Members& operator=(const Members &) = default ;
      Members& operator=(Members &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contactId_ == nullptr
        && this->memberId_ == nullptr && this->modifyDate_ == nullptr; };
      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
      inline Members& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // memberId Field Functions 
      bool hasMemberId() const { return this->memberId_ != nullptr;};
      void deleteMemberId() { this->memberId_ = nullptr;};
      inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
      inline Members& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


      // modifyDate Field Functions 
      bool hasModifyDate() const { return this->modifyDate_ != nullptr;};
      void deleteModifyDate() { this->modifyDate_ = nullptr;};
      inline string getModifyDate() const { DARABONBA_PTR_GET_DEFAULT(modifyDate_, "") };
      inline Members& setModifyDate(string modifyDate) { DARABONBA_PTR_SET_VALUE(modifyDate_, modifyDate) };


    protected:
      // The ID of the contact.
      shared_ptr<string> contactId_ {};
      // The ID of the object. Valid values:
      // 
      // - ID of the resource directory
      // - ID of the folder
      // - ID of the member
      shared_ptr<string> memberId_ {};
      // The time when the contact was unbound from the object.
      shared_ptr<string> modifyDate_ {};
    };

    virtual bool empty() const override { return this->members_ == nullptr
        && this->requestId_ == nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<DisassociateMembersResponseBody::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<DisassociateMembersResponseBody::Members>) };
    inline vector<DisassociateMembersResponseBody::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<DisassociateMembersResponseBody::Members>) };
    inline DisassociateMembersResponseBody& setMembers(const vector<DisassociateMembersResponseBody::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline DisassociateMembersResponseBody& setMembers(vector<DisassociateMembersResponseBody::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisassociateMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the contact was unbound from the object.
    shared_ptr<vector<DisassociateMembersResponseBody::Members>> members_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
