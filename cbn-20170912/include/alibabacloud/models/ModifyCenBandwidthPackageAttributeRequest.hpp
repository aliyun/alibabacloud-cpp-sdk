// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCENBANDWIDTHPACKAGEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCENBANDWIDTHPACKAGEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ModifyCenBandwidthPackageAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCenBandwidthPackageAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCenBandwidthPackageAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyCenBandwidthPackageAttributeRequest() = default ;
    ModifyCenBandwidthPackageAttributeRequest(const ModifyCenBandwidthPackageAttributeRequest &) = default ;
    ModifyCenBandwidthPackageAttributeRequest(ModifyCenBandwidthPackageAttributeRequest &&) = default ;
    ModifyCenBandwidthPackageAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCenBandwidthPackageAttributeRequest() = default ;
    ModifyCenBandwidthPackageAttributeRequest& operator=(const ModifyCenBandwidthPackageAttributeRequest &) = default ;
    ModifyCenBandwidthPackageAttributeRequest& operator=(ModifyCenBandwidthPackageAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenBandwidthPackageId_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr; };
    // cenBandwidthPackageId Field Functions 
    bool hasCenBandwidthPackageId() const { return this->cenBandwidthPackageId_ != nullptr;};
    void deleteCenBandwidthPackageId() { this->cenBandwidthPackageId_ = nullptr;};
    inline string cenBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(cenBandwidthPackageId_, "") };
    inline ModifyCenBandwidthPackageAttributeRequest& setCenBandwidthPackageId(string cenBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackageId_, cenBandwidthPackageId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyCenBandwidthPackageAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyCenBandwidthPackageAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyCenBandwidthPackageAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCenBandwidthPackageAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyCenBandwidthPackageAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyCenBandwidthPackageAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the bandwidth plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenBandwidthPackageId_ = nullptr;
    // The new description of the bandwidth plan.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> description_ = nullptr;
    // The new name of the bandwidth plan.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
