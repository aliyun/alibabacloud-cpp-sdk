// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDRIVESPACESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDRIVESPACESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteDriveSpaceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDriveSpaceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDriveSpaceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    DeleteDriveSpaceShrinkRequest() = default ;
    DeleteDriveSpaceShrinkRequest(const DeleteDriveSpaceShrinkRequest &) = default ;
    DeleteDriveSpaceShrinkRequest(DeleteDriveSpaceShrinkRequest &&) = default ;
    DeleteDriveSpaceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDriveSpaceShrinkRequest() = default ;
    DeleteDriveSpaceShrinkRequest& operator=(const DeleteDriveSpaceShrinkRequest &) = default ;
    DeleteDriveSpaceShrinkRequest& operator=(DeleteDriveSpaceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->spaceId_ != nullptr
        && this->tenantContextShrink_ != nullptr; };
    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline DeleteDriveSpaceShrinkRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline DeleteDriveSpaceShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
