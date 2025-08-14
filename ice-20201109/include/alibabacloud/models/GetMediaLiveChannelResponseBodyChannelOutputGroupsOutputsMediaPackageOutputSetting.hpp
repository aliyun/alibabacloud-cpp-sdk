// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELOUTPUTGROUPSOUTPUTSMEDIAPACKAGEOUTPUTSETTING_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELOUTPUTGROUPSOUTPUTSMEDIAPACKAGEOUTPUTSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting& obj) { 
      DARABONBA_PTR_TO_JSON(AudioGroupId, audioGroupId_);
      DARABONBA_PTR_TO_JSON(NameModifier, nameModifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioGroupId, audioGroupId_);
      DARABONBA_PTR_FROM_JSON(NameModifier, nameModifier_);
    };
    GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting() = default ;
    GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting(const GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting &) = default ;
    GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting(GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting &&) = default ;
    GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting() = default ;
    GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting& operator=(const GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting &) = default ;
    GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting& operator=(GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioGroupId_ != nullptr
        && this->nameModifier_ != nullptr; };
    // audioGroupId Field Functions 
    bool hasAudioGroupId() const { return this->audioGroupId_ != nullptr;};
    void deleteAudioGroupId() { this->audioGroupId_ = nullptr;};
    inline string audioGroupId() const { DARABONBA_PTR_GET_DEFAULT(audioGroupId_, "") };
    inline GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting& setAudioGroupId(string audioGroupId) { DARABONBA_PTR_SET_VALUE(audioGroupId_, audioGroupId) };


    // nameModifier Field Functions 
    bool hasNameModifier() const { return this->nameModifier_ != nullptr;};
    void deleteNameModifier() { this->nameModifier_ = nullptr;};
    inline string nameModifier() const { DARABONBA_PTR_GET_DEFAULT(nameModifier_, "") };
    inline GetMediaLiveChannelResponseBodyChannelOutputGroupsOutputsMediaPackageOutputSetting& setNameModifier(string nameModifier) { DARABONBA_PTR_SET_VALUE(nameModifier_, nameModifier) };


  protected:
    // The manifest audio group ID.
    std::shared_ptr<string> audioGroupId_ = nullptr;
    // The manifest name modifier. The child manifests include this modifier in their M3U8 file names.
    std::shared_ptr<string> nameModifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
