// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTMONITORCONFSTREAM_HPP_
#define ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTMONITORCONFSTREAM_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateTimingSyntheticTaskRequestMonitorConfStream : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTimingSyntheticTaskRequestMonitorConfStream& obj) { 
      DARABONBA_PTR_TO_JSON(CustomHeaderContent, customHeaderContent_);
      DARABONBA_PTR_TO_JSON(PlayerType, playerType_);
      DARABONBA_PTR_TO_JSON(StreamAddressType, streamAddressType_);
      DARABONBA_PTR_TO_JSON(StreamMonitorTimeout, streamMonitorTimeout_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTimingSyntheticTaskRequestMonitorConfStream& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomHeaderContent, customHeaderContent_);
      DARABONBA_PTR_FROM_JSON(PlayerType, playerType_);
      DARABONBA_PTR_FROM_JSON(StreamAddressType, streamAddressType_);
      DARABONBA_PTR_FROM_JSON(StreamMonitorTimeout, streamMonitorTimeout_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    UpdateTimingSyntheticTaskRequestMonitorConfStream() = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfStream(const UpdateTimingSyntheticTaskRequestMonitorConfStream &) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfStream(UpdateTimingSyntheticTaskRequestMonitorConfStream &&) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfStream(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTimingSyntheticTaskRequestMonitorConfStream() = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfStream& operator=(const UpdateTimingSyntheticTaskRequestMonitorConfStream &) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfStream& operator=(UpdateTimingSyntheticTaskRequestMonitorConfStream &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customHeaderContent_ != nullptr
        && this->playerType_ != nullptr && this->streamAddressType_ != nullptr && this->streamMonitorTimeout_ != nullptr && this->streamType_ != nullptr && this->targetUrl_ != nullptr
        && this->whiteList_ != nullptr; };
    // customHeaderContent Field Functions 
    bool hasCustomHeaderContent() const { return this->customHeaderContent_ != nullptr;};
    void deleteCustomHeaderContent() { this->customHeaderContent_ = nullptr;};
    inline const map<string, string> & customHeaderContent() const { DARABONBA_PTR_GET_CONST(customHeaderContent_, map<string, string>) };
    inline map<string, string> customHeaderContent() { DARABONBA_PTR_GET(customHeaderContent_, map<string, string>) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfStream& setCustomHeaderContent(const map<string, string> & customHeaderContent) { DARABONBA_PTR_SET_VALUE(customHeaderContent_, customHeaderContent) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfStream& setCustomHeaderContent(map<string, string> && customHeaderContent) { DARABONBA_PTR_SET_RVALUE(customHeaderContent_, customHeaderContent) };


    // playerType Field Functions 
    bool hasPlayerType() const { return this->playerType_ != nullptr;};
    void deletePlayerType() { this->playerType_ = nullptr;};
    inline int32_t playerType() const { DARABONBA_PTR_GET_DEFAULT(playerType_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfStream& setPlayerType(int32_t playerType) { DARABONBA_PTR_SET_VALUE(playerType_, playerType) };


    // streamAddressType Field Functions 
    bool hasStreamAddressType() const { return this->streamAddressType_ != nullptr;};
    void deleteStreamAddressType() { this->streamAddressType_ = nullptr;};
    inline int32_t streamAddressType() const { DARABONBA_PTR_GET_DEFAULT(streamAddressType_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfStream& setStreamAddressType(int32_t streamAddressType) { DARABONBA_PTR_SET_VALUE(streamAddressType_, streamAddressType) };


    // streamMonitorTimeout Field Functions 
    bool hasStreamMonitorTimeout() const { return this->streamMonitorTimeout_ != nullptr;};
    void deleteStreamMonitorTimeout() { this->streamMonitorTimeout_ = nullptr;};
    inline int32_t streamMonitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(streamMonitorTimeout_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfStream& setStreamMonitorTimeout(int32_t streamMonitorTimeout) { DARABONBA_PTR_SET_VALUE(streamMonitorTimeout_, streamMonitorTimeout) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline int32_t streamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfStream& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string targetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline UpdateTimingSyntheticTaskRequestMonitorConfStream& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline string whiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
    inline UpdateTimingSyntheticTaskRequestMonitorConfStream& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


  protected:
    // The custom header. Format: JSON map.
    std::shared_ptr<map<string, string>> customHeaderContent_ = nullptr;
    // The player. Default value: 12. Valid values:
    // 
    // *   12: VLC
    // *   2: Flash Player
    std::shared_ptr<int32_t> playerType_ = nullptr;
    // The address type of the resource. Valid values:
    // 
    // *   1: resource URL.
    // *   0: page URL. Default value: 0.
    std::shared_ptr<int32_t> streamAddressType_ = nullptr;
    // The monitoring duration. Unit: seconds. Maximum and default value: 60.
    std::shared_ptr<int32_t> streamMonitorTimeout_ = nullptr;
    // Specifies whether the resource is a video or audio. Valid values: 0: video. 1: audio.
    std::shared_ptr<int32_t> streamType_ = nullptr;
    // The resource URL of the streaming media.
    std::shared_ptr<string> targetUrl_ = nullptr;
    // The whitelisted objects that are used to avoid DNS hijacking. The objects can be IP addresses, wildcard mask, subnet mask, or CNAME records. Separate multiple objects with vertical bars (|). Example: www.aliyun.com:203.0.3.55|203.3.44.67. It indicates that all IP addresses that belong to the www.aliyun.com domain name except 203.0.3.55 and 203.3.44.67 are hijacked.
    std::shared_ptr<string> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
