// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVAILABILITYMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAVAILABILITYMETRICRESPONSEBODY_HPP_
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
  class GetAvailabilityMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvailabilityMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvailabilityMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAvailabilityMetricResponseBody() = default ;
    GetAvailabilityMetricResponseBody(const GetAvailabilityMetricResponseBody &) = default ;
    GetAvailabilityMetricResponseBody(GetAvailabilityMetricResponseBody &&) = default ;
    GetAvailabilityMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvailabilityMetricResponseBody() = default ;
    GetAvailabilityMetricResponseBody& operator=(const GetAvailabilityMetricResponseBody &) = default ;
    GetAvailabilityMetricResponseBody& operator=(GetAvailabilityMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(EnableAutoscale, enableAutoscale_);
        DARABONBA_PTR_TO_JSON(ErrorInstances, errorInstances_);
        DARABONBA_PTR_TO_JSON(Instances, instances_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Runnings, runnings_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(EnableAutoscale, enableAutoscale_);
        DARABONBA_PTR_FROM_JSON(ErrorInstances, errorInstances_);
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Runnings, runnings_);
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
        && this->enableAutoscale_ == nullptr && this->errorInstances_ == nullptr && this->instances_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr
        && this->runnings_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // enableAutoscale Field Functions 
      bool hasEnableAutoscale() const { return this->enableAutoscale_ != nullptr;};
      void deleteEnableAutoscale() { this->enableAutoscale_ = nullptr;};
      inline int64_t getEnableAutoscale() const { DARABONBA_PTR_GET_DEFAULT(enableAutoscale_, 0L) };
      inline Data& setEnableAutoscale(int64_t enableAutoscale) { DARABONBA_PTR_SET_VALUE(enableAutoscale_, enableAutoscale) };


      // errorInstances Field Functions 
      bool hasErrorInstances() const { return this->errorInstances_ != nullptr;};
      void deleteErrorInstances() { this->errorInstances_ = nullptr;};
      inline int64_t getErrorInstances() const { DARABONBA_PTR_GET_DEFAULT(errorInstances_, 0L) };
      inline Data& setErrorInstances(int64_t errorInstances) { DARABONBA_PTR_SET_VALUE(errorInstances_, errorInstances) };


      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline int64_t getInstances() const { DARABONBA_PTR_GET_DEFAULT(instances_, 0L) };
      inline Data& setInstances(int64_t instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // runnings Field Functions 
      bool hasRunnings() const { return this->runnings_ != nullptr;};
      void deleteRunnings() { this->runnings_ = nullptr;};
      inline int64_t getRunnings() const { DARABONBA_PTR_GET_DEFAULT(runnings_, 0L) };
      inline Data& setRunnings(int64_t runnings) { DARABONBA_PTR_SET_VALUE(runnings_, runnings) };


    protected:
      // The application ID.
      shared_ptr<string> appId_ {};
      // Indicates whether an auto scaling policy is enabled. Valid values:
      // 
      // *   **1**: An auto scaling policy is enabled.
      // *   **0**: No auto scaling policy is enabled.
      shared_ptr<int64_t> enableAutoscale_ {};
      // The number of abnormal instances.
      shared_ptr<int64_t> errorInstances_ {};
      // The expected number of instances.
      shared_ptr<int64_t> instances_ {};
      // The application name.
      shared_ptr<string> name_ {};
      // The namespace ID.
      shared_ptr<string> regionId_ {};
      // The current number of instances.
      shared_ptr<int64_t> runnings_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAvailabilityMetricResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetAvailabilityMetricResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetAvailabilityMetricResponseBody::Data>) };
    inline vector<GetAvailabilityMetricResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetAvailabilityMetricResponseBody::Data>) };
    inline GetAvailabilityMetricResponseBody& setData(const vector<GetAvailabilityMetricResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAvailabilityMetricResponseBody& setData(vector<GetAvailabilityMetricResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAvailabilityMetricResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAvailabilityMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAvailabilityMetricResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The following limits are imposed on the ID:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The data entries returned.
    shared_ptr<vector<GetAvailabilityMetricResponseBody::Data>> data_ {};
    // The additional information that is returned. The following limits are imposed on the ID:
    // 
    // *   success: If the call is successful, **success** is returned.
    // *   An error code: If the call fails, an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the list of applications was obtained. The following limits are imposed on the ID:
    // 
    // *   **true**: The namespaces were obtained.
    // *   **false**: no
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
