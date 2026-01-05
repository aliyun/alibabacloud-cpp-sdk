// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCENETWORKOPTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCENETWORKOPTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceNetworkOptionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceNetworkOptionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthWeighting, bandwidthWeighting_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceNetworkOptionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthWeighting, bandwidthWeighting_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyInstanceNetworkOptionsRequest() = default ;
    ModifyInstanceNetworkOptionsRequest(const ModifyInstanceNetworkOptionsRequest &) = default ;
    ModifyInstanceNetworkOptionsRequest(ModifyInstanceNetworkOptionsRequest &&) = default ;
    ModifyInstanceNetworkOptionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceNetworkOptionsRequest() = default ;
    ModifyInstanceNetworkOptionsRequest& operator=(const ModifyInstanceNetworkOptionsRequest &) = default ;
    ModifyInstanceNetworkOptionsRequest& operator=(ModifyInstanceNetworkOptionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidthWeighting_ == nullptr
        && this->instanceId_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // bandwidthWeighting Field Functions 
    bool hasBandwidthWeighting() const { return this->bandwidthWeighting_ != nullptr;};
    void deleteBandwidthWeighting() { this->bandwidthWeighting_ = nullptr;};
    inline string getBandwidthWeighting() const { DARABONBA_PTR_GET_DEFAULT(bandwidthWeighting_, "") };
    inline ModifyInstanceNetworkOptionsRequest& setBandwidthWeighting(string bandwidthWeighting) { DARABONBA_PTR_SET_VALUE(bandwidthWeighting_, bandwidthWeighting) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceNetworkOptionsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyInstanceNetworkOptionsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyInstanceNetworkOptionsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInstanceNetworkOptionsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The bandwidth weight.
    // 
    // The supported values vary with instance types. You can query the bandwidth weights supported by the current instance type by using the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html).
    // 
    // Valid values:
    // 
    // *   Vpc-L1: Vpc-L1.
    // *   Vpc-L2: Vpc-L2.
    // *   Ebs-L1: Ebs-L1.
    // *   Ebs-L2: Ebs-L2.
    // *   Default: the Default.
    shared_ptr<string> bandwidthWeighting_ {};
    // The ID of the instance whose network bandwidth weight is to be modified.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
