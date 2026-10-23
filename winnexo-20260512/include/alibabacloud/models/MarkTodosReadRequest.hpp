// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MARKTODOSREADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MARKTODOSREADREQUEST_HPP_
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
  class MarkTodosReadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MarkTodosReadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(markAllRead, markAllRead_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(todoIds, todoIds_);
    };
    friend void from_json(const Darabonba::Json& j, MarkTodosReadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(markAllRead, markAllRead_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(todoIds, todoIds_);
    };
    MarkTodosReadRequest() = default ;
    MarkTodosReadRequest(const MarkTodosReadRequest &) = default ;
    MarkTodosReadRequest(MarkTodosReadRequest &&) = default ;
    MarkTodosReadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MarkTodosReadRequest() = default ;
    MarkTodosReadRequest& operator=(const MarkTodosReadRequest &) = default ;
    MarkTodosReadRequest& operator=(MarkTodosReadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->markAllRead_ == nullptr
        && this->tenantId_ == nullptr && this->todoIds_ == nullptr; };
    // markAllRead Field Functions 
    bool hasMarkAllRead() const { return this->markAllRead_ != nullptr;};
    void deleteMarkAllRead() { this->markAllRead_ = nullptr;};
    inline bool getMarkAllRead() const { DARABONBA_PTR_GET_DEFAULT(markAllRead_, false) };
    inline MarkTodosReadRequest& setMarkAllRead(bool markAllRead) { DARABONBA_PTR_SET_VALUE(markAllRead_, markAllRead) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline MarkTodosReadRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // todoIds Field Functions 
    bool hasTodoIds() const { return this->todoIds_ != nullptr;};
    void deleteTodoIds() { this->todoIds_ = nullptr;};
    inline const vector<string> & getTodoIds() const { DARABONBA_PTR_GET_CONST(todoIds_, vector<string>) };
    inline vector<string> getTodoIds() { DARABONBA_PTR_GET(todoIds_, vector<string>) };
    inline MarkTodosReadRequest& setTodoIds(const vector<string> & todoIds) { DARABONBA_PTR_SET_VALUE(todoIds_, todoIds) };
    inline MarkTodosReadRequest& setTodoIds(vector<string> && todoIds) { DARABONBA_PTR_SET_RVALUE(todoIds_, todoIds) };


  protected:
    // Specifies whether to mark all to-do items as read. This parameter takes precedence over the todoIds parameter.
    shared_ptr<bool> markAllRead_ {};
    // The tenant ID. This is a common parameter. If this parameter is not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The list of to-do item IDs. You can specify up to 100 IDs. This parameter is ignored if markAllRead is set to true.
    shared_ptr<vector<string>> todoIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
