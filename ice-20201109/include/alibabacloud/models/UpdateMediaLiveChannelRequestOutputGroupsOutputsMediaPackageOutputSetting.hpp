// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTOUTPUTGROUPSOUTPUTSMEDIAPACKAGEOUTPUTSETTING_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTOUTPUTGROUPSOUTPUTSMEDIAPACKAGEOUTPUTSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting& obj) { 
      DARABONBA_PTR_TO_JSON(AudioGroupId, audioGroupId_);
      DARABONBA_PTR_TO_JSON(NameModifier, nameModifier_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioGroupId, audioGroupId_);
      DARABONBA_PTR_FROM_JSON(NameModifier, nameModifier_);
    };
    UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting() = default ;
    UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting(const UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting &) = default ;
    UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting(UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting &&) = default ;
    UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting() = default ;
    UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting& operator=(const UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting &) = default ;
    UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting& operator=(UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioGroupId_ == nullptr
        && return this->nameModifier_ == nullptr; };
    // audioGroupId Field Functions 
    bool hasAudioGroupId() const { return this->audioGroupId_ != nullptr;};
    void deleteAudioGroupId() { this->audioGroupId_ = nullptr;};
    inline string audioGroupId() const { DARABONBA_PTR_GET_DEFAULT(audioGroupId_, "") };
    inline UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting& setAudioGroupId(string audioGroupId) { DARABONBA_PTR_SET_VALUE(audioGroupId_, audioGroupId) };


    // nameModifier Field Functions 
    bool hasNameModifier() const { return this->nameModifier_ != nullptr;};
    void deleteNameModifier() { this->nameModifier_ = nullptr;};
    inline string nameModifier() const { DARABONBA_PTR_GET_DEFAULT(nameModifier_, "") };
    inline UpdateMediaLiveChannelRequestOutputGroupsOutputsMediaPackageOutputSetting& setNameModifier(string nameModifier) { DARABONBA_PTR_SET_VALUE(nameModifier_, nameModifier) };


  protected:
    // The manifest audio group ID. To associate several audio tracks into one group, assign the same audio group ID. Viewers can select a track as needed. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 40 characters in length.
    std::shared_ptr<string> audioGroupId_ = nullptr;
    // The manifest name modifier. The child manifests include this modifier in their M3U8 file names. Letters, digits, hyphens (-), and underscores (_) are supported. The maximum length is 40 characters.
    std::shared_ptr<string> nameModifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
