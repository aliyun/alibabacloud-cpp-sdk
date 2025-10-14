// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSEENGINEMIGRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOSEENGINEMIGRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CloseEngineMigrationResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CloseEngineMigrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseEngineMigrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessResponse, successResponse_);
    };
    friend void from_json(const Darabonba::Json& j, CloseEngineMigrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessResponse, successResponse_);
    };
    CloseEngineMigrationResponseBody() = default ;
    CloseEngineMigrationResponseBody(const CloseEngineMigrationResponseBody &) = default ;
    CloseEngineMigrationResponseBody(CloseEngineMigrationResponseBody &&) = default ;
    CloseEngineMigrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseEngineMigrationResponseBody() = default ;
    CloseEngineMigrationResponseBody& operator=(const CloseEngineMigrationResponseBody &) = default ;
    CloseEngineMigrationResponseBody& operator=(CloseEngineMigrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->successResponse_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloseEngineMigrationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloseEngineMigrationResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CloseEngineMigrationResponseBodyData) };
    inline CloseEngineMigrationResponseBodyData data() { DARABONBA_PTR_GET(data_, CloseEngineMigrationResponseBodyData) };
    inline CloseEngineMigrationResponseBody& setData(const CloseEngineMigrationResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloseEngineMigrationResponseBody& setData(CloseEngineMigrationResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline CloseEngineMigrationResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloseEngineMigrationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloseEngineMigrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successResponse Field Functions 
    bool hasSuccessResponse() const { return this->successResponse_ != nullptr;};
    void deleteSuccessResponse() { this->successResponse_ = nullptr;};
    inline string successResponse() const { DARABONBA_PTR_GET_DEFAULT(successResponse_, "") };
    inline CloseEngineMigrationResponseBody& setSuccessResponse(string successResponse) { DARABONBA_PTR_SET_VALUE(successResponse_, successResponse) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<CloseEngineMigrationResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> successResponse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
