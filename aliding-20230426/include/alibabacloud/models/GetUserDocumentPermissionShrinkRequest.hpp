// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERDOCUMENTPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERDOCUMENTPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserDocumentPermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserDocumentPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryId, dentryId_);
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserDocumentPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryId, dentryId_);
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    GetUserDocumentPermissionShrinkRequest() = default ;
    GetUserDocumentPermissionShrinkRequest(const GetUserDocumentPermissionShrinkRequest &) = default ;
    GetUserDocumentPermissionShrinkRequest(GetUserDocumentPermissionShrinkRequest &&) = default ;
    GetUserDocumentPermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserDocumentPermissionShrinkRequest() = default ;
    GetUserDocumentPermissionShrinkRequest& operator=(const GetUserDocumentPermissionShrinkRequest &) = default ;
    GetUserDocumentPermissionShrinkRequest& operator=(GetUserDocumentPermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dentryId_ == nullptr
        && this->dentryUuid_ == nullptr && this->resourceType_ == nullptr && this->spaceId_ == nullptr && this->tenantContextShrink_ == nullptr; };
    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline int64_t getDentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, 0L) };
    inline GetUserDocumentPermissionShrinkRequest& setDentryId(int64_t dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string getDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline GetUserDocumentPermissionShrinkRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline GetUserDocumentPermissionShrinkRequest& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline int64_t getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, 0L) };
    inline GetUserDocumentPermissionShrinkRequest& setSpaceId(int64_t spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetUserDocumentPermissionShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    shared_ptr<int64_t> dentryId_ {};
    shared_ptr<string> dentryUuid_ {};
    // This parameter is required.
    shared_ptr<int32_t> resourceType_ {};
    shared_ptr<int64_t> spaceId_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
