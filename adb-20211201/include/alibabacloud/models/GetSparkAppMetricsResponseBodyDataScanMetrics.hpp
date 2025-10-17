// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKAPPMETRICSRESPONSEBODYDATASCANMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKAPPMETRICSRESPONSEBODYDATASCANMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkAppMetricsResponseBodyDataScanMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkAppMetricsResponseBodyDataScanMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(OutputRowsCount, outputRowsCount_);
      DARABONBA_PTR_TO_JSON(TotalReadFileSizeInByte, totalReadFileSizeInByte_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkAppMetricsResponseBodyDataScanMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputRowsCount, outputRowsCount_);
      DARABONBA_PTR_FROM_JSON(TotalReadFileSizeInByte, totalReadFileSizeInByte_);
    };
    GetSparkAppMetricsResponseBodyDataScanMetrics() = default ;
    GetSparkAppMetricsResponseBodyDataScanMetrics(const GetSparkAppMetricsResponseBodyDataScanMetrics &) = default ;
    GetSparkAppMetricsResponseBodyDataScanMetrics(GetSparkAppMetricsResponseBodyDataScanMetrics &&) = default ;
    GetSparkAppMetricsResponseBodyDataScanMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkAppMetricsResponseBodyDataScanMetrics() = default ;
    GetSparkAppMetricsResponseBodyDataScanMetrics& operator=(const GetSparkAppMetricsResponseBodyDataScanMetrics &) = default ;
    GetSparkAppMetricsResponseBodyDataScanMetrics& operator=(GetSparkAppMetricsResponseBodyDataScanMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outputRowsCount_ == nullptr
        && return this->totalReadFileSizeInByte_ == nullptr; };
    // outputRowsCount Field Functions 
    bool hasOutputRowsCount() const { return this->outputRowsCount_ != nullptr;};
    void deleteOutputRowsCount() { this->outputRowsCount_ = nullptr;};
    inline int64_t outputRowsCount() const { DARABONBA_PTR_GET_DEFAULT(outputRowsCount_, 0L) };
    inline GetSparkAppMetricsResponseBodyDataScanMetrics& setOutputRowsCount(int64_t outputRowsCount) { DARABONBA_PTR_SET_VALUE(outputRowsCount_, outputRowsCount) };


    // totalReadFileSizeInByte Field Functions 
    bool hasTotalReadFileSizeInByte() const { return this->totalReadFileSizeInByte_ != nullptr;};
    void deleteTotalReadFileSizeInByte() { this->totalReadFileSizeInByte_ = nullptr;};
    inline int64_t totalReadFileSizeInByte() const { DARABONBA_PTR_GET_DEFAULT(totalReadFileSizeInByte_, 0L) };
    inline GetSparkAppMetricsResponseBodyDataScanMetrics& setTotalReadFileSizeInByte(int64_t totalReadFileSizeInByte) { DARABONBA_PTR_SET_VALUE(totalReadFileSizeInByte_, totalReadFileSizeInByte) };


  protected:
    // The number of scanned rows.
    std::shared_ptr<int64_t> outputRowsCount_ = nullptr;
    // The number of scanned bytes.
    std::shared_ptr<int64_t> totalReadFileSizeInByte_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
