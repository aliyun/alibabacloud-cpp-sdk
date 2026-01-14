// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSLBSPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSLBSPECRESPONSEBODY_HPP_
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
  class QuerySlbSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySlbSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySlbSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySlbSpecResponseBody() = default ;
    QuerySlbSpecResponseBody(const QuerySlbSpecResponseBody &) = default ;
    QuerySlbSpecResponseBody(QuerySlbSpecResponseBody &&) = default ;
    QuerySlbSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySlbSpecResponseBody() = default ;
    QuerySlbSpecResponseBody& operator=(const QuerySlbSpecResponseBody &) = default ;
    QuerySlbSpecResponseBody& operator=(QuerySlbSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MaxConnection, maxConnection_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NewConnectionPerSecond, newConnectionPerSecond_);
        DARABONBA_PTR_TO_JSON(Qps, qps_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MaxConnection, maxConnection_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NewConnectionPerSecond, newConnectionPerSecond_);
        DARABONBA_PTR_FROM_JSON(Qps, qps_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
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
      virtual bool empty() const override { return this->id_ == nullptr
        && this->maxConnection_ == nullptr && this->name_ == nullptr && this->newConnectionPerSecond_ == nullptr && this->qps_ == nullptr && this->spec_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline Data& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // maxConnection Field Functions 
      bool hasMaxConnection() const { return this->maxConnection_ != nullptr;};
      void deleteMaxConnection() { this->maxConnection_ = nullptr;};
      inline string getMaxConnection() const { DARABONBA_PTR_GET_DEFAULT(maxConnection_, "") };
      inline Data& setMaxConnection(string maxConnection) { DARABONBA_PTR_SET_VALUE(maxConnection_, maxConnection) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // newConnectionPerSecond Field Functions 
      bool hasNewConnectionPerSecond() const { return this->newConnectionPerSecond_ != nullptr;};
      void deleteNewConnectionPerSecond() { this->newConnectionPerSecond_ = nullptr;};
      inline string getNewConnectionPerSecond() const { DARABONBA_PTR_GET_DEFAULT(newConnectionPerSecond_, "") };
      inline Data& setNewConnectionPerSecond(string newConnectionPerSecond) { DARABONBA_PTR_SET_VALUE(newConnectionPerSecond_, newConnectionPerSecond) };


      // qps Field Functions 
      bool hasQps() const { return this->qps_ != nullptr;};
      void deleteQps() { this->qps_ = nullptr;};
      inline string getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, "") };
      inline Data& setQps(string qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline Data& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    protected:
      // The ID of the returned data.
      shared_ptr<int32_t> id_ {};
      // The maximum number of connections.
      shared_ptr<string> maxConnection_ {};
      // The name of the instance.
      shared_ptr<string> name_ {};
      // The number of connections per second.
      shared_ptr<string> newConnectionPerSecond_ {};
      // The number of queries per second (QPS).
      shared_ptr<string> qps_ {};
      // The specification of the instance.
      shared_ptr<string> spec_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QuerySlbSpecResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QuerySlbSpecResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QuerySlbSpecResponseBody::Data>) };
    inline vector<QuerySlbSpecResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QuerySlbSpecResponseBody::Data>) };
    inline QuerySlbSpecResponseBody& setData(const vector<QuerySlbSpecResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySlbSpecResponseBody& setData(vector<QuerySlbSpecResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QuerySlbSpecResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySlbSpecResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySlbSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySlbSpecResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The return value.
    shared_ptr<int32_t> code_ {};
    // The data entries returned.
    shared_ptr<vector<QuerySlbSpecResponseBody::Data>> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned. If the request is successful, a success message is returned. If the request fails, an error message is returned.
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
