// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENVIRONMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEENVIRONMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEnvironmentResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateEnvironmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnvironmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnvironmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateEnvironmentResponseBody() = default ;
    CreateEnvironmentResponseBody(const CreateEnvironmentResponseBody &) = default ;
    CreateEnvironmentResponseBody(CreateEnvironmentResponseBody &&) = default ;
    CreateEnvironmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnvironmentResponseBody() = default ;
    CreateEnvironmentResponseBody& operator=(const CreateEnvironmentResponseBody &) = default ;
    CreateEnvironmentResponseBody& operator=(CreateEnvironmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateEnvironmentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateEnvironmentResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateEnvironmentResponseBodyData) };
    inline CreateEnvironmentResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateEnvironmentResponseBodyData) };
    inline CreateEnvironmentResponseBody& setData(const CreateEnvironmentResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateEnvironmentResponseBody& setData(CreateEnvironmentResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateEnvironmentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEnvironmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Response code.
    std::shared_ptr<string> code_ = nullptr;
    // Response data.
    std::shared_ptr<CreateEnvironmentResponseBodyData> data_ = nullptr;
    // Response message.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID, used for tracing the API call chain.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
