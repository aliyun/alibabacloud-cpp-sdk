// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAINGESTION_HPP_
#define ALIBABACLOUD_MODELS_DATAINGESTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataIngestionActions.hpp>
#include <alibabacloud/models/Input.hpp>
#include <alibabacloud/models/DataIngestionNotification.hpp>
#include <alibabacloud/models/DataIngestionStatistic.hpp>
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
    virtual bool empty() const override { this->actions_ != nullptr
        && this->createTime_ != nullptr && this->error_ != nullptr && this->id_ != nullptr && this->input_ != nullptr && this->marker_ != nullptr
        && this->notification_ != nullptr && this->phase_ != nullptr && this->serviceRole_ != nullptr && this->state_ != nullptr && this->statistic_ != nullptr
        && this->tags_ != nullptr && this->updateTime_ != nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<DataIngestionActions> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<DataIngestionActions>) };
    inline vector<DataIngestionActions> actions() { DARABONBA_PTR_GET(actions_, vector<DataIngestionActions>) };
    inline DataIngestion& setActions(const vector<DataIngestionActions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline DataIngestion& setActions(vector<DataIngestionActions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DataIngestion& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline DataIngestion& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DataIngestion& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Input & input() const { DARABONBA_PTR_GET_CONST(input_, Input) };
    inline Input input() { DARABONBA_PTR_GET(input_, Input) };
    inline DataIngestion& setInput(const Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline DataIngestion& setInput(Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline DataIngestion& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const DataIngestionNotification & notification() const { DARABONBA_PTR_GET_CONST(notification_, DataIngestionNotification) };
    inline DataIngestionNotification notification() { DARABONBA_PTR_GET(notification_, DataIngestionNotification) };
    inline DataIngestion& setNotification(const DataIngestionNotification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline DataIngestion& setNotification(DataIngestionNotification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline DataIngestion& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // serviceRole Field Functions 
    bool hasServiceRole() const { return this->serviceRole_ != nullptr;};
    void deleteServiceRole() { this->serviceRole_ = nullptr;};
    inline string serviceRole() const { DARABONBA_PTR_GET_DEFAULT(serviceRole_, "") };
    inline DataIngestion& setServiceRole(string serviceRole) { DARABONBA_PTR_SET_VALUE(serviceRole_, serviceRole) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DataIngestion& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // statistic Field Functions 
    bool hasStatistic() const { return this->statistic_ != nullptr;};
    void deleteStatistic() { this->statistic_ = nullptr;};
    inline const DataIngestionStatistic & statistic() const { DARABONBA_PTR_GET_CONST(statistic_, DataIngestionStatistic) };
    inline DataIngestionStatistic statistic() { DARABONBA_PTR_GET(statistic_, DataIngestionStatistic) };
    inline DataIngestion& setStatistic(const DataIngestionStatistic & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
    inline DataIngestion& setStatistic(DataIngestionStatistic && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline DataIngestion& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline DataIngestion& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DataIngestion& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<DataIngestionActions>> actions_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> error_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<Input> input_ = nullptr;
    std::shared_ptr<string> marker_ = nullptr;
    std::shared_ptr<DataIngestionNotification> notification_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
    std::shared_ptr<string> serviceRole_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<DataIngestionStatistic> statistic_ = nullptr;
    Darabonba::Json tags_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
