// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryMonitorResponseBody() = default ;
    QueryMonitorResponseBody(const QueryMonitorResponseBody &) = default ;
    QueryMonitorResponseBody(QueryMonitorResponseBody &&) = default ;
    QueryMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMonitorResponseBody() = default ;
    QueryMonitorResponseBody& operator=(const QueryMonitorResponseBody &) = default ;
    QueryMonitorResponseBody& operator=(QueryMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(clusterNamePrefix, clusterNamePrefix_);
        DARABONBA_PTR_TO_JSON(podName, podName_);
        DARABONBA_PTR_TO_JSON(values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(clusterNamePrefix, clusterNamePrefix_);
        DARABONBA_PTR_FROM_JSON(podName, podName_);
        DARABONBA_PTR_FROM_JSON(values, values_);
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
      virtual bool empty() const override { return this->clusterNamePrefix_ == nullptr
        && this->podName_ == nullptr && this->values_ == nullptr; };
      // clusterNamePrefix Field Functions 
      bool hasClusterNamePrefix() const { return this->clusterNamePrefix_ != nullptr;};
      void deleteClusterNamePrefix() { this->clusterNamePrefix_ = nullptr;};
      inline string getClusterNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(clusterNamePrefix_, "") };
      inline Data& setClusterNamePrefix(string clusterNamePrefix) { DARABONBA_PTR_SET_VALUE(clusterNamePrefix_, clusterNamePrefix) };


      // podName Field Functions 
      bool hasPodName() const { return this->podName_ != nullptr;};
      void deletePodName() { this->podName_ = nullptr;};
      inline string getPodName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
      inline Data& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<Darabonba::Json> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getValues() { DARABONBA_PTR_GET(values_, vector<Darabonba::Json>) };
      inline Data& setValues(const vector<Darabonba::Json> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Data& setValues(vector<Darabonba::Json> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The prefix of the name.
      shared_ptr<string> clusterNamePrefix_ {};
      // The name of the pod.
      shared_ptr<string> podName_ {};
      // The details of the data.
      shared_ptr<vector<Darabonba::Json>> values_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryMonitorResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryMonitorResponseBody::Data>) };
    inline vector<QueryMonitorResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryMonitorResponseBody::Data>) };
    inline QueryMonitorResponseBody& setData(const vector<QueryMonitorResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryMonitorResponseBody& setData(vector<QueryMonitorResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryMonitorResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMonitorResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryMonitorResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data.
    shared_ptr<vector<QueryMonitorResponseBody::Data>> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
