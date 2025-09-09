// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYCLOUDDISKS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYCLOUDDISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetInstanceResponseBodyCloudDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyCloudDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyCloudDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
    };
    GetInstanceResponseBodyCloudDisks() = default ;
    GetInstanceResponseBodyCloudDisks(const GetInstanceResponseBodyCloudDisks &) = default ;
    GetInstanceResponseBodyCloudDisks(GetInstanceResponseBodyCloudDisks &&) = default ;
    GetInstanceResponseBodyCloudDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyCloudDisks() = default ;
    GetInstanceResponseBodyCloudDisks& operator=(const GetInstanceResponseBodyCloudDisks &) = default ;
    GetInstanceResponseBodyCloudDisks& operator=(GetInstanceResponseBodyCloudDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capacity_ != nullptr
        && this->mountPath_ != nullptr && this->path_ != nullptr && this->subType_ != nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline string capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, "") };
    inline GetInstanceResponseBodyCloudDisks& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline GetInstanceResponseBodyCloudDisks& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetInstanceResponseBodyCloudDisks& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline GetInstanceResponseBodyCloudDisks& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


  protected:
    // Disk Capacity
    std::shared_ptr<string> capacity_ = nullptr;
    // The mount path of the cloud disk in the container.
    std::shared_ptr<string> mountPath_ = nullptr;
    // The directory on the cloud disk that is mounted to the container.
    std::shared_ptr<string> path_ = nullptr;
    // The usage mode of the cloud disk. The value rootfs indicates that the cloud disk is used as the root file system.
    std::shared_ptr<string> subType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
