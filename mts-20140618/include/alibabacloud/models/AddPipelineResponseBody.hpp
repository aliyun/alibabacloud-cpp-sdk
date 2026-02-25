// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddPipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddPipelineResponseBody() = default ;
    AddPipelineResponseBody(const AddPipelineResponseBody &) = default ;
    AddPipelineResponseBody(AddPipelineResponseBody &&) = default ;
    AddPipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPipelineResponseBody() = default ;
    AddPipelineResponseBody& operator=(const AddPipelineResponseBody &) = default ;
    AddPipelineResponseBody& operator=(AddPipelineResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(SpeedLevel, speedLevel_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Pipeline& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NotifyConfig, notifyConfig_);
        DARABONBA_PTR_FROM_JSON(QuotaAllocate, quotaAllocate_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Speed, speed_);
        DARABONBA_PTR_FROM_JSON(SpeedLevel, speedLevel_);
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
        // The tag string.
        shared_ptr<string> mqTag_ {};
        // The queue of messages that are received.
        shared_ptr<string> mqTopic_ {};
        // The name of the queue.
        shared_ptr<string> queueName_ {};
        // The name of the topic.
        shared_ptr<string> topic_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->notifyConfig_ == nullptr && this->quotaAllocate_ == nullptr && this->role_ == nullptr && this->speed_ == nullptr
        && this->speedLevel_ == nullptr && this->state_ == nullptr; };
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


      // speedLevel Field Functions 
      bool hasSpeedLevel() const { return this->speedLevel_ != nullptr;};
      void deleteSpeedLevel() { this->speedLevel_ = nullptr;};
      inline int64_t getSpeedLevel() const { DARABONBA_PTR_GET_DEFAULT(speedLevel_, 0L) };
      inline Pipeline& setSpeedLevel(int64_t speedLevel) { DARABONBA_PTR_SET_VALUE(speedLevel_, speedLevel) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Pipeline& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The ID of the MPS queue.
      shared_ptr<string> id_ {};
      // The name of the MPS queue.
      shared_ptr<string> name_ {};
      // The MNS configuration.
      shared_ptr<Pipeline::NotifyConfig> notifyConfig_ {};
      // The quota that is allocated to the MPS queue.
      shared_ptr<int64_t> quotaAllocate_ {};
      // The role.
      shared_ptr<string> role_ {};
      // The type of the MPS queue.
      shared_ptr<string> speed_ {};
      // The level of the MPS queue.
      shared_ptr<int64_t> speedLevel_ {};
      // The state of the MPS queue.
      // 
      // *   Active: The MPS queue is active. The jobs in the MPS queue are scheduled and transcoded by MPS.
      // *   Paused: The MPS queue is paused. Jobs in the MPS queue are no longer scheduled for transcoding by MPS. All of the jobs in the MPS queue remain in the Submitted state. Jobs that are being transcoded are not affected.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->pipeline_ == nullptr
        && this->requestId_ == nullptr; };
    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const AddPipelineResponseBody::Pipeline & getPipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, AddPipelineResponseBody::Pipeline) };
    inline AddPipelineResponseBody::Pipeline getPipeline() { DARABONBA_PTR_GET(pipeline_, AddPipelineResponseBody::Pipeline) };
    inline AddPipelineResponseBody& setPipeline(const AddPipelineResponseBody::Pipeline & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline AddPipelineResponseBody& setPipeline(AddPipelineResponseBody::Pipeline && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddPipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The MPS queue.
    shared_ptr<AddPipelineResponseBody::Pipeline> pipeline_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
