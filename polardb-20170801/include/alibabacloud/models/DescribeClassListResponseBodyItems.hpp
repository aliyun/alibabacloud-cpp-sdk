// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLASSLISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLASSLISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeClassListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClassListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
      DARABONBA_PTR_TO_JSON(ClassGroup, classGroup_);
      DARABONBA_PTR_TO_JSON(ClassTypeLevel, classTypeLevel_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(EssdMaxStorageCapacity, essdMaxStorageCapacity_);
      DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_TO_JSON(MaxIOPS, maxIOPS_);
      DARABONBA_PTR_TO_JSON(MaxStorageCapacity, maxStorageCapacity_);
      DARABONBA_PTR_TO_JSON(MemoryClass, memoryClass_);
      DARABONBA_PTR_TO_JSON(Pl1MaxIOPS, pl1MaxIOPS_);
      DARABONBA_PTR_TO_JSON(Pl2MaxIOPS, pl2MaxIOPS_);
      DARABONBA_PTR_TO_JSON(Pl3MaxIOPS, pl3MaxIOPS_);
      DARABONBA_PTR_TO_JSON(PolarStoreMaxStorageCapacity, polarStoreMaxStorageCapacity_);
      DARABONBA_PTR_TO_JSON(Psl4MaxIOPS, psl4MaxIOPS_);
      DARABONBA_PTR_TO_JSON(Psl5MaxIOPS, psl5MaxIOPS_);
      DARABONBA_PTR_TO_JSON(ReferenceExtPrice, referenceExtPrice_);
      DARABONBA_PTR_TO_JSON(ReferencePrice, referencePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClassListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
      DARABONBA_PTR_FROM_JSON(ClassGroup, classGroup_);
      DARABONBA_PTR_FROM_JSON(ClassTypeLevel, classTypeLevel_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(EssdMaxStorageCapacity, essdMaxStorageCapacity_);
      DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_FROM_JSON(MaxIOPS, maxIOPS_);
      DARABONBA_PTR_FROM_JSON(MaxStorageCapacity, maxStorageCapacity_);
      DARABONBA_PTR_FROM_JSON(MemoryClass, memoryClass_);
      DARABONBA_PTR_FROM_JSON(Pl1MaxIOPS, pl1MaxIOPS_);
      DARABONBA_PTR_FROM_JSON(Pl2MaxIOPS, pl2MaxIOPS_);
      DARABONBA_PTR_FROM_JSON(Pl3MaxIOPS, pl3MaxIOPS_);
      DARABONBA_PTR_FROM_JSON(PolarStoreMaxStorageCapacity, polarStoreMaxStorageCapacity_);
      DARABONBA_PTR_FROM_JSON(Psl4MaxIOPS, psl4MaxIOPS_);
      DARABONBA_PTR_FROM_JSON(Psl5MaxIOPS, psl5MaxIOPS_);
      DARABONBA_PTR_FROM_JSON(ReferenceExtPrice, referenceExtPrice_);
      DARABONBA_PTR_FROM_JSON(ReferencePrice, referencePrice_);
    };
    DescribeClassListResponseBodyItems() = default ;
    DescribeClassListResponseBodyItems(const DescribeClassListResponseBodyItems &) = default ;
    DescribeClassListResponseBodyItems(DescribeClassListResponseBodyItems &&) = default ;
    DescribeClassListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClassListResponseBodyItems() = default ;
    DescribeClassListResponseBodyItems& operator=(const DescribeClassListResponseBodyItems &) = default ;
    DescribeClassListResponseBodyItems& operator=(DescribeClassListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classCode_ == nullptr
        && return this->classGroup_ == nullptr && return this->classTypeLevel_ == nullptr && return this->cpu_ == nullptr && return this->essdMaxStorageCapacity_ == nullptr && return this->maxConnections_ == nullptr
        && return this->maxIOPS_ == nullptr && return this->maxStorageCapacity_ == nullptr && return this->memoryClass_ == nullptr && return this->pl1MaxIOPS_ == nullptr && return this->pl2MaxIOPS_ == nullptr
        && return this->pl3MaxIOPS_ == nullptr && return this->polarStoreMaxStorageCapacity_ == nullptr && return this->psl4MaxIOPS_ == nullptr && return this->psl5MaxIOPS_ == nullptr && return this->referenceExtPrice_ == nullptr
        && return this->referencePrice_ == nullptr; };
    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string classCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline DescribeClassListResponseBodyItems& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // classGroup Field Functions 
    bool hasClassGroup() const { return this->classGroup_ != nullptr;};
    void deleteClassGroup() { this->classGroup_ = nullptr;};
    inline string classGroup() const { DARABONBA_PTR_GET_DEFAULT(classGroup_, "") };
    inline DescribeClassListResponseBodyItems& setClassGroup(string classGroup) { DARABONBA_PTR_SET_VALUE(classGroup_, classGroup) };


    // classTypeLevel Field Functions 
    bool hasClassTypeLevel() const { return this->classTypeLevel_ != nullptr;};
    void deleteClassTypeLevel() { this->classTypeLevel_ = nullptr;};
    inline string classTypeLevel() const { DARABONBA_PTR_GET_DEFAULT(classTypeLevel_, "") };
    inline DescribeClassListResponseBodyItems& setClassTypeLevel(string classTypeLevel) { DARABONBA_PTR_SET_VALUE(classTypeLevel_, classTypeLevel) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline DescribeClassListResponseBodyItems& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // essdMaxStorageCapacity Field Functions 
    bool hasEssdMaxStorageCapacity() const { return this->essdMaxStorageCapacity_ != nullptr;};
    void deleteEssdMaxStorageCapacity() { this->essdMaxStorageCapacity_ = nullptr;};
    inline string essdMaxStorageCapacity() const { DARABONBA_PTR_GET_DEFAULT(essdMaxStorageCapacity_, "") };
    inline DescribeClassListResponseBodyItems& setEssdMaxStorageCapacity(string essdMaxStorageCapacity) { DARABONBA_PTR_SET_VALUE(essdMaxStorageCapacity_, essdMaxStorageCapacity) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline string maxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, "") };
    inline DescribeClassListResponseBodyItems& setMaxConnections(string maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // maxIOPS Field Functions 
    bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
    void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
    inline string maxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, "") };
    inline DescribeClassListResponseBodyItems& setMaxIOPS(string maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


    // maxStorageCapacity Field Functions 
    bool hasMaxStorageCapacity() const { return this->maxStorageCapacity_ != nullptr;};
    void deleteMaxStorageCapacity() { this->maxStorageCapacity_ = nullptr;};
    inline string maxStorageCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxStorageCapacity_, "") };
    inline DescribeClassListResponseBodyItems& setMaxStorageCapacity(string maxStorageCapacity) { DARABONBA_PTR_SET_VALUE(maxStorageCapacity_, maxStorageCapacity) };


    // memoryClass Field Functions 
    bool hasMemoryClass() const { return this->memoryClass_ != nullptr;};
    void deleteMemoryClass() { this->memoryClass_ = nullptr;};
    inline string memoryClass() const { DARABONBA_PTR_GET_DEFAULT(memoryClass_, "") };
    inline DescribeClassListResponseBodyItems& setMemoryClass(string memoryClass) { DARABONBA_PTR_SET_VALUE(memoryClass_, memoryClass) };


    // pl1MaxIOPS Field Functions 
    bool hasPl1MaxIOPS() const { return this->pl1MaxIOPS_ != nullptr;};
    void deletePl1MaxIOPS() { this->pl1MaxIOPS_ = nullptr;};
    inline string pl1MaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(pl1MaxIOPS_, "") };
    inline DescribeClassListResponseBodyItems& setPl1MaxIOPS(string pl1MaxIOPS) { DARABONBA_PTR_SET_VALUE(pl1MaxIOPS_, pl1MaxIOPS) };


    // pl2MaxIOPS Field Functions 
    bool hasPl2MaxIOPS() const { return this->pl2MaxIOPS_ != nullptr;};
    void deletePl2MaxIOPS() { this->pl2MaxIOPS_ = nullptr;};
    inline string pl2MaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(pl2MaxIOPS_, "") };
    inline DescribeClassListResponseBodyItems& setPl2MaxIOPS(string pl2MaxIOPS) { DARABONBA_PTR_SET_VALUE(pl2MaxIOPS_, pl2MaxIOPS) };


    // pl3MaxIOPS Field Functions 
    bool hasPl3MaxIOPS() const { return this->pl3MaxIOPS_ != nullptr;};
    void deletePl3MaxIOPS() { this->pl3MaxIOPS_ = nullptr;};
    inline string pl3MaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(pl3MaxIOPS_, "") };
    inline DescribeClassListResponseBodyItems& setPl3MaxIOPS(string pl3MaxIOPS) { DARABONBA_PTR_SET_VALUE(pl3MaxIOPS_, pl3MaxIOPS) };


    // polarStoreMaxStorageCapacity Field Functions 
    bool hasPolarStoreMaxStorageCapacity() const { return this->polarStoreMaxStorageCapacity_ != nullptr;};
    void deletePolarStoreMaxStorageCapacity() { this->polarStoreMaxStorageCapacity_ = nullptr;};
    inline string polarStoreMaxStorageCapacity() const { DARABONBA_PTR_GET_DEFAULT(polarStoreMaxStorageCapacity_, "") };
    inline DescribeClassListResponseBodyItems& setPolarStoreMaxStorageCapacity(string polarStoreMaxStorageCapacity) { DARABONBA_PTR_SET_VALUE(polarStoreMaxStorageCapacity_, polarStoreMaxStorageCapacity) };


    // psl4MaxIOPS Field Functions 
    bool hasPsl4MaxIOPS() const { return this->psl4MaxIOPS_ != nullptr;};
    void deletePsl4MaxIOPS() { this->psl4MaxIOPS_ = nullptr;};
    inline string psl4MaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(psl4MaxIOPS_, "") };
    inline DescribeClassListResponseBodyItems& setPsl4MaxIOPS(string psl4MaxIOPS) { DARABONBA_PTR_SET_VALUE(psl4MaxIOPS_, psl4MaxIOPS) };


    // psl5MaxIOPS Field Functions 
    bool hasPsl5MaxIOPS() const { return this->psl5MaxIOPS_ != nullptr;};
    void deletePsl5MaxIOPS() { this->psl5MaxIOPS_ = nullptr;};
    inline string psl5MaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(psl5MaxIOPS_, "") };
    inline DescribeClassListResponseBodyItems& setPsl5MaxIOPS(string psl5MaxIOPS) { DARABONBA_PTR_SET_VALUE(psl5MaxIOPS_, psl5MaxIOPS) };


    // referenceExtPrice Field Functions 
    bool hasReferenceExtPrice() const { return this->referenceExtPrice_ != nullptr;};
    void deleteReferenceExtPrice() { this->referenceExtPrice_ = nullptr;};
    inline string referenceExtPrice() const { DARABONBA_PTR_GET_DEFAULT(referenceExtPrice_, "") };
    inline DescribeClassListResponseBodyItems& setReferenceExtPrice(string referenceExtPrice) { DARABONBA_PTR_SET_VALUE(referenceExtPrice_, referenceExtPrice) };


    // referencePrice Field Functions 
    bool hasReferencePrice() const { return this->referencePrice_ != nullptr;};
    void deleteReferencePrice() { this->referencePrice_ = nullptr;};
    inline string referencePrice() const { DARABONBA_PTR_GET_DEFAULT(referencePrice_, "") };
    inline DescribeClassListResponseBodyItems& setReferencePrice(string referencePrice) { DARABONBA_PTR_SET_VALUE(referencePrice_, referencePrice) };


  protected:
    // The specifications of the cluster.
    std::shared_ptr<string> classCode_ = nullptr;
    // The instance family of the cluster. Valid values:
    // 
    // *   Exclusive package: dedicated
    // *   Exclusive physical machine: dedicated host
    // *   Beginner: starter
    // *   Historical specifications: historical
    std::shared_ptr<string> classGroup_ = nullptr;
    // The specification type of the cluster.
    std::shared_ptr<string> classTypeLevel_ = nullptr;
    // The number of vCPU cores. Unit: cores.
    std::shared_ptr<string> cpu_ = nullptr;
    // The maximum ESSD storage capacity. Unit: TB.
    std::shared_ptr<string> essdMaxStorageCapacity_ = nullptr;
    // The maximum number of concurrent connections in the cluster.
    std::shared_ptr<string> maxConnections_ = nullptr;
    // The maximum IOPS. Unit: operations per second.
    std::shared_ptr<string> maxIOPS_ = nullptr;
    // The maximum storage capacity. Unit: TB.
    std::shared_ptr<string> maxStorageCapacity_ = nullptr;
    // The memory size. Unit: GB.
    std::shared_ptr<string> memoryClass_ = nullptr;
    // The maximum IOPS of an enhanced SSD (ESSD) of performance level 1 (PL1). Unit: operations per second.
    std::shared_ptr<string> pl1MaxIOPS_ = nullptr;
    // The maximum IOPS of an ESSD of performance level 2 (PL2). Unit: operations per second.
    std::shared_ptr<string> pl2MaxIOPS_ = nullptr;
    // The maximum IOPS of an ESSD of performance level 3 (PL3). Unit: operations per second.
    std::shared_ptr<string> pl3MaxIOPS_ = nullptr;
    // The maximum PSL4/PSL5 storage capacity. Unit: TB.
    std::shared_ptr<string> polarStoreMaxStorageCapacity_ = nullptr;
    // The maximum Input/output operations per second (IOPS) for PolarStore Level 4 (PSL4). Unit: operations per second.
    std::shared_ptr<string> psl4MaxIOPS_ = nullptr;
    // The maximum IOPS for PolarStore Level 5 (PSL5). Unit: operations per second.
    std::shared_ptr<string> psl5MaxIOPS_ = nullptr;
    // The additional price.
    // 
    // Unit: cents (USD).
    // 
    // >- If you set MasterHa to cluster or single, the value of ReferenceExtPrice is the same as the value of ReferencePrice.
    // >- If you set MasterHa to cluster or single, the value of ReferenceExtPrice is the price of the single-node cluster.
    std::shared_ptr<string> referenceExtPrice_ = nullptr;
    // The price.
    // 
    // Unit: cents (USD).
    // 
    // >- If you set CommodityCode to a commodity that uses the pay-as-you-go billing method, ReferencePrice indicates the hourly fee that you need to pay.
    // >- If you set CommodityCode to a commodity that uses the subscription billing method, ReferencePrice indicates the monthly fee that you need to pay.
    std::shared_ptr<string> referencePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
