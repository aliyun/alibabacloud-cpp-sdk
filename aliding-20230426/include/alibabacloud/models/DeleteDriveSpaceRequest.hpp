// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDRIVESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDRIVESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteDriveSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDriveSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDriveSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    DeleteDriveSpaceRequest() = default ;
    DeleteDriveSpaceRequest(const DeleteDriveSpaceRequest &) = default ;
    DeleteDriveSpaceRequest(DeleteDriveSpaceRequest &&) = default ;
    DeleteDriveSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDriveSpaceRequest() = default ;
    DeleteDriveSpaceRequest& operator=(const DeleteDriveSpaceRequest &) = default ;
    DeleteDriveSpaceRequest& operator=(DeleteDriveSpaceRequest &&) = default ;
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

    virtual bool empty() const override { return this->spaceId_ == nullptr
        && this->tenantContext_ == nullptr; };
    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline DeleteDriveSpaceRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteDriveSpaceRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteDriveSpaceRequest::TenantContext) };
    inline DeleteDriveSpaceRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteDriveSpaceRequest::TenantContext) };
    inline DeleteDriveSpaceRequest& setTenantContext(const DeleteDriveSpaceRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteDriveSpaceRequest& setTenantContext(DeleteDriveSpaceRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> spaceId_ {};
    shared_ptr<DeleteDriveSpaceRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
