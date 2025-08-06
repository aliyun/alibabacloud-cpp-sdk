// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYDETAILRESPONSEBODYBASEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYDETAILRESPONSEBODYBASEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayDetailResponseBodyBaseInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayDetailResponseBodyBaseInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(BroadcastPace, broadcastPace_);
      DARABONBA_PTR_TO_JSON(ClientIP, clientIP_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(DecodeStuckTime, decodeStuckTime_);
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(FirstFrameDuration, firstFrameDuration_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(IsHardDecode, isHardDecode_);
      DARABONBA_PTR_TO_JSON(Mdat, mdat_);
      DARABONBA_PTR_TO_JSON(Moov, moov_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(NetworkDuration, networkDuration_);
      DARABONBA_PTR_TO_JSON(NetworkStuckTime, networkStuckTime_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(PlayTs, playTs_);
      DARABONBA_PTR_TO_JSON(PlayerLoadDuration, playerLoadDuration_);
      DARABONBA_PTR_TO_JSON(PlayerPreDealDuration, playerPreDealDuration_);
      DARABONBA_PTR_TO_JSON(PlayerReadyDuration, playerReadyDuration_);
      DARABONBA_PTR_TO_JSON(SdkVersion, sdkVersion_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TerminalType, terminalType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayDetailResponseBodyBaseInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(BroadcastPace, broadcastPace_);
      DARABONBA_PTR_FROM_JSON(ClientIP, clientIP_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(DecodeStuckTime, decodeStuckTime_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(FirstFrameDuration, firstFrameDuration_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(IsHardDecode, isHardDecode_);
      DARABONBA_PTR_FROM_JSON(Mdat, mdat_);
      DARABONBA_PTR_FROM_JSON(Moov, moov_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(NetworkDuration, networkDuration_);
      DARABONBA_PTR_FROM_JSON(NetworkStuckTime, networkStuckTime_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(PlayTs, playTs_);
      DARABONBA_PTR_FROM_JSON(PlayerLoadDuration, playerLoadDuration_);
      DARABONBA_PTR_FROM_JSON(PlayerPreDealDuration, playerPreDealDuration_);
      DARABONBA_PTR_FROM_JSON(PlayerReadyDuration, playerReadyDuration_);
      DARABONBA_PTR_FROM_JSON(SdkVersion, sdkVersion_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TerminalType, terminalType_);
    };
    DescribePlayDetailResponseBodyBaseInfos() = default ;
    DescribePlayDetailResponseBodyBaseInfos(const DescribePlayDetailResponseBodyBaseInfos &) = default ;
    DescribePlayDetailResponseBodyBaseInfos(DescribePlayDetailResponseBodyBaseInfos &&) = default ;
    DescribePlayDetailResponseBodyBaseInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayDetailResponseBodyBaseInfos() = default ;
    DescribePlayDetailResponseBodyBaseInfos& operator=(const DescribePlayDetailResponseBodyBaseInfos &) = default ;
    DescribePlayDetailResponseBodyBaseInfos& operator=(DescribePlayDetailResponseBodyBaseInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->bps_ != nullptr && this->broadcastPace_ != nullptr && this->clientIP_ != nullptr && this->codec_ != nullptr && this->decodeStuckTime_ != nullptr
        && this->definition_ != nullptr && this->firstFrameDuration_ != nullptr && this->fps_ != nullptr && this->isHardDecode_ != nullptr && this->mdat_ != nullptr
        && this->moov_ != nullptr && this->network_ != nullptr && this->networkDuration_ != nullptr && this->networkStuckTime_ != nullptr && this->os_ != nullptr
        && this->playTs_ != nullptr && this->playerLoadDuration_ != nullptr && this->playerPreDealDuration_ != nullptr && this->playerReadyDuration_ != nullptr && this->sdkVersion_ != nullptr
        && this->sessionId_ != nullptr && this->status_ != nullptr && this->terminalType_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline string bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setBps(string bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // broadcastPace Field Functions 
    bool hasBroadcastPace() const { return this->broadcastPace_ != nullptr;};
    void deleteBroadcastPace() { this->broadcastPace_ = nullptr;};
    inline string broadcastPace() const { DARABONBA_PTR_GET_DEFAULT(broadcastPace_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setBroadcastPace(string broadcastPace) { DARABONBA_PTR_SET_VALUE(broadcastPace_, broadcastPace) };


    // clientIP Field Functions 
    bool hasClientIP() const { return this->clientIP_ != nullptr;};
    void deleteClientIP() { this->clientIP_ = nullptr;};
    inline string clientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // decodeStuckTime Field Functions 
    bool hasDecodeStuckTime() const { return this->decodeStuckTime_ != nullptr;};
    void deleteDecodeStuckTime() { this->decodeStuckTime_ = nullptr;};
    inline string decodeStuckTime() const { DARABONBA_PTR_GET_DEFAULT(decodeStuckTime_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setDecodeStuckTime(string decodeStuckTime) { DARABONBA_PTR_SET_VALUE(decodeStuckTime_, decodeStuckTime) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // firstFrameDuration Field Functions 
    bool hasFirstFrameDuration() const { return this->firstFrameDuration_ != nullptr;};
    void deleteFirstFrameDuration() { this->firstFrameDuration_ = nullptr;};
    inline string firstFrameDuration() const { DARABONBA_PTR_GET_DEFAULT(firstFrameDuration_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setFirstFrameDuration(string firstFrameDuration) { DARABONBA_PTR_SET_VALUE(firstFrameDuration_, firstFrameDuration) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // isHardDecode Field Functions 
    bool hasIsHardDecode() const { return this->isHardDecode_ != nullptr;};
    void deleteIsHardDecode() { this->isHardDecode_ = nullptr;};
    inline string isHardDecode() const { DARABONBA_PTR_GET_DEFAULT(isHardDecode_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setIsHardDecode(string isHardDecode) { DARABONBA_PTR_SET_VALUE(isHardDecode_, isHardDecode) };


    // mdat Field Functions 
    bool hasMdat() const { return this->mdat_ != nullptr;};
    void deleteMdat() { this->mdat_ = nullptr;};
    inline string mdat() const { DARABONBA_PTR_GET_DEFAULT(mdat_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setMdat(string mdat) { DARABONBA_PTR_SET_VALUE(mdat_, mdat) };


    // moov Field Functions 
    bool hasMoov() const { return this->moov_ != nullptr;};
    void deleteMoov() { this->moov_ = nullptr;};
    inline string moov() const { DARABONBA_PTR_GET_DEFAULT(moov_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setMoov(string moov) { DARABONBA_PTR_SET_VALUE(moov_, moov) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // networkDuration Field Functions 
    bool hasNetworkDuration() const { return this->networkDuration_ != nullptr;};
    void deleteNetworkDuration() { this->networkDuration_ = nullptr;};
    inline string networkDuration() const { DARABONBA_PTR_GET_DEFAULT(networkDuration_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setNetworkDuration(string networkDuration) { DARABONBA_PTR_SET_VALUE(networkDuration_, networkDuration) };


    // networkStuckTime Field Functions 
    bool hasNetworkStuckTime() const { return this->networkStuckTime_ != nullptr;};
    void deleteNetworkStuckTime() { this->networkStuckTime_ = nullptr;};
    inline string networkStuckTime() const { DARABONBA_PTR_GET_DEFAULT(networkStuckTime_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setNetworkStuckTime(string networkStuckTime) { DARABONBA_PTR_SET_VALUE(networkStuckTime_, networkStuckTime) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // playTs Field Functions 
    bool hasPlayTs() const { return this->playTs_ != nullptr;};
    void deletePlayTs() { this->playTs_ = nullptr;};
    inline string playTs() const { DARABONBA_PTR_GET_DEFAULT(playTs_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setPlayTs(string playTs) { DARABONBA_PTR_SET_VALUE(playTs_, playTs) };


    // playerLoadDuration Field Functions 
    bool hasPlayerLoadDuration() const { return this->playerLoadDuration_ != nullptr;};
    void deletePlayerLoadDuration() { this->playerLoadDuration_ = nullptr;};
    inline string playerLoadDuration() const { DARABONBA_PTR_GET_DEFAULT(playerLoadDuration_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setPlayerLoadDuration(string playerLoadDuration) { DARABONBA_PTR_SET_VALUE(playerLoadDuration_, playerLoadDuration) };


    // playerPreDealDuration Field Functions 
    bool hasPlayerPreDealDuration() const { return this->playerPreDealDuration_ != nullptr;};
    void deletePlayerPreDealDuration() { this->playerPreDealDuration_ = nullptr;};
    inline string playerPreDealDuration() const { DARABONBA_PTR_GET_DEFAULT(playerPreDealDuration_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setPlayerPreDealDuration(string playerPreDealDuration) { DARABONBA_PTR_SET_VALUE(playerPreDealDuration_, playerPreDealDuration) };


    // playerReadyDuration Field Functions 
    bool hasPlayerReadyDuration() const { return this->playerReadyDuration_ != nullptr;};
    void deletePlayerReadyDuration() { this->playerReadyDuration_ = nullptr;};
    inline string playerReadyDuration() const { DARABONBA_PTR_GET_DEFAULT(playerReadyDuration_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setPlayerReadyDuration(string playerReadyDuration) { DARABONBA_PTR_SET_VALUE(playerReadyDuration_, playerReadyDuration) };


    // sdkVersion Field Functions 
    bool hasSdkVersion() const { return this->sdkVersion_ != nullptr;};
    void deleteSdkVersion() { this->sdkVersion_ = nullptr;};
    inline string sdkVersion() const { DARABONBA_PTR_GET_DEFAULT(sdkVersion_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setSdkVersion(string sdkVersion) { DARABONBA_PTR_SET_VALUE(sdkVersion_, sdkVersion) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // terminalType Field Functions 
    bool hasTerminalType() const { return this->terminalType_ != nullptr;};
    void deleteTerminalType() { this->terminalType_ = nullptr;};
    inline string terminalType() const { DARABONBA_PTR_GET_DEFAULT(terminalType_, "") };
    inline DescribePlayDetailResponseBodyBaseInfos& setTerminalType(string terminalType) { DARABONBA_PTR_SET_VALUE(terminalType_, terminalType) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> bps_ = nullptr;
    std::shared_ptr<string> broadcastPace_ = nullptr;
    std::shared_ptr<string> clientIP_ = nullptr;
    std::shared_ptr<string> codec_ = nullptr;
    std::shared_ptr<string> decodeStuckTime_ = nullptr;
    std::shared_ptr<string> definition_ = nullptr;
    std::shared_ptr<string> firstFrameDuration_ = nullptr;
    std::shared_ptr<string> fps_ = nullptr;
    std::shared_ptr<string> isHardDecode_ = nullptr;
    std::shared_ptr<string> mdat_ = nullptr;
    std::shared_ptr<string> moov_ = nullptr;
    std::shared_ptr<string> network_ = nullptr;
    std::shared_ptr<string> networkDuration_ = nullptr;
    std::shared_ptr<string> networkStuckTime_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    std::shared_ptr<string> playTs_ = nullptr;
    std::shared_ptr<string> playerLoadDuration_ = nullptr;
    std::shared_ptr<string> playerPreDealDuration_ = nullptr;
    std::shared_ptr<string> playerReadyDuration_ = nullptr;
    std::shared_ptr<string> sdkVersion_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> terminalType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
