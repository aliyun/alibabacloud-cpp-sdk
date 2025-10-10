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
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->diskId_ != nullptr && this->newSize_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->type_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ResizeDiskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline ResizeDiskRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // newSize Field Functions 
    bool hasNewSize() const { return this->newSize_ != nullptr;};
    void deleteNewSize() { this->newSize_ = nullptr;};
    inline int32_t newSize() const { DARABONBA_PTR_GET_DEFAULT(newSize_, 0) };
    inline ResizeDiskRequest& setNewSize(int32_t newSize) { DARABONBA_PTR_SET_VALUE(newSize_, newSize) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ResizeDiskRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ResizeDiskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ResizeDiskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ResizeDiskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ResizeDiskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the order.
    // 
    // > This parameter is returned only when you resize subscription disks.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the disk. You can call the [DescribeDisks](https://help.aliyun.com/document_detail/25514.html) operation to query available disk IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> diskId_ = nullptr;
    // The new disk capacity. Unit: GiB. Valid values:
    // 
    // *   System disk:
    // 
    //     *   Basic disk (cloud): 20 to 500.
    // 
    //     *   ESSD (cloud_essd): The valid values vary based on the performance level of the ESSD.
    // 
    //         *   Valid values when SystemDisk.PerformanceLevel is set to PL0: 1 to 2048.
    //         *   Valid values when SystemDisk.PerformanceLevel is set to PL1: 20 to 2048.
    //         *   Valid values when SystemDisk.PerformanceLevel is set to PL2: 461 to 2048.
    //         *   Valid values when SystemDisk.PerformanceLevel is set to PL3: 1261 to 2048.
    // 
    //     *   ESSD AutoPL disk: 1 to 2048.
    // 
    //     *   Other disk categories: 20 to 2048.
    // 
    // *   Data disk:
    // 
    //     *   Ultra disk (cloud_efficiency): 20 to 32768.
    // 
    //     *   Standard SSD (cloud_ssd): 20 to 32768.
    // 
    //     *   ESSD (cloud_essd): The valid values vary based on the performance level of the ESSD.`` To query the performance level of an ESSD, call the [DescribeDisks](https://help.aliyun.com/document_detail/25514.html) operation to query disk information and check the `PerformanceLevel` value in the response.
    // 
    //         *   PL0 ESSD: 1 to 65536.
    //         *   PL1 ESSD: 20 to 65536.
    //         *   PL2 ESSD: 461 to 65536.
    //         *   PL3 ESSD: 1261 to 65536.
    // 
    //     *   Basic disk (cloud): 5 to 2000.
    // 
    //     *   ESSD AutoPL disk (cloud_auto): 1 to 65536.
    // 
    //     *   Standard elastic ephemeral disk (elastic_ephemeral_disk_standard): 64 to 8192.
    // 
    //     *   Premium elastic ephemeral disk (elastic_ephemeral_disk_premium): 64 to 8192.
    // 
    // >  The new disk capacity must be larger than the original disk capacity. Otherwise, an error is reported.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> newSize_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The method that you want to use to resize the disk. Specifies whether to check the image used by the instance supports hot migration. Valid values:
    // 
    // *   offline (default): resizes the disk offline. After you resize a disk offline, you must [restart the associated instance](https://help.aliyun.com/document_detail/25440.html) in the ECS console or by calling the [RebootInstance](https://help.aliyun.com/document_detail/25502.html) operation for the resizing operation to take effect.
    // *   online: resizes the disk online. After you resize a disk online, the resizing operation immediately takes effect. You do not need to restart the associated instance. You can resize ultra disks, standard SSDs, ESSDs, and elastic ephemeral disks online.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
