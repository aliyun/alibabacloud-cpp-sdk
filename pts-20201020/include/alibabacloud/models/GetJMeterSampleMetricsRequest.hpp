// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJMETERSAMPLEMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJMETERSAMPLEMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetJMeterSampleMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJMeterSampleMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(SamplerId, samplerId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJMeterSampleMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(SamplerId, samplerId_);
    };
    GetJMeterSampleMetricsRequest() = default ;
    GetJMeterSampleMetricsRequest(const GetJMeterSampleMetricsRequest &) = default ;
    GetJMeterSampleMetricsRequest(GetJMeterSampleMetricsRequest &&) = default ;
    GetJMeterSampleMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJMeterSampleMetricsRequest() = default ;
    GetJMeterSampleMetricsRequest& operator=(const GetJMeterSampleMetricsRequest &) = default ;
    GetJMeterSampleMetricsRequest& operator=(GetJMeterSampleMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && return this->endTime_ == nullptr && return this->reportId_ == nullptr && return this->samplerId_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetJMeterSampleMetricsRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetJMeterSampleMetricsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetJMeterSampleMetricsRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // samplerId Field Functions 
    bool hasSamplerId() const { return this->samplerId_ != nullptr;};
    void deleteSamplerId() { this->samplerId_ = nullptr;};
    inline int32_t samplerId() const { DARABONBA_PTR_GET_DEFAULT(samplerId_, 0) };
    inline GetJMeterSampleMetricsRequest& setSamplerId(int32_t samplerId) { DARABONBA_PTR_SET_VALUE(samplerId_, samplerId) };


  protected:
    // The beginning of the time range to query.
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // The end of the time range to query.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The report ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> reportId_ = nullptr;
    // The sampler ID. This parameter value starts from 0. If this parameter value is -1, the data of the whole scenario is returned.
    std::shared_ptr<int32_t> samplerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
