// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLLABORATIONGROUPMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLLABORATIONGROUPMEMBERSRESPONSEBODY_HPP_
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
  class ListCollaborationGroupMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCollaborationGroupMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListCollaborationGroupMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListCollaborationGroupMembersResponseBody() = default ;
    ListCollaborationGroupMembersResponseBody(const ListCollaborationGroupMembersResponseBody &) = default ;
    ListCollaborationGroupMembersResponseBody(ListCollaborationGroupMembersResponseBody &&) = default ;
    ListCollaborationGroupMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCollaborationGroupMembersResponseBody() = default ;
    ListCollaborationGroupMembersResponseBody& operator=(const ListCollaborationGroupMembersResponseBody &) = default ;
    ListCollaborationGroupMembersResponseBody& operator=(ListCollaborationGroupMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(isActive, isActive_);
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(isActive, isActive_);
        DARABONBA_PTR_FROM_JSON(role, role_);
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
      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->isActive_ == nullptr && this->role_ == nullptr && this->userId_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Items& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // isActive Field Functions 
      bool hasIsActive() const { return this->isActive_ != nullptr;};
      void deleteIsActive() { this->isActive_ = nullptr;};
      inline bool getIsActive() const { DARABONBA_PTR_GET_DEFAULT(isActive_, false) };
      inline Items& setIsActive(bool isActive) { DARABONBA_PTR_SET_VALUE(isActive_, isActive) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Items& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Items& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // 成员显示名称；未设置时为空。
      shared_ptr<string> displayName_ {};
      // 租户账号是否启用。本接口只返回有效且账号启用的成员，值为true；不代表HR在职状态。
      shared_ptr<bool> isActive_ {};
      // 成员在空间内的角色：ADMIN为管理员，MEMBER为普通成员。
      shared_ptr<string> role_ {};
      // 平台用户ID，字符串形式，可用作转交待办的目标用户ID。
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCollaborationGroupMembersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListCollaborationGroupMembersResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListCollaborationGroupMembersResponseBody::Items>) };
    inline vector<ListCollaborationGroupMembersResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListCollaborationGroupMembersResponseBody::Items>) };
    inline ListCollaborationGroupMembersResponseBody& setItems(const vector<ListCollaborationGroupMembersResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListCollaborationGroupMembersResponseBody& setItems(vector<ListCollaborationGroupMembersResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCollaborationGroupMembersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListCollaborationGroupMembersResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListCollaborationGroupMembersResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCollaborationGroupMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListCollaborationGroupMembersResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // 公共业务状态码，由后端Code字段映射；错误时用于识别失败原因。
    shared_ptr<string> code_ {};
    // 当前页记录列表；没有匹配记录时返回空数组。
    shared_ptr<vector<ListCollaborationGroupMembersResponseBody::Items>> items_ {};
    // 公共错误说明，由后端Message字段映射；错误时描述失败原因。
    shared_ptr<string> message_ {};
    // 当前返回页的页码，从1开始。
    shared_ptr<int64_t> page_ {};
    // 当前分页设置的每页记录数。
    shared_ptr<int64_t> pageSize_ {};
    // 请求追踪ID，由后端RequestId字段映射，用于排查调用失败。
    shared_ptr<string> requestId_ {};
    // 满足查询条件的记录总数，不是当前页记录数。
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
