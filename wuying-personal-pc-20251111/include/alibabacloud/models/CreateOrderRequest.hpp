// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrderRequestDynamicProductParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class CreateOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(DynamicProductParams, dynamicProductParams_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(OrderFrom, orderFrom_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(DynamicProductParams, dynamicProductParams_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(OrderFrom, orderFrom_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    CreateOrderRequest() = default ;
    CreateOrderRequest(const CreateOrderRequest &) = default ;
    CreateOrderRequest(CreateOrderRequest &&) = default ;
    CreateOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrderRequest() = default ;
    CreateOrderRequest& operator=(const CreateOrderRequest &) = default ;
    CreateOrderRequest& operator=(CreateOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->autoPay_ == nullptr && return this->dynamicProductParams_ == nullptr && return this->operationType_ == nullptr && return this->orderFrom_ == nullptr && return this->sessionId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline CreateOrderRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateOrderRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // dynamicProductParams Field Functions 
    bool hasDynamicProductParams() const { return this->dynamicProductParams_ != nullptr;};
    void deleteDynamicProductParams() { this->dynamicProductParams_ = nullptr;};
    inline const vector<CreateOrderRequestDynamicProductParams> & dynamicProductParams() const { DARABONBA_PTR_GET_CONST(dynamicProductParams_, vector<CreateOrderRequestDynamicProductParams>) };
    inline vector<CreateOrderRequestDynamicProductParams> dynamicProductParams() { DARABONBA_PTR_GET(dynamicProductParams_, vector<CreateOrderRequestDynamicProductParams>) };
    inline CreateOrderRequest& setDynamicProductParams(const vector<CreateOrderRequestDynamicProductParams> & dynamicProductParams) { DARABONBA_PTR_SET_VALUE(dynamicProductParams_, dynamicProductParams) };
    inline CreateOrderRequest& setDynamicProductParams(vector<CreateOrderRequestDynamicProductParams> && dynamicProductParams) { DARABONBA_PTR_SET_RVALUE(dynamicProductParams_, dynamicProductParams) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline CreateOrderRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // orderFrom Field Functions 
    bool hasOrderFrom() const { return this->orderFrom_ != nullptr;};
    void deleteOrderFrom() { this->orderFrom_ = nullptr;};
    inline string orderFrom() const { DARABONBA_PTR_GET_DEFAULT(orderFrom_, "") };
    inline CreateOrderRequest& setOrderFrom(string orderFrom) { DARABONBA_PTR_SET_VALUE(orderFrom_, orderFrom) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateOrderRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<bool> autoPay_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateOrderRequestDynamicProductParams>> dynamicProductParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operationType_ = nullptr;
    std::shared_ptr<string> orderFrom_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
