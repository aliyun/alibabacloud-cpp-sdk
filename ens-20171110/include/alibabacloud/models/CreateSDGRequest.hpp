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
    shared_ptr<string> billingCycle_ {};
    // The description of the SDG.
    // 
    // >  We recommend that you specify this parameter in details for subsequent queries.
    shared_ptr<string> description_ {};
    shared_ptr<string> diskType_ {};
    // The ID of the SDG from which you want to create an SDG.
    // 
    // > 
    // 
    // *   The first time you create an SDG, the **FromSDGId** parameter is empty.
    // 
    // *   If the value of the **FromSDGId** parameter is invalid or does not correspond to an original disk, an error is reported.
    // 
    // *   If the value of the **FromSDGId** parameter is not empty, you have created an SDG, and the operation is performed on the existing SDG.
    shared_ptr<string> fromSDGId_ {};
    // The ID of the AIC instance. You can call the [DescribeARMServerInstances](~~DescribeARMServerInstances~~) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> performanceLevel_ {};
    // The maximum capacity of the SDG. Unit: GB.
    // 
    // > 
    // 
    // *   To save costs, we recommend that you specify this parameter based on your business requirements.
    // 
    // *   The first time that you create an SDG, the **Size** parameter is required.
    // 
    // *   When the amount of data increases, you can pass a new **Size** parameter for resizing. If the value of the new **Size** parameter is greater than the value of the old **Size** parameter, the disk size of the SDG is increased to the size that is specified by the new **Size** parameter. If the value of the new **Size** parameter is empty or smaller than that of the old **Size** parameter, no operation is performed.
    shared_ptr<string> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
