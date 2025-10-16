// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDESKTOPOVERSOLDGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDESKTOPOVERSOLDGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateDesktopOversoldGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDesktopOversoldGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConcurrenceCount, concurrenceCount_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(KeepDuration, keepDuration_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OversoldUserCount, oversoldUserCount_);
      DARABONBA_PTR_TO_JSON(OversoldWarn, oversoldWarn_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(StopDuration, stopDuration_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDesktopOversoldGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcurrenceCount, concurrenceCount_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(KeepDuration, keepDuration_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OversoldUserCount, oversoldUserCount_);
      DARABONBA_PTR_FROM_JSON(OversoldWarn, oversoldWarn_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(StopDuration, stopDuration_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
    };
    CreateDesktopOversoldGroupRequest() = default ;
    CreateDesktopOversoldGroupRequest(const CreateDesktopOversoldGroupRequest &) = default ;
    CreateDesktopOversoldGroupRequest(CreateDesktopOversoldGroupRequest &&) = default ;
    CreateDesktopOversoldGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDesktopOversoldGroupRequest() = default ;
    CreateDesktopOversoldGroupRequest& operator=(const CreateDesktopOversoldGroupRequest &) = default ;
    CreateDesktopOversoldGroupRequest& operator=(CreateDesktopOversoldGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrenceCount_ == nullptr
        && return this->dataDiskSize_ == nullptr && return this->description_ == nullptr && return this->desktopType_ == nullptr && return this->directoryId_ == nullptr && return this->idleDisconnectDuration_ == nullptr
        && return this->imageId_ == nullptr && return this->keepDuration_ == nullptr && return this->name_ == nullptr && return this->oversoldUserCount_ == nullptr && return this->oversoldWarn_ == nullptr
        && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->policyGroupId_ == nullptr && return this->stopDuration_ == nullptr && return this->systemDiskSize_ == nullptr; };
    // concurrenceCount Field Functions 
    bool hasConcurrenceCount() const { return this->concurrenceCount_ != nullptr;};
    void deleteConcurrenceCount() { this->concurrenceCount_ = nullptr;};
    inline int32_t concurrenceCount() const { DARABONBA_PTR_GET_DEFAULT(concurrenceCount_, 0) };
    inline CreateDesktopOversoldGroupRequest& setConcurrenceCount(int32_t concurrenceCount) { DARABONBA_PTR_SET_VALUE(concurrenceCount_, concurrenceCount) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline CreateDesktopOversoldGroupRequest& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDesktopOversoldGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string desktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline CreateDesktopOversoldGroupRequest& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateDesktopOversoldGroupRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // idleDisconnectDuration Field Functions 
    bool hasIdleDisconnectDuration() const { return this->idleDisconnectDuration_ != nullptr;};
    void deleteIdleDisconnectDuration() { this->idleDisconnectDuration_ = nullptr;};
    inline int64_t idleDisconnectDuration() const { DARABONBA_PTR_GET_DEFAULT(idleDisconnectDuration_, 0L) };
    inline CreateDesktopOversoldGroupRequest& setIdleDisconnectDuration(int64_t idleDisconnectDuration) { DARABONBA_PTR_SET_VALUE(idleDisconnectDuration_, idleDisconnectDuration) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateDesktopOversoldGroupRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // keepDuration Field Functions 
    bool hasKeepDuration() const { return this->keepDuration_ != nullptr;};
    void deleteKeepDuration() { this->keepDuration_ = nullptr;};
    inline int32_t keepDuration() const { DARABONBA_PTR_GET_DEFAULT(keepDuration_, 0) };
    inline CreateDesktopOversoldGroupRequest& setKeepDuration(int32_t keepDuration) { DARABONBA_PTR_SET_VALUE(keepDuration_, keepDuration) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDesktopOversoldGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oversoldUserCount Field Functions 
    bool hasOversoldUserCount() const { return this->oversoldUserCount_ != nullptr;};
    void deleteOversoldUserCount() { this->oversoldUserCount_ = nullptr;};
    inline int32_t oversoldUserCount() const { DARABONBA_PTR_GET_DEFAULT(oversoldUserCount_, 0) };
    inline CreateDesktopOversoldGroupRequest& setOversoldUserCount(int32_t oversoldUserCount) { DARABONBA_PTR_SET_VALUE(oversoldUserCount_, oversoldUserCount) };


    // oversoldWarn Field Functions 
    bool hasOversoldWarn() const { return this->oversoldWarn_ != nullptr;};
    void deleteOversoldWarn() { this->oversoldWarn_ = nullptr;};
    inline int32_t oversoldWarn() const { DARABONBA_PTR_GET_DEFAULT(oversoldWarn_, 0) };
    inline CreateDesktopOversoldGroupRequest& setOversoldWarn(int32_t oversoldWarn) { DARABONBA_PTR_SET_VALUE(oversoldWarn_, oversoldWarn) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateDesktopOversoldGroupRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateDesktopOversoldGroupRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline CreateDesktopOversoldGroupRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // stopDuration Field Functions 
    bool hasStopDuration() const { return this->stopDuration_ != nullptr;};
    void deleteStopDuration() { this->stopDuration_ = nullptr;};
    inline int32_t stopDuration() const { DARABONBA_PTR_GET_DEFAULT(stopDuration_, 0) };
    inline CreateDesktopOversoldGroupRequest& setStopDuration(int32_t stopDuration) { DARABONBA_PTR_SET_VALUE(stopDuration_, stopDuration) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline CreateDesktopOversoldGroupRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


  protected:
    std::shared_ptr<int32_t> concurrenceCount_ = nullptr;
    std::shared_ptr<int32_t> dataDiskSize_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> desktopType_ = nullptr;
    std::shared_ptr<string> directoryId_ = nullptr;
    std::shared_ptr<int64_t> idleDisconnectDuration_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<int32_t> keepDuration_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> oversoldUserCount_ = nullptr;
    std::shared_ptr<int32_t> oversoldWarn_ = nullptr;
    std::shared_ptr<int32_t> period_ = nullptr;
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> policyGroupId_ = nullptr;
    std::shared_ptr<int32_t> stopDuration_ = nullptr;
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
