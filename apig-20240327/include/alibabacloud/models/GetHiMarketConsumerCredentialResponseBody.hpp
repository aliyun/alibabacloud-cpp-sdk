// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHIMARKETCONSUMERCREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHIMARKETCONSUMERCREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HiMarketApiKeyConfig.hpp>
#include <alibabacloud/models/HiMarketHmacConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetHiMarketConsumerCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHiMarketConsumerCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHiMarketConsumerCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetHiMarketConsumerCredentialResponseBody() = default ;
    GetHiMarketConsumerCredentialResponseBody(const GetHiMarketConsumerCredentialResponseBody &) = default ;
    GetHiMarketConsumerCredentialResponseBody(GetHiMarketConsumerCredentialResponseBody &&) = default ;
    GetHiMarketConsumerCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHiMarketConsumerCredentialResponseBody() = default ;
    GetHiMarketConsumerCredentialResponseBody& operator=(const GetHiMarketConsumerCredentialResponseBody &) = default ;
    GetHiMarketConsumerCredentialResponseBody& operator=(GetHiMarketConsumerCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(apiKeyConfig, apiKeyConfig_);
        DARABONBA_PTR_TO_JSON(hmacConfig, hmacConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKeyConfig, apiKeyConfig_);
        DARABONBA_PTR_FROM_JSON(hmacConfig, hmacConfig_);
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
      virtual bool empty() const override { return this->apiKeyConfig_ == nullptr
        && this->hmacConfig_ == nullptr; };
      // apiKeyConfig Field Functions 
      bool hasApiKeyConfig() const { return this->apiKeyConfig_ != nullptr;};
      void deleteApiKeyConfig() { this->apiKeyConfig_ = nullptr;};
      inline const HiMarketApiKeyConfig & getApiKeyConfig() const { DARABONBA_PTR_GET_CONST(apiKeyConfig_, HiMarketApiKeyConfig) };
      inline HiMarketApiKeyConfig getApiKeyConfig() { DARABONBA_PTR_GET(apiKeyConfig_, HiMarketApiKeyConfig) };
      inline Data& setApiKeyConfig(const HiMarketApiKeyConfig & apiKeyConfig) { DARABONBA_PTR_SET_VALUE(apiKeyConfig_, apiKeyConfig) };
      inline Data& setApiKeyConfig(HiMarketApiKeyConfig && apiKeyConfig) { DARABONBA_PTR_SET_RVALUE(apiKeyConfig_, apiKeyConfig) };


      // hmacConfig Field Functions 
      bool hasHmacConfig() const { return this->hmacConfig_ != nullptr;};
      void deleteHmacConfig() { this->hmacConfig_ = nullptr;};
      inline const HiMarketHmacConfig & getHmacConfig() const { DARABONBA_PTR_GET_CONST(hmacConfig_, HiMarketHmacConfig) };
      inline HiMarketHmacConfig getHmacConfig() { DARABONBA_PTR_GET(hmacConfig_, HiMarketHmacConfig) };
      inline Data& setHmacConfig(const HiMarketHmacConfig & hmacConfig) { DARABONBA_PTR_SET_VALUE(hmacConfig_, hmacConfig) };
      inline Data& setHmacConfig(HiMarketHmacConfig && hmacConfig) { DARABONBA_PTR_SET_RVALUE(hmacConfig_, hmacConfig) };


    protected:
      // The API key credential configuration of the consumer. This corresponds to the common data structure HiMarketApiKeyConfig and includes the key, source, and credentials list members. Each item in the credentials list contains an apiKey.
      shared_ptr<HiMarketApiKeyConfig> apiKeyConfig_ {};
      // The HMAC credential configuration of the consumer. This corresponds to the common data structure HiMarketHmacConfig and includes the credentials list member. Each item in the credentials list contains an ak and an sk.
      shared_ptr<HiMarketHmacConfig> hmacConfig_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHiMarketConsumerCredentialResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHiMarketConsumerCredentialResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHiMarketConsumerCredentialResponseBody::Data) };
    inline GetHiMarketConsumerCredentialResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHiMarketConsumerCredentialResponseBody::Data) };
    inline GetHiMarketConsumerCredentialResponseBody& setData(const GetHiMarketConsumerCredentialResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHiMarketConsumerCredentialResponseBody& setData(GetHiMarketConsumerCredentialResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHiMarketConsumerCredentialResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHiMarketConsumerCredentialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetHiMarketConsumerCredentialResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
