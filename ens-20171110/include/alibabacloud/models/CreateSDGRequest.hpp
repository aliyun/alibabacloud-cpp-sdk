// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESDGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESDGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateSDGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSDGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(FromSDGId, fromSDGId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(ResetOptimize, resetOptimize_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSDGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(FromSDGId, fromSDGId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(ResetOptimize, resetOptimize_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    CreateSDGRequest() = default ;
    CreateSDGRequest(const CreateSDGRequest &) = default ;
    CreateSDGRequest(CreateSDGRequest &&) = default ;
    CreateSDGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSDGRequest() = default ;
    CreateSDGRequest& operator=(const CreateSDGRequest &) = default ;
    CreateSDGRequest& operator=(CreateSDGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingCycle_ == nullptr
        && this->description_ == nullptr && this->diskType_ == nullptr && this->fromSDGId_ == nullptr && this->instanceId_ == nullptr && this->performanceLevel_ == nullptr
        && this->resetOptimize_ == nullptr && this->size_ == nullptr; };
    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline CreateSDGRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSDGRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreateSDGRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // fromSDGId Field Functions 
    bool hasFromSDGId() const { return this->fromSDGId_ != nullptr;};
    void deleteFromSDGId() { this->fromSDGId_ = nullptr;};
    inline string getFromSDGId() const { DARABONBA_PTR_GET_DEFAULT(fromSDGId_, "") };
    inline CreateSDGRequest& setFromSDGId(string fromSDGId) { DARABONBA_PTR_SET_VALUE(fromSDGId_, fromSDGId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateSDGRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline int64_t getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, 0L) };
    inline CreateSDGRequest& setPerformanceLevel(int64_t performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // resetOptimize Field Functions 
    bool hasResetOptimize() const { return this->resetOptimize_ != nullptr;};
    void deleteResetOptimize() { this->resetOptimize_ = nullptr;};
    inline bool getResetOptimize() const { DARABONBA_PTR_GET_DEFAULT(resetOptimize_, false) };
    inline CreateSDGRequest& setResetOptimize(bool resetOptimize) { DARABONBA_PTR_SET_VALUE(resetOptimize_, resetOptimize) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline CreateSDGRequest& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The billing and renewal logic for child disks of the SDG. This parameter specifies the billing and renewal plan for the RBD child disks generated by the SDG. This parameter does not apply to standard cloud disks. Valid values:
    // 
    // - Hour.
    // 
    // - Day (default).
    // 
    // > - Parameter description: A longer cycle results in lower costs. If the disk is released before the cycle ends, a handling fee is charged.
    shared_ptr<string> billingCycle_ {};
    // The description of the SDG.
    // > Provide a detailed description for future queries.
    shared_ptr<string> description_ {};
    // The type of the master disk to be created. Valid values:
    // - standard: standard cloud disk. This is the default value.
    // - rbd: RBD disk.
    // 
    // > - Limits: RBD disk SDGs and standard disk SDGs cannot inherit from each other.
    shared_ptr<string> diskType_ {};
    // The ID of an existing SDG.
    // > - If you create an SDG for the first time, leave **FromSDGId** empty.
    // > - If **FromSDGId** is invalid or the corresponding original cloud disk cannot be found, an error is returned.
    // > - If **FromSDGId** is not empty, it indicates that you are not creating an SDG for the first time and are performing operations on an existing SDG.
    shared_ptr<string> fromSDGId_ {};
    // The AIC instance ID. You can call the [DescribeARMServerInstances](~~DescribeARMServerInstances~~) operation to obtain the InstanceId value.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The sharing ratio parameter of the SDG. This parameter supports cloud disks with different maximum sharing ratios.
    shared_ptr<int64_t> performanceLevel_ {};
    // The master disk reset optimization setting.
    // > - Instructions: If you set this parameter to true, master disk reset optimization is enabled. When a master disk is subsequently created, the system determines whether to skip the master disk reset step based on the chain relationship.
    // 
    // >Warning: If you need to restore master disk data by resetting the disk after master disk reset is enabled, you must disable this parameter.</warning>
    shared_ptr<bool> resetOptimize_ {};
    // The maximum capacity of the SDG. Unit: GB.
    // > - To save costs, evaluate the capacity as needed.
    // > - If you create an SDG for the first time, **Size** is required.
    // > - You can pass a new **Size** value to expand the capacity when the data volume increases. If **Size** is not empty and is greater than the original **Size** of the SDG, the original cloud disk corresponding to the SDG is expanded to the current **Size**. If **Size** is empty or the specified **Size** is less than the original **Size** of the SDG, the system does not process the request.
    // 
    // The minimum tested and available value is 150 GB.
    shared_ptr<string> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
