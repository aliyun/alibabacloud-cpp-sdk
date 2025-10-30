// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGDELIVERYCONFIGSRESPONSEBODYDELIVERYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGDELIVERYCONFIGSRESPONSEBODYDELIVERYCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryDetail, deliveryDetail_);
      DARABONBA_PTR_TO_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryDetail, deliveryDetail_);
      DARABONBA_PTR_FROM_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
    };
    DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs() = default ;
    DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs(const DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs &) = default ;
    DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs(DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs &&) = default ;
    DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs() = default ;
    DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs& operator=(const DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs &) = default ;
    DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs& operator=(DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryDetail_ == nullptr
        && return this->deliveryName_ == nullptr && return this->deliveryType_ == nullptr; };
    // deliveryDetail Field Functions 
    bool hasDeliveryDetail() const { return this->deliveryDetail_ != nullptr;};
    void deleteDeliveryDetail() { this->deliveryDetail_ = nullptr;};
    inline string deliveryDetail() const { DARABONBA_PTR_GET_DEFAULT(deliveryDetail_, "") };
    inline DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs& setDeliveryDetail(string deliveryDetail) { DARABONBA_PTR_SET_VALUE(deliveryDetail_, deliveryDetail) };


    // deliveryName Field Functions 
    bool hasDeliveryName() const { return this->deliveryName_ != nullptr;};
    void deleteDeliveryName() { this->deliveryName_ = nullptr;};
    inline string deliveryName() const { DARABONBA_PTR_GET_DEFAULT(deliveryName_, "") };
    inline DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs& setDeliveryName(string deliveryName) { DARABONBA_PTR_SET_VALUE(deliveryName_, deliveryName) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline DescribeLogDeliveryConfigsResponseBodyDeliveryConfigs& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


  protected:
    // The content of the log delivery configuration. The value is a JSON string that contains multiple parameters.
    // 
    // >  This parameter is the same as the **DeliveryDetail** parameter of the **CreateLogDeliveryConfig** operation. For more information, see **Parameter description for log delivery configuration** of the [CreateLogDeliveryConfig](~~CreateLogDeliveryConfig~~) operation.
    std::shared_ptr<string> deliveryDetail_ = nullptr;
    // The name of the log delivery configuration.
    std::shared_ptr<string> deliveryName_ = nullptr;
    // The type of the log delivery configuration. Valid values:
    // 
    // *   **syslog**: Logs are delivered to a syslog service.
    // *   **kafka**: Logs are delivered to a Kafka service.
    std::shared_ptr<string> deliveryType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
