// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPGRADEMAJORVERSIONPRECHECKTASKRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPGRADEMAJORVERSIONPRECHECKTASKRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CheckTime, checkTime_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(RecommendDiskSize, recommendDiskSize_);
      DARABONBA_PTR_TO_JSON(RecommendLeastMemSize, recommendLeastMemSize_);
      DARABONBA_PTR_TO_JSON(RecommendMemSize, recommendMemSize_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SourceMajorVersion, sourceMajorVersion_);
      DARABONBA_PTR_TO_JSON(TargetMajorVersion, targetMajorVersion_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UpgradeMode, upgradeMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckTime, checkTime_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(RecommendDiskSize, recommendDiskSize_);
      DARABONBA_PTR_FROM_JSON(RecommendLeastMemSize, recommendLeastMemSize_);
      DARABONBA_PTR_FROM_JSON(RecommendMemSize, recommendMemSize_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SourceMajorVersion, sourceMajorVersion_);
      DARABONBA_PTR_FROM_JSON(TargetMajorVersion, targetMajorVersion_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UpgradeMode, upgradeMode_);
    };
    DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems() = default ;
    DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems(const DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems &) = default ;
    DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems(DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems &&) = default ;
    DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems() = default ;
    DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& operator=(const DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems &) = default ;
    DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& operator=(DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkTime_ == nullptr
        && return this->detail_ == nullptr && return this->effectiveTime_ == nullptr && return this->recommendDiskSize_ == nullptr && return this->recommendLeastMemSize_ == nullptr && return this->recommendMemSize_ == nullptr
        && return this->result_ == nullptr && return this->sourceMajorVersion_ == nullptr && return this->targetMajorVersion_ == nullptr && return this->taskId_ == nullptr && return this->upgradeMode_ == nullptr; };
    // checkTime Field Functions 
    bool hasCheckTime() const { return this->checkTime_ != nullptr;};
    void deleteCheckTime() { this->checkTime_ = nullptr;};
    inline string checkTime() const { DARABONBA_PTR_GET_DEFAULT(checkTime_, "") };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& setCheckTime(string checkTime) { DARABONBA_PTR_SET_VALUE(checkTime_, checkTime) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // recommendDiskSize Field Functions 
    bool hasRecommendDiskSize() const { return this->recommendDiskSize_ != nullptr;};
    void deleteRecommendDiskSize() { this->recommendDiskSize_ = nullptr;};
    inline int32_t recommendDiskSize() const { DARABONBA_PTR_GET_DEFAULT(recommendDiskSize_, 0) };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& setRecommendDiskSize(int32_t recommendDiskSize) { DARABONBA_PTR_SET_VALUE(recommendDiskSize_, recommendDiskSize) };


    // recommendLeastMemSize Field Functions 
    bool hasRecommendLeastMemSize() const { return this->recommendLeastMemSize_ != nullptr;};
    void deleteRecommendLeastMemSize() { this->recommendLeastMemSize_ = nullptr;};
    inline int32_t recommendLeastMemSize() const { DARABONBA_PTR_GET_DEFAULT(recommendLeastMemSize_, 0) };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& setRecommendLeastMemSize(int32_t recommendLeastMemSize) { DARABONBA_PTR_SET_VALUE(recommendLeastMemSize_, recommendLeastMemSize) };


    // recommendMemSize Field Functions 
    bool hasRecommendMemSize() const { return this->recommendMemSize_ != nullptr;};
    void deleteRecommendMemSize() { this->recommendMemSize_ = nullptr;};
    inline int32_t recommendMemSize() const { DARABONBA_PTR_GET_DEFAULT(recommendMemSize_, 0) };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& setRecommendMemSize(int32_t recommendMemSize) { DARABONBA_PTR_SET_VALUE(recommendMemSize_, recommendMemSize) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // sourceMajorVersion Field Functions 
    bool hasSourceMajorVersion() const { return this->sourceMajorVersion_ != nullptr;};
    void deleteSourceMajorVersion() { this->sourceMajorVersion_ = nullptr;};
    inline string sourceMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceMajorVersion_, "") };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& setSourceMajorVersion(string sourceMajorVersion) { DARABONBA_PTR_SET_VALUE(sourceMajorVersion_, sourceMajorVersion) };


    // targetMajorVersion Field Functions 
    bool hasTargetMajorVersion() const { return this->targetMajorVersion_ != nullptr;};
    void deleteTargetMajorVersion() { this->targetMajorVersion_ = nullptr;};
    inline string targetMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMajorVersion_, "") };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& setTargetMajorVersion(string targetMajorVersion) { DARABONBA_PTR_SET_VALUE(targetMajorVersion_, targetMajorVersion) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // upgradeMode Field Functions 
    bool hasUpgradeMode() const { return this->upgradeMode_ != nullptr;};
    void deleteUpgradeMode() { this->upgradeMode_ = nullptr;};
    inline string upgradeMode() const { DARABONBA_PTR_GET_DEFAULT(upgradeMode_, "") };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBodyItems& setUpgradeMode(string upgradeMode) { DARABONBA_PTR_SET_VALUE(upgradeMode_, upgradeMode) };


  protected:
    // The time at which the upgrade check was performed.
    // 
    // The value of this parameter is a timestamp that follows the UNIX time format. Unit: milliseconds.
    std::shared_ptr<string> checkTime_ = nullptr;
    // The content of the upgrade check report.
    std::shared_ptr<string> detail_ = nullptr;
    // The expiration time of the upgrade check report.
    // 
    // The value of this parameter is a timestamp that follows the UNIX time format. Unit: milliseconds.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The minimum recommended disk capacity during the upgrade. Unit: GB.
    // 
    // >  This parameter is returned only for RDS for PostgreSQL instances.
    std::shared_ptr<int32_t> recommendDiskSize_ = nullptr;
    // The minimum recommended memory size during the upgrade. Unit: GB.
    // 
    // >  This parameter is returned only for RDS for PostgreSQL instances.
    std::shared_ptr<int32_t> recommendLeastMemSize_ = nullptr;
    // The recommended memory size during the upgrade. Unit: GB.
    // 
    // If the memory size of an RDS instance is greater than or equal to the recommended memory size, the RDS instance is immediately upgraded to reduce the read-only time of the instance.
    // 
    // >  This parameter is returned only for RDS for PostgreSQL instances.
    std::shared_ptr<int32_t> recommendMemSize_ = nullptr;
    // The result of the upgrade check.
    // 
    // Valid values:
    // 
    // *   Success
    // *   Fail
    // 
    // >  If the check result is **Fail**, you must check the value of the **Detail** parameter to obtain the information about the errors that occurred, resolve the errors, and then try again. For more information about how to resolve common errors, see [Introduction to the check report for a major engine version upgrade to an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/218391.html).
    std::shared_ptr<string> result_ = nullptr;
    // The original major engine version of the instance.
    std::shared_ptr<string> sourceMajorVersion_ = nullptr;
    // The new major engine version of the instance.
    std::shared_ptr<string> targetMajorVersion_ = nullptr;
    // The ID of the upgrade check task.
    std::shared_ptr<int32_t> taskId_ = nullptr;
    std::shared_ptr<string> upgradeMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
