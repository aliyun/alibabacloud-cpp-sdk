// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECRETNOREMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECRETNOREMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySecretNoRemainResponseBodySecretRemainDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySecretNoRemainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecretNoRemainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretRemainDTO, secretRemainDTO_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecretNoRemainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretRemainDTO, secretRemainDTO_);
    };
    QuerySecretNoRemainResponseBody() = default ;
    QuerySecretNoRemainResponseBody(const QuerySecretNoRemainResponseBody &) = default ;
    QuerySecretNoRemainResponseBody(QuerySecretNoRemainResponseBody &&) = default ;
    QuerySecretNoRemainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecretNoRemainResponseBody() = default ;
    QuerySecretNoRemainResponseBody& operator=(const QuerySecretNoRemainResponseBody &) = default ;
    QuerySecretNoRemainResponseBody& operator=(QuerySecretNoRemainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->secretRemainDTO_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySecretNoRemainResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySecretNoRemainResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySecretNoRemainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretRemainDTO Field Functions 
    bool hasSecretRemainDTO() const { return this->secretRemainDTO_ != nullptr;};
    void deleteSecretRemainDTO() { this->secretRemainDTO_ = nullptr;};
    inline const QuerySecretNoRemainResponseBodySecretRemainDTO & secretRemainDTO() const { DARABONBA_PTR_GET_CONST(secretRemainDTO_, QuerySecretNoRemainResponseBodySecretRemainDTO) };
    inline QuerySecretNoRemainResponseBodySecretRemainDTO secretRemainDTO() { DARABONBA_PTR_GET(secretRemainDTO_, QuerySecretNoRemainResponseBodySecretRemainDTO) };
    inline QuerySecretNoRemainResponseBody& setSecretRemainDTO(const QuerySecretNoRemainResponseBodySecretRemainDTO & secretRemainDTO) { DARABONBA_PTR_SET_VALUE(secretRemainDTO_, secretRemainDTO) };
    inline QuerySecretNoRemainResponseBody& setSecretRemainDTO(QuerySecretNoRemainResponseBodySecretRemainDTO && secretRemainDTO) { DARABONBA_PTR_SET_RVALUE(secretRemainDTO_, secretRemainDTO) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other status codes indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/109196.html).
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information returned after the operation was called.
    std::shared_ptr<QuerySecretNoRemainResponseBodySecretRemainDTO> secretRemainDTO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
