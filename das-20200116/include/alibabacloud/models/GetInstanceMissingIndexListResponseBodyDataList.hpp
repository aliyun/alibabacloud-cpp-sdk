// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEMISSINGINDEXLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEMISSINGINDEXLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceMissingIndexListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceMissingIndexListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AvgTotalUserCost, avgTotalUserCost_);
      DARABONBA_PTR_TO_JSON(AvgUserImpact, avgUserImpact_);
      DARABONBA_PTR_TO_JSON(CreateIndex, createIndex_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(EqualityColumns, equalityColumns_);
      DARABONBA_PTR_TO_JSON(IncludedColumns, includedColumns_);
      DARABONBA_PTR_TO_JSON(IndexCount, indexCount_);
      DARABONBA_PTR_TO_JSON(InequalityColumns, inequalityColumns_);
      DARABONBA_PTR_TO_JSON(LastUserSeek, lastUserSeek_);
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
      DARABONBA_PTR_TO_JSON(ReservedPages, reservedPages_);
      DARABONBA_PTR_TO_JSON(ReservedSize, reservedSize_);
      DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SystemScans, systemScans_);
      DARABONBA_PTR_TO_JSON(SystemSeeks, systemSeeks_);
      DARABONBA_PTR_TO_JSON(UniqueCompiles, uniqueCompiles_);
      DARABONBA_PTR_TO_JSON(UserScans, userScans_);
      DARABONBA_PTR_TO_JSON(UserSeeks, userSeeks_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceMissingIndexListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgTotalUserCost, avgTotalUserCost_);
      DARABONBA_PTR_FROM_JSON(AvgUserImpact, avgUserImpact_);
      DARABONBA_PTR_FROM_JSON(CreateIndex, createIndex_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(EqualityColumns, equalityColumns_);
      DARABONBA_PTR_FROM_JSON(IncludedColumns, includedColumns_);
      DARABONBA_PTR_FROM_JSON(IndexCount, indexCount_);
      DARABONBA_PTR_FROM_JSON(InequalityColumns, inequalityColumns_);
      DARABONBA_PTR_FROM_JSON(LastUserSeek, lastUserSeek_);
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
      DARABONBA_PTR_FROM_JSON(ReservedPages, reservedPages_);
      DARABONBA_PTR_FROM_JSON(ReservedSize, reservedSize_);
      DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SystemScans, systemScans_);
      DARABONBA_PTR_FROM_JSON(SystemSeeks, systemSeeks_);
      DARABONBA_PTR_FROM_JSON(UniqueCompiles, uniqueCompiles_);
      DARABONBA_PTR_FROM_JSON(UserScans, userScans_);
      DARABONBA_PTR_FROM_JSON(UserSeeks, userSeeks_);
    };
    GetInstanceMissingIndexListResponseBodyDataList() = default ;
    GetInstanceMissingIndexListResponseBodyDataList(const GetInstanceMissingIndexListResponseBodyDataList &) = default ;
    GetInstanceMissingIndexListResponseBodyDataList(GetInstanceMissingIndexListResponseBodyDataList &&) = default ;
    GetInstanceMissingIndexListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceMissingIndexListResponseBodyDataList() = default ;
    GetInstanceMissingIndexListResponseBodyDataList& operator=(const GetInstanceMissingIndexListResponseBodyDataList &) = default ;
    GetInstanceMissingIndexListResponseBodyDataList& operator=(GetInstanceMissingIndexListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgTotalUserCost_ != nullptr
        && this->avgUserImpact_ != nullptr && this->createIndex_ != nullptr && this->databaseName_ != nullptr && this->equalityColumns_ != nullptr && this->includedColumns_ != nullptr
        && this->indexCount_ != nullptr && this->inequalityColumns_ != nullptr && this->lastUserSeek_ != nullptr && this->objectName_ != nullptr && this->reservedPages_ != nullptr
        && this->reservedSize_ != nullptr && this->rowCount_ != nullptr && this->schemaName_ != nullptr && this->systemScans_ != nullptr && this->systemSeeks_ != nullptr
        && this->uniqueCompiles_ != nullptr && this->userScans_ != nullptr && this->userSeeks_ != nullptr; };
    // avgTotalUserCost Field Functions 
    bool hasAvgTotalUserCost() const { return this->avgTotalUserCost_ != nullptr;};
    void deleteAvgTotalUserCost() { this->avgTotalUserCost_ = nullptr;};
    inline double avgTotalUserCost() const { DARABONBA_PTR_GET_DEFAULT(avgTotalUserCost_, 0.0) };
    inline GetInstanceMissingIndexListResponseBodyDataList& setAvgTotalUserCost(double avgTotalUserCost) { DARABONBA_PTR_SET_VALUE(avgTotalUserCost_, avgTotalUserCost) };


    // avgUserImpact Field Functions 
    bool hasAvgUserImpact() const { return this->avgUserImpact_ != nullptr;};
    void deleteAvgUserImpact() { this->avgUserImpact_ = nullptr;};
    inline double avgUserImpact() const { DARABONBA_PTR_GET_DEFAULT(avgUserImpact_, 0.0) };
    inline GetInstanceMissingIndexListResponseBodyDataList& setAvgUserImpact(double avgUserImpact) { DARABONBA_PTR_SET_VALUE(avgUserImpact_, avgUserImpact) };


    // createIndex Field Functions 
    bool hasCreateIndex() const { return this->createIndex_ != nullptr;};
    void deleteCreateIndex() { this->createIndex_ = nullptr;};
    inline string createIndex() const { DARABONBA_PTR_GET_DEFAULT(createIndex_, "") };
    inline GetInstanceMissingIndexListResponseBodyDataList& setCreateIndex(string createIndex) { DARABONBA_PTR_SET_VALUE(createIndex_, createIndex) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetInstanceMissingIndexListResponseBodyDataList& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // equalityColumns Field Functions 
    bool hasEqualityColumns() const { return this->equalityColumns_ != nullptr;};
    void deleteEqualityColumns() { this->equalityColumns_ = nullptr;};
    inline string equalityColumns() const { DARABONBA_PTR_GET_DEFAULT(equalityColumns_, "") };
    inline GetInstanceMissingIndexListResponseBodyDataList& setEqualityColumns(string equalityColumns) { DARABONBA_PTR_SET_VALUE(equalityColumns_, equalityColumns) };


    // includedColumns Field Functions 
    bool hasIncludedColumns() const { return this->includedColumns_ != nullptr;};
    void deleteIncludedColumns() { this->includedColumns_ = nullptr;};
    inline string includedColumns() const { DARABONBA_PTR_GET_DEFAULT(includedColumns_, "") };
    inline GetInstanceMissingIndexListResponseBodyDataList& setIncludedColumns(string includedColumns) { DARABONBA_PTR_SET_VALUE(includedColumns_, includedColumns) };


    // indexCount Field Functions 
    bool hasIndexCount() const { return this->indexCount_ != nullptr;};
    void deleteIndexCount() { this->indexCount_ = nullptr;};
    inline int64_t indexCount() const { DARABONBA_PTR_GET_DEFAULT(indexCount_, 0L) };
    inline GetInstanceMissingIndexListResponseBodyDataList& setIndexCount(int64_t indexCount) { DARABONBA_PTR_SET_VALUE(indexCount_, indexCount) };


    // inequalityColumns Field Functions 
    bool hasInequalityColumns() const { return this->inequalityColumns_ != nullptr;};
    void deleteInequalityColumns() { this->inequalityColumns_ = nullptr;};
    inline string inequalityColumns() const { DARABONBA_PTR_GET_DEFAULT(inequalityColumns_, "") };
    inline GetInstanceMissingIndexListResponseBodyDataList& setInequalityColumns(string inequalityColumns) { DARABONBA_PTR_SET_VALUE(inequalityColumns_, inequalityColumns) };


    // lastUserSeek Field Functions 
    bool hasLastUserSeek() const { return this->lastUserSeek_ != nullptr;};
    void deleteLastUserSeek() { this->lastUserSeek_ = nullptr;};
    inline int64_t lastUserSeek() const { DARABONBA_PTR_GET_DEFAULT(lastUserSeek_, 0L) };
    inline GetInstanceMissingIndexListResponseBodyDataList& setLastUserSeek(int64_t lastUserSeek) { DARABONBA_PTR_SET_VALUE(lastUserSeek_, lastUserSeek) };


    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string objectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline GetInstanceMissingIndexListResponseBodyDataList& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // reservedPages Field Functions 
    bool hasReservedPages() const { return this->reservedPages_ != nullptr;};
    void deleteReservedPages() { this->reservedPages_ = nullptr;};
    inline int64_t reservedPages() const { DARABONBA_PTR_GET_DEFAULT(reservedPages_, 0L) };
    inline GetInstanceMissingIndexListResponseBodyDataList& setReservedPages(int64_t reservedPages) { DARABONBA_PTR_SET_VALUE(reservedPages_, reservedPages) };


    // reservedSize Field Functions 
    bool hasReservedSize() const { return this->reservedSize_ != nullptr;};
    void deleteReservedSize() { this->reservedSize_ = nullptr;};
    inline double reservedSize() const { DARABONBA_PTR_GET_DEFAULT(reservedSize_, 0.0) };
    inline GetInstanceMissingIndexListResponseBodyDataList& setReservedSize(double reservedSize) { DARABONBA_PTR_SET_VALUE(reservedSize_, reservedSize) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int64_t rowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
    inline GetInstanceMissingIndexListResponseBodyDataList& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetInstanceMissingIndexListResponseBodyDataList& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // systemScans Field Functions 
    bool hasSystemScans() const { return this->systemScans_ != nullptr;};
    void deleteSystemScans() { this->systemScans_ = nullptr;};
    inline int64_t systemScans() const { DARABONBA_PTR_GET_DEFAULT(systemScans_, 0L) };
    inline GetInstanceMissingIndexListResponseBodyDataList& setSystemScans(int64_t systemScans) { DARABONBA_PTR_SET_VALUE(systemScans_, systemScans) };


    // systemSeeks Field Functions 
    bool hasSystemSeeks() const { return this->systemSeeks_ != nullptr;};
    void deleteSystemSeeks() { this->systemSeeks_ = nullptr;};
    inline int64_t systemSeeks() const { DARABONBA_PTR_GET_DEFAULT(systemSeeks_, 0L) };
    inline GetInstanceMissingIndexListResponseBodyDataList& setSystemSeeks(int64_t systemSeeks) { DARABONBA_PTR_SET_VALUE(systemSeeks_, systemSeeks) };


    // uniqueCompiles Field Functions 
    bool hasUniqueCompiles() const { return this->uniqueCompiles_ != nullptr;};
    void deleteUniqueCompiles() { this->uniqueCompiles_ = nullptr;};
    inline int64_t uniqueCompiles() const { DARABONBA_PTR_GET_DEFAULT(uniqueCompiles_, 0L) };
    inline GetInstanceMissingIndexListResponseBodyDataList& setUniqueCompiles(int64_t uniqueCompiles) { DARABONBA_PTR_SET_VALUE(uniqueCompiles_, uniqueCompiles) };


    // userScans Field Functions 
    bool hasUserScans() const { return this->userScans_ != nullptr;};
    void deleteUserScans() { this->userScans_ = nullptr;};
    inline int64_t userScans() const { DARABONBA_PTR_GET_DEFAULT(userScans_, 0L) };
    inline GetInstanceMissingIndexListResponseBodyDataList& setUserScans(int64_t userScans) { DARABONBA_PTR_SET_VALUE(userScans_, userScans) };


    // userSeeks Field Functions 
    bool hasUserSeeks() const { return this->userSeeks_ != nullptr;};
    void deleteUserSeeks() { this->userSeeks_ = nullptr;};
    inline int64_t userSeeks() const { DARABONBA_PTR_GET_DEFAULT(userSeeks_, 0L) };
    inline GetInstanceMissingIndexListResponseBodyDataList& setUserSeeks(int64_t userSeeks) { DARABONBA_PTR_SET_VALUE(userSeeks_, userSeeks) };


  protected:
    // The average cost savings.
    std::shared_ptr<double> avgTotalUserCost_ = nullptr;
    // The performance improvement, in percentage.
    std::shared_ptr<double> avgUserImpact_ = nullptr;
    // The statement used to create the missing indexes.
    std::shared_ptr<string> createIndex_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The index columns included in the equal operation.
    std::shared_ptr<string> equalityColumns_ = nullptr;
    // The columns on which indexes are missing.
    std::shared_ptr<string> includedColumns_ = nullptr;
    // The number of indexes.
    std::shared_ptr<int64_t> indexCount_ = nullptr;
    // The index columns included in the not equal operation.
    std::shared_ptr<string> inequalityColumns_ = nullptr;
    // The last seek time of a user.
    std::shared_ptr<int64_t> lastUserSeek_ = nullptr;
    // The object name.
    std::shared_ptr<string> objectName_ = nullptr;
    // The total number of returned pages.
    std::shared_ptr<int64_t> reservedPages_ = nullptr;
    // The table size.
    std::shared_ptr<double> reservedSize_ = nullptr;
    // The number of table rows.
    std::shared_ptr<int64_t> rowCount_ = nullptr;
    // The schema name.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The number of scans.
    std::shared_ptr<int64_t> systemScans_ = nullptr;
    // The number of seeks.
    std::shared_ptr<int64_t> systemSeeks_ = nullptr;
    // The number of compilations.
    std::shared_ptr<int64_t> uniqueCompiles_ = nullptr;
    // The number of scans performed by users.
    std::shared_ptr<int64_t> userScans_ = nullptr;
    // The number of seeks performed by users.
    std::shared_ptr<int64_t> userSeeks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
