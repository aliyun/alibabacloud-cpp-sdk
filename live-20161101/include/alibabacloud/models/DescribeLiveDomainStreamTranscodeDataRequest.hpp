// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTREAMTRANSCODEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTREAMTRANSCODEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainStreamTranscodeDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainStreamTranscodeDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Precision, precision_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Split, split_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainStreamTranscodeDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Precision, precision_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Split, split_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainStreamTranscodeDataRequest() = default ;
    DescribeLiveDomainStreamTranscodeDataRequest(const DescribeLiveDomainStreamTranscodeDataRequest &) = default ;
    DescribeLiveDomainStreamTranscodeDataRequest(DescribeLiveDomainStreamTranscodeDataRequest &&) = default ;
    DescribeLiveDomainStreamTranscodeDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainStreamTranscodeDataRequest() = default ;
    DescribeLiveDomainStreamTranscodeDataRequest& operator=(const DescribeLiveDomainStreamTranscodeDataRequest &) = default ;
    DescribeLiveDomainStreamTranscodeDataRequest& operator=(DescribeLiveDomainStreamTranscodeDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->endTime_ == nullptr && this->interval_ == nullptr && this->ownerId_ == nullptr && this->precision_ == nullptr && this->regionId_ == nullptr
        && this->split_ == nullptr && this->startTime_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainStreamTranscodeDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainStreamTranscodeDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeLiveDomainStreamTranscodeDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveDomainStreamTranscodeDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // precision Field Functions 
    bool hasPrecision() const { return this->precision_ != nullptr;};
    void deletePrecision() { this->precision_ = nullptr;};
    inline string getPrecision() const { DARABONBA_PTR_GET_DEFAULT(precision_, "") };
    inline DescribeLiveDomainStreamTranscodeDataRequest& setPrecision(string precision) { DARABONBA_PTR_SET_VALUE(precision_, precision) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveDomainStreamTranscodeDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // split Field Functions 
    bool hasSplit() const { return this->split_ != nullptr;};
    void deleteSplit() { this->split_ = nullptr;};
    inline string getSplit() const { DARABONBA_PTR_GET_DEFAULT(split_, "") };
    inline DescribeLiveDomainStreamTranscodeDataRequest& setSplit(string split) { DARABONBA_PTR_SET_VALUE(split_, split) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainStreamTranscodeDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The streaming domain of the streamer to query.
    // 
    // - You can query a single domain name or multiple domain names at a time. Separate multiple domain names with commas (,).
    // - If this parameter is left empty, the merged data of all live streaming domain names is returned by default.
    // - When you specify DomainName, make sure that the specified domain name is a live streaming domain name and that the user calling this operation has the permissions to operate on the specified domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range to query. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The time granularity of the query. Unit: seconds. Valid values:
    // 
    // - **3600**: by hour.
    // - **86400**: by day.
    // 
    // > If this parameter is left empty, the default granularity is by hour.
    shared_ptr<string> interval_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The time precision of the query. Valid values:
    // - **min** (default): in minutes.
    // - **sec**: in seconds.
    shared_ptr<string> precision_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The grouping key. Valid values:
    // 
    // - **domain**: domain name. If the Split (grouping key) parameter is set to domain, the Domain response parameter takes effect.
    // - **region**: live center region. If the Split (grouping key) parameter is set to region, the Region response parameter takes effect.
    // - **transcode_type**: transcoding type. If the Split (grouping key) parameter is set to transcode_type, the TanscodeType response parameter takes effect.
    // - **resolution**: resolution. If the Split (grouping key) parameter is set to resolution, the Resolution response parameter takes effect.
    // - **fps**: frame rate. If the Split (grouping key) parameter is set to fps, the Fps response parameter takes effect.
    // 
    // You can specify one or more values. Separate multiple values with commas (,).
    // 
    // Default value: `domain,region,transcode_type,resolution,fps`, which means all grouping keys are applied.
    shared_ptr<string> split_ {};
    // The beginning of the time range to query. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format in UTC.
    // 
    // - The minimum data time granularity is 1 hour.
    // - If this parameter is left empty, data from the last 24 hours is read by default.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
