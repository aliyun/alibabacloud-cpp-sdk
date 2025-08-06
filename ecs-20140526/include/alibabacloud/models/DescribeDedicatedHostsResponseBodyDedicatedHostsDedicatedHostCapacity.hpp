// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTCAPACITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTCAPACITY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacityAvailableInstanceTypes.hpp>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableInstanceTypes, availableInstanceTypes_);
      DARABONBA_PTR_TO_JSON(AvailableLocalStorage, availableLocalStorage_);
      DARABONBA_PTR_TO_JSON(AvailableMemory, availableMemory_);
      DARABONBA_PTR_TO_JSON(AvailableVcpus, availableVcpus_);
      DARABONBA_PTR_TO_JSON(AvailableVgpus, availableVgpus_);
      DARABONBA_PTR_TO_JSON(LocalStorageCategory, localStorageCategory_);
      DARABONBA_PTR_TO_JSON(SocketCapacities, socketCapacities_);
      DARABONBA_PTR_TO_JSON(TotalLocalStorage, totalLocalStorage_);
      DARABONBA_PTR_TO_JSON(TotalMemory, totalMemory_);
      DARABONBA_PTR_TO_JSON(TotalVcpus, totalVcpus_);
      DARABONBA_PTR_TO_JSON(TotalVgpus, totalVgpus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableInstanceTypes, availableInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(AvailableLocalStorage, availableLocalStorage_);
      DARABONBA_PTR_FROM_JSON(AvailableMemory, availableMemory_);
      DARABONBA_PTR_FROM_JSON(AvailableVcpus, availableVcpus_);
      DARABONBA_PTR_FROM_JSON(AvailableVgpus, availableVgpus_);
      DARABONBA_PTR_FROM_JSON(LocalStorageCategory, localStorageCategory_);
      DARABONBA_PTR_FROM_JSON(SocketCapacities, socketCapacities_);
      DARABONBA_PTR_FROM_JSON(TotalLocalStorage, totalLocalStorage_);
      DARABONBA_PTR_FROM_JSON(TotalMemory, totalMemory_);
      DARABONBA_PTR_FROM_JSON(TotalVcpus, totalVcpus_);
      DARABONBA_PTR_FROM_JSON(TotalVgpus, totalVgpus_);
    };
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity &&) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& operator=(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& operator=(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableInstanceTypes_ != nullptr
        && this->availableLocalStorage_ != nullptr && this->availableMemory_ != nullptr && this->availableVcpus_ != nullptr && this->availableVgpus_ != nullptr && this->localStorageCategory_ != nullptr
        && this->socketCapacities_ != nullptr && this->totalLocalStorage_ != nullptr && this->totalMemory_ != nullptr && this->totalVcpus_ != nullptr && this->totalVgpus_ != nullptr; };
    // availableInstanceTypes Field Functions 
    bool hasAvailableInstanceTypes() const { return this->availableInstanceTypes_ != nullptr;};
    void deleteAvailableInstanceTypes() { this->availableInstanceTypes_ = nullptr;};
    inline const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacityAvailableInstanceTypes & availableInstanceTypes() const { DARABONBA_PTR_GET_CONST(availableInstanceTypes_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacityAvailableInstanceTypes) };
    inline Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacityAvailableInstanceTypes availableInstanceTypes() { DARABONBA_PTR_GET(availableInstanceTypes_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacityAvailableInstanceTypes) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& setAvailableInstanceTypes(const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacityAvailableInstanceTypes & availableInstanceTypes) { DARABONBA_PTR_SET_VALUE(availableInstanceTypes_, availableInstanceTypes) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& setAvailableInstanceTypes(Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacityAvailableInstanceTypes && availableInstanceTypes) { DARABONBA_PTR_SET_RVALUE(availableInstanceTypes_, availableInstanceTypes) };


    // availableLocalStorage Field Functions 
    bool hasAvailableLocalStorage() const { return this->availableLocalStorage_ != nullptr;};
    void deleteAvailableLocalStorage() { this->availableLocalStorage_ = nullptr;};
    inline int32_t availableLocalStorage() const { DARABONBA_PTR_GET_DEFAULT(availableLocalStorage_, 0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& setAvailableLocalStorage(int32_t availableLocalStorage) { DARABONBA_PTR_SET_VALUE(availableLocalStorage_, availableLocalStorage) };


    // availableMemory Field Functions 
    bool hasAvailableMemory() const { return this->availableMemory_ != nullptr;};
    void deleteAvailableMemory() { this->availableMemory_ = nullptr;};
    inline float availableMemory() const { DARABONBA_PTR_GET_DEFAULT(availableMemory_, 0.0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& setAvailableMemory(float availableMemory) { DARABONBA_PTR_SET_VALUE(availableMemory_, availableMemory) };


    // availableVcpus Field Functions 
    bool hasAvailableVcpus() const { return this->availableVcpus_ != nullptr;};
    void deleteAvailableVcpus() { this->availableVcpus_ = nullptr;};
    inline int32_t availableVcpus() const { DARABONBA_PTR_GET_DEFAULT(availableVcpus_, 0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& setAvailableVcpus(int32_t availableVcpus) { DARABONBA_PTR_SET_VALUE(availableVcpus_, availableVcpus) };


    // availableVgpus Field Functions 
    bool hasAvailableVgpus() const { return this->availableVgpus_ != nullptr;};
    void deleteAvailableVgpus() { this->availableVgpus_ = nullptr;};
    inline int32_t availableVgpus() const { DARABONBA_PTR_GET_DEFAULT(availableVgpus_, 0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& setAvailableVgpus(int32_t availableVgpus) { DARABONBA_PTR_SET_VALUE(availableVgpus_, availableVgpus) };


    // localStorageCategory Field Functions 
    bool hasLocalStorageCategory() const { return this->localStorageCategory_ != nullptr;};
    void deleteLocalStorageCategory() { this->localStorageCategory_ = nullptr;};
    inline string localStorageCategory() const { DARABONBA_PTR_GET_DEFAULT(localStorageCategory_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& setLocalStorageCategory(string localStorageCategory) { DARABONBA_PTR_SET_VALUE(localStorageCategory_, localStorageCategory) };


    // socketCapacities Field Functions 
    bool hasSocketCapacities() const { return this->socketCapacities_ != nullptr;};
    void deleteSocketCapacities() { this->socketCapacities_ = nullptr;};
    inline const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities & socketCapacities() const { DARABONBA_PTR_GET_CONST(socketCapacities_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities) };
    inline Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities socketCapacities() { DARABONBA_PTR_GET(socketCapacities_, Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& setSocketCapacities(const Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities & socketCapacities) { DARABONBA_PTR_SET_VALUE(socketCapacities_, socketCapacities) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& setSocketCapacities(Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities && socketCapacities) { DARABONBA_PTR_SET_RVALUE(socketCapacities_, socketCapacities) };


    // totalLocalStorage Field Functions 
    bool hasTotalLocalStorage() const { return this->totalLocalStorage_ != nullptr;};
    void deleteTotalLocalStorage() { this->totalLocalStorage_ = nullptr;};
    inline int32_t totalLocalStorage() const { DARABONBA_PTR_GET_DEFAULT(totalLocalStorage_, 0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& setTotalLocalStorage(int32_t totalLocalStorage) { DARABONBA_PTR_SET_VALUE(totalLocalStorage_, totalLocalStorage) };


    // totalMemory Field Functions 
    bool hasTotalMemory() const { return this->totalMemory_ != nullptr;};
    void deleteTotalMemory() { this->totalMemory_ = nullptr;};
    inline float totalMemory() const { DARABONBA_PTR_GET_DEFAULT(totalMemory_, 0.0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& setTotalMemory(float totalMemory) { DARABONBA_PTR_SET_VALUE(totalMemory_, totalMemory) };


    // totalVcpus Field Functions 
    bool hasTotalVcpus() const { return this->totalVcpus_ != nullptr;};
    void deleteTotalVcpus() { this->totalVcpus_ = nullptr;};
    inline int32_t totalVcpus() const { DARABONBA_PTR_GET_DEFAULT(totalVcpus_, 0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& setTotalVcpus(int32_t totalVcpus) { DARABONBA_PTR_SET_VALUE(totalVcpus_, totalVcpus) };


    // totalVgpus Field Functions 
    bool hasTotalVgpus() const { return this->totalVgpus_ != nullptr;};
    void deleteTotalVgpus() { this->totalVgpus_ = nullptr;};
    inline int32_t totalVgpus() const { DARABONBA_PTR_GET_DEFAULT(totalVgpus_, 0) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacity& setTotalVgpus(int32_t totalVgpus) { DARABONBA_PTR_SET_VALUE(totalVgpus_, totalVgpus) };


  protected:
    std::shared_ptr<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacityAvailableInstanceTypes> availableInstanceTypes_ = nullptr;
    // The amount of available space on the local disks. Unit: GiB
    std::shared_ptr<int32_t> availableLocalStorage_ = nullptr;
    // The amount of available memory. Unit: GiB.
    std::shared_ptr<float> availableMemory_ = nullptr;
    // The number of available vCPUs.
    std::shared_ptr<int32_t> availableVcpus_ = nullptr;
    // The number of available vGPUs.
    std::shared_ptr<int32_t> availableVgpus_ = nullptr;
    // The category of local disks.
    std::shared_ptr<string> localStorageCategory_ = nullptr;
    // The socket capacities.
    std::shared_ptr<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostCapacitySocketCapacities> socketCapacities_ = nullptr;
    // The total capacity of local disks. Unit: GiB.
    std::shared_ptr<int32_t> totalLocalStorage_ = nullptr;
    // The total amount of memory. Unit: GiB.
    std::shared_ptr<float> totalMemory_ = nullptr;
    // The total number of vCPUs.
    std::shared_ptr<int32_t> totalVcpus_ = nullptr;
    // The total number of vGPUs.
    std::shared_ptr<int32_t> totalVgpus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
