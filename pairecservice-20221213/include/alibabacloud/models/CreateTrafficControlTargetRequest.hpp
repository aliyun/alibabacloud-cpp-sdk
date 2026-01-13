// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICCONTROLTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICCONTROLTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateTrafficControlTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficControlTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(ItemConditionArray, itemConditionArray_);
      DARABONBA_PTR_TO_JSON(ItemConditionExpress, itemConditionExpress_);
      DARABONBA_PTR_TO_JSON(ItemConditionType, itemConditionType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NewProductRegulation, newProductRegulation_);
      DARABONBA_PTR_TO_JSON(RecallName, recallName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatisPeriod, statisPeriod_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ToleranceValue, toleranceValue_);
      DARABONBA_PTR_TO_JSON(TrafficControlTaskId, trafficControlTaskId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficControlTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(ItemConditionArray, itemConditionArray_);
      DARABONBA_PTR_FROM_JSON(ItemConditionExpress, itemConditionExpress_);
      DARABONBA_PTR_FROM_JSON(ItemConditionType, itemConditionType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NewProductRegulation, newProductRegulation_);
      DARABONBA_PTR_FROM_JSON(RecallName, recallName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatisPeriod, statisPeriod_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ToleranceValue, toleranceValue_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTaskId, trafficControlTaskId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateTrafficControlTargetRequest() = default ;
    CreateTrafficControlTargetRequest(const CreateTrafficControlTargetRequest &) = default ;
    CreateTrafficControlTargetRequest(CreateTrafficControlTargetRequest &&) = default ;
    CreateTrafficControlTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficControlTargetRequest() = default ;
    CreateTrafficControlTargetRequest& operator=(const CreateTrafficControlTargetRequest &) = default ;
    CreateTrafficControlTargetRequest& operator=(CreateTrafficControlTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->event_ == nullptr && this->itemConditionArray_ == nullptr && this->itemConditionExpress_ == nullptr && this->itemConditionType_ == nullptr && this->name_ == nullptr
        && this->newProductRegulation_ == nullptr && this->recallName_ == nullptr && this->startTime_ == nullptr && this->statisPeriod_ == nullptr && this->status_ == nullptr
        && this->toleranceValue_ == nullptr && this->trafficControlTaskId_ == nullptr && this->value_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateTrafficControlTargetRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline CreateTrafficControlTargetRequest& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // itemConditionArray Field Functions 
    bool hasItemConditionArray() const { return this->itemConditionArray_ != nullptr;};
    void deleteItemConditionArray() { this->itemConditionArray_ = nullptr;};
    inline string getItemConditionArray() const { DARABONBA_PTR_GET_DEFAULT(itemConditionArray_, "") };
    inline CreateTrafficControlTargetRequest& setItemConditionArray(string itemConditionArray) { DARABONBA_PTR_SET_VALUE(itemConditionArray_, itemConditionArray) };


    // itemConditionExpress Field Functions 
    bool hasItemConditionExpress() const { return this->itemConditionExpress_ != nullptr;};
    void deleteItemConditionExpress() { this->itemConditionExpress_ = nullptr;};
    inline string getItemConditionExpress() const { DARABONBA_PTR_GET_DEFAULT(itemConditionExpress_, "") };
    inline CreateTrafficControlTargetRequest& setItemConditionExpress(string itemConditionExpress) { DARABONBA_PTR_SET_VALUE(itemConditionExpress_, itemConditionExpress) };


    // itemConditionType Field Functions 
    bool hasItemConditionType() const { return this->itemConditionType_ != nullptr;};
    void deleteItemConditionType() { this->itemConditionType_ = nullptr;};
    inline string getItemConditionType() const { DARABONBA_PTR_GET_DEFAULT(itemConditionType_, "") };
    inline CreateTrafficControlTargetRequest& setItemConditionType(string itemConditionType) { DARABONBA_PTR_SET_VALUE(itemConditionType_, itemConditionType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTrafficControlTargetRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newProductRegulation Field Functions 
    bool hasNewProductRegulation() const { return this->newProductRegulation_ != nullptr;};
    void deleteNewProductRegulation() { this->newProductRegulation_ = nullptr;};
    inline bool getNewProductRegulation() const { DARABONBA_PTR_GET_DEFAULT(newProductRegulation_, false) };
    inline CreateTrafficControlTargetRequest& setNewProductRegulation(bool newProductRegulation) { DARABONBA_PTR_SET_VALUE(newProductRegulation_, newProductRegulation) };


    // recallName Field Functions 
    bool hasRecallName() const { return this->recallName_ != nullptr;};
    void deleteRecallName() { this->recallName_ = nullptr;};
    inline string getRecallName() const { DARABONBA_PTR_GET_DEFAULT(recallName_, "") };
    inline CreateTrafficControlTargetRequest& setRecallName(string recallName) { DARABONBA_PTR_SET_VALUE(recallName_, recallName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateTrafficControlTargetRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statisPeriod Field Functions 
    bool hasStatisPeriod() const { return this->statisPeriod_ != nullptr;};
    void deleteStatisPeriod() { this->statisPeriod_ = nullptr;};
    inline string getStatisPeriod() const { DARABONBA_PTR_GET_DEFAULT(statisPeriod_, "") };
    inline CreateTrafficControlTargetRequest& setStatisPeriod(string statisPeriod) { DARABONBA_PTR_SET_VALUE(statisPeriod_, statisPeriod) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateTrafficControlTargetRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // toleranceValue Field Functions 
    bool hasToleranceValue() const { return this->toleranceValue_ != nullptr;};
    void deleteToleranceValue() { this->toleranceValue_ = nullptr;};
    inline int64_t getToleranceValue() const { DARABONBA_PTR_GET_DEFAULT(toleranceValue_, 0L) };
    inline CreateTrafficControlTargetRequest& setToleranceValue(int64_t toleranceValue) { DARABONBA_PTR_SET_VALUE(toleranceValue_, toleranceValue) };


    // trafficControlTaskId Field Functions 
    bool hasTrafficControlTaskId() const { return this->trafficControlTaskId_ != nullptr;};
    void deleteTrafficControlTaskId() { this->trafficControlTaskId_ = nullptr;};
    inline string getTrafficControlTaskId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTaskId_, "") };
    inline CreateTrafficControlTargetRequest& setTrafficControlTaskId(string trafficControlTaskId) { DARABONBA_PTR_SET_VALUE(trafficControlTaskId_, trafficControlTaskId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline CreateTrafficControlTargetRequest& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<string> event_ {};
    shared_ptr<string> itemConditionArray_ {};
    shared_ptr<string> itemConditionExpress_ {};
    shared_ptr<string> itemConditionType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<bool> newProductRegulation_ {};
    shared_ptr<string> recallName_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> statisPeriod_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int64_t> toleranceValue_ {};
    shared_ptr<string> trafficControlTaskId_ {};
    shared_ptr<float> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
