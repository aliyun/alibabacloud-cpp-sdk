// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYCIRCUITBREAKERRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYCIRCUITBREAKERRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateGatewayCircuitBreakerRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayCircuitBreakerRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayCircuitBreakerRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateGatewayCircuitBreakerRuleResponseBody() = default ;
    CreateGatewayCircuitBreakerRuleResponseBody(const CreateGatewayCircuitBreakerRuleResponseBody &) = default ;
    CreateGatewayCircuitBreakerRuleResponseBody(CreateGatewayCircuitBreakerRuleResponseBody &&) = default ;
    CreateGatewayCircuitBreakerRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayCircuitBreakerRuleResponseBody() = default ;
    CreateGatewayCircuitBreakerRuleResponseBody& operator=(const CreateGatewayCircuitBreakerRuleResponseBody &) = default ;
    CreateGatewayCircuitBreakerRuleResponseBody& operator=(CreateGatewayCircuitBreakerRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline int64_t getData() const { DARABONBA_PTR_GET_DEFAULT(data_, 0L) };
    inline CreateGatewayCircuitBreakerRuleResponseBody& setData(int64_t data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGatewayCircuitBreakerRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
