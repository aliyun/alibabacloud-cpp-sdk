// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCDISKSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCDISKSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCDiskSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCDiskSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCDiskSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyRCDiskSpecRequest() = default ;
    ModifyRCDiskSpecRequest(const ModifyRCDiskSpecRequest &) = default ;
    ModifyRCDiskSpecRequest(ModifyRCDiskSpecRequest &&) = default ;
    ModifyRCDiskSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCDiskSpecRequest() = default ;
    ModifyRCDiskSpecRequest& operator=(const ModifyRCDiskSpecRequest &) = default ;
    ModifyRCDiskSpecRequest& operator=(ModifyRCDiskSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->diskCategory_ == nullptr && this->diskId_ == nullptr && this->dryRun_ == nullptr && this->performanceLevel_ == nullptr && this->regionId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyRCDiskSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline ModifyRCDiskSpecRequest& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline ModifyRCDiskSpecRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyRCDiskSpecRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline ModifyRCDiskSpecRequest& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRCDiskSpecRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // - **true** (default): Automatic payment is enabled. Make sure that your account balance is sufficient.
    // - **false**: Only an order is generated. No payment is made.
    // 
    // > If your payment method has an insufficient balance, set AutoPay to false. An unpaid order is generated. You can log on to the ApsaraDB RDS console to complete the payment.
    // >
    shared_ptr<bool> autoPay_ {};
    // The type of the cloud disk. Valid values:
    // - **cloud_essd** (default): ESSD cloud disk.
    // - **cloud_auto**: ESSD AutoPL cloud disk.
    // - **cloud_ssd**: standard SSD.
    shared_ptr<string> diskCategory_ {};
    // The cloud disk ID.
    shared_ptr<string> diskId_ {};
    // Specifies whether to perform a dry run for this operation. Valid values:
    // * **true**: A dry run is performed without executing the change. The check items include request parameters, request format, business limits, and inventory.
    // * **false** (default): A normal request is sent. After the check is passed, the change is directly executed.
    shared_ptr<bool> dryRun_ {};
    // The performance level (PL) of the ESSD cloud disk. Valid values:
    // 
    // - **PL1** (default): A maximum of 50,000 random read/write IOPS per disk.
    // 
    // - **PL2**: A maximum of 100,000 random read/write IOPS per disk.
    // 
    // - **PL3**: A maximum of 1,000,000 random read/write IOPS per disk.
    shared_ptr<string> performanceLevel_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
