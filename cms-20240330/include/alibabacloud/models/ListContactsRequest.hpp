// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTACTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTACTSREQUEST_HPP_
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
  class ListContactsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContactsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contactIds, contactIds_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(queryUngroupedContacts, queryUngroupedContacts_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListContactsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contactIds, contactIds_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(queryUngroupedContacts, queryUngroupedContacts_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListContactsRequest() = default ;
    ListContactsRequest(const ListContactsRequest &) = default ;
    ListContactsRequest(ListContactsRequest &&) = default ;
    ListContactsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContactsRequest() = default ;
    ListContactsRequest& operator=(const ListContactsRequest &) = default ;
    ListContactsRequest& operator=(ListContactsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactIds_ == nullptr
        && this->email_ == nullptr && this->groupId_ == nullptr && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->phone_ == nullptr && this->queryUngroupedContacts_ == nullptr && this->workspace_ == nullptr; };
    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline const vector<string> & getContactIds() const { DARABONBA_PTR_GET_CONST(contactIds_, vector<string>) };
    inline vector<string> getContactIds() { DARABONBA_PTR_GET(contactIds_, vector<string>) };
    inline ListContactsRequest& setContactIds(const vector<string> & contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };
    inline ListContactsRequest& setContactIds(vector<string> && contactIds) { DARABONBA_PTR_SET_RVALUE(contactIds_, contactIds) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListContactsRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListContactsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListContactsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListContactsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListContactsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline ListContactsRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // queryUngroupedContacts Field Functions 
    bool hasQueryUngroupedContacts() const { return this->queryUngroupedContacts_ != nullptr;};
    void deleteQueryUngroupedContacts() { this->queryUngroupedContacts_ = nullptr;};
    inline bool getQueryUngroupedContacts() const { DARABONBA_PTR_GET_DEFAULT(queryUngroupedContacts_, false) };
    inline ListContactsRequest& setQueryUngroupedContacts(bool queryUngroupedContacts) { DARABONBA_PTR_SET_VALUE(queryUngroupedContacts_, queryUngroupedContacts) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListContactsRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<vector<string>> contactIds_ {};
    shared_ptr<string> email_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<bool> queryUngroupedContacts_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
