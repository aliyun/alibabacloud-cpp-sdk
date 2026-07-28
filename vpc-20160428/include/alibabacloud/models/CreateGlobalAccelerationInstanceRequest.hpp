// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGLOBALACCELERATIONINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGLOBALACCELERATIONINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateGlobalAccelerationInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGlobalAccelerationInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthType, bandwidthType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ServiceLocation, serviceLocation_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGlobalAccelerationInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthType, bandwidthType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ServiceLocation, serviceLocation_);
    };
    CreateGlobalAccelerationInstanceRequest() = default ;
    CreateGlobalAccelerationInstanceRequest(const CreateGlobalAccelerationInstanceRequest &) = default ;
    CreateGlobalAccelerationInstanceRequest(CreateGlobalAccelerationInstanceRequest &&) = default ;
    CreateGlobalAccelerationInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGlobalAccelerationInstanceRequest() = default ;
    CreateGlobalAccelerationInstanceRequest& operator=(const CreateGlobalAccelerationInstanceRequest &) = default ;
    CreateGlobalAccelerationInstanceRequest& operator=(CreateGlobalAccelerationInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->bandwidthType_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->serviceLocation_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline CreateGlobalAccelerationInstanceRequest& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthType Field Functions 
    bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
    void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
    inline string getBandwidthType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthType_, "") };
    inline CreateGlobalAccelerationInstanceRequest& setBandwidthType(string bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateGlobalAccelerationInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGlobalAccelerationInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateGlobalAccelerationInstanceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateGlobalAccelerationInstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateGlobalAccelerationInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateGlobalAccelerationInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateGlobalAccelerationInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateGlobalAccelerationInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // serviceLocation Field Functions 
    bool hasServiceLocation() const { return this->serviceLocation_ != nullptr;};
    void deleteServiceLocation() { this->serviceLocation_ = nullptr;};
    inline string getServiceLocation() const { DARABONBA_PTR_GET_DEFAULT(serviceLocation_, "") };
    inline CreateGlobalAccelerationInstanceRequest& setServiceLocation(string serviceLocation) { DARABONBA_PTR_SET_VALUE(serviceLocation_, serviceLocation) };


  protected:
    // The peak bandwidth of the Alibaba Cloud Global Accelerator (GA) instance. Unit: Mbit/s. Valid value: **10**.
    // 
    // This parameter is required.
    shared_ptr<string> bandwidth_ {};
    // The bandwidth type of the instance. Valid values:
    // 
    // - **Sharing**: shared bandwidth.
    // 
    // - **Exclusive**: dedicated bandwidth.
    shared_ptr<string> bandwidthType_ {};
    // The client token that is used to ensure the idempotence of the request. 
    // 
    // The client generates the value of this parameter. Ensure that the value is unique among different requests. The value can be up to 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // The description of the Alibaba Cloud Global Accelerator (GA) instance. 
    // 
    // The description must be 2 to 256 characters in length and must start with a letter or a Chinese character, but cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The name of the Alibaba Cloud Global Accelerator (GA) instance.  
    // 
    // The name must be 2 to 128 characters in length and must start with a letter or a Chinese character. It can contain digits, periods (.), underscores (_), and hyphens (-), but cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region where the Alibaba Cloud Global Accelerator (GA) instance resides. 
    // 
    // You can invoke the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The area where the accelerated service resides. Valid values:
    // 
    // - **china-mainland**: the Chinese mainland.
    // 
    // - **north-america**: North America.
    //    
    // - **asia-pacific**: Asia-Pacific.
    //    
    // - **europe**: Europe.
    // 
    // This parameter is required.
    shared_ptr<string> serviceLocation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
