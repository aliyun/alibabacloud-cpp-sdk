// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTACTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTACTGROUPSRESPONSEBODY_HPP_
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
  class ListContactGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContactGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(contactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListContactGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(contactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListContactGroupsResponseBody() = default ;
    ListContactGroupsResponseBody(const ListContactGroupsResponseBody &) = default ;
    ListContactGroupsResponseBody(ListContactGroupsResponseBody &&) = default ;
    ListContactGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContactGroupsResponseBody() = default ;
    ListContactGroupsResponseBody& operator=(const ListContactGroupsResponseBody &) = default ;
    ListContactGroupsResponseBody& operator=(ListContactGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContactGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactGroups& obj) { 
        DARABONBA_PTR_TO_JSON(contactGroupId, contactGroupId_);
        DARABONBA_PTR_TO_JSON(contactIds, contactIds_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, ContactGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(contactGroupId, contactGroupId_);
        DARABONBA_PTR_FROM_JSON(contactIds, contactIds_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
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
      virtual bool empty() const override { return this->contactGroupId_ == nullptr
        && this->contactIds_ == nullptr && this->name_ == nullptr && this->workspace_ == nullptr; };
      // contactGroupId Field Functions 
      bool hasContactGroupId() const { return this->contactGroupId_ != nullptr;};
      void deleteContactGroupId() { this->contactGroupId_ = nullptr;};
      inline string getContactGroupId() const { DARABONBA_PTR_GET_DEFAULT(contactGroupId_, "") };
      inline ContactGroups& setContactGroupId(string contactGroupId) { DARABONBA_PTR_SET_VALUE(contactGroupId_, contactGroupId) };


      // contactIds Field Functions 
      bool hasContactIds() const { return this->contactIds_ != nullptr;};
      void deleteContactIds() { this->contactIds_ = nullptr;};
      inline const vector<string> & getContactIds() const { DARABONBA_PTR_GET_CONST(contactIds_, vector<string>) };
      inline vector<string> getContactIds() { DARABONBA_PTR_GET(contactIds_, vector<string>) };
      inline ContactGroups& setContactIds(const vector<string> & contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };
      inline ContactGroups& setContactIds(vector<string> && contactIds) { DARABONBA_PTR_SET_RVALUE(contactIds_, contactIds) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ContactGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline ContactGroups& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      shared_ptr<string> contactGroupId_ {};
      shared_ptr<vector<string>> contactIds_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->contactGroups_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const vector<ListContactGroupsResponseBody::ContactGroups> & getContactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, vector<ListContactGroupsResponseBody::ContactGroups>) };
    inline vector<ListContactGroupsResponseBody::ContactGroups> getContactGroups() { DARABONBA_PTR_GET(contactGroups_, vector<ListContactGroupsResponseBody::ContactGroups>) };
    inline ListContactGroupsResponseBody& setContactGroups(const vector<ListContactGroupsResponseBody::ContactGroups> & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline ListContactGroupsResponseBody& setContactGroups(vector<ListContactGroupsResponseBody::ContactGroups> && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListContactGroupsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListContactGroupsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContactGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListContactGroupsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ListContactGroupsResponseBody::ContactGroups>> contactGroups_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
