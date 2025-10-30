// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKDETAILRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKDETAILRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs.hpp>
#include <alibabacloud/models/DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRecommendTaskDetailResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendTaskDetailResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(expectVelocities, expectVelocities_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(normalSize, normalSize_);
      DARABONBA_PTR_TO_JSON(recommendRuleDTOs, recommendRuleDTOs_);
      DARABONBA_PTR_TO_JSON(recommendVariableDTOs, recommendVariableDTOs_);
      DARABONBA_PTR_TO_JSON(riskSize, riskSize_);
      DARABONBA_PTR_TO_JSON(sampleName, sampleName_);
      DARABONBA_PTR_TO_JSON(sampleScene, sampleScene_);
      DARABONBA_PTR_TO_JSON(sampleSceneName, sampleSceneName_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendTaskDetailResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(expectVelocities, expectVelocities_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(normalSize, normalSize_);
      DARABONBA_PTR_FROM_JSON(recommendRuleDTOs, recommendRuleDTOs_);
      DARABONBA_PTR_FROM_JSON(recommendVariableDTOs, recommendVariableDTOs_);
      DARABONBA_PTR_FROM_JSON(riskSize, riskSize_);
      DARABONBA_PTR_FROM_JSON(sampleName, sampleName_);
      DARABONBA_PTR_FROM_JSON(sampleScene, sampleScene_);
      DARABONBA_PTR_FROM_JSON(sampleSceneName, sampleSceneName_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    DescribeRecommendTaskDetailResponseBodyResultObject() = default ;
    DescribeRecommendTaskDetailResponseBodyResultObject(const DescribeRecommendTaskDetailResponseBodyResultObject &) = default ;
    DescribeRecommendTaskDetailResponseBodyResultObject(DescribeRecommendTaskDetailResponseBodyResultObject &&) = default ;
    DescribeRecommendTaskDetailResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendTaskDetailResponseBodyResultObject() = default ;
    DescribeRecommendTaskDetailResponseBodyResultObject& operator=(const DescribeRecommendTaskDetailResponseBodyResultObject &) = default ;
    DescribeRecommendTaskDetailResponseBodyResultObject& operator=(DescribeRecommendTaskDetailResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventCode_ == nullptr
        && return this->eventName_ == nullptr && return this->expectVelocities_ == nullptr && return this->gmtCreate_ == nullptr && return this->normalSize_ == nullptr && return this->recommendRuleDTOs_ == nullptr
        && return this->recommendVariableDTOs_ == nullptr && return this->riskSize_ == nullptr && return this->sampleName_ == nullptr && return this->sampleScene_ == nullptr && return this->sampleSceneName_ == nullptr
        && return this->taskId_ == nullptr && return this->taskName_ == nullptr && return this->taskStatus_ == nullptr; };
    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // expectVelocities Field Functions 
    bool hasExpectVelocities() const { return this->expectVelocities_ != nullptr;};
    void deleteExpectVelocities() { this->expectVelocities_ = nullptr;};
    inline const vector<string> & expectVelocities() const { DARABONBA_PTR_GET_CONST(expectVelocities_, vector<string>) };
    inline vector<string> expectVelocities() { DARABONBA_PTR_GET(expectVelocities_, vector<string>) };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setExpectVelocities(const vector<string> & expectVelocities) { DARABONBA_PTR_SET_VALUE(expectVelocities_, expectVelocities) };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setExpectVelocities(vector<string> && expectVelocities) { DARABONBA_PTR_SET_RVALUE(expectVelocities_, expectVelocities) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // normalSize Field Functions 
    bool hasNormalSize() const { return this->normalSize_ != nullptr;};
    void deleteNormalSize() { this->normalSize_ = nullptr;};
    inline int64_t normalSize() const { DARABONBA_PTR_GET_DEFAULT(normalSize_, 0L) };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setNormalSize(int64_t normalSize) { DARABONBA_PTR_SET_VALUE(normalSize_, normalSize) };


    // recommendRuleDTOs Field Functions 
    bool hasRecommendRuleDTOs() const { return this->recommendRuleDTOs_ != nullptr;};
    void deleteRecommendRuleDTOs() { this->recommendRuleDTOs_ = nullptr;};
    inline const vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs> & recommendRuleDTOs() const { DARABONBA_PTR_GET_CONST(recommendRuleDTOs_, vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs>) };
    inline vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs> recommendRuleDTOs() { DARABONBA_PTR_GET(recommendRuleDTOs_, vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs>) };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setRecommendRuleDTOs(const vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs> & recommendRuleDTOs) { DARABONBA_PTR_SET_VALUE(recommendRuleDTOs_, recommendRuleDTOs) };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setRecommendRuleDTOs(vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs> && recommendRuleDTOs) { DARABONBA_PTR_SET_RVALUE(recommendRuleDTOs_, recommendRuleDTOs) };


    // recommendVariableDTOs Field Functions 
    bool hasRecommendVariableDTOs() const { return this->recommendVariableDTOs_ != nullptr;};
    void deleteRecommendVariableDTOs() { this->recommendVariableDTOs_ = nullptr;};
    inline const vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs> & recommendVariableDTOs() const { DARABONBA_PTR_GET_CONST(recommendVariableDTOs_, vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs>) };
    inline vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs> recommendVariableDTOs() { DARABONBA_PTR_GET(recommendVariableDTOs_, vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs>) };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setRecommendVariableDTOs(const vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs> & recommendVariableDTOs) { DARABONBA_PTR_SET_VALUE(recommendVariableDTOs_, recommendVariableDTOs) };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setRecommendVariableDTOs(vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs> && recommendVariableDTOs) { DARABONBA_PTR_SET_RVALUE(recommendVariableDTOs_, recommendVariableDTOs) };


    // riskSize Field Functions 
    bool hasRiskSize() const { return this->riskSize_ != nullptr;};
    void deleteRiskSize() { this->riskSize_ = nullptr;};
    inline int64_t riskSize() const { DARABONBA_PTR_GET_DEFAULT(riskSize_, 0L) };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setRiskSize(int64_t riskSize) { DARABONBA_PTR_SET_VALUE(riskSize_, riskSize) };


    // sampleName Field Functions 
    bool hasSampleName() const { return this->sampleName_ != nullptr;};
    void deleteSampleName() { this->sampleName_ = nullptr;};
    inline string sampleName() const { DARABONBA_PTR_GET_DEFAULT(sampleName_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setSampleName(string sampleName) { DARABONBA_PTR_SET_VALUE(sampleName_, sampleName) };


    // sampleScene Field Functions 
    bool hasSampleScene() const { return this->sampleScene_ != nullptr;};
    void deleteSampleScene() { this->sampleScene_ = nullptr;};
    inline string sampleScene() const { DARABONBA_PTR_GET_DEFAULT(sampleScene_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setSampleScene(string sampleScene) { DARABONBA_PTR_SET_VALUE(sampleScene_, sampleScene) };


    // sampleSceneName Field Functions 
    bool hasSampleSceneName() const { return this->sampleSceneName_ != nullptr;};
    void deleteSampleSceneName() { this->sampleSceneName_ = nullptr;};
    inline string sampleSceneName() const { DARABONBA_PTR_GET_DEFAULT(sampleSceneName_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setSampleSceneName(string sampleSceneName) { DARABONBA_PTR_SET_VALUE(sampleSceneName_, sampleSceneName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObject& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Comparison indicators
    std::shared_ptr<vector<string>> expectVelocities_ = nullptr;
    // Creation time
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Number of normal samples
    std::shared_ptr<int64_t> normalSize_ = nullptr;
    // Recommended strategy list
    std::shared_ptr<vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs>> recommendRuleDTOs_ = nullptr;
    // Selected variable list
    std::shared_ptr<vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs>> recommendVariableDTOs_ = nullptr;
    // Number of risk samples
    std::shared_ptr<int64_t> riskSize_ = nullptr;
    // Sample name
    std::shared_ptr<string> sampleName_ = nullptr;
    // Sample scenario
    std::shared_ptr<string> sampleScene_ = nullptr;
    // Sample scenario name
    std::shared_ptr<string> sampleSceneName_ = nullptr;
    // Task ID
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // Task name
    std::shared_ptr<string> taskName_ = nullptr;
    // Task status.
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
