// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTICKETMEMOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTICKETMEMOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddTicketMemoRequestTenantContext.hpp>
#include <alibabacloud/models/AddTicketMemoRequestTicketMemo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddTicketMemoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTicketMemoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_TO_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(TicketMemo, ticketMemo_);
    };
    friend void from_json(const Darabonba::Json& j, AddTicketMemoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_FROM_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(TicketMemo, ticketMemo_);
    };
    AddTicketMemoRequest() = default ;
    AddTicketMemoRequest(const AddTicketMemoRequest &) = default ;
    AddTicketMemoRequest(AddTicketMemoRequest &&) = default ;
    AddTicketMemoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTicketMemoRequest() = default ;
    AddTicketMemoRequest& operator=(const AddTicketMemoRequest &) = default ;
    AddTicketMemoRequest& operator=(AddTicketMemoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->openTeamId_ == nullptr
        && return this->openTicketId_ == nullptr && return this->tenantContext_ == nullptr && return this->ticketMemo_ == nullptr; };
    // openTeamId Field Functions 
    bool hasOpenTeamId() const { return this->openTeamId_ != nullptr;};
    void deleteOpenTeamId() { this->openTeamId_ = nullptr;};
    inline string openTeamId() const { DARABONBA_PTR_GET_DEFAULT(openTeamId_, "") };
    inline AddTicketMemoRequest& setOpenTeamId(string openTeamId) { DARABONBA_PTR_SET_VALUE(openTeamId_, openTeamId) };


    // openTicketId Field Functions 
    bool hasOpenTicketId() const { return this->openTicketId_ != nullptr;};
    void deleteOpenTicketId() { this->openTicketId_ = nullptr;};
    inline string openTicketId() const { DARABONBA_PTR_GET_DEFAULT(openTicketId_, "") };
    inline AddTicketMemoRequest& setOpenTicketId(string openTicketId) { DARABONBA_PTR_SET_VALUE(openTicketId_, openTicketId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const AddTicketMemoRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, AddTicketMemoRequestTenantContext) };
    inline AddTicketMemoRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, AddTicketMemoRequestTenantContext) };
    inline AddTicketMemoRequest& setTenantContext(const AddTicketMemoRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline AddTicketMemoRequest& setTenantContext(AddTicketMemoRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // ticketMemo Field Functions 
    bool hasTicketMemo() const { return this->ticketMemo_ != nullptr;};
    void deleteTicketMemo() { this->ticketMemo_ = nullptr;};
    inline const AddTicketMemoRequestTicketMemo & ticketMemo() const { DARABONBA_PTR_GET_CONST(ticketMemo_, AddTicketMemoRequestTicketMemo) };
    inline AddTicketMemoRequestTicketMemo ticketMemo() { DARABONBA_PTR_GET(ticketMemo_, AddTicketMemoRequestTicketMemo) };
    inline AddTicketMemoRequest& setTicketMemo(const AddTicketMemoRequestTicketMemo & ticketMemo) { DARABONBA_PTR_SET_VALUE(ticketMemo_, ticketMemo) };
    inline AddTicketMemoRequest& setTicketMemo(AddTicketMemoRequestTicketMemo && ticketMemo) { DARABONBA_PTR_SET_RVALUE(ticketMemo_, ticketMemo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> openTeamId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openTicketId_ = nullptr;
    std::shared_ptr<AddTicketMemoRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<AddTicketMemoRequestTicketMemo> ticketMemo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
