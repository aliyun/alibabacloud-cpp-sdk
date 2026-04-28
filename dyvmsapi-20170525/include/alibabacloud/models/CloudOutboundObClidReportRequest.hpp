// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDOUTBOUNDOBCLIDREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDOUTBOUNDOBCLIDREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudOutboundObClidReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudOutboundObClidReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AreaCodes, areaCodes_);
      DARABONBA_PTR_TO_JSON(EndHour, endHour_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(StartHour, startHour_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatisticMethod, statisticMethod_);
      DARABONBA_PTR_TO_JSON(TimeRangeType, timeRangeType_);
    };
    friend void from_json(const Darabonba::Json& j, CloudOutboundObClidReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaCodes, areaCodes_);
      DARABONBA_PTR_FROM_JSON(EndHour, endHour_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(StartHour, startHour_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatisticMethod, statisticMethod_);
      DARABONBA_PTR_FROM_JSON(TimeRangeType, timeRangeType_);
    };
    CloudOutboundObClidReportRequest() = default ;
    CloudOutboundObClidReportRequest(const CloudOutboundObClidReportRequest &) = default ;
    CloudOutboundObClidReportRequest(CloudOutboundObClidReportRequest &&) = default ;
    CloudOutboundObClidReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudOutboundObClidReportRequest() = default ;
    CloudOutboundObClidReportRequest& operator=(const CloudOutboundObClidReportRequest &) = default ;
    CloudOutboundObClidReportRequest& operator=(CloudOutboundObClidReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->areaCodes_ == nullptr
        && this->endHour_ == nullptr && this->endTime_ == nullptr && this->enterpriseId_ == nullptr && this->limit_ == nullptr && this->start_ == nullptr
        && this->startHour_ == nullptr && this->startTime_ == nullptr && this->statisticMethod_ == nullptr && this->timeRangeType_ == nullptr; };
    // areaCodes Field Functions 
    bool hasAreaCodes() const { return this->areaCodes_ != nullptr;};
    void deleteAreaCodes() { this->areaCodes_ = nullptr;};
    inline string getAreaCodes() const { DARABONBA_PTR_GET_DEFAULT(areaCodes_, "") };
    inline CloudOutboundObClidReportRequest& setAreaCodes(string areaCodes) { DARABONBA_PTR_SET_VALUE(areaCodes_, areaCodes) };


    // endHour Field Functions 
    bool hasEndHour() const { return this->endHour_ != nullptr;};
    void deleteEndHour() { this->endHour_ = nullptr;};
    inline int64_t getEndHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0L) };
    inline CloudOutboundObClidReportRequest& setEndHour(int64_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CloudOutboundObClidReportRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudOutboundObClidReportRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline CloudOutboundObClidReportRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline CloudOutboundObClidReportRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // startHour Field Functions 
    bool hasStartHour() const { return this->startHour_ != nullptr;};
    void deleteStartHour() { this->startHour_ = nullptr;};
    inline int64_t getStartHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0L) };
    inline CloudOutboundObClidReportRequest& setStartHour(int64_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CloudOutboundObClidReportRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statisticMethod Field Functions 
    bool hasStatisticMethod() const { return this->statisticMethod_ != nullptr;};
    void deleteStatisticMethod() { this->statisticMethod_ = nullptr;};
    inline int64_t getStatisticMethod() const { DARABONBA_PTR_GET_DEFAULT(statisticMethod_, 0L) };
    inline CloudOutboundObClidReportRequest& setStatisticMethod(int64_t statisticMethod) { DARABONBA_PTR_SET_VALUE(statisticMethod_, statisticMethod) };


    // timeRangeType Field Functions 
    bool hasTimeRangeType() const { return this->timeRangeType_ != nullptr;};
    void deleteTimeRangeType() { this->timeRangeType_ = nullptr;};
    inline int64_t getTimeRangeType() const { DARABONBA_PTR_GET_DEFAULT(timeRangeType_, 0L) };
    inline CloudOutboundObClidReportRequest& setTimeRangeType(int64_t timeRangeType) { DARABONBA_PTR_SET_VALUE(timeRangeType_, timeRangeType) };


  protected:
    // 说明：根据区号查询指定区域的预览外呼被叫号码统计支持按照多个区号进行查询，多个区号之间使用英文逗号","分隔，默认查询账户下所有地区的预览外呼被叫号码统计
    shared_ptr<string> areaCodes_ {};
    // 统计时段结束时间；取值：0~23,默认值为24时
    shared_ptr<int64_t> endHour_ {};
    // 说明：统计日期的结束时间，格式：yyyy-MM-dd
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 查询条数；取值：最大不能超过1000，默认10
    shared_ptr<int64_t> limit_ {};
    // 查询起始位置；取值：大于等于0，默认0
    shared_ptr<int64_t> start_ {};
    // 统计时段开始时间；取值：0~23,默认值为0时
    shared_ptr<int64_t> startHour_ {};
    // 说明：统计日期的开始时间，格式：yyyy-MM-dd
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // 统计方法；说明：0：分时1：分日2：汇总11：中继群组汇总
    // 
    // This parameter is required.
    shared_ptr<int64_t> statisticMethod_ {};
    // 统计类型；说明：统计报表时间类型，1：日报表2：周报表3：月报表4：自定义时间
    // 
    // This parameter is required.
    shared_ptr<int64_t> timeRangeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
