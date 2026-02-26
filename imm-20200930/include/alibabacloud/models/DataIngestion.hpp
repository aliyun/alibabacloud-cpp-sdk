// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAINGESTION_HPP_
#define ALIBABACLOUD_MODELS_DATAINGESTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MNS.hpp>
#include <alibabacloud/models/RocketMQ.hpp>
#include <alibabacloud/models/FastFailPolicy.hpp>
#include <vector>
#include <alibabacloud/models/Input.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DataIngestion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataIngestion& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(ServiceRole, serviceRole_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Statistic, statistic_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DataIngestion& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(ServiceRole, serviceRole_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DataIngestion() = default ;
    DataIngestion(const DataIngestion &) = default ;
    DataIngestion(DataIngestion &&) = default ;
    DataIngestion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataIngestion() = default ;
    DataIngestion& operator=(const DataIngestion &) = default ;
    DataIngestion& operator=(DataIngestion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Statistic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Statistic& obj) { 
        DARABONBA_PTR_TO_JSON(SkipFiles, skipFiles_);
        DARABONBA_PTR_TO_JSON(SubmitFailure, submitFailure_);
        DARABONBA_PTR_TO_JSON(SubmitSuccess, submitSuccess_);
      };
      friend void from_json(const Darabonba::Json& j, Statistic& obj) { 
        DARABONBA_PTR_FROM_JSON(SkipFiles, skipFiles_);
        DARABONBA_PTR_FROM_JSON(SubmitFailure, submitFailure_);
        DARABONBA_PTR_FROM_JSON(SubmitSuccess, submitSuccess_);
      };
      Statistic() = default ;
      Statistic(const Statistic &) = default ;
      Statistic(Statistic &&) = default ;
      Statistic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Statistic() = default ;
      Statistic& operator=(const Statistic &) = default ;
      Statistic& operator=(Statistic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->skipFiles_ == nullptr
        && this->submitFailure_ == nullptr && this->submitSuccess_ == nullptr; };
      // skipFiles Field Functions 
      bool hasSkipFiles() const { return this->skipFiles_ != nullptr;};
      void deleteSkipFiles() { this->skipFiles_ = nullptr;};
      inline int64_t getSkipFiles() const { DARABONBA_PTR_GET_DEFAULT(skipFiles_, 0L) };
      inline Statistic& setSkipFiles(int64_t skipFiles) { DARABONBA_PTR_SET_VALUE(skipFiles_, skipFiles) };


      // submitFailure Field Functions 
      bool hasSubmitFailure() const { return this->submitFailure_ != nullptr;};
      void deleteSubmitFailure() { this->submitFailure_ = nullptr;};
      inline int64_t getSubmitFailure() const { DARABONBA_PTR_GET_DEFAULT(submitFailure_, 0L) };
      inline Statistic& setSubmitFailure(int64_t submitFailure) { DARABONBA_PTR_SET_VALUE(submitFailure_, submitFailure) };


      // submitSuccess Field Functions 
      bool hasSubmitSuccess() const { return this->submitSuccess_ != nullptr;};
      void deleteSubmitSuccess() { this->submitSuccess_ = nullptr;};
      inline int64_t getSubmitSuccess() const { DARABONBA_PTR_GET_DEFAULT(submitSuccess_, 0L) };
      inline Statistic& setSubmitSuccess(int64_t submitSuccess) { DARABONBA_PTR_SET_VALUE(submitSuccess_, submitSuccess) };


    protected:
      // The number of files that are skipped.
      shared_ptr<int64_t> skipFiles_ {};
      // The number of files that fail to be submitted.
      shared_ptr<int64_t> submitFailure_ {};
      // The number of files that are submitted.
      shared_ptr<int64_t> submitSuccess_ {};
    };

    class Notification : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Notification& obj) { 
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(MNS, MNS_);
        DARABONBA_PTR_TO_JSON(RocketMQ, rocketMQ_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
      };
      friend void from_json(const Darabonba::Json& j, Notification& obj) { 
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(MNS, MNS_);
        DARABONBA_PTR_FROM_JSON(RocketMQ, rocketMQ_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
      };
      Notification() = default ;
      Notification(const Notification &) = default ;
      Notification(Notification &&) = default ;
      Notification(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Notification() = default ;
      Notification& operator=(const Notification &) = default ;
      Notification& operator=(Notification &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->MNS_ == nullptr && this->rocketMQ_ == nullptr && this->topic_ == nullptr; };
      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Notification& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // MNS Field Functions 
      bool hasMNS() const { return this->MNS_ != nullptr;};
      void deleteMNS() { this->MNS_ = nullptr;};
      inline const MNS & getMNS() const { DARABONBA_PTR_GET_CONST(MNS_, MNS) };
      inline MNS getMNS() { DARABONBA_PTR_GET(MNS_, MNS) };
      inline Notification& setMNS(const MNS & MNS) { DARABONBA_PTR_SET_VALUE(MNS_, MNS) };
      inline Notification& setMNS(MNS && MNS) { DARABONBA_PTR_SET_RVALUE(MNS_, MNS) };


      // rocketMQ Field Functions 
      bool hasRocketMQ() const { return this->rocketMQ_ != nullptr;};
      void deleteRocketMQ() { this->rocketMQ_ = nullptr;};
      inline const RocketMQ & getRocketMQ() const { DARABONBA_PTR_GET_CONST(rocketMQ_, RocketMQ) };
      inline RocketMQ getRocketMQ() { DARABONBA_PTR_GET(rocketMQ_, RocketMQ) };
      inline Notification& setRocketMQ(const RocketMQ & rocketMQ) { DARABONBA_PTR_SET_VALUE(rocketMQ_, rocketMQ) };
      inline Notification& setRocketMQ(RocketMQ && rocketMQ) { DARABONBA_PTR_SET_RVALUE(rocketMQ_, rocketMQ) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline Notification& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    protected:
      // The Simple Message Queue (SMQ) endpoint.
      shared_ptr<string> endpoint_ {};
      // MNS
      shared_ptr<MNS> MNS_ {};
      // RocketMQ
      shared_ptr<RocketMQ> rocketMQ_ {};
      // The SMQ topic.
      shared_ptr<string> topic_ {};
    };

    class Actions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Actions& obj) { 
        DARABONBA_PTR_TO_JSON(FastFailPolicy, fastFailPolicy_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      };
      friend void from_json(const Darabonba::Json& j, Actions& obj) { 
        DARABONBA_PTR_FROM_JSON(FastFailPolicy, fastFailPolicy_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      };
      Actions() = default ;
      Actions(const Actions &) = default ;
      Actions(Actions &&) = default ;
      Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Actions() = default ;
      Actions& operator=(const Actions &) = default ;
      Actions& operator=(Actions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fastFailPolicy_ == nullptr
        && this->name_ == nullptr && this->parameters_ == nullptr; };
      // fastFailPolicy Field Functions 
      bool hasFastFailPolicy() const { return this->fastFailPolicy_ != nullptr;};
      void deleteFastFailPolicy() { this->fastFailPolicy_ = nullptr;};
      inline const FastFailPolicy & getFastFailPolicy() const { DARABONBA_PTR_GET_CONST(fastFailPolicy_, FastFailPolicy) };
      inline FastFailPolicy getFastFailPolicy() { DARABONBA_PTR_GET(fastFailPolicy_, FastFailPolicy) };
      inline Actions& setFastFailPolicy(const FastFailPolicy & fastFailPolicy) { DARABONBA_PTR_SET_VALUE(fastFailPolicy_, fastFailPolicy) };
      inline Actions& setFastFailPolicy(FastFailPolicy && fastFailPolicy) { DARABONBA_PTR_SET_RVALUE(fastFailPolicy_, fastFailPolicy) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Actions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<string> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<string>) };
      inline vector<string> getParameters() { DARABONBA_PTR_GET(parameters_, vector<string>) };
      inline Actions& setParameters(const vector<string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline Actions& setParameters(vector<string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    protected:
      // The on-error policy that is used to quickly troubleshoot an error.
      shared_ptr<FastFailPolicy> fastFailPolicy_ {};
      // The name of the template.
      shared_ptr<string> name_ {};
      // The template parameters.
      shared_ptr<vector<string>> parameters_ {};
    };

    virtual bool empty() const override { return this->actions_ == nullptr
        && this->createTime_ == nullptr && this->error_ == nullptr && this->id_ == nullptr && this->input_ == nullptr && this->marker_ == nullptr
        && this->notification_ == nullptr && this->phase_ == nullptr && this->serviceRole_ == nullptr && this->state_ == nullptr && this->statistic_ == nullptr
        && this->tags_ == nullptr && this->updateTime_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<DataIngestion::Actions> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<DataIngestion::Actions>) };
    inline vector<DataIngestion::Actions> getActions() { DARABONBA_PTR_GET(actions_, vector<DataIngestion::Actions>) };
    inline DataIngestion& setActions(const vector<DataIngestion::Actions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline DataIngestion& setActions(vector<DataIngestion::Actions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DataIngestion& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline DataIngestion& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DataIngestion& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Input) };
    inline Input getInput() { DARABONBA_PTR_GET(input_, Input) };
    inline DataIngestion& setInput(const Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline DataIngestion& setInput(Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline DataIngestion& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const DataIngestion::Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, DataIngestion::Notification) };
    inline DataIngestion::Notification getNotification() { DARABONBA_PTR_GET(notification_, DataIngestion::Notification) };
    inline DataIngestion& setNotification(const DataIngestion::Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline DataIngestion& setNotification(DataIngestion::Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline DataIngestion& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // serviceRole Field Functions 
    bool hasServiceRole() const { return this->serviceRole_ != nullptr;};
    void deleteServiceRole() { this->serviceRole_ = nullptr;};
    inline string getServiceRole() const { DARABONBA_PTR_GET_DEFAULT(serviceRole_, "") };
    inline DataIngestion& setServiceRole(string serviceRole) { DARABONBA_PTR_SET_VALUE(serviceRole_, serviceRole) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DataIngestion& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // statistic Field Functions 
    bool hasStatistic() const { return this->statistic_ != nullptr;};
    void deleteStatistic() { this->statistic_ = nullptr;};
    inline const DataIngestion::Statistic & getStatistic() const { DARABONBA_PTR_GET_CONST(statistic_, DataIngestion::Statistic) };
    inline DataIngestion::Statistic getStatistic() { DARABONBA_PTR_GET(statistic_, DataIngestion::Statistic) };
    inline DataIngestion& setStatistic(const DataIngestion::Statistic & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
    inline DataIngestion& setStatistic(DataIngestion::Statistic && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline DataIngestion& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline DataIngestion& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DataIngestion& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The templates.
    shared_ptr<vector<DataIngestion::Actions>> actions_ {};
    // The time when the task was created.
    shared_ptr<string> createTime_ {};
    // The error message.
    shared_ptr<string> error_ {};
    // The unique ID of the data ingestion.
    shared_ptr<string> id_ {};
    // The information about the data source.
    shared_ptr<Input> input_ {};
    // The task execution location.
    shared_ptr<string> marker_ {};
    // The notification for task completion.
    shared_ptr<DataIngestion::Notification> notification_ {};
    // The scanning phase.
    shared_ptr<string> phase_ {};
    // The service-linked role.
    shared_ptr<string> serviceRole_ {};
    // The status of the batch processing task.
    // 
    // *   Ready: The task is created.
    // *   Running: The task is running.
    // *   Failed: The task fails and cannot be automatically recovered.
    // *   Suspended: The task is suspended.
    // *   Succeeded: The task is successful.
    shared_ptr<string> state_ {};
    // The statistical information.
    shared_ptr<DataIngestion::Statistic> statistic_ {};
    // The task tags.
    Darabonba::Json tags_ {};
    // The time when the task was updated.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
