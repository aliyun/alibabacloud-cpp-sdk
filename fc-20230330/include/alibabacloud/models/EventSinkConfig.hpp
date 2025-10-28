// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTSINKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_EVENTSINKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeliveryOption.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class EventSinkConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventSinkConfig& obj) { 
      DARABONBA_PTR_TO_JSON(deliveryOption, deliveryOption_);
    };
    friend void from_json(const Darabonba::Json& j, EventSinkConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(deliveryOption, deliveryOption_);
    };
    EventSinkConfig() = default ;
    EventSinkConfig(const EventSinkConfig &) = default ;
    EventSinkConfig(EventSinkConfig &&) = default ;
    EventSinkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventSinkConfig() = default ;
    EventSinkConfig& operator=(const EventSinkConfig &) = default ;
    EventSinkConfig& operator=(EventSinkConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryOption_ == nullptr; };
    // deliveryOption Field Functions 
    bool hasDeliveryOption() const { return this->deliveryOption_ != nullptr;};
    void deleteDeliveryOption() { this->deliveryOption_ = nullptr;};
    inline const DeliveryOption & deliveryOption() const { DARABONBA_PTR_GET_CONST(deliveryOption_, DeliveryOption) };
    inline DeliveryOption deliveryOption() { DARABONBA_PTR_GET(deliveryOption_, DeliveryOption) };
    inline EventSinkConfig& setDeliveryOption(const DeliveryOption & deliveryOption) { DARABONBA_PTR_SET_VALUE(deliveryOption_, deliveryOption) };
    inline EventSinkConfig& setDeliveryOption(DeliveryOption && deliveryOption) { DARABONBA_PTR_SET_RVALUE(deliveryOption_, deliveryOption) };


  protected:
    std::shared_ptr<DeliveryOption> deliveryOption_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
