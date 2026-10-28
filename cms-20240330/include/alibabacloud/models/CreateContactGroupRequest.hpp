// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTACTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTACTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateContactGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContactGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contactGroupId, contactGroupId_);
      DARABONBA_PTR_TO_JSON(contacts, contacts_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContactGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contactGroupId, contactGroupId_);
      DARABONBA_PTR_FROM_JSON(contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    CreateContactGroupRequest() = default ;
    CreateContactGroupRequest(const CreateContactGroupRequest &) = default ;
    CreateContactGroupRequest(CreateContactGroupRequest &&) = default ;
    CreateContactGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContactGroupRequest() = default ;
    CreateContactGroupRequest& operator=(const CreateContactGroupRequest &) = default ;
    CreateContactGroupRequest& operator=(CreateContactGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroupId_ == nullptr
        && this->contacts_ == nullptr && this->name_ == nullptr && this->workspace_ == nullptr; };
    // contactGroupId Field Functions 
    bool hasContactGroupId() const { return this->contactGroupId_ != nullptr;};
    void deleteContactGroupId() { this->contactGroupId_ = nullptr;};
    inline string getContactGroupId() const { DARABONBA_PTR_GET_DEFAULT(contactGroupId_, "") };
    inline CreateContactGroupRequest& setContactGroupId(string contactGroupId) { DARABONBA_PTR_SET_VALUE(contactGroupId_, contactGroupId) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<string> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<string>) };
    inline vector<string> getContacts() { DARABONBA_PTR_GET(contacts_, vector<string>) };
    inline CreateContactGroupRequest& setContacts(const vector<string> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline CreateContactGroupRequest& setContacts(vector<string> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateContactGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreateContactGroupRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The unique identifier of the contact group.
    shared_ptr<string> contactGroupId_ {};
    // The IDs of the contacts.
    shared_ptr<vector<string>> contacts_ {};
    // The name of the contact.
    shared_ptr<string> name_ {};
    // The name of the workspace.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
