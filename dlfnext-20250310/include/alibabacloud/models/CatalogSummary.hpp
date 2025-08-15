// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATALOGSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_CATALOGSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MoMValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class CatalogSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CatalogSummary& obj) { 
      DARABONBA_PTR_TO_JSON(apiVisitCountMonthly, apiVisitCountMonthly_);
      DARABONBA_PTR_TO_JSON(databaseCount, databaseCount_);
      DARABONBA_PTR_TO_JSON(fileAccessCountMonthly, fileAccessCountMonthly_);
      DARABONBA_PTR_TO_JSON(generatedDate, generatedDate_);
      DARABONBA_PTR_TO_JSON(objTypeArchiveSize, objTypeArchiveSize_);
      DARABONBA_PTR_TO_JSON(objTypeColdArchiveSize, objTypeColdArchiveSize_);
      DARABONBA_PTR_TO_JSON(objTypeIaSize, objTypeIaSize_);
      DARABONBA_PTR_TO_JSON(objTypeStandardSize, objTypeStandardSize_);
      DARABONBA_PTR_TO_JSON(partitionCount, partitionCount_);
      DARABONBA_PTR_TO_JSON(tableCount, tableCount_);
      DARABONBA_PTR_TO_JSON(throughputMonthly, throughputMonthly_);
      DARABONBA_PTR_TO_JSON(totalFileCount, totalFileCount_);
      DARABONBA_PTR_TO_JSON(totalFileSizeInBytes, totalFileSizeInBytes_);
    };
    friend void from_json(const Darabonba::Json& j, CatalogSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(apiVisitCountMonthly, apiVisitCountMonthly_);
      DARABONBA_PTR_FROM_JSON(databaseCount, databaseCount_);
      DARABONBA_PTR_FROM_JSON(fileAccessCountMonthly, fileAccessCountMonthly_);
      DARABONBA_PTR_FROM_JSON(generatedDate, generatedDate_);
      DARABONBA_PTR_FROM_JSON(objTypeArchiveSize, objTypeArchiveSize_);
      DARABONBA_PTR_FROM_JSON(objTypeColdArchiveSize, objTypeColdArchiveSize_);
      DARABONBA_PTR_FROM_JSON(objTypeIaSize, objTypeIaSize_);
      DARABONBA_PTR_FROM_JSON(objTypeStandardSize, objTypeStandardSize_);
      DARABONBA_PTR_FROM_JSON(partitionCount, partitionCount_);
      DARABONBA_PTR_FROM_JSON(tableCount, tableCount_);
      DARABONBA_PTR_FROM_JSON(throughputMonthly, throughputMonthly_);
      DARABONBA_PTR_FROM_JSON(totalFileCount, totalFileCount_);
      DARABONBA_PTR_FROM_JSON(totalFileSizeInBytes, totalFileSizeInBytes_);
    };
    CatalogSummary() = default ;
    CatalogSummary(const CatalogSummary &) = default ;
    CatalogSummary(CatalogSummary &&) = default ;
    CatalogSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CatalogSummary() = default ;
    CatalogSummary& operator=(const CatalogSummary &) = default ;
    CatalogSummary& operator=(CatalogSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiVisitCountMonthly_ != nullptr
        && this->databaseCount_ != nullptr && this->fileAccessCountMonthly_ != nullptr && this->generatedDate_ != nullptr && this->objTypeArchiveSize_ != nullptr && this->objTypeColdArchiveSize_ != nullptr
        && this->objTypeIaSize_ != nullptr && this->objTypeStandardSize_ != nullptr && this->partitionCount_ != nullptr && this->tableCount_ != nullptr && this->throughputMonthly_ != nullptr
        && this->totalFileCount_ != nullptr && this->totalFileSizeInBytes_ != nullptr; };
    // apiVisitCountMonthly Field Functions 
    bool hasApiVisitCountMonthly() const { return this->apiVisitCountMonthly_ != nullptr;};
    void deleteApiVisitCountMonthly() { this->apiVisitCountMonthly_ = nullptr;};
    inline int64_t apiVisitCountMonthly() const { DARABONBA_PTR_GET_DEFAULT(apiVisitCountMonthly_, 0L) };
    inline CatalogSummary& setApiVisitCountMonthly(int64_t apiVisitCountMonthly) { DARABONBA_PTR_SET_VALUE(apiVisitCountMonthly_, apiVisitCountMonthly) };


    // databaseCount Field Functions 
    bool hasDatabaseCount() const { return this->databaseCount_ != nullptr;};
    void deleteDatabaseCount() { this->databaseCount_ = nullptr;};
    inline const MoMValues & databaseCount() const { DARABONBA_PTR_GET_CONST(databaseCount_, MoMValues) };
    inline MoMValues databaseCount() { DARABONBA_PTR_GET(databaseCount_, MoMValues) };
    inline CatalogSummary& setDatabaseCount(const MoMValues & databaseCount) { DARABONBA_PTR_SET_VALUE(databaseCount_, databaseCount) };
    inline CatalogSummary& setDatabaseCount(MoMValues && databaseCount) { DARABONBA_PTR_SET_RVALUE(databaseCount_, databaseCount) };


    // fileAccessCountMonthly Field Functions 
    bool hasFileAccessCountMonthly() const { return this->fileAccessCountMonthly_ != nullptr;};
    void deleteFileAccessCountMonthly() { this->fileAccessCountMonthly_ = nullptr;};
    inline int64_t fileAccessCountMonthly() const { DARABONBA_PTR_GET_DEFAULT(fileAccessCountMonthly_, 0L) };
    inline CatalogSummary& setFileAccessCountMonthly(int64_t fileAccessCountMonthly) { DARABONBA_PTR_SET_VALUE(fileAccessCountMonthly_, fileAccessCountMonthly) };


    // generatedDate Field Functions 
    bool hasGeneratedDate() const { return this->generatedDate_ != nullptr;};
    void deleteGeneratedDate() { this->generatedDate_ = nullptr;};
    inline string generatedDate() const { DARABONBA_PTR_GET_DEFAULT(generatedDate_, "") };
    inline CatalogSummary& setGeneratedDate(string generatedDate) { DARABONBA_PTR_SET_VALUE(generatedDate_, generatedDate) };


    // objTypeArchiveSize Field Functions 
    bool hasObjTypeArchiveSize() const { return this->objTypeArchiveSize_ != nullptr;};
    void deleteObjTypeArchiveSize() { this->objTypeArchiveSize_ = nullptr;};
    inline int64_t objTypeArchiveSize() const { DARABONBA_PTR_GET_DEFAULT(objTypeArchiveSize_, 0L) };
    inline CatalogSummary& setObjTypeArchiveSize(int64_t objTypeArchiveSize) { DARABONBA_PTR_SET_VALUE(objTypeArchiveSize_, objTypeArchiveSize) };


    // objTypeColdArchiveSize Field Functions 
    bool hasObjTypeColdArchiveSize() const { return this->objTypeColdArchiveSize_ != nullptr;};
    void deleteObjTypeColdArchiveSize() { this->objTypeColdArchiveSize_ = nullptr;};
    inline int64_t objTypeColdArchiveSize() const { DARABONBA_PTR_GET_DEFAULT(objTypeColdArchiveSize_, 0L) };
    inline CatalogSummary& setObjTypeColdArchiveSize(int64_t objTypeColdArchiveSize) { DARABONBA_PTR_SET_VALUE(objTypeColdArchiveSize_, objTypeColdArchiveSize) };


    // objTypeIaSize Field Functions 
    bool hasObjTypeIaSize() const { return this->objTypeIaSize_ != nullptr;};
    void deleteObjTypeIaSize() { this->objTypeIaSize_ = nullptr;};
    inline int64_t objTypeIaSize() const { DARABONBA_PTR_GET_DEFAULT(objTypeIaSize_, 0L) };
    inline CatalogSummary& setObjTypeIaSize(int64_t objTypeIaSize) { DARABONBA_PTR_SET_VALUE(objTypeIaSize_, objTypeIaSize) };


    // objTypeStandardSize Field Functions 
    bool hasObjTypeStandardSize() const { return this->objTypeStandardSize_ != nullptr;};
    void deleteObjTypeStandardSize() { this->objTypeStandardSize_ = nullptr;};
    inline int64_t objTypeStandardSize() const { DARABONBA_PTR_GET_DEFAULT(objTypeStandardSize_, 0L) };
    inline CatalogSummary& setObjTypeStandardSize(int64_t objTypeStandardSize) { DARABONBA_PTR_SET_VALUE(objTypeStandardSize_, objTypeStandardSize) };


    // partitionCount Field Functions 
    bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
    void deletePartitionCount() { this->partitionCount_ = nullptr;};
    inline const MoMValues & partitionCount() const { DARABONBA_PTR_GET_CONST(partitionCount_, MoMValues) };
    inline MoMValues partitionCount() { DARABONBA_PTR_GET(partitionCount_, MoMValues) };
    inline CatalogSummary& setPartitionCount(const MoMValues & partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };
    inline CatalogSummary& setPartitionCount(MoMValues && partitionCount) { DARABONBA_PTR_SET_RVALUE(partitionCount_, partitionCount) };


    // tableCount Field Functions 
    bool hasTableCount() const { return this->tableCount_ != nullptr;};
    void deleteTableCount() { this->tableCount_ = nullptr;};
    inline const MoMValues & tableCount() const { DARABONBA_PTR_GET_CONST(tableCount_, MoMValues) };
    inline MoMValues tableCount() { DARABONBA_PTR_GET(tableCount_, MoMValues) };
    inline CatalogSummary& setTableCount(const MoMValues & tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };
    inline CatalogSummary& setTableCount(MoMValues && tableCount) { DARABONBA_PTR_SET_RVALUE(tableCount_, tableCount) };


    // throughputMonthly Field Functions 
    bool hasThroughputMonthly() const { return this->throughputMonthly_ != nullptr;};
    void deleteThroughputMonthly() { this->throughputMonthly_ = nullptr;};
    inline int64_t throughputMonthly() const { DARABONBA_PTR_GET_DEFAULT(throughputMonthly_, 0L) };
    inline CatalogSummary& setThroughputMonthly(int64_t throughputMonthly) { DARABONBA_PTR_SET_VALUE(throughputMonthly_, throughputMonthly) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline const MoMValues & totalFileCount() const { DARABONBA_PTR_GET_CONST(totalFileCount_, MoMValues) };
    inline MoMValues totalFileCount() { DARABONBA_PTR_GET(totalFileCount_, MoMValues) };
    inline CatalogSummary& setTotalFileCount(const MoMValues & totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };
    inline CatalogSummary& setTotalFileCount(MoMValues && totalFileCount) { DARABONBA_PTR_SET_RVALUE(totalFileCount_, totalFileCount) };


    // totalFileSizeInBytes Field Functions 
    bool hasTotalFileSizeInBytes() const { return this->totalFileSizeInBytes_ != nullptr;};
    void deleteTotalFileSizeInBytes() { this->totalFileSizeInBytes_ = nullptr;};
    inline const MoMValues & totalFileSizeInBytes() const { DARABONBA_PTR_GET_CONST(totalFileSizeInBytes_, MoMValues) };
    inline MoMValues totalFileSizeInBytes() { DARABONBA_PTR_GET(totalFileSizeInBytes_, MoMValues) };
    inline CatalogSummary& setTotalFileSizeInBytes(const MoMValues & totalFileSizeInBytes) { DARABONBA_PTR_SET_VALUE(totalFileSizeInBytes_, totalFileSizeInBytes) };
    inline CatalogSummary& setTotalFileSizeInBytes(MoMValues && totalFileSizeInBytes) { DARABONBA_PTR_SET_RVALUE(totalFileSizeInBytes_, totalFileSizeInBytes) };


  protected:
    std::shared_ptr<int64_t> apiVisitCountMonthly_ = nullptr;
    std::shared_ptr<MoMValues> databaseCount_ = nullptr;
    std::shared_ptr<int64_t> fileAccessCountMonthly_ = nullptr;
    // Update date of the statistics
    std::shared_ptr<string> generatedDate_ = nullptr;
    std::shared_ptr<int64_t> objTypeArchiveSize_ = nullptr;
    std::shared_ptr<int64_t> objTypeColdArchiveSize_ = nullptr;
    std::shared_ptr<int64_t> objTypeIaSize_ = nullptr;
    std::shared_ptr<int64_t> objTypeStandardSize_ = nullptr;
    std::shared_ptr<MoMValues> partitionCount_ = nullptr;
    std::shared_ptr<MoMValues> tableCount_ = nullptr;
    std::shared_ptr<int64_t> throughputMonthly_ = nullptr;
    std::shared_ptr<MoMValues> totalFileCount_ = nullptr;
    std::shared_ptr<MoMValues> totalFileSizeInBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
