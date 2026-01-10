// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UserState, userState_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UserState, userState_);
    };
    ListUsersRequest() = default ;
    ListUsersRequest(const ListUsersRequest &) = default ;
    ListUsersRequest(ListUsersRequest &&) = default ;
    ListUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersRequest() = default ;
    ListUsersRequest& operator=(const ListUsersRequest &) = default ;
    ListUsersRequest& operator=(ListUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->role_ == nullptr && this->searchKey_ == nullptr && this->tid_ == nullptr && this->userState_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListUsersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUsersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ListUsersRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListUsersRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListUsersRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // userState Field Functions 
    bool hasUserState() const { return this->userState_ != nullptr;};
    void deleteUserState() { this->userState_ = nullptr;};
    inline string getUserState() const { DARABONBA_PTR_GET_DEFAULT(userState_, "") };
    inline ListUsersRequest& setUserState(string userState) { DARABONBA_PTR_SET_VALUE(userState_, userState) };


  protected:
    // The number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    // 
    // **
    // 
    // Valid values: 10, 20, 50, and 100.**** Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The role that is assigned to the user. Valid values:
    // 
    // *   **USER**: a regular user.
    // *   **DBA** : a database administrator (DBA).
    // *   **ADMIN**: a Data Management (DMS) administrator.
    // *   **SECURITY_ADMIN**: a security administrator.
    // *   **STRUCT_READ_ONLY**: a schema read-only user.
    // 
    // >  To check your role, move the pointer over the profile picture in the upper-right corner of the DMS console.
    shared_ptr<string> role_ {};
    // The search keyword. Fuzzy match is supported.
    shared_ptr<string> searchKey_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
    // The status of the user. Valid values:
    // 
    // *   **NORMAL**: The user is normal.
    // *   **DISABLE**: The user is disabled.
    // *   **DELETE**: The user is deleted.
    shared_ptr<string> userState_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
