// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERTICKETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERTICKETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class TransferTicketShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferTicketShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Notify, notifyShrink_);
      DARABONBA_PTR_TO_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_TO_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_TO_JSON(ProcessorUserIds, processorUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(TicketMemo, ticketMemoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, TransferTicketShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Notify, notifyShrink_);
      DARABONBA_PTR_FROM_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_FROM_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_FROM_JSON(ProcessorUserIds, processorUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(TicketMemo, ticketMemoShrink_);
    };
    TransferTicketShrinkRequest() = default ;
    TransferTicketShrinkRequest(const TransferTicketShrinkRequest &) = default ;
    TransferTicketShrinkRequest(TransferTicketShrinkRequest &&) = default ;
    TransferTicketShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferTicketShrinkRequest() = default ;
    TransferTicketShrinkRequest& operator=(const TransferTicketShrinkRequest &) = default ;
    TransferTicketShrinkRequest& operator=(TransferTicketShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notifyShrink_ == nullptr
        && return this->openTeamId_ == nullptr && return this->openTicketId_ == nullptr && return this->processorUserIdsShrink_ == nullptr && return this->tenantContextShrink_ == nullptr && return this->ticketMemoShrink_ == nullptr; };
    // notifyShrink Field Functions 
    bool hasNotifyShrink() const { return this->notifyShrink_ != nullptr;};
    void deleteNotifyShrink() { this->notifyShrink_ = nullptr;};
    inline string notifyShrink() const { DARABONBA_PTR_GET_DEFAULT(notifyShrink_, "") };
    inline TransferTicketShrinkRequest& setNotifyShrink(string notifyShrink) { DARABONBA_PTR_SET_VALUE(notifyShrink_, notifyShrink) };


    // openTeamId Field Functions 
    bool hasOpenTeamId() const { return this->openTeamId_ != nullptr;};
    void deleteOpenTeamId() { this->openTeamId_ = nullptr;};
    inline string openTeamId() const { DARABONBA_PTR_GET_DEFAULT(openTeamId_, "") };
    inline TransferTicketShrinkRequest& setOpenTeamId(string openTeamId) { DARABONBA_PTR_SET_VALUE(openTeamId_, openTeamId) };


    // openTicketId Field Functions 
    bool hasOpenTicketId() const { return this->openTicketId_ != nullptr;};
    void deleteOpenTicketId() { this->openTicketId_ = nullptr;};
    inline string openTicketId() const { DARABONBA_PTR_GET_DEFAULT(openTicketId_, "") };
    inline TransferTicketShrinkRequest& setOpenTicketId(string openTicketId) { DARABONBA_PTR_SET_VALUE(openTicketId_, openTicketId) };


    // processorUserIdsShrink Field Functions 
    bool hasProcessorUserIdsShrink() const { return this->processorUserIdsShrink_ != nullptr;};
    void deleteProcessorUserIdsShrink() { this->processorUserIdsShrink_ = nullptr;};
    inline string processorUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(processorUserIdsShrink_, "") };
    inline TransferTicketShrinkRequest& setProcessorUserIdsShrink(string processorUserIdsShrink) { DARABONBA_PTR_SET_VALUE(processorUserIdsShrink_, processorUserIdsShrink) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline TransferTicketShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // ticketMemoShrink Field Functions 
    bool hasTicketMemoShrink() const { return this->ticketMemoShrink_ != nullptr;};
    void deleteTicketMemoShrink() { this->ticketMemoShrink_ = nullptr;};
    inline string ticketMemoShrink() const { DARABONBA_PTR_GET_DEFAULT(ticketMemoShrink_, "") };
    inline TransferTicketShrinkRequest& setTicketMemoShrink(string ticketMemoShrink) { DARABONBA_PTR_SET_VALUE(ticketMemoShrink_, ticketMemoShrink) };


  protected:
    std::shared_ptr<string> notifyShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openTeamId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openTicketId_ = nullptr;
    std::shared_ptr<string> processorUserIdsShrink_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    std::shared_ptr<string> ticketMemoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
