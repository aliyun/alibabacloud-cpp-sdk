// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGEORDERMETRICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGEORDERMETRICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetChangeOrderMetricResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeOrderMetricResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AvgTimeCostMs, avgTimeCostMs_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(ErrorPercent, errorPercent_);
      DARABONBA_PTR_TO_JSON(MaxTimeCostMs, maxTimeCostMs_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OptimizeSuggestions, optimizeSuggestions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskTimeCostMsAvg, taskTimeCostMsAvg_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeOrderMetricResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AvgTimeCostMs, avgTimeCostMs_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(ErrorPercent, errorPercent_);
      DARABONBA_PTR_FROM_JSON(MaxTimeCostMs, maxTimeCostMs_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OptimizeSuggestions, optimizeSuggestions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskTimeCostMsAvg, taskTimeCostMsAvg_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetChangeOrderMetricResponseBodyData() = default ;
    GetChangeOrderMetricResponseBodyData(const GetChangeOrderMetricResponseBodyData &) = default ;
    GetChangeOrderMetricResponseBodyData(GetChangeOrderMetricResponseBodyData &&) = default ;
    GetChangeOrderMetricResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeOrderMetricResponseBodyData() = default ;
    GetChangeOrderMetricResponseBodyData& operator=(const GetChangeOrderMetricResponseBodyData &) = default ;
    GetChangeOrderMetricResponseBodyData& operator=(GetChangeOrderMetricResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->avgTimeCostMs_ != nullptr && this->error_ != nullptr && this->errorPercent_ != nullptr && this->maxTimeCostMs_ != nullptr && this->name_ != nullptr
        && this->optimizeSuggestions_ != nullptr && this->regionId_ != nullptr && this->taskTimeCostMsAvg_ != nullptr && this->total_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetChangeOrderMetricResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // avgTimeCostMs Field Functions 
    bool hasAvgTimeCostMs() const { return this->avgTimeCostMs_ != nullptr;};
    void deleteAvgTimeCostMs() { this->avgTimeCostMs_ = nullptr;};
    inline float avgTimeCostMs() const { DARABONBA_PTR_GET_DEFAULT(avgTimeCostMs_, 0.0) };
    inline GetChangeOrderMetricResponseBodyData& setAvgTimeCostMs(float avgTimeCostMs) { DARABONBA_PTR_SET_VALUE(avgTimeCostMs_, avgTimeCostMs) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline int64_t error() const { DARABONBA_PTR_GET_DEFAULT(error_, 0L) };
    inline GetChangeOrderMetricResponseBodyData& setError(int64_t error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // errorPercent Field Functions 
    bool hasErrorPercent() const { return this->errorPercent_ != nullptr;};
    void deleteErrorPercent() { this->errorPercent_ = nullptr;};
    inline float errorPercent() const { DARABONBA_PTR_GET_DEFAULT(errorPercent_, 0.0) };
    inline GetChangeOrderMetricResponseBodyData& setErrorPercent(float errorPercent) { DARABONBA_PTR_SET_VALUE(errorPercent_, errorPercent) };


    // maxTimeCostMs Field Functions 
    bool hasMaxTimeCostMs() const { return this->maxTimeCostMs_ != nullptr;};
    void deleteMaxTimeCostMs() { this->maxTimeCostMs_ = nullptr;};
    inline float maxTimeCostMs() const { DARABONBA_PTR_GET_DEFAULT(maxTimeCostMs_, 0.0) };
    inline GetChangeOrderMetricResponseBodyData& setMaxTimeCostMs(float maxTimeCostMs) { DARABONBA_PTR_SET_VALUE(maxTimeCostMs_, maxTimeCostMs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetChangeOrderMetricResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // optimizeSuggestions Field Functions 
    bool hasOptimizeSuggestions() const { return this->optimizeSuggestions_ != nullptr;};
    void deleteOptimizeSuggestions() { this->optimizeSuggestions_ = nullptr;};
    inline string optimizeSuggestions() const { DARABONBA_PTR_GET_DEFAULT(optimizeSuggestions_, "") };
    inline GetChangeOrderMetricResponseBodyData& setOptimizeSuggestions(string optimizeSuggestions) { DARABONBA_PTR_SET_VALUE(optimizeSuggestions_, optimizeSuggestions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetChangeOrderMetricResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskTimeCostMsAvg Field Functions 
    bool hasTaskTimeCostMsAvg() const { return this->taskTimeCostMsAvg_ != nullptr;};
    void deleteTaskTimeCostMsAvg() { this->taskTimeCostMsAvg_ = nullptr;};
    inline string taskTimeCostMsAvg() const { DARABONBA_PTR_GET_DEFAULT(taskTimeCostMsAvg_, "") };
    inline GetChangeOrderMetricResponseBodyData& setTaskTimeCostMsAvg(string taskTimeCostMsAvg) { DARABONBA_PTR_SET_VALUE(taskTimeCostMsAvg_, taskTimeCostMsAvg) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetChangeOrderMetricResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<float> avgTimeCostMs_ = nullptr;
    // The number of abnormal change orders.
    std::shared_ptr<int64_t> error_ = nullptr;
    // The percentage of change failures.
    std::shared_ptr<float> errorPercent_ = nullptr;
    std::shared_ptr<float> maxTimeCostMs_ = nullptr;
    // The application name.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> optimizeSuggestions_ = nullptr;
    // The namespace ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> taskTimeCostMsAvg_ = nullptr;
    // The total number of change orders.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
