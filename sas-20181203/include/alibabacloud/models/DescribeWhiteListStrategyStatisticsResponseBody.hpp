// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListStrategyStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListStrategyStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Strategies, strategies_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListStrategyStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Strategies, strategies_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWhiteListStrategyStatisticsResponseBody() = default ;
    DescribeWhiteListStrategyStatisticsResponseBody(const DescribeWhiteListStrategyStatisticsResponseBody &) = default ;
    DescribeWhiteListStrategyStatisticsResponseBody(DescribeWhiteListStrategyStatisticsResponseBody &&) = default ;
    DescribeWhiteListStrategyStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListStrategyStatisticsResponseBody() = default ;
    DescribeWhiteListStrategyStatisticsResponseBody& operator=(const DescribeWhiteListStrategyStatisticsResponseBody &) = default ;
    DescribeWhiteListStrategyStatisticsResponseBody& operator=(DescribeWhiteListStrategyStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Strategies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Strategies& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Strategies& obj) { 
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
      Strategies() = default ;
      Strategies(const Strategies &) = default ;
      Strategies(Strategies &&) = default ;
      Strategies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Strategies() = default ;
      Strategies& operator=(const Strategies &) = default ;
      Strategies& operator=(Strategies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetCount_ == nullptr
        && this->progress_ == nullptr && this->status_ == nullptr && this->strategyId_ == nullptr && this->strategyName_ == nullptr && this->studyTime_ == nullptr
        && this->suspiciousProcCount_ == nullptr && this->trustProcCount_ == nullptr && this->virusProcCount_ == nullptr; };
      // assetCount Field Functions 
      bool hasAssetCount() const { return this->assetCount_ != nullptr;};
      void deleteAssetCount() { this->assetCount_ = nullptr;};
      inline int32_t getAssetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0) };
      inline Strategies& setAssetCount(int32_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline Strategies& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Strategies& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // strategyId Field Functions 
      bool hasStrategyId() const { return this->strategyId_ != nullptr;};
      void deleteStrategyId() { this->strategyId_ = nullptr;};
      inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
      inline Strategies& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


      // strategyName Field Functions 
      bool hasStrategyName() const { return this->strategyName_ != nullptr;};
      void deleteStrategyName() { this->strategyName_ = nullptr;};
      inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
      inline Strategies& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


      // studyTime Field Functions 
      bool hasStudyTime() const { return this->studyTime_ != nullptr;};
      void deleteStudyTime() { this->studyTime_ = nullptr;};
      inline int32_t getStudyTime() const { DARABONBA_PTR_GET_DEFAULT(studyTime_, 0) };
      inline Strategies& setStudyTime(int32_t studyTime) { DARABONBA_PTR_SET_VALUE(studyTime_, studyTime) };


      // suspiciousProcCount Field Functions 
      bool hasSuspiciousProcCount() const { return this->suspiciousProcCount_ != nullptr;};
      void deleteSuspiciousProcCount() { this->suspiciousProcCount_ = nullptr;};
      inline int32_t getSuspiciousProcCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousProcCount_, 0) };
      inline Strategies& setSuspiciousProcCount(int32_t suspiciousProcCount) { DARABONBA_PTR_SET_VALUE(suspiciousProcCount_, suspiciousProcCount) };


      // trustProcCount Field Functions 
      bool hasTrustProcCount() const { return this->trustProcCount_ != nullptr;};
      void deleteTrustProcCount() { this->trustProcCount_ = nullptr;};
      inline int32_t getTrustProcCount() const { DARABONBA_PTR_GET_DEFAULT(trustProcCount_, 0) };
      inline Strategies& setTrustProcCount(int32_t trustProcCount) { DARABONBA_PTR_SET_VALUE(trustProcCount_, trustProcCount) };


      // virusProcCount Field Functions 
      bool hasVirusProcCount() const { return this->virusProcCount_ != nullptr;};
      void deleteVirusProcCount() { this->virusProcCount_ = nullptr;};
      inline int32_t getVirusProcCount() const { DARABONBA_PTR_GET_DEFAULT(virusProcCount_, 0) };
      inline Strategies& setVirusProcCount(int32_t virusProcCount) { DARABONBA_PTR_SET_VALUE(virusProcCount_, virusProcCount) };


    protected:
      // The number of the servers on which the policy takes effect.
      shared_ptr<int32_t> assetCount_ {};
      // The learning progress of the policy. Unit: percent (%).
      shared_ptr<int32_t> progress_ {};
      // The status of the policy. Valid values:
      // 
      // *   **0**: disabled
      // *   **1**: learning
      // *   **2**: paused
      // *   **3**: learning completed
      // *   **4**: enabled
      shared_ptr<int32_t> status_ {};
      // The ID of the policy.
      shared_ptr<int64_t> strategyId_ {};
      // The name of the policy.
      shared_ptr<string> strategyName_ {};
      // The intelligent learning duration. Unit: hour.
      shared_ptr<int32_t> studyTime_ {};
      // The number of suspicious processes.
      shared_ptr<int32_t> suspiciousProcCount_ {};
      // The number of trusted processes.
      shared_ptr<int32_t> trustProcCount_ {};
      // The number of malicious processes.
      shared_ptr<int32_t> virusProcCount_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->strategies_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeWhiteListStrategyStatisticsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWhiteListStrategyStatisticsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWhiteListStrategyStatisticsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWhiteListStrategyStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategies Field Functions 
    bool hasStrategies() const { return this->strategies_ != nullptr;};
    void deleteStrategies() { this->strategies_ = nullptr;};
    inline const vector<DescribeWhiteListStrategyStatisticsResponseBody::Strategies> & getStrategies() const { DARABONBA_PTR_GET_CONST(strategies_, vector<DescribeWhiteListStrategyStatisticsResponseBody::Strategies>) };
    inline vector<DescribeWhiteListStrategyStatisticsResponseBody::Strategies> getStrategies() { DARABONBA_PTR_GET(strategies_, vector<DescribeWhiteListStrategyStatisticsResponseBody::Strategies>) };
    inline DescribeWhiteListStrategyStatisticsResponseBody& setStrategies(const vector<DescribeWhiteListStrategyStatisticsResponseBody::Strategies> & strategies) { DARABONBA_PTR_SET_VALUE(strategies_, strategies) };
    inline DescribeWhiteListStrategyStatisticsResponseBody& setStrategies(vector<DescribeWhiteListStrategyStatisticsResponseBody::Strategies> && strategies) { DARABONBA_PTR_SET_RVALUE(strategies_, strategies) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWhiteListStrategyStatisticsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The page number.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The statistics of the policies.
    shared_ptr<vector<DescribeWhiteListStrategyStatisticsResponseBody::Strategies>> strategies_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
