// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZEDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESIZEDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ResizeDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(NewSize, newSize_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(NewSize, newSize_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ResizeDiskRequest() = default ;
    ResizeDiskRequest(const ResizeDiskRequest &) = default ;
    ResizeDiskRequest(ResizeDiskRequest &&) = default ;
    ResizeDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeDiskRequest() = default ;
    ResizeDiskRequest& operator=(const ResizeDiskRequest &) = default ;
    ResizeDiskRequest& operator=(ResizeDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->diskId_ == nullptr && this->newSize_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->type_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ResizeDiskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline ResizeDiskRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // newSize Field Functions 
    bool hasNewSize() const { return this->newSize_ != nullptr;};
    void deleteNewSize() { this->newSize_ = nullptr;};
    inline int32_t getNewSize() const { DARABONBA_PTR_GET_DEFAULT(newSize_, 0) };
    inline ResizeDiskRequest& setNewSize(int32_t newSize) { DARABONBA_PTR_SET_VALUE(newSize_, newSize) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ResizeDiskRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ResizeDiskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ResizeDiskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ResizeDiskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ResizeDiskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The **ClientToken** value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The disk ID. You can call [DescribeDisks](https://help.aliyun.com/document_detail/25514.html) to query disk IDs.
    // 
    // This parameter is required.
    shared_ptr<string> diskId_ {};
    // The new disk capacity that you want to expand to. Unit: GiB. Valid values:
    // - System disk:
    //   - Basic disk: 20 to 500.
    //   - Enterprise SSD:
    //     - PL0: 1 to 2048.
    //     - PL1: 20 to 2048.
    //     - PL2: 461 to 2048.
    //     - PL3: 1261 to 2048.
    //   - ESSD AutoPL disk: 1 to 2048.
    //   - Other disk types: 20 to 2048.
    // 
    // - Data disk:
    //     - Ultra disk (cloud_efficiency): 20 to 32768.
    //     - Standard SSD (cloud_ssd): 20 to 32768.
    //     - Enterprise SSD (cloud_essd): The valid values depend on the value of `PerformanceLevel`. You can call [DescribeDisks](https://help.aliyun.com/document_detail/25514.html) to query disk information and then check the valid values based on the `PerformanceLevel` parameter in the response.
    //         - PL0: 1 to 65536.
    //         - PL1: 20 to 65536.
    //         - PL2: 461 to 65536.
    //         - PL3: 1261 to 65536.
    //     - Basic disk (cloud): 5 to 2000.
    //     - ESSD AutoPL disk (cloud_auto): 1 to 65536.
    // <props="china">
    //     - ESSD Entry disk (cloud_essd_entry): 10 to 32768.
    // 
    //   - Elastic ephemeral disk - Standard (elastic_ephemeral_disk_standard): 64 to 8,192.
    //   - Elastic ephemeral disk - Premium (elastic_ephemeral_disk_premium): 64 to 8,192.
    // 
    // >The specified new disk capacity must be greater than the original disk capacity. Otherwise, an error is returned.
    // 
    // This parameter is required.
    shared_ptr<int32_t> newSize_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The method used to expand the disk. Valid values:
    // 
    // - offline (default): offline expansion. After the expansion, you must restart the instance in the console by following the instructions in [Restart an instance](https://help.aliyun.com/document_detail/25440.html) or by calling the [RebootInstance](https://help.aliyun.com/document_detail/25502.html) operation for the changes to take effect.
    //  
    // - online: online expansion. The expansion takes effect without restarting the instance. Supported disk types include ultra disks, standard SSDs, enterprise SSDs, and elastic ephemeral disks.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
