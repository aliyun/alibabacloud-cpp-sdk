// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAUDIOAUDITCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAUDIOAUDITCONFIGRESPONSEBODY_HPP_
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
  class DescribeLiveAudioAuditConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAudioAuditConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAudioAuditConfigList, liveAudioAuditConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAudioAuditConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAudioAuditConfigList, liveAudioAuditConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveAudioAuditConfigResponseBody() = default ;
    DescribeLiveAudioAuditConfigResponseBody(const DescribeLiveAudioAuditConfigResponseBody &) = default ;
    DescribeLiveAudioAuditConfigResponseBody(DescribeLiveAudioAuditConfigResponseBody &&) = default ;
    DescribeLiveAudioAuditConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAudioAuditConfigResponseBody() = default ;
    DescribeLiveAudioAuditConfigResponseBody& operator=(const DescribeLiveAudioAuditConfigResponseBody &) = default ;
    DescribeLiveAudioAuditConfigResponseBody& operator=(DescribeLiveAudioAuditConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveAudioAuditConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveAudioAuditConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(LiveAudioAuditConfig, liveAudioAuditConfig_);
      };
      friend void from_json(const Darabonba::Json& j, LiveAudioAuditConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveAudioAuditConfig, liveAudioAuditConfig_);
      };
      LiveAudioAuditConfigList() = default ;
      LiveAudioAuditConfigList(const LiveAudioAuditConfigList &) = default ;
      LiveAudioAuditConfigList(LiveAudioAuditConfigList &&) = default ;
      LiveAudioAuditConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveAudioAuditConfigList() = default ;
      LiveAudioAuditConfigList& operator=(const LiveAudioAuditConfigList &) = default ;
      LiveAudioAuditConfigList& operator=(LiveAudioAuditConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveAudioAuditConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveAudioAuditConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(BizType, bizType_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Scenes, scenes_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
        };
        friend void from_json(const Darabonba::Json& j, LiveAudioAuditConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(BizType, bizType_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Scenes, scenes_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
        };
        LiveAudioAuditConfig() = default ;
        LiveAudioAuditConfig(const LiveAudioAuditConfig &) = default ;
        LiveAudioAuditConfig(LiveAudioAuditConfig &&) = default ;
        LiveAudioAuditConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveAudioAuditConfig() = default ;
        LiveAudioAuditConfig& operator=(const LiveAudioAuditConfig &) = default ;
        LiveAudioAuditConfig& operator=(LiveAudioAuditConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Scenes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Scenes& obj) { 
            DARABONBA_PTR_TO_JSON(scene, scene_);
          };
          friend void from_json(const Darabonba::Json& j, Scenes& obj) { 
            DARABONBA_PTR_FROM_JSON(scene, scene_);
          };
          Scenes() = default ;
          Scenes(const Scenes &) = default ;
          Scenes(Scenes &&) = default ;
          Scenes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Scenes() = default ;
          Scenes& operator=(const Scenes &) = default ;
          Scenes& operator=(Scenes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->scene_ == nullptr; };
          // scene Field Functions 
          bool hasScene() const { return this->scene_ != nullptr;};
          void deleteScene() { this->scene_ = nullptr;};
          inline const vector<string> & getScene() const { DARABONBA_PTR_GET_CONST(scene_, vector<string>) };
          inline vector<string> getScene() { DARABONBA_PTR_GET(scene_, vector<string>) };
          inline Scenes& setScene(const vector<string> & scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };
          inline Scenes& setScene(vector<string> && scene) { DARABONBA_PTR_SET_RVALUE(scene_, scene) };


        protected:
          shared_ptr<vector<string>> scene_ {};
        };

        virtual bool empty() const override { return this->appName_ == nullptr
        && this->bizType_ == nullptr && this->domainName_ == nullptr && this->scenes_ == nullptr && this->streamName_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveAudioAuditConfig& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
        inline LiveAudioAuditConfig& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveAudioAuditConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // scenes Field Functions 
        bool hasScenes() const { return this->scenes_ != nullptr;};
        void deleteScenes() { this->scenes_ = nullptr;};
        inline const LiveAudioAuditConfig::Scenes & getScenes() const { DARABONBA_PTR_GET_CONST(scenes_, LiveAudioAuditConfig::Scenes) };
        inline LiveAudioAuditConfig::Scenes getScenes() { DARABONBA_PTR_GET(scenes_, LiveAudioAuditConfig::Scenes) };
        inline LiveAudioAuditConfig& setScenes(const LiveAudioAuditConfig::Scenes & scenes) { DARABONBA_PTR_SET_VALUE(scenes_, scenes) };
        inline LiveAudioAuditConfig& setScenes(LiveAudioAuditConfig::Scenes && scenes) { DARABONBA_PTR_SET_RVALUE(scenes_, scenes) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LiveAudioAuditConfig& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<string> bizType_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<LiveAudioAuditConfig::Scenes> scenes_ {};
        shared_ptr<string> streamName_ {};
      };

      virtual bool empty() const override { return this->liveAudioAuditConfig_ == nullptr; };
      // liveAudioAuditConfig Field Functions 
      bool hasLiveAudioAuditConfig() const { return this->liveAudioAuditConfig_ != nullptr;};
      void deleteLiveAudioAuditConfig() { this->liveAudioAuditConfig_ = nullptr;};
      inline const vector<LiveAudioAuditConfigList::LiveAudioAuditConfig> & getLiveAudioAuditConfig() const { DARABONBA_PTR_GET_CONST(liveAudioAuditConfig_, vector<LiveAudioAuditConfigList::LiveAudioAuditConfig>) };
      inline vector<LiveAudioAuditConfigList::LiveAudioAuditConfig> getLiveAudioAuditConfig() { DARABONBA_PTR_GET(liveAudioAuditConfig_, vector<LiveAudioAuditConfigList::LiveAudioAuditConfig>) };
      inline LiveAudioAuditConfigList& setLiveAudioAuditConfig(const vector<LiveAudioAuditConfigList::LiveAudioAuditConfig> & liveAudioAuditConfig) { DARABONBA_PTR_SET_VALUE(liveAudioAuditConfig_, liveAudioAuditConfig) };
      inline LiveAudioAuditConfigList& setLiveAudioAuditConfig(vector<LiveAudioAuditConfigList::LiveAudioAuditConfig> && liveAudioAuditConfig) { DARABONBA_PTR_SET_RVALUE(liveAudioAuditConfig_, liveAudioAuditConfig) };


    protected:
      shared_ptr<vector<LiveAudioAuditConfigList::LiveAudioAuditConfig>> liveAudioAuditConfig_ {};
    };

    virtual bool empty() const override { return this->liveAudioAuditConfigList_ == nullptr
        && this->requestId_ == nullptr; };
    // liveAudioAuditConfigList Field Functions 
    bool hasLiveAudioAuditConfigList() const { return this->liveAudioAuditConfigList_ != nullptr;};
    void deleteLiveAudioAuditConfigList() { this->liveAudioAuditConfigList_ = nullptr;};
    inline const DescribeLiveAudioAuditConfigResponseBody::LiveAudioAuditConfigList & getLiveAudioAuditConfigList() const { DARABONBA_PTR_GET_CONST(liveAudioAuditConfigList_, DescribeLiveAudioAuditConfigResponseBody::LiveAudioAuditConfigList) };
    inline DescribeLiveAudioAuditConfigResponseBody::LiveAudioAuditConfigList getLiveAudioAuditConfigList() { DARABONBA_PTR_GET(liveAudioAuditConfigList_, DescribeLiveAudioAuditConfigResponseBody::LiveAudioAuditConfigList) };
    inline DescribeLiveAudioAuditConfigResponseBody& setLiveAudioAuditConfigList(const DescribeLiveAudioAuditConfigResponseBody::LiveAudioAuditConfigList & liveAudioAuditConfigList) { DARABONBA_PTR_SET_VALUE(liveAudioAuditConfigList_, liveAudioAuditConfigList) };
    inline DescribeLiveAudioAuditConfigResponseBody& setLiveAudioAuditConfigList(DescribeLiveAudioAuditConfigResponseBody::LiveAudioAuditConfigList && liveAudioAuditConfigList) { DARABONBA_PTR_SET_RVALUE(liveAudioAuditConfigList_, liveAudioAuditConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveAudioAuditConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLiveAudioAuditConfigResponseBody::LiveAudioAuditConfigList> liveAudioAuditConfigList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
