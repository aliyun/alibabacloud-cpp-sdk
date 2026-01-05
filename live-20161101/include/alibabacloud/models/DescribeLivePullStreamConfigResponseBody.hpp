// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPULLSTREAMCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPULLSTREAMCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePullStreamConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePullStreamConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAppRecordList, liveAppRecordList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePullStreamConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAppRecordList, liveAppRecordList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLivePullStreamConfigResponseBody() = default ;
    DescribeLivePullStreamConfigResponseBody(const DescribeLivePullStreamConfigResponseBody &) = default ;
    DescribeLivePullStreamConfigResponseBody(DescribeLivePullStreamConfigResponseBody &&) = default ;
    DescribeLivePullStreamConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePullStreamConfigResponseBody() = default ;
    DescribeLivePullStreamConfigResponseBody& operator=(const DescribeLivePullStreamConfigResponseBody &) = default ;
    DescribeLivePullStreamConfigResponseBody& operator=(DescribeLivePullStreamConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveAppRecordList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveAppRecordList& obj) { 
        DARABONBA_PTR_TO_JSON(LiveAppRecord, liveAppRecord_);
      };
      friend void from_json(const Darabonba::Json& j, LiveAppRecordList& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveAppRecord, liveAppRecord_);
      };
      LiveAppRecordList() = default ;
      LiveAppRecordList(const LiveAppRecordList &) = default ;
      LiveAppRecordList(LiveAppRecordList &&) = default ;
      LiveAppRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveAppRecordList() = default ;
      LiveAppRecordList& operator=(const LiveAppRecordList &) = default ;
      LiveAppRecordList& operator=(LiveAppRecordList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveAppRecord : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveAppRecord& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(SourceUrl, sourceUrl_);
          DARABONBA_PTR_TO_JSON(SourceUsing, sourceUsing_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
        };
        friend void from_json(const Darabonba::Json& j, LiveAppRecord& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(SourceUrl, sourceUrl_);
          DARABONBA_PTR_FROM_JSON(SourceUsing, sourceUsing_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
        };
        LiveAppRecord() = default ;
        LiveAppRecord(const LiveAppRecord &) = default ;
        LiveAppRecord(LiveAppRecord &&) = default ;
        LiveAppRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveAppRecord() = default ;
        LiveAppRecord& operator=(const LiveAppRecord &) = default ;
        LiveAppRecord& operator=(LiveAppRecord &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->sourceUrl_ == nullptr && this->sourceUsing_ == nullptr && this->startTime_ == nullptr
        && this->streamName_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveAppRecord& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveAppRecord& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline LiveAppRecord& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // sourceUrl Field Functions 
        bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
        void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
        inline string getSourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
        inline LiveAppRecord& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


        // sourceUsing Field Functions 
        bool hasSourceUsing() const { return this->sourceUsing_ != nullptr;};
        void deleteSourceUsing() { this->sourceUsing_ = nullptr;};
        inline string getSourceUsing() const { DARABONBA_PTR_GET_DEFAULT(sourceUsing_, "") };
        inline LiveAppRecord& setSourceUsing(string sourceUsing) { DARABONBA_PTR_SET_VALUE(sourceUsing_, sourceUsing) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline LiveAppRecord& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LiveAppRecord& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


      protected:
        // The name of the application to which the live stream belongs.
        shared_ptr<string> appName_ {};
        // The main streaming domain.
        shared_ptr<string> domainName_ {};
        // The end of the time range for which the configurations were queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> endTime_ {};
        // The origin server of the live stream.
        shared_ptr<string> sourceUrl_ {};
        // The live stream origin server that you are using.
        shared_ptr<string> sourceUsing_ {};
        // The beginning of the time range for which the configurations were queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> startTime_ {};
        // The name of the live stream.
        shared_ptr<string> streamName_ {};
      };

      virtual bool empty() const override { return this->liveAppRecord_ == nullptr; };
      // liveAppRecord Field Functions 
      bool hasLiveAppRecord() const { return this->liveAppRecord_ != nullptr;};
      void deleteLiveAppRecord() { this->liveAppRecord_ = nullptr;};
      inline const vector<LiveAppRecordList::LiveAppRecord> & getLiveAppRecord() const { DARABONBA_PTR_GET_CONST(liveAppRecord_, vector<LiveAppRecordList::LiveAppRecord>) };
      inline vector<LiveAppRecordList::LiveAppRecord> getLiveAppRecord() { DARABONBA_PTR_GET(liveAppRecord_, vector<LiveAppRecordList::LiveAppRecord>) };
      inline LiveAppRecordList& setLiveAppRecord(const vector<LiveAppRecordList::LiveAppRecord> & liveAppRecord) { DARABONBA_PTR_SET_VALUE(liveAppRecord_, liveAppRecord) };
      inline LiveAppRecordList& setLiveAppRecord(vector<LiveAppRecordList::LiveAppRecord> && liveAppRecord) { DARABONBA_PTR_SET_RVALUE(liveAppRecord_, liveAppRecord) };


    protected:
      shared_ptr<vector<LiveAppRecordList::LiveAppRecord>> liveAppRecord_ {};
    };

    virtual bool empty() const override { return this->liveAppRecordList_ == nullptr
        && this->requestId_ == nullptr; };
    // liveAppRecordList Field Functions 
    bool hasLiveAppRecordList() const { return this->liveAppRecordList_ != nullptr;};
    void deleteLiveAppRecordList() { this->liveAppRecordList_ = nullptr;};
    inline const DescribeLivePullStreamConfigResponseBody::LiveAppRecordList & getLiveAppRecordList() const { DARABONBA_PTR_GET_CONST(liveAppRecordList_, DescribeLivePullStreamConfigResponseBody::LiveAppRecordList) };
    inline DescribeLivePullStreamConfigResponseBody::LiveAppRecordList getLiveAppRecordList() { DARABONBA_PTR_GET(liveAppRecordList_, DescribeLivePullStreamConfigResponseBody::LiveAppRecordList) };
    inline DescribeLivePullStreamConfigResponseBody& setLiveAppRecordList(const DescribeLivePullStreamConfigResponseBody::LiveAppRecordList & liveAppRecordList) { DARABONBA_PTR_SET_VALUE(liveAppRecordList_, liveAppRecordList) };
    inline DescribeLivePullStreamConfigResponseBody& setLiveAppRecordList(DescribeLivePullStreamConfigResponseBody::LiveAppRecordList && liveAppRecordList) { DARABONBA_PTR_SET_RVALUE(liveAppRecordList_, liveAppRecordList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLivePullStreamConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the stream pulling configurations.
    shared_ptr<DescribeLivePullStreamConfigResponseBody::LiveAppRecordList> liveAppRecordList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
