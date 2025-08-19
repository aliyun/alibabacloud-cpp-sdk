// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELIVERYOPTION_HPP_
#define ALIBABACLOUD_MODELS_DELIVERYOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class DeliveryOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeliveryOption& obj) { 
      DARABONBA_PTR_TO_JSON(concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(eventSchema, eventSchema_);
    };
    friend void from_json(const Darabonba::Json& j, DeliveryOption& obj) { 
      DARABONBA_PTR_FROM_JSON(concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(eventSchema, eventSchema_);
    };
    DeliveryOption() = default ;
    DeliveryOption(const DeliveryOption &) = default ;
    DeliveryOption(DeliveryOption &&) = default ;
    DeliveryOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeliveryOption() = default ;
    DeliveryOption& operator=(const DeliveryOption &) = default ;
    DeliveryOption& operator=(DeliveryOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->concurrency_ != nullptr
        && this->eventSchema_ != nullptr; };
    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int64_t concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
    inline DeliveryOption& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // eventSchema Field Functions 
    bool hasEventSchema() const { return this->eventSchema_ != nullptr;};
    void deleteEventSchema() { this->eventSchema_ = nullptr;};
    inline string eventSchema() const { DARABONBA_PTR_GET_DEFAULT(eventSchema_, "") };
    inline DeliveryOption& setEventSchema(string eventSchema) { DARABONBA_PTR_SET_VALUE(eventSchema_, eventSchema) };


  protected:
    std::shared_ptr<int64_t> concurrency_ = nullptr;
    std::shared_ptr<string> eventSchema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
