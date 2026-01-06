// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->liveId_ == nullptr
        && this->tenantContext_ == nullptr; };
    // liveId Field Functions 
    bool hasLiveId() const { return this->liveId_ != nullptr;};
    void deleteLiveId() { this->liveId_ = nullptr;};
    inline string getLiveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
    inline DeleteLiveRequest& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteLiveRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteLiveRequest::TenantContext) };
    inline DeleteLiveRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteLiveRequest::TenantContext) };
    inline DeleteLiveRequest& setTenantContext(const DeleteLiveRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteLiveRequest& setTenantContext(DeleteLiveRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> liveId_ {};
    shared_ptr<DeleteLiveRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
