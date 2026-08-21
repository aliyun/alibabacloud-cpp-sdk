// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
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
  class ListUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListUsersResponseBody() = default ;
    ListUsersResponseBody(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody(ListUsersResponseBody &&) = default ;
    ListUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBody() = default ;
    ListUsersResponseBody& operator=(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody& operator=(ListUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(accountId, accountId_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(isActive, isActive_);
        DARABONBA_PTR_TO_JSON(lastLoginTime, lastLoginTime_);
        DARABONBA_PTR_TO_JSON(roleCodes, roleCodes_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(accountId, accountId_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(isActive, isActive_);
        DARABONBA_PTR_FROM_JSON(lastLoginTime, lastLoginTime_);
        DARABONBA_PTR_FROM_JSON(roleCodes, roleCodes_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
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
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->displayName_ == nullptr && this->gmtCreate_ == nullptr && this->isActive_ == nullptr && this->lastLoginTime_ == nullptr && this->roleCodes_ == nullptr
        && this->userId_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Items& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Items& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // isActive Field Functions 
      bool hasIsActive() const { return this->isActive_ != nullptr;};
      void deleteIsActive() { this->isActive_ = nullptr;};
      inline bool getIsActive() const { DARABONBA_PTR_GET_DEFAULT(isActive_, false) };
      inline Items& setIsActive(bool isActive) { DARABONBA_PTR_SET_VALUE(isActive_, isActive) };


      // lastLoginTime Field Functions 
      bool hasLastLoginTime() const { return this->lastLoginTime_ != nullptr;};
      void deleteLastLoginTime() { this->lastLoginTime_ = nullptr;};
      inline string getLastLoginTime() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTime_, "") };
      inline Items& setLastLoginTime(string lastLoginTime) { DARABONBA_PTR_SET_VALUE(lastLoginTime_, lastLoginTime) };


      // roleCodes Field Functions 
      bool hasRoleCodes() const { return this->roleCodes_ != nullptr;};
      void deleteRoleCodes() { this->roleCodes_ = nullptr;};
      inline const vector<string> & getRoleCodes() const { DARABONBA_PTR_GET_CONST(roleCodes_, vector<string>) };
      inline vector<string> getRoleCodes() { DARABONBA_PTR_GET(roleCodes_, vector<string>) };
      inline Items& setRoleCodes(const vector<string> & roleCodes) { DARABONBA_PTR_SET_VALUE(roleCodes_, roleCodes) };
      inline Items& setRoleCodes(vector<string> && roleCodes) { DARABONBA_PTR_SET_RVALUE(roleCodes_, roleCodes) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Items& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The account ID.
      shared_ptr<string> accountId_ {};
      // The display name of the tool.
      shared_ptr<string> displayName_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // Indicates whether the account is activated:
      // 
      // - 1: Activated.
      // - 0: Not activated.
      shared_ptr<bool> isActive_ {};
      // The last logon time.
      shared_ptr<string> lastLoginTime_ {};
      // The list of new system role codes (full replacement, at least one role must be included). Valid values: SUPER_ADMIN / SYSTEM_ADMIN / SEMANTIC_ADMIN / SKILL_ADMIN / KB_ADMIN / AGENT_ADMIN / APPLICATION_USER.
      shared_ptr<vector<string>> roleCodes_ {};
      // The user ID.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListUsersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListUsersResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListUsersResponseBody::Items>) };
    inline vector<ListUsersResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListUsersResponseBody::Items>) };
    inline ListUsersResponseBody& setItems(const vector<ListUsersResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListUsersResponseBody& setItems(vector<ListUsersResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListUsersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListUsersResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListUsersResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListUsersResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The user information.
    shared_ptr<vector<ListUsersResponseBody::Items>> items_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The current page number.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of data entries in the project.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
