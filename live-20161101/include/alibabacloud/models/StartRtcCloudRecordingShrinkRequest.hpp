// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGSHRINKREQUEST_HPP_
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
  class StartRtcCloudRecordingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudRecordingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_TO_JSON(MixLayoutParams, mixLayoutParamsShrink_);
      DARABONBA_PTR_TO_JSON(MixTranscodeParams, mixTranscodeParamsShrink_);
      DARABONBA_PTR_TO_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_TO_JSON(NotifyFileUploadedFormat, notifyFileUploadedFormat_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(RecordParams, recordParamsShrink_);
      DARABONBA_PTR_TO_JSON(StorageParams, storageParamsShrink_);
      DARABONBA_PTR_TO_JSON(SubscribeParams, subscribeParamsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudRecordingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_FROM_JSON(MixLayoutParams, mixLayoutParamsShrink_);
      DARABONBA_PTR_FROM_JSON(MixTranscodeParams, mixTranscodeParamsShrink_);
      DARABONBA_PTR_FROM_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_FROM_JSON(NotifyFileUploadedFormat, notifyFileUploadedFormat_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(RecordParams, recordParamsShrink_);
      DARABONBA_PTR_FROM_JSON(StorageParams, storageParamsShrink_);
      DARABONBA_PTR_FROM_JSON(SubscribeParams, subscribeParamsShrink_);
    };
    StartRtcCloudRecordingShrinkRequest() = default ;
    StartRtcCloudRecordingShrinkRequest(const StartRtcCloudRecordingShrinkRequest &) = default ;
    StartRtcCloudRecordingShrinkRequest(StartRtcCloudRecordingShrinkRequest &&) = default ;
    StartRtcCloudRecordingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudRecordingShrinkRequest() = default ;
    StartRtcCloudRecordingShrinkRequest& operator=(const StartRtcCloudRecordingShrinkRequest &) = default ;
    StartRtcCloudRecordingShrinkRequest& operator=(StartRtcCloudRecordingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->channelId_ == nullptr && this->maxIdleTime_ == nullptr && this->mixLayoutParamsShrink_ == nullptr && this->mixTranscodeParamsShrink_ == nullptr && this->notifyAuthKey_ == nullptr
        && this->notifyFileUploadedFormat_ == nullptr && this->notifyUrl_ == nullptr && this->recordParamsShrink_ == nullptr && this->storageParamsShrink_ == nullptr && this->subscribeParamsShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartRtcCloudRecordingShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartRtcCloudRecordingShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // maxIdleTime Field Functions 
    bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
    void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
    inline int64_t getMaxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, 0L) };
    inline StartRtcCloudRecordingShrinkRequest& setMaxIdleTime(int64_t maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


    // mixLayoutParamsShrink Field Functions 
    bool hasMixLayoutParamsShrink() const { return this->mixLayoutParamsShrink_ != nullptr;};
    void deleteMixLayoutParamsShrink() { this->mixLayoutParamsShrink_ = nullptr;};
    inline string getMixLayoutParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(mixLayoutParamsShrink_, "") };
    inline StartRtcCloudRecordingShrinkRequest& setMixLayoutParamsShrink(string mixLayoutParamsShrink) { DARABONBA_PTR_SET_VALUE(mixLayoutParamsShrink_, mixLayoutParamsShrink) };


    // mixTranscodeParamsShrink Field Functions 
    bool hasMixTranscodeParamsShrink() const { return this->mixTranscodeParamsShrink_ != nullptr;};
    void deleteMixTranscodeParamsShrink() { this->mixTranscodeParamsShrink_ = nullptr;};
    inline string getMixTranscodeParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(mixTranscodeParamsShrink_, "") };
    inline StartRtcCloudRecordingShrinkRequest& setMixTranscodeParamsShrink(string mixTranscodeParamsShrink) { DARABONBA_PTR_SET_VALUE(mixTranscodeParamsShrink_, mixTranscodeParamsShrink) };


    // notifyAuthKey Field Functions 
    bool hasNotifyAuthKey() const { return this->notifyAuthKey_ != nullptr;};
    void deleteNotifyAuthKey() { this->notifyAuthKey_ = nullptr;};
    inline string getNotifyAuthKey() const { DARABONBA_PTR_GET_DEFAULT(notifyAuthKey_, "") };
    inline StartRtcCloudRecordingShrinkRequest& setNotifyAuthKey(string notifyAuthKey) { DARABONBA_PTR_SET_VALUE(notifyAuthKey_, notifyAuthKey) };


    // notifyFileUploadedFormat Field Functions 
    bool hasNotifyFileUploadedFormat() const { return this->notifyFileUploadedFormat_ != nullptr;};
    void deleteNotifyFileUploadedFormat() { this->notifyFileUploadedFormat_ = nullptr;};
    inline const vector<string> & getNotifyFileUploadedFormat() const { DARABONBA_PTR_GET_CONST(notifyFileUploadedFormat_, vector<string>) };
    inline vector<string> getNotifyFileUploadedFormat() { DARABONBA_PTR_GET(notifyFileUploadedFormat_, vector<string>) };
    inline StartRtcCloudRecordingShrinkRequest& setNotifyFileUploadedFormat(const vector<string> & notifyFileUploadedFormat) { DARABONBA_PTR_SET_VALUE(notifyFileUploadedFormat_, notifyFileUploadedFormat) };
    inline StartRtcCloudRecordingShrinkRequest& setNotifyFileUploadedFormat(vector<string> && notifyFileUploadedFormat) { DARABONBA_PTR_SET_RVALUE(notifyFileUploadedFormat_, notifyFileUploadedFormat) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline StartRtcCloudRecordingShrinkRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // recordParamsShrink Field Functions 
    bool hasRecordParamsShrink() const { return this->recordParamsShrink_ != nullptr;};
    void deleteRecordParamsShrink() { this->recordParamsShrink_ = nullptr;};
    inline string getRecordParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(recordParamsShrink_, "") };
    inline StartRtcCloudRecordingShrinkRequest& setRecordParamsShrink(string recordParamsShrink) { DARABONBA_PTR_SET_VALUE(recordParamsShrink_, recordParamsShrink) };


    // storageParamsShrink Field Functions 
    bool hasStorageParamsShrink() const { return this->storageParamsShrink_ != nullptr;};
    void deleteStorageParamsShrink() { this->storageParamsShrink_ = nullptr;};
    inline string getStorageParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(storageParamsShrink_, "") };
    inline StartRtcCloudRecordingShrinkRequest& setStorageParamsShrink(string storageParamsShrink) { DARABONBA_PTR_SET_VALUE(storageParamsShrink_, storageParamsShrink) };


    // subscribeParamsShrink Field Functions 
    bool hasSubscribeParamsShrink() const { return this->subscribeParamsShrink_ != nullptr;};
    void deleteSubscribeParamsShrink() { this->subscribeParamsShrink_ = nullptr;};
    inline string getSubscribeParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(subscribeParamsShrink_, "") };
    inline StartRtcCloudRecordingShrinkRequest& setSubscribeParamsShrink(string subscribeParamsShrink) { DARABONBA_PTR_SET_VALUE(subscribeParamsShrink_, subscribeParamsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    shared_ptr<int64_t> maxIdleTime_ {};
    shared_ptr<string> mixLayoutParamsShrink_ {};
    shared_ptr<string> mixTranscodeParamsShrink_ {};
    shared_ptr<string> notifyAuthKey_ {};
    shared_ptr<vector<string>> notifyFileUploadedFormat_ {};
    shared_ptr<string> notifyUrl_ {};
    // This parameter is required.
    shared_ptr<string> recordParamsShrink_ {};
    // This parameter is required.
    shared_ptr<string> storageParamsShrink_ {};
    // This parameter is required.
    shared_ptr<string> subscribeParamsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
