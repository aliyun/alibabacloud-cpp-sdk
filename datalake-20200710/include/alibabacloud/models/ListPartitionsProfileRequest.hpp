// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARTITIONSPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPARTITIONSPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ListPartitionsProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPartitionsProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PartitionNames, partitionNames_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListPartitionsProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PartitionNames, partitionNames_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ListPartitionsProfileRequest() = default ;
    ListPartitionsProfileRequest(const ListPartitionsProfileRequest &) = default ;
    ListPartitionsProfileRequest(ListPartitionsProfileRequest &&) = default ;
    ListPartitionsProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPartitionsProfileRequest() = default ;
    ListPartitionsProfileRequest& operator=(const ListPartitionsProfileRequest &) = default ;
    ListPartitionsProfileRequest& operator=(ListPartitionsProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->partitionNames_ == nullptr && return this->tableName_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline ListPartitionsProfileRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListPartitionsProfileRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPartitionsProfileRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPartitionsProfileRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // partitionNames Field Functions 
    bool hasPartitionNames() const { return this->partitionNames_ != nullptr;};
    void deletePartitionNames() { this->partitionNames_ = nullptr;};
    inline const vector<string> & partitionNames() const { DARABONBA_PTR_GET_CONST(partitionNames_, vector<string>) };
    inline vector<string> partitionNames() { DARABONBA_PTR_GET(partitionNames_, vector<string>) };
    inline ListPartitionsProfileRequest& setPartitionNames(const vector<string> & partitionNames) { DARABONBA_PTR_SET_VALUE(partitionNames_, partitionNames) };
    inline ListPartitionsProfileRequest& setPartitionNames(vector<string> && partitionNames) { DARABONBA_PTR_SET_RVALUE(partitionNames_, partitionNames) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListPartitionsProfileRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The ID of the data directory. By default, the ID of the primary account is entered.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The name of the metadatabase.
    // 
    // This parameter is required.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Page number
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The names of partitions.
    std::shared_ptr<vector<string>> partitionNames_ = nullptr;
    // The name of the metadata table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
