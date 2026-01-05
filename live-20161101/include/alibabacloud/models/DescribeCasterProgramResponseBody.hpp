// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERPROGRAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERPROGRAMRESPONSEBODY_HPP_
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
  class DescribeCasterProgramResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterProgramResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(Episodes, episodes_);
      DARABONBA_PTR_TO_JSON(ProgramEffect, programEffect_);
      DARABONBA_PTR_TO_JSON(ProgramName, programName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterProgramResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(Episodes, episodes_);
      DARABONBA_PTR_FROM_JSON(ProgramEffect, programEffect_);
      DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCasterProgramResponseBody() = default ;
    DescribeCasterProgramResponseBody(const DescribeCasterProgramResponseBody &) = default ;
    DescribeCasterProgramResponseBody(DescribeCasterProgramResponseBody &&) = default ;
    DescribeCasterProgramResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterProgramResponseBody() = default ;
    DescribeCasterProgramResponseBody& operator=(const DescribeCasterProgramResponseBody &) = default ;
    DescribeCasterProgramResponseBody& operator=(DescribeCasterProgramResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Episodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Episodes& obj) { 
        DARABONBA_PTR_TO_JSON(Episode, episode_);
      };
      friend void from_json(const Darabonba::Json& j, Episodes& obj) { 
        DARABONBA_PTR_FROM_JSON(Episode, episode_);
      };
      Episodes() = default ;
      Episodes(const Episodes &) = default ;
      Episodes(Episodes &&) = default ;
      Episodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Episodes() = default ;
      Episodes& operator=(const Episodes &) = default ;
      Episodes& operator=(Episodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Episode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Episode& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentIds, componentIds_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EpisodeId, episodeId_);
          DARABONBA_PTR_TO_JSON(EpisodeName, episodeName_);
          DARABONBA_PTR_TO_JSON(EpisodeType, episodeType_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SwitchType, switchType_);
        };
        friend void from_json(const Darabonba::Json& j, Episode& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentIds, componentIds_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EpisodeId, episodeId_);
          DARABONBA_PTR_FROM_JSON(EpisodeName, episodeName_);
          DARABONBA_PTR_FROM_JSON(EpisodeType, episodeType_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SwitchType, switchType_);
        };
        Episode() = default ;
        Episode(const Episode &) = default ;
        Episode(Episode &&) = default ;
        Episode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Episode() = default ;
        Episode& operator=(const Episode &) = default ;
        Episode& operator=(Episode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ComponentIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ComponentIds& obj) { 
            DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
          };
          friend void from_json(const Darabonba::Json& j, ComponentIds& obj) { 
            DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
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
        && this->endTime_ == nullptr && this->episodeId_ == nullptr && this->episodeName_ == nullptr && this->episodeType_ == nullptr && this->resourceId_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->switchType_ == nullptr; };
        // componentIds Field Functions 
        bool hasComponentIds() const { return this->componentIds_ != nullptr;};
        void deleteComponentIds() { this->componentIds_ = nullptr;};
        inline const Episode::ComponentIds & getComponentIds() const { DARABONBA_PTR_GET_CONST(componentIds_, Episode::ComponentIds) };
        inline Episode::ComponentIds getComponentIds() { DARABONBA_PTR_GET(componentIds_, Episode::ComponentIds) };
        inline Episode& setComponentIds(const Episode::ComponentIds & componentIds) { DARABONBA_PTR_SET_VALUE(componentIds_, componentIds) };
        inline Episode& setComponentIds(Episode::ComponentIds && componentIds) { DARABONBA_PTR_SET_RVALUE(componentIds_, componentIds) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Episode& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // episodeId Field Functions 
        bool hasEpisodeId() const { return this->episodeId_ != nullptr;};
        void deleteEpisodeId() { this->episodeId_ = nullptr;};
        inline string getEpisodeId() const { DARABONBA_PTR_GET_DEFAULT(episodeId_, "") };
        inline Episode& setEpisodeId(string episodeId) { DARABONBA_PTR_SET_VALUE(episodeId_, episodeId) };


        // episodeName Field Functions 
        bool hasEpisodeName() const { return this->episodeName_ != nullptr;};
        void deleteEpisodeName() { this->episodeName_ = nullptr;};
        inline string getEpisodeName() const { DARABONBA_PTR_GET_DEFAULT(episodeName_, "") };
        inline Episode& setEpisodeName(string episodeName) { DARABONBA_PTR_SET_VALUE(episodeName_, episodeName) };


        // episodeType Field Functions 
        bool hasEpisodeType() const { return this->episodeType_ != nullptr;};
        void deleteEpisodeType() { this->episodeType_ = nullptr;};
        inline string getEpisodeType() const { DARABONBA_PTR_GET_DEFAULT(episodeType_, "") };
        inline Episode& setEpisodeType(string episodeType) { DARABONBA_PTR_SET_VALUE(episodeType_, episodeType) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Episode& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Episode& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Episode& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // switchType Field Functions 
        bool hasSwitchType() const { return this->switchType_ != nullptr;};
        void deleteSwitchType() { this->switchType_ = nullptr;};
        inline string getSwitchType() const { DARABONBA_PTR_GET_DEFAULT(switchType_, "") };
        inline Episode& setSwitchType(string switchType) { DARABONBA_PTR_SET_VALUE(switchType_, switchType) };


      protected:
        // The components.
        shared_ptr<Episode::ComponentIds> componentIds_ {};
        // The end of the time range during which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> endTime_ {};
        // The ID of the episode.
        shared_ptr<string> episodeId_ {};
        // The name of the episode.
        shared_ptr<string> episodeName_ {};
        // The type of the episode. Valid values:
        // 
        // *   **Resource**: a video resource
        // *   **Component**: a component
        shared_ptr<string> episodeType_ {};
        // The ID of the video resource.
        shared_ptr<string> resourceId_ {};
        // The beginning of the time range during which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> startTime_ {};
        // The status of the episode.
        shared_ptr<int32_t> status_ {};
        // The policy for switching episodes. Valid values:
        // 
        // *   **TimeFirst**: The episode starts when the previous episode ends and ends when the next episode starts. If no next episode exists, the episode keeps repeating until a new episode is added or the production studio stops. This value is required for live video resources.
        // *   **ContentFirst**: The episode starts and ends as scheduled.
        shared_ptr<string> switchType_ {};
      };

      virtual bool empty() const override { return this->episode_ == nullptr; };
      // episode Field Functions 
      bool hasEpisode() const { return this->episode_ != nullptr;};
      void deleteEpisode() { this->episode_ = nullptr;};
      inline const vector<Episodes::Episode> & getEpisode() const { DARABONBA_PTR_GET_CONST(episode_, vector<Episodes::Episode>) };
      inline vector<Episodes::Episode> getEpisode() { DARABONBA_PTR_GET(episode_, vector<Episodes::Episode>) };
      inline Episodes& setEpisode(const vector<Episodes::Episode> & episode) { DARABONBA_PTR_SET_VALUE(episode_, episode) };
      inline Episodes& setEpisode(vector<Episodes::Episode> && episode) { DARABONBA_PTR_SET_RVALUE(episode_, episode) };


    protected:
      shared_ptr<vector<Episodes::Episode>> episode_ {};
    };

    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->episodes_ == nullptr && this->programEffect_ == nullptr && this->programName_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline DescribeCasterProgramResponseBody& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // episodes Field Functions 
    bool hasEpisodes() const { return this->episodes_ != nullptr;};
    void deleteEpisodes() { this->episodes_ = nullptr;};
    inline const DescribeCasterProgramResponseBody::Episodes & getEpisodes() const { DARABONBA_PTR_GET_CONST(episodes_, DescribeCasterProgramResponseBody::Episodes) };
    inline DescribeCasterProgramResponseBody::Episodes getEpisodes() { DARABONBA_PTR_GET(episodes_, DescribeCasterProgramResponseBody::Episodes) };
    inline DescribeCasterProgramResponseBody& setEpisodes(const DescribeCasterProgramResponseBody::Episodes & episodes) { DARABONBA_PTR_SET_VALUE(episodes_, episodes) };
    inline DescribeCasterProgramResponseBody& setEpisodes(DescribeCasterProgramResponseBody::Episodes && episodes) { DARABONBA_PTR_SET_RVALUE(episodes_, episodes) };


    // programEffect Field Functions 
    bool hasProgramEffect() const { return this->programEffect_ != nullptr;};
    void deleteProgramEffect() { this->programEffect_ = nullptr;};
    inline int32_t getProgramEffect() const { DARABONBA_PTR_GET_DEFAULT(programEffect_, 0) };
    inline DescribeCasterProgramResponseBody& setProgramEffect(int32_t programEffect) { DARABONBA_PTR_SET_VALUE(programEffect_, programEffect) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string getProgramName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline DescribeCasterProgramResponseBody& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterProgramResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCasterProgramResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The ID of the production studio.
    shared_ptr<string> casterId_ {};
    // The list of the episodes.
    shared_ptr<DescribeCasterProgramResponseBody::Episodes> episodes_ {};
    // Indicates whether carousel playback is enabled.
    // 
    // *   **0**: Carousel playback is disabled.
    // *   **1**: Carousel playback is enabled.
    shared_ptr<int32_t> programEffect_ {};
    // The name of the episode list.
    shared_ptr<string> programName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
