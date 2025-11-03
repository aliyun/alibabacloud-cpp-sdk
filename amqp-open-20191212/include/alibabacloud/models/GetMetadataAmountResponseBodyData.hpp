// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETADATAAMOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMETADATAAMOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class GetMetadataAmountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetadataAmountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentExchanges, currentExchanges_);
      DARABONBA_PTR_TO_JSON(CurrentQueues, currentQueues_);
      DARABONBA_PTR_TO_JSON(CurrentVirtualHosts, currentVirtualHosts_);
      DARABONBA_PTR_TO_JSON(MaxExchanges, maxExchanges_);
      DARABONBA_PTR_TO_JSON(MaxQueues, maxQueues_);
      DARABONBA_PTR_TO_JSON(MaxVirtualHosts, maxVirtualHosts_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetadataAmountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentExchanges, currentExchanges_);
      DARABONBA_PTR_FROM_JSON(CurrentQueues, currentQueues_);
      DARABONBA_PTR_FROM_JSON(CurrentVirtualHosts, currentVirtualHosts_);
      DARABONBA_PTR_FROM_JSON(MaxExchanges, maxExchanges_);
      DARABONBA_PTR_FROM_JSON(MaxQueues, maxQueues_);
      DARABONBA_PTR_FROM_JSON(MaxVirtualHosts, maxVirtualHosts_);
    };
    GetMetadataAmountResponseBodyData() = default ;
    GetMetadataAmountResponseBodyData(const GetMetadataAmountResponseBodyData &) = default ;
    GetMetadataAmountResponseBodyData(GetMetadataAmountResponseBodyData &&) = default ;
    GetMetadataAmountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetadataAmountResponseBodyData() = default ;
    GetMetadataAmountResponseBodyData& operator=(const GetMetadataAmountResponseBodyData &) = default ;
    GetMetadataAmountResponseBodyData& operator=(GetMetadataAmountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentExchanges_ == nullptr
        && return this->currentQueues_ == nullptr && return this->currentVirtualHosts_ == nullptr && return this->maxExchanges_ == nullptr && return this->maxQueues_ == nullptr && return this->maxVirtualHosts_ == nullptr; };
    // currentExchanges Field Functions 
    bool hasCurrentExchanges() const { return this->currentExchanges_ != nullptr;};
    void deleteCurrentExchanges() { this->currentExchanges_ = nullptr;};
    inline int32_t currentExchanges() const { DARABONBA_PTR_GET_DEFAULT(currentExchanges_, 0) };
    inline GetMetadataAmountResponseBodyData& setCurrentExchanges(int32_t currentExchanges) { DARABONBA_PTR_SET_VALUE(currentExchanges_, currentExchanges) };


    // currentQueues Field Functions 
    bool hasCurrentQueues() const { return this->currentQueues_ != nullptr;};
    void deleteCurrentQueues() { this->currentQueues_ = nullptr;};
    inline int32_t currentQueues() const { DARABONBA_PTR_GET_DEFAULT(currentQueues_, 0) };
    inline GetMetadataAmountResponseBodyData& setCurrentQueues(int32_t currentQueues) { DARABONBA_PTR_SET_VALUE(currentQueues_, currentQueues) };


    // currentVirtualHosts Field Functions 
    bool hasCurrentVirtualHosts() const { return this->currentVirtualHosts_ != nullptr;};
    void deleteCurrentVirtualHosts() { this->currentVirtualHosts_ = nullptr;};
    inline int32_t currentVirtualHosts() const { DARABONBA_PTR_GET_DEFAULT(currentVirtualHosts_, 0) };
    inline GetMetadataAmountResponseBodyData& setCurrentVirtualHosts(int32_t currentVirtualHosts) { DARABONBA_PTR_SET_VALUE(currentVirtualHosts_, currentVirtualHosts) };


    // maxExchanges Field Functions 
    bool hasMaxExchanges() const { return this->maxExchanges_ != nullptr;};
    void deleteMaxExchanges() { this->maxExchanges_ = nullptr;};
    inline int32_t maxExchanges() const { DARABONBA_PTR_GET_DEFAULT(maxExchanges_, 0) };
    inline GetMetadataAmountResponseBodyData& setMaxExchanges(int32_t maxExchanges) { DARABONBA_PTR_SET_VALUE(maxExchanges_, maxExchanges) };


    // maxQueues Field Functions 
    bool hasMaxQueues() const { return this->maxQueues_ != nullptr;};
    void deleteMaxQueues() { this->maxQueues_ = nullptr;};
    inline int32_t maxQueues() const { DARABONBA_PTR_GET_DEFAULT(maxQueues_, 0) };
    inline GetMetadataAmountResponseBodyData& setMaxQueues(int32_t maxQueues) { DARABONBA_PTR_SET_VALUE(maxQueues_, maxQueues) };


    // maxVirtualHosts Field Functions 
    bool hasMaxVirtualHosts() const { return this->maxVirtualHosts_ != nullptr;};
    void deleteMaxVirtualHosts() { this->maxVirtualHosts_ = nullptr;};
    inline int32_t maxVirtualHosts() const { DARABONBA_PTR_GET_DEFAULT(maxVirtualHosts_, 0) };
    inline GetMetadataAmountResponseBodyData& setMaxVirtualHosts(int32_t maxVirtualHosts) { DARABONBA_PTR_SET_VALUE(maxVirtualHosts_, maxVirtualHosts) };


  protected:
    // The number of created exchanges on the ApsaraMQ for RabbitMQ instance.
    std::shared_ptr<int32_t> currentExchanges_ = nullptr;
    // The number of created queues on the ApsaraMQ for RabbitMQ instance.
    std::shared_ptr<int32_t> currentQueues_ = nullptr;
    // The number of created vhosts on the ApsaraMQ for RabbitMQ instance.
    std::shared_ptr<int32_t> currentVirtualHosts_ = nullptr;
    // The maximum number of exchanges that can be created on the ApsaraMQ for RabbitMQ instance.
    std::shared_ptr<int32_t> maxExchanges_ = nullptr;
    // The maximum number of queues that can be created on the ApsaraMQ for RabbitMQ instance.
    std::shared_ptr<int32_t> maxQueues_ = nullptr;
    // The maximum number of vhosts that can be created on the ApsaraMQ for RabbitMQ instance.
    std::shared_ptr<int32_t> maxVirtualHosts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
