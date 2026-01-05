// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostTypes, dedicatedHostTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostTypes, dedicatedHostTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDedicatedHostTypesResponseBody() = default ;
    DescribeDedicatedHostTypesResponseBody(const DescribeDedicatedHostTypesResponseBody &) = default ;
    DescribeDedicatedHostTypesResponseBody(DescribeDedicatedHostTypesResponseBody &&) = default ;
    DescribeDedicatedHostTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostTypesResponseBody() = default ;
    DescribeDedicatedHostTypesResponseBody& operator=(const DescribeDedicatedHostTypesResponseBody &) = default ;
    DescribeDedicatedHostTypesResponseBody& operator=(DescribeDedicatedHostTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DedicatedHostTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DedicatedHostTypes& obj) { 
        DARABONBA_PTR_TO_JSON(DedicatedHostType, dedicatedHostType_);
      };
      friend void from_json(const Darabonba::Json& j, DedicatedHostTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(DedicatedHostType, dedicatedHostType_);
      };
      DedicatedHostTypes() = default ;
      DedicatedHostTypes(const DedicatedHostTypes &) = default ;
      DedicatedHostTypes(DedicatedHostTypes &&) = default ;
      DedicatedHostTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DedicatedHostTypes() = default ;
      DedicatedHostTypes& operator=(const DedicatedHostTypes &) = default ;
      DedicatedHostTypes& operator=(DedicatedHostTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DedicatedHostType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DedicatedHostType& obj) { 
          DARABONBA_PTR_TO_JSON(Cores, cores_);
          DARABONBA_PTR_TO_JSON(CpuOverCommitRatioRange, cpuOverCommitRatioRange_);
          DARABONBA_PTR_TO_JSON(DedicatedHostType, dedicatedHostType_);
          DARABONBA_PTR_TO_JSON(GPUSpec, GPUSpec_);
          DARABONBA_PTR_TO_JSON(LocalStorageAmount, localStorageAmount_);
          DARABONBA_PTR_TO_JSON(LocalStorageCapacity, localStorageCapacity_);
          DARABONBA_PTR_TO_JSON(LocalStorageCategory, localStorageCategory_);
          DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
          DARABONBA_PTR_TO_JSON(PhysicalGpus, physicalGpus_);
          DARABONBA_PTR_TO_JSON(Sockets, sockets_);
          DARABONBA_PTR_TO_JSON(SupportCpuOverCommitRatio, supportCpuOverCommitRatio_);
          DARABONBA_PTR_TO_JSON(SupportedInstanceTypeFamilies, supportedInstanceTypeFamilies_);
          DARABONBA_PTR_TO_JSON(SupportedInstanceTypesList, supportedInstanceTypesList_);
          DARABONBA_PTR_TO_JSON(TotalVcpus, totalVcpus_);
          DARABONBA_PTR_TO_JSON(TotalVgpus, totalVgpus_);
        };
        friend void from_json(const Darabonba::Json& j, DedicatedHostType& obj) { 
          DARABONBA_PTR_FROM_JSON(Cores, cores_);
          DARABONBA_PTR_FROM_JSON(CpuOverCommitRatioRange, cpuOverCommitRatioRange_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostType, dedicatedHostType_);
          DARABONBA_PTR_FROM_JSON(GPUSpec, GPUSpec_);
          DARABONBA_PTR_FROM_JSON(LocalStorageAmount, localStorageAmount_);
          DARABONBA_PTR_FROM_JSON(LocalStorageCapacity, localStorageCapacity_);
          DARABONBA_PTR_FROM_JSON(LocalStorageCategory, localStorageCategory_);
          DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
          DARABONBA_PTR_FROM_JSON(PhysicalGpus, physicalGpus_);
          DARABONBA_PTR_FROM_JSON(Sockets, sockets_);
          DARABONBA_PTR_FROM_JSON(SupportCpuOverCommitRatio, supportCpuOverCommitRatio_);
          DARABONBA_PTR_FROM_JSON(SupportedInstanceTypeFamilies, supportedInstanceTypeFamilies_);
          DARABONBA_PTR_FROM_JSON(SupportedInstanceTypesList, supportedInstanceTypesList_);
          DARABONBA_PTR_FROM_JSON(TotalVcpus, totalVcpus_);
          DARABONBA_PTR_FROM_JSON(TotalVgpus, totalVgpus_);
        };
        DedicatedHostType() = default ;
        DedicatedHostType(const DedicatedHostType &) = default ;
        DedicatedHostType(DedicatedHostType &&) = default ;
        DedicatedHostType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DedicatedHostType() = default ;
        DedicatedHostType& operator=(const DedicatedHostType &) = default ;
        DedicatedHostType& operator=(DedicatedHostType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SupportedInstanceTypesList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SupportedInstanceTypesList& obj) { 
            DARABONBA_PTR_TO_JSON(SupportedInstanceTypesList, supportedInstanceTypesList_);
          };
          friend void from_json(const Darabonba::Json& j, SupportedInstanceTypesList& obj) { 
            DARABONBA_PTR_FROM_JSON(SupportedInstanceTypesList, supportedInstanceTypesList_);
          };
          SupportedInstanceTypesList() = default ;
          SupportedInstanceTypesList(const SupportedInstanceTypesList &) = default ;
          SupportedInstanceTypesList(SupportedInstanceTypesList &&) = default ;
          SupportedInstanceTypesList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SupportedInstanceTypesList() = default ;
          SupportedInstanceTypesList& operator=(const SupportedInstanceTypesList &) = default ;
          SupportedInstanceTypesList& operator=(SupportedInstanceTypesList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->supportedInstanceTypesList_ == nullptr; };
          // supportedInstanceTypesList Field Functions 
          bool hasSupportedInstanceTypesList() const { return this->supportedInstanceTypesList_ != nullptr;};
          void deleteSupportedInstanceTypesList() { this->supportedInstanceTypesList_ = nullptr;};
          inline const vector<string> & getSupportedInstanceTypesList() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypesList_, vector<string>) };
          inline vector<string> getSupportedInstanceTypesList() { DARABONBA_PTR_GET(supportedInstanceTypesList_, vector<string>) };
          inline SupportedInstanceTypesList& setSupportedInstanceTypesList(const vector<string> & supportedInstanceTypesList) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypesList_, supportedInstanceTypesList) };
          inline SupportedInstanceTypesList& setSupportedInstanceTypesList(vector<string> && supportedInstanceTypesList) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypesList_, supportedInstanceTypesList) };


        protected:
          shared_ptr<vector<string>> supportedInstanceTypesList_ {};
        };

        class SupportedInstanceTypeFamilies : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SupportedInstanceTypeFamilies& obj) { 
            DARABONBA_PTR_TO_JSON(SupportedInstanceTypeFamily, supportedInstanceTypeFamily_);
          };
          friend void from_json(const Darabonba::Json& j, SupportedInstanceTypeFamilies& obj) { 
            DARABONBA_PTR_FROM_JSON(SupportedInstanceTypeFamily, supportedInstanceTypeFamily_);
          };
          SupportedInstanceTypeFamilies() = default ;
          SupportedInstanceTypeFamilies(const SupportedInstanceTypeFamilies &) = default ;
          SupportedInstanceTypeFamilies(SupportedInstanceTypeFamilies &&) = default ;
          SupportedInstanceTypeFamilies(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SupportedInstanceTypeFamilies() = default ;
          SupportedInstanceTypeFamilies& operator=(const SupportedInstanceTypeFamilies &) = default ;
          SupportedInstanceTypeFamilies& operator=(SupportedInstanceTypeFamilies &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->supportedInstanceTypeFamily_ == nullptr; };
          // supportedInstanceTypeFamily Field Functions 
          bool hasSupportedInstanceTypeFamily() const { return this->supportedInstanceTypeFamily_ != nullptr;};
          void deleteSupportedInstanceTypeFamily() { this->supportedInstanceTypeFamily_ = nullptr;};
          inline const vector<string> & getSupportedInstanceTypeFamily() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypeFamily_, vector<string>) };
          inline vector<string> getSupportedInstanceTypeFamily() { DARABONBA_PTR_GET(supportedInstanceTypeFamily_, vector<string>) };
          inline SupportedInstanceTypeFamilies& setSupportedInstanceTypeFamily(const vector<string> & supportedInstanceTypeFamily) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypeFamily_, supportedInstanceTypeFamily) };
          inline SupportedInstanceTypeFamilies& setSupportedInstanceTypeFamily(vector<string> && supportedInstanceTypeFamily) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypeFamily_, supportedInstanceTypeFamily) };


        protected:
          shared_ptr<vector<string>> supportedInstanceTypeFamily_ {};
        };

        virtual bool empty() const override { return this->cores_ == nullptr
        && this->cpuOverCommitRatioRange_ == nullptr && this->dedicatedHostType_ == nullptr && this->GPUSpec_ == nullptr && this->localStorageAmount_ == nullptr && this->localStorageCapacity_ == nullptr
        && this->localStorageCategory_ == nullptr && this->memorySize_ == nullptr && this->physicalGpus_ == nullptr && this->sockets_ == nullptr && this->supportCpuOverCommitRatio_ == nullptr
        && this->supportedInstanceTypeFamilies_ == nullptr && this->supportedInstanceTypesList_ == nullptr && this->totalVcpus_ == nullptr && this->totalVgpus_ == nullptr; };
        // cores Field Functions 
        bool hasCores() const { return this->cores_ != nullptr;};
        void deleteCores() { this->cores_ = nullptr;};
        inline int32_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
        inline DedicatedHostType& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


        // cpuOverCommitRatioRange Field Functions 
        bool hasCpuOverCommitRatioRange() const { return this->cpuOverCommitRatioRange_ != nullptr;};
        void deleteCpuOverCommitRatioRange() { this->cpuOverCommitRatioRange_ = nullptr;};
        inline string getCpuOverCommitRatioRange() const { DARABONBA_PTR_GET_DEFAULT(cpuOverCommitRatioRange_, "") };
        inline DedicatedHostType& setCpuOverCommitRatioRange(string cpuOverCommitRatioRange) { DARABONBA_PTR_SET_VALUE(cpuOverCommitRatioRange_, cpuOverCommitRatioRange) };


        // dedicatedHostType Field Functions 
        bool hasDedicatedHostType() const { return this->dedicatedHostType_ != nullptr;};
        void deleteDedicatedHostType() { this->dedicatedHostType_ = nullptr;};
        inline string getDedicatedHostType() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostType_, "") };
        inline DedicatedHostType& setDedicatedHostType(string dedicatedHostType) { DARABONBA_PTR_SET_VALUE(dedicatedHostType_, dedicatedHostType) };


        // GPUSpec Field Functions 
        bool hasGPUSpec() const { return this->GPUSpec_ != nullptr;};
        void deleteGPUSpec() { this->GPUSpec_ = nullptr;};
        inline string getGPUSpec() const { DARABONBA_PTR_GET_DEFAULT(GPUSpec_, "") };
        inline DedicatedHostType& setGPUSpec(string GPUSpec) { DARABONBA_PTR_SET_VALUE(GPUSpec_, GPUSpec) };


        // localStorageAmount Field Functions 
        bool hasLocalStorageAmount() const { return this->localStorageAmount_ != nullptr;};
        void deleteLocalStorageAmount() { this->localStorageAmount_ = nullptr;};
        inline int32_t getLocalStorageAmount() const { DARABONBA_PTR_GET_DEFAULT(localStorageAmount_, 0) };
        inline DedicatedHostType& setLocalStorageAmount(int32_t localStorageAmount) { DARABONBA_PTR_SET_VALUE(localStorageAmount_, localStorageAmount) };


        // localStorageCapacity Field Functions 
        bool hasLocalStorageCapacity() const { return this->localStorageCapacity_ != nullptr;};
        void deleteLocalStorageCapacity() { this->localStorageCapacity_ = nullptr;};
        inline int64_t getLocalStorageCapacity() const { DARABONBA_PTR_GET_DEFAULT(localStorageCapacity_, 0L) };
        inline DedicatedHostType& setLocalStorageCapacity(int64_t localStorageCapacity) { DARABONBA_PTR_SET_VALUE(localStorageCapacity_, localStorageCapacity) };


        // localStorageCategory Field Functions 
        bool hasLocalStorageCategory() const { return this->localStorageCategory_ != nullptr;};
        void deleteLocalStorageCategory() { this->localStorageCategory_ = nullptr;};
        inline string getLocalStorageCategory() const { DARABONBA_PTR_GET_DEFAULT(localStorageCategory_, "") };
        inline DedicatedHostType& setLocalStorageCategory(string localStorageCategory) { DARABONBA_PTR_SET_VALUE(localStorageCategory_, localStorageCategory) };


        // memorySize Field Functions 
        bool hasMemorySize() const { return this->memorySize_ != nullptr;};
        void deleteMemorySize() { this->memorySize_ = nullptr;};
        inline float getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0.0) };
        inline DedicatedHostType& setMemorySize(float memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


        // physicalGpus Field Functions 
        bool hasPhysicalGpus() const { return this->physicalGpus_ != nullptr;};
        void deletePhysicalGpus() { this->physicalGpus_ = nullptr;};
        inline int32_t getPhysicalGpus() const { DARABONBA_PTR_GET_DEFAULT(physicalGpus_, 0) };
        inline DedicatedHostType& setPhysicalGpus(int32_t physicalGpus) { DARABONBA_PTR_SET_VALUE(physicalGpus_, physicalGpus) };


        // sockets Field Functions 
        bool hasSockets() const { return this->sockets_ != nullptr;};
        void deleteSockets() { this->sockets_ = nullptr;};
        inline int32_t getSockets() const { DARABONBA_PTR_GET_DEFAULT(sockets_, 0) };
        inline DedicatedHostType& setSockets(int32_t sockets) { DARABONBA_PTR_SET_VALUE(sockets_, sockets) };


        // supportCpuOverCommitRatio Field Functions 
        bool hasSupportCpuOverCommitRatio() const { return this->supportCpuOverCommitRatio_ != nullptr;};
        void deleteSupportCpuOverCommitRatio() { this->supportCpuOverCommitRatio_ = nullptr;};
        inline bool getSupportCpuOverCommitRatio() const { DARABONBA_PTR_GET_DEFAULT(supportCpuOverCommitRatio_, false) };
        inline DedicatedHostType& setSupportCpuOverCommitRatio(bool supportCpuOverCommitRatio) { DARABONBA_PTR_SET_VALUE(supportCpuOverCommitRatio_, supportCpuOverCommitRatio) };


        // supportedInstanceTypeFamilies Field Functions 
        bool hasSupportedInstanceTypeFamilies() const { return this->supportedInstanceTypeFamilies_ != nullptr;};
        void deleteSupportedInstanceTypeFamilies() { this->supportedInstanceTypeFamilies_ = nullptr;};
        inline const DedicatedHostType::SupportedInstanceTypeFamilies & getSupportedInstanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypeFamilies_, DedicatedHostType::SupportedInstanceTypeFamilies) };
        inline DedicatedHostType::SupportedInstanceTypeFamilies getSupportedInstanceTypeFamilies() { DARABONBA_PTR_GET(supportedInstanceTypeFamilies_, DedicatedHostType::SupportedInstanceTypeFamilies) };
        inline DedicatedHostType& setSupportedInstanceTypeFamilies(const DedicatedHostType::SupportedInstanceTypeFamilies & supportedInstanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypeFamilies_, supportedInstanceTypeFamilies) };
        inline DedicatedHostType& setSupportedInstanceTypeFamilies(DedicatedHostType::SupportedInstanceTypeFamilies && supportedInstanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypeFamilies_, supportedInstanceTypeFamilies) };


        // supportedInstanceTypesList Field Functions 
        bool hasSupportedInstanceTypesList() const { return this->supportedInstanceTypesList_ != nullptr;};
        void deleteSupportedInstanceTypesList() { this->supportedInstanceTypesList_ = nullptr;};
        inline const DedicatedHostType::SupportedInstanceTypesList & getSupportedInstanceTypesList() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypesList_, DedicatedHostType::SupportedInstanceTypesList) };
        inline DedicatedHostType::SupportedInstanceTypesList getSupportedInstanceTypesList() { DARABONBA_PTR_GET(supportedInstanceTypesList_, DedicatedHostType::SupportedInstanceTypesList) };
        inline DedicatedHostType& setSupportedInstanceTypesList(const DedicatedHostType::SupportedInstanceTypesList & supportedInstanceTypesList) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypesList_, supportedInstanceTypesList) };
        inline DedicatedHostType& setSupportedInstanceTypesList(DedicatedHostType::SupportedInstanceTypesList && supportedInstanceTypesList) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypesList_, supportedInstanceTypesList) };


        // totalVcpus Field Functions 
        bool hasTotalVcpus() const { return this->totalVcpus_ != nullptr;};
        void deleteTotalVcpus() { this->totalVcpus_ = nullptr;};
        inline int32_t getTotalVcpus() const { DARABONBA_PTR_GET_DEFAULT(totalVcpus_, 0) };
        inline DedicatedHostType& setTotalVcpus(int32_t totalVcpus) { DARABONBA_PTR_SET_VALUE(totalVcpus_, totalVcpus) };


        // totalVgpus Field Functions 
        bool hasTotalVgpus() const { return this->totalVgpus_ != nullptr;};
        void deleteTotalVgpus() { this->totalVgpus_ = nullptr;};
        inline int32_t getTotalVgpus() const { DARABONBA_PTR_GET_DEFAULT(totalVgpus_, 0) };
        inline DedicatedHostType& setTotalVgpus(int32_t totalVgpus) { DARABONBA_PTR_SET_VALUE(totalVgpus_, totalVgpus) };


      protected:
        // The number of cores per physical CPU.
        shared_ptr<int32_t> cores_ {};
        // The supported CPU overcommit ratio range.
        shared_ptr<string> cpuOverCommitRatioRange_ {};
        // The dedicated host type.
        shared_ptr<string> dedicatedHostType_ {};
        // The GPU model.
        shared_ptr<string> GPUSpec_ {};
        // The number of local disks on a dedicated host.
        shared_ptr<int32_t> localStorageAmount_ {};
        // The capacity of a local disk. Unit: GiB.
        shared_ptr<int64_t> localStorageCapacity_ {};
        // The category of local disks.
        shared_ptr<string> localStorageCategory_ {};
        // The memory size. Unit: GiB.
        shared_ptr<float> memorySize_ {};
        // The number of physical GPUs.
        shared_ptr<int32_t> physicalGpus_ {};
        // The number of physical CPUs.
        shared_ptr<int32_t> sockets_ {};
        // Indicates whether the CPU overcommit ratio settings are supported.
        shared_ptr<bool> supportCpuOverCommitRatio_ {};
        // The ECS instance families supported by the dedicated host type.
        shared_ptr<DedicatedHostType::SupportedInstanceTypeFamilies> supportedInstanceTypeFamilies_ {};
        // The ECS instance types supported by the dedicated host type.
        shared_ptr<DedicatedHostType::SupportedInstanceTypesList> supportedInstanceTypesList_ {};
        // The total number of vCPUs.
        shared_ptr<int32_t> totalVcpus_ {};
        // The total number of vGPUs.
        shared_ptr<int32_t> totalVgpus_ {};
      };

      virtual bool empty() const override { return this->dedicatedHostType_ == nullptr; };
      // dedicatedHostType Field Functions 
      bool hasDedicatedHostType() const { return this->dedicatedHostType_ != nullptr;};
      void deleteDedicatedHostType() { this->dedicatedHostType_ = nullptr;};
      inline const vector<DedicatedHostTypes::DedicatedHostType> & getDedicatedHostType() const { DARABONBA_PTR_GET_CONST(dedicatedHostType_, vector<DedicatedHostTypes::DedicatedHostType>) };
      inline vector<DedicatedHostTypes::DedicatedHostType> getDedicatedHostType() { DARABONBA_PTR_GET(dedicatedHostType_, vector<DedicatedHostTypes::DedicatedHostType>) };
      inline DedicatedHostTypes& setDedicatedHostType(const vector<DedicatedHostTypes::DedicatedHostType> & dedicatedHostType) { DARABONBA_PTR_SET_VALUE(dedicatedHostType_, dedicatedHostType) };
      inline DedicatedHostTypes& setDedicatedHostType(vector<DedicatedHostTypes::DedicatedHostType> && dedicatedHostType) { DARABONBA_PTR_SET_RVALUE(dedicatedHostType_, dedicatedHostType) };


    protected:
      shared_ptr<vector<DedicatedHostTypes::DedicatedHostType>> dedicatedHostType_ {};
    };

    virtual bool empty() const override { return this->dedicatedHostTypes_ == nullptr
        && this->requestId_ == nullptr; };
    // dedicatedHostTypes Field Functions 
    bool hasDedicatedHostTypes() const { return this->dedicatedHostTypes_ != nullptr;};
    void deleteDedicatedHostTypes() { this->dedicatedHostTypes_ = nullptr;};
    inline const DescribeDedicatedHostTypesResponseBody::DedicatedHostTypes & getDedicatedHostTypes() const { DARABONBA_PTR_GET_CONST(dedicatedHostTypes_, DescribeDedicatedHostTypesResponseBody::DedicatedHostTypes) };
    inline DescribeDedicatedHostTypesResponseBody::DedicatedHostTypes getDedicatedHostTypes() { DARABONBA_PTR_GET(dedicatedHostTypes_, DescribeDedicatedHostTypesResponseBody::DedicatedHostTypes) };
    inline DescribeDedicatedHostTypesResponseBody& setDedicatedHostTypes(const DescribeDedicatedHostTypesResponseBody::DedicatedHostTypes & dedicatedHostTypes) { DARABONBA_PTR_SET_VALUE(dedicatedHostTypes_, dedicatedHostTypes) };
    inline DescribeDedicatedHostTypesResponseBody& setDedicatedHostTypes(DescribeDedicatedHostTypesResponseBody::DedicatedHostTypes && dedicatedHostTypes) { DARABONBA_PTR_SET_RVALUE(dedicatedHostTypes_, dedicatedHostTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedHostTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the dedicated host types.
    shared_ptr<DescribeDedicatedHostTypesResponseBody::DedicatedHostTypes> dedicatedHostTypes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
