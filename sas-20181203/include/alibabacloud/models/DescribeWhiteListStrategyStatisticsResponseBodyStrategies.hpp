// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYSTATISTICSRESPONSEBODYSTRATEGIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYSTATISTICSRESPONSEBODYSTRATEGIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListStrategyStatisticsResponseBodyStrategies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListStrategyStatisticsResponseBodyStrategies& obj) { 
      DARABONBA_PTR_TO_JSON(AssetCount, assetCount_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(StudyTime, studyTime_);
      DARABONBA_PTR_TO_JSON(SuspiciousProcCount, suspiciousProcCount_);
      DARABONBA_PTR_TO_JSON(TrustProcCount, trustProcCount_);
      DARABONBA_PTR_TO_JSON(VirusProcCount, virusProcCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListStrategyStatisticsResponseBodyStrategies& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetCount, assetCount_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(StudyTime, studyTime_);
      DARABONBA_PTR_FROM_JSON(SuspiciousProcCount, suspiciousProcCount_);
      DARABONBA_PTR_FROM_JSON(TrustProcCount, trustProcCount_);
      DARABONBA_PTR_FROM_JSON(VirusProcCount, virusProcCount_);
    };
    DescribeWhiteListStrategyStatisticsResponseBodyStrategies() = default ;
    DescribeWhiteListStrategyStatisticsResponseBodyStrategies(const DescribeWhiteListStrategyStatisticsResponseBodyStrategies &) = default ;
    DescribeWhiteListStrategyStatisticsResponseBodyStrategies(DescribeWhiteListStrategyStatisticsResponseBodyStrategies &&) = default ;
    DescribeWhiteListStrategyStatisticsResponseBodyStrategies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListStrategyStatisticsResponseBodyStrategies() = default ;
    DescribeWhiteListStrategyStatisticsResponseBodyStrategies& operator=(const DescribeWhiteListStrategyStatisticsResponseBodyStrategies &) = default ;
    DescribeWhiteListStrategyStatisticsResponseBodyStrategies& operator=(DescribeWhiteListStrategyStatisticsResponseBodyStrategies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetCount_ == nullptr
        && return this->progress_ == nullptr && return this->status_ == nullptr && return this->strategyId_ == nullptr && return this->strategyName_ == nullptr && return this->studyTime_ == nullptr
        && return this->suspiciousProcCount_ == nullptr && return this->trustProcCount_ == nullptr && return this->virusProcCount_ == nullptr; };
    // assetCount Field Functions 
    bool hasAssetCount() const { return this->assetCount_ != nullptr;};
    void deleteAssetCount() { this->assetCount_ = nullptr;};
    inline int32_t assetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0) };
    inline DescribeWhiteListStrategyStatisticsResponseBodyStrategies& setAssetCount(int32_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeWhiteListStrategyStatisticsResponseBodyStrategies& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeWhiteListStrategyStatisticsResponseBodyStrategies& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline DescribeWhiteListStrategyStatisticsResponseBodyStrategies& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline DescribeWhiteListStrategyStatisticsResponseBodyStrategies& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // studyTime Field Functions 
    bool hasStudyTime() const { return this->studyTime_ != nullptr;};
    void deleteStudyTime() { this->studyTime_ = nullptr;};
    inline int32_t studyTime() const { DARABONBA_PTR_GET_DEFAULT(studyTime_, 0) };
    inline DescribeWhiteListStrategyStatisticsResponseBodyStrategies& setStudyTime(int32_t studyTime) { DARABONBA_PTR_SET_VALUE(studyTime_, studyTime) };


    // suspiciousProcCount Field Functions 
    bool hasSuspiciousProcCount() const { return this->suspiciousProcCount_ != nullptr;};
    void deleteSuspiciousProcCount() { this->suspiciousProcCount_ = nullptr;};
    inline int32_t suspiciousProcCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousProcCount_, 0) };
    inline DescribeWhiteListStrategyStatisticsResponseBodyStrategies& setSuspiciousProcCount(int32_t suspiciousProcCount) { DARABONBA_PTR_SET_VALUE(suspiciousProcCount_, suspiciousProcCount) };


    // trustProcCount Field Functions 
    bool hasTrustProcCount() const { return this->trustProcCount_ != nullptr;};
    void deleteTrustProcCount() { this->trustProcCount_ = nullptr;};
    inline int32_t trustProcCount() const { DARABONBA_PTR_GET_DEFAULT(trustProcCount_, 0) };
    inline DescribeWhiteListStrategyStatisticsResponseBodyStrategies& setTrustProcCount(int32_t trustProcCount) { DARABONBA_PTR_SET_VALUE(trustProcCount_, trustProcCount) };


    // virusProcCount Field Functions 
    bool hasVirusProcCount() const { return this->virusProcCount_ != nullptr;};
    void deleteVirusProcCount() { this->virusProcCount_ = nullptr;};
    inline int32_t virusProcCount() const { DARABONBA_PTR_GET_DEFAULT(virusProcCount_, 0) };
    inline DescribeWhiteListStrategyStatisticsResponseBodyStrategies& setVirusProcCount(int32_t virusProcCount) { DARABONBA_PTR_SET_VALUE(virusProcCount_, virusProcCount) };


  protected:
    // The number of the servers on which the policy takes effect.
    std::shared_ptr<int32_t> assetCount_ = nullptr;
    // The learning progress of the policy. Unit: percent (%).
    std::shared_ptr<int32_t> progress_ = nullptr;
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
    // The number of suspicious processes.
    std::shared_ptr<int32_t> suspiciousProcCount_ = nullptr;
    // The number of trusted processes.
    std::shared_ptr<int32_t> trustProcCount_ = nullptr;
    // The number of malicious processes.
    std::shared_ptr<int32_t> virusProcCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
