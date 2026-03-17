// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTAGAPIUNSUPPORTEDFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTAGAPIUNSUPPORTEDFEATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListSmartAGApiUnsupportedFeatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartAGApiUnsupportedFeatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenApiName, openApiName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartAGApiUnsupportedFeatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenApiName, openApiName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
    };
    ListSmartAGApiUnsupportedFeatureRequest() = default ;
    ListSmartAGApiUnsupportedFeatureRequest(const ListSmartAGApiUnsupportedFeatureRequest &) = default ;
    ListSmartAGApiUnsupportedFeatureRequest(ListSmartAGApiUnsupportedFeatureRequest &&) = default ;
    ListSmartAGApiUnsupportedFeatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartAGApiUnsupportedFeatureRequest() = default ;
    ListSmartAGApiUnsupportedFeatureRequest& operator=(const ListSmartAGApiUnsupportedFeatureRequest &) = default ;
    ListSmartAGApiUnsupportedFeatureRequest& operator=(ListSmartAGApiUnsupportedFeatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->openApiName_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->serialNumber_ == nullptr && this->smartAGId_ == nullptr; };
    // openApiName Field Functions 
    bool hasOpenApiName() const { return this->openApiName_ != nullptr;};
    void deleteOpenApiName() { this->openApiName_ = nullptr;};
    inline string getOpenApiName() const { DARABONBA_PTR_GET_DEFAULT(openApiName_, "") };
    inline ListSmartAGApiUnsupportedFeatureRequest& setOpenApiName(string openApiName) { DARABONBA_PTR_SET_VALUE(openApiName_, openApiName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListSmartAGApiUnsupportedFeatureRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListSmartAGApiUnsupportedFeatureRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSmartAGApiUnsupportedFeatureRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListSmartAGApiUnsupportedFeatureRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListSmartAGApiUnsupportedFeatureRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline ListSmartAGApiUnsupportedFeatureRequest& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline ListSmartAGApiUnsupportedFeatureRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


  protected:
    // The API operation for the unsupported feature.
    // 
    // This parameter is required.
    shared_ptr<string> openApiName_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the SAG instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The serial number of the SAG device.
    // 
    // This parameter is required.
    shared_ptr<string> serialNumber_ {};
    // The ID of the SAG instance with which the SAG device is associated.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
