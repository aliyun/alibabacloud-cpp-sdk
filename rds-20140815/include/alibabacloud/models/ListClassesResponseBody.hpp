// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLASSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLASSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ListClassesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClassesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClassesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClassesResponseBody() = default ;
    ListClassesResponseBody(const ListClassesResponseBody &) = default ;
    ListClassesResponseBody(ListClassesResponseBody &&) = default ;
    ListClassesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClassesResponseBody() = default ;
    ListClassesResponseBody& operator=(const ListClassesResponseBody &) = default ;
    ListClassesResponseBody& operator=(ListClassesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->classCode_ == nullptr
        && this->classGroup_ == nullptr && this->cpu_ == nullptr && this->encryptedMemory_ == nullptr && this->instructionSetArch_ == nullptr && this->maxConnections_ == nullptr
        && this->maxIOMBPS_ == nullptr && this->maxIOPS_ == nullptr && this->memoryClass_ == nullptr && this->referencePrice_ == nullptr && this->category_ == nullptr
        && this->storageType_ == nullptr; };
      // classCode Field Functions 
      bool hasClassCode() const { return this->classCode_ != nullptr;};
      void deleteClassCode() { this->classCode_ = nullptr;};
      inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
      inline Items& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


      // classGroup Field Functions 
      bool hasClassGroup() const { return this->classGroup_ != nullptr;};
      void deleteClassGroup() { this->classGroup_ = nullptr;};
      inline string getClassGroup() const { DARABONBA_PTR_GET_DEFAULT(classGroup_, "") };
      inline Items& setClassGroup(string classGroup) { DARABONBA_PTR_SET_VALUE(classGroup_, classGroup) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline Items& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // encryptedMemory Field Functions 
      bool hasEncryptedMemory() const { return this->encryptedMemory_ != nullptr;};
      void deleteEncryptedMemory() { this->encryptedMemory_ = nullptr;};
      inline string getEncryptedMemory() const { DARABONBA_PTR_GET_DEFAULT(encryptedMemory_, "") };
      inline Items& setEncryptedMemory(string encryptedMemory) { DARABONBA_PTR_SET_VALUE(encryptedMemory_, encryptedMemory) };


      // instructionSetArch Field Functions 
      bool hasInstructionSetArch() const { return this->instructionSetArch_ != nullptr;};
      void deleteInstructionSetArch() { this->instructionSetArch_ = nullptr;};
      inline string getInstructionSetArch() const { DARABONBA_PTR_GET_DEFAULT(instructionSetArch_, "") };
      inline Items& setInstructionSetArch(string instructionSetArch) { DARABONBA_PTR_SET_VALUE(instructionSetArch_, instructionSetArch) };


      // maxConnections Field Functions 
      bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
      void deleteMaxConnections() { this->maxConnections_ = nullptr;};
      inline string getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, "") };
      inline Items& setMaxConnections(string maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


      // maxIOMBPS Field Functions 
      bool hasMaxIOMBPS() const { return this->maxIOMBPS_ != nullptr;};
      void deleteMaxIOMBPS() { this->maxIOMBPS_ = nullptr;};
      inline string getMaxIOMBPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOMBPS_, "") };
      inline Items& setMaxIOMBPS(string maxIOMBPS) { DARABONBA_PTR_SET_VALUE(maxIOMBPS_, maxIOMBPS) };


      // maxIOPS Field Functions 
      bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
      void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
      inline string getMaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, "") };
      inline Items& setMaxIOPS(string maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


      // memoryClass Field Functions 
      bool hasMemoryClass() const { return this->memoryClass_ != nullptr;};
      void deleteMemoryClass() { this->memoryClass_ = nullptr;};
      inline string getMemoryClass() const { DARABONBA_PTR_GET_DEFAULT(memoryClass_, "") };
      inline Items& setMemoryClass(string memoryClass) { DARABONBA_PTR_SET_VALUE(memoryClass_, memoryClass) };


      // referencePrice Field Functions 
      bool hasReferencePrice() const { return this->referencePrice_ != nullptr;};
      void deleteReferencePrice() { this->referencePrice_ = nullptr;};
      inline string getReferencePrice() const { DARABONBA_PTR_GET_DEFAULT(referencePrice_, "") };
      inline Items& setReferencePrice(string referencePrice) { DARABONBA_PTR_SET_VALUE(referencePrice_, referencePrice) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Items& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Items& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    protected:
      // The code of the instance type. For more information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html) and [Read-only ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/145759.html).
      shared_ptr<string> classCode_ {};
      // The instance family. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/57184.html).
      shared_ptr<string> classGroup_ {};
      // The number of CPU cores that are supported by the instance type. Unit: cores.
      shared_ptr<string> cpu_ {};
      // The size of the encrypted memory that is supported by the security-enhanced instance type. Unit: GB.
      shared_ptr<string> encryptedMemory_ {};
      // The architecture of the instance type. Valid values:
      // 
      // *   If the architecture of the instance type is **x86**, an empty string is returned by default.
      // *   If the architecture of the instance type is **ARM**, **arm** is returned.
      shared_ptr<string> instructionSetArch_ {};
      // The maximum number of connections that are supported by the instance type. Unit: connections.
      shared_ptr<string> maxConnections_ {};
      // The maximum I/O bandwidth that is supported by the instance type. Unit: Mbit/s.
      shared_ptr<string> maxIOMBPS_ {};
      // The maximum input/output operations per second (IOPS) that is supported by the instance type. Unit: operations per second.
      shared_ptr<string> maxIOPS_ {};
      // The memory size that is supported by the instance type. Unit: GB.
      shared_ptr<string> memoryClass_ {};
      // The fee that you must pay for the instance type.
      // 
      // *   Unit: cents (USD).
      // 
      // > *   If you set **CommodityCode** to a value that indicates the pay-as-you-go billing method, the ReferencePrice parameter specifies the hourly fee that you must pay.
      // > *   If you set **CommodityCode** to a value that indicates the subscription billing method, the ReferencePrice parameter specifies the monthly fee that you must pay.
      shared_ptr<string> referencePrice_ {};
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
      shared_ptr<string> category_ {};
      // The storage type of the instance.
      shared_ptr<string> storageType_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListClassesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListClassesResponseBody::Items>) };
    inline vector<ListClassesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListClassesResponseBody::Items>) };
    inline ListClassesResponseBody& setItems(const vector<ListClassesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListClassesResponseBody& setItems(vector<ListClassesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListClassesResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClassesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of instance specifications.
    shared_ptr<vector<ListClassesResponseBody::Items>> items_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
