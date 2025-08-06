// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATESTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATESTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio.hpp>
#include <alibabacloud/models/GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateContainer.hpp>
#include <alibabacloud/models/GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig.hpp>
#include <alibabacloud/models/GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig.hpp>
#include <alibabacloud/models/GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig.hpp>
#include <alibabacloud/models/GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(Encrypt, encrypt_);
      DARABONBA_PTR_TO_JSON(EncryptionConfig, encryptionConfig_);
      DARABONBA_PTR_TO_JSON(IsLocked, isLocked_);
      DARABONBA_PTR_TO_JSON(MediaDefinition, mediaDefinition_);
      DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NarrowBand, narrowBand_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_TO_JSON(UseWaterMark, useWaterMark_);
      DARABONBA_PTR_TO_JSON(UserWaterMark, userWaterMark_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(Encrypt, encrypt_);
      DARABONBA_PTR_FROM_JSON(EncryptionConfig, encryptionConfig_);
      DARABONBA_PTR_FROM_JSON(IsLocked, isLocked_);
      DARABONBA_PTR_FROM_JSON(MediaDefinition, mediaDefinition_);
      DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NarrowBand, narrowBand_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_FROM_JSON(UseWaterMark, useWaterMark_);
      DARABONBA_PTR_FROM_JSON(UserWaterMark, userWaterMark_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate &&) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& operator=(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& operator=(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audio_ != nullptr
        && this->condition_ != nullptr && this->container_ != nullptr && this->definition_ != nullptr && this->encrypt_ != nullptr && this->encryptionConfig_ != nullptr
        && this->isLocked_ != nullptr && this->mediaDefinition_ != nullptr && this->muxConfig_ != nullptr && this->name_ != nullptr && this->narrowBand_ != nullptr
        && this->status_ != nullptr && this->templateId_ != nullptr && this->transConfig_ != nullptr && this->useWaterMark_ != nullptr && this->userWaterMark_ != nullptr
        && this->video_ != nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio) };
    inline Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio audio() { DARABONBA_PTR_GET(audio_, Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setAudio(const Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setAudio(Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateContainer) };
    inline Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateContainer container() { DARABONBA_PTR_GET(container_, Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateContainer) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setContainer(const Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setContainer(Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // encrypt Field Functions 
    bool hasEncrypt() const { return this->encrypt_ != nullptr;};
    void deleteEncrypt() { this->encrypt_ = nullptr;};
    inline string encrypt() const { DARABONBA_PTR_GET_DEFAULT(encrypt_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setEncrypt(string encrypt) { DARABONBA_PTR_SET_VALUE(encrypt_, encrypt) };


    // encryptionConfig Field Functions 
    bool hasEncryptionConfig() const { return this->encryptionConfig_ != nullptr;};
    void deleteEncryptionConfig() { this->encryptionConfig_ = nullptr;};
    inline const Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig & encryptionConfig() const { DARABONBA_PTR_GET_CONST(encryptionConfig_, Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig) };
    inline Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig encryptionConfig() { DARABONBA_PTR_GET(encryptionConfig_, Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setEncryptionConfig(const Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig & encryptionConfig) { DARABONBA_PTR_SET_VALUE(encryptionConfig_, encryptionConfig) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setEncryptionConfig(Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig && encryptionConfig) { DARABONBA_PTR_SET_RVALUE(encryptionConfig_, encryptionConfig) };


    // isLocked Field Functions 
    bool hasIsLocked() const { return this->isLocked_ != nullptr;};
    void deleteIsLocked() { this->isLocked_ = nullptr;};
    inline string isLocked() const { DARABONBA_PTR_GET_DEFAULT(isLocked_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setIsLocked(string isLocked) { DARABONBA_PTR_SET_VALUE(isLocked_, isLocked) };


    // mediaDefinition Field Functions 
    bool hasMediaDefinition() const { return this->mediaDefinition_ != nullptr;};
    void deleteMediaDefinition() { this->mediaDefinition_ = nullptr;};
    inline string mediaDefinition() const { DARABONBA_PTR_GET_DEFAULT(mediaDefinition_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setMediaDefinition(string mediaDefinition) { DARABONBA_PTR_SET_VALUE(mediaDefinition_, mediaDefinition) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline const Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig & muxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig) };
    inline Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig muxConfig() { DARABONBA_PTR_GET(muxConfig_, Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setMuxConfig(const Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setMuxConfig(Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // narrowBand Field Functions 
    bool hasNarrowBand() const { return this->narrowBand_ != nullptr;};
    void deleteNarrowBand() { this->narrowBand_ = nullptr;};
    inline string narrowBand() const { DARABONBA_PTR_GET_DEFAULT(narrowBand_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setNarrowBand(string narrowBand) { DARABONBA_PTR_SET_VALUE(narrowBand_, narrowBand) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline const Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig & transConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig) };
    inline Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig transConfig() { DARABONBA_PTR_GET(transConfig_, Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setTransConfig(const Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setTransConfig(Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


    // useWaterMark Field Functions 
    bool hasUseWaterMark() const { return this->useWaterMark_ != nullptr;};
    void deleteUseWaterMark() { this->useWaterMark_ = nullptr;};
    inline string useWaterMark() const { DARABONBA_PTR_GET_DEFAULT(useWaterMark_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setUseWaterMark(string useWaterMark) { DARABONBA_PTR_SET_VALUE(useWaterMark_, useWaterMark) };


    // userWaterMark Field Functions 
    bool hasUserWaterMark() const { return this->userWaterMark_ != nullptr;};
    void deleteUserWaterMark() { this->userWaterMark_ = nullptr;};
    inline string userWaterMark() const { DARABONBA_PTR_GET_DEFAULT(userWaterMark_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setUserWaterMark(string userWaterMark) { DARABONBA_PTR_SET_VALUE(userWaterMark_, userWaterMark) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo) };
    inline Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo video() { DARABONBA_PTR_GET(video_, Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setVideo(const Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate& setVideo(Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    std::shared_ptr<Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio> audio_ = nullptr;
    std::shared_ptr<string> condition_ = nullptr;
    std::shared_ptr<Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateContainer> container_ = nullptr;
    std::shared_ptr<string> definition_ = nullptr;
    std::shared_ptr<string> encrypt_ = nullptr;
    std::shared_ptr<Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateEncryptionConfig> encryptionConfig_ = nullptr;
    std::shared_ptr<string> isLocked_ = nullptr;
    std::shared_ptr<string> mediaDefinition_ = nullptr;
    std::shared_ptr<Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig> muxConfig_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> narrowBand_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig> transConfig_ = nullptr;
    std::shared_ptr<string> useWaterMark_ = nullptr;
    std::shared_ptr<string> userWaterMark_ = nullptr;
    std::shared_ptr<Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
