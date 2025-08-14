// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTOUTPUTGROUPSOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTOUTPUTGROUPSOUTPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveChannelRequestOutputGroupsOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveChannelRequestOutputGroupsOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(AudioSettingNames, audioSettingNames_);
      DARABONBA_PTR_TO_JSON(MediaPackageOutputSetting, mediaPackageOutputSetting_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VideoSettingName, videoSettingName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveChannelRequestOutputGroupsOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioSettingNames, audioSettingNames_);
      DARABONBA_PTR_FROM_JSON(MediaPackageOutputSetting, mediaPackageOutputSetting_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VideoSettingName, videoSettingName_);
    };
    CreateMediaLiveChannelRequestOutputGroupsOutputs() = default ;
    CreateMediaLiveChannelRequestOutputGroupsOutputs(const CreateMediaLiveChannelRequestOutputGroupsOutputs &) = default ;
    CreateMediaLiveChannelRequestOutputGroupsOutputs(CreateMediaLiveChannelRequestOutputGroupsOutputs &&) = default ;
    CreateMediaLiveChannelRequestOutputGroupsOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveChannelRequestOutputGroupsOutputs() = default ;
    CreateMediaLiveChannelRequestOutputGroupsOutputs& operator=(const CreateMediaLiveChannelRequestOutputGroupsOutputs &) = default ;
    CreateMediaLiveChannelRequestOutputGroupsOutputs& operator=(CreateMediaLiveChannelRequestOutputGroupsOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioSettingNames_ != nullptr
        && this->mediaPackageOutputSetting_ != nullptr && this->mediaType_ != nullptr && this->name_ != nullptr && this->videoSettingName_ != nullptr; };
    // audioSettingNames Field Functions 
    bool hasAudioSettingNames() const { return this->audioSettingNames_ != nullptr;};
    void deleteAudioSettingNames() { this->audioSettingNames_ = nullptr;};
    inline const vector<string> & audioSettingNames() const { DARABONBA_PTR_GET_CONST(audioSettingNames_, vector<string>) };
    inline vector<string> audioSettingNames() { DARABONBA_PTR_GET(audioSettingNames_, vector<string>) };
    inline CreateMediaLiveChannelRequestOutputGroupsOutputs& setAudioSettingNames(const vector<string> & audioSettingNames) { DARABONBA_PTR_SET_VALUE(audioSettingNames_, audioSettingNames) };
    inline CreateMediaLiveChannelRequestOutputGroupsOutputs& setAudioSettingNames(vector<string> && audioSettingNames) { DARABONBA_PTR_SET_RVALUE(audioSettingNames_, audioSettingNames) };


    // mediaPackageOutputSetting Field Functions 
    bool hasMediaPackageOutputSetting() const { return this->mediaPackageOutputSetting_ != nullptr;};
    void deleteMediaPackageOutputSetting() { this->mediaPackageOutputSetting_ = nullptr;};
    inline const Models::CreateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting & mediaPackageOutputSetting() const { DARABONBA_PTR_GET_CONST(mediaPackageOutputSetting_, Models::CreateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting) };
    inline Models::CreateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting mediaPackageOutputSetting() { DARABONBA_PTR_GET(mediaPackageOutputSetting_, Models::CreateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting) };
    inline CreateMediaLiveChannelRequestOutputGroupsOutputs& setMediaPackageOutputSetting(const Models::CreateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting & mediaPackageOutputSetting) { DARABONBA_PTR_SET_VALUE(mediaPackageOutputSetting_, mediaPackageOutputSetting) };
    inline CreateMediaLiveChannelRequestOutputGroupsOutputs& setMediaPackageOutputSetting(Models::CreateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting && mediaPackageOutputSetting) { DARABONBA_PTR_SET_RVALUE(mediaPackageOutputSetting_, mediaPackageOutputSetting) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline int32_t mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, 0) };
    inline CreateMediaLiveChannelRequestOutputGroupsOutputs& setMediaType(int32_t mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMediaLiveChannelRequestOutputGroupsOutputs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // videoSettingName Field Functions 
    bool hasVideoSettingName() const { return this->videoSettingName_ != nullptr;};
    void deleteVideoSettingName() { this->videoSettingName_ = nullptr;};
    inline string videoSettingName() const { DARABONBA_PTR_GET_DEFAULT(videoSettingName_, "") };
    inline CreateMediaLiveChannelRequestOutputGroupsOutputs& setVideoSettingName(string videoSettingName) { DARABONBA_PTR_SET_VALUE(videoSettingName_, videoSettingName) };


  protected:
    // The referenced AudioSettings.
    std::shared_ptr<vector<string>> audioSettingNames_ = nullptr;
    // The settings of the output delivered to MediaPackage.
    std::shared_ptr<Models::CreateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting> mediaPackageOutputSetting_ = nullptr;
    // The media type of the output. Valid values:
    // 
    // *   0: Audio and Video.
    // *   1: Audio. If you set the value to 1, you cannot reference VideoSettings.
    // *   2: Video. If you set the value to 2, you cannot reference AudioSettings.
    std::shared_ptr<int32_t> mediaType_ = nullptr;
    // The name of the output. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the referenced VideoSettings.
    std::shared_ptr<string> videoSettingName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
