// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDTRANSCODESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDTRANSCODESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartRtcCloudTranscodeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudTranscodeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(InputParam, inputParamShrink_);
      DARABONBA_PTR_TO_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_TO_JSON(OutputParams, outputParamsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudTranscodeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(InputParam, inputParamShrink_);
      DARABONBA_PTR_FROM_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_FROM_JSON(OutputParams, outputParamsShrink_);
    };
    StartRtcCloudTranscodeShrinkRequest() = default ;
    StartRtcCloudTranscodeShrinkRequest(const StartRtcCloudTranscodeShrinkRequest &) = default ;
    StartRtcCloudTranscodeShrinkRequest(StartRtcCloudTranscodeShrinkRequest &&) = default ;
    StartRtcCloudTranscodeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudTranscodeShrinkRequest() = default ;
    StartRtcCloudTranscodeShrinkRequest& operator=(const StartRtcCloudTranscodeShrinkRequest &) = default ;
    StartRtcCloudTranscodeShrinkRequest& operator=(StartRtcCloudTranscodeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->channelId_ == nullptr && this->inputParamShrink_ == nullptr && this->maxIdleTime_ == nullptr && this->outputParamsShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartRtcCloudTranscodeShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartRtcCloudTranscodeShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // inputParamShrink Field Functions 
    bool hasInputParamShrink() const { return this->inputParamShrink_ != nullptr;};
    void deleteInputParamShrink() { this->inputParamShrink_ = nullptr;};
    inline string getInputParamShrink() const { DARABONBA_PTR_GET_DEFAULT(inputParamShrink_, "") };
    inline StartRtcCloudTranscodeShrinkRequest& setInputParamShrink(string inputParamShrink) { DARABONBA_PTR_SET_VALUE(inputParamShrink_, inputParamShrink) };


    // maxIdleTime Field Functions 
    bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
    void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
    inline int64_t getMaxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, 0L) };
    inline StartRtcCloudTranscodeShrinkRequest& setMaxIdleTime(int64_t maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


    // outputParamsShrink Field Functions 
    bool hasOutputParamsShrink() const { return this->outputParamsShrink_ != nullptr;};
    void deleteOutputParamsShrink() { this->outputParamsShrink_ = nullptr;};
    inline string getOutputParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(outputParamsShrink_, "") };
    inline StartRtcCloudTranscodeShrinkRequest& setOutputParamsShrink(string outputParamsShrink) { DARABONBA_PTR_SET_VALUE(outputParamsShrink_, outputParamsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // This parameter is required.
    shared_ptr<string> inputParamShrink_ {};
    shared_ptr<int64_t> maxIdleTime_ {};
    // This parameter is required.
    shared_ptr<string> outputParamsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
