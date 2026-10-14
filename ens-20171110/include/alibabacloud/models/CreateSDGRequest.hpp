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
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSDGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(FromSDGId, fromSDGId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
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
        && this->size_ == nullptr; };
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


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline CreateSDGRequest& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The billing logic for SDG child disks. This parameter specifies the billing method for the RBD child disks produced by this SDG. This parameter does not apply to standard cloud disks.
    // Optional parameter values:
    // 
    // - Hour.
    // 
    // -  Day. This is the default value.
    // 
    // 
    // > - Parameter description: The longer the cycle, the lower the cost. If the disk is released before the billing cycle ends, a service fee is charged.
    shared_ptr<string> billingCycle_ {};
    // The description of the SDG.
    // > Provide a detailed description for easier future queries.
    shared_ptr<string> description_ {};
    // The type of the source disk.
    // Optional parameter values:
    // -  standard: standard cloud disk. This is the default value.
    // -  rbd: RBD disk.
    // 
    // > - Limits: RBD disk SDGs and standard disk SDGs cannot inherit from each other.
    shared_ptr<string> diskType_ {};
    // The ID of an existing SDG.
    // > - If you are creating an SDG for the first time, leave **FromSDGId** empty.
    // >- If **FromSDGId** is invalid or the corresponding raw cloud disk cannot be found, an error is returned.
    // >- If **FromSDGId** is not empty, this indicates that you are operating on an existing SDG rather than creating one for the first time.
    shared_ptr<string> fromSDGId_ {};
    // The AIC instance ID. You can call the [DescribeARMServerInstances](~~DescribeARMServerInstances~~) operation to obtain the InstanceId value.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The SDG sharing ratio parameter. This parameter supports cloud disks with different maximum sharing ratios.
    shared_ptr<int64_t> performanceLevel_ {};
    // The maximum capacity of the SDG. Unit: GB.
    // >- To reduce costs, evaluate the required capacity as needed.
    // >- If you are creating an SDG for the first time, **Size** is required.
    // >- If the data volume increases later, pass a new **Size** value to expand the capacity. If **Size** is not empty and is greater than the original **Size** value of the SDG, the raw cloud disk of the SDG is expanded to the specified **Size**. If **Size** is empty or the specified **Size** is less than the original **Size** value of the SDG, no action is taken.
    // 
    // The minimum tested usable value is 150 GB.
    shared_ptr<string> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
