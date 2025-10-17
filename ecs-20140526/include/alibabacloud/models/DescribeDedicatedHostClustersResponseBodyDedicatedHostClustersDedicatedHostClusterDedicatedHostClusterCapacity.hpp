// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTCLUSTERSRESPONSEBODYDEDICATEDHOSTCLUSTERSDEDICATEDHOSTCLUSTERDEDICATEDHOSTCLUSTERCAPACITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTCLUSTERSRESPONSEBODYDEDICATEDHOSTCLUSTERSDEDICATEDHOSTCLUSTERDEDICATEDHOSTCLUSTERCAPACITY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityAvailableInstanceTypes.hpp>
#include <alibabacloud/models/DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityLocalStorageCapacities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableInstanceTypes, availableInstanceTypes_);
      DARABONBA_PTR_TO_JSON(AvailableMemory, availableMemory_);
      DARABONBA_PTR_TO_JSON(AvailableVcpus, availableVcpus_);
      DARABONBA_PTR_TO_JSON(LocalStorageCapacities, localStorageCapacities_);
      DARABONBA_PTR_TO_JSON(TotalMemory, totalMemory_);
      DARABONBA_PTR_TO_JSON(TotalVcpus, totalVcpus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableInstanceTypes, availableInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(AvailableMemory, availableMemory_);
      DARABONBA_PTR_FROM_JSON(AvailableVcpus, availableVcpus_);
      DARABONBA_PTR_FROM_JSON(LocalStorageCapacities, localStorageCapacities_);
      DARABONBA_PTR_FROM_JSON(TotalMemory, totalMemory_);
      DARABONBA_PTR_FROM_JSON(TotalVcpus, totalVcpus_);
    };
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity() = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity(const DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity &) = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity(DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity &&) = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity() = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity& operator=(const DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity &) = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity& operator=(DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableInstanceTypes_ == nullptr
        && return this->availableMemory_ == nullptr && return this->availableVcpus_ == nullptr && return this->localStorageCapacities_ == nullptr && return this->totalMemory_ == nullptr && return this->totalVcpus_ == nullptr; };
    // availableInstanceTypes Field Functions 
    bool hasAvailableInstanceTypes() const { return this->availableInstanceTypes_ != nullptr;};
    void deleteAvailableInstanceTypes() { this->availableInstanceTypes_ = nullptr;};
    inline const Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityAvailableInstanceTypes & availableInstanceTypes() const { DARABONBA_PTR_GET_CONST(availableInstanceTypes_, Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityAvailableInstanceTypes) };
    inline Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityAvailableInstanceTypes availableInstanceTypes() { DARABONBA_PTR_GET(availableInstanceTypes_, Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityAvailableInstanceTypes) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity& setAvailableInstanceTypes(const Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityAvailableInstanceTypes & availableInstanceTypes) { DARABONBA_PTR_SET_VALUE(availableInstanceTypes_, availableInstanceTypes) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity& setAvailableInstanceTypes(Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityAvailableInstanceTypes && availableInstanceTypes) { DARABONBA_PTR_SET_RVALUE(availableInstanceTypes_, availableInstanceTypes) };


    // availableMemory Field Functions 
    bool hasAvailableMemory() const { return this->availableMemory_ != nullptr;};
    void deleteAvailableMemory() { this->availableMemory_ = nullptr;};
    inline int32_t availableMemory() const { DARABONBA_PTR_GET_DEFAULT(availableMemory_, 0) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity& setAvailableMemory(int32_t availableMemory) { DARABONBA_PTR_SET_VALUE(availableMemory_, availableMemory) };


    // availableVcpus Field Functions 
    bool hasAvailableVcpus() const { return this->availableVcpus_ != nullptr;};
    void deleteAvailableVcpus() { this->availableVcpus_ = nullptr;};
    inline int32_t availableVcpus() const { DARABONBA_PTR_GET_DEFAULT(availableVcpus_, 0) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity& setAvailableVcpus(int32_t availableVcpus) { DARABONBA_PTR_SET_VALUE(availableVcpus_, availableVcpus) };


    // localStorageCapacities Field Functions 
    bool hasLocalStorageCapacities() const { return this->localStorageCapacities_ != nullptr;};
    void deleteLocalStorageCapacities() { this->localStorageCapacities_ = nullptr;};
    inline const Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityLocalStorageCapacities & localStorageCapacities() const { DARABONBA_PTR_GET_CONST(localStorageCapacities_, Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityLocalStorageCapacities) };
    inline Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityLocalStorageCapacities localStorageCapacities() { DARABONBA_PTR_GET(localStorageCapacities_, Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityLocalStorageCapacities) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity& setLocalStorageCapacities(const Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityLocalStorageCapacities & localStorageCapacities) { DARABONBA_PTR_SET_VALUE(localStorageCapacities_, localStorageCapacities) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity& setLocalStorageCapacities(Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityLocalStorageCapacities && localStorageCapacities) { DARABONBA_PTR_SET_RVALUE(localStorageCapacities_, localStorageCapacities) };


    // totalMemory Field Functions 
    bool hasTotalMemory() const { return this->totalMemory_ != nullptr;};
    void deleteTotalMemory() { this->totalMemory_ = nullptr;};
    inline int32_t totalMemory() const { DARABONBA_PTR_GET_DEFAULT(totalMemory_, 0) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity& setTotalMemory(int32_t totalMemory) { DARABONBA_PTR_SET_VALUE(totalMemory_, totalMemory) };


    // totalVcpus Field Functions 
    bool hasTotalVcpus() const { return this->totalVcpus_ != nullptr;};
    void deleteTotalVcpus() { this->totalVcpus_ = nullptr;};
    inline int32_t totalVcpus() const { DARABONBA_PTR_GET_DEFAULT(totalVcpus_, 0) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacity& setTotalVcpus(int32_t totalVcpus) { DARABONBA_PTR_SET_VALUE(totalVcpus_, totalVcpus) };


  protected:
    // The available capacity of ECS instances in the host group.
    std::shared_ptr<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityAvailableInstanceTypes> availableInstanceTypes_ = nullptr;
    // The size of available memory. Unit: GiB
    std::shared_ptr<int32_t> availableMemory_ = nullptr;
    // The number of available vCPUs.
    std::shared_ptr<int32_t> availableVcpus_ = nullptr;
    // The local storage capacity.
    std::shared_ptr<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterDedicatedHostClusterCapacityLocalStorageCapacities> localStorageCapacities_ = nullptr;
    // The total memory size. Unit: GiB
    std::shared_ptr<int32_t> totalMemory_ = nullptr;
    // The total number of vCPUs.
    std::shared_ptr<int32_t> totalVcpus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
