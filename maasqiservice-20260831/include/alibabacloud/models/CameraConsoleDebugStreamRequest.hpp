// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAMERACONSOLEDEBUGSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CAMERACONSOLEDEBUGSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaasQIService20260831
{
namespace Models
{
  class CameraConsoleDebugStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CameraConsoleDebugStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(input, input_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scenario, scenario_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, CameraConsoleDebugStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(input, input_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    CameraConsoleDebugStreamRequest() = default ;
    CameraConsoleDebugStreamRequest(const CameraConsoleDebugStreamRequest &) = default ;
    CameraConsoleDebugStreamRequest(CameraConsoleDebugStreamRequest &&) = default ;
    CameraConsoleDebugStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CameraConsoleDebugStreamRequest() = default ;
    CameraConsoleDebugStreamRequest& operator=(const CameraConsoleDebugStreamRequest &) = default ;
    CameraConsoleDebugStreamRequest& operator=(CameraConsoleDebugStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(maxHeightRatio, maxHeightRatio_);
        DARABONBA_PTR_TO_JSON(minHeightRatio, minHeightRatio_);
        DARABONBA_PTR_TO_JSON(minScore, minScore_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(maxHeightRatio, maxHeightRatio_);
        DARABONBA_PTR_FROM_JSON(minHeightRatio, minHeightRatio_);
        DARABONBA_PTR_FROM_JSON(minScore, minScore_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maxHeightRatio_ == nullptr
        && this->minHeightRatio_ == nullptr && this->minScore_ == nullptr; };
      // maxHeightRatio Field Functions 
      bool hasMaxHeightRatio() const { return this->maxHeightRatio_ != nullptr;};
      void deleteMaxHeightRatio() { this->maxHeightRatio_ = nullptr;};
      inline double getMaxHeightRatio() const { DARABONBA_PTR_GET_DEFAULT(maxHeightRatio_, 0.0) };
      inline Parameters& setMaxHeightRatio(double maxHeightRatio) { DARABONBA_PTR_SET_VALUE(maxHeightRatio_, maxHeightRatio) };


      // minHeightRatio Field Functions 
      bool hasMinHeightRatio() const { return this->minHeightRatio_ != nullptr;};
      void deleteMinHeightRatio() { this->minHeightRatio_ = nullptr;};
      inline double getMinHeightRatio() const { DARABONBA_PTR_GET_DEFAULT(minHeightRatio_, 0.0) };
      inline Parameters& setMinHeightRatio(double minHeightRatio) { DARABONBA_PTR_SET_VALUE(minHeightRatio_, minHeightRatio) };


      // minScore Field Functions 
      bool hasMinScore() const { return this->minScore_ != nullptr;};
      void deleteMinScore() { this->minScore_ = nullptr;};
      inline double getMinScore() const { DARABONBA_PTR_GET_DEFAULT(minScore_, 0.0) };
      inline Parameters& setMinScore(double minScore) { DARABONBA_PTR_SET_VALUE(minScore_, minScore) };


    protected:
      shared_ptr<double> maxHeightRatio_ {};
      shared_ptr<double> minHeightRatio_ {};
      shared_ptr<double> minScore_ {};
    };

    class Input : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Input& obj) { 
        DARABONBA_PTR_TO_JSON(messages, messages_);
        DARABONBA_PTR_TO_JSON(sceneId, sceneId_);
        DARABONBA_PTR_TO_JSON(stream, stream_);
      };
      friend void from_json(const Darabonba::Json& j, Input& obj) { 
        DARABONBA_PTR_FROM_JSON(messages, messages_);
        DARABONBA_PTR_FROM_JSON(sceneId, sceneId_);
        DARABONBA_PTR_FROM_JSON(stream, stream_);
      };
      Input() = default ;
      Input(const Input &) = default ;
      Input(Input &&) = default ;
      Input(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Input() = default ;
      Input& operator=(const Input &) = default ;
      Input& operator=(Input &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Messages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Messages& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(role, role_);
        };
        friend void from_json(const Darabonba::Json& j, Messages& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(role, role_);
        };
        Messages() = default ;
        Messages(const Messages &) = default ;
        Messages(Messages &&) = default ;
        Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Messages() = default ;
        Messages& operator=(const Messages &) = default ;
        Messages& operator=(Messages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Content : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Content& obj) { 
            DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Content& obj) { 
            DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Content() = default ;
          Content(const Content &) = default ;
          Content(Content &&) = default ;
          Content(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Content() = default ;
          Content& operator=(const Content &) = default ;
          Content& operator=(Content &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ImageUrl : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ImageUrl& obj) { 
              DARABONBA_PTR_TO_JSON(url, url_);
            };
            friend void from_json(const Darabonba::Json& j, ImageUrl& obj) { 
              DARABONBA_PTR_FROM_JSON(url, url_);
            };
            ImageUrl() = default ;
            ImageUrl(const ImageUrl &) = default ;
            ImageUrl(ImageUrl &&) = default ;
            ImageUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ImageUrl() = default ;
            ImageUrl& operator=(const ImageUrl &) = default ;
            ImageUrl& operator=(ImageUrl &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->url_ == nullptr; };
            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline ImageUrl& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            // This parameter is required.
            shared_ptr<string> url_ {};
          };

          virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->type_ == nullptr; };
          // imageUrl Field Functions 
          bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
          void deleteImageUrl() { this->imageUrl_ = nullptr;};
          inline const Content::ImageUrl & getImageUrl() const { DARABONBA_PTR_GET_CONST(imageUrl_, Content::ImageUrl) };
          inline Content::ImageUrl getImageUrl() { DARABONBA_PTR_GET(imageUrl_, Content::ImageUrl) };
          inline Content& setImageUrl(const Content::ImageUrl & imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };
          inline Content& setImageUrl(Content::ImageUrl && imageUrl) { DARABONBA_PTR_SET_RVALUE(imageUrl_, imageUrl) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // This parameter is required.
          shared_ptr<Content::ImageUrl> imageUrl_ {};
          // This parameter is required.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline const vector<Messages::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Messages::Content>) };
        inline vector<Messages::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Messages::Content>) };
        inline Messages& setContent(const vector<Messages::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
        inline Messages& setContent(vector<Messages::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        // This parameter is required.
        shared_ptr<vector<Messages::Content>> content_ {};
        // This parameter is required.
        shared_ptr<string> role_ {};
      };

      virtual bool empty() const override { return this->messages_ == nullptr
        && this->sceneId_ == nullptr && this->stream_ == nullptr; };
      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<Input::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Input::Messages>) };
      inline vector<Input::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Input::Messages>) };
      inline Input& setMessages(const vector<Input::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline Input& setMessages(vector<Input::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
      inline Input& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


      // stream Field Functions 
      bool hasStream() const { return this->stream_ != nullptr;};
      void deleteStream() { this->stream_ = nullptr;};
      inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
      inline Input& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    protected:
      // This parameter is required.
      shared_ptr<vector<Input::Messages>> messages_ {};
      shared_ptr<string> sceneId_ {};
      shared_ptr<bool> stream_ {};
    };

    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(agentType, agentType_);
        DARABONBA_PTR_TO_JSON(apiName, apiName_);
        DARABONBA_PTR_TO_JSON(extensionConfig, extensionConfig_);
        DARABONBA_PTR_TO_JSON(instructions, instructions_);
        DARABONBA_PTR_TO_JSON(maxIterations, maxIterations_);
        DARABONBA_PTR_TO_JSON(model, model_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(agentType, agentType_);
        DARABONBA_PTR_FROM_JSON(apiName, apiName_);
        DARABONBA_PTR_FROM_JSON(extensionConfig, extensionConfig_);
        DARABONBA_PTR_FROM_JSON(instructions, instructions_);
        DARABONBA_PTR_FROM_JSON(maxIterations, maxIterations_);
        DARABONBA_PTR_FROM_JSON(model, model_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Model : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Model& obj) { 
          DARABONBA_PTR_TO_JSON(catalogModelId, catalogModelId_);
        };
        friend void from_json(const Darabonba::Json& j, Model& obj) { 
          DARABONBA_PTR_FROM_JSON(catalogModelId, catalogModelId_);
        };
        Model() = default ;
        Model(const Model &) = default ;
        Model(Model &&) = default ;
        Model(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Model() = default ;
        Model& operator=(const Model &) = default ;
        Model& operator=(Model &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->catalogModelId_ == nullptr; };
        // catalogModelId Field Functions 
        bool hasCatalogModelId() const { return this->catalogModelId_ != nullptr;};
        void deleteCatalogModelId() { this->catalogModelId_ = nullptr;};
        inline string getCatalogModelId() const { DARABONBA_PTR_GET_DEFAULT(catalogModelId_, "") };
        inline Model& setCatalogModelId(string catalogModelId) { DARABONBA_PTR_SET_VALUE(catalogModelId_, catalogModelId) };


      protected:
        // This parameter is required.
        shared_ptr<string> catalogModelId_ {};
      };

      class ExtensionConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtensionConfig& obj) { 
          DARABONBA_PTR_TO_JSON(camera, camera_);
          DARABONBA_PTR_TO_JSON(personScan, personScan_);
          DARABONBA_PTR_TO_JSON(scenario, scenario_);
        };
        friend void from_json(const Darabonba::Json& j, ExtensionConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(camera, camera_);
          DARABONBA_PTR_FROM_JSON(personScan, personScan_);
          DARABONBA_PTR_FROM_JSON(scenario, scenario_);
        };
        ExtensionConfig() = default ;
        ExtensionConfig(const ExtensionConfig &) = default ;
        ExtensionConfig(ExtensionConfig &&) = default ;
        ExtensionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtensionConfig() = default ;
        ExtensionConfig& operator=(const ExtensionConfig &) = default ;
        ExtensionConfig& operator=(ExtensionConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PersonScan : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PersonScan& obj) { 
            DARABONBA_PTR_TO_JSON(maxHeightRatio, maxHeightRatio_);
            DARABONBA_PTR_TO_JSON(minHeightRatio, minHeightRatio_);
            DARABONBA_PTR_TO_JSON(minScore, minScore_);
          };
          friend void from_json(const Darabonba::Json& j, PersonScan& obj) { 
            DARABONBA_PTR_FROM_JSON(maxHeightRatio, maxHeightRatio_);
            DARABONBA_PTR_FROM_JSON(minHeightRatio, minHeightRatio_);
            DARABONBA_PTR_FROM_JSON(minScore, minScore_);
          };
          PersonScan() = default ;
          PersonScan(const PersonScan &) = default ;
          PersonScan(PersonScan &&) = default ;
          PersonScan(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PersonScan() = default ;
          PersonScan& operator=(const PersonScan &) = default ;
          PersonScan& operator=(PersonScan &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxHeightRatio_ == nullptr
        && this->minHeightRatio_ == nullptr && this->minScore_ == nullptr; };
          // maxHeightRatio Field Functions 
          bool hasMaxHeightRatio() const { return this->maxHeightRatio_ != nullptr;};
          void deleteMaxHeightRatio() { this->maxHeightRatio_ = nullptr;};
          inline double getMaxHeightRatio() const { DARABONBA_PTR_GET_DEFAULT(maxHeightRatio_, 0.0) };
          inline PersonScan& setMaxHeightRatio(double maxHeightRatio) { DARABONBA_PTR_SET_VALUE(maxHeightRatio_, maxHeightRatio) };


          // minHeightRatio Field Functions 
          bool hasMinHeightRatio() const { return this->minHeightRatio_ != nullptr;};
          void deleteMinHeightRatio() { this->minHeightRatio_ = nullptr;};
          inline double getMinHeightRatio() const { DARABONBA_PTR_GET_DEFAULT(minHeightRatio_, 0.0) };
          inline PersonScan& setMinHeightRatio(double minHeightRatio) { DARABONBA_PTR_SET_VALUE(minHeightRatio_, minHeightRatio) };


          // minScore Field Functions 
          bool hasMinScore() const { return this->minScore_ != nullptr;};
          void deleteMinScore() { this->minScore_ = nullptr;};
          inline double getMinScore() const { DARABONBA_PTR_GET_DEFAULT(minScore_, 0.0) };
          inline PersonScan& setMinScore(double minScore) { DARABONBA_PTR_SET_VALUE(minScore_, minScore) };


        protected:
          shared_ptr<double> maxHeightRatio_ {};
          shared_ptr<double> minHeightRatio_ {};
          shared_ptr<double> minScore_ {};
        };

        class Camera : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Camera& obj) { 
            DARABONBA_PTR_TO_JSON(headMaxHeightRatio, headMaxHeightRatio_);
            DARABONBA_PTR_TO_JSON(headMinHeightRatio, headMinHeightRatio_);
            DARABONBA_PTR_TO_JSON(minConfidence, minConfidence_);
            DARABONBA_PTR_TO_JSON(scenario, scenario_);
          };
          friend void from_json(const Darabonba::Json& j, Camera& obj) { 
            DARABONBA_PTR_FROM_JSON(headMaxHeightRatio, headMaxHeightRatio_);
            DARABONBA_PTR_FROM_JSON(headMinHeightRatio, headMinHeightRatio_);
            DARABONBA_PTR_FROM_JSON(minConfidence, minConfidence_);
            DARABONBA_PTR_FROM_JSON(scenario, scenario_);
          };
          Camera() = default ;
          Camera(const Camera &) = default ;
          Camera(Camera &&) = default ;
          Camera(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Camera() = default ;
          Camera& operator=(const Camera &) = default ;
          Camera& operator=(Camera &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->headMaxHeightRatio_ == nullptr
        && this->headMinHeightRatio_ == nullptr && this->minConfidence_ == nullptr && this->scenario_ == nullptr; };
          // headMaxHeightRatio Field Functions 
          bool hasHeadMaxHeightRatio() const { return this->headMaxHeightRatio_ != nullptr;};
          void deleteHeadMaxHeightRatio() { this->headMaxHeightRatio_ = nullptr;};
          inline double getHeadMaxHeightRatio() const { DARABONBA_PTR_GET_DEFAULT(headMaxHeightRatio_, 0.0) };
          inline Camera& setHeadMaxHeightRatio(double headMaxHeightRatio) { DARABONBA_PTR_SET_VALUE(headMaxHeightRatio_, headMaxHeightRatio) };


          // headMinHeightRatio Field Functions 
          bool hasHeadMinHeightRatio() const { return this->headMinHeightRatio_ != nullptr;};
          void deleteHeadMinHeightRatio() { this->headMinHeightRatio_ = nullptr;};
          inline double getHeadMinHeightRatio() const { DARABONBA_PTR_GET_DEFAULT(headMinHeightRatio_, 0.0) };
          inline Camera& setHeadMinHeightRatio(double headMinHeightRatio) { DARABONBA_PTR_SET_VALUE(headMinHeightRatio_, headMinHeightRatio) };


          // minConfidence Field Functions 
          bool hasMinConfidence() const { return this->minConfidence_ != nullptr;};
          void deleteMinConfidence() { this->minConfidence_ = nullptr;};
          inline double getMinConfidence() const { DARABONBA_PTR_GET_DEFAULT(minConfidence_, 0.0) };
          inline Camera& setMinConfidence(double minConfidence) { DARABONBA_PTR_SET_VALUE(minConfidence_, minConfidence) };


          // scenario Field Functions 
          bool hasScenario() const { return this->scenario_ != nullptr;};
          void deleteScenario() { this->scenario_ = nullptr;};
          inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
          inline Camera& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


        protected:
          shared_ptr<double> headMaxHeightRatio_ {};
          shared_ptr<double> headMinHeightRatio_ {};
          shared_ptr<double> minConfidence_ {};
          shared_ptr<string> scenario_ {};
        };

        virtual bool empty() const override { return this->camera_ == nullptr
        && this->personScan_ == nullptr && this->scenario_ == nullptr; };
        // camera Field Functions 
        bool hasCamera() const { return this->camera_ != nullptr;};
        void deleteCamera() { this->camera_ = nullptr;};
        inline const ExtensionConfig::Camera & getCamera() const { DARABONBA_PTR_GET_CONST(camera_, ExtensionConfig::Camera) };
        inline ExtensionConfig::Camera getCamera() { DARABONBA_PTR_GET(camera_, ExtensionConfig::Camera) };
        inline ExtensionConfig& setCamera(const ExtensionConfig::Camera & camera) { DARABONBA_PTR_SET_VALUE(camera_, camera) };
        inline ExtensionConfig& setCamera(ExtensionConfig::Camera && camera) { DARABONBA_PTR_SET_RVALUE(camera_, camera) };


        // personScan Field Functions 
        bool hasPersonScan() const { return this->personScan_ != nullptr;};
        void deletePersonScan() { this->personScan_ = nullptr;};
        inline const ExtensionConfig::PersonScan & getPersonScan() const { DARABONBA_PTR_GET_CONST(personScan_, ExtensionConfig::PersonScan) };
        inline ExtensionConfig::PersonScan getPersonScan() { DARABONBA_PTR_GET(personScan_, ExtensionConfig::PersonScan) };
        inline ExtensionConfig& setPersonScan(const ExtensionConfig::PersonScan & personScan) { DARABONBA_PTR_SET_VALUE(personScan_, personScan) };
        inline ExtensionConfig& setPersonScan(ExtensionConfig::PersonScan && personScan) { DARABONBA_PTR_SET_RVALUE(personScan_, personScan) };


        // scenario Field Functions 
        bool hasScenario() const { return this->scenario_ != nullptr;};
        void deleteScenario() { this->scenario_ = nullptr;};
        inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
        inline ExtensionConfig& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


      protected:
        shared_ptr<ExtensionConfig::Camera> camera_ {};
        shared_ptr<ExtensionConfig::PersonScan> personScan_ {};
        shared_ptr<string> scenario_ {};
      };

      virtual bool empty() const override { return this->agentType_ == nullptr
        && this->apiName_ == nullptr && this->extensionConfig_ == nullptr && this->instructions_ == nullptr && this->maxIterations_ == nullptr && this->model_ == nullptr; };
      // agentType Field Functions 
      bool hasAgentType() const { return this->agentType_ != nullptr;};
      void deleteAgentType() { this->agentType_ = nullptr;};
      inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
      inline Config& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline Config& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // extensionConfig Field Functions 
      bool hasExtensionConfig() const { return this->extensionConfig_ != nullptr;};
      void deleteExtensionConfig() { this->extensionConfig_ = nullptr;};
      inline const Config::ExtensionConfig & getExtensionConfig() const { DARABONBA_PTR_GET_CONST(extensionConfig_, Config::ExtensionConfig) };
      inline Config::ExtensionConfig getExtensionConfig() { DARABONBA_PTR_GET(extensionConfig_, Config::ExtensionConfig) };
      inline Config& setExtensionConfig(const Config::ExtensionConfig & extensionConfig) { DARABONBA_PTR_SET_VALUE(extensionConfig_, extensionConfig) };
      inline Config& setExtensionConfig(Config::ExtensionConfig && extensionConfig) { DARABONBA_PTR_SET_RVALUE(extensionConfig_, extensionConfig) };


      // instructions Field Functions 
      bool hasInstructions() const { return this->instructions_ != nullptr;};
      void deleteInstructions() { this->instructions_ = nullptr;};
      inline string getInstructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
      inline Config& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


      // maxIterations Field Functions 
      bool hasMaxIterations() const { return this->maxIterations_ != nullptr;};
      void deleteMaxIterations() { this->maxIterations_ = nullptr;};
      inline int32_t getMaxIterations() const { DARABONBA_PTR_GET_DEFAULT(maxIterations_, 0) };
      inline Config& setMaxIterations(int32_t maxIterations) { DARABONBA_PTR_SET_VALUE(maxIterations_, maxIterations) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline const Config::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, Config::Model) };
      inline Config::Model getModel() { DARABONBA_PTR_GET(model_, Config::Model) };
      inline Config& setModel(const Config::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
      inline Config& setModel(Config::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    protected:
      // This parameter is required.
      shared_ptr<string> agentType_ {};
      // This parameter is required.
      shared_ptr<string> apiName_ {};
      shared_ptr<Config::ExtensionConfig> extensionConfig_ {};
      shared_ptr<string> instructions_ {};
      shared_ptr<int32_t> maxIterations_ {};
      shared_ptr<Config::Model> model_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->input_ == nullptr && this->instanceId_ == nullptr && this->parameters_ == nullptr && this->requestId_ == nullptr && this->scenario_ == nullptr
        && this->sessionId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const CameraConsoleDebugStreamRequest::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, CameraConsoleDebugStreamRequest::Config) };
    inline CameraConsoleDebugStreamRequest::Config getConfig() { DARABONBA_PTR_GET(config_, CameraConsoleDebugStreamRequest::Config) };
    inline CameraConsoleDebugStreamRequest& setConfig(const CameraConsoleDebugStreamRequest::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline CameraConsoleDebugStreamRequest& setConfig(CameraConsoleDebugStreamRequest::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const CameraConsoleDebugStreamRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, CameraConsoleDebugStreamRequest::Input) };
    inline CameraConsoleDebugStreamRequest::Input getInput() { DARABONBA_PTR_GET(input_, CameraConsoleDebugStreamRequest::Input) };
    inline CameraConsoleDebugStreamRequest& setInput(const CameraConsoleDebugStreamRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline CameraConsoleDebugStreamRequest& setInput(CameraConsoleDebugStreamRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CameraConsoleDebugStreamRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const CameraConsoleDebugStreamRequest::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, CameraConsoleDebugStreamRequest::Parameters) };
    inline CameraConsoleDebugStreamRequest::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, CameraConsoleDebugStreamRequest::Parameters) };
    inline CameraConsoleDebugStreamRequest& setParameters(const CameraConsoleDebugStreamRequest::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CameraConsoleDebugStreamRequest& setParameters(CameraConsoleDebugStreamRequest::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CameraConsoleDebugStreamRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline CameraConsoleDebugStreamRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CameraConsoleDebugStreamRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    shared_ptr<CameraConsoleDebugStreamRequest::Config> config_ {};
    // This parameter is required.
    shared_ptr<CameraConsoleDebugStreamRequest::Input> input_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<CameraConsoleDebugStreamRequest::Parameters> parameters_ {};
    // 请求 ID 优先级：可信 POP 注入的 x-acs-request-id、非空 X-QI-Request-Id Header、Body.requestId。没有前两者时 Body.requestId 必填；没有可信 POP ID 时 Header 与 Body.requestId 至少提供一个。 格式同 sessionId。成功重放还须复用原 Session；已记录为失败的请求须换新 Request ID。
    shared_ptr<string> requestId_ {};
    shared_ptr<string> scenario_ {};
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaasQIService20260831
#endif
