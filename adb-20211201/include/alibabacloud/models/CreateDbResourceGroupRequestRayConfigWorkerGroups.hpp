// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBRESOURCEGROUPREQUESTRAYCONFIGWORKERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBRESOURCEGROUPREQUESTRAYCONFIGWORKERGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateDBResourceGroupRequestRayConfigWorkerGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBResourceGroupRequestRayConfigWorkerGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AllocateUnit, allocateUnit_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(MaxWorkerQuantity, maxWorkerQuantity_);
      DARABONBA_PTR_TO_JSON(MinWorkerQuantity, minWorkerQuantity_);
      DARABONBA_PTR_TO_JSON(WorkerDiskCapacity, workerDiskCapacity_);
      DARABONBA_PTR_TO_JSON(WorkerSpecName, workerSpecName_);
      DARABONBA_PTR_TO_JSON(WorkerSpecType, workerSpecType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBResourceGroupRequestRayConfigWorkerGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocateUnit, allocateUnit_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(MaxWorkerQuantity, maxWorkerQuantity_);
      DARABONBA_PTR_FROM_JSON(MinWorkerQuantity, minWorkerQuantity_);
      DARABONBA_PTR_FROM_JSON(WorkerDiskCapacity, workerDiskCapacity_);
      DARABONBA_PTR_FROM_JSON(WorkerSpecName, workerSpecName_);
      DARABONBA_PTR_FROM_JSON(WorkerSpecType, workerSpecType_);
    };
    CreateDBResourceGroupRequestRayConfigWorkerGroups() = default ;
    CreateDBResourceGroupRequestRayConfigWorkerGroups(const CreateDBResourceGroupRequestRayConfigWorkerGroups &) = default ;
    CreateDBResourceGroupRequestRayConfigWorkerGroups(CreateDBResourceGroupRequestRayConfigWorkerGroups &&) = default ;
    CreateDBResourceGroupRequestRayConfigWorkerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBResourceGroupRequestRayConfigWorkerGroups() = default ;
    CreateDBResourceGroupRequestRayConfigWorkerGroups& operator=(const CreateDBResourceGroupRequestRayConfigWorkerGroups &) = default ;
    CreateDBResourceGroupRequestRayConfigWorkerGroups& operator=(CreateDBResourceGroupRequestRayConfigWorkerGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocateUnit_ == nullptr
        && return this->groupName_ == nullptr && return this->maxWorkerQuantity_ == nullptr && return this->minWorkerQuantity_ == nullptr && return this->workerDiskCapacity_ == nullptr && return this->workerSpecName_ == nullptr
        && return this->workerSpecType_ == nullptr; };
    // allocateUnit Field Functions 
    bool hasAllocateUnit() const { return this->allocateUnit_ != nullptr;};
    void deleteAllocateUnit() { this->allocateUnit_ = nullptr;};
    inline string allocateUnit() const { DARABONBA_PTR_GET_DEFAULT(allocateUnit_, "") };
    inline CreateDBResourceGroupRequestRayConfigWorkerGroups& setAllocateUnit(string allocateUnit) { DARABONBA_PTR_SET_VALUE(allocateUnit_, allocateUnit) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateDBResourceGroupRequestRayConfigWorkerGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // maxWorkerQuantity Field Functions 
    bool hasMaxWorkerQuantity() const { return this->maxWorkerQuantity_ != nullptr;};
    void deleteMaxWorkerQuantity() { this->maxWorkerQuantity_ = nullptr;};
    inline int32_t maxWorkerQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxWorkerQuantity_, 0) };
    inline CreateDBResourceGroupRequestRayConfigWorkerGroups& setMaxWorkerQuantity(int32_t maxWorkerQuantity) { DARABONBA_PTR_SET_VALUE(maxWorkerQuantity_, maxWorkerQuantity) };


    // minWorkerQuantity Field Functions 
    bool hasMinWorkerQuantity() const { return this->minWorkerQuantity_ != nullptr;};
    void deleteMinWorkerQuantity() { this->minWorkerQuantity_ = nullptr;};
    inline int32_t minWorkerQuantity() const { DARABONBA_PTR_GET_DEFAULT(minWorkerQuantity_, 0) };
    inline CreateDBResourceGroupRequestRayConfigWorkerGroups& setMinWorkerQuantity(int32_t minWorkerQuantity) { DARABONBA_PTR_SET_VALUE(minWorkerQuantity_, minWorkerQuantity) };


    // workerDiskCapacity Field Functions 
    bool hasWorkerDiskCapacity() const { return this->workerDiskCapacity_ != nullptr;};
    void deleteWorkerDiskCapacity() { this->workerDiskCapacity_ = nullptr;};
    inline string workerDiskCapacity() const { DARABONBA_PTR_GET_DEFAULT(workerDiskCapacity_, "") };
    inline CreateDBResourceGroupRequestRayConfigWorkerGroups& setWorkerDiskCapacity(string workerDiskCapacity) { DARABONBA_PTR_SET_VALUE(workerDiskCapacity_, workerDiskCapacity) };


    // workerSpecName Field Functions 
    bool hasWorkerSpecName() const { return this->workerSpecName_ != nullptr;};
    void deleteWorkerSpecName() { this->workerSpecName_ = nullptr;};
    inline string workerSpecName() const { DARABONBA_PTR_GET_DEFAULT(workerSpecName_, "") };
    inline CreateDBResourceGroupRequestRayConfigWorkerGroups& setWorkerSpecName(string workerSpecName) { DARABONBA_PTR_SET_VALUE(workerSpecName_, workerSpecName) };


    // workerSpecType Field Functions 
    bool hasWorkerSpecType() const { return this->workerSpecType_ != nullptr;};
    void deleteWorkerSpecType() { this->workerSpecType_ = nullptr;};
    inline string workerSpecType() const { DARABONBA_PTR_GET_DEFAULT(workerSpecType_, "") };
    inline CreateDBResourceGroupRequestRayConfigWorkerGroups& setWorkerSpecType(string workerSpecType) { DARABONBA_PTR_SET_VALUE(workerSpecType_, workerSpecType) };


  protected:
    std::shared_ptr<string> allocateUnit_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<int32_t> maxWorkerQuantity_ = nullptr;
    std::shared_ptr<int32_t> minWorkerQuantity_ = nullptr;
    std::shared_ptr<string> workerDiskCapacity_ = nullptr;
    std::shared_ptr<string> workerSpecName_ = nullptr;
    std::shared_ptr<string> workerSpecType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
