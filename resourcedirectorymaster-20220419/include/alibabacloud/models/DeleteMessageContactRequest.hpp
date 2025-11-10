// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMESSAGECONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMESSAGECONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class DeleteMessageContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMessageContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(RetainContactInMembers, retainContactInMembers_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMessageContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(RetainContactInMembers, retainContactInMembers_);
    };
    DeleteMessageContactRequest() = default ;
    DeleteMessageContactRequest(const DeleteMessageContactRequest &) = default ;
    DeleteMessageContactRequest(DeleteMessageContactRequest &&) = default ;
    DeleteMessageContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMessageContactRequest() = default ;
    DeleteMessageContactRequest& operator=(const DeleteMessageContactRequest &) = default ;
    DeleteMessageContactRequest& operator=(DeleteMessageContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->retainContactInMembers_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline DeleteMessageContactRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // retainContactInMembers Field Functions 
    bool hasRetainContactInMembers() const { return this->retainContactInMembers_ != nullptr;};
    void deleteRetainContactInMembers() { this->retainContactInMembers_ = nullptr;};
    inline bool retainContactInMembers() const { DARABONBA_PTR_GET_DEFAULT(retainContactInMembers_, false) };
    inline DeleteMessageContactRequest& setRetainContactInMembers(bool retainContactInMembers) { DARABONBA_PTR_SET_VALUE(retainContactInMembers_, retainContactInMembers) };


  protected:
    // The ID of the contact.
    // 
    // This parameter is required.
    std::shared_ptr<string> contactId_ = nullptr;
    // Specifies whether to retain the contact for members. Valid values:
    // 
    // *   true (default): retains the contact for members. In this case, the contact can still receive messages for the members.
    // *   false: does not retain the contact for members. In this case, the contact can no longer receive messages for the members. If you set this parameter to false, the response is asynchronously returned. You can call [GetMessageContactDeletionStatus](~~GetMessageContactDeletionStatus~~) to obtain the deletion result.
    std::shared_ptr<bool> retainContactInMembers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
