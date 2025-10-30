// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGDELIVERYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGDELIVERYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLogDeliveryConfigResponseBodyDeliveryConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeLogDeliveryConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogDeliveryConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryConfig, deliveryConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogDeliveryConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryConfig, deliveryConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLogDeliveryConfigResponseBody() = default ;
    DescribeLogDeliveryConfigResponseBody(const DescribeLogDeliveryConfigResponseBody &) = default ;
    DescribeLogDeliveryConfigResponseBody(DescribeLogDeliveryConfigResponseBody &&) = default ;
    DescribeLogDeliveryConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogDeliveryConfigResponseBody() = default ;
    DescribeLogDeliveryConfigResponseBody& operator=(const DescribeLogDeliveryConfigResponseBody &) = default ;
    DescribeLogDeliveryConfigResponseBody& operator=(DescribeLogDeliveryConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryConfig_ == nullptr
        && return this->requestId_ == nullptr; };
    // deliveryConfig Field Functions 
    bool hasDeliveryConfig() const { return this->deliveryConfig_ != nullptr;};
    void deleteDeliveryConfig() { this->deliveryConfig_ = nullptr;};
    inline const DescribeLogDeliveryConfigResponseBodyDeliveryConfig & deliveryConfig() const { DARABONBA_PTR_GET_CONST(deliveryConfig_, DescribeLogDeliveryConfigResponseBodyDeliveryConfig) };
    inline DescribeLogDeliveryConfigResponseBodyDeliveryConfig deliveryConfig() { DARABONBA_PTR_GET(deliveryConfig_, DescribeLogDeliveryConfigResponseBodyDeliveryConfig) };
    inline DescribeLogDeliveryConfigResponseBody& setDeliveryConfig(const DescribeLogDeliveryConfigResponseBodyDeliveryConfig & deliveryConfig) { DARABONBA_PTR_SET_VALUE(deliveryConfig_, deliveryConfig) };
    inline DescribeLogDeliveryConfigResponseBody& setDeliveryConfig(DescribeLogDeliveryConfigResponseBodyDeliveryConfig && deliveryConfig) { DARABONBA_PTR_SET_RVALUE(deliveryConfig_, deliveryConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogDeliveryConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the log delivery configuration.
    std::shared_ptr<DescribeLogDeliveryConfigResponseBodyDeliveryConfig> deliveryConfig_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
