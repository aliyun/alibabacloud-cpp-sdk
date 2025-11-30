// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGOUTPUTGROUPSOUTPUTSHLSGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGOUTPUTGROUPSOUTPUTSHLSGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AudioGroup, audioGroup_);
      DARABONBA_PTR_TO_JSON(AutoSelect, autoSelect_);
      DARABONBA_PTR_TO_JSON(Forced, forced_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SubtitleGroup, subtitleGroup_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioGroup, audioGroup_);
      DARABONBA_PTR_FROM_JSON(AutoSelect, autoSelect_);
      DARABONBA_PTR_FROM_JSON(Forced, forced_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SubtitleGroup, subtitleGroup_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig() = default ;
    MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig(const MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig &) = default ;
    MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig(MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig &&) = default ;
    MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig() = default ;
    MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig& operator=(const MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig &) = default ;
    MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig& operator=(MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioGroup_ == nullptr
        && return this->autoSelect_ == nullptr && return this->forced_ == nullptr && return this->group_ == nullptr && return this->isDefault_ == nullptr && return this->language_ == nullptr
        && return this->name_ == nullptr && return this->subtitleGroup_ == nullptr && return this->type_ == nullptr; };
    // audioGroup Field Functions 
    bool hasAudioGroup() const { return this->audioGroup_ != nullptr;};
    void deleteAudioGroup() { this->audioGroup_ = nullptr;};
    inline string audioGroup() const { DARABONBA_PTR_GET_DEFAULT(audioGroup_, "") };
    inline MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig& setAudioGroup(string audioGroup) { DARABONBA_PTR_SET_VALUE(audioGroup_, audioGroup) };


    // autoSelect Field Functions 
    bool hasAutoSelect() const { return this->autoSelect_ != nullptr;};
    void deleteAutoSelect() { this->autoSelect_ = nullptr;};
    inline string autoSelect() const { DARABONBA_PTR_GET_DEFAULT(autoSelect_, "") };
    inline MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig& setAutoSelect(string autoSelect) { DARABONBA_PTR_SET_VALUE(autoSelect_, autoSelect) };


    // forced Field Functions 
    bool hasForced() const { return this->forced_ != nullptr;};
    void deleteForced() { this->forced_ = nullptr;};
    inline string forced() const { DARABONBA_PTR_GET_DEFAULT(forced_, "") };
    inline MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig& setForced(string forced) { DARABONBA_PTR_SET_VALUE(forced_, forced) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline string isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
    inline MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subtitleGroup Field Functions 
    bool hasSubtitleGroup() const { return this->subtitleGroup_ != nullptr;};
    void deleteSubtitleGroup() { this->subtitleGroup_ = nullptr;};
    inline string subtitleGroup() const { DARABONBA_PTR_GET_DEFAULT(subtitleGroup_, "") };
    inline MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig& setSubtitleGroup(string subtitleGroup) { DARABONBA_PTR_SET_VALUE(subtitleGroup_, subtitleGroup) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MediaConvertJobConfigOutputGroupsOutputsHlsGroupConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> audioGroup_ = nullptr;
    std::shared_ptr<string> autoSelect_ = nullptr;
    std::shared_ptr<string> forced_ = nullptr;
    std::shared_ptr<string> group_ = nullptr;
    std::shared_ptr<string> isDefault_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> subtitleGroup_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
