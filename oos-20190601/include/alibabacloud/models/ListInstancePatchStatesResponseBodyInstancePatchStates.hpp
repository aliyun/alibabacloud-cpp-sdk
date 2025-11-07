// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEPATCHSTATESRESPONSEBODYINSTANCEPATCHSTATES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEPATCHSTATESRESPONSEBODYINSTANCEPATCHSTATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListInstancePatchStatesResponseBodyInstancePatchStates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancePatchStatesResponseBodyInstancePatchStates& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(InstalledCount, installedCount_);
      DARABONBA_PTR_TO_JSON(InstalledOtherCount, installedOtherCount_);
      DARABONBA_PTR_TO_JSON(InstalledPendingRebootCount, installedPendingRebootCount_);
      DARABONBA_PTR_TO_JSON(InstalledRejectedCount, installedRejectedCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MissingCount, missingCount_);
      DARABONBA_PTR_TO_JSON(OperationEndTime, operationEndTime_);
      DARABONBA_PTR_TO_JSON(OperationStartTime, operationStartTime_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(OwnerInformation, ownerInformation_);
      DARABONBA_PTR_TO_JSON(PatchGroup, patchGroup_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancePatchStatesResponseBodyInstancePatchStates& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(InstalledCount, installedCount_);
      DARABONBA_PTR_FROM_JSON(InstalledOtherCount, installedOtherCount_);
      DARABONBA_PTR_FROM_JSON(InstalledPendingRebootCount, installedPendingRebootCount_);
      DARABONBA_PTR_FROM_JSON(InstalledRejectedCount, installedRejectedCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MissingCount, missingCount_);
      DARABONBA_PTR_FROM_JSON(OperationEndTime, operationEndTime_);
      DARABONBA_PTR_FROM_JSON(OperationStartTime, operationStartTime_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(OwnerInformation, ownerInformation_);
      DARABONBA_PTR_FROM_JSON(PatchGroup, patchGroup_);
    };
    ListInstancePatchStatesResponseBodyInstancePatchStates() = default ;
    ListInstancePatchStatesResponseBodyInstancePatchStates(const ListInstancePatchStatesResponseBodyInstancePatchStates &) = default ;
    ListInstancePatchStatesResponseBodyInstancePatchStates(ListInstancePatchStatesResponseBodyInstancePatchStates &&) = default ;
    ListInstancePatchStatesResponseBodyInstancePatchStates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancePatchStatesResponseBodyInstancePatchStates() = default ;
    ListInstancePatchStatesResponseBodyInstancePatchStates& operator=(const ListInstancePatchStatesResponseBodyInstancePatchStates &) = default ;
    ListInstancePatchStatesResponseBodyInstancePatchStates& operator=(ListInstancePatchStatesResponseBodyInstancePatchStates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineId_ == nullptr
        && return this->failedCount_ == nullptr && return this->installedCount_ == nullptr && return this->installedOtherCount_ == nullptr && return this->installedPendingRebootCount_ == nullptr && return this->installedRejectedCount_ == nullptr
        && return this->instanceId_ == nullptr && return this->missingCount_ == nullptr && return this->operationEndTime_ == nullptr && return this->operationStartTime_ == nullptr && return this->operationType_ == nullptr
        && return this->ownerInformation_ == nullptr && return this->patchGroup_ == nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline string baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
    inline ListInstancePatchStatesResponseBodyInstancePatchStates& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline string failedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, "") };
    inline ListInstancePatchStatesResponseBodyInstancePatchStates& setFailedCount(string failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // installedCount Field Functions 
    bool hasInstalledCount() const { return this->installedCount_ != nullptr;};
    void deleteInstalledCount() { this->installedCount_ = nullptr;};
    inline string installedCount() const { DARABONBA_PTR_GET_DEFAULT(installedCount_, "") };
    inline ListInstancePatchStatesResponseBodyInstancePatchStates& setInstalledCount(string installedCount) { DARABONBA_PTR_SET_VALUE(installedCount_, installedCount) };


    // installedOtherCount Field Functions 
    bool hasInstalledOtherCount() const { return this->installedOtherCount_ != nullptr;};
    void deleteInstalledOtherCount() { this->installedOtherCount_ = nullptr;};
    inline string installedOtherCount() const { DARABONBA_PTR_GET_DEFAULT(installedOtherCount_, "") };
    inline ListInstancePatchStatesResponseBodyInstancePatchStates& setInstalledOtherCount(string installedOtherCount) { DARABONBA_PTR_SET_VALUE(installedOtherCount_, installedOtherCount) };


    // installedPendingRebootCount Field Functions 
    bool hasInstalledPendingRebootCount() const { return this->installedPendingRebootCount_ != nullptr;};
    void deleteInstalledPendingRebootCount() { this->installedPendingRebootCount_ = nullptr;};
    inline string installedPendingRebootCount() const { DARABONBA_PTR_GET_DEFAULT(installedPendingRebootCount_, "") };
    inline ListInstancePatchStatesResponseBodyInstancePatchStates& setInstalledPendingRebootCount(string installedPendingRebootCount) { DARABONBA_PTR_SET_VALUE(installedPendingRebootCount_, installedPendingRebootCount) };


    // installedRejectedCount Field Functions 
    bool hasInstalledRejectedCount() const { return this->installedRejectedCount_ != nullptr;};
    void deleteInstalledRejectedCount() { this->installedRejectedCount_ = nullptr;};
    inline string installedRejectedCount() const { DARABONBA_PTR_GET_DEFAULT(installedRejectedCount_, "") };
    inline ListInstancePatchStatesResponseBodyInstancePatchStates& setInstalledRejectedCount(string installedRejectedCount) { DARABONBA_PTR_SET_VALUE(installedRejectedCount_, installedRejectedCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancePatchStatesResponseBodyInstancePatchStates& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // missingCount Field Functions 
    bool hasMissingCount() const { return this->missingCount_ != nullptr;};
    void deleteMissingCount() { this->missingCount_ = nullptr;};
    inline string missingCount() const { DARABONBA_PTR_GET_DEFAULT(missingCount_, "") };
    inline ListInstancePatchStatesResponseBodyInstancePatchStates& setMissingCount(string missingCount) { DARABONBA_PTR_SET_VALUE(missingCount_, missingCount) };


    // operationEndTime Field Functions 
    bool hasOperationEndTime() const { return this->operationEndTime_ != nullptr;};
    void deleteOperationEndTime() { this->operationEndTime_ = nullptr;};
    inline string operationEndTime() const { DARABONBA_PTR_GET_DEFAULT(operationEndTime_, "") };
    inline ListInstancePatchStatesResponseBodyInstancePatchStates& setOperationEndTime(string operationEndTime) { DARABONBA_PTR_SET_VALUE(operationEndTime_, operationEndTime) };


    // operationStartTime Field Functions 
    bool hasOperationStartTime() const { return this->operationStartTime_ != nullptr;};
    void deleteOperationStartTime() { this->operationStartTime_ = nullptr;};
    inline string operationStartTime() const { DARABONBA_PTR_GET_DEFAULT(operationStartTime_, "") };
    inline ListInstancePatchStatesResponseBodyInstancePatchStates& setOperationStartTime(string operationStartTime) { DARABONBA_PTR_SET_VALUE(operationStartTime_, operationStartTime) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline ListInstancePatchStatesResponseBodyInstancePatchStates& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // ownerInformation Field Functions 
    bool hasOwnerInformation() const { return this->ownerInformation_ != nullptr;};
    void deleteOwnerInformation() { this->ownerInformation_ = nullptr;};
    inline string ownerInformation() const { DARABONBA_PTR_GET_DEFAULT(ownerInformation_, "") };
    inline ListInstancePatchStatesResponseBodyInstancePatchStates& setOwnerInformation(string ownerInformation) { DARABONBA_PTR_SET_VALUE(ownerInformation_, ownerInformation) };


    // patchGroup Field Functions 
    bool hasPatchGroup() const { return this->patchGroup_ != nullptr;};
    void deletePatchGroup() { this->patchGroup_ = nullptr;};
    inline string patchGroup() const { DARABONBA_PTR_GET_DEFAULT(patchGroup_, "") };
    inline ListInstancePatchStatesResponseBodyInstancePatchStates& setPatchGroup(string patchGroup) { DARABONBA_PTR_SET_VALUE(patchGroup_, patchGroup) };


  protected:
    // The ID of the patch baseline.
    std::shared_ptr<string> baselineId_ = nullptr;
    // The number of patches that failed to be installed.
    std::shared_ptr<string> failedCount_ = nullptr;
    // The number of installed patches.
    std::shared_ptr<string> installedCount_ = nullptr;
    // The number of patches that do not meet the baseline.
    std::shared_ptr<string> installedOtherCount_ = nullptr;
    // The number of patches that have been installed but require a restart to take effect.
    std::shared_ptr<string> installedPendingRebootCount_ = nullptr;
    // The number of patches that are rejected by the user.
    std::shared_ptr<string> installedRejectedCount_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of patches that are not installed.
    std::shared_ptr<string> missingCount_ = nullptr;
    // The time when the operation ended.
    std::shared_ptr<string> operationEndTime_ = nullptr;
    // The time when the operation was initiated.
    std::shared_ptr<string> operationStartTime_ = nullptr;
    // The operation type.
    std::shared_ptr<string> operationType_ = nullptr;
    // The information about the user.
    std::shared_ptr<string> ownerInformation_ = nullptr;
    // The patch group.
    std::shared_ptr<string> patchGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
