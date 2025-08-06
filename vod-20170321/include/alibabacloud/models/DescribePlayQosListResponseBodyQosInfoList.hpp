// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYQOSLISTRESPONSEBODYQOSINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYQOSLISTRESPONSEBODYQOSINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayQosListResponseBodyQosInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayQosListResponseBodyQosInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(QosFirstFrame, qosFirstFrame_);
      DARABONBA_PTR_TO_JSON(QosKbps, qosKbps_);
      DARABONBA_PTR_TO_JSON(QosPlay, qosPlay_);
      DARABONBA_PTR_TO_JSON(QosPlayFail, qosPlayFail_);
      DARABONBA_PTR_TO_JSON(QosRealPlay, qosRealPlay_);
      DARABONBA_PTR_TO_JSON(QosSecondPlayRate, qosSecondPlayRate_);
      DARABONBA_PTR_TO_JSON(QosSeedFailRate, qosSeedFailRate_);
      DARABONBA_PTR_TO_JSON(QosSeekDuration, qosSeekDuration_);
      DARABONBA_PTR_TO_JSON(QosSlowPlayRate, qosSlowPlayRate_);
      DARABONBA_PTR_TO_JSON(QosStuckDuration100s, qosStuckDuration100s_);
      DARABONBA_PTR_TO_JSON(QosStuckRate, qosStuckRate_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayQosListResponseBodyQosInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(QosFirstFrame, qosFirstFrame_);
      DARABONBA_PTR_FROM_JSON(QosKbps, qosKbps_);
      DARABONBA_PTR_FROM_JSON(QosPlay, qosPlay_);
      DARABONBA_PTR_FROM_JSON(QosPlayFail, qosPlayFail_);
      DARABONBA_PTR_FROM_JSON(QosRealPlay, qosRealPlay_);
      DARABONBA_PTR_FROM_JSON(QosSecondPlayRate, qosSecondPlayRate_);
      DARABONBA_PTR_FROM_JSON(QosSeedFailRate, qosSeedFailRate_);
      DARABONBA_PTR_FROM_JSON(QosSeekDuration, qosSeekDuration_);
      DARABONBA_PTR_FROM_JSON(QosSlowPlayRate, qosSlowPlayRate_);
      DARABONBA_PTR_FROM_JSON(QosStuckDuration100s, qosStuckDuration100s_);
      DARABONBA_PTR_FROM_JSON(QosStuckRate, qosStuckRate_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribePlayQosListResponseBodyQosInfoList() = default ;
    DescribePlayQosListResponseBodyQosInfoList(const DescribePlayQosListResponseBodyQosInfoList &) = default ;
    DescribePlayQosListResponseBodyQosInfoList(DescribePlayQosListResponseBodyQosInfoList &&) = default ;
    DescribePlayQosListResponseBodyQosInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayQosListResponseBodyQosInfoList() = default ;
    DescribePlayQosListResponseBodyQosInfoList& operator=(const DescribePlayQosListResponseBodyQosInfoList &) = default ;
    DescribePlayQosListResponseBodyQosInfoList& operator=(DescribePlayQosListResponseBodyQosInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qosFirstFrame_ != nullptr
        && this->qosKbps_ != nullptr && this->qosPlay_ != nullptr && this->qosPlayFail_ != nullptr && this->qosRealPlay_ != nullptr && this->qosSecondPlayRate_ != nullptr
        && this->qosSeedFailRate_ != nullptr && this->qosSeekDuration_ != nullptr && this->qosSlowPlayRate_ != nullptr && this->qosStuckDuration100s_ != nullptr && this->qosStuckRate_ != nullptr
        && this->traceId_ != nullptr; };
    // qosFirstFrame Field Functions 
    bool hasQosFirstFrame() const { return this->qosFirstFrame_ != nullptr;};
    void deleteQosFirstFrame() { this->qosFirstFrame_ = nullptr;};
    inline float qosFirstFrame() const { DARABONBA_PTR_GET_DEFAULT(qosFirstFrame_, 0.0) };
    inline DescribePlayQosListResponseBodyQosInfoList& setQosFirstFrame(float qosFirstFrame) { DARABONBA_PTR_SET_VALUE(qosFirstFrame_, qosFirstFrame) };


    // qosKbps Field Functions 
    bool hasQosKbps() const { return this->qosKbps_ != nullptr;};
    void deleteQosKbps() { this->qosKbps_ = nullptr;};
    inline float qosKbps() const { DARABONBA_PTR_GET_DEFAULT(qosKbps_, 0.0) };
    inline DescribePlayQosListResponseBodyQosInfoList& setQosKbps(float qosKbps) { DARABONBA_PTR_SET_VALUE(qosKbps_, qosKbps) };


    // qosPlay Field Functions 
    bool hasQosPlay() const { return this->qosPlay_ != nullptr;};
    void deleteQosPlay() { this->qosPlay_ = nullptr;};
    inline float qosPlay() const { DARABONBA_PTR_GET_DEFAULT(qosPlay_, 0.0) };
    inline DescribePlayQosListResponseBodyQosInfoList& setQosPlay(float qosPlay) { DARABONBA_PTR_SET_VALUE(qosPlay_, qosPlay) };


    // qosPlayFail Field Functions 
    bool hasQosPlayFail() const { return this->qosPlayFail_ != nullptr;};
    void deleteQosPlayFail() { this->qosPlayFail_ = nullptr;};
    inline float qosPlayFail() const { DARABONBA_PTR_GET_DEFAULT(qosPlayFail_, 0.0) };
    inline DescribePlayQosListResponseBodyQosInfoList& setQosPlayFail(float qosPlayFail) { DARABONBA_PTR_SET_VALUE(qosPlayFail_, qosPlayFail) };


    // qosRealPlay Field Functions 
    bool hasQosRealPlay() const { return this->qosRealPlay_ != nullptr;};
    void deleteQosRealPlay() { this->qosRealPlay_ = nullptr;};
    inline float qosRealPlay() const { DARABONBA_PTR_GET_DEFAULT(qosRealPlay_, 0.0) };
    inline DescribePlayQosListResponseBodyQosInfoList& setQosRealPlay(float qosRealPlay) { DARABONBA_PTR_SET_VALUE(qosRealPlay_, qosRealPlay) };


    // qosSecondPlayRate Field Functions 
    bool hasQosSecondPlayRate() const { return this->qosSecondPlayRate_ != nullptr;};
    void deleteQosSecondPlayRate() { this->qosSecondPlayRate_ = nullptr;};
    inline float qosSecondPlayRate() const { DARABONBA_PTR_GET_DEFAULT(qosSecondPlayRate_, 0.0) };
    inline DescribePlayQosListResponseBodyQosInfoList& setQosSecondPlayRate(float qosSecondPlayRate) { DARABONBA_PTR_SET_VALUE(qosSecondPlayRate_, qosSecondPlayRate) };


    // qosSeedFailRate Field Functions 
    bool hasQosSeedFailRate() const { return this->qosSeedFailRate_ != nullptr;};
    void deleteQosSeedFailRate() { this->qosSeedFailRate_ = nullptr;};
    inline float qosSeedFailRate() const { DARABONBA_PTR_GET_DEFAULT(qosSeedFailRate_, 0.0) };
    inline DescribePlayQosListResponseBodyQosInfoList& setQosSeedFailRate(float qosSeedFailRate) { DARABONBA_PTR_SET_VALUE(qosSeedFailRate_, qosSeedFailRate) };


    // qosSeekDuration Field Functions 
    bool hasQosSeekDuration() const { return this->qosSeekDuration_ != nullptr;};
    void deleteQosSeekDuration() { this->qosSeekDuration_ = nullptr;};
    inline double qosSeekDuration() const { DARABONBA_PTR_GET_DEFAULT(qosSeekDuration_, 0.0) };
    inline DescribePlayQosListResponseBodyQosInfoList& setQosSeekDuration(double qosSeekDuration) { DARABONBA_PTR_SET_VALUE(qosSeekDuration_, qosSeekDuration) };


    // qosSlowPlayRate Field Functions 
    bool hasQosSlowPlayRate() const { return this->qosSlowPlayRate_ != nullptr;};
    void deleteQosSlowPlayRate() { this->qosSlowPlayRate_ = nullptr;};
    inline float qosSlowPlayRate() const { DARABONBA_PTR_GET_DEFAULT(qosSlowPlayRate_, 0.0) };
    inline DescribePlayQosListResponseBodyQosInfoList& setQosSlowPlayRate(float qosSlowPlayRate) { DARABONBA_PTR_SET_VALUE(qosSlowPlayRate_, qosSlowPlayRate) };


    // qosStuckDuration100s Field Functions 
    bool hasQosStuckDuration100s() const { return this->qosStuckDuration100s_ != nullptr;};
    void deleteQosStuckDuration100s() { this->qosStuckDuration100s_ = nullptr;};
    inline double qosStuckDuration100s() const { DARABONBA_PTR_GET_DEFAULT(qosStuckDuration100s_, 0.0) };
    inline DescribePlayQosListResponseBodyQosInfoList& setQosStuckDuration100s(double qosStuckDuration100s) { DARABONBA_PTR_SET_VALUE(qosStuckDuration100s_, qosStuckDuration100s) };


    // qosStuckRate Field Functions 
    bool hasQosStuckRate() const { return this->qosStuckRate_ != nullptr;};
    void deleteQosStuckRate() { this->qosStuckRate_ = nullptr;};
    inline float qosStuckRate() const { DARABONBA_PTR_GET_DEFAULT(qosStuckRate_, 0.0) };
    inline DescribePlayQosListResponseBodyQosInfoList& setQosStuckRate(float qosStuckRate) { DARABONBA_PTR_SET_VALUE(qosStuckRate_, qosStuckRate) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribePlayQosListResponseBodyQosInfoList& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<float> qosFirstFrame_ = nullptr;
    std::shared_ptr<float> qosKbps_ = nullptr;
    std::shared_ptr<float> qosPlay_ = nullptr;
    std::shared_ptr<float> qosPlayFail_ = nullptr;
    std::shared_ptr<float> qosRealPlay_ = nullptr;
    std::shared_ptr<float> qosSecondPlayRate_ = nullptr;
    std::shared_ptr<float> qosSeedFailRate_ = nullptr;
    std::shared_ptr<double> qosSeekDuration_ = nullptr;
    std::shared_ptr<float> qosSlowPlayRate_ = nullptr;
    std::shared_ptr<double> qosStuckDuration100s_ = nullptr;
    std::shared_ptr<float> qosStuckRate_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
