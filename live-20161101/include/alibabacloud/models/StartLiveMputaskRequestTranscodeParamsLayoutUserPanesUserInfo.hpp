// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUESTTRANSCODEPARAMSLAYOUTUSERPANESUSERINFO_HPP_
#define ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUESTTRANSCODEPARAMSLAYOUTUSERPANESUSERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo() = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo(const StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo &) = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo(StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo &&) = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo() = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo& operator=(const StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo &) = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo& operator=(StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelId_ != nullptr
        && this->sourceType_ != nullptr && this->userId_ != nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the channel where the user is. If the user is in the same channel, you can leave this parameter empty. We recommend that you specify this parameter when you perform stream mixing across channels.
    std::shared_ptr<string> channelId_ = nullptr;
    // The type of the video source. This parameter is valid only when you set StreamType to 2. Valid values:
    // 
    // *   **camera** (default)
    // *   **shareScreen**
    std::shared_ptr<string> sourceType_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
