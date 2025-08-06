// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDREQUESTTENANTCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDREQUESTTENANTCONTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListTicketOperateRecordRequestTenantContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketOperateRecordRequestTenantContext& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketOperateRecordRequestTenantContext& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListTicketOperateRecordRequestTenantContext() = default ;
    ListTicketOperateRecordRequestTenantContext(const ListTicketOperateRecordRequestTenantContext &) = default ;
    ListTicketOperateRecordRequestTenantContext(ListTicketOperateRecordRequestTenantContext &&) = default ;
    ListTicketOperateRecordRequestTenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketOperateRecordRequestTenantContext() = default ;
    ListTicketOperateRecordRequestTenantContext& operator=(const ListTicketOperateRecordRequestTenantContext &) = default ;
    ListTicketOperateRecordRequestTenantContext& operator=(ListTicketOperateRecordRequestTenantContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantId_ != nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListTicketOperateRecordRequestTenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
