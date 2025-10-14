// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListTicketOperateRecordShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketOperateRecordShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_TO_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketOperateRecordShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_FROM_JSON(OpenTicketId, openTicketId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    ListTicketOperateRecordShrinkRequest() = default ;
    ListTicketOperateRecordShrinkRequest(const ListTicketOperateRecordShrinkRequest &) = default ;
    ListTicketOperateRecordShrinkRequest(ListTicketOperateRecordShrinkRequest &&) = default ;
    ListTicketOperateRecordShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketOperateRecordShrinkRequest() = default ;
    ListTicketOperateRecordShrinkRequest& operator=(const ListTicketOperateRecordShrinkRequest &) = default ;
    ListTicketOperateRecordShrinkRequest& operator=(ListTicketOperateRecordShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->openTeamId_ == nullptr
        && return this->openTicketId_ == nullptr && return this->tenantContextShrink_ == nullptr; };
    // openTeamId Field Functions 
    bool hasOpenTeamId() const { return this->openTeamId_ != nullptr;};
    void deleteOpenTeamId() { this->openTeamId_ = nullptr;};
    inline string openTeamId() const { DARABONBA_PTR_GET_DEFAULT(openTeamId_, "") };
    inline ListTicketOperateRecordShrinkRequest& setOpenTeamId(string openTeamId) { DARABONBA_PTR_SET_VALUE(openTeamId_, openTeamId) };


    // openTicketId Field Functions 
    bool hasOpenTicketId() const { return this->openTicketId_ != nullptr;};
    void deleteOpenTicketId() { this->openTicketId_ = nullptr;};
    inline string openTicketId() const { DARABONBA_PTR_GET_DEFAULT(openTicketId_, "") };
    inline ListTicketOperateRecordShrinkRequest& setOpenTicketId(string openTicketId) { DARABONBA_PTR_SET_VALUE(openTicketId_, openTicketId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline ListTicketOperateRecordShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> openTeamId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openTicketId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
