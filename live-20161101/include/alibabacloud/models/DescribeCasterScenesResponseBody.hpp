// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSCENESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSCENESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterScenesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterScenesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SceneList, sceneList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterScenesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SceneList, sceneList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCasterScenesResponseBody() = default ;
    DescribeCasterScenesResponseBody(const DescribeCasterScenesResponseBody &) = default ;
    DescribeCasterScenesResponseBody(DescribeCasterScenesResponseBody &&) = default ;
    DescribeCasterScenesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterScenesResponseBody() = default ;
    DescribeCasterScenesResponseBody& operator=(const DescribeCasterScenesResponseBody &) = default ;
    DescribeCasterScenesResponseBody& operator=(DescribeCasterScenesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SceneList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SceneList& obj) { 
        DARABONBA_PTR_TO_JSON(Scene, scene_);
      };
      friend void from_json(const Darabonba::Json& j, SceneList& obj) { 
        DARABONBA_PTR_FROM_JSON(Scene, scene_);
      };
      SceneList() = default ;
      SceneList(const SceneList &) = default ;
      SceneList(SceneList &&) = default ;
      SceneList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SceneList() = default ;
      SceneList& operator=(const SceneList &) = default ;
      SceneList& operator=(SceneList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Scene : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scene& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentIds, componentIds_);
          DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
          DARABONBA_PTR_TO_JSON(OutputType, outputType_);
          DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
          DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StreamInfos, streamInfos_);
          DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Scene& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentIds, componentIds_);
          DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
          DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
          DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
          DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StreamInfos, streamInfos_);
          DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
        };
        Scene() = default ;
        Scene(const Scene &) = default ;
        Scene(Scene &&) = default ;
        Scene(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Scene() = default ;
        Scene& operator=(const Scene &) = default ;
        Scene& operator=(Scene &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StreamInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StreamInfos& obj) { 
            DARABONBA_PTR_TO_JSON(StreamInfo, streamInfo_);
          };
          friend void from_json(const Darabonba::Json& j, StreamInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(StreamInfo, streamInfo_);
          };
          StreamInfos() = default ;
          StreamInfos(const StreamInfos &) = default ;
          StreamInfos(StreamInfos &&) = default ;
          StreamInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StreamInfos() = default ;
          StreamInfos& operator=(const StreamInfos &) = default ;
          StreamInfos& operator=(StreamInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class StreamInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StreamInfo& obj) { 
              DARABONBA_PTR_TO_JSON(OutputStreamUrl, outputStreamUrl_);
              DARABONBA_PTR_TO_JSON(TranscodeConfig, transcodeConfig_);
              DARABONBA_PTR_TO_JSON(VideoFormat, videoFormat_);
            };
            friend void from_json(const Darabonba::Json& j, StreamInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(OutputStreamUrl, outputStreamUrl_);
              DARABONBA_PTR_FROM_JSON(TranscodeConfig, transcodeConfig_);
              DARABONBA_PTR_FROM_JSON(VideoFormat, videoFormat_);
            };
            StreamInfo() = default ;
            StreamInfo(const StreamInfo &) = default ;
            StreamInfo(StreamInfo &&) = default ;
            StreamInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~StreamInfo() = default ;
            StreamInfo& operator=(const StreamInfo &) = default ;
            StreamInfo& operator=(StreamInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->outputStreamUrl_ == nullptr
        && this->transcodeConfig_ == nullptr && this->videoFormat_ == nullptr; };
            // outputStreamUrl Field Functions 
            bool hasOutputStreamUrl() const { return this->outputStreamUrl_ != nullptr;};
            void deleteOutputStreamUrl() { this->outputStreamUrl_ = nullptr;};
            inline string getOutputStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(outputStreamUrl_, "") };
            inline StreamInfo& setOutputStreamUrl(string outputStreamUrl) { DARABONBA_PTR_SET_VALUE(outputStreamUrl_, outputStreamUrl) };


            // transcodeConfig Field Functions 
            bool hasTranscodeConfig() const { return this->transcodeConfig_ != nullptr;};
            void deleteTranscodeConfig() { this->transcodeConfig_ = nullptr;};
            inline string getTranscodeConfig() const { DARABONBA_PTR_GET_DEFAULT(transcodeConfig_, "") };
            inline StreamInfo& setTranscodeConfig(string transcodeConfig) { DARABONBA_PTR_SET_VALUE(transcodeConfig_, transcodeConfig) };


            // videoFormat Field Functions 
            bool hasVideoFormat() const { return this->videoFormat_ != nullptr;};
            void deleteVideoFormat() { this->videoFormat_ = nullptr;};
            inline string getVideoFormat() const { DARABONBA_PTR_GET_DEFAULT(videoFormat_, "") };
            inline StreamInfo& setVideoFormat(string videoFormat) { DARABONBA_PTR_SET_VALUE(videoFormat_, videoFormat) };


          protected:
            shared_ptr<string> outputStreamUrl_ {};
            shared_ptr<string> transcodeConfig_ {};
            shared_ptr<string> videoFormat_ {};
          };

          virtual bool empty() const override { return this->streamInfo_ == nullptr; };
          // streamInfo Field Functions 
          bool hasStreamInfo() const { return this->streamInfo_ != nullptr;};
          void deleteStreamInfo() { this->streamInfo_ = nullptr;};
          inline const vector<StreamInfos::StreamInfo> & getStreamInfo() const { DARABONBA_PTR_GET_CONST(streamInfo_, vector<StreamInfos::StreamInfo>) };
          inline vector<StreamInfos::StreamInfo> getStreamInfo() { DARABONBA_PTR_GET(streamInfo_, vector<StreamInfos::StreamInfo>) };
          inline StreamInfos& setStreamInfo(const vector<StreamInfos::StreamInfo> & streamInfo) { DARABONBA_PTR_SET_VALUE(streamInfo_, streamInfo) };
          inline StreamInfos& setStreamInfo(vector<StreamInfos::StreamInfo> && streamInfo) { DARABONBA_PTR_SET_RVALUE(streamInfo_, streamInfo) };


        protected:
          shared_ptr<vector<StreamInfos::StreamInfo>> streamInfo_ {};
        };

        class ComponentIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ComponentIds& obj) { 
            DARABONBA_PTR_TO_JSON(componentId, componentId_);
          };
          friend void from_json(const Darabonba::Json& j, ComponentIds& obj) { 
            DARABONBA_PTR_FROM_JSON(componentId, componentId_);
          };
          ComponentIds() = default ;
          ComponentIds(const ComponentIds &) = default ;
          ComponentIds(ComponentIds &&) = default ;
          ComponentIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ComponentIds() = default ;
          ComponentIds& operator=(const ComponentIds &) = default ;
          ComponentIds& operator=(ComponentIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->componentId_ == nullptr; };
          // componentId Field Functions 
          bool hasComponentId() const { return this->componentId_ != nullptr;};
          void deleteComponentId() { this->componentId_ = nullptr;};
          inline const vector<string> & getComponentId() const { DARABONBA_PTR_GET_CONST(componentId_, vector<string>) };
          inline vector<string> getComponentId() { DARABONBA_PTR_GET(componentId_, vector<string>) };
          inline ComponentIds& setComponentId(const vector<string> & componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };
          inline ComponentIds& setComponentId(vector<string> && componentId) { DARABONBA_PTR_SET_RVALUE(componentId_, componentId) };


        protected:
          shared_ptr<vector<string>> componentId_ {};
        };

        virtual bool empty() const override { return this->componentIds_ == nullptr
        && this->layoutId_ == nullptr && this->outputType_ == nullptr && this->sceneId_ == nullptr && this->sceneName_ == nullptr && this->status_ == nullptr
        && this->streamInfos_ == nullptr && this->streamUrl_ == nullptr; };
        // componentIds Field Functions 
        bool hasComponentIds() const { return this->componentIds_ != nullptr;};
        void deleteComponentIds() { this->componentIds_ = nullptr;};
        inline const Scene::ComponentIds & getComponentIds() const { DARABONBA_PTR_GET_CONST(componentIds_, Scene::ComponentIds) };
        inline Scene::ComponentIds getComponentIds() { DARABONBA_PTR_GET(componentIds_, Scene::ComponentIds) };
        inline Scene& setComponentIds(const Scene::ComponentIds & componentIds) { DARABONBA_PTR_SET_VALUE(componentIds_, componentIds) };
        inline Scene& setComponentIds(Scene::ComponentIds && componentIds) { DARABONBA_PTR_SET_RVALUE(componentIds_, componentIds) };


        // layoutId Field Functions 
        bool hasLayoutId() const { return this->layoutId_ != nullptr;};
        void deleteLayoutId() { this->layoutId_ = nullptr;};
        inline string getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
        inline Scene& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


        // outputType Field Functions 
        bool hasOutputType() const { return this->outputType_ != nullptr;};
        void deleteOutputType() { this->outputType_ = nullptr;};
        inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
        inline Scene& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


        // sceneId Field Functions 
        bool hasSceneId() const { return this->sceneId_ != nullptr;};
        void deleteSceneId() { this->sceneId_ = nullptr;};
        inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
        inline Scene& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


        // sceneName Field Functions 
        bool hasSceneName() const { return this->sceneName_ != nullptr;};
        void deleteSceneName() { this->sceneName_ = nullptr;};
        inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
        inline Scene& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Scene& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // streamInfos Field Functions 
        bool hasStreamInfos() const { return this->streamInfos_ != nullptr;};
        void deleteStreamInfos() { this->streamInfos_ = nullptr;};
        inline const Scene::StreamInfos & getStreamInfos() const { DARABONBA_PTR_GET_CONST(streamInfos_, Scene::StreamInfos) };
        inline Scene::StreamInfos getStreamInfos() { DARABONBA_PTR_GET(streamInfos_, Scene::StreamInfos) };
        inline Scene& setStreamInfos(const Scene::StreamInfos & streamInfos) { DARABONBA_PTR_SET_VALUE(streamInfos_, streamInfos) };
        inline Scene& setStreamInfos(Scene::StreamInfos && streamInfos) { DARABONBA_PTR_SET_RVALUE(streamInfos_, streamInfos) };


        // streamUrl Field Functions 
        bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
        void deleteStreamUrl() { this->streamUrl_ = nullptr;};
        inline string getStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
        inline Scene& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


      protected:
        shared_ptr<Scene::ComponentIds> componentIds_ {};
        shared_ptr<string> layoutId_ {};
        shared_ptr<string> outputType_ {};
        shared_ptr<string> sceneId_ {};
        shared_ptr<string> sceneName_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<Scene::StreamInfos> streamInfos_ {};
        shared_ptr<string> streamUrl_ {};
      };

      virtual bool empty() const override { return this->scene_ == nullptr; };
      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline const vector<SceneList::Scene> & getScene() const { DARABONBA_PTR_GET_CONST(scene_, vector<SceneList::Scene>) };
      inline vector<SceneList::Scene> getScene() { DARABONBA_PTR_GET(scene_, vector<SceneList::Scene>) };
      inline SceneList& setScene(const vector<SceneList::Scene> & scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };
      inline SceneList& setScene(vector<SceneList::Scene> && scene) { DARABONBA_PTR_SET_RVALUE(scene_, scene) };


    protected:
      shared_ptr<vector<SceneList::Scene>> scene_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sceneList_ == nullptr && this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterScenesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneList Field Functions 
    bool hasSceneList() const { return this->sceneList_ != nullptr;};
    void deleteSceneList() { this->sceneList_ = nullptr;};
    inline const DescribeCasterScenesResponseBody::SceneList & getSceneList() const { DARABONBA_PTR_GET_CONST(sceneList_, DescribeCasterScenesResponseBody::SceneList) };
    inline DescribeCasterScenesResponseBody::SceneList getSceneList() { DARABONBA_PTR_GET(sceneList_, DescribeCasterScenesResponseBody::SceneList) };
    inline DescribeCasterScenesResponseBody& setSceneList(const DescribeCasterScenesResponseBody::SceneList & sceneList) { DARABONBA_PTR_SET_VALUE(sceneList_, sceneList) };
    inline DescribeCasterScenesResponseBody& setSceneList(DescribeCasterScenesResponseBody::SceneList && sceneList) { DARABONBA_PTR_SET_RVALUE(sceneList_, sceneList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCasterScenesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeCasterScenesResponseBody::SceneList> sceneList_ {};
    // The total number of entries.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
