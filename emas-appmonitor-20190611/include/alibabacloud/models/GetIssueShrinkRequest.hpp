// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETISSUESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETISSUESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetIssueShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIssueShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(BizModule, bizModule_);
      DARABONBA_PTR_TO_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_TO_JSON(Filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, GetIssueShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(BizModule, bizModule_);
      DARABONBA_PTR_FROM_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_FROM_JSON(Filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
    };
    GetIssueShrinkRequest() = default ;
    GetIssueShrinkRequest(const GetIssueShrinkRequest &) = default ;
    GetIssueShrinkRequest(GetIssueShrinkRequest &&) = default ;
    GetIssueShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIssueShrinkRequest() = default ;
    GetIssueShrinkRequest& operator=(const GetIssueShrinkRequest &) = default ;
    GetIssueShrinkRequest& operator=(GetIssueShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeRange : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeRange& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Granularity, granularity_);
        DARABONBA_PTR_TO_JSON(GranularityUnit, granularityUnit_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, TimeRange& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
        DARABONBA_PTR_FROM_JSON(GranularityUnit, granularityUnit_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      TimeRange() = default ;
      TimeRange(const TimeRange &) = default ;
      TimeRange(TimeRange &&) = default ;
      TimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeRange() = default ;
      TimeRange& operator=(const TimeRange &) = default ;
      TimeRange& operator=(TimeRange &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->granularity_ == nullptr && this->granularityUnit_ == nullptr && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline TimeRange& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // granularity Field Functions 
      bool hasGranularity() const { return this->granularity_ != nullptr;};
      void deleteGranularity() { this->granularity_ = nullptr;};
      inline int32_t getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, 0) };
      inline TimeRange& setGranularity(int32_t granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


      // granularityUnit Field Functions 
      bool hasGranularityUnit() const { return this->granularityUnit_ != nullptr;};
      void deleteGranularityUnit() { this->granularityUnit_ = nullptr;};
      inline string getGranularityUnit() const { DARABONBA_PTR_GET_DEFAULT(granularityUnit_, "") };
      inline TimeRange& setGranularityUnit(string granularityUnit) { DARABONBA_PTR_SET_VALUE(granularityUnit_, granularityUnit) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline TimeRange& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<int32_t> granularity_ {};
      shared_ptr<string> granularityUnit_ {};
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->bizModule_ == nullptr && this->digestHash_ == nullptr && this->filterShrink_ == nullptr && this->os_ == nullptr && this->timeRange_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline GetIssueShrinkRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // bizModule Field Functions 
    bool hasBizModule() const { return this->bizModule_ != nullptr;};
    void deleteBizModule() { this->bizModule_ = nullptr;};
    inline string getBizModule() const { DARABONBA_PTR_GET_DEFAULT(bizModule_, "") };
    inline GetIssueShrinkRequest& setBizModule(string bizModule) { DARABONBA_PTR_SET_VALUE(bizModule_, bizModule) };


    // digestHash Field Functions 
    bool hasDigestHash() const { return this->digestHash_ != nullptr;};
    void deleteDigestHash() { this->digestHash_ = nullptr;};
    inline string getDigestHash() const { DARABONBA_PTR_GET_DEFAULT(digestHash_, "") };
    inline GetIssueShrinkRequest& setDigestHash(string digestHash) { DARABONBA_PTR_SET_VALUE(digestHash_, digestHash) };


    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string getFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline GetIssueShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline GetIssueShrinkRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline const GetIssueShrinkRequest::TimeRange & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, GetIssueShrinkRequest::TimeRange) };
    inline GetIssueShrinkRequest::TimeRange getTimeRange() { DARABONBA_PTR_GET(timeRange_, GetIssueShrinkRequest::TimeRange) };
    inline GetIssueShrinkRequest& setTimeRange(const GetIssueShrinkRequest::TimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
    inline GetIssueShrinkRequest& setTimeRange(GetIssueShrinkRequest::TimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


  protected:
    // AppKey
    // 
    // This parameter is required.
    shared_ptr<int64_t> appKey_ {};
    // This parameter is required.
    shared_ptr<string> bizModule_ {};
    shared_ptr<string> digestHash_ {};
    shared_ptr<string> filterShrink_ {};
    // This parameter is required.
    shared_ptr<string> os_ {};
    // This parameter is required.
    shared_ptr<GetIssueShrinkRequest::TimeRange> timeRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
