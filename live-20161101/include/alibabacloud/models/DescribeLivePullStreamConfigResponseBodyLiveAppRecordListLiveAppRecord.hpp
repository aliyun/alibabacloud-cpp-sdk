// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPULLSTREAMCONFIGRESPONSEBODYLIVEAPPRECORDLISTLIVEAPPRECORD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPULLSTREAMCONFIGRESPONSEBODYLIVEAPPRECORDLISTLIVEAPPRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(SourceUrl, sourceUrl_);
      DARABONBA_PTR_TO_JSON(SourceUsing, sourceUsing_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(SourceUrl, sourceUrl_);
      DARABONBA_PTR_FROM_JSON(SourceUsing, sourceUsing_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord() = default ;
    DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord(const DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord &) = default ;
    DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord(DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord &&) = default ;
    DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord() = default ;
    DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord& operator=(const DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord &) = default ;
    DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord& operator=(DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->domainName_ == nullptr && return this->endTime_ == nullptr && return this->sourceUrl_ == nullptr && return this->sourceUsing_ == nullptr && return this->startTime_ == nullptr
        && return this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // sourceUrl Field Functions 
    bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
    void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
    inline string sourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
    inline DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


    // sourceUsing Field Functions 
    bool hasSourceUsing() const { return this->sourceUsing_ != nullptr;};
    void deleteSourceUsing() { this->sourceUsing_ = nullptr;};
    inline string sourceUsing() const { DARABONBA_PTR_GET_DEFAULT(sourceUsing_, "") };
    inline DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord& setSourceUsing(string sourceUsing) { DARABONBA_PTR_SET_VALUE(sourceUsing_, sourceUsing) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range for which the configurations were queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The origin server of the live stream.
    std::shared_ptr<string> sourceUrl_ = nullptr;
    // The live stream origin server that you are using.
    std::shared_ptr<string> sourceUsing_ = nullptr;
    // The beginning of the time range for which the configurations were queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
