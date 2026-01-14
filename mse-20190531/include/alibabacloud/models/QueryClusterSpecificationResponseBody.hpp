// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLUSTERSPECIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLUSTERSPECIFICATIONRESPONSEBODY_HPP_
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
  class QueryClusterSpecificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryClusterSpecificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryClusterSpecificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryClusterSpecificationResponseBody() = default ;
    QueryClusterSpecificationResponseBody(const QueryClusterSpecificationResponseBody &) = default ;
    QueryClusterSpecificationResponseBody(QueryClusterSpecificationResponseBody &&) = default ;
    QueryClusterSpecificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryClusterSpecificationResponseBody() = default ;
    QueryClusterSpecificationResponseBody& operator=(const QueryClusterSpecificationResponseBody &) = default ;
    QueryClusterSpecificationResponseBody& operator=(QueryClusterSpecificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterSpecificationName, clusterSpecificationName_);
        DARABONBA_PTR_TO_JSON(CpuCapacity, cpuCapacity_);
        DARABONBA_PTR_TO_JSON(MemoryCapacity, memoryCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterSpecificationName, clusterSpecificationName_);
        DARABONBA_PTR_FROM_JSON(CpuCapacity, cpuCapacity_);
        DARABONBA_PTR_FROM_JSON(MemoryCapacity, memoryCapacity_);
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
      virtual bool empty() const override { return this->clusterSpecificationName_ == nullptr
        && this->cpuCapacity_ == nullptr && this->memoryCapacity_ == nullptr; };
      // clusterSpecificationName Field Functions 
      bool hasClusterSpecificationName() const { return this->clusterSpecificationName_ != nullptr;};
      void deleteClusterSpecificationName() { this->clusterSpecificationName_ = nullptr;};
      inline string getClusterSpecificationName() const { DARABONBA_PTR_GET_DEFAULT(clusterSpecificationName_, "") };
      inline Data& setClusterSpecificationName(string clusterSpecificationName) { DARABONBA_PTR_SET_VALUE(clusterSpecificationName_, clusterSpecificationName) };


      // cpuCapacity Field Functions 
      bool hasCpuCapacity() const { return this->cpuCapacity_ != nullptr;};
      void deleteCpuCapacity() { this->cpuCapacity_ = nullptr;};
      inline string getCpuCapacity() const { DARABONBA_PTR_GET_DEFAULT(cpuCapacity_, "") };
      inline Data& setCpuCapacity(string cpuCapacity) { DARABONBA_PTR_SET_VALUE(cpuCapacity_, cpuCapacity) };


      // memoryCapacity Field Functions 
      bool hasMemoryCapacity() const { return this->memoryCapacity_ != nullptr;};
      void deleteMemoryCapacity() { this->memoryCapacity_ = nullptr;};
      inline string getMemoryCapacity() const { DARABONBA_PTR_GET_DEFAULT(memoryCapacity_, "") };
      inline Data& setMemoryCapacity(string memoryCapacity) { DARABONBA_PTR_SET_VALUE(memoryCapacity_, memoryCapacity) };


    protected:
      // The engine specifications that can be used.
      shared_ptr<string> clusterSpecificationName_ {};
      // The number of vCPUs in the specifications.
      shared_ptr<string> cpuCapacity_ {};
      // The memory size in the specifications. Unit: GB.
      shared_ptr<string> memoryCapacity_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryClusterSpecificationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryClusterSpecificationResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryClusterSpecificationResponseBody::Data>) };
    inline vector<QueryClusterSpecificationResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryClusterSpecificationResponseBody::Data>) };
    inline QueryClusterSpecificationResponseBody& setData(const vector<QueryClusterSpecificationResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryClusterSpecificationResponseBody& setData(vector<QueryClusterSpecificationResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryClusterSpecificationResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryClusterSpecificationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryClusterSpecificationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryClusterSpecificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryClusterSpecificationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The return value.
    shared_ptr<int32_t> code_ {};
    // The details of the data.
    shared_ptr<vector<QueryClusterSpecificationResponseBody::Data>> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
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
