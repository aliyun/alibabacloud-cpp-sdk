// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYFLOWRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYFLOWRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateGatewayFlowRuleResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayFlowRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayFlowRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayFlowRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateGatewayFlowRuleResponseBody() = default ;
    UpdateGatewayFlowRuleResponseBody(const UpdateGatewayFlowRuleResponseBody &) = default ;
    UpdateGatewayFlowRuleResponseBody(UpdateGatewayFlowRuleResponseBody &&) = default ;
    UpdateGatewayFlowRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayFlowRuleResponseBody() = default ;
    UpdateGatewayFlowRuleResponseBody& operator=(const UpdateGatewayFlowRuleResponseBody &) = default ;
    UpdateGatewayFlowRuleResponseBody& operator=(UpdateGatewayFlowRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateGatewayFlowRuleResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, UpdateGatewayFlowRuleResponseBodyData) };
    inline UpdateGatewayFlowRuleResponseBodyData data() { DARABONBA_PTR_GET(data_, UpdateGatewayFlowRuleResponseBodyData) };
    inline UpdateGatewayFlowRuleResponseBody& setData(const UpdateGatewayFlowRuleResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateGatewayFlowRuleResponseBody& setData(UpdateGatewayFlowRuleResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateGatewayFlowRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<UpdateGatewayFlowRuleResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
