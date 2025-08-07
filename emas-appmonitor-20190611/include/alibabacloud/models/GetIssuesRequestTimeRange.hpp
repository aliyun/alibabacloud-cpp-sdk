// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETISSUESREQUESTTIMERANGE_HPP_
#define ALIBABACLOUD_MODELS_GETISSUESREQUESTTIMERANGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetIssuesRequestTimeRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIssuesRequestTimeRange& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(GranularityUnit, granularityUnit_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetIssuesRequestTimeRange& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(GranularityUnit, granularityUnit_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetIssuesRequestTimeRange() = default ;
    GetIssuesRequestTimeRange(const GetIssuesRequestTimeRange &) = default ;
    GetIssuesRequestTimeRange(GetIssuesRequestTimeRange &&) = default ;
    GetIssuesRequestTimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIssuesRequestTimeRange() = default ;
    GetIssuesRequestTimeRange& operator=(const GetIssuesRequestTimeRange &) = default ;
    GetIssuesRequestTimeRange& operator=(GetIssuesRequestTimeRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->granularity_ != nullptr && this->granularityUnit_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetIssuesRequestTimeRange& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline int32_t granularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, 0) };
    inline GetIssuesRequestTimeRange& setGranularity(int32_t granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // granularityUnit Field Functions 
    bool hasGranularityUnit() const { return this->granularityUnit_ != nullptr;};
    void deleteGranularityUnit() { this->granularityUnit_ = nullptr;};
    inline string granularityUnit() const { DARABONBA_PTR_GET_DEFAULT(granularityUnit_, "") };
    inline GetIssuesRequestTimeRange& setGranularityUnit(string granularityUnit) { DARABONBA_PTR_SET_VALUE(granularityUnit_, granularityUnit) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetIssuesRequestTimeRange& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int32_t> granularity_ = nullptr;
    std::shared_ptr<string> granularityUnit_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
