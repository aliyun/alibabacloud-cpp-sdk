// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAVATARPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEAVATARPROJECTREQUEST_HPP_
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
  class SaveAvatarProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAvatarProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(bitRate, bitRate_);
      DARABONBA_PTR_TO_JSON(frameRate, frameRate_);
      DARABONBA_PTR_TO_JSON(frames, frames_);
      DARABONBA_PTR_TO_JSON(operateType, operateType_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
      DARABONBA_PTR_TO_JSON(resSpecType, resSpecType_);
      DARABONBA_PTR_TO_JSON(resolution, resolution_);
      DARABONBA_PTR_TO_JSON(scaleType, scaleType_);
      DARABONBA_PTR_TO_JSON(scriptModelTag, scriptModelTag_);
      DARABONBA_PTR_TO_JSON(synchronizedDisplay, synchronizedDisplay_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAvatarProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(bitRate, bitRate_);
      DARABONBA_PTR_FROM_JSON(frameRate, frameRate_);
      DARABONBA_PTR_FROM_JSON(frames, frames_);
      DARABONBA_PTR_FROM_JSON(operateType, operateType_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
      DARABONBA_PTR_FROM_JSON(resSpecType, resSpecType_);
      DARABONBA_PTR_FROM_JSON(resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(scaleType, scaleType_);
      DARABONBA_PTR_FROM_JSON(scriptModelTag, scriptModelTag_);
      DARABONBA_PTR_FROM_JSON(synchronizedDisplay, synchronizedDisplay_);
    };
    SaveAvatarProjectRequest() = default ;
    SaveAvatarProjectRequest(const SaveAvatarProjectRequest &) = default ;
    SaveAvatarProjectRequest(SaveAvatarProjectRequest &&) = default ;
    SaveAvatarProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAvatarProjectRequest() = default ;
    SaveAvatarProjectRequest& operator=(const SaveAvatarProjectRequest &) = default ;
    SaveAvatarProjectRequest& operator=(SaveAvatarProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Frames : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Frames& obj) { 
        DARABONBA_PTR_TO_JSON(index, index_);
        DARABONBA_PTR_TO_JSON(layers, layers_);
        DARABONBA_PTR_TO_JSON(videoScript, videoScript_);
      };
      friend void from_json(const Darabonba::Json& j, Frames& obj) { 
        DARABONBA_PTR_FROM_JSON(index, index_);
        DARABONBA_PTR_FROM_JSON(layers, layers_);
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
          DARABONBA_PTR_TO_JSON(emotion, emotion_);
          DARABONBA_PTR_TO_JSON(pitchRate, pitchRate_);
          DARABONBA_PTR_TO_JSON(speedRate, speedRate_);
          DARABONBA_PTR_TO_JSON(textContent, textContent_);
          DARABONBA_PTR_TO_JSON(voiceLanguage, voiceLanguage_);
          DARABONBA_PTR_TO_JSON(voiceTemplateId, voiceTemplateId_);
          DARABONBA_PTR_TO_JSON(volume, volume_);
        };
        friend void from_json(const Darabonba::Json& j, VideoScript& obj) { 
          DARABONBA_PTR_FROM_JSON(emotion, emotion_);
          DARABONBA_PTR_FROM_JSON(pitchRate, pitchRate_);
          DARABONBA_PTR_FROM_JSON(speedRate, speedRate_);
          DARABONBA_PTR_FROM_JSON(textContent, textContent_);
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
        virtual bool empty() const override { return this->emotion_ == nullptr
        && this->pitchRate_ == nullptr && this->speedRate_ == nullptr && this->textContent_ == nullptr && this->voiceLanguage_ == nullptr && this->voiceTemplateId_ == nullptr
        && this->volume_ == nullptr; };
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


        // voiceLanguage Field Functions 
        bool hasVoiceLanguage() const { return this->voiceLanguage_ != nullptr;};
        void deleteVoiceLanguage() { this->voiceLanguage_ = nullptr;};
        inline string getVoiceLanguage() const { DARABONBA_PTR_GET_DEFAULT(voiceLanguage_, "") };
        inline VideoScript& setVoiceLanguage(string voiceLanguage) { DARABONBA_PTR_SET_VALUE(voiceLanguage_, voiceLanguage) };


        // voiceTemplateId Field Functions 
        bool hasVoiceTemplateId() const { return this->voiceTemplateId_ != nullptr;};
        void deleteVoiceTemplateId() { this->voiceTemplateId_ = nullptr;};
        inline string getVoiceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(voiceTemplateId_, "") };
        inline VideoScript& setVoiceTemplateId(string voiceTemplateId) { DARABONBA_PTR_SET_VALUE(voiceTemplateId_, voiceTemplateId) };


        // volume Field Functions 
        bool hasVolume() const { return this->volume_ != nullptr;};
        void deleteVolume() { this->volume_ = nullptr;};
        inline string getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, "") };
        inline VideoScript& setVolume(string volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      protected:
        shared_ptr<string> emotion_ {};
        shared_ptr<string> pitchRate_ {};
        shared_ptr<string> speedRate_ {};
        shared_ptr<string> textContent_ {};
        shared_ptr<string> voiceLanguage_ {};
        shared_ptr<string> voiceTemplateId_ {};
        shared_ptr<string> volume_ {};
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
            DARABONBA_PTR_TO_JSON(format, format_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Material& obj) { 
            DARABONBA_PTR_FROM_JSON(format, format_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(url, url_);
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
          virtual bool empty() const override { return this->format_ == nullptr
        && this->id_ == nullptr && this->url_ == nullptr; };
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


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Material& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> format_ {};
          shared_ptr<string> id_ {};
          shared_ptr<string> url_ {};
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
        && this->layers_ == nullptr && this->videoScript_ == nullptr; };
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
      shared_ptr<Frames::VideoScript> videoScript_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->bitRate_ == nullptr && this->frameRate_ == nullptr && this->frames_ == nullptr && this->operateType_ == nullptr && this->projectId_ == nullptr
        && this->projectName_ == nullptr && this->resSpecType_ == nullptr && this->resolution_ == nullptr && this->scaleType_ == nullptr && this->scriptModelTag_ == nullptr
        && this->synchronizedDisplay_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline SaveAvatarProjectRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // bitRate Field Functions 
    bool hasBitRate() const { return this->bitRate_ != nullptr;};
    void deleteBitRate() { this->bitRate_ = nullptr;};
    inline string getBitRate() const { DARABONBA_PTR_GET_DEFAULT(bitRate_, "") };
    inline SaveAvatarProjectRequest& setBitRate(string bitRate) { DARABONBA_PTR_SET_VALUE(bitRate_, bitRate) };


    // frameRate Field Functions 
    bool hasFrameRate() const { return this->frameRate_ != nullptr;};
    void deleteFrameRate() { this->frameRate_ = nullptr;};
    inline string getFrameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, "") };
    inline SaveAvatarProjectRequest& setFrameRate(string frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


    // frames Field Functions 
    bool hasFrames() const { return this->frames_ != nullptr;};
    void deleteFrames() { this->frames_ = nullptr;};
    inline const vector<SaveAvatarProjectRequest::Frames> & getFrames() const { DARABONBA_PTR_GET_CONST(frames_, vector<SaveAvatarProjectRequest::Frames>) };
    inline vector<SaveAvatarProjectRequest::Frames> getFrames() { DARABONBA_PTR_GET(frames_, vector<SaveAvatarProjectRequest::Frames>) };
    inline SaveAvatarProjectRequest& setFrames(const vector<SaveAvatarProjectRequest::Frames> & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
    inline SaveAvatarProjectRequest& setFrames(vector<SaveAvatarProjectRequest::Frames> && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline SaveAvatarProjectRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline SaveAvatarProjectRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline SaveAvatarProjectRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // resSpecType Field Functions 
    bool hasResSpecType() const { return this->resSpecType_ != nullptr;};
    void deleteResSpecType() { this->resSpecType_ = nullptr;};
    inline string getResSpecType() const { DARABONBA_PTR_GET_DEFAULT(resSpecType_, "") };
    inline SaveAvatarProjectRequest& setResSpecType(string resSpecType) { DARABONBA_PTR_SET_VALUE(resSpecType_, resSpecType) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline SaveAvatarProjectRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string getScaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline SaveAvatarProjectRequest& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // scriptModelTag Field Functions 
    bool hasScriptModelTag() const { return this->scriptModelTag_ != nullptr;};
    void deleteScriptModelTag() { this->scriptModelTag_ = nullptr;};
    inline string getScriptModelTag() const { DARABONBA_PTR_GET_DEFAULT(scriptModelTag_, "") };
    inline SaveAvatarProjectRequest& setScriptModelTag(string scriptModelTag) { DARABONBA_PTR_SET_VALUE(scriptModelTag_, scriptModelTag) };


    // synchronizedDisplay Field Functions 
    bool hasSynchronizedDisplay() const { return this->synchronizedDisplay_ != nullptr;};
    void deleteSynchronizedDisplay() { this->synchronizedDisplay_ = nullptr;};
    inline string getSynchronizedDisplay() const { DARABONBA_PTR_GET_DEFAULT(synchronizedDisplay_, "") };
    inline SaveAvatarProjectRequest& setSynchronizedDisplay(string synchronizedDisplay) { DARABONBA_PTR_SET_VALUE(synchronizedDisplay_, synchronizedDisplay) };


  protected:
    shared_ptr<string> agentId_ {};
    shared_ptr<string> bitRate_ {};
    shared_ptr<string> frameRate_ {};
    shared_ptr<vector<SaveAvatarProjectRequest::Frames>> frames_ {};
    shared_ptr<string> operateType_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<string> projectName_ {};
    shared_ptr<string> resSpecType_ {};
    shared_ptr<string> resolution_ {};
    shared_ptr<string> scaleType_ {};
    shared_ptr<string> scriptModelTag_ {};
    shared_ptr<string> synchronizedDisplay_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
