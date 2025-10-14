// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetImageTranslateTaskResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class GetImageTranslateTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageTranslateTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageTranslateTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(synchro, synchro_);
    };
    GetImageTranslateTaskResponseBody() = default ;
    GetImageTranslateTaskResponseBody(const GetImageTranslateTaskResponseBody &) = default ;
    GetImageTranslateTaskResponseBody(GetImageTranslateTaskResponseBody &&) = default ;
    GetImageTranslateTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageTranslateTaskResponseBody() = default ;
    GetImageTranslateTaskResponseBody& operator=(const GetImageTranslateTaskResponseBody &) = default ;
    GetImageTranslateTaskResponseBody& operator=(GetImageTranslateTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->synchro_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetImageTranslateTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetImageTranslateTaskResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetImageTranslateTaskResponseBodyData) };
    inline GetImageTranslateTaskResponseBodyData data() { DARABONBA_PTR_GET(data_, GetImageTranslateTaskResponseBodyData) };
    inline GetImageTranslateTaskResponseBody& setData(const GetImageTranslateTaskResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetImageTranslateTaskResponseBody& setData(GetImageTranslateTaskResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetImageTranslateTaskResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetImageTranslateTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageTranslateTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetImageTranslateTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool synchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline GetImageTranslateTaskResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<GetImageTranslateTaskResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<bool> synchro_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
