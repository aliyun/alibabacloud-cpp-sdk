// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERUSAGEDATAEXPORTTASKRESPONSEBODYUSAGEDATAPERPAGEDATADATAITEMTASKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERUSAGEDATAEXPORTTASKRESPONSEBODYUSAGEDATAPERPAGEDATADATAITEMTASKCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig() = default ;
    DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig(const DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig &) = default ;
    DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig(DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig &&) = default ;
    DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig() = default ;
    DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig& operator=(const DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig &) = default ;
    DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig& operator=(DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeUserUsageDataExportTaskResponseBodyUsageDataPerPageDataDataItemTaskConfig& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range that was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The start of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
