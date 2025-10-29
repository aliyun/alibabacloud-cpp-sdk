// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTHTTPAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTHTTPAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExportHttpApiResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ExportHttpApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportHttpApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportHttpApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ExportHttpApiResponseBody() = default ;
    ExportHttpApiResponseBody(const ExportHttpApiResponseBody &) = default ;
    ExportHttpApiResponseBody(ExportHttpApiResponseBody &&) = default ;
    ExportHttpApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportHttpApiResponseBody() = default ;
    ExportHttpApiResponseBody& operator=(const ExportHttpApiResponseBody &) = default ;
    ExportHttpApiResponseBody& operator=(ExportHttpApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ExportHttpApiResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExportHttpApiResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ExportHttpApiResponseBodyData) };
    inline ExportHttpApiResponseBodyData data() { DARABONBA_PTR_GET(data_, ExportHttpApiResponseBodyData) };
    inline ExportHttpApiResponseBody& setData(const ExportHttpApiResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExportHttpApiResponseBody& setData(ExportHttpApiResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExportHttpApiResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportHttpApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Response status code.
    std::shared_ptr<string> code_ = nullptr;
    // API definition information.
    std::shared_ptr<ExportHttpApiResponseBodyData> data_ = nullptr;
    // Response message.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
