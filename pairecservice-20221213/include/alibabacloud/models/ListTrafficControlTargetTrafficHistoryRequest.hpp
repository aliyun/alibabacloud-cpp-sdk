// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICCONTROLTARGETTRAFFICHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICCONTROLTARGETTRAFFICHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListTrafficControlTargetTrafficHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficControlTargetTrafficHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(ExperimentGroupId, experimentGroupId_);
      DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficControlTargetTrafficHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(ExperimentGroupId, experimentGroupId_);
      DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    ListTrafficControlTargetTrafficHistoryRequest() = default ;
    ListTrafficControlTargetTrafficHistoryRequest(const ListTrafficControlTargetTrafficHistoryRequest &) = default ;
    ListTrafficControlTargetTrafficHistoryRequest(ListTrafficControlTargetTrafficHistoryRequest &&) = default ;
    ListTrafficControlTargetTrafficHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficControlTargetTrafficHistoryRequest() = default ;
    ListTrafficControlTargetTrafficHistoryRequest& operator=(const ListTrafficControlTargetTrafficHistoryRequest &) = default ;
    ListTrafficControlTargetTrafficHistoryRequest& operator=(ListTrafficControlTargetTrafficHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->environment_ != nullptr && this->experimentGroupId_ != nullptr && this->experimentId_ != nullptr && this->instanceId_ != nullptr && this->itemId_ != nullptr
        && this->startTime_ != nullptr && this->threshold_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListTrafficControlTargetTrafficHistoryRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string environment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline ListTrafficControlTargetTrafficHistoryRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // experimentGroupId Field Functions 
    bool hasExperimentGroupId() const { return this->experimentGroupId_ != nullptr;};
    void deleteExperimentGroupId() { this->experimentGroupId_ = nullptr;};
    inline string experimentGroupId() const { DARABONBA_PTR_GET_DEFAULT(experimentGroupId_, "") };
    inline ListTrafficControlTargetTrafficHistoryRequest& setExperimentGroupId(string experimentGroupId) { DARABONBA_PTR_SET_VALUE(experimentGroupId_, experimentGroupId) };


    // experimentId Field Functions 
    bool hasExperimentId() const { return this->experimentId_ != nullptr;};
    void deleteExperimentId() { this->experimentId_ = nullptr;};
    inline string experimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
    inline ListTrafficControlTargetTrafficHistoryRequest& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListTrafficControlTargetTrafficHistoryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline ListTrafficControlTargetTrafficHistoryRequest& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListTrafficControlTargetTrafficHistoryRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline ListTrafficControlTargetTrafficHistoryRequest& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> environment_ = nullptr;
    std::shared_ptr<string> experimentGroupId_ = nullptr;
    std::shared_ptr<string> experimentId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
