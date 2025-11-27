// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLASSESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLASSESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ListClassesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClassesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
      DARABONBA_PTR_TO_JSON(ClassGroup, classGroup_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(EncryptedMemory, encryptedMemory_);
      DARABONBA_PTR_TO_JSON(InstructionSetArch, instructionSetArch_);
      DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_TO_JSON(MaxIOMBPS, maxIOMBPS_);
      DARABONBA_PTR_TO_JSON(MaxIOPS, maxIOPS_);
      DARABONBA_PTR_TO_JSON(MemoryClass, memoryClass_);
      DARABONBA_PTR_TO_JSON(ReferencePrice, referencePrice_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(storageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, ListClassesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
      DARABONBA_PTR_FROM_JSON(ClassGroup, classGroup_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(EncryptedMemory, encryptedMemory_);
      DARABONBA_PTR_FROM_JSON(InstructionSetArch, instructionSetArch_);
      DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_FROM_JSON(MaxIOMBPS, maxIOMBPS_);
      DARABONBA_PTR_FROM_JSON(MaxIOPS, maxIOPS_);
      DARABONBA_PTR_FROM_JSON(MemoryClass, memoryClass_);
      DARABONBA_PTR_FROM_JSON(ReferencePrice, referencePrice_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(storageType, storageType_);
    };
    ListClassesResponseBodyItems() = default ;
    ListClassesResponseBodyItems(const ListClassesResponseBodyItems &) = default ;
    ListClassesResponseBodyItems(ListClassesResponseBodyItems &&) = default ;
    ListClassesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClassesResponseBodyItems() = default ;
    ListClassesResponseBodyItems& operator=(const ListClassesResponseBodyItems &) = default ;
    ListClassesResponseBodyItems& operator=(ListClassesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classCode_ == nullptr
        && return this->classGroup_ == nullptr && return this->cpu_ == nullptr && return this->encryptedMemory_ == nullptr && return this->instructionSetArch_ == nullptr && return this->maxConnections_ == nullptr
        && return this->maxIOMBPS_ == nullptr && return this->maxIOPS_ == nullptr && return this->memoryClass_ == nullptr && return this->referencePrice_ == nullptr && return this->category_ == nullptr
        && return this->storageType_ == nullptr; };
    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string classCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline ListClassesResponseBodyItems& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // classGroup Field Functions 
    bool hasClassGroup() const { return this->classGroup_ != nullptr;};
    void deleteClassGroup() { this->classGroup_ = nullptr;};
    inline string classGroup() const { DARABONBA_PTR_GET_DEFAULT(classGroup_, "") };
    inline ListClassesResponseBodyItems& setClassGroup(string classGroup) { DARABONBA_PTR_SET_VALUE(classGroup_, classGroup) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline ListClassesResponseBodyItems& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // encryptedMemory Field Functions 
    bool hasEncryptedMemory() const { return this->encryptedMemory_ != nullptr;};
    void deleteEncryptedMemory() { this->encryptedMemory_ = nullptr;};
    inline string encryptedMemory() const { DARABONBA_PTR_GET_DEFAULT(encryptedMemory_, "") };
    inline ListClassesResponseBodyItems& setEncryptedMemory(string encryptedMemory) { DARABONBA_PTR_SET_VALUE(encryptedMemory_, encryptedMemory) };


    // instructionSetArch Field Functions 
    bool hasInstructionSetArch() const { return this->instructionSetArch_ != nullptr;};
    void deleteInstructionSetArch() { this->instructionSetArch_ = nullptr;};
    inline string instructionSetArch() const { DARABONBA_PTR_GET_DEFAULT(instructionSetArch_, "") };
    inline ListClassesResponseBodyItems& setInstructionSetArch(string instructionSetArch) { DARABONBA_PTR_SET_VALUE(instructionSetArch_, instructionSetArch) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline string maxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, "") };
    inline ListClassesResponseBodyItems& setMaxConnections(string maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // maxIOMBPS Field Functions 
    bool hasMaxIOMBPS() const { return this->maxIOMBPS_ != nullptr;};
    void deleteMaxIOMBPS() { this->maxIOMBPS_ = nullptr;};
    inline string maxIOMBPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOMBPS_, "") };
    inline ListClassesResponseBodyItems& setMaxIOMBPS(string maxIOMBPS) { DARABONBA_PTR_SET_VALUE(maxIOMBPS_, maxIOMBPS) };


    // maxIOPS Field Functions 
    bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
    void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
    inline string maxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, "") };
    inline ListClassesResponseBodyItems& setMaxIOPS(string maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


    // memoryClass Field Functions 
    bool hasMemoryClass() const { return this->memoryClass_ != nullptr;};
    void deleteMemoryClass() { this->memoryClass_ = nullptr;};
    inline string memoryClass() const { DARABONBA_PTR_GET_DEFAULT(memoryClass_, "") };
    inline ListClassesResponseBodyItems& setMemoryClass(string memoryClass) { DARABONBA_PTR_SET_VALUE(memoryClass_, memoryClass) };


    // referencePrice Field Functions 
    bool hasReferencePrice() const { return this->referencePrice_ != nullptr;};
    void deleteReferencePrice() { this->referencePrice_ = nullptr;};
    inline string referencePrice() const { DARABONBA_PTR_GET_DEFAULT(referencePrice_, "") };
    inline ListClassesResponseBodyItems& setReferencePrice(string referencePrice) { DARABONBA_PTR_SET_VALUE(referencePrice_, referencePrice) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListClassesResponseBodyItems& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ListClassesResponseBodyItems& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The code of the instance type. For more information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html) and [Read-only ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/145759.html).
    std::shared_ptr<string> classCode_ = nullptr;
    // The instance family. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/57184.html).
    std::shared_ptr<string> classGroup_ = nullptr;
    // The number of CPU cores that are supported by the instance type. Unit: cores.
    std::shared_ptr<string> cpu_ = nullptr;
    // The size of the encrypted memory that is supported by the security-enhanced instance type. Unit: GB.
    std::shared_ptr<string> encryptedMemory_ = nullptr;
    // The architecture of the instance type. Valid values:
    // 
    // *   If the architecture of the instance type is **x86**, an empty string is returned by default.
    // *   If the architecture of the instance type is **ARM**, **arm** is returned.
    std::shared_ptr<string> instructionSetArch_ = nullptr;
    // The maximum number of connections that are supported by the instance type. Unit: connections.
    std::shared_ptr<string> maxConnections_ = nullptr;
    // The maximum I/O bandwidth that is supported by the instance type. Unit: Mbit/s.
    std::shared_ptr<string> maxIOMBPS_ = nullptr;
    // The maximum input/output operations per second (IOPS) that is supported by the instance type. Unit: operations per second.
    std::shared_ptr<string> maxIOPS_ = nullptr;
    // The memory size that is supported by the instance type. Unit: GB.
    std::shared_ptr<string> memoryClass_ = nullptr;
    // The fee that you must pay for the instance type.
    // 
    // *   Unit: cents (USD).
    // 
    // > *   If you set **CommodityCode** to a value that indicates the pay-as-you-go billing method, the ReferencePrice parameter specifies the hourly fee that you must pay.
    // > *   If you set **CommodityCode** to a value that indicates the subscription billing method, the ReferencePrice parameter specifies the monthly fee that you must pay.
    std::shared_ptr<string> referencePrice_ = nullptr;
    // The RDS edition of the instance. Valid values:
    // 
    // *   Regular instance
    // 
    //     *   **Basic**: RDS Basic Edition
    //     *   **HighAvailability**: RDS High-availability Edition
    //     *   **cluster**: RDS Cluster Edition for ApsaraDB RDS for MySQL or PostgreSQL
    //     *   **AlwaysOn**: RDS Cluster Edition for ApsaraDB RDS for SQL Server
    //     *   **Finance**: RDS Basic Edition for serverless instances
    // 
    // *   Serverless instance
    // 
    //     *   **serverless_basic**: RDS Basic Edition for serverless instances. This edition is available only for instances that run MySQL and PostgreSQL.
    //     *   **serverless_standard**: RDS High-availability Edition for serverless instances. This edition is available only for instances that run MySQL and PostgreSQL.
    //     *   **serverless_ha**: RDS High-availability Edition for serverless instances. This edition is available only for instances that run SQL Server.
    std::shared_ptr<string> category_ = nullptr;
    // The storage type of the instance.
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
