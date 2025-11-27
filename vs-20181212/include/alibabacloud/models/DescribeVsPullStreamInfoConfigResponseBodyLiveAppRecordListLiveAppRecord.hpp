// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSPULLSTREAMINFOCONFIGRESPONSEBODYLIVEAPPRECORDLISTLIVEAPPRECORD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSPULLSTREAMINFOCONFIGRESPONSEBODYLIVEAPPRECORDLISTLIVEAPPRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(SourceUrl, sourceUrl_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(SourceUrl, sourceUrl_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord() = default ;
    DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord(const DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord &) = default ;
    DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord(DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord &&) = default ;
    DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord() = default ;
    DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord& operator=(const DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord &) = default ;
    DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord& operator=(DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->domainName_ == nullptr && return this->endTime_ == nullptr && return this->sourceUrl_ == nullptr && return this->startTime_ == nullptr && return this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // sourceUrl Field Functions 
    bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
    void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
    inline string sourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
    inline DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> sourceUrl_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
