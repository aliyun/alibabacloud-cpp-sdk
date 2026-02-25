// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHPIPELINERESPONSEBODY_HPP_
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
  class SearchPipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchPipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PipelineList, pipelineList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchPipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PipelineList, pipelineList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchPipelineResponseBody() = default ;
    SearchPipelineResponseBody(const SearchPipelineResponseBody &) = default ;
    SearchPipelineResponseBody(SearchPipelineResponseBody &&) = default ;
    SearchPipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchPipelineResponseBody() = default ;
    SearchPipelineResponseBody& operator=(const SearchPipelineResponseBody &) = default ;
    SearchPipelineResponseBody& operator=(SearchPipelineResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
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
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
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

        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->notifyConfig_ == nullptr && this->quotaAllocate_ == nullptr && this->role_ == nullptr
        && this->speed_ == nullptr && this->speedLevel_ == nullptr && this->state_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Pipeline& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


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
        shared_ptr<string> creationTime_ {};
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

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->pipelineList_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline SearchPipelineResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline SearchPipelineResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pipelineList Field Functions 
    bool hasPipelineList() const { return this->pipelineList_ != nullptr;};
    void deletePipelineList() { this->pipelineList_ = nullptr;};
    inline const SearchPipelineResponseBody::PipelineList & getPipelineList() const { DARABONBA_PTR_GET_CONST(pipelineList_, SearchPipelineResponseBody::PipelineList) };
    inline SearchPipelineResponseBody::PipelineList getPipelineList() { DARABONBA_PTR_GET(pipelineList_, SearchPipelineResponseBody::PipelineList) };
    inline SearchPipelineResponseBody& setPipelineList(const SearchPipelineResponseBody::PipelineList & pipelineList) { DARABONBA_PTR_SET_VALUE(pipelineList_, pipelineList) };
    inline SearchPipelineResponseBody& setPipelineList(SearchPipelineResponseBody::PipelineList && pipelineList) { DARABONBA_PTR_SET_RVALUE(pipelineList_, pipelineList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchPipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchPipelineResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<SearchPipelineResponseBody::PipelineList> pipelineList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
