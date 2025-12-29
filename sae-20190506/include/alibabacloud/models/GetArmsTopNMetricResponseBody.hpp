// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARMSTOPNMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETARMSTOPNMETRICRESPONSEBODY_HPP_
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
  class GetArmsTopNMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArmsTopNMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetArmsTopNMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetArmsTopNMetricResponseBody() = default ;
    GetArmsTopNMetricResponseBody(const GetArmsTopNMetricResponseBody &) = default ;
    GetArmsTopNMetricResponseBody(GetArmsTopNMetricResponseBody &&) = default ;
    GetArmsTopNMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArmsTopNMetricResponseBody() = default ;
    GetArmsTopNMetricResponseBody& operator=(const GetArmsTopNMetricResponseBody &) = default ;
    GetArmsTopNMetricResponseBody& operator=(GetArmsTopNMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Rt, rt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Rt, rt_);
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
        && this->count_ == nullptr && this->error_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->rt_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Data& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline int64_t getError() const { DARABONBA_PTR_GET_DEFAULT(error_, 0L) };
      inline Data& setError(int64_t error) { DARABONBA_PTR_SET_VALUE(error_, error) };


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


      // rt Field Functions 
      bool hasRt() const { return this->rt_ != nullptr;};
      void deleteRt() { this->rt_ = nullptr;};
      inline int64_t getRt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0L) };
      inline Data& setRt(int64_t rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


    protected:
      // The application ID.
      shared_ptr<string> appId_ {};
      // The total number of requests.
      shared_ptr<int64_t> count_ {};
      // The number of errors.
      shared_ptr<int64_t> error_ {};
      // The application name.
      shared_ptr<string> name_ {};
      // The namespace ID.
      shared_ptr<string> regionId_ {};
      // The average response time. Unit: milliseconds.
      shared_ptr<int64_t> rt_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetArmsTopNMetricResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetArmsTopNMetricResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetArmsTopNMetricResponseBody::Data>) };
    inline vector<GetArmsTopNMetricResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetArmsTopNMetricResponseBody::Data>) };
    inline GetArmsTopNMetricResponseBody& setData(const vector<GetArmsTopNMetricResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetArmsTopNMetricResponseBody& setData(vector<GetArmsTopNMetricResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetArmsTopNMetricResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArmsTopNMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetArmsTopNMetricResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The following limits are imposed on the ID:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The details of applications.
    shared_ptr<vector<GetArmsTopNMetricResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> message_ {};
    // 3B763F98-0BA2-5C23-B6B8-558568D2C1C2
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
