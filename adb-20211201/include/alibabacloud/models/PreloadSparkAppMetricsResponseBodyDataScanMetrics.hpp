// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRELOADSPARKAPPMETRICSRESPONSEBODYDATASCANMETRICS_HPP_
#define ALIBABACLOUD_MODELS_PRELOADSPARKAPPMETRICSRESPONSEBODYDATASCANMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class PreloadSparkAppMetricsResponseBodyDataScanMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreloadSparkAppMetricsResponseBodyDataScanMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(OutputRowsCount, outputRowsCount_);
      DARABONBA_PTR_TO_JSON(TotalReadFileSizeInByte, totalReadFileSizeInByte_);
    };
    friend void from_json(const Darabonba::Json& j, PreloadSparkAppMetricsResponseBodyDataScanMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputRowsCount, outputRowsCount_);
      DARABONBA_PTR_FROM_JSON(TotalReadFileSizeInByte, totalReadFileSizeInByte_);
    };
    PreloadSparkAppMetricsResponseBodyDataScanMetrics() = default ;
    PreloadSparkAppMetricsResponseBodyDataScanMetrics(const PreloadSparkAppMetricsResponseBodyDataScanMetrics &) = default ;
    PreloadSparkAppMetricsResponseBodyDataScanMetrics(PreloadSparkAppMetricsResponseBodyDataScanMetrics &&) = default ;
    PreloadSparkAppMetricsResponseBodyDataScanMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreloadSparkAppMetricsResponseBodyDataScanMetrics() = default ;
    PreloadSparkAppMetricsResponseBodyDataScanMetrics& operator=(const PreloadSparkAppMetricsResponseBodyDataScanMetrics &) = default ;
    PreloadSparkAppMetricsResponseBodyDataScanMetrics& operator=(PreloadSparkAppMetricsResponseBodyDataScanMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outputRowsCount_ != nullptr
        && this->totalReadFileSizeInByte_ != nullptr; };
    // outputRowsCount Field Functions 
    bool hasOutputRowsCount() const { return this->outputRowsCount_ != nullptr;};
    void deleteOutputRowsCount() { this->outputRowsCount_ = nullptr;};
    inline int64_t outputRowsCount() const { DARABONBA_PTR_GET_DEFAULT(outputRowsCount_, 0L) };
    inline PreloadSparkAppMetricsResponseBodyDataScanMetrics& setOutputRowsCount(int64_t outputRowsCount) { DARABONBA_PTR_SET_VALUE(outputRowsCount_, outputRowsCount) };


    // totalReadFileSizeInByte Field Functions 
    bool hasTotalReadFileSizeInByte() const { return this->totalReadFileSizeInByte_ != nullptr;};
    void deleteTotalReadFileSizeInByte() { this->totalReadFileSizeInByte_ = nullptr;};
    inline int64_t totalReadFileSizeInByte() const { DARABONBA_PTR_GET_DEFAULT(totalReadFileSizeInByte_, 0L) };
    inline PreloadSparkAppMetricsResponseBodyDataScanMetrics& setTotalReadFileSizeInByte(int64_t totalReadFileSizeInByte) { DARABONBA_PTR_SET_VALUE(totalReadFileSizeInByte_, totalReadFileSizeInByte) };


  protected:
    // The number of rows scanned.
    std::shared_ptr<int64_t> outputRowsCount_ = nullptr;
    // The size of the scanned data. Unit: bytes.
    std::shared_ptr<int64_t> totalReadFileSizeInByte_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
