// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMETRICDETAILDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMETRICDETAILDATARESPONSEBODY_HPP_
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
  class DescribeLiveStreamMetricDetailDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamMetricDetailDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamDetailData, streamDetailData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamMetricDetailDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamDetailData, streamDetailData_);
    };
    DescribeLiveStreamMetricDetailDataResponseBody() = default ;
    DescribeLiveStreamMetricDetailDataResponseBody(const DescribeLiveStreamMetricDetailDataResponseBody &) = default ;
    DescribeLiveStreamMetricDetailDataResponseBody(DescribeLiveStreamMetricDetailDataResponseBody &&) = default ;
    DescribeLiveStreamMetricDetailDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamMetricDetailDataResponseBody() = default ;
    DescribeLiveStreamMetricDetailDataResponseBody& operator=(const DescribeLiveStreamMetricDetailDataResponseBody &) = default ;
    DescribeLiveStreamMetricDetailDataResponseBody& operator=(DescribeLiveStreamMetricDetailDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StreamDetailData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamDetailData& obj) { 
        DARABONBA_PTR_TO_JSON(StreamData, streamData_);
      };
      friend void from_json(const Darabonba::Json& j, StreamDetailData& obj) { 
        DARABONBA_PTR_FROM_JSON(StreamData, streamData_);
      };
      StreamDetailData() = default ;
      StreamDetailData(const StreamDetailData &) = default ;
      StreamDetailData(StreamDetailData &&) = default ;
      StreamDetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamDetailData() = default ;
      StreamDetailData& operator=(const StreamDetailData &) = default ;
      StreamDetailData& operator=(StreamDetailData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StreamData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StreamData& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(Bps, bps_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(FlvBps, flvBps_);
          DARABONBA_PTR_TO_JSON(FlvCount, flvCount_);
          DARABONBA_PTR_TO_JSON(FlvTraffic, flvTraffic_);
          DARABONBA_PTR_TO_JSON(HlsBps, hlsBps_);
          DARABONBA_PTR_TO_JSON(HlsCount, hlsCount_);
          DARABONBA_PTR_TO_JSON(HlsTraffic, hlsTraffic_);
          DARABONBA_PTR_TO_JSON(NewConns, newConns_);
          DARABONBA_PTR_TO_JSON(P2pBps, p2pBps_);
          DARABONBA_PTR_TO_JSON(P2pCount, p2pCount_);
          DARABONBA_PTR_TO_JSON(P2pTraffic, p2pTraffic_);
          DARABONBA_PTR_TO_JSON(RtmpBps, rtmpBps_);
          DARABONBA_PTR_TO_JSON(RtmpCount, rtmpCount_);
          DARABONBA_PTR_TO_JSON(RtmpTraffic, rtmpTraffic_);
          DARABONBA_PTR_TO_JSON(RtsBps, rtsBps_);
          DARABONBA_PTR_TO_JSON(RtsCount, rtsCount_);
          DARABONBA_PTR_TO_JSON(RtsTraffic, rtsTraffic_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Traffic, traffic_);
        };
        friend void from_json(const Darabonba::Json& j, StreamData& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(Bps, bps_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(FlvBps, flvBps_);
          DARABONBA_PTR_FROM_JSON(FlvCount, flvCount_);
          DARABONBA_PTR_FROM_JSON(FlvTraffic, flvTraffic_);
          DARABONBA_PTR_FROM_JSON(HlsBps, hlsBps_);
          DARABONBA_PTR_FROM_JSON(HlsCount, hlsCount_);
          DARABONBA_PTR_FROM_JSON(HlsTraffic, hlsTraffic_);
          DARABONBA_PTR_FROM_JSON(NewConns, newConns_);
          DARABONBA_PTR_FROM_JSON(P2pBps, p2pBps_);
          DARABONBA_PTR_FROM_JSON(P2pCount, p2pCount_);
          DARABONBA_PTR_FROM_JSON(P2pTraffic, p2pTraffic_);
          DARABONBA_PTR_FROM_JSON(RtmpBps, rtmpBps_);
          DARABONBA_PTR_FROM_JSON(RtmpCount, rtmpCount_);
          DARABONBA_PTR_FROM_JSON(RtmpTraffic, rtmpTraffic_);
          DARABONBA_PTR_FROM_JSON(RtsBps, rtsBps_);
          DARABONBA_PTR_FROM_JSON(RtsCount, rtsCount_);
          DARABONBA_PTR_FROM_JSON(RtsTraffic, rtsTraffic_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(Traffic, traffic_);
        };
        StreamData() = default ;
        StreamData(const StreamData &) = default ;
        StreamData(StreamData &&) = default ;
        StreamData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StreamData() = default ;
        StreamData& operator=(const StreamData &) = default ;
        StreamData& operator=(StreamData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->bps_ == nullptr && this->count_ == nullptr && this->flvBps_ == nullptr && this->flvCount_ == nullptr && this->flvTraffic_ == nullptr
        && this->hlsBps_ == nullptr && this->hlsCount_ == nullptr && this->hlsTraffic_ == nullptr && this->newConns_ == nullptr && this->p2pBps_ == nullptr
        && this->p2pCount_ == nullptr && this->p2pTraffic_ == nullptr && this->rtmpBps_ == nullptr && this->rtmpCount_ == nullptr && this->rtmpTraffic_ == nullptr
        && this->rtsBps_ == nullptr && this->rtsCount_ == nullptr && this->rtsTraffic_ == nullptr && this->streamName_ == nullptr && this->timeStamp_ == nullptr
        && this->traffic_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline StreamData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // bps Field Functions 
        bool hasBps() const { return this->bps_ != nullptr;};
        void deleteBps() { this->bps_ = nullptr;};
        inline float getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0.0) };
        inline StreamData& setBps(float bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline StreamData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // flvBps Field Functions 
        bool hasFlvBps() const { return this->flvBps_ != nullptr;};
        void deleteFlvBps() { this->flvBps_ = nullptr;};
        inline float getFlvBps() const { DARABONBA_PTR_GET_DEFAULT(flvBps_, 0.0) };
        inline StreamData& setFlvBps(float flvBps) { DARABONBA_PTR_SET_VALUE(flvBps_, flvBps) };


        // flvCount Field Functions 
        bool hasFlvCount() const { return this->flvCount_ != nullptr;};
        void deleteFlvCount() { this->flvCount_ = nullptr;};
        inline int64_t getFlvCount() const { DARABONBA_PTR_GET_DEFAULT(flvCount_, 0L) };
        inline StreamData& setFlvCount(int64_t flvCount) { DARABONBA_PTR_SET_VALUE(flvCount_, flvCount) };


        // flvTraffic Field Functions 
        bool hasFlvTraffic() const { return this->flvTraffic_ != nullptr;};
        void deleteFlvTraffic() { this->flvTraffic_ = nullptr;};
        inline int64_t getFlvTraffic() const { DARABONBA_PTR_GET_DEFAULT(flvTraffic_, 0L) };
        inline StreamData& setFlvTraffic(int64_t flvTraffic) { DARABONBA_PTR_SET_VALUE(flvTraffic_, flvTraffic) };


        // hlsBps Field Functions 
        bool hasHlsBps() const { return this->hlsBps_ != nullptr;};
        void deleteHlsBps() { this->hlsBps_ = nullptr;};
        inline float getHlsBps() const { DARABONBA_PTR_GET_DEFAULT(hlsBps_, 0.0) };
        inline StreamData& setHlsBps(float hlsBps) { DARABONBA_PTR_SET_VALUE(hlsBps_, hlsBps) };


        // hlsCount Field Functions 
        bool hasHlsCount() const { return this->hlsCount_ != nullptr;};
        void deleteHlsCount() { this->hlsCount_ = nullptr;};
        inline int64_t getHlsCount() const { DARABONBA_PTR_GET_DEFAULT(hlsCount_, 0L) };
        inline StreamData& setHlsCount(int64_t hlsCount) { DARABONBA_PTR_SET_VALUE(hlsCount_, hlsCount) };


        // hlsTraffic Field Functions 
        bool hasHlsTraffic() const { return this->hlsTraffic_ != nullptr;};
        void deleteHlsTraffic() { this->hlsTraffic_ = nullptr;};
        inline int64_t getHlsTraffic() const { DARABONBA_PTR_GET_DEFAULT(hlsTraffic_, 0L) };
        inline StreamData& setHlsTraffic(int64_t hlsTraffic) { DARABONBA_PTR_SET_VALUE(hlsTraffic_, hlsTraffic) };


        // newConns Field Functions 
        bool hasNewConns() const { return this->newConns_ != nullptr;};
        void deleteNewConns() { this->newConns_ = nullptr;};
        inline string getNewConns() const { DARABONBA_PTR_GET_DEFAULT(newConns_, "") };
        inline StreamData& setNewConns(string newConns) { DARABONBA_PTR_SET_VALUE(newConns_, newConns) };


        // p2pBps Field Functions 
        bool hasP2pBps() const { return this->p2pBps_ != nullptr;};
        void deleteP2pBps() { this->p2pBps_ = nullptr;};
        inline float getP2pBps() const { DARABONBA_PTR_GET_DEFAULT(p2pBps_, 0.0) };
        inline StreamData& setP2pBps(float p2pBps) { DARABONBA_PTR_SET_VALUE(p2pBps_, p2pBps) };


        // p2pCount Field Functions 
        bool hasP2pCount() const { return this->p2pCount_ != nullptr;};
        void deleteP2pCount() { this->p2pCount_ = nullptr;};
        inline int64_t getP2pCount() const { DARABONBA_PTR_GET_DEFAULT(p2pCount_, 0L) };
        inline StreamData& setP2pCount(int64_t p2pCount) { DARABONBA_PTR_SET_VALUE(p2pCount_, p2pCount) };


        // p2pTraffic Field Functions 
        bool hasP2pTraffic() const { return this->p2pTraffic_ != nullptr;};
        void deleteP2pTraffic() { this->p2pTraffic_ = nullptr;};
        inline int64_t getP2pTraffic() const { DARABONBA_PTR_GET_DEFAULT(p2pTraffic_, 0L) };
        inline StreamData& setP2pTraffic(int64_t p2pTraffic) { DARABONBA_PTR_SET_VALUE(p2pTraffic_, p2pTraffic) };


        // rtmpBps Field Functions 
        bool hasRtmpBps() const { return this->rtmpBps_ != nullptr;};
        void deleteRtmpBps() { this->rtmpBps_ = nullptr;};
        inline float getRtmpBps() const { DARABONBA_PTR_GET_DEFAULT(rtmpBps_, 0.0) };
        inline StreamData& setRtmpBps(float rtmpBps) { DARABONBA_PTR_SET_VALUE(rtmpBps_, rtmpBps) };


        // rtmpCount Field Functions 
        bool hasRtmpCount() const { return this->rtmpCount_ != nullptr;};
        void deleteRtmpCount() { this->rtmpCount_ = nullptr;};
        inline int64_t getRtmpCount() const { DARABONBA_PTR_GET_DEFAULT(rtmpCount_, 0L) };
        inline StreamData& setRtmpCount(int64_t rtmpCount) { DARABONBA_PTR_SET_VALUE(rtmpCount_, rtmpCount) };


        // rtmpTraffic Field Functions 
        bool hasRtmpTraffic() const { return this->rtmpTraffic_ != nullptr;};
        void deleteRtmpTraffic() { this->rtmpTraffic_ = nullptr;};
        inline int64_t getRtmpTraffic() const { DARABONBA_PTR_GET_DEFAULT(rtmpTraffic_, 0L) };
        inline StreamData& setRtmpTraffic(int64_t rtmpTraffic) { DARABONBA_PTR_SET_VALUE(rtmpTraffic_, rtmpTraffic) };


        // rtsBps Field Functions 
        bool hasRtsBps() const { return this->rtsBps_ != nullptr;};
        void deleteRtsBps() { this->rtsBps_ = nullptr;};
        inline float getRtsBps() const { DARABONBA_PTR_GET_DEFAULT(rtsBps_, 0.0) };
        inline StreamData& setRtsBps(float rtsBps) { DARABONBA_PTR_SET_VALUE(rtsBps_, rtsBps) };


        // rtsCount Field Functions 
        bool hasRtsCount() const { return this->rtsCount_ != nullptr;};
        void deleteRtsCount() { this->rtsCount_ = nullptr;};
        inline int64_t getRtsCount() const { DARABONBA_PTR_GET_DEFAULT(rtsCount_, 0L) };
        inline StreamData& setRtsCount(int64_t rtsCount) { DARABONBA_PTR_SET_VALUE(rtsCount_, rtsCount) };


        // rtsTraffic Field Functions 
        bool hasRtsTraffic() const { return this->rtsTraffic_ != nullptr;};
        void deleteRtsTraffic() { this->rtsTraffic_ = nullptr;};
        inline int64_t getRtsTraffic() const { DARABONBA_PTR_GET_DEFAULT(rtsTraffic_, 0L) };
        inline StreamData& setRtsTraffic(int64_t rtsTraffic) { DARABONBA_PTR_SET_VALUE(rtsTraffic_, rtsTraffic) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline StreamData& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline StreamData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // traffic Field Functions 
        bool hasTraffic() const { return this->traffic_ != nullptr;};
        void deleteTraffic() { this->traffic_ = nullptr;};
        inline int64_t getTraffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0L) };
        inline StreamData& setTraffic(int64_t traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


      protected:
        // The name of the application.
        shared_ptr<string> appName_ {};
        // The total bandwidth consumed by the stream per minute. Unit: bit/s.
        shared_ptr<float> bps_ {};
        // The total number of online viewers for the stream per minute.
        shared_ptr<int64_t> count_ {};
        // The bandwidth over the Flash Video (FLV) protocol. Unit: bit/s.
        // 
        // >  This parameter is not returned if no traffic is generated over the protocol.
        shared_ptr<float> flvBps_ {};
        // The number of online viewers over the FLV protocol.
        // 
        // >  This parameter is not returned if no traffic is generated over the protocol.
        shared_ptr<int64_t> flvCount_ {};
        // The amount of traffic over the FLV protocol. Unit: bytes.
        // 
        // >  This parameter is not returned if no traffic is generated over the protocol.
        shared_ptr<int64_t> flvTraffic_ {};
        // The bandwidth over the HTTP Live Streaming (HLS) protocol. Unit: bit/s.
        // 
        // >  This parameter is not returned if no traffic is generated over the protocol.
        shared_ptr<float> hlsBps_ {};
        // The number of online viewers over the HLS protocol.
        // 
        // >  Currently, this parameter is not supported.
        shared_ptr<int64_t> hlsCount_ {};
        // The amount of traffic over the HLS protocol. Unit: bytes.
        // 
        // >  This parameter is not returned if no traffic is generated over the protocol.
        shared_ptr<int64_t> hlsTraffic_ {};
        // Number of new connections established per minute.
        shared_ptr<string> newConns_ {};
        // The bandwidth over the P2P protocol. Unit: bit/s.
        // 
        // >  This parameter is not returned if no traffic is generated over the protocol.
        shared_ptr<float> p2pBps_ {};
        // The number of online viewers over the P2P protocol.
        // 
        // >  This parameter is not returned if no traffic is generated over the protocol.
        shared_ptr<int64_t> p2pCount_ {};
        // The amount of traffic over the peer-to-peer (P2P) protocol. Unit: bytes.
        // 
        // >  This parameter is not returned if no traffic is generated over the protocol.
        shared_ptr<int64_t> p2pTraffic_ {};
        // The bandwidth over the Real-Time Messaging Protocol (RTMP) protocol. Unit: bit/s.
        // 
        // >  This parameter is not returned if no traffic is generated over the protocol.
        shared_ptr<float> rtmpBps_ {};
        // The number of online viewers over the RTMP protocol.
        // 
        // >  This parameter is not returned if no traffic is generated over the protocol.
        shared_ptr<int64_t> rtmpCount_ {};
        // The amount of traffic over the RTMP protocol. Unit: bytes.
        // 
        // >  This parameter is not returned if no traffic is generated over the protocol.
        shared_ptr<int64_t> rtmpTraffic_ {};
        // The bandwidth over the RTS protocol. Unit: bit/s.
        // 
        // >  This parameter is not returned if no traffic is generated over the protocol.
        shared_ptr<float> rtsBps_ {};
        // The number of online viewers over the Real-Time Streaming (RTS) protocol.
        // 
        // >  This parameter is not returned if no traffic is generated over the protocol.
        shared_ptr<int64_t> rtsCount_ {};
        // The amount of traffic over the RTS protocol. Unit: bytes.
        // 
        // >  This parameter is not returned if no traffic is generated over the protocol.
        shared_ptr<int64_t> rtsTraffic_ {};
        // The name of the stream.
        shared_ptr<string> streamName_ {};
        // The timestamp of the returned data.
        shared_ptr<string> timeStamp_ {};
        // The total amount of traffic consumed by the stream per minute. Unit: bytes.
        shared_ptr<int64_t> traffic_ {};
      };

      virtual bool empty() const override { return this->streamData_ == nullptr; };
      // streamData Field Functions 
      bool hasStreamData() const { return this->streamData_ != nullptr;};
      void deleteStreamData() { this->streamData_ = nullptr;};
      inline const vector<StreamDetailData::StreamData> & getStreamData() const { DARABONBA_PTR_GET_CONST(streamData_, vector<StreamDetailData::StreamData>) };
      inline vector<StreamDetailData::StreamData> getStreamData() { DARABONBA_PTR_GET(streamData_, vector<StreamDetailData::StreamData>) };
      inline StreamDetailData& setStreamData(const vector<StreamDetailData::StreamData> & streamData) { DARABONBA_PTR_SET_VALUE(streamData_, streamData) };
      inline StreamDetailData& setStreamData(vector<StreamDetailData::StreamData> && streamData) { DARABONBA_PTR_SET_RVALUE(streamData_, streamData) };


    protected:
      shared_ptr<vector<StreamDetailData::StreamData>> streamData_ {};
    };

    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->endTime_ == nullptr && this->nextPageToken_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr
        && this->streamDetailData_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamMetricDetailDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveStreamMetricDetailDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline DescribeLiveStreamMetricDetailDataResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamMetricDetailDataResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamMetricDetailDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveStreamMetricDetailDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamDetailData Field Functions 
    bool hasStreamDetailData() const { return this->streamDetailData_ != nullptr;};
    void deleteStreamDetailData() { this->streamDetailData_ = nullptr;};
    inline const DescribeLiveStreamMetricDetailDataResponseBody::StreamDetailData & getStreamDetailData() const { DARABONBA_PTR_GET_CONST(streamDetailData_, DescribeLiveStreamMetricDetailDataResponseBody::StreamDetailData) };
    inline DescribeLiveStreamMetricDetailDataResponseBody::StreamDetailData getStreamDetailData() { DARABONBA_PTR_GET(streamDetailData_, DescribeLiveStreamMetricDetailDataResponseBody::StreamDetailData) };
    inline DescribeLiveStreamMetricDetailDataResponseBody& setStreamDetailData(const DescribeLiveStreamMetricDetailDataResponseBody::StreamDetailData & streamDetailData) { DARABONBA_PTR_SET_VALUE(streamDetailData_, streamDetailData) };
    inline DescribeLiveStreamMetricDetailDataResponseBody& setStreamDetailData(DescribeLiveStreamMetricDetailDataResponseBody::StreamDetailData && streamDetailData) { DARABONBA_PTR_SET_RVALUE(streamDetailData_, streamDetailData) };


  protected:
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The token that determines the start point of the next query. This parameter is returned if more data results are available.
    shared_ptr<string> nextPageToken_ {};
    // The number of rows returned.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
    // The data array returned.
    shared_ptr<DescribeLiveStreamMetricDetailDataResponseBody::StreamDetailData> streamDetailData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
