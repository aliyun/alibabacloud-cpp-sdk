// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATALITETOPICLAGMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATALITETOPICLAGMAPVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class DataLiteTopicLagMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataLiteTopicLagMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(readyCount, readyCount_);
      DARABONBA_PTR_TO_JSON(deliveryDuration, deliveryDuration_);
    };
    friend void from_json(const Darabonba::Json& j, DataLiteTopicLagMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(readyCount, readyCount_);
      DARABONBA_PTR_FROM_JSON(deliveryDuration, deliveryDuration_);
    };
    DataLiteTopicLagMapValue() = default ;
    DataLiteTopicLagMapValue(const DataLiteTopicLagMapValue &) = default ;
    DataLiteTopicLagMapValue(DataLiteTopicLagMapValue &&) = default ;
    DataLiteTopicLagMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataLiteTopicLagMapValue() = default ;
    DataLiteTopicLagMapValue& operator=(const DataLiteTopicLagMapValue &) = default ;
    DataLiteTopicLagMapValue& operator=(DataLiteTopicLagMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->readyCount_ == nullptr
        && this->deliveryDuration_ == nullptr; };
    // readyCount Field Functions 
    bool hasReadyCount() const { return this->readyCount_ != nullptr;};
    void deleteReadyCount() { this->readyCount_ = nullptr;};
    inline int64_t getReadyCount() const { DARABONBA_PTR_GET_DEFAULT(readyCount_, 0L) };
    inline DataLiteTopicLagMapValue& setReadyCount(int64_t readyCount) { DARABONBA_PTR_SET_VALUE(readyCount_, readyCount) };


    // deliveryDuration Field Functions 
    bool hasDeliveryDuration() const { return this->deliveryDuration_ != nullptr;};
    void deleteDeliveryDuration() { this->deliveryDuration_ = nullptr;};
    inline int64_t getDeliveryDuration() const { DARABONBA_PTR_GET_DEFAULT(deliveryDuration_, 0L) };
    inline DataLiteTopicLagMapValue& setDeliveryDuration(int64_t deliveryDuration) { DARABONBA_PTR_SET_VALUE(deliveryDuration_, deliveryDuration) };


  protected:
    shared_ptr<int64_t> readyCount_ {};
    shared_ptr<int64_t> deliveryDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
