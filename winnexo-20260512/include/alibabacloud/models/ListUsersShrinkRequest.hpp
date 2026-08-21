// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListUsersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accountIds, accountIdsShrink_);
      DARABONBA_PTR_TO_JSON(isActive, isActive_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(roleCodes, roleCodesShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accountIds, accountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(isActive, isActive_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(roleCodes, roleCodesShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListUsersShrinkRequest() = default ;
    ListUsersShrinkRequest(const ListUsersShrinkRequest &) = default ;
    ListUsersShrinkRequest(ListUsersShrinkRequest &&) = default ;
    ListUsersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersShrinkRequest() = default ;
    ListUsersShrinkRequest& operator=(const ListUsersShrinkRequest &) = default ;
    ListUsersShrinkRequest& operator=(ListUsersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIdsShrink_ == nullptr
        && this->isActive_ == nullptr && this->keyword_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->roleCodesShrink_ == nullptr
        && this->tenantId_ == nullptr; };
    // accountIdsShrink Field Functions 
    bool hasAccountIdsShrink() const { return this->accountIdsShrink_ != nullptr;};
    void deleteAccountIdsShrink() { this->accountIdsShrink_ = nullptr;};
    inline string getAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(accountIdsShrink_, "") };
    inline ListUsersShrinkRequest& setAccountIdsShrink(string accountIdsShrink) { DARABONBA_PTR_SET_VALUE(accountIdsShrink_, accountIdsShrink) };


    // isActive Field Functions 
    bool hasIsActive() const { return this->isActive_ != nullptr;};
    void deleteIsActive() { this->isActive_ = nullptr;};
    inline bool getIsActive() const { DARABONBA_PTR_GET_DEFAULT(isActive_, false) };
    inline ListUsersShrinkRequest& setIsActive(bool isActive) { DARABONBA_PTR_SET_VALUE(isActive_, isActive) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListUsersShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListUsersShrinkRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListUsersShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // roleCodesShrink Field Functions 
    bool hasRoleCodesShrink() const { return this->roleCodesShrink_ != nullptr;};
    void deleteRoleCodesShrink() { this->roleCodesShrink_ = nullptr;};
    inline string getRoleCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(roleCodesShrink_, "") };
    inline ListUsersShrinkRequest& setRoleCodesShrink(string roleCodesShrink) { DARABONBA_PTR_SET_VALUE(roleCodesShrink_, roleCodesShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListUsersShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The list of Alibaba Cloud account IDs.
    shared_ptr<string> accountIdsShrink_ {};
    // Specifies whether the account is activated.
    //  - **true**: Activated.
    // - **false**: Not activated.
    shared_ptr<bool> isActive_ {};
    // The keyword for searching products. Fuzzy match is supported.
    shared_ptr<string> keyword_ {};
    // The page number.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page.
    // 
    // > The maximum number of entries per page is 30.
    shared_ptr<int64_t> pageSize_ {};
    // The list of new system role codes (full replacement, at least one role must be included). Valid values: SUPER_ADMIN / SYSTEM_ADMIN / SEMANTIC_ADMIN / SKILL_ADMIN / KB_ADMIN / AGENT_ADMIN / APPLICATION_USER.
    shared_ptr<string> roleCodesShrink_ {};
    // The tenant ID. This is a common parameter. The winnexo-cli passes this parameter explicitly by using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
