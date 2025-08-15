// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateProcessDefinitionWithScheduleResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class UpdateProcessDefinitionWithScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProcessDefinitionWithScheduleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(failed, failed_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProcessDefinitionWithScheduleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(failed, failed_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    UpdateProcessDefinitionWithScheduleResponseBody() = default ;
    UpdateProcessDefinitionWithScheduleResponseBody(const UpdateProcessDefinitionWithScheduleResponseBody &) = default ;
    UpdateProcessDefinitionWithScheduleResponseBody(UpdateProcessDefinitionWithScheduleResponseBody &&) = default ;
    UpdateProcessDefinitionWithScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProcessDefinitionWithScheduleResponseBody() = default ;
    UpdateProcessDefinitionWithScheduleResponseBody& operator=(const UpdateProcessDefinitionWithScheduleResponseBody &) = default ;
    UpdateProcessDefinitionWithScheduleResponseBody& operator=(UpdateProcessDefinitionWithScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->failed_ != nullptr && this->httpStatusCode_ != nullptr && this->msg_ != nullptr && this->requestId_ != nullptr
        && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateProcessDefinitionWithScheduleResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, UpdateProcessDefinitionWithScheduleResponseBodyData) };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData data() { DARABONBA_PTR_GET(data_, UpdateProcessDefinitionWithScheduleResponseBodyData) };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setData(const UpdateProcessDefinitionWithScheduleResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setData(UpdateProcessDefinitionWithScheduleResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline string failed() const { DARABONBA_PTR_GET_DEFAULT(failed_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setFailed(string failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The code that is returned by the backend server.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The data returned.
    std::shared_ptr<UpdateProcessDefinitionWithScheduleResponseBodyData> data_ = nullptr;
    // Indicates whether the request failed.
    std::shared_ptr<string> failed_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The description of the returned code.
    std::shared_ptr<string> msg_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
