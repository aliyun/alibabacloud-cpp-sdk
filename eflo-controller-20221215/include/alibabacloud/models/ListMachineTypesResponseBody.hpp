// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMACHINETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMACHINETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListMachineTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMachineTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMachineTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMachineTypesResponseBody() = default ;
    ListMachineTypesResponseBody(const ListMachineTypesResponseBody &) = default ;
    ListMachineTypesResponseBody(ListMachineTypesResponseBody &&) = default ;
    ListMachineTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMachineTypesResponseBody() = default ;
    ListMachineTypesResponseBody& operator=(const ListMachineTypesResponseBody &) = default ;
    ListMachineTypesResponseBody& operator=(ListMachineTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MachineTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MachineTypes& obj) { 
        DARABONBA_PTR_TO_JSON(BondNum, bondNum_);
        DARABONBA_PTR_TO_JSON(CpuInfo, cpuInfo_);
        DARABONBA_PTR_TO_JSON(CpuInfoDetail, cpuInfoDetail_);
        DARABONBA_PTR_TO_JSON(DiskInfo, diskInfo_);
        DARABONBA_PTR_TO_JSON(DiskInfoDetail, diskInfoDetail_);
        DARABONBA_PTR_TO_JSON(FrontendNetworkDetail, frontendNetworkDetail_);
        DARABONBA_PTR_TO_JSON(GpuInfo, gpuInfo_);
        DARABONBA_PTR_TO_JSON(GpuInfoDetail, gpuInfoDetail_);
        DARABONBA_PTR_TO_JSON(MemoryInfo, memoryInfo_);
        DARABONBA_PTR_TO_JSON(MemoryInfoDetail, memoryInfoDetail_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NetworkInfo, networkInfo_);
        DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
        DARABONBA_PTR_TO_JSON(RdmaInfoDetail, rdmaInfoDetail_);
        DARABONBA_PTR_TO_JSON(TotalCpuCore, totalCpuCore_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, MachineTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(BondNum, bondNum_);
        DARABONBA_PTR_FROM_JSON(CpuInfo, cpuInfo_);
        DARABONBA_PTR_FROM_JSON(CpuInfoDetail, cpuInfoDetail_);
        DARABONBA_PTR_FROM_JSON(DiskInfo, diskInfo_);
        DARABONBA_PTR_FROM_JSON(DiskInfoDetail, diskInfoDetail_);
        DARABONBA_PTR_FROM_JSON(FrontendNetworkDetail, frontendNetworkDetail_);
        DARABONBA_PTR_FROM_JSON(GpuInfo, gpuInfo_);
        DARABONBA_PTR_FROM_JSON(GpuInfoDetail, gpuInfoDetail_);
        DARABONBA_PTR_FROM_JSON(MemoryInfo, memoryInfo_);
        DARABONBA_PTR_FROM_JSON(MemoryInfoDetail, memoryInfoDetail_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NetworkInfo, networkInfo_);
        DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
        DARABONBA_PTR_FROM_JSON(RdmaInfoDetail, rdmaInfoDetail_);
        DARABONBA_PTR_FROM_JSON(TotalCpuCore, totalCpuCore_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      MachineTypes() = default ;
      MachineTypes(const MachineTypes &) = default ;
      MachineTypes(MachineTypes &&) = default ;
      MachineTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MachineTypes() = default ;
      MachineTypes& operator=(const MachineTypes &) = default ;
      MachineTypes& operator=(MachineTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RdmaInfoDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RdmaInfoDetail& obj) { 
          DARABONBA_PTR_TO_JSON(BackendRdmaNicBwInGbps, backendRdmaNicBwInGbps_);
          DARABONBA_PTR_TO_JSON(BackendRdmaNicCount, backendRdmaNicCount_);
        };
        friend void from_json(const Darabonba::Json& j, RdmaInfoDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(BackendRdmaNicBwInGbps, backendRdmaNicBwInGbps_);
          DARABONBA_PTR_FROM_JSON(BackendRdmaNicCount, backendRdmaNicCount_);
        };
        RdmaInfoDetail() = default ;
        RdmaInfoDetail(const RdmaInfoDetail &) = default ;
        RdmaInfoDetail(RdmaInfoDetail &&) = default ;
        RdmaInfoDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RdmaInfoDetail() = default ;
        RdmaInfoDetail& operator=(const RdmaInfoDetail &) = default ;
        RdmaInfoDetail& operator=(RdmaInfoDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backendRdmaNicBwInGbps_ == nullptr
        && this->backendRdmaNicCount_ == nullptr; };
        // backendRdmaNicBwInGbps Field Functions 
        bool hasBackendRdmaNicBwInGbps() const { return this->backendRdmaNicBwInGbps_ != nullptr;};
        void deleteBackendRdmaNicBwInGbps() { this->backendRdmaNicBwInGbps_ = nullptr;};
        inline int32_t getBackendRdmaNicBwInGbps() const { DARABONBA_PTR_GET_DEFAULT(backendRdmaNicBwInGbps_, 0) };
        inline RdmaInfoDetail& setBackendRdmaNicBwInGbps(int32_t backendRdmaNicBwInGbps) { DARABONBA_PTR_SET_VALUE(backendRdmaNicBwInGbps_, backendRdmaNicBwInGbps) };


        // backendRdmaNicCount Field Functions 
        bool hasBackendRdmaNicCount() const { return this->backendRdmaNicCount_ != nullptr;};
        void deleteBackendRdmaNicCount() { this->backendRdmaNicCount_ = nullptr;};
        inline int32_t getBackendRdmaNicCount() const { DARABONBA_PTR_GET_DEFAULT(backendRdmaNicCount_, 0) };
        inline RdmaInfoDetail& setBackendRdmaNicCount(int32_t backendRdmaNicCount) { DARABONBA_PTR_SET_VALUE(backendRdmaNicCount_, backendRdmaNicCount) };


      protected:
        shared_ptr<int32_t> backendRdmaNicBwInGbps_ {};
        shared_ptr<int32_t> backendRdmaNicCount_ {};
      };

      class MemoryInfoDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MemoryInfoDetail& obj) { 
          DARABONBA_PTR_TO_JSON(MemorySizeInGB, memorySizeInGB_);
        };
        friend void from_json(const Darabonba::Json& j, MemoryInfoDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(MemorySizeInGB, memorySizeInGB_);
        };
        MemoryInfoDetail() = default ;
        MemoryInfoDetail(const MemoryInfoDetail &) = default ;
        MemoryInfoDetail(MemoryInfoDetail &&) = default ;
        MemoryInfoDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MemoryInfoDetail() = default ;
        MemoryInfoDetail& operator=(const MemoryInfoDetail &) = default ;
        MemoryInfoDetail& operator=(MemoryInfoDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->memorySizeInGB_ == nullptr; };
        // memorySizeInGB Field Functions 
        bool hasMemorySizeInGB() const { return this->memorySizeInGB_ != nullptr;};
        void deleteMemorySizeInGB() { this->memorySizeInGB_ = nullptr;};
        inline int32_t getMemorySizeInGB() const { DARABONBA_PTR_GET_DEFAULT(memorySizeInGB_, 0) };
        inline MemoryInfoDetail& setMemorySizeInGB(int32_t memorySizeInGB) { DARABONBA_PTR_SET_VALUE(memorySizeInGB_, memorySizeInGB) };


      protected:
        shared_ptr<int32_t> memorySizeInGB_ {};
      };

      class GpuInfoDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GpuInfoDetail& obj) { 
          DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
          DARABONBA_PTR_TO_JSON(GpuMemoryInGB, gpuMemoryInGB_);
          DARABONBA_PTR_TO_JSON(GpuName, gpuName_);
          DARABONBA_PTR_TO_JSON(GpuVendor, gpuVendor_);
          DARABONBA_PTR_TO_JSON(TotalGpuMemoryInGB, totalGpuMemoryInGB_);
        };
        friend void from_json(const Darabonba::Json& j, GpuInfoDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
          DARABONBA_PTR_FROM_JSON(GpuMemoryInGB, gpuMemoryInGB_);
          DARABONBA_PTR_FROM_JSON(GpuName, gpuName_);
          DARABONBA_PTR_FROM_JSON(GpuVendor, gpuVendor_);
          DARABONBA_PTR_FROM_JSON(TotalGpuMemoryInGB, totalGpuMemoryInGB_);
        };
        GpuInfoDetail() = default ;
        GpuInfoDetail(const GpuInfoDetail &) = default ;
        GpuInfoDetail(GpuInfoDetail &&) = default ;
        GpuInfoDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GpuInfoDetail() = default ;
        GpuInfoDetail& operator=(const GpuInfoDetail &) = default ;
        GpuInfoDetail& operator=(GpuInfoDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gpuCount_ == nullptr
        && this->gpuMemoryInGB_ == nullptr && this->gpuName_ == nullptr && this->gpuVendor_ == nullptr && this->totalGpuMemoryInGB_ == nullptr; };
        // gpuCount Field Functions 
        bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
        void deleteGpuCount() { this->gpuCount_ = nullptr;};
        inline int32_t getGpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0) };
        inline GpuInfoDetail& setGpuCount(int32_t gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


        // gpuMemoryInGB Field Functions 
        bool hasGpuMemoryInGB() const { return this->gpuMemoryInGB_ != nullptr;};
        void deleteGpuMemoryInGB() { this->gpuMemoryInGB_ = nullptr;};
        inline int32_t getGpuMemoryInGB() const { DARABONBA_PTR_GET_DEFAULT(gpuMemoryInGB_, 0) };
        inline GpuInfoDetail& setGpuMemoryInGB(int32_t gpuMemoryInGB) { DARABONBA_PTR_SET_VALUE(gpuMemoryInGB_, gpuMemoryInGB) };


        // gpuName Field Functions 
        bool hasGpuName() const { return this->gpuName_ != nullptr;};
        void deleteGpuName() { this->gpuName_ = nullptr;};
        inline string getGpuName() const { DARABONBA_PTR_GET_DEFAULT(gpuName_, "") };
        inline GpuInfoDetail& setGpuName(string gpuName) { DARABONBA_PTR_SET_VALUE(gpuName_, gpuName) };


        // gpuVendor Field Functions 
        bool hasGpuVendor() const { return this->gpuVendor_ != nullptr;};
        void deleteGpuVendor() { this->gpuVendor_ = nullptr;};
        inline string getGpuVendor() const { DARABONBA_PTR_GET_DEFAULT(gpuVendor_, "") };
        inline GpuInfoDetail& setGpuVendor(string gpuVendor) { DARABONBA_PTR_SET_VALUE(gpuVendor_, gpuVendor) };


        // totalGpuMemoryInGB Field Functions 
        bool hasTotalGpuMemoryInGB() const { return this->totalGpuMemoryInGB_ != nullptr;};
        void deleteTotalGpuMemoryInGB() { this->totalGpuMemoryInGB_ = nullptr;};
        inline int32_t getTotalGpuMemoryInGB() const { DARABONBA_PTR_GET_DEFAULT(totalGpuMemoryInGB_, 0) };
        inline GpuInfoDetail& setTotalGpuMemoryInGB(int32_t totalGpuMemoryInGB) { DARABONBA_PTR_SET_VALUE(totalGpuMemoryInGB_, totalGpuMemoryInGB) };


      protected:
        shared_ptr<int32_t> gpuCount_ {};
        shared_ptr<int32_t> gpuMemoryInGB_ {};
        shared_ptr<string> gpuName_ {};
        shared_ptr<string> gpuVendor_ {};
        shared_ptr<int32_t> totalGpuMemoryInGB_ {};
      };

      class FrontendNetworkDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FrontendNetworkDetail& obj) { 
          DARABONBA_PTR_TO_JSON(FrontendNetworkType, frontendNetworkType_);
          DARABONBA_PTR_TO_JSON(JumboFrameSupported, jumboFrameSupported_);
        };
        friend void from_json(const Darabonba::Json& j, FrontendNetworkDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(FrontendNetworkType, frontendNetworkType_);
          DARABONBA_PTR_FROM_JSON(JumboFrameSupported, jumboFrameSupported_);
        };
        FrontendNetworkDetail() = default ;
        FrontendNetworkDetail(const FrontendNetworkDetail &) = default ;
        FrontendNetworkDetail(FrontendNetworkDetail &&) = default ;
        FrontendNetworkDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FrontendNetworkDetail() = default ;
        FrontendNetworkDetail& operator=(const FrontendNetworkDetail &) = default ;
        FrontendNetworkDetail& operator=(FrontendNetworkDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->frontendNetworkType_ == nullptr
        && this->jumboFrameSupported_ == nullptr; };
        // frontendNetworkType Field Functions 
        bool hasFrontendNetworkType() const { return this->frontendNetworkType_ != nullptr;};
        void deleteFrontendNetworkType() { this->frontendNetworkType_ = nullptr;};
        inline string getFrontendNetworkType() const { DARABONBA_PTR_GET_DEFAULT(frontendNetworkType_, "") };
        inline FrontendNetworkDetail& setFrontendNetworkType(string frontendNetworkType) { DARABONBA_PTR_SET_VALUE(frontendNetworkType_, frontendNetworkType) };


        // jumboFrameSupported Field Functions 
        bool hasJumboFrameSupported() const { return this->jumboFrameSupported_ != nullptr;};
        void deleteJumboFrameSupported() { this->jumboFrameSupported_ = nullptr;};
        inline bool getJumboFrameSupported() const { DARABONBA_PTR_GET_DEFAULT(jumboFrameSupported_, false) };
        inline FrontendNetworkDetail& setJumboFrameSupported(bool jumboFrameSupported) { DARABONBA_PTR_SET_VALUE(jumboFrameSupported_, jumboFrameSupported) };


      protected:
        shared_ptr<string> frontendNetworkType_ {};
        shared_ptr<bool> jumboFrameSupported_ {};
      };

      class DiskInfoDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DiskInfoDetail& obj) { 
          DARABONBA_PTR_TO_JSON(LocalDiskCount, localDiskCount_);
          DARABONBA_PTR_TO_JSON(LocalDiskSizeInTB, localDiskSizeInTB_);
          DARABONBA_PTR_TO_JSON(LocalDiskType, localDiskType_);
        };
        friend void from_json(const Darabonba::Json& j, DiskInfoDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(LocalDiskCount, localDiskCount_);
          DARABONBA_PTR_FROM_JSON(LocalDiskSizeInTB, localDiskSizeInTB_);
          DARABONBA_PTR_FROM_JSON(LocalDiskType, localDiskType_);
        };
        DiskInfoDetail() = default ;
        DiskInfoDetail(const DiskInfoDetail &) = default ;
        DiskInfoDetail(DiskInfoDetail &&) = default ;
        DiskInfoDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DiskInfoDetail() = default ;
        DiskInfoDetail& operator=(const DiskInfoDetail &) = default ;
        DiskInfoDetail& operator=(DiskInfoDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->localDiskCount_ == nullptr
        && this->localDiskSizeInTB_ == nullptr && this->localDiskType_ == nullptr; };
        // localDiskCount Field Functions 
        bool hasLocalDiskCount() const { return this->localDiskCount_ != nullptr;};
        void deleteLocalDiskCount() { this->localDiskCount_ = nullptr;};
        inline int32_t getLocalDiskCount() const { DARABONBA_PTR_GET_DEFAULT(localDiskCount_, 0) };
        inline DiskInfoDetail& setLocalDiskCount(int32_t localDiskCount) { DARABONBA_PTR_SET_VALUE(localDiskCount_, localDiskCount) };


        // localDiskSizeInTB Field Functions 
        bool hasLocalDiskSizeInTB() const { return this->localDiskSizeInTB_ != nullptr;};
        void deleteLocalDiskSizeInTB() { this->localDiskSizeInTB_ = nullptr;};
        inline float getLocalDiskSizeInTB() const { DARABONBA_PTR_GET_DEFAULT(localDiskSizeInTB_, 0.0) };
        inline DiskInfoDetail& setLocalDiskSizeInTB(float localDiskSizeInTB) { DARABONBA_PTR_SET_VALUE(localDiskSizeInTB_, localDiskSizeInTB) };


        // localDiskType Field Functions 
        bool hasLocalDiskType() const { return this->localDiskType_ != nullptr;};
        void deleteLocalDiskType() { this->localDiskType_ = nullptr;};
        inline string getLocalDiskType() const { DARABONBA_PTR_GET_DEFAULT(localDiskType_, "") };
        inline DiskInfoDetail& setLocalDiskType(string localDiskType) { DARABONBA_PTR_SET_VALUE(localDiskType_, localDiskType) };


      protected:
        shared_ptr<int32_t> localDiskCount_ {};
        shared_ptr<float> localDiskSizeInTB_ {};
        shared_ptr<string> localDiskType_ {};
      };

      class CpuInfoDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CpuInfoDetail& obj) { 
          DARABONBA_PTR_TO_JSON(CpuArch, cpuArch_);
          DARABONBA_PTR_TO_JSON(CpuSockets, cpuSockets_);
          DARABONBA_PTR_TO_JSON(VCpuCores, VCpuCores_);
        };
        friend void from_json(const Darabonba::Json& j, CpuInfoDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(CpuArch, cpuArch_);
          DARABONBA_PTR_FROM_JSON(CpuSockets, cpuSockets_);
          DARABONBA_PTR_FROM_JSON(VCpuCores, VCpuCores_);
        };
        CpuInfoDetail() = default ;
        CpuInfoDetail(const CpuInfoDetail &) = default ;
        CpuInfoDetail(CpuInfoDetail &&) = default ;
        CpuInfoDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CpuInfoDetail() = default ;
        CpuInfoDetail& operator=(const CpuInfoDetail &) = default ;
        CpuInfoDetail& operator=(CpuInfoDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpuArch_ == nullptr
        && this->cpuSockets_ == nullptr && this->VCpuCores_ == nullptr; };
        // cpuArch Field Functions 
        bool hasCpuArch() const { return this->cpuArch_ != nullptr;};
        void deleteCpuArch() { this->cpuArch_ = nullptr;};
        inline string getCpuArch() const { DARABONBA_PTR_GET_DEFAULT(cpuArch_, "") };
        inline CpuInfoDetail& setCpuArch(string cpuArch) { DARABONBA_PTR_SET_VALUE(cpuArch_, cpuArch) };


        // cpuSockets Field Functions 
        bool hasCpuSockets() const { return this->cpuSockets_ != nullptr;};
        void deleteCpuSockets() { this->cpuSockets_ = nullptr;};
        inline int32_t getCpuSockets() const { DARABONBA_PTR_GET_DEFAULT(cpuSockets_, 0) };
        inline CpuInfoDetail& setCpuSockets(int32_t cpuSockets) { DARABONBA_PTR_SET_VALUE(cpuSockets_, cpuSockets) };


        // VCpuCores Field Functions 
        bool hasVCpuCores() const { return this->VCpuCores_ != nullptr;};
        void deleteVCpuCores() { this->VCpuCores_ = nullptr;};
        inline int32_t getVCpuCores() const { DARABONBA_PTR_GET_DEFAULT(VCpuCores_, 0) };
        inline CpuInfoDetail& setVCpuCores(int32_t VCpuCores) { DARABONBA_PTR_SET_VALUE(VCpuCores_, VCpuCores) };


      protected:
        shared_ptr<string> cpuArch_ {};
        shared_ptr<int32_t> cpuSockets_ {};
        shared_ptr<int32_t> VCpuCores_ {};
      };

      virtual bool empty() const override { return this->bondNum_ == nullptr
        && this->cpuInfo_ == nullptr && this->cpuInfoDetail_ == nullptr && this->diskInfo_ == nullptr && this->diskInfoDetail_ == nullptr && this->frontendNetworkDetail_ == nullptr
        && this->gpuInfo_ == nullptr && this->gpuInfoDetail_ == nullptr && this->memoryInfo_ == nullptr && this->memoryInfoDetail_ == nullptr && this->name_ == nullptr
        && this->networkInfo_ == nullptr && this->nodeCount_ == nullptr && this->rdmaInfoDetail_ == nullptr && this->totalCpuCore_ == nullptr && this->type_ == nullptr; };
      // bondNum Field Functions 
      bool hasBondNum() const { return this->bondNum_ != nullptr;};
      void deleteBondNum() { this->bondNum_ = nullptr;};
      inline int32_t getBondNum() const { DARABONBA_PTR_GET_DEFAULT(bondNum_, 0) };
      inline MachineTypes& setBondNum(int32_t bondNum) { DARABONBA_PTR_SET_VALUE(bondNum_, bondNum) };


      // cpuInfo Field Functions 
      bool hasCpuInfo() const { return this->cpuInfo_ != nullptr;};
      void deleteCpuInfo() { this->cpuInfo_ = nullptr;};
      inline string getCpuInfo() const { DARABONBA_PTR_GET_DEFAULT(cpuInfo_, "") };
      inline MachineTypes& setCpuInfo(string cpuInfo) { DARABONBA_PTR_SET_VALUE(cpuInfo_, cpuInfo) };


      // cpuInfoDetail Field Functions 
      bool hasCpuInfoDetail() const { return this->cpuInfoDetail_ != nullptr;};
      void deleteCpuInfoDetail() { this->cpuInfoDetail_ = nullptr;};
      inline const MachineTypes::CpuInfoDetail & getCpuInfoDetail() const { DARABONBA_PTR_GET_CONST(cpuInfoDetail_, MachineTypes::CpuInfoDetail) };
      inline MachineTypes::CpuInfoDetail getCpuInfoDetail() { DARABONBA_PTR_GET(cpuInfoDetail_, MachineTypes::CpuInfoDetail) };
      inline MachineTypes& setCpuInfoDetail(const MachineTypes::CpuInfoDetail & cpuInfoDetail) { DARABONBA_PTR_SET_VALUE(cpuInfoDetail_, cpuInfoDetail) };
      inline MachineTypes& setCpuInfoDetail(MachineTypes::CpuInfoDetail && cpuInfoDetail) { DARABONBA_PTR_SET_RVALUE(cpuInfoDetail_, cpuInfoDetail) };


      // diskInfo Field Functions 
      bool hasDiskInfo() const { return this->diskInfo_ != nullptr;};
      void deleteDiskInfo() { this->diskInfo_ = nullptr;};
      inline string getDiskInfo() const { DARABONBA_PTR_GET_DEFAULT(diskInfo_, "") };
      inline MachineTypes& setDiskInfo(string diskInfo) { DARABONBA_PTR_SET_VALUE(diskInfo_, diskInfo) };


      // diskInfoDetail Field Functions 
      bool hasDiskInfoDetail() const { return this->diskInfoDetail_ != nullptr;};
      void deleteDiskInfoDetail() { this->diskInfoDetail_ = nullptr;};
      inline const MachineTypes::DiskInfoDetail & getDiskInfoDetail() const { DARABONBA_PTR_GET_CONST(diskInfoDetail_, MachineTypes::DiskInfoDetail) };
      inline MachineTypes::DiskInfoDetail getDiskInfoDetail() { DARABONBA_PTR_GET(diskInfoDetail_, MachineTypes::DiskInfoDetail) };
      inline MachineTypes& setDiskInfoDetail(const MachineTypes::DiskInfoDetail & diskInfoDetail) { DARABONBA_PTR_SET_VALUE(diskInfoDetail_, diskInfoDetail) };
      inline MachineTypes& setDiskInfoDetail(MachineTypes::DiskInfoDetail && diskInfoDetail) { DARABONBA_PTR_SET_RVALUE(diskInfoDetail_, diskInfoDetail) };


      // frontendNetworkDetail Field Functions 
      bool hasFrontendNetworkDetail() const { return this->frontendNetworkDetail_ != nullptr;};
      void deleteFrontendNetworkDetail() { this->frontendNetworkDetail_ = nullptr;};
      inline const MachineTypes::FrontendNetworkDetail & getFrontendNetworkDetail() const { DARABONBA_PTR_GET_CONST(frontendNetworkDetail_, MachineTypes::FrontendNetworkDetail) };
      inline MachineTypes::FrontendNetworkDetail getFrontendNetworkDetail() { DARABONBA_PTR_GET(frontendNetworkDetail_, MachineTypes::FrontendNetworkDetail) };
      inline MachineTypes& setFrontendNetworkDetail(const MachineTypes::FrontendNetworkDetail & frontendNetworkDetail) { DARABONBA_PTR_SET_VALUE(frontendNetworkDetail_, frontendNetworkDetail) };
      inline MachineTypes& setFrontendNetworkDetail(MachineTypes::FrontendNetworkDetail && frontendNetworkDetail) { DARABONBA_PTR_SET_RVALUE(frontendNetworkDetail_, frontendNetworkDetail) };


      // gpuInfo Field Functions 
      bool hasGpuInfo() const { return this->gpuInfo_ != nullptr;};
      void deleteGpuInfo() { this->gpuInfo_ = nullptr;};
      inline string getGpuInfo() const { DARABONBA_PTR_GET_DEFAULT(gpuInfo_, "") };
      inline MachineTypes& setGpuInfo(string gpuInfo) { DARABONBA_PTR_SET_VALUE(gpuInfo_, gpuInfo) };


      // gpuInfoDetail Field Functions 
      bool hasGpuInfoDetail() const { return this->gpuInfoDetail_ != nullptr;};
      void deleteGpuInfoDetail() { this->gpuInfoDetail_ = nullptr;};
      inline const MachineTypes::GpuInfoDetail & getGpuInfoDetail() const { DARABONBA_PTR_GET_CONST(gpuInfoDetail_, MachineTypes::GpuInfoDetail) };
      inline MachineTypes::GpuInfoDetail getGpuInfoDetail() { DARABONBA_PTR_GET(gpuInfoDetail_, MachineTypes::GpuInfoDetail) };
      inline MachineTypes& setGpuInfoDetail(const MachineTypes::GpuInfoDetail & gpuInfoDetail) { DARABONBA_PTR_SET_VALUE(gpuInfoDetail_, gpuInfoDetail) };
      inline MachineTypes& setGpuInfoDetail(MachineTypes::GpuInfoDetail && gpuInfoDetail) { DARABONBA_PTR_SET_RVALUE(gpuInfoDetail_, gpuInfoDetail) };


      // memoryInfo Field Functions 
      bool hasMemoryInfo() const { return this->memoryInfo_ != nullptr;};
      void deleteMemoryInfo() { this->memoryInfo_ = nullptr;};
      inline string getMemoryInfo() const { DARABONBA_PTR_GET_DEFAULT(memoryInfo_, "") };
      inline MachineTypes& setMemoryInfo(string memoryInfo) { DARABONBA_PTR_SET_VALUE(memoryInfo_, memoryInfo) };


      // memoryInfoDetail Field Functions 
      bool hasMemoryInfoDetail() const { return this->memoryInfoDetail_ != nullptr;};
      void deleteMemoryInfoDetail() { this->memoryInfoDetail_ = nullptr;};
      inline const MachineTypes::MemoryInfoDetail & getMemoryInfoDetail() const { DARABONBA_PTR_GET_CONST(memoryInfoDetail_, MachineTypes::MemoryInfoDetail) };
      inline MachineTypes::MemoryInfoDetail getMemoryInfoDetail() { DARABONBA_PTR_GET(memoryInfoDetail_, MachineTypes::MemoryInfoDetail) };
      inline MachineTypes& setMemoryInfoDetail(const MachineTypes::MemoryInfoDetail & memoryInfoDetail) { DARABONBA_PTR_SET_VALUE(memoryInfoDetail_, memoryInfoDetail) };
      inline MachineTypes& setMemoryInfoDetail(MachineTypes::MemoryInfoDetail && memoryInfoDetail) { DARABONBA_PTR_SET_RVALUE(memoryInfoDetail_, memoryInfoDetail) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline MachineTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // networkInfo Field Functions 
      bool hasNetworkInfo() const { return this->networkInfo_ != nullptr;};
      void deleteNetworkInfo() { this->networkInfo_ = nullptr;};
      inline string getNetworkInfo() const { DARABONBA_PTR_GET_DEFAULT(networkInfo_, "") };
      inline MachineTypes& setNetworkInfo(string networkInfo) { DARABONBA_PTR_SET_VALUE(networkInfo_, networkInfo) };


      // nodeCount Field Functions 
      bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
      void deleteNodeCount() { this->nodeCount_ = nullptr;};
      inline string getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, "") };
      inline MachineTypes& setNodeCount(string nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


      // rdmaInfoDetail Field Functions 
      bool hasRdmaInfoDetail() const { return this->rdmaInfoDetail_ != nullptr;};
      void deleteRdmaInfoDetail() { this->rdmaInfoDetail_ = nullptr;};
      inline const MachineTypes::RdmaInfoDetail & getRdmaInfoDetail() const { DARABONBA_PTR_GET_CONST(rdmaInfoDetail_, MachineTypes::RdmaInfoDetail) };
      inline MachineTypes::RdmaInfoDetail getRdmaInfoDetail() { DARABONBA_PTR_GET(rdmaInfoDetail_, MachineTypes::RdmaInfoDetail) };
      inline MachineTypes& setRdmaInfoDetail(const MachineTypes::RdmaInfoDetail & rdmaInfoDetail) { DARABONBA_PTR_SET_VALUE(rdmaInfoDetail_, rdmaInfoDetail) };
      inline MachineTypes& setRdmaInfoDetail(MachineTypes::RdmaInfoDetail && rdmaInfoDetail) { DARABONBA_PTR_SET_RVALUE(rdmaInfoDetail_, rdmaInfoDetail) };


      // totalCpuCore Field Functions 
      bool hasTotalCpuCore() const { return this->totalCpuCore_ != nullptr;};
      void deleteTotalCpuCore() { this->totalCpuCore_ = nullptr;};
      inline int32_t getTotalCpuCore() const { DARABONBA_PTR_GET_DEFAULT(totalCpuCore_, 0) };
      inline MachineTypes& setTotalCpuCore(int32_t totalCpuCore) { DARABONBA_PTR_SET_VALUE(totalCpuCore_, totalCpuCore) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline MachineTypes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The number of bonds.
      shared_ptr<int32_t> bondNum_ {};
      // CPU information.
      shared_ptr<string> cpuInfo_ {};
      shared_ptr<MachineTypes::CpuInfoDetail> cpuInfoDetail_ {};
      // Disk information.
      shared_ptr<string> diskInfo_ {};
      shared_ptr<MachineTypes::DiskInfoDetail> diskInfoDetail_ {};
      shared_ptr<MachineTypes::FrontendNetworkDetail> frontendNetworkDetail_ {};
      // GPU information.
      shared_ptr<string> gpuInfo_ {};
      shared_ptr<MachineTypes::GpuInfoDetail> gpuInfoDetail_ {};
      // Memory information.
      shared_ptr<string> memoryInfo_ {};
      shared_ptr<MachineTypes::MemoryInfoDetail> memoryInfoDetail_ {};
      // The name of the machine type.
      shared_ptr<string> name_ {};
      // Network information.
      shared_ptr<string> networkInfo_ {};
      // The number of nodes.
      shared_ptr<string> nodeCount_ {};
      shared_ptr<MachineTypes::RdmaInfoDetail> rdmaInfoDetail_ {};
      // The number of CPU cores.
      shared_ptr<int32_t> totalCpuCore_ {};
      // The type of the machine type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->machineTypes_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // machineTypes Field Functions 
    bool hasMachineTypes() const { return this->machineTypes_ != nullptr;};
    void deleteMachineTypes() { this->machineTypes_ = nullptr;};
    inline const vector<ListMachineTypesResponseBody::MachineTypes> & getMachineTypes() const { DARABONBA_PTR_GET_CONST(machineTypes_, vector<ListMachineTypesResponseBody::MachineTypes>) };
    inline vector<ListMachineTypesResponseBody::MachineTypes> getMachineTypes() { DARABONBA_PTR_GET(machineTypes_, vector<ListMachineTypesResponseBody::MachineTypes>) };
    inline ListMachineTypesResponseBody& setMachineTypes(const vector<ListMachineTypesResponseBody::MachineTypes> & machineTypes) { DARABONBA_PTR_SET_VALUE(machineTypes_, machineTypes) };
    inline ListMachineTypesResponseBody& setMachineTypes(vector<ListMachineTypesResponseBody::MachineTypes> && machineTypes) { DARABONBA_PTR_SET_RVALUE(machineTypes_, machineTypes) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMachineTypesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMachineTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the machine types.
    shared_ptr<vector<ListMachineTypesResponseBody::MachineTypes>> machineTypes_ {};
    // The token to request the next page of results. Include this token in your next request to retrieve the next page.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
