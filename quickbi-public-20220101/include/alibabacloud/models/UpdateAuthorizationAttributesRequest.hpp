// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTHORIZATIONATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTHORIZATIONATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateAuthorizationAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAuthorizationAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EditPermissionType, editPermissionType_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(UsePermissionType, usePermissionType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAuthorizationAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EditPermissionType, editPermissionType_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(UsePermissionType, usePermissionType_);
    };
    UpdateAuthorizationAttributesRequest() = default ;
    UpdateAuthorizationAttributesRequest(const UpdateAuthorizationAttributesRequest &) = default ;
    UpdateAuthorizationAttributesRequest(UpdateAuthorizationAttributesRequest &&) = default ;
    UpdateAuthorizationAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAuthorizationAttributesRequest() = default ;
    UpdateAuthorizationAttributesRequest& operator=(const UpdateAuthorizationAttributesRequest &) = default ;
    UpdateAuthorizationAttributesRequest& operator=(UpdateAuthorizationAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->editPermissionType_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->usePermissionType_ == nullptr; };
    // editPermissionType Field Functions 
    bool hasEditPermissionType() const { return this->editPermissionType_ != nullptr;};
    void deleteEditPermissionType() { this->editPermissionType_ = nullptr;};
    inline int32_t getEditPermissionType() const { DARABONBA_PTR_GET_DEFAULT(editPermissionType_, 0) };
    inline UpdateAuthorizationAttributesRequest& setEditPermissionType(int32_t editPermissionType) { DARABONBA_PTR_SET_VALUE(editPermissionType_, editPermissionType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline UpdateAuthorizationAttributesRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UpdateAuthorizationAttributesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // usePermissionType Field Functions 
    bool hasUsePermissionType() const { return this->usePermissionType_ != nullptr;};
    void deleteUsePermissionType() { this->usePermissionType_ = nullptr;};
    inline int32_t getUsePermissionType() const { DARABONBA_PTR_GET_DEFAULT(usePermissionType_, 0) };
    inline UpdateAuthorizationAttributesRequest& setUsePermissionType(int32_t usePermissionType) { DARABONBA_PTR_SET_VALUE(usePermissionType_, usePermissionType) };


  protected:
    // The edit permission type. Valid values:
    // 
    // - 0: Private.
    // - 11: All workspace members except guests. For data forms, datasets, and data sources, this value indicates all workspace developers.
    // - 12: Specified members. For data forms, datasets, and data sources, this value indicates specified developers.
    shared_ptr<int32_t> editPermissionType_ {};
    // The ID of the resource to modify.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // The resource type. Valid values:
    // 
    // - dashboard: dashboard.
    // - screen: data visualization.
    // - report: workbook.
    // - ANALYSIS: ad hoc analysis.
    // - dashboardOfflineQuery: self-service data retrieval.
    // - dataForm: data form.
    // - cube: dataset.
    // - datasource: data source.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The usage permission type for datasets and data sources. Valid values:
    // 
    // - 1: All workspace members except guests.
    // - 2: Specified members.
    shared_ptr<int32_t> usePermissionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
