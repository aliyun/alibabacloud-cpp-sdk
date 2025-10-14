// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERTICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERTICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TransferTicketRequestNotify.hpp>
#include <vector>
#include <alibabacloud/models/TransferTicketRequestTenantContext.hpp>
#include <alibabacloud/models/TransferTicketRequestTicketMemo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class TransferTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Notify, notify_);
      DARABONBA_PTR_TO_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_TO_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_TO_JSON(ProcessorUserIds, processorUserIds_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(TicketMemo, ticketMemo_);
    };
    friend void from_json(const Darabonba::Json& j, TransferTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Notify, notify_);
      DARABONBA_PTR_FROM_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_FROM_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_FROM_JSON(ProcessorUserIds, processorUserIds_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(TicketMemo, ticketMemo_);
    };
    TransferTicketRequest() = default ;
    TransferTicketRequest(const TransferTicketRequest &) = default ;
    TransferTicketRequest(TransferTicketRequest &&) = default ;
    TransferTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferTicketRequest() = default ;
    TransferTicketRequest& operator=(const TransferTicketRequest &) = default ;
    TransferTicketRequest& operator=(TransferTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notify_ == nullptr
        && return this->openTeamId_ == nullptr && return this->openTicketId_ == nullptr && return this->processorUserIds_ == nullptr && return this->tenantContext_ == nullptr && return this->ticketMemo_ == nullptr; };
    // notify Field Functions 
    bool hasNotify() const { return this->notify_ != nullptr;};
    void deleteNotify() { this->notify_ = nullptr;};
    inline const TransferTicketRequestNotify & notify() const { DARABONBA_PTR_GET_CONST(notify_, TransferTicketRequestNotify) };
    inline TransferTicketRequestNotify notify() { DARABONBA_PTR_GET(notify_, TransferTicketRequestNotify) };
    inline TransferTicketRequest& setNotify(const TransferTicketRequestNotify & notify) { DARABONBA_PTR_SET_VALUE(notify_, notify) };
    inline TransferTicketRequest& setNotify(TransferTicketRequestNotify && notify) { DARABONBA_PTR_SET_RVALUE(notify_, notify) };


    // openTeamId Field Functions 
    bool hasOpenTeamId() const { return this->openTeamId_ != nullptr;};
    void deleteOpenTeamId() { this->openTeamId_ = nullptr;};
    inline string openTeamId() const { DARABONBA_PTR_GET_DEFAULT(openTeamId_, "") };
    inline TransferTicketRequest& setOpenTeamId(string openTeamId) { DARABONBA_PTR_SET_VALUE(openTeamId_, openTeamId) };


    // openTicketId Field Functions 
    bool hasOpenTicketId() const { return this->openTicketId_ != nullptr;};
    void deleteOpenTicketId() { this->openTicketId_ = nullptr;};
    inline string openTicketId() const { DARABONBA_PTR_GET_DEFAULT(openTicketId_, "") };
    inline TransferTicketRequest& setOpenTicketId(string openTicketId) { DARABONBA_PTR_SET_VALUE(openTicketId_, openTicketId) };


    // processorUserIds Field Functions 
    bool hasProcessorUserIds() const { return this->processorUserIds_ != nullptr;};
    void deleteProcessorUserIds() { this->processorUserIds_ = nullptr;};
    inline const vector<string> & processorUserIds() const { DARABONBA_PTR_GET_CONST(processorUserIds_, vector<string>) };
    inline vector<string> processorUserIds() { DARABONBA_PTR_GET(processorUserIds_, vector<string>) };
    inline TransferTicketRequest& setProcessorUserIds(const vector<string> & processorUserIds) { DARABONBA_PTR_SET_VALUE(processorUserIds_, processorUserIds) };
    inline TransferTicketRequest& setProcessorUserIds(vector<string> && processorUserIds) { DARABONBA_PTR_SET_RVALUE(processorUserIds_, processorUserIds) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const TransferTicketRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, TransferTicketRequestTenantContext) };
    inline TransferTicketRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, TransferTicketRequestTenantContext) };
    inline TransferTicketRequest& setTenantContext(const TransferTicketRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline TransferTicketRequest& setTenantContext(TransferTicketRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // ticketMemo Field Functions 
    bool hasTicketMemo() const { return this->ticketMemo_ != nullptr;};
    void deleteTicketMemo() { this->ticketMemo_ = nullptr;};
    inline const TransferTicketRequestTicketMemo & ticketMemo() const { DARABONBA_PTR_GET_CONST(ticketMemo_, TransferTicketRequestTicketMemo) };
    inline TransferTicketRequestTicketMemo ticketMemo() { DARABONBA_PTR_GET(ticketMemo_, TransferTicketRequestTicketMemo) };
    inline TransferTicketRequest& setTicketMemo(const TransferTicketRequestTicketMemo & ticketMemo) { DARABONBA_PTR_SET_VALUE(ticketMemo_, ticketMemo) };
    inline TransferTicketRequest& setTicketMemo(TransferTicketRequestTicketMemo && ticketMemo) { DARABONBA_PTR_SET_RVALUE(ticketMemo_, ticketMemo) };


  protected:
    std::shared_ptr<TransferTicketRequestNotify> notify_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openTeamId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openTicketId_ = nullptr;
    std::shared_ptr<vector<string>> processorUserIds_ = nullptr;
    std::shared_ptr<TransferTicketRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<TransferTicketRequestTicketMemo> ticketMemo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
