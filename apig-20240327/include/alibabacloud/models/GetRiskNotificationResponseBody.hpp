// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRISKNOTIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRISKNOTIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetRiskNotificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRiskNotificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRiskNotificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetRiskNotificationResponseBody() = default ;
    GetRiskNotificationResponseBody(const GetRiskNotificationResponseBody &) = default ;
    GetRiskNotificationResponseBody(GetRiskNotificationResponseBody &&) = default ;
    GetRiskNotificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRiskNotificationResponseBody() = default ;
    GetRiskNotificationResponseBody& operator=(const GetRiskNotificationResponseBody &) = default ;
    GetRiskNotificationResponseBody& operator=(GetRiskNotificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(isMute, isMute_);
        DARABONBA_PTR_TO_JSON(riskCode, riskCode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(isMute, isMute_);
        DARABONBA_PTR_FROM_JSON(riskCode, riskCode_);
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
      virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->isMute_ == nullptr && this->riskCode_ == nullptr; };
      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // isMute Field Functions 
      bool hasIsMute() const { return this->isMute_ != nullptr;};
      void deleteIsMute() { this->isMute_ = nullptr;};
      inline bool getIsMute() const { DARABONBA_PTR_GET_DEFAULT(isMute_, false) };
      inline Data& setIsMute(bool isMute) { DARABONBA_PTR_SET_VALUE(isMute_, isMute) };


      // riskCode Field Functions 
      bool hasRiskCode() const { return this->riskCode_ != nullptr;};
      void deleteRiskCode() { this->riskCode_ = nullptr;};
      inline string getRiskCode() const { DARABONBA_PTR_GET_DEFAULT(riskCode_, "") };
      inline Data& setRiskCode(string riskCode) { DARABONBA_PTR_SET_VALUE(riskCode_, riskCode) };


    protected:
      shared_ptr<string> gatewayId_ {};
      shared_ptr<bool> isMute_ {};
      shared_ptr<string> riskCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRiskNotificationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRiskNotificationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRiskNotificationResponseBody::Data) };
    inline GetRiskNotificationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRiskNotificationResponseBody::Data) };
    inline GetRiskNotificationResponseBody& setData(const GetRiskNotificationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRiskNotificationResponseBody& setData(GetRiskNotificationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRiskNotificationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRiskNotificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetRiskNotificationResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
