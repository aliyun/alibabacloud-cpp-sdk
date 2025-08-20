// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYITEMSDBCLUSTERTASKINFOSTEPLISTSTEPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYITEMSDBCLUSTERTASKINFOSTEPLISTSTEPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StepDesc, stepDesc_);
      DARABONBA_PTR_TO_JSON(StepName, stepName_);
      DARABONBA_PTR_TO_JSON(StepProgress, stepProgress_);
      DARABONBA_PTR_TO_JSON(StepStatus, stepStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StepDesc, stepDesc_);
      DARABONBA_PTR_FROM_JSON(StepName, stepName_);
      DARABONBA_PTR_FROM_JSON(StepProgress, stepProgress_);
      DARABONBA_PTR_FROM_JSON(StepStatus, stepStatus_);
    };
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList() = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList(const DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList &) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList(DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList &&) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList() = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList& operator=(const DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList &) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList& operator=(DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->startTime_ != nullptr && this->stepDesc_ != nullptr && this->stepName_ != nullptr && this->stepProgress_ != nullptr && this->stepStatus_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stepDesc Field Functions 
    bool hasStepDesc() const { return this->stepDesc_ != nullptr;};
    void deleteStepDesc() { this->stepDesc_ = nullptr;};
    inline string stepDesc() const { DARABONBA_PTR_GET_DEFAULT(stepDesc_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList& setStepDesc(string stepDesc) { DARABONBA_PTR_SET_VALUE(stepDesc_, stepDesc) };


    // stepName Field Functions 
    bool hasStepName() const { return this->stepName_ != nullptr;};
    void deleteStepName() { this->stepName_ = nullptr;};
    inline string stepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


    // stepProgress Field Functions 
    bool hasStepProgress() const { return this->stepProgress_ != nullptr;};
    void deleteStepProgress() { this->stepProgress_ = nullptr;};
    inline string stepProgress() const { DARABONBA_PTR_GET_DEFAULT(stepProgress_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList& setStepProgress(string stepProgress) { DARABONBA_PTR_SET_VALUE(stepProgress_, stepProgress) };


    // stepStatus Field Functions 
    bool hasStepStatus() const { return this->stepStatus_ != nullptr;};
    void deleteStepStatus() { this->stepStatus_ = nullptr;};
    inline string stepStatus() const { DARABONBA_PTR_GET_DEFAULT(stepStatus_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepListStepList& setStepStatus(string stepStatus) { DARABONBA_PTR_SET_VALUE(stepStatus_, stepStatus) };


  protected:
    // The end time of the job step. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The start time of the job step. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The description of the job step.
    std::shared_ptr<string> stepDesc_ = nullptr;
    // The name of the job step.
    std::shared_ptr<string> stepName_ = nullptr;
    // The progress of the job step. Unit: %.
    std::shared_ptr<string> stepProgress_ = nullptr;
    // The status of the job step. Valid values:
    // 
    // *   NOT_RUN
    // *   RUNNING
    // *   SUCCEED
    std::shared_ptr<string> stepStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
