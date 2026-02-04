// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEMEMBERSREQUEST_HPP_
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
  class AssociateMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(Members, members_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(Members, members_);
    };
    AssociateMembersRequest() = default ;
    AssociateMembersRequest(const AssociateMembersRequest &) = default ;
    AssociateMembersRequest(AssociateMembersRequest &&) = default ;
    AssociateMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateMembersRequest() = default ;
    AssociateMembersRequest& operator=(const AssociateMembersRequest &) = default ;
    AssociateMembersRequest& operator=(AssociateMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && this->members_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline AssociateMembersRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<string> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<string>) };
    inline vector<string> getMembers() { DARABONBA_PTR_GET(members_, vector<string>) };
    inline AssociateMembersRequest& setMembers(const vector<string> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline AssociateMembersRequest& setMembers(vector<string> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


  protected:
    // The ID of the contact.
    shared_ptr<string> contactId_ {};
    // The IDs of objects to which you want to bind the contact.
    shared_ptr<vector<string>> members_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
