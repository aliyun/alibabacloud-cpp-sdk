// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANNEL_HPP_
#define ALIBABACLOUD_MODELS_CHANNEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class Channel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Channel& obj) { 
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
    friend void from_json(const Darabonba::Json& j, Channel& obj) { 
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
    Channel() = default ;
    Channel(const Channel &) = default ;
    Channel(Channel &&) = default ;
    Channel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Channel() = default ;
    Channel& operator=(const Channel &) = default ;
    Channel& operator=(Channel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OutPutConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OutPutConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(ManifestName, manifestName_);
        DARABONBA_PTR_TO_JSON(ManifestSettings, manifestSettings_);
        DARABONBA_PTR_TO_JSON(PlaybackUrl, playbackUrl_);
        DARABONBA_PTR_TO_JSON(SourceGroupName, sourceGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, OutPutConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(ManifestName, manifestName_);
        DARABONBA_PTR_FROM_JSON(ManifestSettings, manifestSettings_);
        DARABONBA_PTR_FROM_JSON(PlaybackUrl, playbackUrl_);
        DARABONBA_PTR_FROM_JSON(SourceGroupName, sourceGroupName_);
      };
      OutPutConfigList() = default ;
      OutPutConfigList(const OutPutConfigList &) = default ;
      OutPutConfigList(OutPutConfigList &&) = default ;
      OutPutConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OutPutConfigList() = default ;
      OutPutConfigList& operator=(const OutPutConfigList &) = default ;
      OutPutConfigList& operator=(OutPutConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channelName_ == nullptr
        && this->format_ == nullptr && this->manifestName_ == nullptr && this->manifestSettings_ == nullptr && this->playbackUrl_ == nullptr && this->sourceGroupName_ == nullptr; };
      // channelName Field Functions 
      bool hasChannelName() const { return this->channelName_ != nullptr;};
      void deleteChannelName() { this->channelName_ = nullptr;};
      inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
      inline OutPutConfigList& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline OutPutConfigList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // manifestName Field Functions 
      bool hasManifestName() const { return this->manifestName_ != nullptr;};
      void deleteManifestName() { this->manifestName_ = nullptr;};
      inline string getManifestName() const { DARABONBA_PTR_GET_DEFAULT(manifestName_, "") };
      inline OutPutConfigList& setManifestName(string manifestName) { DARABONBA_PTR_SET_VALUE(manifestName_, manifestName) };


      // manifestSettings Field Functions 
      bool hasManifestSettings() const { return this->manifestSettings_ != nullptr;};
      void deleteManifestSettings() { this->manifestSettings_ = nullptr;};
      inline string getManifestSettings() const { DARABONBA_PTR_GET_DEFAULT(manifestSettings_, "") };
      inline OutPutConfigList& setManifestSettings(string manifestSettings) { DARABONBA_PTR_SET_VALUE(manifestSettings_, manifestSettings) };


      // playbackUrl Field Functions 
      bool hasPlaybackUrl() const { return this->playbackUrl_ != nullptr;};
      void deletePlaybackUrl() { this->playbackUrl_ = nullptr;};
      inline string getPlaybackUrl() const { DARABONBA_PTR_GET_DEFAULT(playbackUrl_, "") };
      inline OutPutConfigList& setPlaybackUrl(string playbackUrl) { DARABONBA_PTR_SET_VALUE(playbackUrl_, playbackUrl) };


      // sourceGroupName Field Functions 
      bool hasSourceGroupName() const { return this->sourceGroupName_ != nullptr;};
      void deleteSourceGroupName() { this->sourceGroupName_ = nullptr;};
      inline string getSourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupName_, "") };
      inline OutPutConfigList& setSourceGroupName(string sourceGroupName) { DARABONBA_PTR_SET_VALUE(sourceGroupName_, sourceGroupName) };


    protected:
      shared_ptr<string> channelName_ {};
      shared_ptr<string> format_ {};
      shared_ptr<string> manifestName_ {};
      shared_ptr<string> manifestSettings_ {};
      shared_ptr<string> playbackUrl_ {};
      shared_ptr<string> sourceGroupName_ {};
    };

    virtual bool empty() const override { return this->accessPolicy_ == nullptr
        && this->accessToken_ == nullptr && this->arn_ == nullptr && this->channelName_ == nullptr && this->channelTier_ == nullptr && this->fillerSourceLocationName_ == nullptr
        && this->fillerSourceName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->outPutConfigList_ == nullptr && this->playbackMode_ == nullptr
        && this->state_ == nullptr; };
    // accessPolicy Field Functions 
    bool hasAccessPolicy() const { return this->accessPolicy_ != nullptr;};
    void deleteAccessPolicy() { this->accessPolicy_ = nullptr;};
    inline bool getAccessPolicy() const { DARABONBA_PTR_GET_DEFAULT(accessPolicy_, false) };
    inline Channel& setAccessPolicy(bool accessPolicy) { DARABONBA_PTR_SET_VALUE(accessPolicy_, accessPolicy) };


    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline Channel& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline Channel& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline Channel& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // channelTier Field Functions 
    bool hasChannelTier() const { return this->channelTier_ != nullptr;};
    void deleteChannelTier() { this->channelTier_ = nullptr;};
    inline string getChannelTier() const { DARABONBA_PTR_GET_DEFAULT(channelTier_, "") };
    inline Channel& setChannelTier(string channelTier) { DARABONBA_PTR_SET_VALUE(channelTier_, channelTier) };


    // fillerSourceLocationName Field Functions 
    bool hasFillerSourceLocationName() const { return this->fillerSourceLocationName_ != nullptr;};
    void deleteFillerSourceLocationName() { this->fillerSourceLocationName_ = nullptr;};
    inline string getFillerSourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(fillerSourceLocationName_, "") };
    inline Channel& setFillerSourceLocationName(string fillerSourceLocationName) { DARABONBA_PTR_SET_VALUE(fillerSourceLocationName_, fillerSourceLocationName) };


    // fillerSourceName Field Functions 
    bool hasFillerSourceName() const { return this->fillerSourceName_ != nullptr;};
    void deleteFillerSourceName() { this->fillerSourceName_ = nullptr;};
    inline string getFillerSourceName() const { DARABONBA_PTR_GET_DEFAULT(fillerSourceName_, "") };
    inline Channel& setFillerSourceName(string fillerSourceName) { DARABONBA_PTR_SET_VALUE(fillerSourceName_, fillerSourceName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline Channel& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline Channel& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // outPutConfigList Field Functions 
    bool hasOutPutConfigList() const { return this->outPutConfigList_ != nullptr;};
    void deleteOutPutConfigList() { this->outPutConfigList_ = nullptr;};
    inline const vector<Channel::OutPutConfigList> & getOutPutConfigList() const { DARABONBA_PTR_GET_CONST(outPutConfigList_, vector<Channel::OutPutConfigList>) };
    inline vector<Channel::OutPutConfigList> getOutPutConfigList() { DARABONBA_PTR_GET(outPutConfigList_, vector<Channel::OutPutConfigList>) };
    inline Channel& setOutPutConfigList(const vector<Channel::OutPutConfigList> & outPutConfigList) { DARABONBA_PTR_SET_VALUE(outPutConfigList_, outPutConfigList) };
    inline Channel& setOutPutConfigList(vector<Channel::OutPutConfigList> && outPutConfigList) { DARABONBA_PTR_SET_RVALUE(outPutConfigList_, outPutConfigList) };


    // playbackMode Field Functions 
    bool hasPlaybackMode() const { return this->playbackMode_ != nullptr;};
    void deletePlaybackMode() { this->playbackMode_ = nullptr;};
    inline string getPlaybackMode() const { DARABONBA_PTR_GET_DEFAULT(playbackMode_, "") };
    inline Channel& setPlaybackMode(string playbackMode) { DARABONBA_PTR_SET_VALUE(playbackMode_, playbackMode) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline Channel& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    shared_ptr<bool> accessPolicy_ {};
    shared_ptr<string> accessToken_ {};
    shared_ptr<string> arn_ {};
    shared_ptr<string> channelName_ {};
    shared_ptr<string> channelTier_ {};
    shared_ptr<string> fillerSourceLocationName_ {};
    shared_ptr<string> fillerSourceName_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<vector<Channel::OutPutConfigList>> outPutConfigList_ {};
    shared_ptr<string> playbackMode_ {};
    shared_ptr<int32_t> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
