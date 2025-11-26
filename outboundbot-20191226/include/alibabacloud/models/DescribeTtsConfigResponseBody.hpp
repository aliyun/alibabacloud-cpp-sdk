// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETTSCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETTSCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTTSConfigResponseBodyTTSConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeTTSConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTTSConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TTSConfig, TTSConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTTSConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TTSConfig, TTSConfig_);
    };
    DescribeTTSConfigResponseBody() = default ;
    DescribeTTSConfigResponseBody(const DescribeTTSConfigResponseBody &) = default ;
    DescribeTTSConfigResponseBody(DescribeTTSConfigResponseBody &&) = default ;
    DescribeTTSConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTTSConfigResponseBody() = default ;
    DescribeTTSConfigResponseBody& operator=(const DescribeTTSConfigResponseBody &) = default ;
    DescribeTTSConfigResponseBody& operator=(DescribeTTSConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->TTSConfig_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeTTSConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeTTSConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTTSConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTTSConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeTTSConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // TTSConfig Field Functions 
    bool hasTTSConfig() const { return this->TTSConfig_ != nullptr;};
    void deleteTTSConfig() { this->TTSConfig_ = nullptr;};
    inline const DescribeTTSConfigResponseBodyTTSConfig & TTSConfig() const { DARABONBA_PTR_GET_CONST(TTSConfig_, DescribeTTSConfigResponseBodyTTSConfig) };
    inline DescribeTTSConfigResponseBodyTTSConfig TTSConfig() { DARABONBA_PTR_GET(TTSConfig_, DescribeTTSConfigResponseBodyTTSConfig) };
    inline DescribeTTSConfigResponseBody& setTTSConfig(const DescribeTTSConfigResponseBodyTTSConfig & TTSConfig) { DARABONBA_PTR_SET_VALUE(TTSConfig_, TTSConfig) };
    inline DescribeTTSConfigResponseBody& setTTSConfig(DescribeTTSConfigResponseBodyTTSConfig && TTSConfig) { DARABONBA_PTR_SET_RVALUE(TTSConfig_, TTSConfig) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<DescribeTTSConfigResponseBodyTTSConfig> TTSConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
