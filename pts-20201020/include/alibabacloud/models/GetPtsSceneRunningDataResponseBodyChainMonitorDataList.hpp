// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERUNNINGDATARESPONSEBODYCHAINMONITORDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERUNNINGDATARESPONSEBODYCHAINMONITORDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneRunningDataResponseBodyChainMonitorDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneRunningDataResponseBodyChainMonitorDataList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AverageRt, averageRt_);
      DARABONBA_PTR_TO_JSON(CheckPointResult, checkPointResult_);
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(ConfigQps, configQps_);
      DARABONBA_PTR_TO_JSON(Count2XX, count2XX_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(FailedQps, failedQps_);
      DARABONBA_PTR_TO_JSON(MaxRt, maxRt_);
      DARABONBA_PTR_TO_JSON(MinRt, minRt_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Qps2XX, qps2XX_);
      DARABONBA_PTR_TO_JSON(RealQps, realQps_);
      DARABONBA_PTR_TO_JSON(TimePoint, timePoint_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneRunningDataResponseBodyChainMonitorDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AverageRt, averageRt_);
      DARABONBA_PTR_FROM_JSON(CheckPointResult, checkPointResult_);
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(ConfigQps, configQps_);
      DARABONBA_PTR_FROM_JSON(Count2XX, count2XX_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(FailedQps, failedQps_);
      DARABONBA_PTR_FROM_JSON(MaxRt, maxRt_);
      DARABONBA_PTR_FROM_JSON(MinRt, minRt_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Qps2XX, qps2XX_);
      DARABONBA_PTR_FROM_JSON(RealQps, realQps_);
      DARABONBA_PTR_FROM_JSON(TimePoint, timePoint_);
    };
    GetPtsSceneRunningDataResponseBodyChainMonitorDataList() = default ;
    GetPtsSceneRunningDataResponseBodyChainMonitorDataList(const GetPtsSceneRunningDataResponseBodyChainMonitorDataList &) = default ;
    GetPtsSceneRunningDataResponseBodyChainMonitorDataList(GetPtsSceneRunningDataResponseBodyChainMonitorDataList &&) = default ;
    GetPtsSceneRunningDataResponseBodyChainMonitorDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneRunningDataResponseBodyChainMonitorDataList() = default ;
    GetPtsSceneRunningDataResponseBodyChainMonitorDataList& operator=(const GetPtsSceneRunningDataResponseBodyChainMonitorDataList &) = default ;
    GetPtsSceneRunningDataResponseBodyChainMonitorDataList& operator=(GetPtsSceneRunningDataResponseBodyChainMonitorDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->averageRt_ == nullptr && return this->checkPointResult_ == nullptr && return this->concurrency_ == nullptr && return this->configQps_ == nullptr
        && return this->count2XX_ == nullptr && return this->failedCount_ == nullptr && return this->failedQps_ == nullptr && return this->maxRt_ == nullptr && return this->minRt_ == nullptr
        && return this->nodeId_ == nullptr && return this->qps2XX_ == nullptr && return this->realQps_ == nullptr && return this->timePoint_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // averageRt Field Functions 
    bool hasAverageRt() const { return this->averageRt_ != nullptr;};
    void deleteAverageRt() { this->averageRt_ = nullptr;};
    inline int32_t averageRt() const { DARABONBA_PTR_GET_DEFAULT(averageRt_, 0) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setAverageRt(int32_t averageRt) { DARABONBA_PTR_SET_VALUE(averageRt_, averageRt) };


    // checkPointResult Field Functions 
    bool hasCheckPointResult() const { return this->checkPointResult_ != nullptr;};
    void deleteCheckPointResult() { this->checkPointResult_ = nullptr;};
    inline const Models::GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult & checkPointResult() const { DARABONBA_PTR_GET_CONST(checkPointResult_, Models::GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult) };
    inline Models::GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult checkPointResult() { DARABONBA_PTR_GET(checkPointResult_, Models::GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setCheckPointResult(const Models::GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult & checkPointResult) { DARABONBA_PTR_SET_VALUE(checkPointResult_, checkPointResult) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setCheckPointResult(Models::GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult && checkPointResult) { DARABONBA_PTR_SET_RVALUE(checkPointResult_, checkPointResult) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline float concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0.0) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setConcurrency(float concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // configQps Field Functions 
    bool hasConfigQps() const { return this->configQps_ != nullptr;};
    void deleteConfigQps() { this->configQps_ = nullptr;};
    inline int32_t configQps() const { DARABONBA_PTR_GET_DEFAULT(configQps_, 0) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setConfigQps(int32_t configQps) { DARABONBA_PTR_SET_VALUE(configQps_, configQps) };


    // count2XX Field Functions 
    bool hasCount2XX() const { return this->count2XX_ != nullptr;};
    void deleteCount2XX() { this->count2XX_ = nullptr;};
    inline int64_t count2XX() const { DARABONBA_PTR_GET_DEFAULT(count2XX_, 0L) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setCount2XX(int64_t count2XX) { DARABONBA_PTR_SET_VALUE(count2XX_, count2XX) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int64_t failedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // failedQps Field Functions 
    bool hasFailedQps() const { return this->failedQps_ != nullptr;};
    void deleteFailedQps() { this->failedQps_ = nullptr;};
    inline float failedQps() const { DARABONBA_PTR_GET_DEFAULT(failedQps_, 0.0) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setFailedQps(float failedQps) { DARABONBA_PTR_SET_VALUE(failedQps_, failedQps) };


    // maxRt Field Functions 
    bool hasMaxRt() const { return this->maxRt_ != nullptr;};
    void deleteMaxRt() { this->maxRt_ = nullptr;};
    inline int32_t maxRt() const { DARABONBA_PTR_GET_DEFAULT(maxRt_, 0) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setMaxRt(int32_t maxRt) { DARABONBA_PTR_SET_VALUE(maxRt_, maxRt) };


    // minRt Field Functions 
    bool hasMinRt() const { return this->minRt_ != nullptr;};
    void deleteMinRt() { this->minRt_ = nullptr;};
    inline int32_t minRt() const { DARABONBA_PTR_GET_DEFAULT(minRt_, 0) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setMinRt(int32_t minRt) { DARABONBA_PTR_SET_VALUE(minRt_, minRt) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // qps2XX Field Functions 
    bool hasQps2XX() const { return this->qps2XX_ != nullptr;};
    void deleteQps2XX() { this->qps2XX_ = nullptr;};
    inline float qps2XX() const { DARABONBA_PTR_GET_DEFAULT(qps2XX_, 0.0) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setQps2XX(float qps2XX) { DARABONBA_PTR_SET_VALUE(qps2XX_, qps2XX) };


    // realQps Field Functions 
    bool hasRealQps() const { return this->realQps_ != nullptr;};
    void deleteRealQps() { this->realQps_ = nullptr;};
    inline float realQps() const { DARABONBA_PTR_GET_DEFAULT(realQps_, 0.0) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setRealQps(float realQps) { DARABONBA_PTR_SET_VALUE(realQps_, realQps) };


    // timePoint Field Functions 
    bool hasTimePoint() const { return this->timePoint_ != nullptr;};
    void deleteTimePoint() { this->timePoint_ = nullptr;};
    inline int64_t timePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, 0L) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataList& setTimePoint(int64_t timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


  protected:
    // The API ID.
    std::shared_ptr<string> apiId_ = nullptr;
    // The API name.
    std::shared_ptr<string> apiName_ = nullptr;
    // The average RT.
    std::shared_ptr<int32_t> averageRt_ = nullptr;
    // The check point results.
    std::shared_ptr<Models::GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult> checkPointResult_ = nullptr;
    // The concurrency.
    std::shared_ptr<float> concurrency_ = nullptr;
    // The RPS of successful and failed requests.
    std::shared_ptr<int32_t> configQps_ = nullptr;
    // The number of successful requests.
    std::shared_ptr<int64_t> count2XX_ = nullptr;
    // The total number of failed requests.
    std::shared_ptr<int64_t> failedCount_ = nullptr;
    // The RPS of failed requests.
    std::shared_ptr<float> failedQps_ = nullptr;
    // The maximum RT.
    std::shared_ptr<int32_t> maxRt_ = nullptr;
    // The minimum RT.
    std::shared_ptr<int32_t> minRt_ = nullptr;
    // The API ID.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The Requests Per Second (RPS) of successful requests.
    std::shared_ptr<float> qps2XX_ = nullptr;
    // The actual RPS.
    std::shared_ptr<float> realQps_ = nullptr;
    // The point in time at which the stress testing is performed.
    std::shared_ptr<int64_t> timePoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
