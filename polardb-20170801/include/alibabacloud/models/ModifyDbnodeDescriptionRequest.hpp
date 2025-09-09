// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBNODEDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBNODEDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBNodeDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBNodeDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNodeDescription, DBNodeDescription_);
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBNodeDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNodeDescription, DBNodeDescription_);
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyDBNodeDescriptionRequest() = default ;
    ModifyDBNodeDescriptionRequest(const ModifyDBNodeDescriptionRequest &) = default ;
    ModifyDBNodeDescriptionRequest(ModifyDBNodeDescriptionRequest &&) = default ;
    ModifyDBNodeDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBNodeDescriptionRequest() = default ;
    ModifyDBNodeDescriptionRequest& operator=(const ModifyDBNodeDescriptionRequest &) = default ;
    ModifyDBNodeDescriptionRequest& operator=(ModifyDBNodeDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->DBNodeDescription_ != nullptr && this->DBNodeId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBNodeDescriptionRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeDescription Field Functions 
    bool hasDBNodeDescription() const { return this->DBNodeDescription_ != nullptr;};
    void deleteDBNodeDescription() { this->DBNodeDescription_ = nullptr;};
    inline string DBNodeDescription() const { DARABONBA_PTR_GET_DEFAULT(DBNodeDescription_, "") };
    inline ModifyDBNodeDescriptionRequest& setDBNodeDescription(string DBNodeDescription) { DARABONBA_PTR_SET_VALUE(DBNodeDescription_, DBNodeDescription) };


    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline string DBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
    inline ModifyDBNodeDescriptionRequest& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBNodeDescriptionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBNodeDescriptionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBNodeDescriptionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBNodeDescriptionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBNodeDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBNodeId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
