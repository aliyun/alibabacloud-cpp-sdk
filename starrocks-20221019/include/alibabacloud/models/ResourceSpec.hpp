// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCESPEC_HPP_
#define ALIBABACLOUD_MODELS_RESOURCESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ResourceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceSpec& obj) { 
      DARABONBA_PTR_TO_JSON(cu, cu_);
      DARABONBA_PTR_TO_JSON(diskNumber, diskNumber_);
      DARABONBA_PTR_TO_JSON(localStorageInstanceType, localStorageInstanceType_);
      DARABONBA_PTR_TO_JSON(nodeNumber, nodeNumber_);
      DARABONBA_PTR_TO_JSON(specType, specType_);
      DARABONBA_PTR_TO_JSON(storagePerformanceLevel, storagePerformanceLevel_);
      DARABONBA_PTR_TO_JSON(storageSize, storageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(cu, cu_);
      DARABONBA_PTR_FROM_JSON(diskNumber, diskNumber_);
      DARABONBA_PTR_FROM_JSON(localStorageInstanceType, localStorageInstanceType_);
      DARABONBA_PTR_FROM_JSON(nodeNumber, nodeNumber_);
      DARABONBA_PTR_FROM_JSON(specType, specType_);
      DARABONBA_PTR_FROM_JSON(storagePerformanceLevel, storagePerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(storageSize, storageSize_);
    };
    ResourceSpec() = default ;
    ResourceSpec(const ResourceSpec &) = default ;
    ResourceSpec(ResourceSpec &&) = default ;
    ResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceSpec() = default ;
    ResourceSpec& operator=(const ResourceSpec &) = default ;
    ResourceSpec& operator=(ResourceSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cu_ == nullptr
        && this->diskNumber_ == nullptr && this->localStorageInstanceType_ == nullptr && this->nodeNumber_ == nullptr && this->specType_ == nullptr && this->storagePerformanceLevel_ == nullptr
        && this->storageSize_ == nullptr; };
    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
    inline ResourceSpec& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // diskNumber Field Functions 
    bool hasDiskNumber() const { return this->diskNumber_ != nullptr;};
    void deleteDiskNumber() { this->diskNumber_ = nullptr;};
    inline int32_t getDiskNumber() const { DARABONBA_PTR_GET_DEFAULT(diskNumber_, 0) };
    inline ResourceSpec& setDiskNumber(int32_t diskNumber) { DARABONBA_PTR_SET_VALUE(diskNumber_, diskNumber) };


    // localStorageInstanceType Field Functions 
    bool hasLocalStorageInstanceType() const { return this->localStorageInstanceType_ != nullptr;};
    void deleteLocalStorageInstanceType() { this->localStorageInstanceType_ = nullptr;};
    inline string getLocalStorageInstanceType() const { DARABONBA_PTR_GET_DEFAULT(localStorageInstanceType_, "") };
    inline ResourceSpec& setLocalStorageInstanceType(string localStorageInstanceType) { DARABONBA_PTR_SET_VALUE(localStorageInstanceType_, localStorageInstanceType) };


    // nodeNumber Field Functions 
    bool hasNodeNumber() const { return this->nodeNumber_ != nullptr;};
    void deleteNodeNumber() { this->nodeNumber_ = nullptr;};
    inline int32_t getNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(nodeNumber_, 0) };
    inline ResourceSpec& setNodeNumber(int32_t nodeNumber) { DARABONBA_PTR_SET_VALUE(nodeNumber_, nodeNumber) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline ResourceSpec& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // storagePerformanceLevel Field Functions 
    bool hasStoragePerformanceLevel() const { return this->storagePerformanceLevel_ != nullptr;};
    void deleteStoragePerformanceLevel() { this->storagePerformanceLevel_ = nullptr;};
    inline string getStoragePerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(storagePerformanceLevel_, "") };
    inline ResourceSpec& setStoragePerformanceLevel(string storagePerformanceLevel) { DARABONBA_PTR_SET_VALUE(storagePerformanceLevel_, storagePerformanceLevel) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
    inline ResourceSpec& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


  protected:
    // The number of CUs. A compute unit (CU) is the basic metering unit of a service. 1 CU = 1 CPU core + 4 GiB of memory.
    shared_ptr<int32_t> cu_ {};
    // The number of disk blocks.
    shared_ptr<int32_t> diskNumber_ {};
    // Local SSD Instance Specification for the node group. This parameter is applicable only when the node group is based on ECS instances and the SpecType is set to \\"Local SSD / Large-capacity Storage\\"
    shared_ptr<string> localStorageInstanceType_ {};
    // The number of nodes.
    shared_ptr<int32_t> nodeNumber_ {};
    // The type of the node group. The following types are included:
    // 
    // *   standard, Standard Edition, ECS + cloud disk.
    // *   localSSD , local SSD.
    // *   bigData, which stores large specifications.
    shared_ptr<string> specType_ {};
    // The performance level of the disks. Valid values:
    // 
    // *   PL0: A single disk can achieve up to 10,000 random read/write IOPS.
    // *   PL1: A single disk can achieve up to 50,000 random read/write IOPS.
    // *   PL2: A single disk can achieve up to 100,000 random read/write IOPS.
    // *   PL3: A single disk can achieve up to 1 million random read/write IOPS.
    shared_ptr<string> storagePerformanceLevel_ {};
    // The storage size.
    shared_ptr<int32_t> storageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
