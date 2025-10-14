// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTicketOperateRecordRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListTicketOperateRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketOperateRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_TO_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketOperateRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_FROM_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    ListTicketOperateRecordRequest() = default ;
    ListTicketOperateRecordRequest(const ListTicketOperateRecordRequest &) = default ;
    ListTicketOperateRecordRequest(ListTicketOperateRecordRequest &&) = default ;
    ListTicketOperateRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketOperateRecordRequest() = default ;
    ListTicketOperateRecordRequest& operator=(const ListTicketOperateRecordRequest &) = default ;
    ListTicketOperateRecordRequest& operator=(ListTicketOperateRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->openTeamId_ == nullptr
        && return this->openTicketId_ == nullptr && return this->tenantContext_ == nullptr; };
    // openTeamId Field Functions 
    bool hasOpenTeamId() const { return this->openTeamId_ != nullptr;};
    void deleteOpenTeamId() { this->openTeamId_ = nullptr;};
    inline string openTeamId() const { DARABONBA_PTR_GET_DEFAULT(openTeamId_, "") };
    inline ListTicketOperateRecordRequest& setOpenTeamId(string openTeamId) { DARABONBA_PTR_SET_VALUE(openTeamId_, openTeamId) };


    // openTicketId Field Functions 
    bool hasOpenTicketId() const { return this->openTicketId_ != nullptr;};
    void deleteOpenTicketId() { this->openTicketId_ = nullptr;};
    inline string openTicketId() const { DARABONBA_PTR_GET_DEFAULT(openTicketId_, "") };
    inline ListTicketOperateRecordRequest& setOpenTicketId(string openTicketId) { DARABONBA_PTR_SET_VALUE(openTicketId_, openTicketId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const ListTicketOperateRecordRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, ListTicketOperateRecordRequestTenantContext) };
    inline ListTicketOperateRecordRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, ListTicketOperateRecordRequestTenantContext) };
    inline ListTicketOperateRecordRequest& setTenantContext(const ListTicketOperateRecordRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline ListTicketOperateRecordRequest& setTenantContext(ListTicketOperateRecordRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> openTeamId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openTicketId_ = nullptr;
    std::shared_ptr<ListTicketOperateRecordRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
