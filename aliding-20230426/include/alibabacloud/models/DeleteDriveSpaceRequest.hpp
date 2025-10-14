// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDRIVESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDRIVESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteDriveSpaceRequestTenantContext.hpp>
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
    virtual bool empty() const override { return this->spaceId_ == nullptr
        && return this->tenantContext_ == nullptr; };
    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline DeleteDriveSpaceRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteDriveSpaceRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteDriveSpaceRequestTenantContext) };
    inline DeleteDriveSpaceRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteDriveSpaceRequestTenantContext) };
    inline DeleteDriveSpaceRequest& setTenantContext(const DeleteDriveSpaceRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteDriveSpaceRequest& setTenantContext(DeleteDriveSpaceRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<DeleteDriveSpaceRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
