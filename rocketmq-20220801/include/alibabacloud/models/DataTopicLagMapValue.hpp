// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATATOPICLAGMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATATOPICLAGMAPVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class DataTopicLagMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataTopicLagMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(readyCount, readyCount_);
      DARABONBA_PTR_TO_JSON(inflightCount, inflightCount_);
      DARABONBA_PTR_TO_JSON(deliveryDuration, deliveryDuration_);
      DARABONBA_PTR_TO_JSON(lastConsumeTimestamp, lastConsumeTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DataTopicLagMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(readyCount, readyCount_);
      DARABONBA_PTR_FROM_JSON(inflightCount, inflightCount_);
      DARABONBA_PTR_FROM_JSON(deliveryDuration, deliveryDuration_);
      DARABONBA_PTR_FROM_JSON(lastConsumeTimestamp, lastConsumeTimestamp_);
    };
    DataTopicLagMapValue() = default ;
    DataTopicLagMapValue(const DataTopicLagMapValue &) = default ;
    DataTopicLagMapValue(DataTopicLagMapValue &&) = default ;
    DataTopicLagMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataTopicLagMapValue() = default ;
    DataTopicLagMapValue& operator=(const DataTopicLagMapValue &) = default ;
    DataTopicLagMapValue& operator=(DataTopicLagMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->readyCount_ != nullptr
        && this->inflightCount_ != nullptr && this->deliveryDuration_ != nullptr && this->lastConsumeTimestamp_ != nullptr; };
    // readyCount Field Functions 
    bool hasReadyCount() const { return this->readyCount_ != nullptr;};
    void deleteReadyCount() { this->readyCount_ = nullptr;};
    inline int64_t readyCount() const { DARABONBA_PTR_GET_DEFAULT(readyCount_, 0L) };
    inline DataTopicLagMapValue& setReadyCount(int64_t readyCount) { DARABONBA_PTR_SET_VALUE(readyCount_, readyCount) };


    // inflightCount Field Functions 
    bool hasInflightCount() const { return this->inflightCount_ != nullptr;};
    void deleteInflightCount() { this->inflightCount_ = nullptr;};
    inline int64_t inflightCount() const { DARABONBA_PTR_GET_DEFAULT(inflightCount_, 0L) };
    inline DataTopicLagMapValue& setInflightCount(int64_t inflightCount) { DARABONBA_PTR_SET_VALUE(inflightCount_, inflightCount) };


    // deliveryDuration Field Functions 
    bool hasDeliveryDuration() const { return this->deliveryDuration_ != nullptr;};
    void deleteDeliveryDuration() { this->deliveryDuration_ = nullptr;};
    inline int64_t deliveryDuration() const { DARABONBA_PTR_GET_DEFAULT(deliveryDuration_, 0L) };
    inline DataTopicLagMapValue& setDeliveryDuration(int64_t deliveryDuration) { DARABONBA_PTR_SET_VALUE(deliveryDuration_, deliveryDuration) };


    // lastConsumeTimestamp Field Functions 
    bool hasLastConsumeTimestamp() const { return this->lastConsumeTimestamp_ != nullptr;};
    void deleteLastConsumeTimestamp() { this->lastConsumeTimestamp_ = nullptr;};
    inline int64_t lastConsumeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastConsumeTimestamp_, 0L) };
    inline DataTopicLagMapValue& setLastConsumeTimestamp(int64_t lastConsumeTimestamp) { DARABONBA_PTR_SET_VALUE(lastConsumeTimestamp_, lastConsumeTimestamp) };


  protected:
    // Ready message count
    std::shared_ptr<int64_t> readyCount_ = nullptr;
    // The number of messages being consumed.
    std::shared_ptr<int64_t> inflightCount_ = nullptr;
    // Delivery delay time, in seconds
    std::shared_ptr<int64_t> deliveryDuration_ = nullptr;
    // lastConsumeTimestamp
    std::shared_ptr<int64_t> lastConsumeTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
