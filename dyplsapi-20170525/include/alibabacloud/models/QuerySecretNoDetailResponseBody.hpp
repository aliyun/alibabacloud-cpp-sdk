// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECRETNODETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECRETNODETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySecretNoDetailResponseBodySecretNoInfoDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySecretNoDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecretNoDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretNoInfoDTO, secretNoInfoDTO_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecretNoDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretNoInfoDTO, secretNoInfoDTO_);
    };
    QuerySecretNoDetailResponseBody() = default ;
    QuerySecretNoDetailResponseBody(const QuerySecretNoDetailResponseBody &) = default ;
    QuerySecretNoDetailResponseBody(QuerySecretNoDetailResponseBody &&) = default ;
    QuerySecretNoDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecretNoDetailResponseBody() = default ;
    QuerySecretNoDetailResponseBody& operator=(const QuerySecretNoDetailResponseBody &) = default ;
    QuerySecretNoDetailResponseBody& operator=(QuerySecretNoDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->secretNoInfoDTO_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySecretNoDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySecretNoDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySecretNoDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretNoInfoDTO Field Functions 
    bool hasSecretNoInfoDTO() const { return this->secretNoInfoDTO_ != nullptr;};
    void deleteSecretNoInfoDTO() { this->secretNoInfoDTO_ = nullptr;};
    inline const QuerySecretNoDetailResponseBodySecretNoInfoDTO & secretNoInfoDTO() const { DARABONBA_PTR_GET_CONST(secretNoInfoDTO_, QuerySecretNoDetailResponseBodySecretNoInfoDTO) };
    inline QuerySecretNoDetailResponseBodySecretNoInfoDTO secretNoInfoDTO() { DARABONBA_PTR_GET(secretNoInfoDTO_, QuerySecretNoDetailResponseBodySecretNoInfoDTO) };
    inline QuerySecretNoDetailResponseBody& setSecretNoInfoDTO(const QuerySecretNoDetailResponseBodySecretNoInfoDTO & secretNoInfoDTO) { DARABONBA_PTR_SET_VALUE(secretNoInfoDTO_, secretNoInfoDTO) };
    inline QuerySecretNoDetailResponseBody& setSecretNoInfoDTO(QuerySecretNoDetailResponseBodySecretNoInfoDTO && secretNoInfoDTO) { DARABONBA_PTR_SET_RVALUE(secretNoInfoDTO_, secretNoInfoDTO) };


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
    // The attributes of the phone number.
    std::shared_ptr<QuerySecretNoDetailResponseBodySecretNoInfoDTO> secretNoInfoDTO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
