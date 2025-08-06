// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTICKETMEMOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTICKETMEMOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddTicketMemoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTicketMemoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_TO_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(TicketMemo, ticketMemoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddTicketMemoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_FROM_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(TicketMemo, ticketMemoShrink_);
    };
    AddTicketMemoShrinkRequest() = default ;
    AddTicketMemoShrinkRequest(const AddTicketMemoShrinkRequest &) = default ;
    AddTicketMemoShrinkRequest(AddTicketMemoShrinkRequest &&) = default ;
    AddTicketMemoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTicketMemoShrinkRequest() = default ;
    AddTicketMemoShrinkRequest& operator=(const AddTicketMemoShrinkRequest &) = default ;
    AddTicketMemoShrinkRequest& operator=(AddTicketMemoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->openTeamId_ != nullptr
        && this->openTicketId_ != nullptr && this->tenantContextShrink_ != nullptr && this->ticketMemoShrink_ != nullptr; };
    // openTeamId Field Functions 
    bool hasOpenTeamId() const { return this->openTeamId_ != nullptr;};
    void deleteOpenTeamId() { this->openTeamId_ = nullptr;};
    inline string openTeamId() const { DARABONBA_PTR_GET_DEFAULT(openTeamId_, "") };
    inline AddTicketMemoShrinkRequest& setOpenTeamId(string openTeamId) { DARABONBA_PTR_SET_VALUE(openTeamId_, openTeamId) };


    // openTicketId Field Functions 
    bool hasOpenTicketId() const { return this->openTicketId_ != nullptr;};
    void deleteOpenTicketId() { this->openTicketId_ = nullptr;};
    inline string openTicketId() const { DARABONBA_PTR_GET_DEFAULT(openTicketId_, "") };
    inline AddTicketMemoShrinkRequest& setOpenTicketId(string openTicketId) { DARABONBA_PTR_SET_VALUE(openTicketId_, openTicketId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline AddTicketMemoShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // ticketMemoShrink Field Functions 
    bool hasTicketMemoShrink() const { return this->ticketMemoShrink_ != nullptr;};
    void deleteTicketMemoShrink() { this->ticketMemoShrink_ = nullptr;};
    inline string ticketMemoShrink() const { DARABONBA_PTR_GET_DEFAULT(ticketMemoShrink_, "") };
    inline AddTicketMemoShrinkRequest& setTicketMemoShrink(string ticketMemoShrink) { DARABONBA_PTR_SET_VALUE(ticketMemoShrink_, ticketMemoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> openTeamId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openTicketId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    std::shared_ptr<string> ticketMemoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
