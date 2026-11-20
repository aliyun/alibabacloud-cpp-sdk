// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUYSECRETNORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BUYSECRETNORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BuySecretNoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuySecretNoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretBuyInfoDTO, secretBuyInfoDTO_);
    };
    friend void from_json(const Darabonba::Json& j, BuySecretNoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretBuyInfoDTO, secretBuyInfoDTO_);
    };
    BuySecretNoResponseBody() = default ;
    BuySecretNoResponseBody(const BuySecretNoResponseBody &) = default ;
    BuySecretNoResponseBody(BuySecretNoResponseBody &&) = default ;
    BuySecretNoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuySecretNoResponseBody() = default ;
    BuySecretNoResponseBody& operator=(const BuySecretNoResponseBody &) = default ;
    BuySecretNoResponseBody& operator=(BuySecretNoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecretBuyInfoDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecretBuyInfoDTO& obj) { 
        DARABONBA_PTR_TO_JSON(SecretNo, secretNo_);
      };
      friend void from_json(const Darabonba::Json& j, SecretBuyInfoDTO& obj) { 
        DARABONBA_PTR_FROM_JSON(SecretNo, secretNo_);
      };
      SecretBuyInfoDTO() = default ;
      SecretBuyInfoDTO(const SecretBuyInfoDTO &) = default ;
      SecretBuyInfoDTO(SecretBuyInfoDTO &&) = default ;
      SecretBuyInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecretBuyInfoDTO() = default ;
      SecretBuyInfoDTO& operator=(const SecretBuyInfoDTO &) = default ;
      SecretBuyInfoDTO& operator=(SecretBuyInfoDTO &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->secretNo_ == nullptr; };
      // secretNo Field Functions 
      bool hasSecretNo() const { return this->secretNo_ != nullptr;};
      void deleteSecretNo() { this->secretNo_ = nullptr;};
      inline string getSecretNo() const { DARABONBA_PTR_GET_DEFAULT(secretNo_, "") };
      inline SecretBuyInfoDTO& setSecretNo(string secretNo) { DARABONBA_PTR_SET_VALUE(secretNo_, secretNo) };


    protected:
      // The private number, that is, phone number X.
      shared_ptr<string> secretNo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->secretBuyInfoDTO_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BuySecretNoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BuySecretNoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BuySecretNoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretBuyInfoDTO Field Functions 
    bool hasSecretBuyInfoDTO() const { return this->secretBuyInfoDTO_ != nullptr;};
    void deleteSecretBuyInfoDTO() { this->secretBuyInfoDTO_ = nullptr;};
    inline const BuySecretNoResponseBody::SecretBuyInfoDTO & getSecretBuyInfoDTO() const { DARABONBA_PTR_GET_CONST(secretBuyInfoDTO_, BuySecretNoResponseBody::SecretBuyInfoDTO) };
    inline BuySecretNoResponseBody::SecretBuyInfoDTO getSecretBuyInfoDTO() { DARABONBA_PTR_GET(secretBuyInfoDTO_, BuySecretNoResponseBody::SecretBuyInfoDTO) };
    inline BuySecretNoResponseBody& setSecretBuyInfoDTO(const BuySecretNoResponseBody::SecretBuyInfoDTO & secretBuyInfoDTO) { DARABONBA_PTR_SET_VALUE(secretBuyInfoDTO_, secretBuyInfoDTO) };
    inline BuySecretNoResponseBody& setSecretBuyInfoDTO(BuySecretNoResponseBody::SecretBuyInfoDTO && secretBuyInfoDTO) { DARABONBA_PTR_SET_RVALUE(secretBuyInfoDTO_, secretBuyInfoDTO) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other values indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/109196.html).
    shared_ptr<string> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information returned after the operation was called.
    shared_ptr<BuySecretNoResponseBody::SecretBuyInfoDTO> secretBuyInfoDTO_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
