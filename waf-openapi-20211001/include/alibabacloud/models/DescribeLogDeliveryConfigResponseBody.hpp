// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGDELIVERYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGDELIVERYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class DeliveryConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeliveryConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DeliveryDetail, deliveryDetail_);
        DARABONBA_PTR_TO_JSON(DeliveryName, deliveryName_);
        DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      };
      friend void from_json(const Darabonba::Json& j, DeliveryConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DeliveryDetail, deliveryDetail_);
        DARABONBA_PTR_FROM_JSON(DeliveryName, deliveryName_);
        DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      };
      DeliveryConfig() = default ;
      DeliveryConfig(const DeliveryConfig &) = default ;
      DeliveryConfig(DeliveryConfig &&) = default ;
      DeliveryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeliveryConfig() = default ;
      DeliveryConfig& operator=(const DeliveryConfig &) = default ;
      DeliveryConfig& operator=(DeliveryConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deliveryDetail_ == nullptr
        && this->deliveryName_ == nullptr && this->deliveryType_ == nullptr; };
      // deliveryDetail Field Functions 
      bool hasDeliveryDetail() const { return this->deliveryDetail_ != nullptr;};
      void deleteDeliveryDetail() { this->deliveryDetail_ = nullptr;};
      inline string getDeliveryDetail() const { DARABONBA_PTR_GET_DEFAULT(deliveryDetail_, "") };
      inline DeliveryConfig& setDeliveryDetail(string deliveryDetail) { DARABONBA_PTR_SET_VALUE(deliveryDetail_, deliveryDetail) };


      // deliveryName Field Functions 
      bool hasDeliveryName() const { return this->deliveryName_ != nullptr;};
      void deleteDeliveryName() { this->deliveryName_ = nullptr;};
      inline string getDeliveryName() const { DARABONBA_PTR_GET_DEFAULT(deliveryName_, "") };
      inline DeliveryConfig& setDeliveryName(string deliveryName) { DARABONBA_PTR_SET_VALUE(deliveryName_, deliveryName) };


      // deliveryType Field Functions 
      bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
      void deleteDeliveryType() { this->deliveryType_ = nullptr;};
      inline string getDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
      inline DeliveryConfig& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    protected:
      // The content of the log delivery configuration. The value is a JSON string that contains multiple parameters.
      // 
      // >  This parameter is the same as the **DeliveryDetail** parameter of the **CreateLogDeliveryConfig** operation. For more information, see **Parameter description for log delivery configuration** of the [CreateLogDeliveryConfig](~~CreateLogDeliveryConfig~~) operation.
      shared_ptr<string> deliveryDetail_ {};
      // The name of the log delivery configuration.
      shared_ptr<string> deliveryName_ {};
      // The type of the log delivery configuration. Valid values:
      // 
      // *   **syslog**: Logs are delivered to a syslog service.
      // *   **kafka**: Logs are delivered to a Kafka service.
      shared_ptr<string> deliveryType_ {};
    };

    virtual bool empty() const override { return this->deliveryConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // deliveryConfig Field Functions 
    bool hasDeliveryConfig() const { return this->deliveryConfig_ != nullptr;};
    void deleteDeliveryConfig() { this->deliveryConfig_ = nullptr;};
    inline const DescribeLogDeliveryConfigResponseBody::DeliveryConfig & getDeliveryConfig() const { DARABONBA_PTR_GET_CONST(deliveryConfig_, DescribeLogDeliveryConfigResponseBody::DeliveryConfig) };
    inline DescribeLogDeliveryConfigResponseBody::DeliveryConfig getDeliveryConfig() { DARABONBA_PTR_GET(deliveryConfig_, DescribeLogDeliveryConfigResponseBody::DeliveryConfig) };
    inline DescribeLogDeliveryConfigResponseBody& setDeliveryConfig(const DescribeLogDeliveryConfigResponseBody::DeliveryConfig & deliveryConfig) { DARABONBA_PTR_SET_VALUE(deliveryConfig_, deliveryConfig) };
    inline DescribeLogDeliveryConfigResponseBody& setDeliveryConfig(DescribeLogDeliveryConfigResponseBody::DeliveryConfig && deliveryConfig) { DARABONBA_PTR_SET_RVALUE(deliveryConfig_, deliveryConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogDeliveryConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the log delivery configuration.
    shared_ptr<DescribeLogDeliveryConfigResponseBody::DeliveryConfig> deliveryConfig_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
