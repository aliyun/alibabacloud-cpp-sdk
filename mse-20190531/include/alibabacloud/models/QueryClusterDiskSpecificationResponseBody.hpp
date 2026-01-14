// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLUSTERDISKSPECIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLUSTERDISKSPECIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryClusterDiskSpecificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryClusterDiskSpecificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryClusterDiskSpecificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryClusterDiskSpecificationResponseBody() = default ;
    QueryClusterDiskSpecificationResponseBody(const QueryClusterDiskSpecificationResponseBody &) = default ;
    QueryClusterDiskSpecificationResponseBody(QueryClusterDiskSpecificationResponseBody &&) = default ;
    QueryClusterDiskSpecificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryClusterDiskSpecificationResponseBody() = default ;
    QueryClusterDiskSpecificationResponseBody& operator=(const QueryClusterDiskSpecificationResponseBody &) = default ;
    QueryClusterDiskSpecificationResponseBody& operator=(QueryClusterDiskSpecificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Max, max_);
        DARABONBA_PTR_TO_JSON(Min, min_);
        DARABONBA_PTR_TO_JSON(Step, step_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Max, max_);
        DARABONBA_PTR_FROM_JSON(Min, min_);
        DARABONBA_PTR_FROM_JSON(Step, step_);
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
      virtual bool empty() const override { return this->max_ == nullptr
        && this->min_ == nullptr && this->step_ == nullptr; };
      // max Field Functions 
      bool hasMax() const { return this->max_ != nullptr;};
      void deleteMax() { this->max_ = nullptr;};
      inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
      inline Data& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


      // min Field Functions 
      bool hasMin() const { return this->min_ != nullptr;};
      void deleteMin() { this->min_ = nullptr;};
      inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
      inline Data& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


      // step Field Functions 
      bool hasStep() const { return this->step_ != nullptr;};
      void deleteStep() { this->step_ = nullptr;};
      inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
      inline Data& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    protected:
      // The maximum disk capacity. Unit: GB.
      shared_ptr<int32_t> max_ {};
      // The minimum disk capacity. Unit: GB.
      shared_ptr<int32_t> min_ {};
      // The step size of the disk capacity.
      shared_ptr<int32_t> step_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicMessage_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryClusterDiskSpecificationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryClusterDiskSpecificationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryClusterDiskSpecificationResponseBody::Data) };
    inline QueryClusterDiskSpecificationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryClusterDiskSpecificationResponseBody::Data) };
    inline QueryClusterDiskSpecificationResponseBody& setData(const QueryClusterDiskSpecificationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryClusterDiskSpecificationResponseBody& setData(QueryClusterDiskSpecificationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline QueryClusterDiskSpecificationResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryClusterDiskSpecificationResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryClusterDiskSpecificationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryClusterDiskSpecificationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryClusterDiskSpecificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryClusterDiskSpecificationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<int32_t> code_ {};
    // The details of the data.
    shared_ptr<QueryClusterDiskSpecificationResponseBody::Data> data_ {};
    // The dynamic part in the error message. This parameter is used to replace the \\*\\*%s\\*\\* variable in the **ErrMessage** parameter.
    // 
    // >  If the return value of the **ErrMessage** parameter is **The Value of Input Parameter %s is not valid** and the return value of the **DynamicMessage** parameter is **DtsJobId**, the specified **DtsJobId** parameter is invalid.
    shared_ptr<string> dynamicMessage_ {};
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
