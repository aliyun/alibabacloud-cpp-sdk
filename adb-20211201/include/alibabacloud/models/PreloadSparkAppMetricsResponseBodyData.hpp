// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRELOADSPARKAPPMETRICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PRELOADSPARKAPPMETRICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PreloadSparkAppMetricsResponseBodyDataScanMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class PreloadSparkAppMetricsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreloadSparkAppMetricsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AttemptId, attemptId_);
      DARABONBA_PTR_TO_JSON(EventLogPath, eventLogPath_);
      DARABONBA_PTR_TO_JSON(Finished, finished_);
      DARABONBA_PTR_TO_JSON(ScanMetrics, scanMetrics_);
    };
    friend void from_json(const Darabonba::Json& j, PreloadSparkAppMetricsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AttemptId, attemptId_);
      DARABONBA_PTR_FROM_JSON(EventLogPath, eventLogPath_);
      DARABONBA_PTR_FROM_JSON(Finished, finished_);
      DARABONBA_PTR_FROM_JSON(ScanMetrics, scanMetrics_);
    };
    PreloadSparkAppMetricsResponseBodyData() = default ;
    PreloadSparkAppMetricsResponseBodyData(const PreloadSparkAppMetricsResponseBodyData &) = default ;
    PreloadSparkAppMetricsResponseBodyData(PreloadSparkAppMetricsResponseBodyData &&) = default ;
    PreloadSparkAppMetricsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreloadSparkAppMetricsResponseBodyData() = default ;
    PreloadSparkAppMetricsResponseBodyData& operator=(const PreloadSparkAppMetricsResponseBodyData &) = default ;
    PreloadSparkAppMetricsResponseBodyData& operator=(PreloadSparkAppMetricsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->attemptId_ == nullptr && return this->eventLogPath_ == nullptr && return this->finished_ == nullptr && return this->scanMetrics_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline PreloadSparkAppMetricsResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // attemptId Field Functions 
    bool hasAttemptId() const { return this->attemptId_ != nullptr;};
    void deleteAttemptId() { this->attemptId_ = nullptr;};
    inline string attemptId() const { DARABONBA_PTR_GET_DEFAULT(attemptId_, "") };
    inline PreloadSparkAppMetricsResponseBodyData& setAttemptId(string attemptId) { DARABONBA_PTR_SET_VALUE(attemptId_, attemptId) };


    // eventLogPath Field Functions 
    bool hasEventLogPath() const { return this->eventLogPath_ != nullptr;};
    void deleteEventLogPath() { this->eventLogPath_ = nullptr;};
    inline string eventLogPath() const { DARABONBA_PTR_GET_DEFAULT(eventLogPath_, "") };
    inline PreloadSparkAppMetricsResponseBodyData& setEventLogPath(string eventLogPath) { DARABONBA_PTR_SET_VALUE(eventLogPath_, eventLogPath) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline bool finished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
    inline PreloadSparkAppMetricsResponseBodyData& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // scanMetrics Field Functions 
    bool hasScanMetrics() const { return this->scanMetrics_ != nullptr;};
    void deleteScanMetrics() { this->scanMetrics_ = nullptr;};
    inline const Models::PreloadSparkAppMetricsResponseBodyDataScanMetrics & scanMetrics() const { DARABONBA_PTR_GET_CONST(scanMetrics_, Models::PreloadSparkAppMetricsResponseBodyDataScanMetrics) };
    inline Models::PreloadSparkAppMetricsResponseBodyDataScanMetrics scanMetrics() { DARABONBA_PTR_GET(scanMetrics_, Models::PreloadSparkAppMetricsResponseBodyDataScanMetrics) };
    inline PreloadSparkAppMetricsResponseBodyData& setScanMetrics(const Models::PreloadSparkAppMetricsResponseBodyDataScanMetrics & scanMetrics) { DARABONBA_PTR_SET_VALUE(scanMetrics_, scanMetrics) };
    inline PreloadSparkAppMetricsResponseBodyData& setScanMetrics(Models::PreloadSparkAppMetricsResponseBodyDataScanMetrics && scanMetrics) { DARABONBA_PTR_SET_RVALUE(scanMetrics_, scanMetrics) };


  protected:
    // The ID of the Spark application.
    std::shared_ptr<string> appId_ = nullptr;
    // The retry ID of the Spark application.
    std::shared_ptr<string> attemptId_ = nullptr;
    // The event log path.
    std::shared_ptr<string> eventLogPath_ = nullptr;
    // Indicates whether parsing is complete. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> finished_ = nullptr;
    // The metrics.
    std::shared_ptr<Models::PreloadSparkAppMetricsResponseBodyDataScanMetrics> scanMetrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
