// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROCESSDEFINITIONWITHSCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROCESSDEFINITIONWITHSCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateProcessDefinitionWithScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProcessDefinitionWithScheduleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(failed, failed_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProcessDefinitionWithScheduleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(failed, failed_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateProcessDefinitionWithScheduleResponseBody() = default ;
    CreateProcessDefinitionWithScheduleResponseBody(const CreateProcessDefinitionWithScheduleResponseBody &) = default ;
    CreateProcessDefinitionWithScheduleResponseBody(CreateProcessDefinitionWithScheduleResponseBody &&) = default ;
    CreateProcessDefinitionWithScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProcessDefinitionWithScheduleResponseBody() = default ;
    CreateProcessDefinitionWithScheduleResponseBody& operator=(const CreateProcessDefinitionWithScheduleResponseBody &) = default ;
    CreateProcessDefinitionWithScheduleResponseBody& operator=(CreateProcessDefinitionWithScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(id, id_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(id, id_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->id_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
      inline Data& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline Data& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      // The workflow ID.
      shared_ptr<int64_t> code_ {};
      // The serial number of the workflow.
      shared_ptr<int32_t> id_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->failed_ == nullptr && this->httpStatusCode_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CreateProcessDefinitionWithScheduleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateProcessDefinitionWithScheduleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateProcessDefinitionWithScheduleResponseBody::Data) };
    inline CreateProcessDefinitionWithScheduleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateProcessDefinitionWithScheduleResponseBody::Data) };
    inline CreateProcessDefinitionWithScheduleResponseBody& setData(const CreateProcessDefinitionWithScheduleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateProcessDefinitionWithScheduleResponseBody& setData(CreateProcessDefinitionWithScheduleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline string getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, "") };
    inline CreateProcessDefinitionWithScheduleResponseBody& setFailed(string failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateProcessDefinitionWithScheduleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline CreateProcessDefinitionWithScheduleResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateProcessDefinitionWithScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CreateProcessDefinitionWithScheduleResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The code that is returned by the backend server.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<CreateProcessDefinitionWithScheduleResponseBody::Data> data_ {};
    // Indicates whether the request failed.
    shared_ptr<string> failed_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The description of the returned code.
    shared_ptr<string> msg_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
