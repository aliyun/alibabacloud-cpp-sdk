// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMERGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMERGERESPONSEBODY_HPP_
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
  class DescribeLiveStreamMergeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamMergeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamMergeList, liveStreamMergeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamMergeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamMergeList, liveStreamMergeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamMergeResponseBody() = default ;
    DescribeLiveStreamMergeResponseBody(const DescribeLiveStreamMergeResponseBody &) = default ;
    DescribeLiveStreamMergeResponseBody(DescribeLiveStreamMergeResponseBody &&) = default ;
    DescribeLiveStreamMergeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamMergeResponseBody() = default ;
    DescribeLiveStreamMergeResponseBody& operator=(const DescribeLiveStreamMergeResponseBody &) = default ;
    DescribeLiveStreamMergeResponseBody& operator=(DescribeLiveStreamMergeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveStreamMergeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveStreamMergeList& obj) { 
        DARABONBA_PTR_TO_JSON(LiveStreamMerge, liveStreamMerge_);
      };
      friend void from_json(const Darabonba::Json& j, LiveStreamMergeList& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveStreamMerge, liveStreamMerge_);
      };
      LiveStreamMergeList() = default ;
      LiveStreamMergeList(const LiveStreamMergeList &) = default ;
      LiveStreamMergeList(LiveStreamMergeList &&) = default ;
      LiveStreamMergeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveStreamMergeList() = default ;
      LiveStreamMergeList& operator=(const LiveStreamMergeList &) = default ;
      LiveStreamMergeList& operator=(LiveStreamMergeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveStreamMerge : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveStreamMerge& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AppUsing, appUsing_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(ExtraInAppStreams, extraInAppStreams_);
          DARABONBA_PTR_TO_JSON(InAppName1, inAppName1_);
          DARABONBA_PTR_TO_JSON(InAppName2, inAppName2_);
          DARABONBA_PTR_TO_JSON(InStreamName1, inStreamName1_);
          DARABONBA_PTR_TO_JSON(InStreamName2, inStreamName2_);
          DARABONBA_PTR_TO_JSON(LiveMerger, liveMerger_);
          DARABONBA_PTR_TO_JSON(MergeParameters, mergeParameters_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(StreamUsing, streamUsing_);
        };
        friend void from_json(const Darabonba::Json& j, LiveStreamMerge& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AppUsing, appUsing_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(ExtraInAppStreams, extraInAppStreams_);
          DARABONBA_PTR_FROM_JSON(InAppName1, inAppName1_);
          DARABONBA_PTR_FROM_JSON(InAppName2, inAppName2_);
          DARABONBA_PTR_FROM_JSON(InStreamName1, inStreamName1_);
          DARABONBA_PTR_FROM_JSON(InStreamName2, inStreamName2_);
          DARABONBA_PTR_FROM_JSON(LiveMerger, liveMerger_);
          DARABONBA_PTR_FROM_JSON(MergeParameters, mergeParameters_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(StreamUsing, streamUsing_);
        };
        LiveStreamMerge() = default ;
        LiveStreamMerge(const LiveStreamMerge &) = default ;
        LiveStreamMerge(LiveStreamMerge &&) = default ;
        LiveStreamMerge(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveStreamMerge() = default ;
        LiveStreamMerge& operator=(const LiveStreamMerge &) = default ;
        LiveStreamMerge& operator=(LiveStreamMerge &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->appUsing_ == nullptr && this->domainName_ == nullptr && this->endTime_ == nullptr && this->extraInAppStreams_ == nullptr && this->inAppName1_ == nullptr
        && this->inAppName2_ == nullptr && this->inStreamName1_ == nullptr && this->inStreamName2_ == nullptr && this->liveMerger_ == nullptr && this->mergeParameters_ == nullptr
        && this->protocol_ == nullptr && this->startTime_ == nullptr && this->streamName_ == nullptr && this->streamUsing_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveStreamMerge& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // appUsing Field Functions 
        bool hasAppUsing() const { return this->appUsing_ != nullptr;};
        void deleteAppUsing() { this->appUsing_ = nullptr;};
        inline string getAppUsing() const { DARABONBA_PTR_GET_DEFAULT(appUsing_, "") };
        inline LiveStreamMerge& setAppUsing(string appUsing) { DARABONBA_PTR_SET_VALUE(appUsing_, appUsing) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveStreamMerge& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline LiveStreamMerge& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // extraInAppStreams Field Functions 
        bool hasExtraInAppStreams() const { return this->extraInAppStreams_ != nullptr;};
        void deleteExtraInAppStreams() { this->extraInAppStreams_ = nullptr;};
        inline string getExtraInAppStreams() const { DARABONBA_PTR_GET_DEFAULT(extraInAppStreams_, "") };
        inline LiveStreamMerge& setExtraInAppStreams(string extraInAppStreams) { DARABONBA_PTR_SET_VALUE(extraInAppStreams_, extraInAppStreams) };


        // inAppName1 Field Functions 
        bool hasInAppName1() const { return this->inAppName1_ != nullptr;};
        void deleteInAppName1() { this->inAppName1_ = nullptr;};
        inline string getInAppName1() const { DARABONBA_PTR_GET_DEFAULT(inAppName1_, "") };
        inline LiveStreamMerge& setInAppName1(string inAppName1) { DARABONBA_PTR_SET_VALUE(inAppName1_, inAppName1) };


        // inAppName2 Field Functions 
        bool hasInAppName2() const { return this->inAppName2_ != nullptr;};
        void deleteInAppName2() { this->inAppName2_ = nullptr;};
        inline string getInAppName2() const { DARABONBA_PTR_GET_DEFAULT(inAppName2_, "") };
        inline LiveStreamMerge& setInAppName2(string inAppName2) { DARABONBA_PTR_SET_VALUE(inAppName2_, inAppName2) };


        // inStreamName1 Field Functions 
        bool hasInStreamName1() const { return this->inStreamName1_ != nullptr;};
        void deleteInStreamName1() { this->inStreamName1_ = nullptr;};
        inline string getInStreamName1() const { DARABONBA_PTR_GET_DEFAULT(inStreamName1_, "") };
        inline LiveStreamMerge& setInStreamName1(string inStreamName1) { DARABONBA_PTR_SET_VALUE(inStreamName1_, inStreamName1) };


        // inStreamName2 Field Functions 
        bool hasInStreamName2() const { return this->inStreamName2_ != nullptr;};
        void deleteInStreamName2() { this->inStreamName2_ = nullptr;};
        inline string getInStreamName2() const { DARABONBA_PTR_GET_DEFAULT(inStreamName2_, "") };
        inline LiveStreamMerge& setInStreamName2(string inStreamName2) { DARABONBA_PTR_SET_VALUE(inStreamName2_, inStreamName2) };


        // liveMerger Field Functions 
        bool hasLiveMerger() const { return this->liveMerger_ != nullptr;};
        void deleteLiveMerger() { this->liveMerger_ = nullptr;};
        inline string getLiveMerger() const { DARABONBA_PTR_GET_DEFAULT(liveMerger_, "") };
        inline LiveStreamMerge& setLiveMerger(string liveMerger) { DARABONBA_PTR_SET_VALUE(liveMerger_, liveMerger) };


        // mergeParameters Field Functions 
        bool hasMergeParameters() const { return this->mergeParameters_ != nullptr;};
        void deleteMergeParameters() { this->mergeParameters_ = nullptr;};
        inline string getMergeParameters() const { DARABONBA_PTR_GET_DEFAULT(mergeParameters_, "") };
        inline LiveStreamMerge& setMergeParameters(string mergeParameters) { DARABONBA_PTR_SET_VALUE(mergeParameters_, mergeParameters) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline LiveStreamMerge& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline LiveStreamMerge& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LiveStreamMerge& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // streamUsing Field Functions 
        bool hasStreamUsing() const { return this->streamUsing_ != nullptr;};
        void deleteStreamUsing() { this->streamUsing_ = nullptr;};
        inline string getStreamUsing() const { DARABONBA_PTR_GET_DEFAULT(streamUsing_, "") };
        inline LiveStreamMerge& setStreamUsing(string streamUsing) { DARABONBA_PTR_SET_VALUE(streamUsing_, streamUsing) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<string> appUsing_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> extraInAppStreams_ {};
        shared_ptr<string> inAppName1_ {};
        shared_ptr<string> inAppName2_ {};
        shared_ptr<string> inStreamName1_ {};
        shared_ptr<string> inStreamName2_ {};
        shared_ptr<string> liveMerger_ {};
        shared_ptr<string> mergeParameters_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> streamName_ {};
        shared_ptr<string> streamUsing_ {};
      };

      virtual bool empty() const override { return this->liveStreamMerge_ == nullptr; };
      // liveStreamMerge Field Functions 
      bool hasLiveStreamMerge() const { return this->liveStreamMerge_ != nullptr;};
      void deleteLiveStreamMerge() { this->liveStreamMerge_ = nullptr;};
      inline const vector<LiveStreamMergeList::LiveStreamMerge> & getLiveStreamMerge() const { DARABONBA_PTR_GET_CONST(liveStreamMerge_, vector<LiveStreamMergeList::LiveStreamMerge>) };
      inline vector<LiveStreamMergeList::LiveStreamMerge> getLiveStreamMerge() { DARABONBA_PTR_GET(liveStreamMerge_, vector<LiveStreamMergeList::LiveStreamMerge>) };
      inline LiveStreamMergeList& setLiveStreamMerge(const vector<LiveStreamMergeList::LiveStreamMerge> & liveStreamMerge) { DARABONBA_PTR_SET_VALUE(liveStreamMerge_, liveStreamMerge) };
      inline LiveStreamMergeList& setLiveStreamMerge(vector<LiveStreamMergeList::LiveStreamMerge> && liveStreamMerge) { DARABONBA_PTR_SET_RVALUE(liveStreamMerge_, liveStreamMerge) };


    protected:
      shared_ptr<vector<LiveStreamMergeList::LiveStreamMerge>> liveStreamMerge_ {};
    };

    virtual bool empty() const override { return this->liveStreamMergeList_ == nullptr
        && this->requestId_ == nullptr; };
    // liveStreamMergeList Field Functions 
    bool hasLiveStreamMergeList() const { return this->liveStreamMergeList_ != nullptr;};
    void deleteLiveStreamMergeList() { this->liveStreamMergeList_ = nullptr;};
    inline const DescribeLiveStreamMergeResponseBody::LiveStreamMergeList & getLiveStreamMergeList() const { DARABONBA_PTR_GET_CONST(liveStreamMergeList_, DescribeLiveStreamMergeResponseBody::LiveStreamMergeList) };
    inline DescribeLiveStreamMergeResponseBody::LiveStreamMergeList getLiveStreamMergeList() { DARABONBA_PTR_GET(liveStreamMergeList_, DescribeLiveStreamMergeResponseBody::LiveStreamMergeList) };
    inline DescribeLiveStreamMergeResponseBody& setLiveStreamMergeList(const DescribeLiveStreamMergeResponseBody::LiveStreamMergeList & liveStreamMergeList) { DARABONBA_PTR_SET_VALUE(liveStreamMergeList_, liveStreamMergeList) };
    inline DescribeLiveStreamMergeResponseBody& setLiveStreamMergeList(DescribeLiveStreamMergeResponseBody::LiveStreamMergeList && liveStreamMergeList) { DARABONBA_PTR_SET_RVALUE(liveStreamMergeList_, liveStreamMergeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamMergeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLiveStreamMergeResponseBody::LiveStreamMergeList> liveStreamMergeList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
