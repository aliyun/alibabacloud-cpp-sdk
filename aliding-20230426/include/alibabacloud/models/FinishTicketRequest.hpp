// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINISHTICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINISHTICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FinishTicketRequestNotify.hpp>
#include <alibabacloud/models/FinishTicketRequestTenantContext.hpp>
#include <alibabacloud/models/FinishTicketRequestTicketMemo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class FinishTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FinishTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Notify, notify_);
      DARABONBA_PTR_TO_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_TO_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(TicketMemo, ticketMemo_);
    };
    friend void from_json(const Darabonba::Json& j, FinishTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Notify, notify_);
      DARABONBA_PTR_FROM_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_FROM_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(TicketMemo, ticketMemo_);
    };
    FinishTicketRequest() = default ;
    FinishTicketRequest(const FinishTicketRequest &) = default ;
    FinishTicketRequest(FinishTicketRequest &&) = default ;
    FinishTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FinishTicketRequest() = default ;
    FinishTicketRequest& operator=(const FinishTicketRequest &) = default ;
    FinishTicketRequest& operator=(FinishTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notify_ == nullptr
        && return this->openTeamId_ == nullptr && return this->openTicketId_ == nullptr && return this->tenantContext_ == nullptr && return this->ticketMemo_ == nullptr; };
    // notify Field Functions 
    bool hasNotify() const { return this->notify_ != nullptr;};
    void deleteNotify() { this->notify_ = nullptr;};
    inline const FinishTicketRequestNotify & notify() const { DARABONBA_PTR_GET_CONST(notify_, FinishTicketRequestNotify) };
    inline FinishTicketRequestNotify notify() { DARABONBA_PTR_GET(notify_, FinishTicketRequestNotify) };
    inline FinishTicketRequest& setNotify(const FinishTicketRequestNotify & notify) { DARABONBA_PTR_SET_VALUE(notify_, notify) };
    inline FinishTicketRequest& setNotify(FinishTicketRequestNotify && notify) { DARABONBA_PTR_SET_RVALUE(notify_, notify) };


    // openTeamId Field Functions 
    bool hasOpenTeamId() const { return this->openTeamId_ != nullptr;};
    void deleteOpenTeamId() { this->openTeamId_ = nullptr;};
    inline string openTeamId() const { DARABONBA_PTR_GET_DEFAULT(openTeamId_, "") };
    inline FinishTicketRequest& setOpenTeamId(string openTeamId) { DARABONBA_PTR_SET_VALUE(openTeamId_, openTeamId) };


    // openTicketId Field Functions 
    bool hasOpenTicketId() const { return this->openTicketId_ != nullptr;};
    void deleteOpenTicketId() { this->openTicketId_ = nullptr;};
    inline string openTicketId() const { DARABONBA_PTR_GET_DEFAULT(openTicketId_, "") };
    inline FinishTicketRequest& setOpenTicketId(string openTicketId) { DARABONBA_PTR_SET_VALUE(openTicketId_, openTicketId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const FinishTicketRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, FinishTicketRequestTenantContext) };
    inline FinishTicketRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, FinishTicketRequestTenantContext) };
    inline FinishTicketRequest& setTenantContext(const FinishTicketRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline FinishTicketRequest& setTenantContext(FinishTicketRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // ticketMemo Field Functions 
    bool hasTicketMemo() const { return this->ticketMemo_ != nullptr;};
    void deleteTicketMemo() { this->ticketMemo_ = nullptr;};
    inline const FinishTicketRequestTicketMemo & ticketMemo() const { DARABONBA_PTR_GET_CONST(ticketMemo_, FinishTicketRequestTicketMemo) };
    inline FinishTicketRequestTicketMemo ticketMemo() { DARABONBA_PTR_GET(ticketMemo_, FinishTicketRequestTicketMemo) };
    inline FinishTicketRequest& setTicketMemo(const FinishTicketRequestTicketMemo & ticketMemo) { DARABONBA_PTR_SET_VALUE(ticketMemo_, ticketMemo) };
    inline FinishTicketRequest& setTicketMemo(FinishTicketRequestTicketMemo && ticketMemo) { DARABONBA_PTR_SET_RVALUE(ticketMemo_, ticketMemo) };


  protected:
    std::shared_ptr<FinishTicketRequestNotify> notify_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openTeamId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openTicketId_ = nullptr;
    std::shared_ptr<FinishTicketRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<FinishTicketRequestTicketMemo> ticketMemo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
