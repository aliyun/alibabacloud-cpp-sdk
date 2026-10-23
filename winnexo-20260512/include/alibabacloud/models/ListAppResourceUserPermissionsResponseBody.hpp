// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPRESOURCEUSERPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPRESOURCEUSERPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListAppResourceUserPermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppResourceUserPermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppResourceUserPermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAppResourceUserPermissionsResponseBody() = default ;
    ListAppResourceUserPermissionsResponseBody(const ListAppResourceUserPermissionsResponseBody &) = default ;
    ListAppResourceUserPermissionsResponseBody(ListAppResourceUserPermissionsResponseBody &&) = default ;
    ListAppResourceUserPermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppResourceUserPermissionsResponseBody() = default ;
    ListAppResourceUserPermissionsResponseBody& operator=(const ListAppResourceUserPermissionsResponseBody &) = default ;
    ListAppResourceUserPermissionsResponseBody& operator=(ListAppResourceUserPermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(permissions, permissions_);
        DARABONBA_PTR_TO_JSON(resourceKey, resourceKey_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(permissions, permissions_);
        DARABONBA_PTR_FROM_JSON(resourceKey, resourceKey_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->permissions_ == nullptr
        && this->resourceKey_ == nullptr && this->resourceType_ == nullptr; };
      // permissions Field Functions 
      bool hasPermissions() const { return this->permissions_ != nullptr;};
      void deletePermissions() { this->permissions_ = nullptr;};
      inline const vector<string> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
      inline vector<string> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
      inline Items& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
      inline Items& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


      // resourceKey Field Functions 
      bool hasResourceKey() const { return this->resourceKey_ != nullptr;};
      void deleteResourceKey() { this->resourceKey_ = nullptr;};
      inline string getResourceKey() const { DARABONBA_PTR_GET_DEFAULT(resourceKey_, "") };
      inline Items& setResourceKey(string resourceKey) { DARABONBA_PTR_SET_VALUE(resourceKey_, resourceKey) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Items& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The stored and valid permission points.
      shared_ptr<vector<string>> permissions_ {};
      // The resource key.
      shared_ptr<string> resourceKey_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAppResourceUserPermissionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListAppResourceUserPermissionsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListAppResourceUserPermissionsResponseBody::Items>) };
    inline vector<ListAppResourceUserPermissionsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListAppResourceUserPermissionsResponseBody::Items>) };
    inline ListAppResourceUserPermissionsResponseBody& setItems(const vector<ListAppResourceUserPermissionsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListAppResourceUserPermissionsResponseBody& setItems(vector<ListAppResourceUserPermissionsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAppResourceUserPermissionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListAppResourceUserPermissionsResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAppResourceUserPermissionsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppResourceUserPermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAppResourceUserPermissionsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The resources and permissions on the current page.
    shared_ptr<vector<ListAppResourceUserPermissionsResponseBody::Items>> items_ {};
    // The error description. This parameter is empty if the request is successful.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of resources.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
