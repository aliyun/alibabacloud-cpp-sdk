// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZERCINSTANCEDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESIZERCINSTANCEDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ResizeRCInstanceDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeRCInstanceDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NewSize, newSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeRCInstanceDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NewSize, newSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ResizeRCInstanceDiskRequest() = default ;
    ResizeRCInstanceDiskRequest(const ResizeRCInstanceDiskRequest &) = default ;
    ResizeRCInstanceDiskRequest(ResizeRCInstanceDiskRequest &&) = default ;
    ResizeRCInstanceDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeRCInstanceDiskRequest() = default ;
    ResizeRCInstanceDiskRequest& operator=(const ResizeRCInstanceDiskRequest &) = default ;
    ResizeRCInstanceDiskRequest& operator=(ResizeRCInstanceDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->diskId_ == nullptr && this->dryRun_ == nullptr && this->instanceId_ == nullptr && this->newSize_ == nullptr && this->regionId_ == nullptr
        && this->type_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ResizeRCInstanceDiskRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline ResizeRCInstanceDiskRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ResizeRCInstanceDiskRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ResizeRCInstanceDiskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // newSize Field Functions 
    bool hasNewSize() const { return this->newSize_ != nullptr;};
    void deleteNewSize() { this->newSize_ = nullptr;};
    inline int64_t getNewSize() const { DARABONBA_PTR_GET_DEFAULT(newSize_, 0L) };
    inline ResizeRCInstanceDiskRequest& setNewSize(int64_t newSize) { DARABONBA_PTR_SET_VALUE(newSize_, newSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResizeRCInstanceDiskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ResizeRCInstanceDiskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to enable the automatic payment feature for the instance. Valid values:
    // 
    // *   **true** (default): enables the feature. Make sure that your account balance is sufficient.
    // *   **false**: disables the feature. An unpaid order is generated.
    // 
    // >  If your account balance is insufficient, you can set AutoPay to false. In this case, an unpaid order is generated. You can complete the payment in the Expenses and Costs console.
    shared_ptr<bool> autoPay_ {};
    shared_ptr<string> diskId_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, service limits, and insufficient inventory errors.
    // *   **false**: performs a dry run and performs the actual request. If the request passes the dry run, the instance is created.
    shared_ptr<bool> dryRun_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The new disk size. Unit: GiB.
    shared_ptr<int64_t> newSize_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
    // The method that you want to use to resize the disk. Valid values:
    // 
    // *   **offline** (default): resizes disks offline. After you resize a disk offline, you must restart the instance for the resizing operation to take effect.
    // *   **online**: resizes disks online. After you resize a disk online, the resizing operation takes effect immediately and you do not need to restart the instance.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
