// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetTrafficControlTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrafficControlTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(ItemConditionArray, itemConditionArray_);
      DARABONBA_PTR_TO_JSON(ItemConditionExpress, itemConditionExpress_);
      DARABONBA_PTR_TO_JSON(ItemConditionType, itemConditionType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NewProductRegulation, newProductRegulation_);
      DARABONBA_PTR_TO_JSON(RecallName, recallName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SplitParts, splitParts_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatisPeriod, statisPeriod_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ToleranceValue, toleranceValue_);
      DARABONBA_PTR_TO_JSON(TrafficControlTargetId, trafficControlTargetId_);
      DARABONBA_PTR_TO_JSON(TrafficControlTaskId, trafficControlTaskId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrafficControlTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(ItemConditionArray, itemConditionArray_);
      DARABONBA_PTR_FROM_JSON(ItemConditionExpress, itemConditionExpress_);
      DARABONBA_PTR_FROM_JSON(ItemConditionType, itemConditionType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NewProductRegulation, newProductRegulation_);
      DARABONBA_PTR_FROM_JSON(RecallName, recallName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SplitParts, splitParts_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatisPeriod, statisPeriod_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ToleranceValue, toleranceValue_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTargetId, trafficControlTargetId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTaskId, trafficControlTaskId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetTrafficControlTargetResponseBody() = default ;
    GetTrafficControlTargetResponseBody(const GetTrafficControlTargetResponseBody &) = default ;
    GetTrafficControlTargetResponseBody(GetTrafficControlTargetResponseBody &&) = default ;
    GetTrafficControlTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrafficControlTargetResponseBody() = default ;
    GetTrafficControlTargetResponseBody& operator=(const GetTrafficControlTargetResponseBody &) = default ;
    GetTrafficControlTargetResponseBody& operator=(GetTrafficControlTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SplitParts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SplitParts& obj) { 
        DARABONBA_PTR_TO_JSON(SetPoints, setPoints_);
        DARABONBA_PTR_TO_JSON(SetValues, setValues_);
        DARABONBA_PTR_TO_JSON(TimePoints, timePoints_);
      };
      friend void from_json(const Darabonba::Json& j, SplitParts& obj) { 
        DARABONBA_PTR_FROM_JSON(SetPoints, setPoints_);
        DARABONBA_PTR_FROM_JSON(SetValues, setValues_);
        DARABONBA_PTR_FROM_JSON(TimePoints, timePoints_);
      };
      SplitParts() = default ;
      SplitParts(const SplitParts &) = default ;
      SplitParts(SplitParts &&) = default ;
      SplitParts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SplitParts() = default ;
      SplitParts& operator=(const SplitParts &) = default ;
      SplitParts& operator=(SplitParts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->setPoints_ == nullptr
        && this->setValues_ == nullptr && this->timePoints_ == nullptr; };
      // setPoints Field Functions 
      bool hasSetPoints() const { return this->setPoints_ != nullptr;};
      void deleteSetPoints() { this->setPoints_ = nullptr;};
      inline const vector<int64_t> & getSetPoints() const { DARABONBA_PTR_GET_CONST(setPoints_, vector<int64_t>) };
      inline vector<int64_t> getSetPoints() { DARABONBA_PTR_GET(setPoints_, vector<int64_t>) };
      inline SplitParts& setSetPoints(const vector<int64_t> & setPoints) { DARABONBA_PTR_SET_VALUE(setPoints_, setPoints) };
      inline SplitParts& setSetPoints(vector<int64_t> && setPoints) { DARABONBA_PTR_SET_RVALUE(setPoints_, setPoints) };


      // setValues Field Functions 
      bool hasSetValues() const { return this->setValues_ != nullptr;};
      void deleteSetValues() { this->setValues_ = nullptr;};
      inline const vector<int64_t> & getSetValues() const { DARABONBA_PTR_GET_CONST(setValues_, vector<int64_t>) };
      inline vector<int64_t> getSetValues() { DARABONBA_PTR_GET(setValues_, vector<int64_t>) };
      inline SplitParts& setSetValues(const vector<int64_t> & setValues) { DARABONBA_PTR_SET_VALUE(setValues_, setValues) };
      inline SplitParts& setSetValues(vector<int64_t> && setValues) { DARABONBA_PTR_SET_RVALUE(setValues_, setValues) };


      // timePoints Field Functions 
      bool hasTimePoints() const { return this->timePoints_ != nullptr;};
      void deleteTimePoints() { this->timePoints_ = nullptr;};
      inline const vector<int64_t> & getTimePoints() const { DARABONBA_PTR_GET_CONST(timePoints_, vector<int64_t>) };
      inline vector<int64_t> getTimePoints() { DARABONBA_PTR_GET(timePoints_, vector<int64_t>) };
      inline SplitParts& setTimePoints(const vector<int64_t> & timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };
      inline SplitParts& setTimePoints(vector<int64_t> && timePoints) { DARABONBA_PTR_SET_RVALUE(timePoints_, timePoints) };


    protected:
      shared_ptr<vector<int64_t>> setPoints_ {};
      shared_ptr<vector<int64_t>> setValues_ {};
      shared_ptr<vector<int64_t>> timePoints_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->event_ == nullptr && this->gmtCreateTime_ == nullptr && this->itemConditionArray_ == nullptr && this->itemConditionExpress_ == nullptr && this->itemConditionType_ == nullptr
        && this->name_ == nullptr && this->newProductRegulation_ == nullptr && this->recallName_ == nullptr && this->requestId_ == nullptr && this->splitParts_ == nullptr
        && this->startTime_ == nullptr && this->statisPeriod_ == nullptr && this->status_ == nullptr && this->toleranceValue_ == nullptr && this->trafficControlTargetId_ == nullptr
        && this->trafficControlTaskId_ == nullptr && this->value_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetTrafficControlTargetResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline GetTrafficControlTargetResponseBody& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetTrafficControlTargetResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // itemConditionArray Field Functions 
    bool hasItemConditionArray() const { return this->itemConditionArray_ != nullptr;};
    void deleteItemConditionArray() { this->itemConditionArray_ = nullptr;};
    inline string getItemConditionArray() const { DARABONBA_PTR_GET_DEFAULT(itemConditionArray_, "") };
    inline GetTrafficControlTargetResponseBody& setItemConditionArray(string itemConditionArray) { DARABONBA_PTR_SET_VALUE(itemConditionArray_, itemConditionArray) };


    // itemConditionExpress Field Functions 
    bool hasItemConditionExpress() const { return this->itemConditionExpress_ != nullptr;};
    void deleteItemConditionExpress() { this->itemConditionExpress_ = nullptr;};
    inline string getItemConditionExpress() const { DARABONBA_PTR_GET_DEFAULT(itemConditionExpress_, "") };
    inline GetTrafficControlTargetResponseBody& setItemConditionExpress(string itemConditionExpress) { DARABONBA_PTR_SET_VALUE(itemConditionExpress_, itemConditionExpress) };


    // itemConditionType Field Functions 
    bool hasItemConditionType() const { return this->itemConditionType_ != nullptr;};
    void deleteItemConditionType() { this->itemConditionType_ = nullptr;};
    inline string getItemConditionType() const { DARABONBA_PTR_GET_DEFAULT(itemConditionType_, "") };
    inline GetTrafficControlTargetResponseBody& setItemConditionType(string itemConditionType) { DARABONBA_PTR_SET_VALUE(itemConditionType_, itemConditionType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTrafficControlTargetResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newProductRegulation Field Functions 
    bool hasNewProductRegulation() const { return this->newProductRegulation_ != nullptr;};
    void deleteNewProductRegulation() { this->newProductRegulation_ = nullptr;};
    inline bool getNewProductRegulation() const { DARABONBA_PTR_GET_DEFAULT(newProductRegulation_, false) };
    inline GetTrafficControlTargetResponseBody& setNewProductRegulation(bool newProductRegulation) { DARABONBA_PTR_SET_VALUE(newProductRegulation_, newProductRegulation) };


    // recallName Field Functions 
    bool hasRecallName() const { return this->recallName_ != nullptr;};
    void deleteRecallName() { this->recallName_ = nullptr;};
    inline string getRecallName() const { DARABONBA_PTR_GET_DEFAULT(recallName_, "") };
    inline GetTrafficControlTargetResponseBody& setRecallName(string recallName) { DARABONBA_PTR_SET_VALUE(recallName_, recallName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrafficControlTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // splitParts Field Functions 
    bool hasSplitParts() const { return this->splitParts_ != nullptr;};
    void deleteSplitParts() { this->splitParts_ = nullptr;};
    inline const GetTrafficControlTargetResponseBody::SplitParts & getSplitParts() const { DARABONBA_PTR_GET_CONST(splitParts_, GetTrafficControlTargetResponseBody::SplitParts) };
    inline GetTrafficControlTargetResponseBody::SplitParts getSplitParts() { DARABONBA_PTR_GET(splitParts_, GetTrafficControlTargetResponseBody::SplitParts) };
    inline GetTrafficControlTargetResponseBody& setSplitParts(const GetTrafficControlTargetResponseBody::SplitParts & splitParts) { DARABONBA_PTR_SET_VALUE(splitParts_, splitParts) };
    inline GetTrafficControlTargetResponseBody& setSplitParts(GetTrafficControlTargetResponseBody::SplitParts && splitParts) { DARABONBA_PTR_SET_RVALUE(splitParts_, splitParts) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetTrafficControlTargetResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statisPeriod Field Functions 
    bool hasStatisPeriod() const { return this->statisPeriod_ != nullptr;};
    void deleteStatisPeriod() { this->statisPeriod_ = nullptr;};
    inline string getStatisPeriod() const { DARABONBA_PTR_GET_DEFAULT(statisPeriod_, "") };
    inline GetTrafficControlTargetResponseBody& setStatisPeriod(string statisPeriod) { DARABONBA_PTR_SET_VALUE(statisPeriod_, statisPeriod) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTrafficControlTargetResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // toleranceValue Field Functions 
    bool hasToleranceValue() const { return this->toleranceValue_ != nullptr;};
    void deleteToleranceValue() { this->toleranceValue_ = nullptr;};
    inline int64_t getToleranceValue() const { DARABONBA_PTR_GET_DEFAULT(toleranceValue_, 0L) };
    inline GetTrafficControlTargetResponseBody& setToleranceValue(int64_t toleranceValue) { DARABONBA_PTR_SET_VALUE(toleranceValue_, toleranceValue) };


    // trafficControlTargetId Field Functions 
    bool hasTrafficControlTargetId() const { return this->trafficControlTargetId_ != nullptr;};
    void deleteTrafficControlTargetId() { this->trafficControlTargetId_ = nullptr;};
    inline string getTrafficControlTargetId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetId_, "") };
    inline GetTrafficControlTargetResponseBody& setTrafficControlTargetId(string trafficControlTargetId) { DARABONBA_PTR_SET_VALUE(trafficControlTargetId_, trafficControlTargetId) };


    // trafficControlTaskId Field Functions 
    bool hasTrafficControlTaskId() const { return this->trafficControlTaskId_ != nullptr;};
    void deleteTrafficControlTaskId() { this->trafficControlTaskId_ = nullptr;};
    inline string getTrafficControlTaskId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTaskId_, "") };
    inline GetTrafficControlTargetResponseBody& setTrafficControlTaskId(string trafficControlTaskId) { DARABONBA_PTR_SET_VALUE(trafficControlTaskId_, trafficControlTaskId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline GetTrafficControlTargetResponseBody& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<string> event_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> itemConditionArray_ {};
    shared_ptr<string> itemConditionExpress_ {};
    shared_ptr<string> itemConditionType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<bool> newProductRegulation_ {};
    shared_ptr<string> recallName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<GetTrafficControlTargetResponseBody::SplitParts> splitParts_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> statisPeriod_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int64_t> toleranceValue_ {};
    shared_ptr<string> trafficControlTargetId_ {};
    shared_ptr<string> trafficControlTaskId_ {};
    shared_ptr<float> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
