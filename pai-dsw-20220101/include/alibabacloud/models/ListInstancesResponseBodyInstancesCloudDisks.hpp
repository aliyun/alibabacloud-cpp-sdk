// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESCLOUDDISKS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESCLOUDDISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListInstancesResponseBodyInstancesCloudDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstancesCloudDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstancesCloudDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
    };
    ListInstancesResponseBodyInstancesCloudDisks() = default ;
    ListInstancesResponseBodyInstancesCloudDisks(const ListInstancesResponseBodyInstancesCloudDisks &) = default ;
    ListInstancesResponseBodyInstancesCloudDisks(ListInstancesResponseBodyInstancesCloudDisks &&) = default ;
    ListInstancesResponseBodyInstancesCloudDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstancesCloudDisks() = default ;
    ListInstancesResponseBodyInstancesCloudDisks& operator=(const ListInstancesResponseBodyInstancesCloudDisks &) = default ;
    ListInstancesResponseBodyInstancesCloudDisks& operator=(ListInstancesResponseBodyInstancesCloudDisks &&) = default ;
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
    inline ListInstancesResponseBodyInstancesCloudDisks& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline ListInstancesResponseBodyInstancesCloudDisks& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListInstancesResponseBodyInstancesCloudDisks& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline ListInstancesResponseBodyInstancesCloudDisks& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


  protected:
    // The cloud disk capacity.
    std::shared_ptr<string> capacity_ = nullptr;
    // The mount path of the cloud disk in the container.
    std::shared_ptr<string> mountPath_ = nullptr;
    // The directory on the cloud disk that is mounted to the container.
    std::shared_ptr<string> path_ = nullptr;
    // The cloud disk type. The value rootfs indicates that the cloud disk is used as the root file system (rootfs).
    std::shared_ptr<string> subType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
