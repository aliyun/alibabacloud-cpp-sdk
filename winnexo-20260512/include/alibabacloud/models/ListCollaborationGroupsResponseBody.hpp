// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLLABORATIONGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLLABORATIONGROUPSRESPONSEBODY_HPP_
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
  class ListCollaborationGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCollaborationGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListCollaborationGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListCollaborationGroupsResponseBody() = default ;
    ListCollaborationGroupsResponseBody(const ListCollaborationGroupsResponseBody &) = default ;
    ListCollaborationGroupsResponseBody(ListCollaborationGroupsResponseBody &&) = default ;
    ListCollaborationGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCollaborationGroupsResponseBody() = default ;
    ListCollaborationGroupsResponseBody& operator=(const ListCollaborationGroupsResponseBody &) = default ;
    ListCollaborationGroupsResponseBody& operator=(ListCollaborationGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
        DARABONBA_PTR_TO_JSON(currentUserRole, currentUserRole_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
        DARABONBA_PTR_FROM_JSON(currentUserRole, currentUserRole_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
      virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->currentUserRole_ == nullptr && this->name_ == nullptr && this->status_ == nullptr; };
      // collaborationGroupId Field Functions 
      bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
      void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
      inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
      inline Items& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


      // currentUserRole Field Functions 
      bool hasCurrentUserRole() const { return this->currentUserRole_ != nullptr;};
      void deleteCurrentUserRole() { this->currentUserRole_ = nullptr;};
      inline string getCurrentUserRole() const { DARABONBA_PTR_GET_DEFAULT(currentUserRole_, "") };
      inline Items& setCurrentUserRole(string currentUserRole) { DARABONBA_PTR_SET_VALUE(currentUserRole_, currentUserRole) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // 协作空间ID，可用于查询空间成员、查询节点详情及预览对话文件。
      shared_ptr<string> collaborationGroupId_ {};
      // 当前调用用户在空间内的角色：ADMIN为管理员，MEMBER为普通成员。
      shared_ptr<string> currentUserRole_ {};
      // 协作空间显示名称。
      shared_ptr<string> name_ {};
      // 协作空间状态，当前接口只返回ACTIVE。
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCollaborationGroupsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListCollaborationGroupsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListCollaborationGroupsResponseBody::Items>) };
    inline vector<ListCollaborationGroupsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListCollaborationGroupsResponseBody::Items>) };
    inline ListCollaborationGroupsResponseBody& setItems(const vector<ListCollaborationGroupsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListCollaborationGroupsResponseBody& setItems(vector<ListCollaborationGroupsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCollaborationGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListCollaborationGroupsResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListCollaborationGroupsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCollaborationGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListCollaborationGroupsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // 公共业务状态码，由后端Code字段映射；错误时用于识别失败原因。
    shared_ptr<string> code_ {};
    // 当前页记录列表；没有匹配记录时返回空数组。
    shared_ptr<vector<ListCollaborationGroupsResponseBody::Items>> items_ {};
    // 公共错误说明，由后端Message字段映射；错误时描述失败原因。
    shared_ptr<string> message_ {};
    // 当前返回页的页码，从1开始。
    shared_ptr<int64_t> page_ {};
    // 当前分页设置的每页记录数。
    shared_ptr<int64_t> pageSize_ {};
    // 请求追踪ID，由后端RequestId字段映射，用于排查调用失败。
    shared_ptr<string> requestId_ {};
    // 满足查询条件的有效空间总数，不是当前页记录数。
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
