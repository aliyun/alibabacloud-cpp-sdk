// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTVOICEGROUPSRESPONSEBODYVOICEGROUPSVOICELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTVOICEGROUPSRESPONSEBODYVOICEGROUPSVOICELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList& obj) { 
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SupportSampleRate, supportSampleRate_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Voice, voice_);
      DARABONBA_PTR_TO_JSON(VoiceSource, voiceSource_);
      DARABONBA_PTR_TO_JSON(VoiceType, voiceType_);
      DARABONBA_PTR_TO_JSON(VoiceUrl, voiceUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SupportSampleRate, supportSampleRate_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Voice, voice_);
      DARABONBA_PTR_FROM_JSON(VoiceSource, voiceSource_);
      DARABONBA_PTR_FROM_JSON(VoiceType, voiceType_);
      DARABONBA_PTR_FROM_JSON(VoiceUrl, voiceUrl_);
    };
    ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList() = default ;
    ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList(const ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList &) = default ;
    ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList(ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList &&) = default ;
    ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList() = default ;
    ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList& operator=(const ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList &) = default ;
    ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList& operator=(ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->name_ != nullptr && this->remark_ != nullptr && this->supportSampleRate_ != nullptr && this->tag_ != nullptr && this->voice_ != nullptr
        && this->voiceSource_ != nullptr && this->voiceType_ != nullptr && this->voiceUrl_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // supportSampleRate Field Functions 
    bool hasSupportSampleRate() const { return this->supportSampleRate_ != nullptr;};
    void deleteSupportSampleRate() { this->supportSampleRate_ = nullptr;};
    inline string supportSampleRate() const { DARABONBA_PTR_GET_DEFAULT(supportSampleRate_, "") };
    inline ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList& setSupportSampleRate(string supportSampleRate) { DARABONBA_PTR_SET_VALUE(supportSampleRate_, supportSampleRate) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // voice Field Functions 
    bool hasVoice() const { return this->voice_ != nullptr;};
    void deleteVoice() { this->voice_ = nullptr;};
    inline string voice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
    inline ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


    // voiceSource Field Functions 
    bool hasVoiceSource() const { return this->voiceSource_ != nullptr;};
    void deleteVoiceSource() { this->voiceSource_ = nullptr;};
    inline string voiceSource() const { DARABONBA_PTR_GET_DEFAULT(voiceSource_, "") };
    inline ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList& setVoiceSource(string voiceSource) { DARABONBA_PTR_SET_VALUE(voiceSource_, voiceSource) };


    // voiceType Field Functions 
    bool hasVoiceType() const { return this->voiceType_ != nullptr;};
    void deleteVoiceType() { this->voiceType_ = nullptr;};
    inline string voiceType() const { DARABONBA_PTR_GET_DEFAULT(voiceType_, "") };
    inline ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList& setVoiceType(string voiceType) { DARABONBA_PTR_SET_VALUE(voiceType_, voiceType) };


    // voiceUrl Field Functions 
    bool hasVoiceUrl() const { return this->voiceUrl_ != nullptr;};
    void deleteVoiceUrl() { this->voiceUrl_ = nullptr;};
    inline string voiceUrl() const { DARABONBA_PTR_GET_DEFAULT(voiceUrl_, "") };
    inline ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList& setVoiceUrl(string voiceUrl) { DARABONBA_PTR_SET_VALUE(voiceUrl_, voiceUrl) };


  protected:
    // The speaker description.
    std::shared_ptr<string> desc_ = nullptr;
    // The speaker name.
    std::shared_ptr<string> name_ = nullptr;
    // The remarks of the speaker.
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> supportSampleRate_ = nullptr;
    // The tag of the speaker type.
    std::shared_ptr<string> tag_ = nullptr;
    // The speaker ID.
    std::shared_ptr<string> voice_ = nullptr;
    std::shared_ptr<string> voiceSource_ = nullptr;
    // The speaker type.
    // 
    // Valid values:
    // 
    // *   Male
    // *   Female
    // *   Boy
    // *   Girl
    std::shared_ptr<string> voiceType_ = nullptr;
    // The URL of the sample audio file.
    std::shared_ptr<string> voiceUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
