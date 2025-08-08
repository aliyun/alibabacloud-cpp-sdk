// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAILCONFIGDETAILIMPORTEXTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAILCONFIGDETAILIMPORTEXTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CsvFirstRowIsColumnDef, csvFirstRowIsColumnDef_);
      DARABONBA_PTR_TO_JSON(IgnoreError, ignoreError_);
      DARABONBA_PTR_TO_JSON(ImportMode, importMode_);
      DARABONBA_PTR_TO_JSON(InsertType, insertType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CsvFirstRowIsColumnDef, csvFirstRowIsColumnDef_);
      DARABONBA_PTR_FROM_JSON(IgnoreError, ignoreError_);
      DARABONBA_PTR_FROM_JSON(ImportMode, importMode_);
      DARABONBA_PTR_FROM_JSON(InsertType, insertType_);
    };
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig &&) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig& operator=(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig& operator=(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->csvFirstRowIsColumnDef_ != nullptr
        && this->ignoreError_ != nullptr && this->importMode_ != nullptr && this->insertType_ != nullptr; };
    // csvFirstRowIsColumnDef Field Functions 
    bool hasCsvFirstRowIsColumnDef() const { return this->csvFirstRowIsColumnDef_ != nullptr;};
    void deleteCsvFirstRowIsColumnDef() { this->csvFirstRowIsColumnDef_ = nullptr;};
    inline bool csvFirstRowIsColumnDef() const { DARABONBA_PTR_GET_DEFAULT(csvFirstRowIsColumnDef_, false) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig& setCsvFirstRowIsColumnDef(bool csvFirstRowIsColumnDef) { DARABONBA_PTR_SET_VALUE(csvFirstRowIsColumnDef_, csvFirstRowIsColumnDef) };


    // ignoreError Field Functions 
    bool hasIgnoreError() const { return this->ignoreError_ != nullptr;};
    void deleteIgnoreError() { this->ignoreError_ = nullptr;};
    inline bool ignoreError() const { DARABONBA_PTR_GET_DEFAULT(ignoreError_, false) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig& setIgnoreError(bool ignoreError) { DARABONBA_PTR_SET_VALUE(ignoreError_, ignoreError) };


    // importMode Field Functions 
    bool hasImportMode() const { return this->importMode_ != nullptr;};
    void deleteImportMode() { this->importMode_ = nullptr;};
    inline string importMode() const { DARABONBA_PTR_GET_DEFAULT(importMode_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig& setImportMode(string importMode) { DARABONBA_PTR_SET_VALUE(importMode_, importMode) };


    // insertType Field Functions 
    bool hasInsertType() const { return this->insertType_ != nullptr;};
    void deleteInsertType() { this->insertType_ = nullptr;};
    inline string insertType() const { DARABONBA_PTR_GET_DEFAULT(insertType_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig& setInsertType(string insertType) { DARABONBA_PTR_SET_VALUE(insertType_, insertType) };


  protected:
    // Indicates whether the first row of the CSV file contains field names. Valid values:
    // 
    // *   **true**: The first row in the CSV file contains field names.
    // *   **false**: The first row in the CSV file contains data.
    // 
    // >  This parameter is valid if the value of **FileType** is **CSV** or **EXCEL**.
    std::shared_ptr<bool> csvFirstRowIsColumnDef_ = nullptr;
    // Indicates whether an error that occurs is ignored. Valid values:
    // 
    // *   **true**: If an error occurs when SQL statements are being executed, DMS skips the current SQL statement and continues to execute subsequent SQL statements.
    // *   **false**: If an error occurs when SQL statements are being executed, DMS stops executing subsequent SQL statements.
    std::shared_ptr<bool> ignoreError_ = nullptr;
    // The import mode. Valid values:
    // 
    // *   **FAST_MODE**: fast mode. In the Execute step, the uploaded file is read and SQL statements are executed to import data to the specified destination database. Compared with the security mode, this mode can be used to import data in a less secure but more efficient manner.
    // *   **SAFE_MODE**: security mode. In the Precheck step, the uploaded file is parsed, and SQL statements or CSV file data is cached. In the Execute step, the cached SQL statements are read and executed to import data, or the cached CSV file data is read and imported to the specified destination database. Compared with the fast mode, this mode can be used to import data in a more secure but less efficient manner.
    std::shared_ptr<string> importMode_ = nullptr;
    // The mode in which data is to be imported to the destination table. Valid values:
    // 
    // *   **INSERT**: The database checks the primary key during data insertion. If the primary key is duplicated, an error is reported.
    // *   **INSERT_IGNORE**: If the imported data contains data records that are the same as those in the destination table, the new data records are ignored.
    // *   **REPLACE_INTO**: If the imported data contains a row that has the same value for the primary key or unique index as an existing row in the destination table, the system deletes the existing row and inserts the new row into the destination table.
    // 
    // >  This parameter is valid if the value of FileType is CSV or EXCEL.
    std::shared_ptr<string> insertType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
