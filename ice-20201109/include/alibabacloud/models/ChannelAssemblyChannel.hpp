// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANNELASSEMBLYCHANNEL_HPP_
#define ALIBABACLOUD_MODELS_CHANNELASSEMBLYCHANNEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChannelAssemblyChannelOutPutConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ChannelAssemblyChannel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChannelAssemblyChannel& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPolicy, accessPolicy_);
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(ChannelTier, channelTier_);
      DARABONBA_PTR_TO_JSON(FillerSourceLocationName, fillerSourceLocationName_);
      DARABONBA_PTR_TO_JSON(FillerSourceName, fillerSourceName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(OutPutConfigList, outPutConfigList_);
      DARABONBA_PTR_TO_JSON(PlaybackMode, playbackMode_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ChannelAssemblyChannel& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPolicy, accessPolicy_);
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(ChannelTier, channelTier_);
      DARABONBA_PTR_FROM_JSON(FillerSourceLocationName, fillerSourceLocationName_);
      DARABONBA_PTR_FROM_JSON(FillerSourceName, fillerSourceName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(OutPutConfigList, outPutConfigList_);
      DARABONBA_PTR_FROM_JSON(PlaybackMode, playbackMode_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ChannelAssemblyChannel() = default ;
    ChannelAssemblyChannel(const ChannelAssemblyChannel &) = default ;
    ChannelAssemblyChannel(ChannelAssemblyChannel &&) = default ;
    ChannelAssemblyChannel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChannelAssemblyChannel() = default ;
    ChannelAssemblyChannel& operator=(const ChannelAssemblyChannel &) = default ;
    ChannelAssemblyChannel& operator=(ChannelAssemblyChannel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPolicy_ == nullptr
        && return this->accessToken_ == nullptr && return this->arn_ == nullptr && return this->channelName_ == nullptr && return this->channelTier_ == nullptr && return this->fillerSourceLocationName_ == nullptr
        && return this->fillerSourceName_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->outPutConfigList_ == nullptr && return this->playbackMode_ == nullptr
        && return this->state_ == nullptr; };
    // accessPolicy Field Functions 
    bool hasAccessPolicy() const { return this->accessPolicy_ != nullptr;};
    void deleteAccessPolicy() { this->accessPolicy_ = nullptr;};
    inline bool accessPolicy() const { DARABONBA_PTR_GET_DEFAULT(accessPolicy_, false) };
    inline ChannelAssemblyChannel& setAccessPolicy(bool accessPolicy) { DARABONBA_PTR_SET_VALUE(accessPolicy_, accessPolicy) };


    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline ChannelAssemblyChannel& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline ChannelAssemblyChannel& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline ChannelAssemblyChannel& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // channelTier Field Functions 
    bool hasChannelTier() const { return this->channelTier_ != nullptr;};
    void deleteChannelTier() { this->channelTier_ = nullptr;};
    inline string channelTier() const { DARABONBA_PTR_GET_DEFAULT(channelTier_, "") };
    inline ChannelAssemblyChannel& setChannelTier(string channelTier) { DARABONBA_PTR_SET_VALUE(channelTier_, channelTier) };


    // fillerSourceLocationName Field Functions 
    bool hasFillerSourceLocationName() const { return this->fillerSourceLocationName_ != nullptr;};
    void deleteFillerSourceLocationName() { this->fillerSourceLocationName_ = nullptr;};
    inline string fillerSourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(fillerSourceLocationName_, "") };
    inline ChannelAssemblyChannel& setFillerSourceLocationName(string fillerSourceLocationName) { DARABONBA_PTR_SET_VALUE(fillerSourceLocationName_, fillerSourceLocationName) };


    // fillerSourceName Field Functions 
    bool hasFillerSourceName() const { return this->fillerSourceName_ != nullptr;};
    void deleteFillerSourceName() { this->fillerSourceName_ = nullptr;};
    inline string fillerSourceName() const { DARABONBA_PTR_GET_DEFAULT(fillerSourceName_, "") };
    inline ChannelAssemblyChannel& setFillerSourceName(string fillerSourceName) { DARABONBA_PTR_SET_VALUE(fillerSourceName_, fillerSourceName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ChannelAssemblyChannel& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ChannelAssemblyChannel& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // outPutConfigList Field Functions 
    bool hasOutPutConfigList() const { return this->outPutConfigList_ != nullptr;};
    void deleteOutPutConfigList() { this->outPutConfigList_ = nullptr;};
    inline const vector<ChannelAssemblyChannelOutPutConfigList> & outPutConfigList() const { DARABONBA_PTR_GET_CONST(outPutConfigList_, vector<ChannelAssemblyChannelOutPutConfigList>) };
    inline vector<ChannelAssemblyChannelOutPutConfigList> outPutConfigList() { DARABONBA_PTR_GET(outPutConfigList_, vector<ChannelAssemblyChannelOutPutConfigList>) };
    inline ChannelAssemblyChannel& setOutPutConfigList(const vector<ChannelAssemblyChannelOutPutConfigList> & outPutConfigList) { DARABONBA_PTR_SET_VALUE(outPutConfigList_, outPutConfigList) };
    inline ChannelAssemblyChannel& setOutPutConfigList(vector<ChannelAssemblyChannelOutPutConfigList> && outPutConfigList) { DARABONBA_PTR_SET_RVALUE(outPutConfigList_, outPutConfigList) };


    // playbackMode Field Functions 
    bool hasPlaybackMode() const { return this->playbackMode_ != nullptr;};
    void deletePlaybackMode() { this->playbackMode_ = nullptr;};
    inline string playbackMode() const { DARABONBA_PTR_GET_DEFAULT(playbackMode_, "") };
    inline ChannelAssemblyChannel& setPlaybackMode(string playbackMode) { DARABONBA_PTR_SET_VALUE(playbackMode_, playbackMode) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline ChannelAssemblyChannel& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<bool> accessPolicy_ = nullptr;
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<string> channelName_ = nullptr;
    std::shared_ptr<string> channelTier_ = nullptr;
    std::shared_ptr<string> fillerSourceLocationName_ = nullptr;
    std::shared_ptr<string> fillerSourceName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<vector<ChannelAssemblyChannelOutPutConfigList>> outPutConfigList_ = nullptr;
    std::shared_ptr<string> playbackMode_ = nullptr;
    std::shared_ptr<int32_t> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
