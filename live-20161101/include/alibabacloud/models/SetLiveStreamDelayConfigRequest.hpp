// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVESTREAMDELAYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLIVESTREAMDELAYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveStreamDelayConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveStreamDelayConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FlvDelay, flvDelay_);
      DARABONBA_PTR_TO_JSON(FlvLevel, flvLevel_);
      DARABONBA_PTR_TO_JSON(HlsDelay, hlsDelay_);
      DARABONBA_PTR_TO_JSON(HlsLevel, hlsLevel_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RtmpDelay, rtmpDelay_);
      DARABONBA_PTR_TO_JSON(RtmpLevel, rtmpLevel_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveStreamDelayConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FlvDelay, flvDelay_);
      DARABONBA_PTR_FROM_JSON(FlvLevel, flvLevel_);
      DARABONBA_PTR_FROM_JSON(HlsDelay, hlsDelay_);
      DARABONBA_PTR_FROM_JSON(HlsLevel, hlsLevel_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RtmpDelay, rtmpDelay_);
      DARABONBA_PTR_FROM_JSON(RtmpLevel, rtmpLevel_);
    };
    SetLiveStreamDelayConfigRequest() = default ;
    SetLiveStreamDelayConfigRequest(const SetLiveStreamDelayConfigRequest &) = default ;
    SetLiveStreamDelayConfigRequest(SetLiveStreamDelayConfigRequest &&) = default ;
    SetLiveStreamDelayConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveStreamDelayConfigRequest() = default ;
    SetLiveStreamDelayConfigRequest& operator=(const SetLiveStreamDelayConfigRequest &) = default ;
    SetLiveStreamDelayConfigRequest& operator=(SetLiveStreamDelayConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->flvDelay_ != nullptr && this->flvLevel_ != nullptr && this->hlsDelay_ != nullptr && this->hlsLevel_ != nullptr && this->ownerId_ != nullptr
        && this->regionId_ != nullptr && this->rtmpDelay_ != nullptr && this->rtmpLevel_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetLiveStreamDelayConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // flvDelay Field Functions 
    bool hasFlvDelay() const { return this->flvDelay_ != nullptr;};
    void deleteFlvDelay() { this->flvDelay_ = nullptr;};
    inline int32_t flvDelay() const { DARABONBA_PTR_GET_DEFAULT(flvDelay_, 0) };
    inline SetLiveStreamDelayConfigRequest& setFlvDelay(int32_t flvDelay) { DARABONBA_PTR_SET_VALUE(flvDelay_, flvDelay) };


    // flvLevel Field Functions 
    bool hasFlvLevel() const { return this->flvLevel_ != nullptr;};
    void deleteFlvLevel() { this->flvLevel_ = nullptr;};
    inline string flvLevel() const { DARABONBA_PTR_GET_DEFAULT(flvLevel_, "") };
    inline SetLiveStreamDelayConfigRequest& setFlvLevel(string flvLevel) { DARABONBA_PTR_SET_VALUE(flvLevel_, flvLevel) };


    // hlsDelay Field Functions 
    bool hasHlsDelay() const { return this->hlsDelay_ != nullptr;};
    void deleteHlsDelay() { this->hlsDelay_ = nullptr;};
    inline int32_t hlsDelay() const { DARABONBA_PTR_GET_DEFAULT(hlsDelay_, 0) };
    inline SetLiveStreamDelayConfigRequest& setHlsDelay(int32_t hlsDelay) { DARABONBA_PTR_SET_VALUE(hlsDelay_, hlsDelay) };


    // hlsLevel Field Functions 
    bool hasHlsLevel() const { return this->hlsLevel_ != nullptr;};
    void deleteHlsLevel() { this->hlsLevel_ = nullptr;};
    inline string hlsLevel() const { DARABONBA_PTR_GET_DEFAULT(hlsLevel_, "") };
    inline SetLiveStreamDelayConfigRequest& setHlsLevel(string hlsLevel) { DARABONBA_PTR_SET_VALUE(hlsLevel_, hlsLevel) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetLiveStreamDelayConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetLiveStreamDelayConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rtmpDelay Field Functions 
    bool hasRtmpDelay() const { return this->rtmpDelay_ != nullptr;};
    void deleteRtmpDelay() { this->rtmpDelay_ = nullptr;};
    inline int32_t rtmpDelay() const { DARABONBA_PTR_GET_DEFAULT(rtmpDelay_, 0) };
    inline SetLiveStreamDelayConfigRequest& setRtmpDelay(int32_t rtmpDelay) { DARABONBA_PTR_SET_VALUE(rtmpDelay_, rtmpDelay) };


    // rtmpLevel Field Functions 
    bool hasRtmpLevel() const { return this->rtmpLevel_ != nullptr;};
    void deleteRtmpLevel() { this->rtmpLevel_ = nullptr;};
    inline string rtmpLevel() const { DARABONBA_PTR_GET_DEFAULT(rtmpLevel_, "") };
    inline SetLiveStreamDelayConfigRequest& setRtmpLevel(string rtmpLevel) { DARABONBA_PTR_SET_VALUE(rtmpLevel_, rtmpLevel) };


  protected:
    // The streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The latency of FLV-based playback. Unit: seconds.
    // 
    // >  If this parameter is left empty, the latency is set to a value corresponding to the FlvLevel parameter.
    std::shared_ptr<int32_t> flvDelay_ = nullptr;
    // The latency level of FLV-based playback. Ignore this parameter if the FlvDelay parameter is configured.
    // 
    // Valid values:
    // 
    // *   **short** (default): The latency is 4 seconds.
    // *   **medium**: The latency is 8 seconds.
    // *   **long**: The latency is 16 seconds.
    // 
    // >  If both the FlvDelay and FlvLevel parameters are left empty, FlvLevel is set to **short** by default.
    std::shared_ptr<string> flvLevel_ = nullptr;
    // The latency of HLS-based playback. Unit: seconds.
    // 
    // >  If this parameter is left empty, the latency is set to a value corresponding to the HlsLevel parameter.
    std::shared_ptr<int32_t> hlsDelay_ = nullptr;
    // The latency level of HLS-based playback. Ignore this parameter if the HlsDelay parameter is configured.
    // 
    // Valid values:
    // 
    // *   **short**: The latency is 3 seconds. This is the default value.
    // *   **medium**: The latency is 6 seconds.
    // *   **long**: The latency is 15 seconds.
    // 
    // >  If both the HlsDelay and HlsLevel parameters are left empty, HlsLevel is set to **short** by default.
    std::shared_ptr<string> hlsLevel_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The latency of RTMP-based playback. Unit: seconds.
    // 
    // >  If this parameter is left empty, the latency is set to a value corresponding to the RtmpLevel parameter.
    std::shared_ptr<int32_t> rtmpDelay_ = nullptr;
    // The latency level of RTMP-based playback. Ignore this parameter if the RtmpDelay parameter is configured.
    // 
    // Valid values:
    // 
    // *   **short** (default): The latency is 4 seconds.
    // *   **medium**: The latency is 8 seconds.
    // *   **long**: The latency is 16 seconds.
    // 
    // >  If both the RtmpDelay and RtmpLevel parameters are left empty, RtmpLevel is set to **short** by default.
    std::shared_ptr<string> rtmpLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
