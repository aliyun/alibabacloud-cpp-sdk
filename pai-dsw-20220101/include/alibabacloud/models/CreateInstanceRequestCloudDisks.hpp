// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTCLOUDDISKS_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTCLOUDDISKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateInstanceRequestCloudDisksStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CreateInstanceRequestCloudDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestCloudDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestCloudDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
    };
    CreateInstanceRequestCloudDisks() = default ;
    CreateInstanceRequestCloudDisks(const CreateInstanceRequestCloudDisks &) = default ;
    CreateInstanceRequestCloudDisks(CreateInstanceRequestCloudDisks &&) = default ;
    CreateInstanceRequestCloudDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestCloudDisks() = default ;
    CreateInstanceRequestCloudDisks& operator=(const CreateInstanceRequestCloudDisks &) = default ;
    CreateInstanceRequestCloudDisks& operator=(CreateInstanceRequestCloudDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacity_ == nullptr
        && return this->mountPath_ == nullptr && return this->path_ == nullptr && return this->status_ == nullptr && return this->subType_ == nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline string capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, "") };
    inline CreateInstanceRequestCloudDisks& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline CreateInstanceRequestCloudDisks& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateInstanceRequestCloudDisks& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const Models::CreateInstanceRequestCloudDisksStatus & status() const { DARABONBA_PTR_GET_CONST(status_, Models::CreateInstanceRequestCloudDisksStatus) };
    inline Models::CreateInstanceRequestCloudDisksStatus status() { DARABONBA_PTR_GET(status_, Models::CreateInstanceRequestCloudDisksStatus) };
    inline CreateInstanceRequestCloudDisks& setStatus(const Models::CreateInstanceRequestCloudDisksStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline CreateInstanceRequestCloudDisks& setStatus(Models::CreateInstanceRequestCloudDisksStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline CreateInstanceRequestCloudDisks& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


  protected:
    // If **Resource Type** is **Public Resource** or if **Resource Quota** is subscription-based general-purpose computing resources (CPU cores ≥ 2 and memory ≥ 4 GB, or configured with GPU):
    // 
    // Each instance has a free system disk of 100 GiB for persistent storage. **If the DSW instance is stopped and not launched for more than 15 days, the disk is cleared**. The disk can be expanded. For specific pricing, refer to the console.
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
    // The mount path of the cloud disk.
    std::shared_ptr<string> mountPath_ = nullptr;
    // The subpath of the cloud disk that is mounted to the instance.
    std::shared_ptr<string> path_ = nullptr;
    // The disk or snapshot usage.
    std::shared_ptr<Models::CreateInstanceRequestCloudDisksStatus> status_ = nullptr;
    // The cloud disk type.
    // 
    // *   rootfs: Mounts the disk as a system disk. The system environment is stored on the disk.
    std::shared_ptr<string> subType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
