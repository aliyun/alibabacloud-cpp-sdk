// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUSERSTREAMMETRICDATARESPONSEBODYSTREAMDETAILDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUSERSTREAMMETRICDATARESPONSEBODYSTREAMDETAILDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& obj) { 
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
    DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData() = default ;
    DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData(const DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData &) = default ;
    DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData(DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData &&) = default ;
    DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData() = default ;
    DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& operator=(const DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData &) = default ;
    DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& operator=(DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->bps_ != nullptr && this->count_ != nullptr && this->flvBps_ != nullptr && this->flvCount_ != nullptr && this->flvTraffic_ != nullptr
        && this->hlsBps_ != nullptr && this->hlsCount_ != nullptr && this->hlsTraffic_ != nullptr && this->newConns_ != nullptr && this->p2pBps_ != nullptr
        && this->p2pCount_ != nullptr && this->p2pTraffic_ != nullptr && this->rtmpBps_ != nullptr && this->rtmpCount_ != nullptr && this->rtmpTraffic_ != nullptr
        && this->rtsBps_ != nullptr && this->rtsCount_ != nullptr && this->rtsTraffic_ != nullptr && this->streamName_ != nullptr && this->timeStamp_ != nullptr
        && this->traffic_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline float bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0.0) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setBps(float bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // flvBps Field Functions 
    bool hasFlvBps() const { return this->flvBps_ != nullptr;};
    void deleteFlvBps() { this->flvBps_ = nullptr;};
    inline float flvBps() const { DARABONBA_PTR_GET_DEFAULT(flvBps_, 0.0) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setFlvBps(float flvBps) { DARABONBA_PTR_SET_VALUE(flvBps_, flvBps) };


    // flvCount Field Functions 
    bool hasFlvCount() const { return this->flvCount_ != nullptr;};
    void deleteFlvCount() { this->flvCount_ = nullptr;};
    inline int64_t flvCount() const { DARABONBA_PTR_GET_DEFAULT(flvCount_, 0L) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setFlvCount(int64_t flvCount) { DARABONBA_PTR_SET_VALUE(flvCount_, flvCount) };


    // flvTraffic Field Functions 
    bool hasFlvTraffic() const { return this->flvTraffic_ != nullptr;};
    void deleteFlvTraffic() { this->flvTraffic_ = nullptr;};
    inline double flvTraffic() const { DARABONBA_PTR_GET_DEFAULT(flvTraffic_, 0.0) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setFlvTraffic(double flvTraffic) { DARABONBA_PTR_SET_VALUE(flvTraffic_, flvTraffic) };


    // hlsBps Field Functions 
    bool hasHlsBps() const { return this->hlsBps_ != nullptr;};
    void deleteHlsBps() { this->hlsBps_ = nullptr;};
    inline float hlsBps() const { DARABONBA_PTR_GET_DEFAULT(hlsBps_, 0.0) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setHlsBps(float hlsBps) { DARABONBA_PTR_SET_VALUE(hlsBps_, hlsBps) };


    // hlsCount Field Functions 
    bool hasHlsCount() const { return this->hlsCount_ != nullptr;};
    void deleteHlsCount() { this->hlsCount_ = nullptr;};
    inline int64_t hlsCount() const { DARABONBA_PTR_GET_DEFAULT(hlsCount_, 0L) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setHlsCount(int64_t hlsCount) { DARABONBA_PTR_SET_VALUE(hlsCount_, hlsCount) };


    // hlsTraffic Field Functions 
    bool hasHlsTraffic() const { return this->hlsTraffic_ != nullptr;};
    void deleteHlsTraffic() { this->hlsTraffic_ = nullptr;};
    inline double hlsTraffic() const { DARABONBA_PTR_GET_DEFAULT(hlsTraffic_, 0.0) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setHlsTraffic(double hlsTraffic) { DARABONBA_PTR_SET_VALUE(hlsTraffic_, hlsTraffic) };


    // newConns Field Functions 
    bool hasNewConns() const { return this->newConns_ != nullptr;};
    void deleteNewConns() { this->newConns_ = nullptr;};
    inline int64_t newConns() const { DARABONBA_PTR_GET_DEFAULT(newConns_, 0L) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setNewConns(int64_t newConns) { DARABONBA_PTR_SET_VALUE(newConns_, newConns) };


    // p2pBps Field Functions 
    bool hasP2pBps() const { return this->p2pBps_ != nullptr;};
    void deleteP2pBps() { this->p2pBps_ = nullptr;};
    inline float p2pBps() const { DARABONBA_PTR_GET_DEFAULT(p2pBps_, 0.0) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setP2pBps(float p2pBps) { DARABONBA_PTR_SET_VALUE(p2pBps_, p2pBps) };


    // p2pCount Field Functions 
    bool hasP2pCount() const { return this->p2pCount_ != nullptr;};
    void deleteP2pCount() { this->p2pCount_ = nullptr;};
    inline int64_t p2pCount() const { DARABONBA_PTR_GET_DEFAULT(p2pCount_, 0L) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setP2pCount(int64_t p2pCount) { DARABONBA_PTR_SET_VALUE(p2pCount_, p2pCount) };


    // p2pTraffic Field Functions 
    bool hasP2pTraffic() const { return this->p2pTraffic_ != nullptr;};
    void deleteP2pTraffic() { this->p2pTraffic_ = nullptr;};
    inline double p2pTraffic() const { DARABONBA_PTR_GET_DEFAULT(p2pTraffic_, 0.0) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setP2pTraffic(double p2pTraffic) { DARABONBA_PTR_SET_VALUE(p2pTraffic_, p2pTraffic) };


    // rtmpBps Field Functions 
    bool hasRtmpBps() const { return this->rtmpBps_ != nullptr;};
    void deleteRtmpBps() { this->rtmpBps_ = nullptr;};
    inline float rtmpBps() const { DARABONBA_PTR_GET_DEFAULT(rtmpBps_, 0.0) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setRtmpBps(float rtmpBps) { DARABONBA_PTR_SET_VALUE(rtmpBps_, rtmpBps) };


    // rtmpCount Field Functions 
    bool hasRtmpCount() const { return this->rtmpCount_ != nullptr;};
    void deleteRtmpCount() { this->rtmpCount_ = nullptr;};
    inline int64_t rtmpCount() const { DARABONBA_PTR_GET_DEFAULT(rtmpCount_, 0L) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setRtmpCount(int64_t rtmpCount) { DARABONBA_PTR_SET_VALUE(rtmpCount_, rtmpCount) };


    // rtmpTraffic Field Functions 
    bool hasRtmpTraffic() const { return this->rtmpTraffic_ != nullptr;};
    void deleteRtmpTraffic() { this->rtmpTraffic_ = nullptr;};
    inline double rtmpTraffic() const { DARABONBA_PTR_GET_DEFAULT(rtmpTraffic_, 0.0) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setRtmpTraffic(double rtmpTraffic) { DARABONBA_PTR_SET_VALUE(rtmpTraffic_, rtmpTraffic) };


    // rtsBps Field Functions 
    bool hasRtsBps() const { return this->rtsBps_ != nullptr;};
    void deleteRtsBps() { this->rtsBps_ = nullptr;};
    inline double rtsBps() const { DARABONBA_PTR_GET_DEFAULT(rtsBps_, 0.0) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setRtsBps(double rtsBps) { DARABONBA_PTR_SET_VALUE(rtsBps_, rtsBps) };


    // rtsCount Field Functions 
    bool hasRtsCount() const { return this->rtsCount_ != nullptr;};
    void deleteRtsCount() { this->rtsCount_ = nullptr;};
    inline int64_t rtsCount() const { DARABONBA_PTR_GET_DEFAULT(rtsCount_, 0L) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setRtsCount(int64_t rtsCount) { DARABONBA_PTR_SET_VALUE(rtsCount_, rtsCount) };


    // rtsTraffic Field Functions 
    bool hasRtsTraffic() const { return this->rtsTraffic_ != nullptr;};
    void deleteRtsTraffic() { this->rtsTraffic_ = nullptr;};
    inline double rtsTraffic() const { DARABONBA_PTR_GET_DEFAULT(rtsTraffic_, 0.0) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setRtsTraffic(double rtsTraffic) { DARABONBA_PTR_SET_VALUE(rtsTraffic_, rtsTraffic) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // traffic Field Functions 
    bool hasTraffic() const { return this->traffic_ != nullptr;};
    void deleteTraffic() { this->traffic_ = nullptr;};
    inline double traffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0.0) };
    inline DescribeLiveUserStreamMetricDataResponseBodyStreamDetailData& setTraffic(double traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<float> bps_ = nullptr;
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<float> flvBps_ = nullptr;
    std::shared_ptr<int64_t> flvCount_ = nullptr;
    std::shared_ptr<double> flvTraffic_ = nullptr;
    std::shared_ptr<float> hlsBps_ = nullptr;
    std::shared_ptr<int64_t> hlsCount_ = nullptr;
    std::shared_ptr<double> hlsTraffic_ = nullptr;
    std::shared_ptr<int64_t> newConns_ = nullptr;
    std::shared_ptr<float> p2pBps_ = nullptr;
    std::shared_ptr<int64_t> p2pCount_ = nullptr;
    std::shared_ptr<double> p2pTraffic_ = nullptr;
    std::shared_ptr<float> rtmpBps_ = nullptr;
    std::shared_ptr<int64_t> rtmpCount_ = nullptr;
    std::shared_ptr<double> rtmpTraffic_ = nullptr;
    std::shared_ptr<double> rtsBps_ = nullptr;
    std::shared_ptr<int64_t> rtsCount_ = nullptr;
    std::shared_ptr<double> rtsTraffic_ = nullptr;
    std::shared_ptr<string> streamName_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
    std::shared_ptr<double> traffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
