// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGEORDERMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGEORDERMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetChangeOrderMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeOrderMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeOrderMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetChangeOrderMetricResponseBody() = default ;
    GetChangeOrderMetricResponseBody(const GetChangeOrderMetricResponseBody &) = default ;
    GetChangeOrderMetricResponseBody(GetChangeOrderMetricResponseBody &&) = default ;
    GetChangeOrderMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeOrderMetricResponseBody() = default ;
    GetChangeOrderMetricResponseBody& operator=(const GetChangeOrderMetricResponseBody &) = default ;
    GetChangeOrderMetricResponseBody& operator=(GetChangeOrderMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AvgTimeCostMs, avgTimeCostMs_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(ErrorPercent, errorPercent_);
        DARABONBA_PTR_TO_JSON(MaxTimeCostMs, maxTimeCostMs_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OptimizeSuggestions, optimizeSuggestions_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(TaskTimeCostMsAvg, taskTimeCostMsAvg_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AvgTimeCostMs, avgTimeCostMs_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(ErrorPercent, errorPercent_);
        DARABONBA_PTR_FROM_JSON(MaxTimeCostMs, maxTimeCostMs_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OptimizeSuggestions, optimizeSuggestions_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(TaskTimeCostMsAvg, taskTimeCostMsAvg_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->avgTimeCostMs_ == nullptr && this->error_ == nullptr && this->errorPercent_ == nullptr && this->maxTimeCostMs_ == nullptr && this->name_ == nullptr
        && this->optimizeSuggestions_ == nullptr && this->regionId_ == nullptr && this->taskTimeCostMsAvg_ == nullptr && this->total_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // avgTimeCostMs Field Functions 
      bool hasAvgTimeCostMs() const { return this->avgTimeCostMs_ != nullptr;};
      void deleteAvgTimeCostMs() { this->avgTimeCostMs_ = nullptr;};
      inline float getAvgTimeCostMs() const { DARABONBA_PTR_GET_DEFAULT(avgTimeCostMs_, 0.0) };
      inline Data& setAvgTimeCostMs(float avgTimeCostMs) { DARABONBA_PTR_SET_VALUE(avgTimeCostMs_, avgTimeCostMs) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline int64_t getError() const { DARABONBA_PTR_GET_DEFAULT(error_, 0L) };
      inline Data& setError(int64_t error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // errorPercent Field Functions 
      bool hasErrorPercent() const { return this->errorPercent_ != nullptr;};
      void deleteErrorPercent() { this->errorPercent_ = nullptr;};
      inline float getErrorPercent() const { DARABONBA_PTR_GET_DEFAULT(errorPercent_, 0.0) };
      inline Data& setErrorPercent(float errorPercent) { DARABONBA_PTR_SET_VALUE(errorPercent_, errorPercent) };


      // maxTimeCostMs Field Functions 
      bool hasMaxTimeCostMs() const { return this->maxTimeCostMs_ != nullptr;};
      void deleteMaxTimeCostMs() { this->maxTimeCostMs_ = nullptr;};
      inline float getMaxTimeCostMs() const { DARABONBA_PTR_GET_DEFAULT(maxTimeCostMs_, 0.0) };
      inline Data& setMaxTimeCostMs(float maxTimeCostMs) { DARABONBA_PTR_SET_VALUE(maxTimeCostMs_, maxTimeCostMs) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // optimizeSuggestions Field Functions 
      bool hasOptimizeSuggestions() const { return this->optimizeSuggestions_ != nullptr;};
      void deleteOptimizeSuggestions() { this->optimizeSuggestions_ = nullptr;};
      inline string getOptimizeSuggestions() const { DARABONBA_PTR_GET_DEFAULT(optimizeSuggestions_, "") };
      inline Data& setOptimizeSuggestions(string optimizeSuggestions) { DARABONBA_PTR_SET_VALUE(optimizeSuggestions_, optimizeSuggestions) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // taskTimeCostMsAvg Field Functions 
      bool hasTaskTimeCostMsAvg() const { return this->taskTimeCostMsAvg_ != nullptr;};
      void deleteTaskTimeCostMsAvg() { this->taskTimeCostMsAvg_ = nullptr;};
      inline string getTaskTimeCostMsAvg() const { DARABONBA_PTR_GET_DEFAULT(taskTimeCostMsAvg_, "") };
      inline Data& setTaskTimeCostMsAvg(string taskTimeCostMsAvg) { DARABONBA_PTR_SET_VALUE(taskTimeCostMsAvg_, taskTimeCostMsAvg) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The application ID.
      shared_ptr<string> appId_ {};
      shared_ptr<float> avgTimeCostMs_ {};
      // The number of abnormal change orders.
      shared_ptr<int64_t> error_ {};
      // The percentage of change failures.
      shared_ptr<float> errorPercent_ {};
      shared_ptr<float> maxTimeCostMs_ {};
      // The application name.
      shared_ptr<string> name_ {};
      shared_ptr<string> optimizeSuggestions_ {};
      // The namespace ID.
      shared_ptr<string> regionId_ {};
      shared_ptr<string> taskTimeCostMsAvg_ {};
      // The total number of change orders.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetChangeOrderMetricResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetChangeOrderMetricResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetChangeOrderMetricResponseBody::Data>) };
    inline vector<GetChangeOrderMetricResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetChangeOrderMetricResponseBody::Data>) };
    inline GetChangeOrderMetricResponseBody& setData(const vector<GetChangeOrderMetricResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetChangeOrderMetricResponseBody& setData(vector<GetChangeOrderMetricResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetChangeOrderMetricResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChangeOrderMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetChangeOrderMetricResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The following limits are imposed on the ID:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The details of applications.
    shared_ptr<vector<GetChangeOrderMetricResponseBody::Data>> data_ {};
    // The additional information that is returned. The following limits are imposed on the ID:
    // 
    // *   success: If the call is successful, **success** is returned.
    // *   An error code: If the call fails, an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the microservice list was obtained. The following limits are imposed on the ID:
    // 
    // *   **true**: The namespaces were obtained.
    // *   **false**: no
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
