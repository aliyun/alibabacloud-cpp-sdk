// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYLISTRESPONSEBODYSTRATEGIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYLISTRESPONSEBODYSTRATEGIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListStrategyListResponseBodyStrategies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListStrategyListResponseBodyStrategies& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(StudyTime, studyTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListStrategyListResponseBodyStrategies& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(StudyTime, studyTime_);
    };
    DescribeWhiteListStrategyListResponseBodyStrategies() = default ;
    DescribeWhiteListStrategyListResponseBodyStrategies(const DescribeWhiteListStrategyListResponseBodyStrategies &) = default ;
    DescribeWhiteListStrategyListResponseBodyStrategies(DescribeWhiteListStrategyListResponseBodyStrategies &&) = default ;
    DescribeWhiteListStrategyListResponseBodyStrategies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListStrategyListResponseBodyStrategies() = default ;
    DescribeWhiteListStrategyListResponseBodyStrategies& operator=(const DescribeWhiteListStrategyListResponseBodyStrategies &) = default ;
    DescribeWhiteListStrategyListResponseBodyStrategies& operator=(DescribeWhiteListStrategyListResponseBodyStrategies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && return this->strategyId_ == nullptr && return this->strategyName_ == nullptr && return this->studyTime_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeWhiteListStrategyListResponseBodyStrategies& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline DescribeWhiteListStrategyListResponseBodyStrategies& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline DescribeWhiteListStrategyListResponseBodyStrategies& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // studyTime Field Functions 
    bool hasStudyTime() const { return this->studyTime_ != nullptr;};
    void deleteStudyTime() { this->studyTime_ = nullptr;};
    inline int32_t studyTime() const { DARABONBA_PTR_GET_DEFAULT(studyTime_, 0) };
    inline DescribeWhiteListStrategyListResponseBodyStrategies& setStudyTime(int32_t studyTime) { DARABONBA_PTR_SET_VALUE(studyTime_, studyTime) };


  protected:
    // The status of the policy. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: learning
    // *   **2**: paused
    // *   **3**: learning completed
    // *   **4**: enabled
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> strategyName_ = nullptr;
    // The intelligent learning duration. Unit: hour.
    std::shared_ptr<int32_t> studyTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
