// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEDITINGPROJECTMATERIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEDITINGPROJECTMATERIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteEditingProjectMaterialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEditingProjectMaterialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaterialIds, materialIds_);
      DARABONBA_PTR_TO_JSON(MaterialType, materialType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEditingProjectMaterialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaterialIds, materialIds_);
      DARABONBA_PTR_FROM_JSON(MaterialType, materialType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DeleteEditingProjectMaterialsRequest() = default ;
    DeleteEditingProjectMaterialsRequest(const DeleteEditingProjectMaterialsRequest &) = default ;
    DeleteEditingProjectMaterialsRequest(DeleteEditingProjectMaterialsRequest &&) = default ;
    DeleteEditingProjectMaterialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEditingProjectMaterialsRequest() = default ;
    DeleteEditingProjectMaterialsRequest& operator=(const DeleteEditingProjectMaterialsRequest &) = default ;
    DeleteEditingProjectMaterialsRequest& operator=(DeleteEditingProjectMaterialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->materialIds_ != nullptr
        && this->materialType_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->projectId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr; };
    // materialIds Field Functions 
    bool hasMaterialIds() const { return this->materialIds_ != nullptr;};
    void deleteMaterialIds() { this->materialIds_ = nullptr;};
    inline string materialIds() const { DARABONBA_PTR_GET_DEFAULT(materialIds_, "") };
    inline DeleteEditingProjectMaterialsRequest& setMaterialIds(string materialIds) { DARABONBA_PTR_SET_VALUE(materialIds_, materialIds) };


    // materialType Field Functions 
    bool hasMaterialType() const { return this->materialType_ != nullptr;};
    void deleteMaterialType() { this->materialType_ = nullptr;};
    inline string materialType() const { DARABONBA_PTR_GET_DEFAULT(materialType_, "") };
    inline DeleteEditingProjectMaterialsRequest& setMaterialType(string materialType) { DARABONBA_PTR_SET_VALUE(materialType_, materialType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteEditingProjectMaterialsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DeleteEditingProjectMaterialsRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DeleteEditingProjectMaterialsRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteEditingProjectMaterialsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline DeleteEditingProjectMaterialsRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The material ID. Separate multiple material IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> materialIds_ = nullptr;
    // The type of the material. Valid values:
    // 
    // *   **video**
    // *   **audio**
    // *   **image**
    // 
    // This parameter is required.
    std::shared_ptr<string> materialType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The ID of the online editing project.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
