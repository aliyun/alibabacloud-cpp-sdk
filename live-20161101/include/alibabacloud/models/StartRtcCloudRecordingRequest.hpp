// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartRtcCloudRecordingRequestMixLayoutParams.hpp>
#include <alibabacloud/models/StartRtcCloudRecordingRequestMixTranscodeParams.hpp>
#include <alibabacloud/models/StartRtcCloudRecordingRequestRecordParams.hpp>
#include <alibabacloud/models/StartRtcCloudRecordingRequestStorageParams.hpp>
#include <alibabacloud/models/StartRtcCloudRecordingRequestSubscribeParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartRtcCloudRecordingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudRecordingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_TO_JSON(MixLayoutParams, mixLayoutParams_);
      DARABONBA_PTR_TO_JSON(MixTranscodeParams, mixTranscodeParams_);
      DARABONBA_PTR_TO_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(RecordParams, recordParams_);
      DARABONBA_PTR_TO_JSON(StorageParams, storageParams_);
      DARABONBA_PTR_TO_JSON(SubscribeParams, subscribeParams_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudRecordingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_FROM_JSON(MixLayoutParams, mixLayoutParams_);
      DARABONBA_PTR_FROM_JSON(MixTranscodeParams, mixTranscodeParams_);
      DARABONBA_PTR_FROM_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(RecordParams, recordParams_);
      DARABONBA_PTR_FROM_JSON(StorageParams, storageParams_);
      DARABONBA_PTR_FROM_JSON(SubscribeParams, subscribeParams_);
    };
    StartRtcCloudRecordingRequest() = default ;
    StartRtcCloudRecordingRequest(const StartRtcCloudRecordingRequest &) = default ;
    StartRtcCloudRecordingRequest(StartRtcCloudRecordingRequest &&) = default ;
    StartRtcCloudRecordingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudRecordingRequest() = default ;
    StartRtcCloudRecordingRequest& operator=(const StartRtcCloudRecordingRequest &) = default ;
    StartRtcCloudRecordingRequest& operator=(StartRtcCloudRecordingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->channelId_ != nullptr && this->maxIdleTime_ != nullptr && this->mixLayoutParams_ != nullptr && this->mixTranscodeParams_ != nullptr && this->notifyAuthKey_ != nullptr
        && this->notifyUrl_ != nullptr && this->recordParams_ != nullptr && this->storageParams_ != nullptr && this->subscribeParams_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartRtcCloudRecordingRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartRtcCloudRecordingRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // maxIdleTime Field Functions 
    bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
    void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
    inline int64_t maxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, 0L) };
    inline StartRtcCloudRecordingRequest& setMaxIdleTime(int64_t maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


    // mixLayoutParams Field Functions 
    bool hasMixLayoutParams() const { return this->mixLayoutParams_ != nullptr;};
    void deleteMixLayoutParams() { this->mixLayoutParams_ = nullptr;};
    inline const StartRtcCloudRecordingRequestMixLayoutParams & mixLayoutParams() const { DARABONBA_PTR_GET_CONST(mixLayoutParams_, StartRtcCloudRecordingRequestMixLayoutParams) };
    inline StartRtcCloudRecordingRequestMixLayoutParams mixLayoutParams() { DARABONBA_PTR_GET(mixLayoutParams_, StartRtcCloudRecordingRequestMixLayoutParams) };
    inline StartRtcCloudRecordingRequest& setMixLayoutParams(const StartRtcCloudRecordingRequestMixLayoutParams & mixLayoutParams) { DARABONBA_PTR_SET_VALUE(mixLayoutParams_, mixLayoutParams) };
    inline StartRtcCloudRecordingRequest& setMixLayoutParams(StartRtcCloudRecordingRequestMixLayoutParams && mixLayoutParams) { DARABONBA_PTR_SET_RVALUE(mixLayoutParams_, mixLayoutParams) };


    // mixTranscodeParams Field Functions 
    bool hasMixTranscodeParams() const { return this->mixTranscodeParams_ != nullptr;};
    void deleteMixTranscodeParams() { this->mixTranscodeParams_ = nullptr;};
    inline const StartRtcCloudRecordingRequestMixTranscodeParams & mixTranscodeParams() const { DARABONBA_PTR_GET_CONST(mixTranscodeParams_, StartRtcCloudRecordingRequestMixTranscodeParams) };
    inline StartRtcCloudRecordingRequestMixTranscodeParams mixTranscodeParams() { DARABONBA_PTR_GET(mixTranscodeParams_, StartRtcCloudRecordingRequestMixTranscodeParams) };
    inline StartRtcCloudRecordingRequest& setMixTranscodeParams(const StartRtcCloudRecordingRequestMixTranscodeParams & mixTranscodeParams) { DARABONBA_PTR_SET_VALUE(mixTranscodeParams_, mixTranscodeParams) };
    inline StartRtcCloudRecordingRequest& setMixTranscodeParams(StartRtcCloudRecordingRequestMixTranscodeParams && mixTranscodeParams) { DARABONBA_PTR_SET_RVALUE(mixTranscodeParams_, mixTranscodeParams) };


    // notifyAuthKey Field Functions 
    bool hasNotifyAuthKey() const { return this->notifyAuthKey_ != nullptr;};
    void deleteNotifyAuthKey() { this->notifyAuthKey_ = nullptr;};
    inline string notifyAuthKey() const { DARABONBA_PTR_GET_DEFAULT(notifyAuthKey_, "") };
    inline StartRtcCloudRecordingRequest& setNotifyAuthKey(string notifyAuthKey) { DARABONBA_PTR_SET_VALUE(notifyAuthKey_, notifyAuthKey) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline StartRtcCloudRecordingRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // recordParams Field Functions 
    bool hasRecordParams() const { return this->recordParams_ != nullptr;};
    void deleteRecordParams() { this->recordParams_ = nullptr;};
    inline const StartRtcCloudRecordingRequestRecordParams & recordParams() const { DARABONBA_PTR_GET_CONST(recordParams_, StartRtcCloudRecordingRequestRecordParams) };
    inline StartRtcCloudRecordingRequestRecordParams recordParams() { DARABONBA_PTR_GET(recordParams_, StartRtcCloudRecordingRequestRecordParams) };
    inline StartRtcCloudRecordingRequest& setRecordParams(const StartRtcCloudRecordingRequestRecordParams & recordParams) { DARABONBA_PTR_SET_VALUE(recordParams_, recordParams) };
    inline StartRtcCloudRecordingRequest& setRecordParams(StartRtcCloudRecordingRequestRecordParams && recordParams) { DARABONBA_PTR_SET_RVALUE(recordParams_, recordParams) };


    // storageParams Field Functions 
    bool hasStorageParams() const { return this->storageParams_ != nullptr;};
    void deleteStorageParams() { this->storageParams_ = nullptr;};
    inline const StartRtcCloudRecordingRequestStorageParams & storageParams() const { DARABONBA_PTR_GET_CONST(storageParams_, StartRtcCloudRecordingRequestStorageParams) };
    inline StartRtcCloudRecordingRequestStorageParams storageParams() { DARABONBA_PTR_GET(storageParams_, StartRtcCloudRecordingRequestStorageParams) };
    inline StartRtcCloudRecordingRequest& setStorageParams(const StartRtcCloudRecordingRequestStorageParams & storageParams) { DARABONBA_PTR_SET_VALUE(storageParams_, storageParams) };
    inline StartRtcCloudRecordingRequest& setStorageParams(StartRtcCloudRecordingRequestStorageParams && storageParams) { DARABONBA_PTR_SET_RVALUE(storageParams_, storageParams) };


    // subscribeParams Field Functions 
    bool hasSubscribeParams() const { return this->subscribeParams_ != nullptr;};
    void deleteSubscribeParams() { this->subscribeParams_ = nullptr;};
    inline const StartRtcCloudRecordingRequestSubscribeParams & subscribeParams() const { DARABONBA_PTR_GET_CONST(subscribeParams_, StartRtcCloudRecordingRequestSubscribeParams) };
    inline StartRtcCloudRecordingRequestSubscribeParams subscribeParams() { DARABONBA_PTR_GET(subscribeParams_, StartRtcCloudRecordingRequestSubscribeParams) };
    inline StartRtcCloudRecordingRequest& setSubscribeParams(const StartRtcCloudRecordingRequestSubscribeParams & subscribeParams) { DARABONBA_PTR_SET_VALUE(subscribeParams_, subscribeParams) };
    inline StartRtcCloudRecordingRequest& setSubscribeParams(StartRtcCloudRecordingRequestSubscribeParams && subscribeParams) { DARABONBA_PTR_SET_RVALUE(subscribeParams_, subscribeParams) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<int64_t> maxIdleTime_ = nullptr;
    std::shared_ptr<StartRtcCloudRecordingRequestMixLayoutParams> mixLayoutParams_ = nullptr;
    std::shared_ptr<StartRtcCloudRecordingRequestMixTranscodeParams> mixTranscodeParams_ = nullptr;
    std::shared_ptr<string> notifyAuthKey_ = nullptr;
    std::shared_ptr<string> notifyUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<StartRtcCloudRecordingRequestRecordParams> recordParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<StartRtcCloudRecordingRequestStorageParams> storageParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<StartRtcCloudRecordingRequestSubscribeParams> subscribeParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
