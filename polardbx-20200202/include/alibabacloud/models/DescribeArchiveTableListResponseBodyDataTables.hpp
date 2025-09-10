// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEARCHIVETABLELISTRESPONSEBODYDATATABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEARCHIVETABLELISTRESPONSEBODYDATATABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeArchiveTableListResponseBodyDataTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeArchiveTableListResponseBodyDataTables& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveStatus, archiveStatus_);
      DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_TO_JSON(FileCount, fileCount_);
      DARABONBA_PTR_TO_JSON(LastSuccessArchiveTime, lastSuccessArchiveTime_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SpaceSize, spaceSize_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeArchiveTableListResponseBodyDataTables& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveStatus, archiveStatus_);
      DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_FROM_JSON(FileCount, fileCount_);
      DARABONBA_PTR_FROM_JSON(LastSuccessArchiveTime, lastSuccessArchiveTime_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SpaceSize, spaceSize_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeArchiveTableListResponseBodyDataTables() = default ;
    DescribeArchiveTableListResponseBodyDataTables(const DescribeArchiveTableListResponseBodyDataTables &) = default ;
    DescribeArchiveTableListResponseBodyDataTables(DescribeArchiveTableListResponseBodyDataTables &&) = default ;
    DescribeArchiveTableListResponseBodyDataTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeArchiveTableListResponseBodyDataTables() = default ;
    DescribeArchiveTableListResponseBodyDataTables& operator=(const DescribeArchiveTableListResponseBodyDataTables &) = default ;
    DescribeArchiveTableListResponseBodyDataTables& operator=(DescribeArchiveTableListResponseBodyDataTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->archiveStatus_ != nullptr
        && this->createdDate_ != nullptr && this->fileCount_ != nullptr && this->lastSuccessArchiveTime_ != nullptr && this->schemaName_ != nullptr && this->spaceSize_ != nullptr
        && this->tableName_ != nullptr; };
    // archiveStatus Field Functions 
    bool hasArchiveStatus() const { return this->archiveStatus_ != nullptr;};
    void deleteArchiveStatus() { this->archiveStatus_ = nullptr;};
    inline string archiveStatus() const { DARABONBA_PTR_GET_DEFAULT(archiveStatus_, "") };
    inline DescribeArchiveTableListResponseBodyDataTables& setArchiveStatus(string archiveStatus) { DARABONBA_PTR_SET_VALUE(archiveStatus_, archiveStatus) };


    // createdDate Field Functions 
    bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
    void deleteCreatedDate() { this->createdDate_ = nullptr;};
    inline int64_t createdDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, 0L) };
    inline DescribeArchiveTableListResponseBodyDataTables& setCreatedDate(int64_t createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


    // fileCount Field Functions 
    bool hasFileCount() const { return this->fileCount_ != nullptr;};
    void deleteFileCount() { this->fileCount_ = nullptr;};
    inline int32_t fileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0) };
    inline DescribeArchiveTableListResponseBodyDataTables& setFileCount(int32_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


    // lastSuccessArchiveTime Field Functions 
    bool hasLastSuccessArchiveTime() const { return this->lastSuccessArchiveTime_ != nullptr;};
    void deleteLastSuccessArchiveTime() { this->lastSuccessArchiveTime_ = nullptr;};
    inline int64_t lastSuccessArchiveTime() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessArchiveTime_, 0L) };
    inline DescribeArchiveTableListResponseBodyDataTables& setLastSuccessArchiveTime(int64_t lastSuccessArchiveTime) { DARABONBA_PTR_SET_VALUE(lastSuccessArchiveTime_, lastSuccessArchiveTime) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeArchiveTableListResponseBodyDataTables& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // spaceSize Field Functions 
    bool hasSpaceSize() const { return this->spaceSize_ != nullptr;};
    void deleteSpaceSize() { this->spaceSize_ = nullptr;};
    inline double spaceSize() const { DARABONBA_PTR_GET_DEFAULT(spaceSize_, 0.0) };
    inline DescribeArchiveTableListResponseBodyDataTables& setSpaceSize(double spaceSize) { DARABONBA_PTR_SET_VALUE(spaceSize_, spaceSize) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeArchiveTableListResponseBodyDataTables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<string> archiveStatus_ = nullptr;
    std::shared_ptr<int64_t> createdDate_ = nullptr;
    std::shared_ptr<int32_t> fileCount_ = nullptr;
    std::shared_ptr<int64_t> lastSuccessArchiveTime_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<double> spaceSize_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
