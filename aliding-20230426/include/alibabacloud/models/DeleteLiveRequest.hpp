// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteLiveRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteLiveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LiveId, liveId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveId, liveId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    DeleteLiveRequest() = default ;
    DeleteLiveRequest(const DeleteLiveRequest &) = default ;
    DeleteLiveRequest(DeleteLiveRequest &&) = default ;
    DeleteLiveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveRequest() = default ;
    DeleteLiveRequest& operator=(const DeleteLiveRequest &) = default ;
    DeleteLiveRequest& operator=(DeleteLiveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveId_ != nullptr
        && this->tenantContext_ != nullptr; };
    // liveId Field Functions 
    bool hasLiveId() const { return this->liveId_ != nullptr;};
    void deleteLiveId() { this->liveId_ = nullptr;};
    inline string liveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
    inline DeleteLiveRequest& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteLiveRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteLiveRequestTenantContext) };
    inline DeleteLiveRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteLiveRequestTenantContext) };
    inline DeleteLiveRequest& setTenantContext(const DeleteLiveRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteLiveRequest& setTenantContext(DeleteLiveRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> liveId_ = nullptr;
    std::shared_ptr<DeleteLiveRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
