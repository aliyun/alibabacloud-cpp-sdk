// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGECONTACTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGECONTACTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListMessageContactsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageContactsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(Member, member_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageContactsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(Member, member_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListMessageContactsRequest() = default ;
    ListMessageContactsRequest(const ListMessageContactsRequest &) = default ;
    ListMessageContactsRequest(ListMessageContactsRequest &&) = default ;
    ListMessageContactsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageContactsRequest() = default ;
    ListMessageContactsRequest& operator=(const ListMessageContactsRequest &) = default ;
    ListMessageContactsRequest& operator=(ListMessageContactsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactId_ != nullptr
        && this->member_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ListMessageContactsRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // member Field Functions 
    bool hasMember() const { return this->member_ != nullptr;};
    void deleteMember() { this->member_ = nullptr;};
    inline string member() const { DARABONBA_PTR_GET_DEFAULT(member_, "") };
    inline ListMessageContactsRequest& setMember(string member) { DARABONBA_PTR_SET_VALUE(member_, member) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMessageContactsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMessageContactsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the contact.
    std::shared_ptr<string> contactId_ = nullptr;
    // The ID of the object to which the contact is bound. Valid values:
    // 
    // *   ID of the resource directory
    // *   ID of the folder
    // *   ID of the member
    std::shared_ptr<string> member_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
