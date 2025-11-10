// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATEMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATEMEMBERSREQUEST_HPP_
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
  class DisassociateMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(Members, members_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(Members, members_);
    };
    DisassociateMembersRequest() = default ;
    DisassociateMembersRequest(const DisassociateMembersRequest &) = default ;
    DisassociateMembersRequest(DisassociateMembersRequest &&) = default ;
    DisassociateMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateMembersRequest() = default ;
    DisassociateMembersRequest& operator=(const DisassociateMembersRequest &) = default ;
    DisassociateMembersRequest& operator=(DisassociateMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->members_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline DisassociateMembersRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<string> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<string>) };
    inline vector<string> members() { DARABONBA_PTR_GET(members_, vector<string>) };
    inline DisassociateMembersRequest& setMembers(const vector<string> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline DisassociateMembersRequest& setMembers(vector<string> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


  protected:
    // The ID of the contact.
    // 
    // This parameter is required.
    std::shared_ptr<string> contactId_ = nullptr;
    // The IDs of objects from which you want to unbind the contact.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> members_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
