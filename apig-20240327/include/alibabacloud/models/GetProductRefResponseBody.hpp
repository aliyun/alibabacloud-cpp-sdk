// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTREFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTREFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HiMarketProductRefConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetProductRefResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductRefResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductRefResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetProductRefResponseBody() = default ;
    GetProductRefResponseBody(const GetProductRefResponseBody &) = default ;
    GetProductRefResponseBody(GetProductRefResponseBody &&) = default ;
    GetProductRefResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductRefResponseBody() = default ;
    GetProductRefResponseBody& operator=(const GetProductRefResponseBody &) = default ;
    GetProductRefResponseBody& operator=(GetProductRefResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(apigRefConfig, apigRefConfig_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(apigRefConfig, apigRefConfig_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
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
      virtual bool empty() const override { return this->apigRefConfig_ == nullptr
        && this->gatewayId_ == nullptr; };
      // apigRefConfig Field Functions 
      bool hasApigRefConfig() const { return this->apigRefConfig_ != nullptr;};
      void deleteApigRefConfig() { this->apigRefConfig_ = nullptr;};
      inline const HiMarketProductRefConfig & getApigRefConfig() const { DARABONBA_PTR_GET_CONST(apigRefConfig_, HiMarketProductRefConfig) };
      inline HiMarketProductRefConfig getApigRefConfig() { DARABONBA_PTR_GET(apigRefConfig_, HiMarketProductRefConfig) };
      inline Data& setApigRefConfig(const HiMarketProductRefConfig & apigRefConfig) { DARABONBA_PTR_SET_VALUE(apigRefConfig_, apigRefConfig) };
      inline Data& setApigRefConfig(HiMarketProductRefConfig && apigRefConfig) { DARABONBA_PTR_SET_RVALUE(apigRefConfig_, apigRefConfig) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    protected:
      // The API configurations currently associated with the API product. The structure is derived from the common struct HiMarketProductRefConfig. This struct contains the gatewayId and apigRefConfig members. The inner apigRefConfig struct contains the mcpServerId, mcpRouteId, mcpServerName, agentApiId, agentApiName, modelApiId, and modelApiName members.
      shared_ptr<HiMarketProductRefConfig> apigRefConfig_ {};
      // The gateway ID. The ID of the gateway instance where the association configuration of the API product resides.
      shared_ptr<string> gatewayId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetProductRefResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetProductRefResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetProductRefResponseBody::Data) };
    inline GetProductRefResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetProductRefResponseBody::Data) };
    inline GetProductRefResponseBody& setData(const GetProductRefResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetProductRefResponseBody& setData(GetProductRefResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetProductRefResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProductRefResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetProductRefResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
