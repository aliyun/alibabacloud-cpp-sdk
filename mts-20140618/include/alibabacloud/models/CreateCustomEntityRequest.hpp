// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class CreateCustomEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CustomEntityInfo, customEntityInfo_);
      DARABONBA_PTR_TO_JSON(CustomEntityName, customEntityName_);
      DARABONBA_PTR_TO_JSON(CustomGroupId, customGroupId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CustomEntityInfo, customEntityInfo_);
      DARABONBA_PTR_FROM_JSON(CustomEntityName, customEntityName_);
      DARABONBA_PTR_FROM_JSON(CustomGroupId, customGroupId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateCustomEntityRequest() = default ;
    CreateCustomEntityRequest(const CreateCustomEntityRequest &) = default ;
    CreateCustomEntityRequest(CreateCustomEntityRequest &&) = default ;
    CreateCustomEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomEntityRequest() = default ;
    CreateCustomEntityRequest& operator=(const CreateCustomEntityRequest &) = default ;
    CreateCustomEntityRequest& operator=(CreateCustomEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->customEntityInfo_ == nullptr && this->customEntityName_ == nullptr && this->customGroupId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateCustomEntityRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // customEntityInfo Field Functions 
    bool hasCustomEntityInfo() const { return this->customEntityInfo_ != nullptr;};
    void deleteCustomEntityInfo() { this->customEntityInfo_ = nullptr;};
    inline string getCustomEntityInfo() const { DARABONBA_PTR_GET_DEFAULT(customEntityInfo_, "") };
    inline CreateCustomEntityRequest& setCustomEntityInfo(string customEntityInfo) { DARABONBA_PTR_SET_VALUE(customEntityInfo_, customEntityInfo) };


    // customEntityName Field Functions 
    bool hasCustomEntityName() const { return this->customEntityName_ != nullptr;};
    void deleteCustomEntityName() { this->customEntityName_ = nullptr;};
    inline string getCustomEntityName() const { DARABONBA_PTR_GET_DEFAULT(customEntityName_, "") };
    inline CreateCustomEntityRequest& setCustomEntityName(string customEntityName) { DARABONBA_PTR_SET_VALUE(customEntityName_, customEntityName) };


    // customGroupId Field Functions 
    bool hasCustomGroupId() const { return this->customGroupId_ != nullptr;};
    void deleteCustomGroupId() { this->customGroupId_ = nullptr;};
    inline string getCustomGroupId() const { DARABONBA_PTR_GET_DEFAULT(customGroupId_, "") };
    inline CreateCustomEntityRequest& setCustomGroupId(string customGroupId) { DARABONBA_PTR_SET_VALUE(customGroupId_, customGroupId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateCustomEntityRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCustomEntityRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateCustomEntityRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCustomEntityRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> algorithm_ {};
    shared_ptr<string> customEntityInfo_ {};
    // This parameter is required.
    shared_ptr<string> customEntityName_ {};
    // This parameter is required.
    shared_ptr<string> customGroupId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
