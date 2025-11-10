// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEMEMBERSRESPONSEBODYMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEMEMBERSRESPONSEBODYMEMBERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class AssociateMembersResponseBodyMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateMembersResponseBodyMembers& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(ModifyDate, modifyDate_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateMembersResponseBodyMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(ModifyDate, modifyDate_);
    };
    AssociateMembersResponseBodyMembers() = default ;
    AssociateMembersResponseBodyMembers(const AssociateMembersResponseBodyMembers &) = default ;
    AssociateMembersResponseBodyMembers(AssociateMembersResponseBodyMembers &&) = default ;
    AssociateMembersResponseBodyMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateMembersResponseBodyMembers() = default ;
    AssociateMembersResponseBodyMembers& operator=(const AssociateMembersResponseBodyMembers &) = default ;
    AssociateMembersResponseBodyMembers& operator=(AssociateMembersResponseBodyMembers &&) = default ;
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
    inline AssociateMembersResponseBodyMembers& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline AssociateMembersResponseBodyMembers& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // modifyDate Field Functions 
    bool hasModifyDate() const { return this->modifyDate_ != nullptr;};
    void deleteModifyDate() { this->modifyDate_ = nullptr;};
    inline string modifyDate() const { DARABONBA_PTR_GET_DEFAULT(modifyDate_, "") };
    inline AssociateMembersResponseBodyMembers& setModifyDate(string modifyDate) { DARABONBA_PTR_SET_VALUE(modifyDate_, modifyDate) };


  protected:
    // The ID of the contact.
    std::shared_ptr<string> contactId_ = nullptr;
    // The ID of the object. Valid values:
    // 
    // - ID of the resource directory
    // - ID of the folder
    // - ID of the member
    std::shared_ptr<string> memberId_ = nullptr;
    // The time when the contact was bound to the object.
    std::shared_ptr<string> modifyDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
