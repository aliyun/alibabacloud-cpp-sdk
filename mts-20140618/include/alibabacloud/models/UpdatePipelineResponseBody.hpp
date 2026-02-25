// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdatePipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdatePipelineResponseBody() = default ;
    UpdatePipelineResponseBody(const UpdatePipelineResponseBody &) = default ;
    UpdatePipelineResponseBody(UpdatePipelineResponseBody &&) = default ;
    UpdatePipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePipelineResponseBody() = default ;
    UpdatePipelineResponseBody& operator=(const UpdatePipelineResponseBody &) = default ;
    UpdatePipelineResponseBody& operator=(UpdatePipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Pipeline : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pipeline& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NotifyConfig, notifyConfig_);
        DARABONBA_PTR_TO_JSON(QuotaAllocate, quotaAllocate_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Speed, speed_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Pipeline& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NotifyConfig, notifyConfig_);
        DARABONBA_PTR_FROM_JSON(QuotaAllocate, quotaAllocate_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Speed, speed_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      Pipeline() = default ;
      Pipeline(const Pipeline &) = default ;
      Pipeline(Pipeline &&) = default ;
      Pipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Pipeline() = default ;
      Pipeline& operator=(const Pipeline &) = default ;
      Pipeline& operator=(Pipeline &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NotifyConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NotifyConfig& obj) { 
          DARABONBA_PTR_TO_JSON(MqTag, mqTag_);
          DARABONBA_PTR_TO_JSON(MqTopic, mqTopic_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
        };
        friend void from_json(const Darabonba::Json& j, NotifyConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(MqTag, mqTag_);
          DARABONBA_PTR_FROM_JSON(MqTopic, mqTopic_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
        };
        NotifyConfig() = default ;
        NotifyConfig(const NotifyConfig &) = default ;
        NotifyConfig(NotifyConfig &&) = default ;
        NotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NotifyConfig() = default ;
        NotifyConfig& operator=(const NotifyConfig &) = default ;
        NotifyConfig& operator=(NotifyConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mqTag_ == nullptr
        && this->mqTopic_ == nullptr && this->queueName_ == nullptr && this->topic_ == nullptr; };
        // mqTag Field Functions 
        bool hasMqTag() const { return this->mqTag_ != nullptr;};
        void deleteMqTag() { this->mqTag_ = nullptr;};
        inline string getMqTag() const { DARABONBA_PTR_GET_DEFAULT(mqTag_, "") };
        inline NotifyConfig& setMqTag(string mqTag) { DARABONBA_PTR_SET_VALUE(mqTag_, mqTag) };


        // mqTopic Field Functions 
        bool hasMqTopic() const { return this->mqTopic_ != nullptr;};
        void deleteMqTopic() { this->mqTopic_ = nullptr;};
        inline string getMqTopic() const { DARABONBA_PTR_GET_DEFAULT(mqTopic_, "") };
        inline NotifyConfig& setMqTopic(string mqTopic) { DARABONBA_PTR_SET_VALUE(mqTopic_, mqTopic) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
        inline NotifyConfig& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline NotifyConfig& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      protected:
        // The tags of the messages.
        shared_ptr<string> mqTag_ {};
        // The queue of messages that are received.
        shared_ptr<string> mqTopic_ {};
        // The queue that is created in MNS.
        shared_ptr<string> queueName_ {};
        // The topic that is created in MNS.
        shared_ptr<string> topic_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->notifyConfig_ == nullptr && this->quotaAllocate_ == nullptr && this->role_ == nullptr && this->speed_ == nullptr
        && this->state_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Pipeline& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Pipeline& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // notifyConfig Field Functions 
      bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
      void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
      inline const Pipeline::NotifyConfig & getNotifyConfig() const { DARABONBA_PTR_GET_CONST(notifyConfig_, Pipeline::NotifyConfig) };
      inline Pipeline::NotifyConfig getNotifyConfig() { DARABONBA_PTR_GET(notifyConfig_, Pipeline::NotifyConfig) };
      inline Pipeline& setNotifyConfig(const Pipeline::NotifyConfig & notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };
      inline Pipeline& setNotifyConfig(Pipeline::NotifyConfig && notifyConfig) { DARABONBA_PTR_SET_RVALUE(notifyConfig_, notifyConfig) };


      // quotaAllocate Field Functions 
      bool hasQuotaAllocate() const { return this->quotaAllocate_ != nullptr;};
      void deleteQuotaAllocate() { this->quotaAllocate_ = nullptr;};
      inline int64_t getQuotaAllocate() const { DARABONBA_PTR_GET_DEFAULT(quotaAllocate_, 0L) };
      inline Pipeline& setQuotaAllocate(int64_t quotaAllocate) { DARABONBA_PTR_SET_VALUE(quotaAllocate_, quotaAllocate) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Pipeline& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // speed Field Functions 
      bool hasSpeed() const { return this->speed_ != nullptr;};
      void deleteSpeed() { this->speed_ = nullptr;};
      inline string getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
      inline Pipeline& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Pipeline& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The ID of the MPS queue.
      shared_ptr<string> id_ {};
      // The new name of the MPS queue.
      shared_ptr<string> name_ {};
      // The MNS configuration.
      shared_ptr<Pipeline::NotifyConfig> notifyConfig_ {};
      // The quota that is allocated to the MPS queue.
      shared_ptr<int64_t> quotaAllocate_ {};
      // The role that is assigned to the current RAM user.
      shared_ptr<string> role_ {};
      // The type of the MPS queue. Default value: **Standard**. Valid values:
      // 
      // *   **Boost**: MPS queue with transcoding speed boosted
      // *   **Standard**: standard MPS queue
      // *   **NarrowBandHDV2**: MPS queue that supports Narrowband HD 2.0
      // *   **AIVideoCover**: MPS queue for intelligent snapshot capture
      // *   **AIVideoFPShot**: MPS queue for media fingerprinting
      // *   **AIVideoCensor**: MPS queue for automated review
      // *   **AIVideoMCU**: MPS queue for smart tagging
      // *   **AIVideoSummary**: MPS queue for video synopsis
      // *   **AIVideoPorn**: MPS queue for pornography detection in videos
      // *   **AIAudioKWS**: MPS queue for keyword recognition in audio
      // *   **AIAudioASR**: MPS queue for speech-to-text conversion
      shared_ptr<string> speed_ {};
      // The state of the MPS queue. Valid values:
      // 
      // *   **Active**: The MPS queue is active.
      // *   **Paused**: The MPS queue is paused.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->pipeline_ == nullptr
        && this->requestId_ == nullptr; };
    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const UpdatePipelineResponseBody::Pipeline & getPipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, UpdatePipelineResponseBody::Pipeline) };
    inline UpdatePipelineResponseBody::Pipeline getPipeline() { DARABONBA_PTR_GET(pipeline_, UpdatePipelineResponseBody::Pipeline) };
    inline UpdatePipelineResponseBody& setPipeline(const UpdatePipelineResponseBody::Pipeline & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline UpdatePipelineResponseBody& setPipeline(UpdatePipelineResponseBody::Pipeline && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the MPS queue.
    shared_ptr<UpdatePipelineResponseBody::Pipeline> pipeline_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
