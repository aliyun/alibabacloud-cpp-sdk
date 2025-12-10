// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETETABLEVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETETABLEVERSIONSREQUEST_HPP_
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
  class BatchDeleteTableVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteTableVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(VersionIds, versionIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteTableVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(VersionIds, versionIds_);
    };
    BatchDeleteTableVersionsRequest() = default ;
    BatchDeleteTableVersionsRequest(const BatchDeleteTableVersionsRequest &) = default ;
    BatchDeleteTableVersionsRequest(BatchDeleteTableVersionsRequest &&) = default ;
    BatchDeleteTableVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteTableVersionsRequest() = default ;
    BatchDeleteTableVersionsRequest& operator=(const BatchDeleteTableVersionsRequest &) = default ;
    BatchDeleteTableVersionsRequest& operator=(BatchDeleteTableVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->tableName_ == nullptr && return this->versionIds_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline BatchDeleteTableVersionsRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline BatchDeleteTableVersionsRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline BatchDeleteTableVersionsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // versionIds Field Functions 
    bool hasVersionIds() const { return this->versionIds_ != nullptr;};
    void deleteVersionIds() { this->versionIds_ = nullptr;};
    inline const vector<int32_t> & versionIds() const { DARABONBA_PTR_GET_CONST(versionIds_, vector<int32_t>) };
    inline vector<int32_t> versionIds() { DARABONBA_PTR_GET(versionIds_, vector<int32_t>) };
    inline BatchDeleteTableVersionsRequest& setVersionIds(const vector<int32_t> & versionIds) { DARABONBA_PTR_SET_VALUE(versionIds_, versionIds) };
    inline BatchDeleteTableVersionsRequest& setVersionIds(vector<int32_t> && versionIds) { DARABONBA_PTR_SET_RVALUE(versionIds_, versionIds) };


  protected:
    // The ID of the data directory.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The name of a database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The name of the data table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The list of version numbers.
    std::shared_ptr<vector<int32_t>> versionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
