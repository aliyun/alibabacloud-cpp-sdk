// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEPARTITIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEPARTITIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchDeletePartitionsRequestPartitionValueList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class BatchDeletePartitionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeletePartitionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(IfExists, ifExists_);
      DARABONBA_PTR_TO_JSON(PartitionValueList, partitionValueList_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeletePartitionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(IfExists, ifExists_);
      DARABONBA_PTR_FROM_JSON(PartitionValueList, partitionValueList_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    BatchDeletePartitionsRequest() = default ;
    BatchDeletePartitionsRequest(const BatchDeletePartitionsRequest &) = default ;
    BatchDeletePartitionsRequest(BatchDeletePartitionsRequest &&) = default ;
    BatchDeletePartitionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeletePartitionsRequest() = default ;
    BatchDeletePartitionsRequest& operator=(const BatchDeletePartitionsRequest &) = default ;
    BatchDeletePartitionsRequest& operator=(BatchDeletePartitionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->ifExists_ == nullptr && return this->partitionValueList_ == nullptr && return this->tableName_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline BatchDeletePartitionsRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline BatchDeletePartitionsRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // ifExists Field Functions 
    bool hasIfExists() const { return this->ifExists_ != nullptr;};
    void deleteIfExists() { this->ifExists_ = nullptr;};
    inline bool ifExists() const { DARABONBA_PTR_GET_DEFAULT(ifExists_, false) };
    inline BatchDeletePartitionsRequest& setIfExists(bool ifExists) { DARABONBA_PTR_SET_VALUE(ifExists_, ifExists) };


    // partitionValueList Field Functions 
    bool hasPartitionValueList() const { return this->partitionValueList_ != nullptr;};
    void deletePartitionValueList() { this->partitionValueList_ = nullptr;};
    inline const vector<BatchDeletePartitionsRequestPartitionValueList> & partitionValueList() const { DARABONBA_PTR_GET_CONST(partitionValueList_, vector<BatchDeletePartitionsRequestPartitionValueList>) };
    inline vector<BatchDeletePartitionsRequestPartitionValueList> partitionValueList() { DARABONBA_PTR_GET(partitionValueList_, vector<BatchDeletePartitionsRequestPartitionValueList>) };
    inline BatchDeletePartitionsRequest& setPartitionValueList(const vector<BatchDeletePartitionsRequestPartitionValueList> & partitionValueList) { DARABONBA_PTR_SET_VALUE(partitionValueList_, partitionValueList) };
    inline BatchDeletePartitionsRequest& setPartitionValueList(vector<BatchDeletePartitionsRequestPartitionValueList> && partitionValueList) { DARABONBA_PTR_SET_RVALUE(partitionValueList_, partitionValueList) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline BatchDeletePartitionsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Specifies whether to ignore errors if the partition that you want to delete does not exist.
    std::shared_ptr<bool> ifExists_ = nullptr;
    // The partition key column values of the partitions to be deleted.
    std::shared_ptr<vector<BatchDeletePartitionsRequestPartitionValueList>> partitionValueList_ = nullptr;
    // The name of the data table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
