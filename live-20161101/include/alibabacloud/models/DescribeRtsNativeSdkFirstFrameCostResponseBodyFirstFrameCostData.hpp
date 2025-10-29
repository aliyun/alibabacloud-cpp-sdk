// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKFIRSTFRAMECOSTRESPONSEBODYFIRSTFRAMECOSTDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKFIRSTFRAMECOSTRESPONSEBODYFIRSTFRAMECOSTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData& obj) { 
      DARABONBA_PTR_TO_JSON(Connected, connected_);
      DARABONBA_PTR_TO_JSON(FinishGetStreamInfo, finishGetStreamInfo_);
      DARABONBA_PTR_TO_JSON(FirstFrameComplete, firstFrameComplete_);
      DARABONBA_PTR_TO_JSON(FirstPacket, firstPacket_);
      DARABONBA_PTR_TO_JSON(Initialized, initialized_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData& obj) { 
      DARABONBA_PTR_FROM_JSON(Connected, connected_);
      DARABONBA_PTR_FROM_JSON(FinishGetStreamInfo, finishGetStreamInfo_);
      DARABONBA_PTR_FROM_JSON(FirstFrameComplete, firstFrameComplete_);
      DARABONBA_PTR_FROM_JSON(FirstPacket, firstPacket_);
      DARABONBA_PTR_FROM_JSON(Initialized, initialized_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData() = default ;
    DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData(const DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData &) = default ;
    DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData(DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData &&) = default ;
    DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData() = default ;
    DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData& operator=(const DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData &) = default ;
    DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData& operator=(DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connected_ == nullptr
        && return this->finishGetStreamInfo_ == nullptr && return this->firstFrameComplete_ == nullptr && return this->firstPacket_ == nullptr && return this->initialized_ == nullptr && return this->timeStamp_ == nullptr; };
    // connected Field Functions 
    bool hasConnected() const { return this->connected_ != nullptr;};
    void deleteConnected() { this->connected_ = nullptr;};
    inline string connected() const { DARABONBA_PTR_GET_DEFAULT(connected_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData& setConnected(string connected) { DARABONBA_PTR_SET_VALUE(connected_, connected) };


    // finishGetStreamInfo Field Functions 
    bool hasFinishGetStreamInfo() const { return this->finishGetStreamInfo_ != nullptr;};
    void deleteFinishGetStreamInfo() { this->finishGetStreamInfo_ = nullptr;};
    inline string finishGetStreamInfo() const { DARABONBA_PTR_GET_DEFAULT(finishGetStreamInfo_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData& setFinishGetStreamInfo(string finishGetStreamInfo) { DARABONBA_PTR_SET_VALUE(finishGetStreamInfo_, finishGetStreamInfo) };


    // firstFrameComplete Field Functions 
    bool hasFirstFrameComplete() const { return this->firstFrameComplete_ != nullptr;};
    void deleteFirstFrameComplete() { this->firstFrameComplete_ = nullptr;};
    inline string firstFrameComplete() const { DARABONBA_PTR_GET_DEFAULT(firstFrameComplete_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData& setFirstFrameComplete(string firstFrameComplete) { DARABONBA_PTR_SET_VALUE(firstFrameComplete_, firstFrameComplete) };


    // firstPacket Field Functions 
    bool hasFirstPacket() const { return this->firstPacket_ != nullptr;};
    void deleteFirstPacket() { this->firstPacket_ = nullptr;};
    inline string firstPacket() const { DARABONBA_PTR_GET_DEFAULT(firstPacket_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData& setFirstPacket(string firstPacket) { DARABONBA_PTR_SET_VALUE(firstPacket_, firstPacket) };


    // initialized Field Functions 
    bool hasInitialized() const { return this->initialized_ != nullptr;};
    void deleteInitialized() { this->initialized_ = nullptr;};
    inline string initialized() const { DARABONBA_PTR_GET_DEFAULT(initialized_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData& setInitialized(string initialized) { DARABONBA_PTR_SET_VALUE(initialized_, initialized) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The time elapsed from initialization to connection establishment.
    std::shared_ptr<string> connected_ = nullptr;
    // The time elapsed from connection establishment to subscription.
    std::shared_ptr<string> finishGetStreamInfo_ = nullptr;
    // The time elapsed from first packet processing to display of the first frame.
    std::shared_ptr<string> firstFrameComplete_ = nullptr;
    // The time elapsed from subscription to first packet processing.
    std::shared_ptr<string> firstPacket_ = nullptr;
    // The time consumed by initialization.
    std::shared_ptr<string> initialized_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
