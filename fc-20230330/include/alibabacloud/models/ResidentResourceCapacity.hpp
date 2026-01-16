// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIDENTRESOURCECAPACITY_HPP_
#define ALIBABACLOUD_MODELS_RESIDENTRESOURCECAPACITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ResidentResourceCapacity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResidentResourceCapacity& obj) { 
      DARABONBA_PTR_TO_JSON(gpuType, gpuType_);
      DARABONBA_PTR_TO_JSON(totalCpuCores, totalCpuCores_);
      DARABONBA_PTR_TO_JSON(totalDiskSize, totalDiskSize_);
      DARABONBA_PTR_TO_JSON(totalGpuCards, totalGpuCards_);
      DARABONBA_PTR_TO_JSON(totalGpuMemorySize, totalGpuMemorySize_);
      DARABONBA_PTR_TO_JSON(totalMemorySize, totalMemorySize_);
    };
    friend void from_json(const Darabonba::Json& j, ResidentResourceCapacity& obj) { 
      DARABONBA_PTR_FROM_JSON(gpuType, gpuType_);
      DARABONBA_PTR_FROM_JSON(totalCpuCores, totalCpuCores_);
      DARABONBA_PTR_FROM_JSON(totalDiskSize, totalDiskSize_);
      DARABONBA_PTR_FROM_JSON(totalGpuCards, totalGpuCards_);
      DARABONBA_PTR_FROM_JSON(totalGpuMemorySize, totalGpuMemorySize_);
      DARABONBA_PTR_FROM_JSON(totalMemorySize, totalMemorySize_);
    };
    ResidentResourceCapacity() = default ;
    ResidentResourceCapacity(const ResidentResourceCapacity &) = default ;
    ResidentResourceCapacity(ResidentResourceCapacity &&) = default ;
    ResidentResourceCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResidentResourceCapacity() = default ;
    ResidentResourceCapacity& operator=(const ResidentResourceCapacity &) = default ;
    ResidentResourceCapacity& operator=(ResidentResourceCapacity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gpuType_ == nullptr
        && this->totalCpuCores_ == nullptr && this->totalDiskSize_ == nullptr && this->totalGpuCards_ == nullptr && this->totalGpuMemorySize_ == nullptr && this->totalMemorySize_ == nullptr; };
    // gpuType Field Functions 
    bool hasGpuType() const { return this->gpuType_ != nullptr;};
    void deleteGpuType() { this->gpuType_ = nullptr;};
    inline string getGpuType() const { DARABONBA_PTR_GET_DEFAULT(gpuType_, "") };
    inline ResidentResourceCapacity& setGpuType(string gpuType) { DARABONBA_PTR_SET_VALUE(gpuType_, gpuType) };


    // totalCpuCores Field Functions 
    bool hasTotalCpuCores() const { return this->totalCpuCores_ != nullptr;};
    void deleteTotalCpuCores() { this->totalCpuCores_ = nullptr;};
    inline int64_t getTotalCpuCores() const { DARABONBA_PTR_GET_DEFAULT(totalCpuCores_, 0L) };
    inline ResidentResourceCapacity& setTotalCpuCores(int64_t totalCpuCores) { DARABONBA_PTR_SET_VALUE(totalCpuCores_, totalCpuCores) };


    // totalDiskSize Field Functions 
    bool hasTotalDiskSize() const { return this->totalDiskSize_ != nullptr;};
    void deleteTotalDiskSize() { this->totalDiskSize_ = nullptr;};
    inline int64_t getTotalDiskSize() const { DARABONBA_PTR_GET_DEFAULT(totalDiskSize_, 0L) };
    inline ResidentResourceCapacity& setTotalDiskSize(int64_t totalDiskSize) { DARABONBA_PTR_SET_VALUE(totalDiskSize_, totalDiskSize) };


    // totalGpuCards Field Functions 
    bool hasTotalGpuCards() const { return this->totalGpuCards_ != nullptr;};
    void deleteTotalGpuCards() { this->totalGpuCards_ = nullptr;};
    inline int64_t getTotalGpuCards() const { DARABONBA_PTR_GET_DEFAULT(totalGpuCards_, 0L) };
    inline ResidentResourceCapacity& setTotalGpuCards(int64_t totalGpuCards) { DARABONBA_PTR_SET_VALUE(totalGpuCards_, totalGpuCards) };


    // totalGpuMemorySize Field Functions 
    bool hasTotalGpuMemorySize() const { return this->totalGpuMemorySize_ != nullptr;};
    void deleteTotalGpuMemorySize() { this->totalGpuMemorySize_ = nullptr;};
    inline int64_t getTotalGpuMemorySize() const { DARABONBA_PTR_GET_DEFAULT(totalGpuMemorySize_, 0L) };
    inline ResidentResourceCapacity& setTotalGpuMemorySize(int64_t totalGpuMemorySize) { DARABONBA_PTR_SET_VALUE(totalGpuMemorySize_, totalGpuMemorySize) };


    // totalMemorySize Field Functions 
    bool hasTotalMemorySize() const { return this->totalMemorySize_ != nullptr;};
    void deleteTotalMemorySize() { this->totalMemorySize_ = nullptr;};
    inline int64_t getTotalMemorySize() const { DARABONBA_PTR_GET_DEFAULT(totalMemorySize_, 0L) };
    inline ResidentResourceCapacity& setTotalMemorySize(int64_t totalMemorySize) { DARABONBA_PTR_SET_VALUE(totalMemorySize_, totalMemorySize) };


  protected:
    // GPU 卡型
    shared_ptr<string> gpuType_ {};
    // CPU 总核数
    shared_ptr<int64_t> totalCpuCores_ {};
    // 总磁盘大小，单位 GB
    shared_ptr<int64_t> totalDiskSize_ {};
    // GPU总卡数
    shared_ptr<int64_t> totalGpuCards_ {};
    // 总显存大小，单位 GB
    shared_ptr<int64_t> totalGpuMemorySize_ {};
    // 总内存大小，单位 GB
    shared_ptr<int64_t> totalMemorySize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
