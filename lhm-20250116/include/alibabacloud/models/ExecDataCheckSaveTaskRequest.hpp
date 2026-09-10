// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECDATACHECKSAVETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECDATACHECKSAVETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ExecDataCheckSaveTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecDataCheckSaveTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(checkGlobalParams, checkGlobalParams_);
      DARABONBA_PTR_TO_JSON(fullTableCount, fullTableCount_);
      DARABONBA_PTR_TO_JSON(sourceGlobalParams, sourceGlobalParams_);
      DARABONBA_PTR_TO_JSON(startImmediately, startImmediately_);
      DARABONBA_PTR_TO_JSON(targetGlobalParams, targetGlobalParams_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(totalCountThreshold, totalCountThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, ExecDataCheckSaveTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(checkGlobalParams, checkGlobalParams_);
      DARABONBA_PTR_FROM_JSON(fullTableCount, fullTableCount_);
      DARABONBA_PTR_FROM_JSON(sourceGlobalParams, sourceGlobalParams_);
      DARABONBA_PTR_FROM_JSON(startImmediately, startImmediately_);
      DARABONBA_PTR_FROM_JSON(targetGlobalParams, targetGlobalParams_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(totalCountThreshold, totalCountThreshold_);
    };
    ExecDataCheckSaveTaskRequest() = default ;
    ExecDataCheckSaveTaskRequest(const ExecDataCheckSaveTaskRequest &) = default ;
    ExecDataCheckSaveTaskRequest(ExecDataCheckSaveTaskRequest &&) = default ;
    ExecDataCheckSaveTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecDataCheckSaveTaskRequest() = default ;
    ExecDataCheckSaveTaskRequest& operator=(const ExecDataCheckSaveTaskRequest &) = default ;
    ExecDataCheckSaveTaskRequest& operator=(ExecDataCheckSaveTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkGlobalParams_ == nullptr
        && this->fullTableCount_ == nullptr && this->sourceGlobalParams_ == nullptr && this->startImmediately_ == nullptr && this->targetGlobalParams_ == nullptr && this->taskId_ == nullptr
        && this->totalCountThreshold_ == nullptr; };
    // checkGlobalParams Field Functions 
    bool hasCheckGlobalParams() const { return this->checkGlobalParams_ != nullptr;};
    void deleteCheckGlobalParams() { this->checkGlobalParams_ = nullptr;};
    inline string getCheckGlobalParams() const { DARABONBA_PTR_GET_DEFAULT(checkGlobalParams_, "") };
    inline ExecDataCheckSaveTaskRequest& setCheckGlobalParams(string checkGlobalParams) { DARABONBA_PTR_SET_VALUE(checkGlobalParams_, checkGlobalParams) };


    // fullTableCount Field Functions 
    bool hasFullTableCount() const { return this->fullTableCount_ != nullptr;};
    void deleteFullTableCount() { this->fullTableCount_ = nullptr;};
    inline int32_t getFullTableCount() const { DARABONBA_PTR_GET_DEFAULT(fullTableCount_, 0) };
    inline ExecDataCheckSaveTaskRequest& setFullTableCount(int32_t fullTableCount) { DARABONBA_PTR_SET_VALUE(fullTableCount_, fullTableCount) };


    // sourceGlobalParams Field Functions 
    bool hasSourceGlobalParams() const { return this->sourceGlobalParams_ != nullptr;};
    void deleteSourceGlobalParams() { this->sourceGlobalParams_ = nullptr;};
    inline string getSourceGlobalParams() const { DARABONBA_PTR_GET_DEFAULT(sourceGlobalParams_, "") };
    inline ExecDataCheckSaveTaskRequest& setSourceGlobalParams(string sourceGlobalParams) { DARABONBA_PTR_SET_VALUE(sourceGlobalParams_, sourceGlobalParams) };


    // startImmediately Field Functions 
    bool hasStartImmediately() const { return this->startImmediately_ != nullptr;};
    void deleteStartImmediately() { this->startImmediately_ = nullptr;};
    inline int32_t getStartImmediately() const { DARABONBA_PTR_GET_DEFAULT(startImmediately_, 0) };
    inline ExecDataCheckSaveTaskRequest& setStartImmediately(int32_t startImmediately) { DARABONBA_PTR_SET_VALUE(startImmediately_, startImmediately) };


    // targetGlobalParams Field Functions 
    bool hasTargetGlobalParams() const { return this->targetGlobalParams_ != nullptr;};
    void deleteTargetGlobalParams() { this->targetGlobalParams_ = nullptr;};
    inline string getTargetGlobalParams() const { DARABONBA_PTR_GET_DEFAULT(targetGlobalParams_, "") };
    inline ExecDataCheckSaveTaskRequest& setTargetGlobalParams(string targetGlobalParams) { DARABONBA_PTR_SET_VALUE(targetGlobalParams_, targetGlobalParams) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ExecDataCheckSaveTaskRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalCountThreshold Field Functions 
    bool hasTotalCountThreshold() const { return this->totalCountThreshold_ != nullptr;};
    void deleteTotalCountThreshold() { this->totalCountThreshold_ = nullptr;};
    inline float getTotalCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(totalCountThreshold_, 0.0) };
    inline ExecDataCheckSaveTaskRequest& setTotalCountThreshold(float totalCountThreshold) { DARABONBA_PTR_SET_VALUE(totalCountThreshold_, totalCountThreshold) };


  protected:
    // The global parameters for the validation phase. Separate multiple parameters with a line feed (`
    // `).
    shared_ptr<string> checkGlobalParams_ {};
    // Specifies whether to perform full-table validation. Valid values:
    // 
    // - 0: Partition-level validation. This is the default value.
    // - 1: Full-table validation.
    shared_ptr<int32_t> fullTableCount_ {};
    // The global parameters for the source. Separate multiple parameters with a line feed (`
    // `).
    shared_ptr<string> sourceGlobalParams_ {};
    // Specifies whether to execute immediately after saving. Valid values:
    // 
    // - 0: No. This is the default value.
    // - 1: Yes.
    shared_ptr<int32_t> startImmediately_ {};
    // The global parameters for the target. Separate multiple parameters with a line feed (`
    // `).
    shared_ptr<string> targetGlobalParams_ {};
    // The ID of the validation task.
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
    // The total data volume comparison threshold, used to determine whether the data volume difference between the source and target is within an acceptable range.
    shared_ptr<float> totalCountThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
