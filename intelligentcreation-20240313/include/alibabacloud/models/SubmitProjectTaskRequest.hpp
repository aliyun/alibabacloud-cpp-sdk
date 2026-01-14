// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPROJECTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPROJECTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SubmitProjectTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitProjectTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(frames, frames_);
      DARABONBA_PTR_TO_JSON(scaleType, scaleType_);
      DARABONBA_PTR_TO_JSON(subtitleTag, subtitleTag_);
      DARABONBA_PTR_TO_JSON(transparentBackground, transparentBackground_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitProjectTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(frames, frames_);
      DARABONBA_PTR_FROM_JSON(scaleType, scaleType_);
      DARABONBA_PTR_FROM_JSON(subtitleTag, subtitleTag_);
      DARABONBA_PTR_FROM_JSON(transparentBackground, transparentBackground_);
    };
    SubmitProjectTaskRequest() = default ;
    SubmitProjectTaskRequest(const SubmitProjectTaskRequest &) = default ;
    SubmitProjectTaskRequest(SubmitProjectTaskRequest &&) = default ;
    SubmitProjectTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitProjectTaskRequest() = default ;
    SubmitProjectTaskRequest& operator=(const SubmitProjectTaskRequest &) = default ;
    SubmitProjectTaskRequest& operator=(SubmitProjectTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Frames : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Frames& obj) { 
        DARABONBA_PTR_TO_JSON(index, index_);
        DARABONBA_PTR_TO_JSON(layers, layers_);
        DARABONBA_PTR_TO_JSON(subtitle, subtitle_);
        DARABONBA_PTR_TO_JSON(videoScript, videoScript_);
      };
      friend void from_json(const Darabonba::Json& j, Frames& obj) { 
        DARABONBA_PTR_FROM_JSON(index, index_);
        DARABONBA_PTR_FROM_JSON(layers, layers_);
        DARABONBA_PTR_FROM_JSON(subtitle, subtitle_);
        DARABONBA_PTR_FROM_JSON(videoScript, videoScript_);
      };
      Frames() = default ;
      Frames(const Frames &) = default ;
      Frames(Frames &&) = default ;
      Frames(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Frames() = default ;
      Frames& operator=(const Frames &) = default ;
      Frames& operator=(Frames &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VideoScript : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoScript& obj) { 
          DARABONBA_PTR_TO_JSON(audioUrl, audioUrl_);
          DARABONBA_PTR_TO_JSON(emotion, emotion_);
          DARABONBA_PTR_TO_JSON(pitchRate, pitchRate_);
          DARABONBA_PTR_TO_JSON(speechOpen, speechOpen_);
          DARABONBA_PTR_TO_JSON(speedRate, speedRate_);
          DARABONBA_PTR_TO_JSON(textContent, textContent_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(voiceLanguage, voiceLanguage_);
          DARABONBA_PTR_TO_JSON(voiceTemplateId, voiceTemplateId_);
          DARABONBA_PTR_TO_JSON(volume, volume_);
        };
        friend void from_json(const Darabonba::Json& j, VideoScript& obj) { 
          DARABONBA_PTR_FROM_JSON(audioUrl, audioUrl_);
          DARABONBA_PTR_FROM_JSON(emotion, emotion_);
          DARABONBA_PTR_FROM_JSON(pitchRate, pitchRate_);
          DARABONBA_PTR_FROM_JSON(speechOpen, speechOpen_);
          DARABONBA_PTR_FROM_JSON(speedRate, speedRate_);
          DARABONBA_PTR_FROM_JSON(textContent, textContent_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(voiceLanguage, voiceLanguage_);
          DARABONBA_PTR_FROM_JSON(voiceTemplateId, voiceTemplateId_);
          DARABONBA_PTR_FROM_JSON(volume, volume_);
        };
        VideoScript() = default ;
        VideoScript(const VideoScript &) = default ;
        VideoScript(VideoScript &&) = default ;
        VideoScript(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoScript() = default ;
        VideoScript& operator=(const VideoScript &) = default ;
        VideoScript& operator=(VideoScript &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->audioUrl_ == nullptr
        && this->emotion_ == nullptr && this->pitchRate_ == nullptr && this->speechOpen_ == nullptr && this->speedRate_ == nullptr && this->textContent_ == nullptr
        && this->type_ == nullptr && this->voiceLanguage_ == nullptr && this->voiceTemplateId_ == nullptr && this->volume_ == nullptr; };
        // audioUrl Field Functions 
        bool hasAudioUrl() const { return this->audioUrl_ != nullptr;};
        void deleteAudioUrl() { this->audioUrl_ = nullptr;};
        inline string getAudioUrl() const { DARABONBA_PTR_GET_DEFAULT(audioUrl_, "") };
        inline VideoScript& setAudioUrl(string audioUrl) { DARABONBA_PTR_SET_VALUE(audioUrl_, audioUrl) };


        // emotion Field Functions 
        bool hasEmotion() const { return this->emotion_ != nullptr;};
        void deleteEmotion() { this->emotion_ = nullptr;};
        inline string getEmotion() const { DARABONBA_PTR_GET_DEFAULT(emotion_, "") };
        inline VideoScript& setEmotion(string emotion) { DARABONBA_PTR_SET_VALUE(emotion_, emotion) };


        // pitchRate Field Functions 
        bool hasPitchRate() const { return this->pitchRate_ != nullptr;};
        void deletePitchRate() { this->pitchRate_ = nullptr;};
        inline string getPitchRate() const { DARABONBA_PTR_GET_DEFAULT(pitchRate_, "") };
        inline VideoScript& setPitchRate(string pitchRate) { DARABONBA_PTR_SET_VALUE(pitchRate_, pitchRate) };


        // speechOpen Field Functions 
        bool hasSpeechOpen() const { return this->speechOpen_ != nullptr;};
        void deleteSpeechOpen() { this->speechOpen_ = nullptr;};
        inline bool getSpeechOpen() const { DARABONBA_PTR_GET_DEFAULT(speechOpen_, false) };
        inline VideoScript& setSpeechOpen(bool speechOpen) { DARABONBA_PTR_SET_VALUE(speechOpen_, speechOpen) };


        // speedRate Field Functions 
        bool hasSpeedRate() const { return this->speedRate_ != nullptr;};
        void deleteSpeedRate() { this->speedRate_ = nullptr;};
        inline string getSpeedRate() const { DARABONBA_PTR_GET_DEFAULT(speedRate_, "") };
        inline VideoScript& setSpeedRate(string speedRate) { DARABONBA_PTR_SET_VALUE(speedRate_, speedRate) };


        // textContent Field Functions 
        bool hasTextContent() const { return this->textContent_ != nullptr;};
        void deleteTextContent() { this->textContent_ = nullptr;};
        inline string getTextContent() const { DARABONBA_PTR_GET_DEFAULT(textContent_, "") };
        inline VideoScript& setTextContent(string textContent) { DARABONBA_PTR_SET_VALUE(textContent_, textContent) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline VideoScript& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // voiceLanguage Field Functions 
        bool hasVoiceLanguage() const { return this->voiceLanguage_ != nullptr;};
        void deleteVoiceLanguage() { this->voiceLanguage_ = nullptr;};
        inline string getVoiceLanguage() const { DARABONBA_PTR_GET_DEFAULT(voiceLanguage_, "") };
        inline VideoScript& setVoiceLanguage(string voiceLanguage) { DARABONBA_PTR_SET_VALUE(voiceLanguage_, voiceLanguage) };


        // voiceTemplateId Field Functions 
        bool hasVoiceTemplateId() const { return this->voiceTemplateId_ != nullptr;};
        void deleteVoiceTemplateId() { this->voiceTemplateId_ = nullptr;};
        inline int64_t getVoiceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(voiceTemplateId_, 0L) };
        inline VideoScript& setVoiceTemplateId(int64_t voiceTemplateId) { DARABONBA_PTR_SET_VALUE(voiceTemplateId_, voiceTemplateId) };


        // volume Field Functions 
        bool hasVolume() const { return this->volume_ != nullptr;};
        void deleteVolume() { this->volume_ = nullptr;};
        inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
        inline VideoScript& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      protected:
        shared_ptr<string> audioUrl_ {};
        shared_ptr<string> emotion_ {};
        shared_ptr<string> pitchRate_ {};
        shared_ptr<bool> speechOpen_ {};
        shared_ptr<string> speedRate_ {};
        shared_ptr<string> textContent_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> voiceLanguage_ {};
        shared_ptr<int64_t> voiceTemplateId_ {};
        shared_ptr<int32_t> volume_ {};
      };

      class Subtitle : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Subtitle& obj) { 
          DARABONBA_PTR_TO_JSON(alignment, alignment_);
          DARABONBA_PTR_TO_JSON(backgroundColor, backgroundColor_);
          DARABONBA_PTR_TO_JSON(font, font_);
          DARABONBA_PTR_TO_JSON(fontColor, fontColor_);
          DARABONBA_PTR_TO_JSON(fontSize, fontSize_);
          DARABONBA_PTR_TO_JSON(maxCharLength, maxCharLength_);
          DARABONBA_PTR_TO_JSON(positionX, positionX_);
          DARABONBA_PTR_TO_JSON(positionY, positionY_);
          DARABONBA_PTR_TO_JSON(textHeight, textHeight_);
          DARABONBA_PTR_TO_JSON(textWidth, textWidth_);
        };
        friend void from_json(const Darabonba::Json& j, Subtitle& obj) { 
          DARABONBA_PTR_FROM_JSON(alignment, alignment_);
          DARABONBA_PTR_FROM_JSON(backgroundColor, backgroundColor_);
          DARABONBA_PTR_FROM_JSON(font, font_);
          DARABONBA_PTR_FROM_JSON(fontColor, fontColor_);
          DARABONBA_PTR_FROM_JSON(fontSize, fontSize_);
          DARABONBA_PTR_FROM_JSON(maxCharLength, maxCharLength_);
          DARABONBA_PTR_FROM_JSON(positionX, positionX_);
          DARABONBA_PTR_FROM_JSON(positionY, positionY_);
          DARABONBA_PTR_FROM_JSON(textHeight, textHeight_);
          DARABONBA_PTR_FROM_JSON(textWidth, textWidth_);
        };
        Subtitle() = default ;
        Subtitle(const Subtitle &) = default ;
        Subtitle(Subtitle &&) = default ;
        Subtitle(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Subtitle() = default ;
        Subtitle& operator=(const Subtitle &) = default ;
        Subtitle& operator=(Subtitle &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alignment_ == nullptr
        && this->backgroundColor_ == nullptr && this->font_ == nullptr && this->fontColor_ == nullptr && this->fontSize_ == nullptr && this->maxCharLength_ == nullptr
        && this->positionX_ == nullptr && this->positionY_ == nullptr && this->textHeight_ == nullptr && this->textWidth_ == nullptr; };
        // alignment Field Functions 
        bool hasAlignment() const { return this->alignment_ != nullptr;};
        void deleteAlignment() { this->alignment_ = nullptr;};
        inline string getAlignment() const { DARABONBA_PTR_GET_DEFAULT(alignment_, "") };
        inline Subtitle& setAlignment(string alignment) { DARABONBA_PTR_SET_VALUE(alignment_, alignment) };


        // backgroundColor Field Functions 
        bool hasBackgroundColor() const { return this->backgroundColor_ != nullptr;};
        void deleteBackgroundColor() { this->backgroundColor_ = nullptr;};
        inline string getBackgroundColor() const { DARABONBA_PTR_GET_DEFAULT(backgroundColor_, "") };
        inline Subtitle& setBackgroundColor(string backgroundColor) { DARABONBA_PTR_SET_VALUE(backgroundColor_, backgroundColor) };


        // font Field Functions 
        bool hasFont() const { return this->font_ != nullptr;};
        void deleteFont() { this->font_ = nullptr;};
        inline string getFont() const { DARABONBA_PTR_GET_DEFAULT(font_, "") };
        inline Subtitle& setFont(string font) { DARABONBA_PTR_SET_VALUE(font_, font) };


        // fontColor Field Functions 
        bool hasFontColor() const { return this->fontColor_ != nullptr;};
        void deleteFontColor() { this->fontColor_ = nullptr;};
        inline string getFontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
        inline Subtitle& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


        // fontSize Field Functions 
        bool hasFontSize() const { return this->fontSize_ != nullptr;};
        void deleteFontSize() { this->fontSize_ = nullptr;};
        inline int32_t getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
        inline Subtitle& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


        // maxCharLength Field Functions 
        bool hasMaxCharLength() const { return this->maxCharLength_ != nullptr;};
        void deleteMaxCharLength() { this->maxCharLength_ = nullptr;};
        inline int32_t getMaxCharLength() const { DARABONBA_PTR_GET_DEFAULT(maxCharLength_, 0) };
        inline Subtitle& setMaxCharLength(int32_t maxCharLength) { DARABONBA_PTR_SET_VALUE(maxCharLength_, maxCharLength) };


        // positionX Field Functions 
        bool hasPositionX() const { return this->positionX_ != nullptr;};
        void deletePositionX() { this->positionX_ = nullptr;};
        inline int32_t getPositionX() const { DARABONBA_PTR_GET_DEFAULT(positionX_, 0) };
        inline Subtitle& setPositionX(int32_t positionX) { DARABONBA_PTR_SET_VALUE(positionX_, positionX) };


        // positionY Field Functions 
        bool hasPositionY() const { return this->positionY_ != nullptr;};
        void deletePositionY() { this->positionY_ = nullptr;};
        inline int32_t getPositionY() const { DARABONBA_PTR_GET_DEFAULT(positionY_, 0) };
        inline Subtitle& setPositionY(int32_t positionY) { DARABONBA_PTR_SET_VALUE(positionY_, positionY) };


        // textHeight Field Functions 
        bool hasTextHeight() const { return this->textHeight_ != nullptr;};
        void deleteTextHeight() { this->textHeight_ = nullptr;};
        inline int32_t getTextHeight() const { DARABONBA_PTR_GET_DEFAULT(textHeight_, 0) };
        inline Subtitle& setTextHeight(int32_t textHeight) { DARABONBA_PTR_SET_VALUE(textHeight_, textHeight) };


        // textWidth Field Functions 
        bool hasTextWidth() const { return this->textWidth_ != nullptr;};
        void deleteTextWidth() { this->textWidth_ = nullptr;};
        inline int32_t getTextWidth() const { DARABONBA_PTR_GET_DEFAULT(textWidth_, 0) };
        inline Subtitle& setTextWidth(int32_t textWidth) { DARABONBA_PTR_SET_VALUE(textWidth_, textWidth) };


      protected:
        shared_ptr<string> alignment_ {};
        shared_ptr<string> backgroundColor_ {};
        shared_ptr<string> font_ {};
        shared_ptr<string> fontColor_ {};
        shared_ptr<int32_t> fontSize_ {};
        shared_ptr<int32_t> maxCharLength_ {};
        shared_ptr<int32_t> positionX_ {};
        shared_ptr<int32_t> positionY_ {};
        shared_ptr<int32_t> textHeight_ {};
        shared_ptr<int32_t> textWidth_ {};
      };

      class Layers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Layers& obj) { 
          DARABONBA_PTR_TO_JSON(height, height_);
          DARABONBA_PTR_TO_JSON(index, index_);
          DARABONBA_PTR_TO_JSON(material, material_);
          DARABONBA_PTR_TO_JSON(positionX, positionX_);
          DARABONBA_PTR_TO_JSON(positionY, positionY_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(width, width_);
        };
        friend void from_json(const Darabonba::Json& j, Layers& obj) { 
          DARABONBA_PTR_FROM_JSON(height, height_);
          DARABONBA_PTR_FROM_JSON(index, index_);
          DARABONBA_PTR_FROM_JSON(material, material_);
          DARABONBA_PTR_FROM_JSON(positionX, positionX_);
          DARABONBA_PTR_FROM_JSON(positionY, positionY_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(width, width_);
        };
        Layers() = default ;
        Layers(const Layers &) = default ;
        Layers(Layers &&) = default ;
        Layers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Layers() = default ;
        Layers& operator=(const Layers &) = default ;
        Layers& operator=(Layers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Material : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Material& obj) { 
            DARABONBA_PTR_TO_JSON(anchorStyleLevel, anchorStyleLevel_);
            DARABONBA_PTR_TO_JSON(format, format_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(mask, mask_);
            DARABONBA_PTR_TO_JSON(speed, speed_);
            DARABONBA_PTR_TO_JSON(url, url_);
            DARABONBA_PTR_TO_JSON(volume, volume_);
          };
          friend void from_json(const Darabonba::Json& j, Material& obj) { 
            DARABONBA_PTR_FROM_JSON(anchorStyleLevel, anchorStyleLevel_);
            DARABONBA_PTR_FROM_JSON(format, format_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(mask, mask_);
            DARABONBA_PTR_FROM_JSON(speed, speed_);
            DARABONBA_PTR_FROM_JSON(url, url_);
            DARABONBA_PTR_FROM_JSON(volume, volume_);
          };
          Material() = default ;
          Material(const Material &) = default ;
          Material(Material &&) = default ;
          Material(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Material() = default ;
          Material& operator=(const Material &) = default ;
          Material& operator=(Material &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Mask : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Mask& obj) { 
              DARABONBA_PTR_TO_JSON(url, url_);
            };
            friend void from_json(const Darabonba::Json& j, Mask& obj) { 
              DARABONBA_PTR_FROM_JSON(url, url_);
            };
            Mask() = default ;
            Mask(const Mask &) = default ;
            Mask(Mask &&) = default ;
            Mask(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Mask() = default ;
            Mask& operator=(const Mask &) = default ;
            Mask& operator=(Mask &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->url_ == nullptr; };
            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline Mask& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            shared_ptr<string> url_ {};
          };

          virtual bool empty() const override { return this->anchorStyleLevel_ == nullptr
        && this->format_ == nullptr && this->id_ == nullptr && this->mask_ == nullptr && this->speed_ == nullptr && this->url_ == nullptr
        && this->volume_ == nullptr; };
          // anchorStyleLevel Field Functions 
          bool hasAnchorStyleLevel() const { return this->anchorStyleLevel_ != nullptr;};
          void deleteAnchorStyleLevel() { this->anchorStyleLevel_ = nullptr;};
          inline string getAnchorStyleLevel() const { DARABONBA_PTR_GET_DEFAULT(anchorStyleLevel_, "") };
          inline Material& setAnchorStyleLevel(string anchorStyleLevel) { DARABONBA_PTR_SET_VALUE(anchorStyleLevel_, anchorStyleLevel) };


          // format Field Functions 
          bool hasFormat() const { return this->format_ != nullptr;};
          void deleteFormat() { this->format_ = nullptr;};
          inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
          inline Material& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Material& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // mask Field Functions 
          bool hasMask() const { return this->mask_ != nullptr;};
          void deleteMask() { this->mask_ = nullptr;};
          inline const Material::Mask & getMask() const { DARABONBA_PTR_GET_CONST(mask_, Material::Mask) };
          inline Material::Mask getMask() { DARABONBA_PTR_GET(mask_, Material::Mask) };
          inline Material& setMask(const Material::Mask & mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };
          inline Material& setMask(Material::Mask && mask) { DARABONBA_PTR_SET_RVALUE(mask_, mask) };


          // speed Field Functions 
          bool hasSpeed() const { return this->speed_ != nullptr;};
          void deleteSpeed() { this->speed_ = nullptr;};
          inline string getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
          inline Material& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Material& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          // volume Field Functions 
          bool hasVolume() const { return this->volume_ != nullptr;};
          void deleteVolume() { this->volume_ = nullptr;};
          inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
          inline Material& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


        protected:
          shared_ptr<string> anchorStyleLevel_ {};
          shared_ptr<string> format_ {};
          shared_ptr<string> id_ {};
          shared_ptr<Material::Mask> mask_ {};
          shared_ptr<string> speed_ {};
          shared_ptr<string> url_ {};
          shared_ptr<int32_t> volume_ {};
        };

        virtual bool empty() const override { return this->height_ == nullptr
        && this->index_ == nullptr && this->material_ == nullptr && this->positionX_ == nullptr && this->positionY_ == nullptr && this->type_ == nullptr
        && this->width_ == nullptr; };
        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
        inline Layers& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
        inline Layers& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // material Field Functions 
        bool hasMaterial() const { return this->material_ != nullptr;};
        void deleteMaterial() { this->material_ = nullptr;};
        inline const Layers::Material & getMaterial() const { DARABONBA_PTR_GET_CONST(material_, Layers::Material) };
        inline Layers::Material getMaterial() { DARABONBA_PTR_GET(material_, Layers::Material) };
        inline Layers& setMaterial(const Layers::Material & material) { DARABONBA_PTR_SET_VALUE(material_, material) };
        inline Layers& setMaterial(Layers::Material && material) { DARABONBA_PTR_SET_RVALUE(material_, material) };


        // positionX Field Functions 
        bool hasPositionX() const { return this->positionX_ != nullptr;};
        void deletePositionX() { this->positionX_ = nullptr;};
        inline int32_t getPositionX() const { DARABONBA_PTR_GET_DEFAULT(positionX_, 0) };
        inline Layers& setPositionX(int32_t positionX) { DARABONBA_PTR_SET_VALUE(positionX_, positionX) };


        // positionY Field Functions 
        bool hasPositionY() const { return this->positionY_ != nullptr;};
        void deletePositionY() { this->positionY_ = nullptr;};
        inline int32_t getPositionY() const { DARABONBA_PTR_GET_DEFAULT(positionY_, 0) };
        inline Layers& setPositionY(int32_t positionY) { DARABONBA_PTR_SET_VALUE(positionY_, positionY) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Layers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
        inline Layers& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        shared_ptr<int32_t> height_ {};
        shared_ptr<int32_t> index_ {};
        shared_ptr<Layers::Material> material_ {};
        shared_ptr<int32_t> positionX_ {};
        shared_ptr<int32_t> positionY_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int32_t> width_ {};
      };

      virtual bool empty() const override { return this->index_ == nullptr
        && this->layers_ == nullptr && this->subtitle_ == nullptr && this->videoScript_ == nullptr; };
      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline Frames& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // layers Field Functions 
      bool hasLayers() const { return this->layers_ != nullptr;};
      void deleteLayers() { this->layers_ = nullptr;};
      inline const vector<Frames::Layers> & getLayers() const { DARABONBA_PTR_GET_CONST(layers_, vector<Frames::Layers>) };
      inline vector<Frames::Layers> getLayers() { DARABONBA_PTR_GET(layers_, vector<Frames::Layers>) };
      inline Frames& setLayers(const vector<Frames::Layers> & layers) { DARABONBA_PTR_SET_VALUE(layers_, layers) };
      inline Frames& setLayers(vector<Frames::Layers> && layers) { DARABONBA_PTR_SET_RVALUE(layers_, layers) };


      // subtitle Field Functions 
      bool hasSubtitle() const { return this->subtitle_ != nullptr;};
      void deleteSubtitle() { this->subtitle_ = nullptr;};
      inline const Frames::Subtitle & getSubtitle() const { DARABONBA_PTR_GET_CONST(subtitle_, Frames::Subtitle) };
      inline Frames::Subtitle getSubtitle() { DARABONBA_PTR_GET(subtitle_, Frames::Subtitle) };
      inline Frames& setSubtitle(const Frames::Subtitle & subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };
      inline Frames& setSubtitle(Frames::Subtitle && subtitle) { DARABONBA_PTR_SET_RVALUE(subtitle_, subtitle) };


      // videoScript Field Functions 
      bool hasVideoScript() const { return this->videoScript_ != nullptr;};
      void deleteVideoScript() { this->videoScript_ = nullptr;};
      inline const Frames::VideoScript & getVideoScript() const { DARABONBA_PTR_GET_CONST(videoScript_, Frames::VideoScript) };
      inline Frames::VideoScript getVideoScript() { DARABONBA_PTR_GET(videoScript_, Frames::VideoScript) };
      inline Frames& setVideoScript(const Frames::VideoScript & videoScript) { DARABONBA_PTR_SET_VALUE(videoScript_, videoScript) };
      inline Frames& setVideoScript(Frames::VideoScript && videoScript) { DARABONBA_PTR_SET_RVALUE(videoScript_, videoScript) };


    protected:
      shared_ptr<int32_t> index_ {};
      shared_ptr<vector<Frames::Layers>> layers_ {};
      shared_ptr<Frames::Subtitle> subtitle_ {};
      shared_ptr<Frames::VideoScript> videoScript_ {};
    };

    virtual bool empty() const override { return this->frames_ == nullptr
        && this->scaleType_ == nullptr && this->subtitleTag_ == nullptr && this->transparentBackground_ == nullptr; };
    // frames Field Functions 
    bool hasFrames() const { return this->frames_ != nullptr;};
    void deleteFrames() { this->frames_ = nullptr;};
    inline const vector<SubmitProjectTaskRequest::Frames> & getFrames() const { DARABONBA_PTR_GET_CONST(frames_, vector<SubmitProjectTaskRequest::Frames>) };
    inline vector<SubmitProjectTaskRequest::Frames> getFrames() { DARABONBA_PTR_GET(frames_, vector<SubmitProjectTaskRequest::Frames>) };
    inline SubmitProjectTaskRequest& setFrames(const vector<SubmitProjectTaskRequest::Frames> & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
    inline SubmitProjectTaskRequest& setFrames(vector<SubmitProjectTaskRequest::Frames> && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string getScaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline SubmitProjectTaskRequest& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // subtitleTag Field Functions 
    bool hasSubtitleTag() const { return this->subtitleTag_ != nullptr;};
    void deleteSubtitleTag() { this->subtitleTag_ = nullptr;};
    inline int32_t getSubtitleTag() const { DARABONBA_PTR_GET_DEFAULT(subtitleTag_, 0) };
    inline SubmitProjectTaskRequest& setSubtitleTag(int32_t subtitleTag) { DARABONBA_PTR_SET_VALUE(subtitleTag_, subtitleTag) };


    // transparentBackground Field Functions 
    bool hasTransparentBackground() const { return this->transparentBackground_ != nullptr;};
    void deleteTransparentBackground() { this->transparentBackground_ = nullptr;};
    inline int32_t getTransparentBackground() const { DARABONBA_PTR_GET_DEFAULT(transparentBackground_, 0) };
    inline SubmitProjectTaskRequest& setTransparentBackground(int32_t transparentBackground) { DARABONBA_PTR_SET_VALUE(transparentBackground_, transparentBackground) };


  protected:
    // frame
    shared_ptr<vector<SubmitProjectTaskRequest::Frames>> frames_ {};
    shared_ptr<string> scaleType_ {};
    shared_ptr<int32_t> subtitleTag_ {};
    shared_ptr<int32_t> transparentBackground_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
