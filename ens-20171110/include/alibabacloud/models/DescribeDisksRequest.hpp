// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDisksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DiskChargeType, diskChargeType_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DiskIds, diskIds_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderByParams, orderByParams_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DiskChargeType, diskChargeType_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DiskIds, diskIds_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderByParams, orderByParams_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDisksRequest() = default ;
    DescribeDisksRequest(const DescribeDisksRequest &) = default ;
    DescribeDisksRequest(DescribeDisksRequest &&) = default ;
    DescribeDisksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksRequest() = default ;
    DescribeDisksRequest& operator=(const DescribeDisksRequest &) = default ;
    DescribeDisksRequest& operator=(DescribeDisksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->diskChargeType_ != nullptr && this->diskId_ != nullptr && this->diskIds_ != nullptr && this->diskName_ != nullptr && this->diskType_ != nullptr
        && this->ensRegionId_ != nullptr && this->ensRegionIds_ != nullptr && this->instanceId_ != nullptr && this->orderByParams_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->snapshotId_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDisksRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // diskChargeType Field Functions 
    bool hasDiskChargeType() const { return this->diskChargeType_ != nullptr;};
    void deleteDiskChargeType() { this->diskChargeType_ = nullptr;};
    inline string diskChargeType() const { DARABONBA_PTR_GET_DEFAULT(diskChargeType_, "") };
    inline DescribeDisksRequest& setDiskChargeType(string diskChargeType) { DARABONBA_PTR_SET_VALUE(diskChargeType_, diskChargeType) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeDisksRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // diskIds Field Functions 
    bool hasDiskIds() const { return this->diskIds_ != nullptr;};
    void deleteDiskIds() { this->diskIds_ = nullptr;};
    inline string diskIds() const { DARABONBA_PTR_GET_DEFAULT(diskIds_, "") };
    inline DescribeDisksRequest& setDiskIds(string diskIds) { DARABONBA_PTR_SET_VALUE(diskIds_, diskIds) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline DescribeDisksRequest& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeDisksRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeDisksRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ensRegionIds Field Functions 
    bool hasEnsRegionIds() const { return this->ensRegionIds_ != nullptr;};
    void deleteEnsRegionIds() { this->ensRegionIds_ = nullptr;};
    inline string ensRegionIds() const { DARABONBA_PTR_GET_DEFAULT(ensRegionIds_, "") };
    inline DescribeDisksRequest& setEnsRegionIds(string ensRegionIds) { DARABONBA_PTR_SET_VALUE(ensRegionIds_, ensRegionIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDisksRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderByParams Field Functions 
    bool hasOrderByParams() const { return this->orderByParams_ != nullptr;};
    void deleteOrderByParams() { this->orderByParams_ = nullptr;};
    inline string orderByParams() const { DARABONBA_PTR_GET_DEFAULT(orderByParams_, "") };
    inline DescribeDisksRequest& setOrderByParams(string orderByParams) { DARABONBA_PTR_SET_VALUE(orderByParams_, orderByParams) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeDisksRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeDisksRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeDisksRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDisksRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDisksRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The category of the disk.
    // 
    // *   cloud_efficiency: ultra disk.
    // *   cloud_ssd: all-flash disk.
    // *   local_hdd: local HDD.
    // *   local_ssd: local SSD.
    std::shared_ptr<string> category_ = nullptr;
    // The billing method.
    // 
    // *   prePay: subscription.
    // *   postpay: pay-as-you-go.
    std::shared_ptr<string> diskChargeType_ = nullptr;
    // The ID of the disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The ID of the disk.
    std::shared_ptr<string> diskIds_ = nullptr;
    // The name of the disk.
    std::shared_ptr<string> diskName_ = nullptr;
    // The purchase method of the disk. Valid values:
    // 
    // *   ServiceDisk: The disk is purchased when ENS is activated.
    // *   ResoureDisk: The disk is purchased when the instance is created.
    // *   PostPayDisk: The disk is separately purchased.
    std::shared_ptr<string> diskType_ = nullptr;
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The node information.
    std::shared_ptr<string> ensRegionIds_ = nullptr;
    // The ID of the instance to which the disk is attached.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The order in which you want to sort the returned data. Example: {"EnsRegionId":"desc"}. By default, the nodes are sorted by IDs in descending order.
    std::shared_ptr<string> orderByParams_ = nullptr;
    // The number of the page to return. Pages start from page **1**.
    // 
    // Default value: **1**.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: **50**.
    // 
    // Default value: **10**.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The ID of the snapshot.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The status of the disk. Valid values:
    // 
    // *   In-use: The disk is in use.
    // *   Available: The disk can be attached.
    // *   Attaching: The disk is being attached.
    // *   Detaching: The disk is being detached.
    // *   Creating: The disk is being created.
    // *   ReIniting: The disk is being reset.
    // *   Deleting: The disk is being released.
    // *   Deleted: The disk is released.
    // *   Expiring: The disk is about to expire.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the disk. Valid values:
    // 
    // *   system: system disk.
    // *   data: data disk.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
