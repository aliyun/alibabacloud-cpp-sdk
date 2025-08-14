// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANNELOUTPUTCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_CHANNELOUTPUTCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ChannelOutPutConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChannelOutPutConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(ManifestName, manifestName_);
      DARABONBA_PTR_TO_JSON(ManifestSettings, manifestSettings_);
      DARABONBA_PTR_TO_JSON(PlaybackUrl, playbackUrl_);
      DARABONBA_PTR_TO_JSON(SourceGroupName, sourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ChannelOutPutConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(ManifestName, manifestName_);
      DARABONBA_PTR_FROM_JSON(ManifestSettings, manifestSettings_);
      DARABONBA_PTR_FROM_JSON(PlaybackUrl, playbackUrl_);
      DARABONBA_PTR_FROM_JSON(SourceGroupName, sourceGroupName_);
    };
    ChannelOutPutConfigList() = default ;
    ChannelOutPutConfigList(const ChannelOutPutConfigList &) = default ;
    ChannelOutPutConfigList(ChannelOutPutConfigList &&) = default ;
    ChannelOutPutConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChannelOutPutConfigList() = default ;
    ChannelOutPutConfigList& operator=(const ChannelOutPutConfigList &) = default ;
    ChannelOutPutConfigList& operator=(ChannelOutPutConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelName_ != nullptr
        && this->format_ != nullptr && this->manifestName_ != nullptr && this->manifestSettings_ != nullptr && this->playbackUrl_ != nullptr && this->sourceGroupName_ != nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline ChannelOutPutConfigList& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline ChannelOutPutConfigList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // manifestName Field Functions 
    bool hasManifestName() const { return this->manifestName_ != nullptr;};
    void deleteManifestName() { this->manifestName_ = nullptr;};
    inline string manifestName() const { DARABONBA_PTR_GET_DEFAULT(manifestName_, "") };
    inline ChannelOutPutConfigList& setManifestName(string manifestName) { DARABONBA_PTR_SET_VALUE(manifestName_, manifestName) };


    // manifestSettings Field Functions 
    bool hasManifestSettings() const { return this->manifestSettings_ != nullptr;};
    void deleteManifestSettings() { this->manifestSettings_ = nullptr;};
    inline string manifestSettings() const { DARABONBA_PTR_GET_DEFAULT(manifestSettings_, "") };
    inline ChannelOutPutConfigList& setManifestSettings(string manifestSettings) { DARABONBA_PTR_SET_VALUE(manifestSettings_, manifestSettings) };


    // playbackUrl Field Functions 
    bool hasPlaybackUrl() const { return this->playbackUrl_ != nullptr;};
    void deletePlaybackUrl() { this->playbackUrl_ = nullptr;};
    inline string playbackUrl() const { DARABONBA_PTR_GET_DEFAULT(playbackUrl_, "") };
    inline ChannelOutPutConfigList& setPlaybackUrl(string playbackUrl) { DARABONBA_PTR_SET_VALUE(playbackUrl_, playbackUrl) };


    // sourceGroupName Field Functions 
    bool hasSourceGroupName() const { return this->sourceGroupName_ != nullptr;};
    void deleteSourceGroupName() { this->sourceGroupName_ = nullptr;};
    inline string sourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupName_, "") };
    inline ChannelOutPutConfigList& setSourceGroupName(string sourceGroupName) { DARABONBA_PTR_SET_VALUE(sourceGroupName_, sourceGroupName) };


  protected:
    std::shared_ptr<string> channelName_ = nullptr;
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> manifestName_ = nullptr;
    std::shared_ptr<string> manifestSettings_ = nullptr;
    std::shared_ptr<string> playbackUrl_ = nullptr;
    std::shared_ptr<string> sourceGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
