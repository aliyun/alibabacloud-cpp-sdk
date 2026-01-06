// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLASSDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLASSDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeClassDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClassDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
      DARABONBA_PTR_TO_JSON(ClassGroup, classGroup_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(InstructionSetArch, instructionSetArch_);
      DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_TO_JSON(MaxIOMBPS, maxIOMBPS_);
      DARABONBA_PTR_TO_JSON(MaxIOPS, maxIOPS_);
      DARABONBA_PTR_TO_JSON(MemoryClass, memoryClass_);
      DARABONBA_PTR_TO_JSON(ReferencePrice, referencePrice_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClassDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
      DARABONBA_PTR_FROM_JSON(ClassGroup, classGroup_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(InstructionSetArch, instructionSetArch_);
      DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_FROM_JSON(MaxIOMBPS, maxIOMBPS_);
      DARABONBA_PTR_FROM_JSON(MaxIOPS, maxIOPS_);
      DARABONBA_PTR_FROM_JSON(MemoryClass, memoryClass_);
      DARABONBA_PTR_FROM_JSON(ReferencePrice, referencePrice_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClassDetailsResponseBody() = default ;
    DescribeClassDetailsResponseBody(const DescribeClassDetailsResponseBody &) = default ;
    DescribeClassDetailsResponseBody(DescribeClassDetailsResponseBody &&) = default ;
    DescribeClassDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClassDetailsResponseBody() = default ;
    DescribeClassDetailsResponseBody& operator=(const DescribeClassDetailsResponseBody &) = default ;
    DescribeClassDetailsResponseBody& operator=(DescribeClassDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->classCode_ == nullptr && this->classGroup_ == nullptr && this->cpu_ == nullptr && this->DBInstanceStorageType_ == nullptr && this->instructionSetArch_ == nullptr
        && this->maxConnections_ == nullptr && this->maxIOMBPS_ == nullptr && this->maxIOPS_ == nullptr && this->memoryClass_ == nullptr && this->referencePrice_ == nullptr
        && this->requestId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeClassDetailsResponseBody& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline DescribeClassDetailsResponseBody& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // classGroup Field Functions 
    bool hasClassGroup() const { return this->classGroup_ != nullptr;};
    void deleteClassGroup() { this->classGroup_ = nullptr;};
    inline string getClassGroup() const { DARABONBA_PTR_GET_DEFAULT(classGroup_, "") };
    inline DescribeClassDetailsResponseBody& setClassGroup(string classGroup) { DARABONBA_PTR_SET_VALUE(classGroup_, classGroup) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline DescribeClassDetailsResponseBody& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline DescribeClassDetailsResponseBody& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // instructionSetArch Field Functions 
    bool hasInstructionSetArch() const { return this->instructionSetArch_ != nullptr;};
    void deleteInstructionSetArch() { this->instructionSetArch_ = nullptr;};
    inline string getInstructionSetArch() const { DARABONBA_PTR_GET_DEFAULT(instructionSetArch_, "") };
    inline DescribeClassDetailsResponseBody& setInstructionSetArch(string instructionSetArch) { DARABONBA_PTR_SET_VALUE(instructionSetArch_, instructionSetArch) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline string getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, "") };
    inline DescribeClassDetailsResponseBody& setMaxConnections(string maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // maxIOMBPS Field Functions 
    bool hasMaxIOMBPS() const { return this->maxIOMBPS_ != nullptr;};
    void deleteMaxIOMBPS() { this->maxIOMBPS_ = nullptr;};
    inline string getMaxIOMBPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOMBPS_, "") };
    inline DescribeClassDetailsResponseBody& setMaxIOMBPS(string maxIOMBPS) { DARABONBA_PTR_SET_VALUE(maxIOMBPS_, maxIOMBPS) };


    // maxIOPS Field Functions 
    bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
    void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
    inline string getMaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, "") };
    inline DescribeClassDetailsResponseBody& setMaxIOPS(string maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


    // memoryClass Field Functions 
    bool hasMemoryClass() const { return this->memoryClass_ != nullptr;};
    void deleteMemoryClass() { this->memoryClass_ = nullptr;};
    inline string getMemoryClass() const { DARABONBA_PTR_GET_DEFAULT(memoryClass_, "") };
    inline DescribeClassDetailsResponseBody& setMemoryClass(string memoryClass) { DARABONBA_PTR_SET_VALUE(memoryClass_, memoryClass) };


    // referencePrice Field Functions 
    bool hasReferencePrice() const { return this->referencePrice_ != nullptr;};
    void deleteReferencePrice() { this->referencePrice_ = nullptr;};
    inline string getReferencePrice() const { DARABONBA_PTR_GET_DEFAULT(referencePrice_, "") };
    inline DescribeClassDetailsResponseBody& setReferencePrice(string referencePrice) { DARABONBA_PTR_SET_VALUE(referencePrice_, referencePrice) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClassDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The RDS edition of the instance. Valid values:
    // 
    // *   **Basic**: RDS Basic Edition
    // *   **HighAvailability**: RDS High-availability Edition
    // *   **AlwaysOn**: RDS Cluster Edition
    // *   **Finance**: RDS Enterprise Edition
    shared_ptr<string> category_ {};
    // The code of the instance type.
    shared_ptr<string> classCode_ {};
    // The instance family of the instance.
    shared_ptr<string> classGroup_ {};
    // The number of CPU cores that are supported by the instance type. Unit: cores.
    shared_ptr<string> cpu_ {};
    // The storage type of the instance. Valid values:
    // 
    // *   **local_ssd**: local SSDs
    // *   **cloud_ssd**: standard SSDs
    // *   **cloud_essd**: enhanced SSDs (ESSDs) of performance level 1 (PL1)
    // *   **cloud_essd2**: ESSDs of PL2
    // *   **cloud_essd3**: ESSD of PL3
    shared_ptr<string> DBInstanceStorageType_ {};
    // The architecture of the instance.
    shared_ptr<string> instructionSetArch_ {};
    // The maximum number of connections.
    shared_ptr<string> maxConnections_ {};
    // The maximum I/O bandwidth that is supported by the instance type. Unit: Mbit/s.
    shared_ptr<string> maxIOMBPS_ {};
    // The maximum input/output operations per second (IOPS) that is supported by the instance type. Unit: operations per second.
    shared_ptr<string> maxIOPS_ {};
    // The memory size. Unit: GB.
    shared_ptr<string> memoryClass_ {};
    // The price.
    // 
    // Unit: cents (US dollars).
    // 
    // > *   If you set the CommodityCode parameter to a value that indicates the pay-as-you-go billing method, the ReferencePrice parameter specifies the hourly fee that you must pay.
    // > *   If you set the CommodityCode parameter to a value that indicates the subscription billing method, the ReferencePrice parameter specifies the monthly fee that you must pay.
    shared_ptr<string> referencePrice_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
