// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPIPELINELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPIPELINELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryPipelineListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPipelineListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistPids, nonExistPids_);
      DARABONBA_PTR_TO_JSON(PipelineList, pipelineList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPipelineListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistPids, nonExistPids_);
      DARABONBA_PTR_FROM_JSON(PipelineList, pipelineList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryPipelineListResponseBody() = default ;
    QueryPipelineListResponseBody(const QueryPipelineListResponseBody &) = default ;
    QueryPipelineListResponseBody(QueryPipelineListResponseBody &&) = default ;
    QueryPipelineListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPipelineListResponseBody() = default ;
    QueryPipelineListResponseBody& operator=(const QueryPipelineListResponseBody &) = default ;
    QueryPipelineListResponseBody& operator=(QueryPipelineListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PipelineList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PipelineList& obj) { 
        DARABONBA_PTR_TO_JSON(Pipeline, pipeline_);
      };
      friend void from_json(const Darabonba::Json& j, PipelineList& obj) { 
        DARABONBA_PTR_FROM_JSON(Pipeline, pipeline_);
      };
      PipelineList() = default ;
      PipelineList(const PipelineList &) = default ;
      PipelineList(PipelineList &&) = default ;
      PipelineList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PipelineList() = default ;
      PipelineList& operator=(const PipelineList &) = default ;
      PipelineList& operator=(PipelineList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Pipeline : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Pipeline& obj) { 
          DARABONBA_PTR_TO_JSON(ExtendConfig, extendConfig_);
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
          DARABONBA_PTR_FROM_JSON(ExtendConfig, extendConfig_);
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
          shared_ptr<string> mqTag_ {};
          shared_ptr<string> mqTopic_ {};
          shared_ptr<string> queueName_ {};
          shared_ptr<string> topic_ {};
        };

        class ExtendConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExtendConfig& obj) { 
            DARABONBA_PTR_TO_JSON(IsBoostNew, isBoostNew_);
            DARABONBA_PTR_TO_JSON(MaxMultiSpeed, maxMultiSpeed_);
            DARABONBA_PTR_TO_JSON(MultiSpeedDowngradePolicy, multiSpeedDowngradePolicy_);
          };
          friend void from_json(const Darabonba::Json& j, ExtendConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(IsBoostNew, isBoostNew_);
            DARABONBA_PTR_FROM_JSON(MaxMultiSpeed, maxMultiSpeed_);
            DARABONBA_PTR_FROM_JSON(MultiSpeedDowngradePolicy, multiSpeedDowngradePolicy_);
          };
          ExtendConfig() = default ;
          ExtendConfig(const ExtendConfig &) = default ;
          ExtendConfig(ExtendConfig &&) = default ;
          ExtendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExtendConfig() = default ;
          ExtendConfig& operator=(const ExtendConfig &) = default ;
          ExtendConfig& operator=(ExtendConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->isBoostNew_ == nullptr
        && this->maxMultiSpeed_ == nullptr && this->multiSpeedDowngradePolicy_ == nullptr; };
          // isBoostNew Field Functions 
          bool hasIsBoostNew() const { return this->isBoostNew_ != nullptr;};
          void deleteIsBoostNew() { this->isBoostNew_ = nullptr;};
          inline bool getIsBoostNew() const { DARABONBA_PTR_GET_DEFAULT(isBoostNew_, false) };
          inline ExtendConfig& setIsBoostNew(bool isBoostNew) { DARABONBA_PTR_SET_VALUE(isBoostNew_, isBoostNew) };


          // maxMultiSpeed Field Functions 
          bool hasMaxMultiSpeed() const { return this->maxMultiSpeed_ != nullptr;};
          void deleteMaxMultiSpeed() { this->maxMultiSpeed_ = nullptr;};
          inline int32_t getMaxMultiSpeed() const { DARABONBA_PTR_GET_DEFAULT(maxMultiSpeed_, 0) };
          inline ExtendConfig& setMaxMultiSpeed(int32_t maxMultiSpeed) { DARABONBA_PTR_SET_VALUE(maxMultiSpeed_, maxMultiSpeed) };


          // multiSpeedDowngradePolicy Field Functions 
          bool hasMultiSpeedDowngradePolicy() const { return this->multiSpeedDowngradePolicy_ != nullptr;};
          void deleteMultiSpeedDowngradePolicy() { this->multiSpeedDowngradePolicy_ = nullptr;};
          inline string getMultiSpeedDowngradePolicy() const { DARABONBA_PTR_GET_DEFAULT(multiSpeedDowngradePolicy_, "") };
          inline ExtendConfig& setMultiSpeedDowngradePolicy(string multiSpeedDowngradePolicy) { DARABONBA_PTR_SET_VALUE(multiSpeedDowngradePolicy_, multiSpeedDowngradePolicy) };


        protected:
          shared_ptr<bool> isBoostNew_ {};
          shared_ptr<int32_t> maxMultiSpeed_ {};
          shared_ptr<string> multiSpeedDowngradePolicy_ {};
        };

        virtual bool empty() const override { return this->extendConfig_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->notifyConfig_ == nullptr && this->quotaAllocate_ == nullptr && this->role_ == nullptr
        && this->speed_ == nullptr && this->speedLevel_ == nullptr && this->state_ == nullptr; };
        // extendConfig Field Functions 
        bool hasExtendConfig() const { return this->extendConfig_ != nullptr;};
        void deleteExtendConfig() { this->extendConfig_ = nullptr;};
        inline const Pipeline::ExtendConfig & getExtendConfig() const { DARABONBA_PTR_GET_CONST(extendConfig_, Pipeline::ExtendConfig) };
        inline Pipeline::ExtendConfig getExtendConfig() { DARABONBA_PTR_GET(extendConfig_, Pipeline::ExtendConfig) };
        inline Pipeline& setExtendConfig(const Pipeline::ExtendConfig & extendConfig) { DARABONBA_PTR_SET_VALUE(extendConfig_, extendConfig) };
        inline Pipeline& setExtendConfig(Pipeline::ExtendConfig && extendConfig) { DARABONBA_PTR_SET_RVALUE(extendConfig_, extendConfig) };


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
        shared_ptr<Pipeline::ExtendConfig> extendConfig_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<Pipeline::NotifyConfig> notifyConfig_ {};
        shared_ptr<int64_t> quotaAllocate_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> speed_ {};
        shared_ptr<int64_t> speedLevel_ {};
        shared_ptr<string> state_ {};
      };

      virtual bool empty() const override { return this->pipeline_ == nullptr; };
      // pipeline Field Functions 
      bool hasPipeline() const { return this->pipeline_ != nullptr;};
      void deletePipeline() { this->pipeline_ = nullptr;};
      inline const vector<PipelineList::Pipeline> & getPipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, vector<PipelineList::Pipeline>) };
      inline vector<PipelineList::Pipeline> getPipeline() { DARABONBA_PTR_GET(pipeline_, vector<PipelineList::Pipeline>) };
      inline PipelineList& setPipeline(const vector<PipelineList::Pipeline> & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
      inline PipelineList& setPipeline(vector<PipelineList::Pipeline> && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


    protected:
      shared_ptr<vector<PipelineList::Pipeline>> pipeline_ {};
    };

    class NonExistPids : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NonExistPids& obj) { 
        DARABONBA_PTR_TO_JSON(String, string_);
      };
      friend void from_json(const Darabonba::Json& j, NonExistPids& obj) { 
        DARABONBA_PTR_FROM_JSON(String, string_);
      };
      NonExistPids() = default ;
      NonExistPids(const NonExistPids &) = default ;
      NonExistPids(NonExistPids &&) = default ;
      NonExistPids(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NonExistPids() = default ;
      NonExistPids& operator=(const NonExistPids &) = default ;
      NonExistPids& operator=(NonExistPids &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->string_ == nullptr; };
      // string Field Functions 
      bool hasString() const { return this->string_ != nullptr;};
      void deleteString() { this->string_ = nullptr;};
      inline const vector<string> & getString() const { DARABONBA_PTR_GET_CONST(string_, vector<string>) };
      inline vector<string> getString() { DARABONBA_PTR_GET(string_, vector<string>) };
      inline NonExistPids& setString(const vector<string> & string) { DARABONBA_PTR_SET_VALUE(string_, string) };
      inline NonExistPids& setString(vector<string> && string) { DARABONBA_PTR_SET_RVALUE(string_, string) };


    protected:
      shared_ptr<vector<string>> string_ {};
    };

    virtual bool empty() const override { return this->nonExistPids_ == nullptr
        && this->pipelineList_ == nullptr && this->requestId_ == nullptr; };
    // nonExistPids Field Functions 
    bool hasNonExistPids() const { return this->nonExistPids_ != nullptr;};
    void deleteNonExistPids() { this->nonExistPids_ = nullptr;};
    inline const QueryPipelineListResponseBody::NonExistPids & getNonExistPids() const { DARABONBA_PTR_GET_CONST(nonExistPids_, QueryPipelineListResponseBody::NonExistPids) };
    inline QueryPipelineListResponseBody::NonExistPids getNonExistPids() { DARABONBA_PTR_GET(nonExistPids_, QueryPipelineListResponseBody::NonExistPids) };
    inline QueryPipelineListResponseBody& setNonExistPids(const QueryPipelineListResponseBody::NonExistPids & nonExistPids) { DARABONBA_PTR_SET_VALUE(nonExistPids_, nonExistPids) };
    inline QueryPipelineListResponseBody& setNonExistPids(QueryPipelineListResponseBody::NonExistPids && nonExistPids) { DARABONBA_PTR_SET_RVALUE(nonExistPids_, nonExistPids) };


    // pipelineList Field Functions 
    bool hasPipelineList() const { return this->pipelineList_ != nullptr;};
    void deletePipelineList() { this->pipelineList_ = nullptr;};
    inline const QueryPipelineListResponseBody::PipelineList & getPipelineList() const { DARABONBA_PTR_GET_CONST(pipelineList_, QueryPipelineListResponseBody::PipelineList) };
    inline QueryPipelineListResponseBody::PipelineList getPipelineList() { DARABONBA_PTR_GET(pipelineList_, QueryPipelineListResponseBody::PipelineList) };
    inline QueryPipelineListResponseBody& setPipelineList(const QueryPipelineListResponseBody::PipelineList & pipelineList) { DARABONBA_PTR_SET_VALUE(pipelineList_, pipelineList) };
    inline QueryPipelineListResponseBody& setPipelineList(QueryPipelineListResponseBody::PipelineList && pipelineList) { DARABONBA_PTR_SET_RVALUE(pipelineList_, pipelineList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPipelineListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryPipelineListResponseBody::NonExistPids> nonExistPids_ {};
    shared_ptr<QueryPipelineListResponseBody::PipelineList> pipelineList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
