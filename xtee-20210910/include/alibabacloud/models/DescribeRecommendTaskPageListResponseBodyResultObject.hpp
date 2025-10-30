// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRecommendTaskPageListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendTaskPageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(expectVelocities, expectVelocities_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(normalCount, normalCount_);
      DARABONBA_PTR_TO_JSON(normalSize, normalSize_);
      DARABONBA_PTR_TO_JSON(riskCount, riskCount_);
      DARABONBA_PTR_TO_JSON(riskSize, riskSize_);
      DARABONBA_PTR_TO_JSON(sampleName, sampleName_);
      DARABONBA_PTR_TO_JSON(sampleScene, sampleScene_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendTaskPageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(expectVelocities, expectVelocities_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(normalCount, normalCount_);
      DARABONBA_PTR_FROM_JSON(normalSize, normalSize_);
      DARABONBA_PTR_FROM_JSON(riskCount, riskCount_);
      DARABONBA_PTR_FROM_JSON(riskSize, riskSize_);
      DARABONBA_PTR_FROM_JSON(sampleName, sampleName_);
      DARABONBA_PTR_FROM_JSON(sampleScene, sampleScene_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    DescribeRecommendTaskPageListResponseBodyResultObject() = default ;
    DescribeRecommendTaskPageListResponseBodyResultObject(const DescribeRecommendTaskPageListResponseBodyResultObject &) = default ;
    DescribeRecommendTaskPageListResponseBodyResultObject(DescribeRecommendTaskPageListResponseBodyResultObject &&) = default ;
    DescribeRecommendTaskPageListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendTaskPageListResponseBodyResultObject() = default ;
    DescribeRecommendTaskPageListResponseBodyResultObject& operator=(const DescribeRecommendTaskPageListResponseBodyResultObject &) = default ;
    DescribeRecommendTaskPageListResponseBodyResultObject& operator=(DescribeRecommendTaskPageListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expectVelocities_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->normalCount_ == nullptr && return this->normalSize_ == nullptr && return this->riskCount_ == nullptr && return this->riskSize_ == nullptr
        && return this->sampleName_ == nullptr && return this->sampleScene_ == nullptr && return this->taskId_ == nullptr && return this->taskName_ == nullptr && return this->taskStatus_ == nullptr; };
    // expectVelocities Field Functions 
    bool hasExpectVelocities() const { return this->expectVelocities_ != nullptr;};
    void deleteExpectVelocities() { this->expectVelocities_ = nullptr;};
    inline const vector<string> & expectVelocities() const { DARABONBA_PTR_GET_CONST(expectVelocities_, vector<string>) };
    inline vector<string> expectVelocities() { DARABONBA_PTR_GET(expectVelocities_, vector<string>) };
    inline DescribeRecommendTaskPageListResponseBodyResultObject& setExpectVelocities(const vector<string> & expectVelocities) { DARABONBA_PTR_SET_VALUE(expectVelocities_, expectVelocities) };
    inline DescribeRecommendTaskPageListResponseBodyResultObject& setExpectVelocities(vector<string> && expectVelocities) { DARABONBA_PTR_SET_RVALUE(expectVelocities_, expectVelocities) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeRecommendTaskPageListResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // normalCount Field Functions 
    bool hasNormalCount() const { return this->normalCount_ != nullptr;};
    void deleteNormalCount() { this->normalCount_ = nullptr;};
    inline int64_t normalCount() const { DARABONBA_PTR_GET_DEFAULT(normalCount_, 0L) };
    inline DescribeRecommendTaskPageListResponseBodyResultObject& setNormalCount(int64_t normalCount) { DARABONBA_PTR_SET_VALUE(normalCount_, normalCount) };


    // normalSize Field Functions 
    bool hasNormalSize() const { return this->normalSize_ != nullptr;};
    void deleteNormalSize() { this->normalSize_ = nullptr;};
    inline int64_t normalSize() const { DARABONBA_PTR_GET_DEFAULT(normalSize_, 0L) };
    inline DescribeRecommendTaskPageListResponseBodyResultObject& setNormalSize(int64_t normalSize) { DARABONBA_PTR_SET_VALUE(normalSize_, normalSize) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline int64_t riskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
    inline DescribeRecommendTaskPageListResponseBodyResultObject& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    // riskSize Field Functions 
    bool hasRiskSize() const { return this->riskSize_ != nullptr;};
    void deleteRiskSize() { this->riskSize_ = nullptr;};
    inline int64_t riskSize() const { DARABONBA_PTR_GET_DEFAULT(riskSize_, 0L) };
    inline DescribeRecommendTaskPageListResponseBodyResultObject& setRiskSize(int64_t riskSize) { DARABONBA_PTR_SET_VALUE(riskSize_, riskSize) };


    // sampleName Field Functions 
    bool hasSampleName() const { return this->sampleName_ != nullptr;};
    void deleteSampleName() { this->sampleName_ = nullptr;};
    inline string sampleName() const { DARABONBA_PTR_GET_DEFAULT(sampleName_, "") };
    inline DescribeRecommendTaskPageListResponseBodyResultObject& setSampleName(string sampleName) { DARABONBA_PTR_SET_VALUE(sampleName_, sampleName) };


    // sampleScene Field Functions 
    bool hasSampleScene() const { return this->sampleScene_ != nullptr;};
    void deleteSampleScene() { this->sampleScene_ = nullptr;};
    inline string sampleScene() const { DARABONBA_PTR_GET_DEFAULT(sampleScene_, "") };
    inline DescribeRecommendTaskPageListResponseBodyResultObject& setSampleScene(string sampleScene) { DARABONBA_PTR_SET_VALUE(sampleScene_, sampleScene) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeRecommendTaskPageListResponseBodyResultObject& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeRecommendTaskPageListResponseBodyResultObject& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeRecommendTaskPageListResponseBodyResultObject& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // Impact indicators
    std::shared_ptr<vector<string>> expectVelocities_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Number of samples
    std::shared_ptr<int64_t> normalCount_ = nullptr;
    // Number of normal samples
    std::shared_ptr<int64_t> normalSize_ = nullptr;
    // Number of records displayed on the current page.
    std::shared_ptr<int64_t> riskCount_ = nullptr;
    // Number of risk samples
    std::shared_ptr<int64_t> riskSize_ = nullptr;
    // Sample name
    std::shared_ptr<string> sampleName_ = nullptr;
    // Sample scenario
    std::shared_ptr<string> sampleScene_ = nullptr;
    // Task ID.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // Task name.
    std::shared_ptr<string> taskName_ = nullptr;
    // Task status.
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
