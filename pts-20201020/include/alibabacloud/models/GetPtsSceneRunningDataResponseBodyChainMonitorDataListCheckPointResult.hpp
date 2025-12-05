// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERUNNINGDATARESPONSEBODYCHAINMONITORDATALISTCHECKPOINTRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERUNNINGDATARESPONSEBODYCHAINMONITORDATALISTCHECKPOINTRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult& obj) { 
      DARABONBA_PTR_TO_JSON(FailedBusinessCount, failedBusinessCount_);
      DARABONBA_PTR_TO_JSON(FailedBusinessQps, failedBusinessQps_);
      DARABONBA_PTR_TO_JSON(SucceedBusinessCount, succeedBusinessCount_);
      DARABONBA_PTR_TO_JSON(SucceedBusinessQps, succeedBusinessQps_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedBusinessCount, failedBusinessCount_);
      DARABONBA_PTR_FROM_JSON(FailedBusinessQps, failedBusinessQps_);
      DARABONBA_PTR_FROM_JSON(SucceedBusinessCount, succeedBusinessCount_);
      DARABONBA_PTR_FROM_JSON(SucceedBusinessQps, succeedBusinessQps_);
    };
    GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult() = default ;
    GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult(const GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult &) = default ;
    GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult(GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult &&) = default ;
    GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult() = default ;
    GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult& operator=(const GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult &) = default ;
    GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult& operator=(GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedBusinessCount_ == nullptr
        && return this->failedBusinessQps_ == nullptr && return this->succeedBusinessCount_ == nullptr && return this->succeedBusinessQps_ == nullptr; };
    // failedBusinessCount Field Functions 
    bool hasFailedBusinessCount() const { return this->failedBusinessCount_ != nullptr;};
    void deleteFailedBusinessCount() { this->failedBusinessCount_ = nullptr;};
    inline int64_t failedBusinessCount() const { DARABONBA_PTR_GET_DEFAULT(failedBusinessCount_, 0L) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult& setFailedBusinessCount(int64_t failedBusinessCount) { DARABONBA_PTR_SET_VALUE(failedBusinessCount_, failedBusinessCount) };


    // failedBusinessQps Field Functions 
    bool hasFailedBusinessQps() const { return this->failedBusinessQps_ != nullptr;};
    void deleteFailedBusinessQps() { this->failedBusinessQps_ = nullptr;};
    inline float failedBusinessQps() const { DARABONBA_PTR_GET_DEFAULT(failedBusinessQps_, 0.0) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult& setFailedBusinessQps(float failedBusinessQps) { DARABONBA_PTR_SET_VALUE(failedBusinessQps_, failedBusinessQps) };


    // succeedBusinessCount Field Functions 
    bool hasSucceedBusinessCount() const { return this->succeedBusinessCount_ != nullptr;};
    void deleteSucceedBusinessCount() { this->succeedBusinessCount_ = nullptr;};
    inline int64_t succeedBusinessCount() const { DARABONBA_PTR_GET_DEFAULT(succeedBusinessCount_, 0L) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult& setSucceedBusinessCount(int64_t succeedBusinessCount) { DARABONBA_PTR_SET_VALUE(succeedBusinessCount_, succeedBusinessCount) };


    // succeedBusinessQps Field Functions 
    bool hasSucceedBusinessQps() const { return this->succeedBusinessQps_ != nullptr;};
    void deleteSucceedBusinessQps() { this->succeedBusinessQps_ = nullptr;};
    inline float succeedBusinessQps() const { DARABONBA_PTR_GET_DEFAULT(succeedBusinessQps_, 0.0) };
    inline GetPtsSceneRunningDataResponseBodyChainMonitorDataListCheckPointResult& setSucceedBusinessQps(float succeedBusinessQps) { DARABONBA_PTR_SET_VALUE(succeedBusinessQps_, succeedBusinessQps) };


  protected:
    // The number of failed businesses.
    std::shared_ptr<int64_t> failedBusinessCount_ = nullptr;
    // The RPS of failed businesses.
    std::shared_ptr<float> failedBusinessQps_ = nullptr;
    // The number of successful businesses.
    std::shared_ptr<int64_t> succeedBusinessCount_ = nullptr;
    // The RPS of the successful businesses.
    std::shared_ptr<float> succeedBusinessQps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
