// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPREQUESTRAYCONFIGSTORAGEMOUNTS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPREQUESTRAYCONFIGSTORAGEMOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyDBResourceGroupRequestRayConfigStorageMounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBResourceGroupRequestRayConfigStorageMounts& obj) { 
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(StorageId, storageId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBResourceGroupRequestRayConfigStorageMounts& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(StorageId, storageId_);
    };
    ModifyDBResourceGroupRequestRayConfigStorageMounts() = default ;
    ModifyDBResourceGroupRequestRayConfigStorageMounts(const ModifyDBResourceGroupRequestRayConfigStorageMounts &) = default ;
    ModifyDBResourceGroupRequestRayConfigStorageMounts(ModifyDBResourceGroupRequestRayConfigStorageMounts &&) = default ;
    ModifyDBResourceGroupRequestRayConfigStorageMounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBResourceGroupRequestRayConfigStorageMounts() = default ;
    ModifyDBResourceGroupRequestRayConfigStorageMounts& operator=(const ModifyDBResourceGroupRequestRayConfigStorageMounts &) = default ;
    ModifyDBResourceGroupRequestRayConfigStorageMounts& operator=(ModifyDBResourceGroupRequestRayConfigStorageMounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountPath_ == nullptr
        && return this->storageId_ == nullptr; };
    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline ModifyDBResourceGroupRequestRayConfigStorageMounts& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // storageId Field Functions 
    bool hasStorageId() const { return this->storageId_ != nullptr;};
    void deleteStorageId() { this->storageId_ = nullptr;};
    inline int64_t storageId() const { DARABONBA_PTR_GET_DEFAULT(storageId_, 0L) };
    inline ModifyDBResourceGroupRequestRayConfigStorageMounts& setStorageId(int64_t storageId) { DARABONBA_PTR_SET_VALUE(storageId_, storageId) };


  protected:
    std::shared_ptr<string> mountPath_ = nullptr;
    std::shared_ptr<int64_t> storageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
