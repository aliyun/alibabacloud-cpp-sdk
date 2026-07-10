// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINSTOPOVERSEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRAINSTOPOVERSEARCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainStopoverSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainStopoverSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainStopoverSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TrainStopoverSearchResponseBody() = default ;
    TrainStopoverSearchResponseBody(const TrainStopoverSearchResponseBody &) = default ;
    TrainStopoverSearchResponseBody(TrainStopoverSearchResponseBody &&) = default ;
    TrainStopoverSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainStopoverSearchResponseBody() = default ;
    TrainStopoverSearchResponseBody& operator=(const TrainStopoverSearchResponseBody &) = default ;
    TrainStopoverSearchResponseBody& operator=(TrainStopoverSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
        DARABONBA_PTR_TO_JSON(dep_time, depTime_);
        DARABONBA_PTR_TO_JSON(station_name, stationName_);
        DARABONBA_PTR_TO_JSON(station_no, stationNo_);
        DARABONBA_PTR_TO_JSON(station_type, stationType_);
        DARABONBA_PTR_TO_JSON(stop_over_time, stopOverTime_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
        DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
        DARABONBA_PTR_FROM_JSON(station_name, stationName_);
        DARABONBA_PTR_FROM_JSON(station_no, stationNo_);
        DARABONBA_PTR_FROM_JSON(station_type, stationType_);
        DARABONBA_PTR_FROM_JSON(stop_over_time, stopOverTime_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arrTime_ == nullptr
        && this->depTime_ == nullptr && this->stationName_ == nullptr && this->stationNo_ == nullptr && this->stationType_ == nullptr && this->stopOverTime_ == nullptr; };
      // arrTime Field Functions 
      bool hasArrTime() const { return this->arrTime_ != nullptr;};
      void deleteArrTime() { this->arrTime_ = nullptr;};
      inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
      inline Module& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


      // depTime Field Functions 
      bool hasDepTime() const { return this->depTime_ != nullptr;};
      void deleteDepTime() { this->depTime_ = nullptr;};
      inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
      inline Module& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


      // stationName Field Functions 
      bool hasStationName() const { return this->stationName_ != nullptr;};
      void deleteStationName() { this->stationName_ = nullptr;};
      inline string getStationName() const { DARABONBA_PTR_GET_DEFAULT(stationName_, "") };
      inline Module& setStationName(string stationName) { DARABONBA_PTR_SET_VALUE(stationName_, stationName) };


      // stationNo Field Functions 
      bool hasStationNo() const { return this->stationNo_ != nullptr;};
      void deleteStationNo() { this->stationNo_ = nullptr;};
      inline string getStationNo() const { DARABONBA_PTR_GET_DEFAULT(stationNo_, "") };
      inline Module& setStationNo(string stationNo) { DARABONBA_PTR_SET_VALUE(stationNo_, stationNo) };


      // stationType Field Functions 
      bool hasStationType() const { return this->stationType_ != nullptr;};
      void deleteStationType() { this->stationType_ = nullptr;};
      inline string getStationType() const { DARABONBA_PTR_GET_DEFAULT(stationType_, "") };
      inline Module& setStationType(string stationType) { DARABONBA_PTR_SET_VALUE(stationType_, stationType) };


      // stopOverTime Field Functions 
      bool hasStopOverTime() const { return this->stopOverTime_ != nullptr;};
      void deleteStopOverTime() { this->stopOverTime_ = nullptr;};
      inline string getStopOverTime() const { DARABONBA_PTR_GET_DEFAULT(stopOverTime_, "") };
      inline Module& setStopOverTime(string stopOverTime) { DARABONBA_PTR_SET_VALUE(stopOverTime_, stopOverTime) };


    protected:
      shared_ptr<string> arrTime_ {};
      shared_ptr<string> depTime_ {};
      shared_ptr<string> stationName_ {};
      shared_ptr<string> stationNo_ {};
      shared_ptr<string> stationType_ {};
      shared_ptr<string> stopOverTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TrainStopoverSearchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TrainStopoverSearchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<TrainStopoverSearchResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<TrainStopoverSearchResponseBody::Module>) };
    inline vector<TrainStopoverSearchResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<TrainStopoverSearchResponseBody::Module>) };
    inline TrainStopoverSearchResponseBody& setModule(const vector<TrainStopoverSearchResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TrainStopoverSearchResponseBody& setModule(vector<TrainStopoverSearchResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TrainStopoverSearchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TrainStopoverSearchResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TrainStopoverSearchResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<TrainStopoverSearchResponseBody::Module>> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
