// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTCLOUDDISKS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTCLOUDDISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class UpdateInstanceRequestCloudDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequestCloudDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequestCloudDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
    };
    UpdateInstanceRequestCloudDisks() = default ;
    UpdateInstanceRequestCloudDisks(const UpdateInstanceRequestCloudDisks &) = default ;
    UpdateInstanceRequestCloudDisks(UpdateInstanceRequestCloudDisks &&) = default ;
    UpdateInstanceRequestCloudDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequestCloudDisks() = default ;
    UpdateInstanceRequestCloudDisks& operator=(const UpdateInstanceRequestCloudDisks &) = default ;
    UpdateInstanceRequestCloudDisks& operator=(UpdateInstanceRequestCloudDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacity_ == nullptr
        && return this->subType_ == nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline string capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, "") };
    inline UpdateInstanceRequestCloudDisks& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline UpdateInstanceRequestCloudDisks& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


  protected:
    // If **Resource Type** is **Public Resource** or if **Resource Quota** is subscription-based general-purpose computing resources (CPU cores ≥ 2 and memory ≥ 4 GB, or configured with GPU):
    // 
    // Each instance has a free system disk quota of 100 GiB for persistent storage. **If the DSW instance is stopped and not launched for more than 15 days, the disk is cleared**. The disk can be expanded. For specific pricing, refer to the console.
    // 
    // **
    // 
    // **Warning**
    // 
    // *   After the expansion, you cannot reduce the storage space. Proceed with caution.
    // 
    // *   After the expansion, the disk is not cleared if the instance is stopped for more than 15 days. However, it will continue to incur fees.
    // 
    // *   If you delete the instance, the system disk is also released and the data stored in the disk is deleted. Make sure that you have backed up your data before you delete the instance.
    // 
    // If you need persistent storage, you can **mount a dataset** or add the OSS, NAS, or CPFS path to the **storage path**.
    std::shared_ptr<string> capacity_ = nullptr;
    // Disk type:
    // 
    // *   rootfs: Mounts the disk as a system disk. The system environment is stored on the disk.
    std::shared_ptr<string> subType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
