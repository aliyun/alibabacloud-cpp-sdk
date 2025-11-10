// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATEMEMBERSRESPONSEBODYMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATEMEMBERSRESPONSEBODYMEMBERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class DisassociateMembersResponseBodyMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateMembersResponseBodyMembers& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(ModifyDate, modifyDate_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateMembersResponseBodyMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(ModifyDate, modifyDate_);
    };
    DisassociateMembersResponseBodyMembers() = default ;
    DisassociateMembersResponseBodyMembers(const DisassociateMembersResponseBodyMembers &) = default ;
    DisassociateMembersResponseBodyMembers(DisassociateMembersResponseBodyMembers &&) = default ;
    DisassociateMembersResponseBodyMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateMembersResponseBodyMembers() = default ;
    DisassociateMembersResponseBodyMembers& operator=(const DisassociateMembersResponseBodyMembers &) = default ;
    DisassociateMembersResponseBodyMembers& operator=(DisassociateMembersResponseBodyMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->memberId_ == nullptr && return this->modifyDate_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline DisassociateMembersResponseBodyMembers& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline DisassociateMembersResponseBodyMembers& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // modifyDate Field Functions 
    bool hasModifyDate() const { return this->modifyDate_ != nullptr;};
    void deleteModifyDate() { this->modifyDate_ = nullptr;};
    inline string modifyDate() const { DARABONBA_PTR_GET_DEFAULT(modifyDate_, "") };
    inline DisassociateMembersResponseBodyMembers& setModifyDate(string modifyDate) { DARABONBA_PTR_SET_VALUE(modifyDate_, modifyDate) };


  protected:
    // The ID of the contact.
    std::shared_ptr<string> contactId_ = nullptr;
    // The ID of the object. Valid values:
    // 
    // - ID of the resource directory
    // - ID of the folder
    // - ID of the member
    std::shared_ptr<string> memberId_ = nullptr;
    // The time when the contact was unbound from the object.
    std::shared_ptr<string> modifyDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
