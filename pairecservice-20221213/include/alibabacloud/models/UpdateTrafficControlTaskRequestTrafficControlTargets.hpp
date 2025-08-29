// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRAFFICCONTROLTASKREQUESTTRAFFICCONTROLTARGETS_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRAFFICCONTROLTASKREQUESTTRAFFICCONTROLTARGETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UpdateTrafficControlTaskRequestTrafficControlTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTrafficControlTaskRequestTrafficControlTargets& obj) { 
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
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTrafficControlTaskRequestTrafficControlTargets& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateTrafficControlTaskRequestTrafficControlTargets() = default ;
    UpdateTrafficControlTaskRequestTrafficControlTargets(const UpdateTrafficControlTaskRequestTrafficControlTargets &) = default ;
    UpdateTrafficControlTaskRequestTrafficControlTargets(UpdateTrafficControlTaskRequestTrafficControlTargets &&) = default ;
    UpdateTrafficControlTaskRequestTrafficControlTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTrafficControlTaskRequestTrafficControlTargets() = default ;
    UpdateTrafficControlTaskRequestTrafficControlTargets& operator=(const UpdateTrafficControlTaskRequestTrafficControlTargets &) = default ;
    UpdateTrafficControlTaskRequestTrafficControlTargets& operator=(UpdateTrafficControlTaskRequestTrafficControlTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->event_ != nullptr && this->itemConditionArray_ != nullptr && this->itemConditionExpress_ != nullptr && this->itemConditionType_ != nullptr && this->name_ != nullptr
        && this->newProductRegulation_ != nullptr && this->recallName_ != nullptr && this->startTime_ != nullptr && this->statisPeriod_ != nullptr && this->status_ != nullptr
        && this->toleranceValue_ != nullptr && this->value_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateTrafficControlTaskRequestTrafficControlTargets& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline UpdateTrafficControlTaskRequestTrafficControlTargets& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // itemConditionArray Field Functions 
    bool hasItemConditionArray() const { return this->itemConditionArray_ != nullptr;};
    void deleteItemConditionArray() { this->itemConditionArray_ = nullptr;};
    inline string itemConditionArray() const { DARABONBA_PTR_GET_DEFAULT(itemConditionArray_, "") };
    inline UpdateTrafficControlTaskRequestTrafficControlTargets& setItemConditionArray(string itemConditionArray) { DARABONBA_PTR_SET_VALUE(itemConditionArray_, itemConditionArray) };


    // itemConditionExpress Field Functions 
    bool hasItemConditionExpress() const { return this->itemConditionExpress_ != nullptr;};
    void deleteItemConditionExpress() { this->itemConditionExpress_ = nullptr;};
    inline string itemConditionExpress() const { DARABONBA_PTR_GET_DEFAULT(itemConditionExpress_, "") };
    inline UpdateTrafficControlTaskRequestTrafficControlTargets& setItemConditionExpress(string itemConditionExpress) { DARABONBA_PTR_SET_VALUE(itemConditionExpress_, itemConditionExpress) };


    // itemConditionType Field Functions 
    bool hasItemConditionType() const { return this->itemConditionType_ != nullptr;};
    void deleteItemConditionType() { this->itemConditionType_ = nullptr;};
    inline string itemConditionType() const { DARABONBA_PTR_GET_DEFAULT(itemConditionType_, "") };
    inline UpdateTrafficControlTaskRequestTrafficControlTargets& setItemConditionType(string itemConditionType) { DARABONBA_PTR_SET_VALUE(itemConditionType_, itemConditionType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTrafficControlTaskRequestTrafficControlTargets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newProductRegulation Field Functions 
    bool hasNewProductRegulation() const { return this->newProductRegulation_ != nullptr;};
    void deleteNewProductRegulation() { this->newProductRegulation_ = nullptr;};
    inline bool newProductRegulation() const { DARABONBA_PTR_GET_DEFAULT(newProductRegulation_, false) };
    inline UpdateTrafficControlTaskRequestTrafficControlTargets& setNewProductRegulation(bool newProductRegulation) { DARABONBA_PTR_SET_VALUE(newProductRegulation_, newProductRegulation) };


    // recallName Field Functions 
    bool hasRecallName() const { return this->recallName_ != nullptr;};
    void deleteRecallName() { this->recallName_ = nullptr;};
    inline string recallName() const { DARABONBA_PTR_GET_DEFAULT(recallName_, "") };
    inline UpdateTrafficControlTaskRequestTrafficControlTargets& setRecallName(string recallName) { DARABONBA_PTR_SET_VALUE(recallName_, recallName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateTrafficControlTaskRequestTrafficControlTargets& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statisPeriod Field Functions 
    bool hasStatisPeriod() const { return this->statisPeriod_ != nullptr;};
    void deleteStatisPeriod() { this->statisPeriod_ = nullptr;};
    inline string statisPeriod() const { DARABONBA_PTR_GET_DEFAULT(statisPeriod_, "") };
    inline UpdateTrafficControlTaskRequestTrafficControlTargets& setStatisPeriod(string statisPeriod) { DARABONBA_PTR_SET_VALUE(statisPeriod_, statisPeriod) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateTrafficControlTaskRequestTrafficControlTargets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // toleranceValue Field Functions 
    bool hasToleranceValue() const { return this->toleranceValue_ != nullptr;};
    void deleteToleranceValue() { this->toleranceValue_ = nullptr;};
    inline int64_t toleranceValue() const { DARABONBA_PTR_GET_DEFAULT(toleranceValue_, 0L) };
    inline UpdateTrafficControlTaskRequestTrafficControlTargets& setToleranceValue(int64_t toleranceValue) { DARABONBA_PTR_SET_VALUE(toleranceValue_, toleranceValue) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline UpdateTrafficControlTaskRequestTrafficControlTargets& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> event_ = nullptr;
    std::shared_ptr<string> itemConditionArray_ = nullptr;
    std::shared_ptr<string> itemConditionExpress_ = nullptr;
    std::shared_ptr<string> itemConditionType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> newProductRegulation_ = nullptr;
    std::shared_ptr<string> recallName_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> statisPeriod_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> toleranceValue_ = nullptr;
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
