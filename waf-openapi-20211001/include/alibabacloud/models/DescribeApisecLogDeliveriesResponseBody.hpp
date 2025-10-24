// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECLOGDELIVERIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECLOGDELIVERIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecLogDeliveriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecLogDeliveriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryConfigs, deliveryConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecLogDeliveriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryConfigs, deliveryConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApisecLogDeliveriesResponseBody() = default ;
    DescribeApisecLogDeliveriesResponseBody(const DescribeApisecLogDeliveriesResponseBody &) = default ;
    DescribeApisecLogDeliveriesResponseBody(DescribeApisecLogDeliveriesResponseBody &&) = default ;
    DescribeApisecLogDeliveriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecLogDeliveriesResponseBody() = default ;
    DescribeApisecLogDeliveriesResponseBody& operator=(const DescribeApisecLogDeliveriesResponseBody &) = default ;
    DescribeApisecLogDeliveriesResponseBody& operator=(DescribeApisecLogDeliveriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryConfigs_ == nullptr
        && return this->requestId_ == nullptr; };
    // deliveryConfigs Field Functions 
    bool hasDeliveryConfigs() const { return this->deliveryConfigs_ != nullptr;};
    void deleteDeliveryConfigs() { this->deliveryConfigs_ = nullptr;};
    inline const vector<DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs> & deliveryConfigs() const { DARABONBA_PTR_GET_CONST(deliveryConfigs_, vector<DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs>) };
    inline vector<DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs> deliveryConfigs() { DARABONBA_PTR_GET(deliveryConfigs_, vector<DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs>) };
    inline DescribeApisecLogDeliveriesResponseBody& setDeliveryConfigs(const vector<DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs> & deliveryConfigs) { DARABONBA_PTR_SET_VALUE(deliveryConfigs_, deliveryConfigs) };
    inline DescribeApisecLogDeliveriesResponseBody& setDeliveryConfigs(vector<DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs> && deliveryConfigs) { DARABONBA_PTR_SET_RVALUE(deliveryConfigs_, deliveryConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecLogDeliveriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of API security log subscription.
    std::shared_ptr<vector<DescribeApisecLogDeliveriesResponseBodyDeliveryConfigs>> deliveryConfigs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
