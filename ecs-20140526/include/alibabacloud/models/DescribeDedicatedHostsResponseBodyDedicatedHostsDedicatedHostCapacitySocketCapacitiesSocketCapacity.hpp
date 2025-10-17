// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTCAPACITYSOCKETCAPACITIESSOCKETCAPACITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTCAPACITYSOCKETCAPACITIESSOCKETCAPACITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableMemory, availableMemory_);
      DARABONBA_PTR_TO_JSON(AvailableVcpu, availableVcpu_);
      DARABONBA_PTR_TO_JSON(SocketId, socketId_);
      DARABONBA_PTR_TO_JSON(TotalMemory, totalMemory_);
      DARABONBA_PTR_TO_JSON(TotalVcpu, totalVcpu_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableMemory, availableMemory_);
      DARABONBA_PTR_FROM_JSON(AvailableVcpu, availableVcpu_);
      DARABONBA_PTR_FROM_JSON(SocketId, socketId_);
      DARABONBA_PTR_FROM_JSON(TotalMemory, totalMemory_);
      DARABONBA_PTR_FROM_JSON(TotalVcpu, totalVcpu_);
    };
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity &&) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity& operator=(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity& operator=(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableMemory_ == nullptr
        && return this->availableVcpu_ == nullptr && return this->socketId_ == nullptr && return this->totalMemory_ == nullptr && return this->totalVcpu_ == nullptr; };
    // availableMemory Field Functions 
    bool hasAvailableMemory() const { return this->availableMemory_ != nullptr;};
    void deleteAvailableMemory() { this->availableMemory_ = nullptr;};
    inline float availableMemory() const { DARABONBA_PTR_GET_DEFAULT(availableMemory_, 0.0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity& setAvailableMemory(float availableMemory) { DARABONBA_PTR_SET_VALUE(availableMemory_, availableMemory) };


    // availableVcpu Field Functions 
    bool hasAvailableVcpu() const { return this->availableVcpu_ != nullptr;};
    void deleteAvailableVcpu() { this->availableVcpu_ = nullptr;};
    inline int32_t availableVcpu() const { DARABONBA_PTR_GET_DEFAULT(availableVcpu_, 0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity& setAvailableVcpu(int32_t availableVcpu) { DARABONBA_PTR_SET_VALUE(availableVcpu_, availableVcpu) };


    // socketId Field Functions 
    bool hasSocketId() const { return this->socketId_ != nullptr;};
    void deleteSocketId() { this->socketId_ = nullptr;};
    inline int32_t socketId() const { DARABONBA_PTR_GET_DEFAULT(socketId_, 0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity& setSocketId(int32_t socketId) { DARABONBA_PTR_SET_VALUE(socketId_, socketId) };


    // totalMemory Field Functions 
    bool hasTotalMemory() const { return this->totalMemory_ != nullptr;};
    void deleteTotalMemory() { this->totalMemory_ = nullptr;};
    inline float totalMemory() const { DARABONBA_PTR_GET_DEFAULT(totalMemory_, 0.0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity& setTotalMemory(float totalMemory) { DARABONBA_PTR_SET_VALUE(totalMemory_, totalMemory) };


    // totalVcpu Field Functions 
    bool hasTotalVcpu() const { return this->totalVcpu_ != nullptr;};
    void deleteTotalVcpu() { this->totalVcpu_ = nullptr;};
    inline int32_t totalVcpu() const { DARABONBA_PTR_GET_DEFAULT(totalVcpu_, 0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacitiesSocketCapacity& setTotalVcpu(int32_t totalVcpu) { DARABONBA_PTR_SET_VALUE(totalVcpu_, totalVcpu) };


  protected:
    // The amount of available memory. Unit: GiB.
    std::shared_ptr<float> availableMemory_ = nullptr;
    // The number of available vCPUs.
    std::shared_ptr<int32_t> availableVcpu_ = nullptr;
    // The socket ID.
    std::shared_ptr<int32_t> socketId_ = nullptr;
    // The total amount of memory. Unit: GiB.
    std::shared_ptr<float> totalMemory_ = nullptr;
    // The total number of vCPUs.
    std::shared_ptr<int32_t> totalVcpu_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
