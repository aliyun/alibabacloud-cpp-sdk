// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSOUTPUTGROUPSOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSOUTPUTGROUPSOUTPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputsMediaPackageOutputSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(AudioSettingNames, audioSettingNames_);
      DARABONBA_PTR_TO_JSON(MediaPackageOutputSetting, mediaPackageOutputSetting_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VideoSettingName, videoSettingName_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioSettingNames, audioSettingNames_);
      DARABONBA_PTR_FROM_JSON(MediaPackageOutputSetting, mediaPackageOutputSetting_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VideoSettingName, videoSettingName_);
    };
    ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs() = default ;
    ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs(const ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs(ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs &&) = default ;
    ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs() = default ;
    ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs& operator=(const ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs& operator=(ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs &&) = default ;
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
    inline ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs& setAudioSettingNames(const vector<string> & audioSettingNames) { DARABONBA_PTR_SET_VALUE(audioSettingNames_, audioSettingNames) };
    inline ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs& setAudioSettingNames(vector<string> && audioSettingNames) { DARABONBA_PTR_SET_RVALUE(audioSettingNames_, audioSettingNames) };


    // mediaPackageOutputSetting Field Functions 
    bool hasMediaPackageOutputSetting() const { return this->mediaPackageOutputSetting_ != nullptr;};
    void deleteMediaPackageOutputSetting() { this->mediaPackageOutputSetting_ = nullptr;};
    inline const Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputsMediaPackageOutputSetting & mediaPackageOutputSetting() const { DARABONBA_PTR_GET_CONST(mediaPackageOutputSetting_, Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputsMediaPackageOutputSetting) };
    inline Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputsMediaPackageOutputSetting mediaPackageOutputSetting() { DARABONBA_PTR_GET(mediaPackageOutputSetting_, Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputsMediaPackageOutputSetting) };
    inline ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs& setMediaPackageOutputSetting(const Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputsMediaPackageOutputSetting & mediaPackageOutputSetting) { DARABONBA_PTR_SET_VALUE(mediaPackageOutputSetting_, mediaPackageOutputSetting) };
    inline ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs& setMediaPackageOutputSetting(Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputsMediaPackageOutputSetting && mediaPackageOutputSetting) { DARABONBA_PTR_SET_RVALUE(mediaPackageOutputSetting_, mediaPackageOutputSetting) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline int32_t mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, 0) };
    inline ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs& setMediaType(int32_t mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // videoSettingName Field Functions 
    bool hasVideoSettingName() const { return this->videoSettingName_ != nullptr;};
    void deleteVideoSettingName() { this->videoSettingName_ = nullptr;};
    inline string videoSettingName() const { DARABONBA_PTR_GET_DEFAULT(videoSettingName_, "") };
    inline ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputs& setVideoSettingName(string videoSettingName) { DARABONBA_PTR_SET_VALUE(videoSettingName_, videoSettingName) };


  protected:
    // The referenced AudioSettings.
    std::shared_ptr<vector<string>> audioSettingNames_ = nullptr;
    // The settings of the output delivered to MediaPackage.
    std::shared_ptr<Models::ListMediaLiveChannelsResponseBodyChannelsOutputGroupsOutputsMediaPackageOutputSetting> mediaPackageOutputSetting_ = nullptr;
    // The media type of the output.
    std::shared_ptr<int32_t> mediaType_ = nullptr;
    // The name of the output.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the referenced VideoSettings.
    std::shared_ptr<string> videoSettingName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
